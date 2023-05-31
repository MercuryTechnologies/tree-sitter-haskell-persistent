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

  // Parsing type names and field names is based on tree-sitter-haskell, the rest is based on the parsing from Database.Persist.Quasi.Internal
  rules: {
    quasi_quotation: $ => repeat($._entity_definition),

    _entity_definition: $ => seq(
      $._entity_header,
      repeat($._entity_line_definition),
      repeat($._entity_derives)
    ),

    _newline: _ => /\n|\r|\f/,

    is_sum_marker: _ => '+',

    // from tree-sitter-haskell, varid_pattern
    _varid: _ => /[_\p{Ll}](\w|')*#?/u,

    // from tree-sitter-haskell, _conid
    _conid: _ => /[\p{Lu}\p{Lt}](\w|')*/u,

    _doc_comment: _ => token(seq('-- | ', /.*/)),

    comment: $ => choice(
      $._doc_comment,
      token(seq('--', /.*/ )),
      token(seq('#', /.*/)),
    ),

    _entity_name: $ => alias($._conid, $.identifier),

    field_name: $ => alias($._varid, $.identifier),

    _haskell_constraint_name: $ => alias($._conid, $.identifier),

    _entity_header: $ => seq(
      optional($.is_sum_marker),
      $._entity_name,
      $._entity_attributes,
      $._newline
    ),

    _entity_line_definition: $ => seq(
      choice(
        $._entity_key,
        $._field_definition,
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
      $.field_type,
      $._key_attributes
    ),

    _natural_key: $ => seq(
      'Primary',
      repeat1($.field_name),
      $._key_attributes
    ),

    _key_attributes: $ => $._attributes,

    _entity_attributes: $ => $._attributes,

    _field_attributes: $ => $._attributes,

    _attributes: _ => /sql=\w+/,

    _field_definition: $ => seq(
      optional($._field_strictness_prefix),
      alias($._varid, $.identifier),
      $.field_type,
      $._field_attributes
    ),

    _field_strictness_prefix: _ => /[~!]/,

    field_type: $ => choice(
      $._conid,
      seq('[', $._conid, ']')
    ),

    _cascade_action: _ => /OnDelete\w+|OnUpdate\w+/,

    _cascade_actions: $ => repeat1($._cascade_action),

    // Persistent has yet one more style of unique declaration that starts with a whole word "Unique". It has no examples or tests, and github code search finds no examples of it either.
    _unique_constraint: $ => seq(
      $._haskell_constraint_name,
      repeat1($.field_name),
      $._unique_constraint_attributes
    ),

    _unique_constraint_attributes: $ => $._attributes,

    // TODO: varid allows unicode. Should constraint name allow it too?
    _constraint_name: $ => $._varid,

    _foreign_constraint: $ => seq(
      'Foreign',
      $._entity_name,
      optional($._cascade_actions),
      $._constraint_name,
      repeat1($.field_name),
      optional(seq(
        'References',
        repeat1($.field_name)
      ))
    ),

    _class_name: $ => alias($._conid, $.identifier),

    _entity_derives: $ => seq(
      'deriving',
      repeat1($._class_name)
    )
  }
});
