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
    $._string_start,
    $._string_content,
    $._string_end,
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

    // from tree-sitter-haskell, varid_pattern
    _varid: _ => /[_\p{Ll}](\w|')*#?/u,

    variable: $ => $._varid,

    // from tree-sitter-haskell, _conid
    _conid: _ => /[\p{Lu}\p{Lt}](\w|')*/u,

    _doc_comment: _ => token(seq('-- | ', /.*/)),

    comment: $ => choice(
      $._doc_comment,
      token(seq('--', /.*/ )),
      token(seq('#', /.*/)),
    ),

    _entity_name: $ => alias($._conid, $.identifier),

    _field_name: $ => $.variable,

    _haskell_constraint_name: $ => alias($._conid, $.identifier),

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
        $._unique_constraint,
        $._foreign_constraint,
      ),
      $._newline
    ),

    _entity_key: $ => choice(
      $._surrogate_key,
      $._natural_key
    ),

    _surrogate_key: $ => seq(
      'Id',
      $._field_type,
      repeat($._key_attribute)
    ),

    _natural_key: $ => seq(
      'Primary',
      repeat1($._field_name),
      repeat($._key_attribute)
    ),

    _key_attribute: $ => $._attribute,

    _entity_attribute: $ => $._attribute,

    _field_attribute: $ => $._attribute,

    // TODO: see tokenize in Database.Persist.Quasi.Internal
    _attribute: _ => /sql=\w+/,

    field_definition: $ => seq(
      optional($._field_strictness_prefix),
      field('name', $._field_name),
      $._field_type,
      repeat($._field_attribute)
    ),

    _field_strictness_prefix: _ => /[~!]/,

    _field_type: $ => $.type,

    // TODO: separate list from plain type constructor
    type: $ => choice(
      $._conid,
      seq('[', $._conid, ']')
    ),

    _cascade_action: _ => /OnDelete\w+|OnUpdate\w+/,

    _cascade_actions: $ => repeat1($._cascade_action),

    // Persistent has yet one more style of unique declaration that starts with a whole word "Unique". It has no examples or tests, and github code search finds no examples of it either.
    _unique_constraint: $ => seq(
      $._haskell_constraint_name,
      repeat1($._field_name),
      repeat($._unique_constraint_attribute)
    ),

    _unique_constraint_attribute: $ => $._attribute,

    // TODO: varid allows unicode. Should constraint name allow it too?
    _constraint_name: $ => $._varid,

    _foreign_constraint: $ => seq(
      'Foreign',
      $._entity_name,
      optional($._cascade_actions),
      $._constraint_name,
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
    )
  }
});
