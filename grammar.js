const basic = require('./grammar/basic.js')
const id = require('./grammar/id.js')
const import_ = require('./grammar/import.js')
const module_ = require('./grammar/module.js')
const type = require('./grammar/type.js')

module.exports = grammar({
  name: 'haskell_persistent',

  /**
   * These rules may occur anywhere in the grammar and don't have to be specified.
   */
  extras: $ => [
    /\p{Zs}/,
    /\n/,
    /\r/,
    $.comment
  ],

  externals: $ => [
    $._newline,
    $._indent,
    $._dedent,
  ],

  precedences: _ => [
    [
      'context-empty',
      'con_unit',
    ],
    [
      'infix-type',
      'btype',
    ],
    [
      'function-type',
      'type',
    ],
  ],

  inline: $ => [
    $._number,
    $._stringly,
    $._qvarid,
    $._operator_minus,
    $._qvarsym,
    $._qvarsym_nominus,
    $._var,
    $._qvar,
    $._tyvar,
    $._qconid,
    $._qconsym,
    $._con,
    $._conop,
    $._qconop,
    $._op,
    $._qop_nominus,
    $._gcon_literal,
    $._gcon,
    $._tyconid,
    $._qtyconid,
    $._qtyconsym,
    $._qtycon,
    $._gtycon,
    $._simple_tycon,
    $._simple_tyconop,
    $._simple_qtyconop,
    $._quantifiers,
    $._tyfam_pat_prefix,
    $._tyfam_pat_infix,
    $._qualifying_module,
  ],

  conflicts: $ => [
    /**
     * This could be done with the second named precedence further up, but it somehow overrides symbolic infix
     * constructors.
     * Needs more investigation.
     */
    [$._type_infix, $.type_infix],

    /**
     * Optional context for a data/newtype decl with infix types:
     *
     * data a ~ b => A a b
     * data a + b
     */
    [$.type_name, $._simpletype_infix],

    /**
     * Same as above, but with regular types:
     *
     * data A a b
     * data C a b => A a b
     * data C Int a => A a
     * data B Int ~ B a => A a
     */
    [$.type_name, $._simpletype],
    [$._atype, $.constraint],

    /**
     * Constraints and parenthesized types.
     *
     * data (A a) => A
     * data (A a) %% A => A
     *
     * After the `a`, the closing paren is ambiguous.
     */
    [$._type_infix, $.constraint],

    /**
     * Ambiguity between symbolic and regular type family equations.
     */
    [$.type_name, $.tyfam_pat],

    /**
     * Same as `exp_apply`, but for types.
     */
    [$.type_apply, $._btype],
    [$.type_apply],

    /**
     * Implicit parameters have slightly weird restrictions.
     */
    [$._type_or_implicit, $._context_constraints],

    /**
     * General kind signatures cause `(a :: k)` to be ambiguous.
     * This problem might be solvable if `type.js` were to be refactored.
     */
    [$.annotated_type_variable, $.type_name],

  ],
  
  // Parsing type names and field names is based on tree-sitter-haskell, the rest is based on the parsing from Database.Persist.Quasi.Internal
  rules: {
    quasi_quotation: $ => repeat($.entity_definition),

    entity_definition: $ => seq(
      $._entity_header,
      optional(seq($._indent, $.entity_body, $._dedent))
    ),

    entity_body: $ => choice(
      seq(
        repeat1($._entity_line_definition),
        repeat($.entity_derives),
      ),
      seq(
        repeat($._entity_line_definition),
        repeat1($.entity_derives),
      ),
    ),

    is_sum_marker: _ => '+',

    _doc_comment: _ => token(seq('-- | ', /.*/)),

    comment: $ => choice(
      $._doc_comment,
      token(seq('--', /.*/ )),
      token(seq('#', /.*/)),
    ),

    // Extra definitions that the haskell grammar depends on. In tree-sitter-haskell they are external and are defined in scanner.c.
    comma: _ => ',',
    _dot: _ => '.',
    // See https://www.haskell.org/onlinereport/haskell2010/haskellch2.html#x7-180002.4. The definitions below ignore the reserved operators for simplicity.
    _varsym: _ => /[!#$%&⋆+./<=>?@\|^~:]+/,
    _consym: _ => /:[!#$%&⋆+./<=>?@\|^~:-]+/,
    _tyconsym: _ => /[!#$%&⋆+./<=>?@\|^~:-]+/,
    
    _entity_name: $ => $.type_name,

    _field_name: $ => $.variable,

    _haskell_constraint_name: $ => $.constructor,

    _entity_header: $ => seq(
      optional($.is_sum_marker),
      field('name', $._entity_name),
      repeat($._entity_attribute),
      $._newline
    ),

    _entity_line_definition: $ => seq(
      choice(
        $._entity_key,
        $.field_definition,
        $.unique_constraint,
        $.foreign_constraint,
      ),
      $._newline
    ),

    _entity_key: $ => choice(
      $.surrogate_key,
      $.natural_key
    ),

    surrogate_key: $ => seq(
      'Id',
      field('type', $._type),
      repeat($._key_attribute)
    ),

    natural_key: $ => seq(
      'Primary',
      repeat1($._field_name),
      repeat($._key_attribute)
    ),

    _key_attribute: $ => $._attribute,

    _entity_attribute: $ => $._attribute,

    _field_attribute: $ => $._attribute,

    // TODO: see tokenize in Database.Persist.Quasi.Internal
    _attribute: _ => 'default=uuid_generate_v1mc()',

    field_definition: $ => seq(
      optional($._field_strictness_prefix),
      field('name', $._field_name),
      field('type', $._type),
      repeat($._field_attribute)
    ),

    _field_strictness_prefix: _ => /[~!]/,

    _cascade_action: _ => /OnDelete\w+|OnUpdate\w+/,

    _cascade_actions: $ => repeat1($._cascade_action),

    // Persistent has yet one more style of unique declaration that starts with a whole word "Unique". It has no examples or tests, and github code search finds no examples of it either.
    unique_constraint: $ => seq(
      $._haskell_constraint_name,
      repeat1($._field_name),
      repeat($._unique_constraint_attribute)
    ),

    _unique_constraint_attribute: $ => $._attribute,

    _sql_constraint_name: _ => /[a-z][\w]+/,

    foreign_constraint: $ => seq(
      'Foreign',
      $._entity_name,
      optional($._cascade_actions),
      $._sql_constraint_name,
      repeat1($._field_name),
      optional(seq(
        'References',
        repeat1($._field_name)
      ))
    ),

    _class_name: $ => alias($._conid, $.type),

    entity_derives: $ => seq(
      'deriving',
      repeat1($._class_name)
    ),

    ...basic,
    ...id,
    ...import_,
    ...module_,
    ...type
  }
});
