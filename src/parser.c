#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 165
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 1
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 10

enum {
  sym_is_sum_marker = 1,
  sym__varid = 2,
  sym__conid = 3,
  sym__doc_comment = 4,
  aux_sym_comment_token1 = 5,
  aux_sym_comment_token2 = 6,
  anon_sym_Id = 7,
  anon_sym_Primary = 8,
  sym__attribute = 9,
  sym__field_strictness_prefix = 10,
  sym__cascade_action = 11,
  anon_sym_Foreign = 12,
  anon_sym_References = 13,
  anon_sym_deriving = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_LBRACK = 17,
  anon_sym_RBRACK = 18,
  anon_sym_COMMA = 19,
  aux_sym_char_token1 = 20,
  aux_sym_char_token2 = 21,
  anon_sym_DQUOTE = 22,
  aux_sym_string_token1 = 23,
  aux_sym_string_token2 = 24,
  aux_sym_string_token3 = 25,
  sym__number = 26,
  anon_sym_SQUOTE = 27,
  sym__newline = 28,
  sym__indent = 29,
  sym__dedent = 30,
  sym__string_start = 31,
  sym__string_content = 32,
  sym__string_end = 33,
  sym_quasi_quotation = 34,
  sym_entity_definition = 35,
  sym_entity_body = 36,
  sym_variable = 37,
  sym_comment = 38,
  sym__entity_name = 39,
  sym__field_name = 40,
  sym__haskell_constraint_name = 41,
  sym__entity_header = 42,
  sym__entity_line_definition = 43,
  sym__entity_key = 44,
  sym__surrogate_key = 45,
  sym__natural_key = 46,
  sym__key_attribute = 47,
  sym__entity_attribute = 48,
  sym__field_attribute = 49,
  sym_field_definition = 50,
  aux_sym__cascade_actions = 51,
  sym__unique_constraint = 52,
  sym__unique_constraint_attribute = 53,
  sym__constraint_name = 54,
  sym__foreign_constraint = 55,
  sym__class_name = 56,
  sym_entity_derives = 57,
  sym__atype = 58,
  sym_type_apply = 59,
  sym__btype = 60,
  sym__type = 61,
  sym__type_promotable_literal = 62,
  sym_type_literal = 63,
  sym__literal = 64,
  sym__stringly = 65,
  sym_con_unit = 66,
  sym_con_list = 67,
  sym_con_tuple = 68,
  sym_char = 69,
  sym_string = 70,
  sym__type_promoted_literal = 71,
  sym__type_literal = 72,
  sym_type_name = 73,
  sym_type_list = 74,
  sym_type_tuple = 75,
  aux_sym_quasi_quotation_repeat1 = 76,
  aux_sym_entity_body_repeat1 = 77,
  aux_sym_entity_body_repeat2 = 78,
  aux_sym__entity_header_repeat1 = 79,
  aux_sym__surrogate_key_repeat1 = 80,
  aux_sym__natural_key_repeat1 = 81,
  aux_sym_field_definition_repeat1 = 82,
  aux_sym__unique_constraint_repeat1 = 83,
  aux_sym_entity_derives_repeat1 = 84,
  aux_sym_type_apply_repeat1 = 85,
  aux_sym_con_tuple_repeat1 = 86,
  aux_sym_string_repeat1 = 87,
  aux_sym_type_tuple_repeat1 = 88,
  alias_sym_type = 89,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_is_sum_marker] = "is_sum_marker",
  [sym__varid] = "_varid",
  [sym__conid] = "_conid",
  [sym__doc_comment] = "_doc_comment",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_Id] = "Id",
  [anon_sym_Primary] = "Primary",
  [sym__attribute] = "_attribute",
  [sym__field_strictness_prefix] = "_field_strictness_prefix",
  [sym__cascade_action] = "_cascade_action",
  [anon_sym_Foreign] = "Foreign",
  [anon_sym_References] = "References",
  [anon_sym_deriving] = "deriving",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [aux_sym_char_token1] = "char_token1",
  [aux_sym_char_token2] = "char_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym_string_token3] = "string_token3",
  [sym__number] = "_number",
  [anon_sym_SQUOTE] = "'",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__string_start] = "_string_start",
  [sym__string_content] = "_string_content",
  [sym__string_end] = "_string_end",
  [sym_quasi_quotation] = "quasi_quotation",
  [sym_entity_definition] = "entity_definition",
  [sym_entity_body] = "entity_body",
  [sym_variable] = "variable",
  [sym_comment] = "comment",
  [sym__entity_name] = "_entity_name",
  [sym__field_name] = "_field_name",
  [sym__haskell_constraint_name] = "_haskell_constraint_name",
  [sym__entity_header] = "_entity_header",
  [sym__entity_line_definition] = "_entity_line_definition",
  [sym__entity_key] = "_entity_key",
  [sym__surrogate_key] = "_surrogate_key",
  [sym__natural_key] = "_natural_key",
  [sym__key_attribute] = "_key_attribute",
  [sym__entity_attribute] = "_entity_attribute",
  [sym__field_attribute] = "_field_attribute",
  [sym_field_definition] = "field_definition",
  [aux_sym__cascade_actions] = "_cascade_actions",
  [sym__unique_constraint] = "_unique_constraint",
  [sym__unique_constraint_attribute] = "_unique_constraint_attribute",
  [sym__constraint_name] = "_constraint_name",
  [sym__foreign_constraint] = "_foreign_constraint",
  [sym__class_name] = "_class_name",
  [sym_entity_derives] = "entity_derives",
  [sym__atype] = "_atype",
  [sym_type_apply] = "type_apply",
  [sym__btype] = "_btype",
  [sym__type] = "_type",
  [sym__type_promotable_literal] = "_type_promotable_literal",
  [sym_type_literal] = "type_literal",
  [sym__literal] = "_literal",
  [sym__stringly] = "_stringly",
  [sym_con_unit] = "con_unit",
  [sym_con_list] = "con_list",
  [sym_con_tuple] = "con_tuple",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym__type_promoted_literal] = "promoted",
  [sym__type_literal] = "_type_literal",
  [sym_type_name] = "type_name",
  [sym_type_list] = "type_list",
  [sym_type_tuple] = "type_tuple",
  [aux_sym_quasi_quotation_repeat1] = "quasi_quotation_repeat1",
  [aux_sym_entity_body_repeat1] = "entity_body_repeat1",
  [aux_sym_entity_body_repeat2] = "entity_body_repeat2",
  [aux_sym__entity_header_repeat1] = "_entity_header_repeat1",
  [aux_sym__surrogate_key_repeat1] = "_surrogate_key_repeat1",
  [aux_sym__natural_key_repeat1] = "_natural_key_repeat1",
  [aux_sym_field_definition_repeat1] = "field_definition_repeat1",
  [aux_sym__unique_constraint_repeat1] = "_unique_constraint_repeat1",
  [aux_sym_entity_derives_repeat1] = "entity_derives_repeat1",
  [aux_sym_type_apply_repeat1] = "type_apply_repeat1",
  [aux_sym_con_tuple_repeat1] = "con_tuple_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_type_tuple_repeat1] = "type_tuple_repeat1",
  [alias_sym_type] = "type",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_is_sum_marker] = sym_is_sum_marker,
  [sym__varid] = sym__varid,
  [sym__conid] = sym__conid,
  [sym__doc_comment] = sym__doc_comment,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_Id] = anon_sym_Id,
  [anon_sym_Primary] = anon_sym_Primary,
  [sym__attribute] = sym__attribute,
  [sym__field_strictness_prefix] = sym__field_strictness_prefix,
  [sym__cascade_action] = sym__cascade_action,
  [anon_sym_Foreign] = anon_sym_Foreign,
  [anon_sym_References] = anon_sym_References,
  [anon_sym_deriving] = anon_sym_deriving,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [aux_sym_char_token2] = aux_sym_char_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [sym__number] = sym__number,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__string_start] = sym__string_start,
  [sym__string_content] = sym__string_content,
  [sym__string_end] = sym__string_end,
  [sym_quasi_quotation] = sym_quasi_quotation,
  [sym_entity_definition] = sym_entity_definition,
  [sym_entity_body] = sym_entity_body,
  [sym_variable] = sym_variable,
  [sym_comment] = sym_comment,
  [sym__entity_name] = sym__entity_name,
  [sym__field_name] = sym__field_name,
  [sym__haskell_constraint_name] = sym__haskell_constraint_name,
  [sym__entity_header] = sym__entity_header,
  [sym__entity_line_definition] = sym__entity_line_definition,
  [sym__entity_key] = sym__entity_key,
  [sym__surrogate_key] = sym__surrogate_key,
  [sym__natural_key] = sym__natural_key,
  [sym__key_attribute] = sym__key_attribute,
  [sym__entity_attribute] = sym__entity_attribute,
  [sym__field_attribute] = sym__field_attribute,
  [sym_field_definition] = sym_field_definition,
  [aux_sym__cascade_actions] = aux_sym__cascade_actions,
  [sym__unique_constraint] = sym__unique_constraint,
  [sym__unique_constraint_attribute] = sym__unique_constraint_attribute,
  [sym__constraint_name] = sym__constraint_name,
  [sym__foreign_constraint] = sym__foreign_constraint,
  [sym__class_name] = sym__class_name,
  [sym_entity_derives] = sym_entity_derives,
  [sym__atype] = sym__atype,
  [sym_type_apply] = sym_type_apply,
  [sym__btype] = sym__btype,
  [sym__type] = sym__type,
  [sym__type_promotable_literal] = sym__type_promotable_literal,
  [sym_type_literal] = sym_type_literal,
  [sym__literal] = sym__literal,
  [sym__stringly] = sym__stringly,
  [sym_con_unit] = sym_con_unit,
  [sym_con_list] = sym_con_list,
  [sym_con_tuple] = sym_con_tuple,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [sym__type_promoted_literal] = sym__type_promoted_literal,
  [sym__type_literal] = sym__type_literal,
  [sym_type_name] = sym_type_name,
  [sym_type_list] = sym_type_list,
  [sym_type_tuple] = sym_type_tuple,
  [aux_sym_quasi_quotation_repeat1] = aux_sym_quasi_quotation_repeat1,
  [aux_sym_entity_body_repeat1] = aux_sym_entity_body_repeat1,
  [aux_sym_entity_body_repeat2] = aux_sym_entity_body_repeat2,
  [aux_sym__entity_header_repeat1] = aux_sym__entity_header_repeat1,
  [aux_sym__surrogate_key_repeat1] = aux_sym__surrogate_key_repeat1,
  [aux_sym__natural_key_repeat1] = aux_sym__natural_key_repeat1,
  [aux_sym_field_definition_repeat1] = aux_sym_field_definition_repeat1,
  [aux_sym__unique_constraint_repeat1] = aux_sym__unique_constraint_repeat1,
  [aux_sym_entity_derives_repeat1] = aux_sym_entity_derives_repeat1,
  [aux_sym_type_apply_repeat1] = aux_sym_type_apply_repeat1,
  [aux_sym_con_tuple_repeat1] = aux_sym_con_tuple_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_type_tuple_repeat1] = aux_sym_type_tuple_repeat1,
  [alias_sym_type] = alias_sym_type,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_is_sum_marker] = {
    .visible = true,
    .named = true,
  },
  [sym__varid] = {
    .visible = false,
    .named = true,
  },
  [sym__conid] = {
    .visible = false,
    .named = true,
  },
  [sym__doc_comment] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Primary] = {
    .visible = true,
    .named = false,
  },
  [sym__attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__field_strictness_prefix] = {
    .visible = false,
    .named = true,
  },
  [sym__cascade_action] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Foreign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_References] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deriving] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__string_start] = {
    .visible = false,
    .named = true,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym__string_end] = {
    .visible = false,
    .named = true,
  },
  [sym_quasi_quotation] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_body] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__entity_name] = {
    .visible = false,
    .named = true,
  },
  [sym__field_name] = {
    .visible = false,
    .named = true,
  },
  [sym__haskell_constraint_name] = {
    .visible = false,
    .named = true,
  },
  [sym__entity_header] = {
    .visible = false,
    .named = true,
  },
  [sym__entity_line_definition] = {
    .visible = false,
    .named = true,
  },
  [sym__entity_key] = {
    .visible = false,
    .named = true,
  },
  [sym__surrogate_key] = {
    .visible = false,
    .named = true,
  },
  [sym__natural_key] = {
    .visible = false,
    .named = true,
  },
  [sym__key_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__entity_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__field_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_field_definition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__cascade_actions] = {
    .visible = false,
    .named = false,
  },
  [sym__unique_constraint] = {
    .visible = false,
    .named = true,
  },
  [sym__unique_constraint_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__constraint_name] = {
    .visible = false,
    .named = true,
  },
  [sym__foreign_constraint] = {
    .visible = false,
    .named = true,
  },
  [sym__class_name] = {
    .visible = false,
    .named = true,
  },
  [sym_entity_derives] = {
    .visible = true,
    .named = true,
  },
  [sym__atype] = {
    .visible = false,
    .named = true,
  },
  [sym_type_apply] = {
    .visible = true,
    .named = true,
  },
  [sym__btype] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym__type_promotable_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_type_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__stringly] = {
    .visible = false,
    .named = true,
  },
  [sym_con_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_con_list] = {
    .visible = true,
    .named = true,
  },
  [sym_con_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__type_promoted_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__type_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym_type_tuple] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_quasi_quotation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entity_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entity_body_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__entity_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__surrogate_key_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__natural_key_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__unique_constraint_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entity_derives_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_apply_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_con_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_type] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_name = 1,
  field_type = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [6] = {.index = 4, .length = 1},
  [7] = {.index = 5, .length = 2},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0, .inherited = true},
  [1] =
    {field_name, 0},
  [2] =
    {field_name, 1},
  [3] =
    {field_type, 0, .inherited = true},
  [4] =
    {field_type, 1},
  [5] =
    {field_name, 0},
    {field_type, 1},
  [7] =
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [9] =
    {field_name, 1},
    {field_type, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [0] = alias_sym_type,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_type_name, 2,
    sym_type_name,
    alias_sym_type,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 11,
  [12] = 12,
  [13] = 7,
  [14] = 9,
  [15] = 6,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 35,
  [42] = 33,
  [43] = 27,
  [44] = 23,
  [45] = 39,
  [46] = 29,
  [47] = 38,
  [48] = 25,
  [49] = 26,
  [50] = 28,
  [51] = 40,
  [52] = 37,
  [53] = 36,
  [54] = 24,
  [55] = 32,
  [56] = 31,
  [57] = 34,
  [58] = 30,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 76,
  [79] = 77,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 63,
  [100] = 67,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 117,
  [127] = 127,
  [128] = 122,
  [129] = 129,
  [130] = 125,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 134,
  [141] = 137,
  [142] = 116,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 26,
  [148] = 148,
  [149] = 149,
  [150] = 148,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 155,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
};

static inline bool sym__varid_character_set_1(int32_t c) {
  return (c < 7749
    ? (c < 987
      ? (c < 424
        ? (c < 326
          ? (c < 285
            ? (c < 265
              ? (c < 248
                ? (c < 181
                  ? (c < 'a'
                    ? c == '_'
                    : c <= 'z')
                  : (c <= 181 || (c >= 223 && c <= 246)))
                : (c <= 255 || (c < 261
                  ? (c < 259
                    ? c == 257
                    : c <= 259)
                  : (c <= 261 || c == 263))))
              : (c <= 265 || (c < 275
                ? (c < 271
                  ? (c < 269
                    ? c == 267
                    : c <= 269)
                  : (c <= 271 || c == 273))
                : (c <= 275 || (c < 281
                  ? (c < 279
                    ? c == 277
                    : c <= 279)
                  : (c <= 281 || c == 283))))))
            : (c <= 285 || (c < 305
              ? (c < 295
                ? (c < 291
                  ? (c < 289
                    ? c == 287
                    : c <= 289)
                  : (c <= 291 || c == 293))
                : (c <= 295 || (c < 301
                  ? (c < 299
                    ? c == 297
                    : c <= 299)
                  : (c <= 301 || c == 303))))
              : (c <= 305 || (c < 316
                ? (c < 311
                  ? (c < 309
                    ? c == 307
                    : c <= 309)
                  : (c <= 312 || c == 314))
                : (c <= 316 || (c < 322
                  ? (c < 320
                    ? c == 318
                    : c <= 320)
                  : (c <= 322 || c == 324))))))))
          : (c <= 326 || (c < 367
            ? (c < 347
              ? (c < 337
                ? (c < 333
                  ? (c < 331
                    ? (c >= 328 && c <= 329)
                    : c <= 331)
                  : (c <= 333 || c == 335))
                : (c <= 337 || (c < 343
                  ? (c < 341
                    ? c == 339
                    : c <= 341)
                  : (c <= 343 || c == 345))))
              : (c <= 347 || (c < 357
                ? (c < 353
                  ? (c < 351
                    ? c == 349
                    : c <= 351)
                  : (c <= 353 || c == 355))
                : (c <= 357 || (c < 363
                  ? (c < 361
                    ? c == 359
                    : c <= 361)
                  : (c <= 363 || c == 365))))))
            : (c <= 367 || (c < 392
              ? (c < 378
                ? (c < 373
                  ? (c < 371
                    ? c == 369
                    : c <= 371)
                  : (c <= 373 || c == 375))
                : (c <= 378 || (c < 387
                  ? (c < 382
                    ? c == 380
                    : c <= 384)
                  : (c <= 387 || c == 389))))
              : (c <= 392 || (c < 414
                ? (c < 405
                  ? (c < 402
                    ? (c >= 396 && c <= 397)
                    : c <= 402)
                  : (c <= 405 || (c >= 409 && c <= 411)))
                : (c <= 414 || (c < 419
                  ? c == 417
                  : (c <= 419 || c == 421))))))))))
        : (c <= 424 || (c < 523
          ? (c < 481
            ? (c < 460
              ? (c < 438
                ? (c < 432
                  ? (c < 429
                    ? (c >= 426 && c <= 427)
                    : c <= 429)
                  : (c <= 432 || c == 436))
                : (c <= 438 || (c < 454
                  ? (c < 445
                    ? (c >= 441 && c <= 442)
                    : c <= 447)
                  : (c <= 454 || c == 457))))
              : (c <= 460 || (c < 470
                ? (c < 466
                  ? (c < 464
                    ? c == 462
                    : c <= 464)
                  : (c <= 466 || c == 468))
                : (c <= 470 || (c < 476
                  ? (c < 474
                    ? c == 472
                    : c <= 474)
                  : (c <= 477 || c == 479))))))
            : (c <= 481 || (c < 505
              ? (c < 491
                ? (c < 487
                  ? (c < 485
                    ? c == 483
                    : c <= 485)
                  : (c <= 487 || c == 489))
                : (c <= 491 || (c < 499
                  ? (c < 495
                    ? c == 493
                    : c <= 496)
                  : (c <= 499 || c == 501))))
              : (c <= 505 || (c < 515
                ? (c < 511
                  ? (c < 509
                    ? c == 507
                    : c <= 509)
                  : (c <= 511 || c == 513))
                : (c <= 515 || (c < 519
                  ? c == 517
                  : (c <= 519 || c == 521))))))))
          : (c <= 523 || (c < 563
            ? (c < 543
              ? (c < 533
                ? (c < 529
                  ? (c < 527
                    ? c == 525
                    : c <= 527)
                  : (c <= 529 || c == 531))
                : (c <= 533 || (c < 539
                  ? (c < 537
                    ? c == 535
                    : c <= 537)
                  : (c <= 539 || c == 541))))
              : (c <= 543 || (c < 553
                ? (c < 549
                  ? (c < 547
                    ? c == 545
                    : c <= 547)
                  : (c <= 549 || c == 551))
                : (c <= 553 || (c < 559
                  ? (c < 557
                    ? c == 555
                    : c <= 557)
                  : (c <= 559 || c == 561))))))
            : (c <= 569 || (c < 881
              ? (c < 585
                ? (c < 578
                  ? (c < 575
                    ? c == 572
                    : c <= 576)
                  : (c <= 578 || c == 583))
                : (c <= 585 || (c < 591
                  ? (c < 589
                    ? c == 587
                    : c <= 589)
                  : (c <= 659 || (c >= 661 && c <= 687)))))
              : (c <= 881 || (c < 940
                ? (c < 891
                  ? (c < 887
                    ? c == 883
                    : c <= 887)
                  : (c <= 893 || c == 912))
                : (c <= 974 || (c < 981
                  ? (c >= 976 && c <= 977)
                  : (c <= 983 || c == 985))))))))))))
      : (c <= 987 || (c < 1257
        ? (c < 1177
          ? (c < 1131
            ? (c < 1007
              ? (c < 997
                ? (c < 993
                  ? (c < 991
                    ? c == 989
                    : c <= 991)
                  : (c <= 993 || c == 995))
                : (c <= 997 || (c < 1003
                  ? (c < 1001
                    ? c == 999
                    : c <= 1001)
                  : (c <= 1003 || c == 1005))))
              : (c <= 1011 || (c < 1121
                ? (c < 1019
                  ? (c < 1016
                    ? c == 1013
                    : c <= 1016)
                  : (c <= 1020 || (c >= 1072 && c <= 1119)))
                : (c <= 1121 || (c < 1127
                  ? (c < 1125
                    ? c == 1123
                    : c <= 1125)
                  : (c <= 1127 || c == 1129))))))
            : (c <= 1131 || (c < 1151
              ? (c < 1141
                ? (c < 1137
                  ? (c < 1135
                    ? c == 1133
                    : c <= 1135)
                  : (c <= 1137 || c == 1139))
                : (c <= 1141 || (c < 1147
                  ? (c < 1145
                    ? c == 1143
                    : c <= 1145)
                  : (c <= 1147 || c == 1149))))
              : (c <= 1151 || (c < 1169
                ? (c < 1165
                  ? (c < 1163
                    ? c == 1153
                    : c <= 1163)
                  : (c <= 1165 || c == 1167))
                : (c <= 1169 || (c < 1173
                  ? c == 1171
                  : (c <= 1173 || c == 1175))))))))
          : (c <= 1177 || (c < 1218
            ? (c < 1197
              ? (c < 1187
                ? (c < 1183
                  ? (c < 1181
                    ? c == 1179
                    : c <= 1181)
                  : (c <= 1183 || c == 1185))
                : (c <= 1187 || (c < 1193
                  ? (c < 1191
                    ? c == 1189
                    : c <= 1191)
                  : (c <= 1193 || c == 1195))))
              : (c <= 1197 || (c < 1207
                ? (c < 1203
                  ? (c < 1201
                    ? c == 1199
                    : c <= 1201)
                  : (c <= 1203 || c == 1205))
                : (c <= 1207 || (c < 1213
                  ? (c < 1211
                    ? c == 1209
                    : c <= 1211)
                  : (c <= 1213 || c == 1215))))))
            : (c <= 1218 || (c < 1239
              ? (c < 1228
                ? (c < 1224
                  ? (c < 1222
                    ? c == 1220
                    : c <= 1222)
                  : (c <= 1224 || c == 1226))
                : (c <= 1228 || (c < 1235
                  ? (c < 1233
                    ? (c >= 1230 && c <= 1231)
                    : c <= 1233)
                  : (c <= 1235 || c == 1237))))
              : (c <= 1239 || (c < 1249
                ? (c < 1245
                  ? (c < 1243
                    ? c == 1241
                    : c <= 1243)
                  : (c <= 1245 || c == 1247))
                : (c <= 1249 || (c < 1253
                  ? c == 1251
                  : (c <= 1253 || c == 1255))))))))))
        : (c <= 1257 || (c < 5112
          ? (c < 1297
            ? (c < 1277
              ? (c < 1267
                ? (c < 1263
                  ? (c < 1261
                    ? c == 1259
                    : c <= 1261)
                  : (c <= 1263 || c == 1265))
                : (c <= 1267 || (c < 1273
                  ? (c < 1271
                    ? c == 1269
                    : c <= 1271)
                  : (c <= 1273 || c == 1275))))
              : (c <= 1277 || (c < 1287
                ? (c < 1283
                  ? (c < 1281
                    ? c == 1279
                    : c <= 1281)
                  : (c <= 1283 || c == 1285))
                : (c <= 1287 || (c < 1293
                  ? (c < 1291
                    ? c == 1289
                    : c <= 1291)
                  : (c <= 1293 || c == 1295))))))
            : (c <= 1297 || (c < 1317
              ? (c < 1307
                ? (c < 1303
                  ? (c < 1301
                    ? c == 1299
                    : c <= 1301)
                  : (c <= 1303 || c == 1305))
                : (c <= 1307 || (c < 1313
                  ? (c < 1311
                    ? c == 1309
                    : c <= 1311)
                  : (c <= 1313 || c == 1315))))
              : (c <= 1317 || (c < 1327
                ? (c < 1323
                  ? (c < 1321
                    ? c == 1319
                    : c <= 1321)
                  : (c <= 1323 || c == 1325))
                : (c <= 1327 || (c < 4304
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 4346 || (c >= 4349 && c <= 4351)))))))))
          : (c <= 5117 || (c < 7711
            ? (c < 7691
              ? (c < 7681
                ? (c < 7531
                  ? (c < 7424
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7467)
                  : (c <= 7543 || (c >= 7545 && c <= 7578)))
                : (c <= 7681 || (c < 7687
                  ? (c < 7685
                    ? c == 7683
                    : c <= 7685)
                  : (c <= 7687 || c == 7689))))
              : (c <= 7691 || (c < 7701
                ? (c < 7697
                  ? (c < 7695
                    ? c == 7693
                    : c <= 7695)
                  : (c <= 7697 || c == 7699))
                : (c <= 7701 || (c < 7707
                  ? (c < 7705
                    ? c == 7703
                    : c <= 7705)
                  : (c <= 7707 || c == 7709))))))
            : (c <= 7711 || (c < 7731
              ? (c < 7721
                ? (c < 7717
                  ? (c < 7715
                    ? c == 7713
                    : c <= 7715)
                  : (c <= 7717 || c == 7719))
                : (c <= 7721 || (c < 7727
                  ? (c < 7725
                    ? c == 7723
                    : c <= 7725)
                  : (c <= 7727 || c == 7729))))
              : (c <= 7731 || (c < 7741
                ? (c < 7737
                  ? (c < 7735
                    ? c == 7733
                    : c <= 7735)
                  : (c <= 7737 || c == 7739))
                : (c <= 7741 || (c < 7745
                  ? c == 7743
                  : (c <= 7745 || c == 7747))))))))))))))
    : (c <= 7749 || (c < 11447
      ? (c < 7913
        ? (c < 7827
          ? (c < 7789
            ? (c < 7769
              ? (c < 7759
                ? (c < 7755
                  ? (c < 7753
                    ? c == 7751
                    : c <= 7753)
                  : (c <= 7755 || c == 7757))
                : (c <= 7759 || (c < 7765
                  ? (c < 7763
                    ? c == 7761
                    : c <= 7763)
                  : (c <= 7765 || c == 7767))))
              : (c <= 7769 || (c < 7779
                ? (c < 7775
                  ? (c < 7773
                    ? c == 7771
                    : c <= 7773)
                  : (c <= 7775 || c == 7777))
                : (c <= 7779 || (c < 7785
                  ? (c < 7783
                    ? c == 7781
                    : c <= 7783)
                  : (c <= 7785 || c == 7787))))))
            : (c <= 7789 || (c < 7809
              ? (c < 7799
                ? (c < 7795
                  ? (c < 7793
                    ? c == 7791
                    : c <= 7793)
                  : (c <= 7795 || c == 7797))
                : (c <= 7799 || (c < 7805
                  ? (c < 7803
                    ? c == 7801
                    : c <= 7803)
                  : (c <= 7805 || c == 7807))))
              : (c <= 7809 || (c < 7819
                ? (c < 7815
                  ? (c < 7813
                    ? c == 7811
                    : c <= 7813)
                  : (c <= 7815 || c == 7817))
                : (c <= 7819 || (c < 7823
                  ? c == 7821
                  : (c <= 7823 || c == 7825))))))))
          : (c <= 7827 || (c < 7875
            ? (c < 7855
              ? (c < 7845
                ? (c < 7841
                  ? (c < 7839
                    ? (c >= 7829 && c <= 7837)
                    : c <= 7839)
                  : (c <= 7841 || c == 7843))
                : (c <= 7845 || (c < 7851
                  ? (c < 7849
                    ? c == 7847
                    : c <= 7849)
                  : (c <= 7851 || c == 7853))))
              : (c <= 7855 || (c < 7865
                ? (c < 7861
                  ? (c < 7859
                    ? c == 7857
                    : c <= 7859)
                  : (c <= 7861 || c == 7863))
                : (c <= 7865 || (c < 7871
                  ? (c < 7869
                    ? c == 7867
                    : c <= 7869)
                  : (c <= 7871 || c == 7873))))))
            : (c <= 7875 || (c < 7895
              ? (c < 7885
                ? (c < 7881
                  ? (c < 7879
                    ? c == 7877
                    : c <= 7879)
                  : (c <= 7881 || c == 7883))
                : (c <= 7885 || (c < 7891
                  ? (c < 7889
                    ? c == 7887
                    : c <= 7889)
                  : (c <= 7891 || c == 7893))))
              : (c <= 7895 || (c < 7905
                ? (c < 7901
                  ? (c < 7899
                    ? c == 7897
                    : c <= 7899)
                  : (c <= 7901 || c == 7903))
                : (c <= 7905 || (c < 7909
                  ? c == 7907
                  : (c <= 7909 || c == 7911))))))))))
        : (c <= 7913 || (c < 8518
          ? (c < 8080
            ? (c < 7933
              ? (c < 7923
                ? (c < 7919
                  ? (c < 7917
                    ? c == 7915
                    : c <= 7917)
                  : (c <= 7919 || c == 7921))
                : (c <= 7923 || (c < 7929
                  ? (c < 7927
                    ? c == 7925
                    : c <= 7927)
                  : (c <= 7929 || c == 7931))))
              : (c <= 7933 || (c < 8000
                ? (c < 7968
                  ? (c < 7952
                    ? (c >= 7935 && c <= 7943)
                    : c <= 7957)
                  : (c <= 7975 || (c >= 7984 && c <= 7991)))
                : (c <= 8005 || (c < 8048
                  ? (c < 8032
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8039)
                  : (c <= 8061 || (c >= 8064 && c <= 8071)))))))
            : (c <= 8087 || (c < 8178
              ? (c < 8130
                ? (c < 8118
                  ? (c < 8112
                    ? (c >= 8096 && c <= 8103)
                    : c <= 8116)
                  : (c <= 8119 || c == 8126))
                : (c <= 8132 || (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8135)
                    : c <= 8147)
                  : (c <= 8151 || (c >= 8160 && c <= 8167)))))
              : (c <= 8180 || (c < 8495
                ? (c < 8462
                  ? (c < 8458
                    ? (c >= 8182 && c <= 8183)
                    : c <= 8458)
                  : (c <= 8463 || c == 8467))
                : (c <= 8495 || (c < 8505
                  ? c == 8500
                  : (c <= 8505 || (c >= 8508 && c <= 8509)))))))))
          : (c <= 8521 || (c < 11409
            ? (c < 11379
              ? (c < 11365
                ? (c < 11312
                  ? (c < 8580
                    ? c == 8526
                    : c <= 8580)
                  : (c <= 11359 || c == 11361))
                : (c <= 11366 || (c < 11372
                  ? (c < 11370
                    ? c == 11368
                    : c <= 11370)
                  : (c <= 11372 || c == 11377))))
              : (c <= 11380 || (c < 11399
                ? (c < 11395
                  ? (c < 11393
                    ? (c >= 11382 && c <= 11387)
                    : c <= 11393)
                  : (c <= 11395 || c == 11397))
                : (c <= 11399 || (c < 11405
                  ? (c < 11403
                    ? c == 11401
                    : c <= 11403)
                  : (c <= 11405 || c == 11407))))))
            : (c <= 11409 || (c < 11429
              ? (c < 11419
                ? (c < 11415
                  ? (c < 11413
                    ? c == 11411
                    : c <= 11413)
                  : (c <= 11415 || c == 11417))
                : (c <= 11419 || (c < 11425
                  ? (c < 11423
                    ? c == 11421
                    : c <= 11423)
                  : (c <= 11425 || c == 11427))))
              : (c <= 11429 || (c < 11439
                ? (c < 11435
                  ? (c < 11433
                    ? c == 11431
                    : c <= 11433)
                  : (c <= 11435 || c == 11437))
                : (c <= 11439 || (c < 11443
                  ? c == 11441
                  : (c <= 11443 || c == 11445))))))))))))
      : (c <= 11447 || (c < 42813
        ? (c < 42581
          ? (c < 11487
            ? (c < 11467
              ? (c < 11457
                ? (c < 11453
                  ? (c < 11451
                    ? c == 11449
                    : c <= 11451)
                  : (c <= 11453 || c == 11455))
                : (c <= 11457 || (c < 11463
                  ? (c < 11461
                    ? c == 11459
                    : c <= 11461)
                  : (c <= 11463 || c == 11465))))
              : (c <= 11467 || (c < 11477
                ? (c < 11473
                  ? (c < 11471
                    ? c == 11469
                    : c <= 11471)
                  : (c <= 11473 || c == 11475))
                : (c <= 11477 || (c < 11483
                  ? (c < 11481
                    ? c == 11479
                    : c <= 11481)
                  : (c <= 11483 || c == 11485))))))
            : (c <= 11487 || (c < 42563
              ? (c < 11507
                ? (c < 11500
                  ? (c < 11491
                    ? c == 11489
                    : c <= 11492)
                  : (c <= 11500 || c == 11502))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || c == 42561))))
              : (c <= 42563 || (c < 42573
                ? (c < 42569
                  ? (c < 42567
                    ? c == 42565
                    : c <= 42567)
                  : (c <= 42569 || c == 42571))
                : (c <= 42573 || (c < 42577
                  ? c == 42575
                  : (c <= 42577 || c == 42579))))))))
          : (c <= 42581 || (c < 42639
            ? (c < 42601
              ? (c < 42591
                ? (c < 42587
                  ? (c < 42585
                    ? c == 42583
                    : c <= 42585)
                  : (c <= 42587 || c == 42589))
                : (c <= 42591 || (c < 42597
                  ? (c < 42595
                    ? c == 42593
                    : c <= 42595)
                  : (c <= 42597 || c == 42599))))
              : (c <= 42601 || (c < 42629
                ? (c < 42625
                  ? (c < 42605
                    ? c == 42603
                    : c <= 42605)
                  : (c <= 42625 || c == 42627))
                : (c <= 42629 || (c < 42635
                  ? (c < 42633
                    ? c == 42631
                    : c <= 42633)
                  : (c <= 42635 || c == 42637))))))
            : (c <= 42639 || (c < 42793
              ? (c < 42649
                ? (c < 42645
                  ? (c < 42643
                    ? c == 42641
                    : c <= 42643)
                  : (c <= 42645 || c == 42647))
                : (c <= 42649 || (c < 42789
                  ? (c < 42787
                    ? c == 42651
                    : c <= 42787)
                  : (c <= 42789 || c == 42791))))
              : (c <= 42793 || (c < 42805
                ? (c < 42799
                  ? (c < 42797
                    ? c == 42795
                    : c <= 42797)
                  : (c <= 42801 || c == 42803))
                : (c <= 42805 || (c < 42809
                  ? c == 42807
                  : (c <= 42809 || c == 42811))))))))))
        : (c <= 42813 || (c < 42905
          ? (c < 42853
            ? (c < 42833
              ? (c < 42823
                ? (c < 42819
                  ? (c < 42817
                    ? c == 42815
                    : c <= 42817)
                  : (c <= 42819 || c == 42821))
                : (c <= 42823 || (c < 42829
                  ? (c < 42827
                    ? c == 42825
                    : c <= 42827)
                  : (c <= 42829 || c == 42831))))
              : (c <= 42833 || (c < 42843
                ? (c < 42839
                  ? (c < 42837
                    ? c == 42835
                    : c <= 42837)
                  : (c <= 42839 || c == 42841))
                : (c <= 42843 || (c < 42849
                  ? (c < 42847
                    ? c == 42845
                    : c <= 42847)
                  : (c <= 42849 || c == 42851))))))
            : (c <= 42853 || (c < 42881
              ? (c < 42863
                ? (c < 42859
                  ? (c < 42857
                    ? c == 42855
                    : c <= 42857)
                  : (c <= 42859 || c == 42861))
                : (c <= 42863 || (c < 42876
                  ? (c < 42874
                    ? (c >= 42865 && c <= 42872)
                    : c <= 42874)
                  : (c <= 42876 || c == 42879))))
              : (c <= 42881 || (c < 42894
                ? (c < 42887
                  ? (c < 42885
                    ? c == 42883
                    : c <= 42885)
                  : (c <= 42887 || c == 42892))
                : (c <= 42894 || (c < 42899
                  ? c == 42897
                  : (c <= 42901 || c == 42903))))))))
          : (c <= 42905 || (c < 42961
            ? (c < 42933
              ? (c < 42915
                ? (c < 42911
                  ? (c < 42909
                    ? c == 42907
                    : c <= 42909)
                  : (c <= 42911 || c == 42913))
                : (c <= 42915 || (c < 42921
                  ? (c < 42919
                    ? c == 42917
                    : c <= 42919)
                  : (c <= 42921 || c == 42927))))
              : (c <= 42933 || (c < 42943
                ? (c < 42939
                  ? (c < 42937
                    ? c == 42935
                    : c <= 42937)
                  : (c <= 42939 || c == 42941))
                : (c <= 42943 || (c < 42952
                  ? (c < 42947
                    ? c == 42945
                    : c <= 42947)
                  : (c <= 42952 || c == 42954))))))
            : (c <= 42961 || (c < 64256
              ? (c < 42998
                ? (c < 42967
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42965)
                  : (c <= 42967 || c == 42969))
                : (c <= 42998 || (c < 43872
                  ? (c < 43824
                    ? c == 43002
                    : c <= 43866)
                  : (c <= 43880 || (c >= 43888 && c <= 43967)))))
              : (c <= 64262 || (c < 66967
                ? (c < 66600
                  ? (c < 65345
                    ? (c >= 64275 && c <= 64279)
                    : c <= 65370)
                  : (c <= 66639 || (c >= 66776 && c <= 66811)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))))))))));
}

static inline bool sym__varid_character_set_2(int32_t c) {
  return (c < 8458
    ? (c < 5112
      ? (c < 887
        ? (c < 248
          ? (c < 181
            ? (c < 'a'
              ? c == '_'
              : c <= 'z')
            : (c <= 181 || (c >= 223 && c <= 246)))
          : (c <= 442 || (c < 661
            ? (c < 454
              ? (c >= 445 && c <= 447)
              : c <= 659)
            : (c <= 687 || (c >= 881 && c <= 883)))))
        : (c <= 887 || (c < 1163
          ? (c < 940
            ? (c < 912
              ? (c >= 891 && c <= 893)
              : c <= 912)
            : (c <= 1013 || (c >= 1016 && c <= 1153)))
          : (c <= 1327 || (c < 4304
            ? (c >= 1376 && c <= 1416)
            : (c <= 4346 || (c >= 4349 && c <= 4351)))))))
      : (c <= 5117 || (c < 8118
        ? (c < 7681
          ? (c < 7531
            ? (c < 7424
              ? (c >= 7296 && c <= 7304)
              : c <= 7467)
            : (c <= 7543 || (c >= 7545 && c <= 7578)))
          : (c <= 7957 || (c < 8032
            ? (c < 8016
              ? (c >= 7968 && c <= 8005)
              : c <= 8023)
            : (c <= 8061 || (c >= 8064 && c <= 8116)))))
        : (c <= 8119 || (c < 8150
          ? (c < 8134
            ? (c < 8130
              ? c == 8126
              : c <= 8132)
            : (c <= 8135 || (c >= 8144 && c <= 8147)))
          : (c <= 8151 || (c < 8178
            ? (c >= 8160 && c <= 8167)
            : (c <= 8180 || (c >= 8182 && c <= 8183)))))))))
    : (c <= 8467 || (c < 42897
      ? (c < 11507
        ? (c < 8526
          ? (c < 8508
            ? (c < 8505
              ? (c >= 8495 && c <= 8500)
              : c <= 8505)
            : (c <= 8509 || (c >= 8518 && c <= 8521)))
          : (c <= 8526 || (c < 11393
            ? (c < 11312
              ? c == 8580
              : c <= 11387)
            : (c <= 11492 || (c >= 11500 && c <= 11502)))))
        : (c <= 11507 || (c < 42625
          ? (c < 11565
            ? (c < 11559
              ? (c >= 11520 && c <= 11557)
              : c <= 11559)
            : (c <= 11565 || (c >= 42561 && c <= 42605)))
          : (c <= 42651 || (c < 42865
            ? (c >= 42787 && c <= 42863)
            : (c <= 42887 || (c >= 42892 && c <= 42894)))))))
      : (c <= 42954 || (c < 64256
        ? (c < 43002
          ? (c < 42965
            ? (c < 42963
              ? c == 42961
              : c <= 42963)
            : (c <= 42969 || c == 42998))
          : (c <= 43002 || (c < 43872
            ? (c >= 43824 && c <= 43866)
            : (c <= 43880 || (c >= 43888 && c <= 43967)))))
        : (c <= 64262 || (c < 66967
          ? (c < 66600
            ? (c < 65345
              ? (c >= 64275 && c <= 64279)
              : c <= 65370)
            : (c <= 66639 || (c >= 66776 && c <= 66811)))
          : (c <= 66977 || (c < 66995
            ? (c >= 66979 && c <= 66993)
            : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))));
}

static inline bool sym__conid_character_set_1(int32_t c) {
  return (c < 7738
    ? (c < 931
      ? (c < 422
        ? (c < 327
          ? (c < 288
            ? (c < 268
              ? (c < 258
                ? (c < 216
                  ? (c < 192
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 214)
                  : (c <= 222 || c == 256))
                : (c <= 258 || (c < 264
                  ? (c < 262
                    ? c == 260
                    : c <= 262)
                  : (c <= 264 || c == 266))))
              : (c <= 268 || (c < 278
                ? (c < 274
                  ? (c < 272
                    ? c == 270
                    : c <= 272)
                  : (c <= 274 || c == 276))
                : (c <= 278 || (c < 284
                  ? (c < 282
                    ? c == 280
                    : c <= 282)
                  : (c <= 284 || c == 286))))))
            : (c <= 288 || (c < 308
              ? (c < 298
                ? (c < 294
                  ? (c < 292
                    ? c == 290
                    : c <= 292)
                  : (c <= 294 || c == 296))
                : (c <= 298 || (c < 304
                  ? (c < 302
                    ? c == 300
                    : c <= 302)
                  : (c <= 304 || c == 306))))
              : (c <= 308 || (c < 319
                ? (c < 315
                  ? (c < 313
                    ? c == 310
                    : c <= 313)
                  : (c <= 315 || c == 317))
                : (c <= 319 || (c < 323
                  ? c == 321
                  : (c <= 323 || c == 325))))))))
          : (c <= 327 || (c < 366
            ? (c < 348
              ? (c < 338
                ? (c < 334
                  ? (c < 332
                    ? c == 330
                    : c <= 332)
                  : (c <= 334 || c == 336))
                : (c <= 338 || (c < 344
                  ? (c < 342
                    ? c == 340
                    : c <= 342)
                  : (c <= 344 || c == 346))))
              : (c <= 348 || (c < 358
                ? (c < 354
                  ? (c < 352
                    ? c == 350
                    : c <= 352)
                  : (c <= 354 || c == 356))
                : (c <= 358 || (c < 362
                  ? c == 360
                  : (c <= 362 || c == 364))))))
            : (c <= 366 || (c < 390
              ? (c < 376
                ? (c < 372
                  ? (c < 370
                    ? c == 368
                    : c <= 370)
                  : (c <= 372 || c == 374))
                : (c <= 377 || (c < 385
                  ? (c < 381
                    ? c == 379
                    : c <= 381)
                  : (c <= 386 || c == 388))))
              : (c <= 391 || (c < 412
                ? (c < 403
                  ? (c < 398
                    ? (c >= 393 && c <= 395)
                    : c <= 401)
                  : (c <= 404 || (c >= 406 && c <= 408)))
                : (c <= 413 || (c < 418
                  ? (c >= 415 && c <= 416)
                  : (c <= 418 || c == 420))))))))))
        : (c <= 423 || (c < 522
          ? (c < 480
            ? (c < 458
              ? (c < 437
                ? (c < 430
                  ? (c < 428
                    ? c == 425
                    : c <= 428)
                  : (c <= 431 || (c >= 433 && c <= 435)))
                : (c <= 437 || (c < 452
                  ? (c < 444
                    ? (c >= 439 && c <= 440)
                    : c <= 444)
                  : (c <= 453 || (c >= 455 && c <= 456)))))
              : (c <= 459 || (c < 469
                ? (c < 465
                  ? (c < 463
                    ? c == 461
                    : c <= 463)
                  : (c <= 465 || c == 467))
                : (c <= 469 || (c < 475
                  ? (c < 473
                    ? c == 471
                    : c <= 473)
                  : (c <= 475 || c == 478))))))
            : (c <= 480 || (c < 502
              ? (c < 490
                ? (c < 486
                  ? (c < 484
                    ? c == 482
                    : c <= 484)
                  : (c <= 486 || c == 488))
                : (c <= 490 || (c < 497
                  ? (c < 494
                    ? c == 492
                    : c <= 494)
                  : (c <= 498 || c == 500))))
              : (c <= 504 || (c < 514
                ? (c < 510
                  ? (c < 508
                    ? c == 506
                    : c <= 508)
                  : (c <= 510 || c == 512))
                : (c <= 514 || (c < 518
                  ? c == 516
                  : (c <= 518 || c == 520))))))))
          : (c <= 522 || (c < 560
            ? (c < 542
              ? (c < 532
                ? (c < 528
                  ? (c < 526
                    ? c == 524
                    : c <= 526)
                  : (c <= 528 || c == 530))
                : (c <= 532 || (c < 538
                  ? (c < 536
                    ? c == 534
                    : c <= 536)
                  : (c <= 538 || c == 540))))
              : (c <= 542 || (c < 552
                ? (c < 548
                  ? (c < 546
                    ? c == 544
                    : c <= 546)
                  : (c <= 548 || c == 550))
                : (c <= 552 || (c < 556
                  ? c == 554
                  : (c <= 556 || c == 558))))))
            : (c <= 560 || (c < 880
              ? (c < 579
                ? (c < 573
                  ? (c < 570
                    ? c == 562
                    : c <= 571)
                  : (c <= 574 || c == 577))
                : (c <= 582 || (c < 588
                  ? (c < 586
                    ? c == 584
                    : c <= 586)
                  : (c <= 588 || c == 590))))
              : (c <= 880 || (c < 904
                ? (c < 895
                  ? (c < 886
                    ? c == 882
                    : c <= 886)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : (c <= 911 || (c >= 913 && c <= 929)))))))))))))
      : (c <= 939 || (c < 1246
        ? (c < 1168
          ? (c < 1122
            ? (c < 998
              ? (c < 988
                ? (c < 984
                  ? (c < 978
                    ? c == 975
                    : c <= 980)
                  : (c <= 984 || c == 986))
                : (c <= 988 || (c < 994
                  ? (c < 992
                    ? c == 990
                    : c <= 992)
                  : (c <= 994 || c == 996))))
              : (c <= 998 || (c < 1012
                ? (c < 1004
                  ? (c < 1002
                    ? c == 1000
                    : c <= 1002)
                  : (c <= 1004 || c == 1006))
                : (c <= 1012 || (c < 1021
                  ? (c < 1017
                    ? c == 1015
                    : c <= 1018)
                  : (c <= 1071 || c == 1120))))))
            : (c <= 1122 || (c < 1142
              ? (c < 1132
                ? (c < 1128
                  ? (c < 1126
                    ? c == 1124
                    : c <= 1126)
                  : (c <= 1128 || c == 1130))
                : (c <= 1132 || (c < 1138
                  ? (c < 1136
                    ? c == 1134
                    : c <= 1136)
                  : (c <= 1138 || c == 1140))))
              : (c <= 1142 || (c < 1152
                ? (c < 1148
                  ? (c < 1146
                    ? c == 1144
                    : c <= 1146)
                  : (c <= 1148 || c == 1150))
                : (c <= 1152 || (c < 1164
                  ? c == 1162
                  : (c <= 1164 || c == 1166))))))))
          : (c <= 1168 || (c < 1206
            ? (c < 1188
              ? (c < 1178
                ? (c < 1174
                  ? (c < 1172
                    ? c == 1170
                    : c <= 1172)
                  : (c <= 1174 || c == 1176))
                : (c <= 1178 || (c < 1184
                  ? (c < 1182
                    ? c == 1180
                    : c <= 1182)
                  : (c <= 1184 || c == 1186))))
              : (c <= 1188 || (c < 1198
                ? (c < 1194
                  ? (c < 1192
                    ? c == 1190
                    : c <= 1192)
                  : (c <= 1194 || c == 1196))
                : (c <= 1198 || (c < 1202
                  ? c == 1200
                  : (c <= 1202 || c == 1204))))))
            : (c <= 1206 || (c < 1227
              ? (c < 1216
                ? (c < 1212
                  ? (c < 1210
                    ? c == 1208
                    : c <= 1210)
                  : (c <= 1212 || c == 1214))
                : (c <= 1217 || (c < 1223
                  ? (c < 1221
                    ? c == 1219
                    : c <= 1221)
                  : (c <= 1223 || c == 1225))))
              : (c <= 1227 || (c < 1238
                ? (c < 1234
                  ? (c < 1232
                    ? c == 1229
                    : c <= 1232)
                  : (c <= 1234 || c == 1236))
                : (c <= 1238 || (c < 1242
                  ? c == 1240
                  : (c <= 1242 || c == 1244))))))))))
        : (c <= 1246 || (c < 1324
          ? (c < 1286
            ? (c < 1266
              ? (c < 1256
                ? (c < 1252
                  ? (c < 1250
                    ? c == 1248
                    : c <= 1250)
                  : (c <= 1252 || c == 1254))
                : (c <= 1256 || (c < 1262
                  ? (c < 1260
                    ? c == 1258
                    : c <= 1260)
                  : (c <= 1262 || c == 1264))))
              : (c <= 1266 || (c < 1276
                ? (c < 1272
                  ? (c < 1270
                    ? c == 1268
                    : c <= 1270)
                  : (c <= 1272 || c == 1274))
                : (c <= 1276 || (c < 1282
                  ? (c < 1280
                    ? c == 1278
                    : c <= 1280)
                  : (c <= 1282 || c == 1284))))))
            : (c <= 1286 || (c < 1306
              ? (c < 1296
                ? (c < 1292
                  ? (c < 1290
                    ? c == 1288
                    : c <= 1290)
                  : (c <= 1292 || c == 1294))
                : (c <= 1296 || (c < 1302
                  ? (c < 1300
                    ? c == 1298
                    : c <= 1300)
                  : (c <= 1302 || c == 1304))))
              : (c <= 1306 || (c < 1316
                ? (c < 1312
                  ? (c < 1310
                    ? c == 1308
                    : c <= 1310)
                  : (c <= 1312 || c == 1314))
                : (c <= 1316 || (c < 1320
                  ? c == 1318
                  : (c <= 1320 || c == 1322))))))))
          : (c <= 1324 || (c < 7700
            ? (c < 7682
              ? (c < 4301
                ? (c < 4256
                  ? (c < 1329
                    ? c == 1326
                    : c <= 1366)
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 7357
                  ? (c < 7312
                    ? (c >= 5024 && c <= 5109)
                    : c <= 7354)
                  : (c <= 7359 || c == 7680))))
              : (c <= 7682 || (c < 7692
                ? (c < 7688
                  ? (c < 7686
                    ? c == 7684
                    : c <= 7686)
                  : (c <= 7688 || c == 7690))
                : (c <= 7692 || (c < 7696
                  ? c == 7694
                  : (c <= 7696 || c == 7698))))))
            : (c <= 7700 || (c < 7720
              ? (c < 7710
                ? (c < 7706
                  ? (c < 7704
                    ? c == 7702
                    : c <= 7704)
                  : (c <= 7706 || c == 7708))
                : (c <= 7710 || (c < 7716
                  ? (c < 7714
                    ? c == 7712
                    : c <= 7714)
                  : (c <= 7716 || c == 7718))))
              : (c <= 7720 || (c < 7730
                ? (c < 7726
                  ? (c < 7724
                    ? c == 7722
                    : c <= 7724)
                  : (c <= 7726 || c == 7728))
                : (c <= 7730 || (c < 7734
                  ? c == 7732
                  : (c <= 7734 || c == 7736))))))))))))))
    : (c <= 7738 || (c < 11428
      ? (c < 7900
        ? (c < 7816
          ? (c < 7778
            ? (c < 7758
              ? (c < 7748
                ? (c < 7744
                  ? (c < 7742
                    ? c == 7740
                    : c <= 7742)
                  : (c <= 7744 || c == 7746))
                : (c <= 7748 || (c < 7754
                  ? (c < 7752
                    ? c == 7750
                    : c <= 7752)
                  : (c <= 7754 || c == 7756))))
              : (c <= 7758 || (c < 7768
                ? (c < 7764
                  ? (c < 7762
                    ? c == 7760
                    : c <= 7762)
                  : (c <= 7764 || c == 7766))
                : (c <= 7768 || (c < 7774
                  ? (c < 7772
                    ? c == 7770
                    : c <= 7772)
                  : (c <= 7774 || c == 7776))))))
            : (c <= 7778 || (c < 7798
              ? (c < 7788
                ? (c < 7784
                  ? (c < 7782
                    ? c == 7780
                    : c <= 7782)
                  : (c <= 7784 || c == 7786))
                : (c <= 7788 || (c < 7794
                  ? (c < 7792
                    ? c == 7790
                    : c <= 7792)
                  : (c <= 7794 || c == 7796))))
              : (c <= 7798 || (c < 7808
                ? (c < 7804
                  ? (c < 7802
                    ? c == 7800
                    : c <= 7802)
                  : (c <= 7804 || c == 7806))
                : (c <= 7808 || (c < 7812
                  ? c == 7810
                  : (c <= 7812 || c == 7814))))))))
          : (c <= 7816 || (c < 7862
            ? (c < 7844
              ? (c < 7826
                ? (c < 7822
                  ? (c < 7820
                    ? c == 7818
                    : c <= 7820)
                  : (c <= 7822 || c == 7824))
                : (c <= 7826 || (c < 7840
                  ? (c < 7838
                    ? c == 7828
                    : c <= 7838)
                  : (c <= 7840 || c == 7842))))
              : (c <= 7844 || (c < 7854
                ? (c < 7850
                  ? (c < 7848
                    ? c == 7846
                    : c <= 7848)
                  : (c <= 7850 || c == 7852))
                : (c <= 7854 || (c < 7858
                  ? c == 7856
                  : (c <= 7858 || c == 7860))))))
            : (c <= 7862 || (c < 7882
              ? (c < 7872
                ? (c < 7868
                  ? (c < 7866
                    ? c == 7864
                    : c <= 7866)
                  : (c <= 7868 || c == 7870))
                : (c <= 7872 || (c < 7878
                  ? (c < 7876
                    ? c == 7874
                    : c <= 7876)
                  : (c <= 7878 || c == 7880))))
              : (c <= 7882 || (c < 7892
                ? (c < 7888
                  ? (c < 7886
                    ? c == 7884
                    : c <= 7886)
                  : (c <= 7888 || c == 7890))
                : (c <= 7892 || (c < 7896
                  ? c == 7894
                  : (c <= 7896 || c == 7898))))))))))
        : (c <= 7900 || (c < 8464
          ? (c < 7976
            ? (c < 7920
              ? (c < 7910
                ? (c < 7906
                  ? (c < 7904
                    ? c == 7902
                    : c <= 7904)
                  : (c <= 7906 || c == 7908))
                : (c <= 7910 || (c < 7916
                  ? (c < 7914
                    ? c == 7912
                    : c <= 7914)
                  : (c <= 7916 || c == 7918))))
              : (c <= 7920 || (c < 7930
                ? (c < 7926
                  ? (c < 7924
                    ? c == 7922
                    : c <= 7924)
                  : (c <= 7926 || c == 7928))
                : (c <= 7930 || (c < 7944
                  ? (c < 7934
                    ? c == 7932
                    : c <= 7934)
                  : (c <= 7951 || (c >= 7960 && c <= 7965)))))))
            : (c <= 7983 || (c < 8104
              ? (c < 8029
                ? (c < 8025
                  ? (c < 8008
                    ? (c >= 7992 && c <= 7999)
                    : c <= 8013)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8072
                  ? (c < 8040
                    ? c == 8031
                    : c <= 8047)
                  : (c <= 8079 || (c >= 8088 && c <= 8095)))))
              : (c <= 8111 || (c < 8184
                ? (c < 8152
                  ? (c < 8136
                    ? (c >= 8120 && c <= 8124)
                    : c <= 8140)
                  : (c <= 8155 || (c >= 8168 && c <= 8172)))
                : (c <= 8188 || (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8459 && c <= 8461)))))))))
          : (c <= 8466 || (c < 11381
            ? (c < 8579
              ? (c < 8488
                ? (c < 8484
                  ? (c < 8473
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8510
                  ? (c < 8496
                    ? (c >= 8490 && c <= 8493)
                    : c <= 8499)
                  : (c <= 8511 || c == 8517))))
              : (c <= 8579 || (c < 11369
                ? (c < 11362
                  ? (c < 11360
                    ? (c >= 11264 && c <= 11311)
                    : c <= 11360)
                  : (c <= 11364 || c == 11367))
                : (c <= 11369 || (c < 11373
                  ? c == 11371
                  : (c <= 11376 || c == 11378))))))
            : (c <= 11381 || (c < 11410
              ? (c < 11400
                ? (c < 11396
                  ? (c < 11394
                    ? (c >= 11390 && c <= 11392)
                    : c <= 11394)
                  : (c <= 11396 || c == 11398))
                : (c <= 11400 || (c < 11406
                  ? (c < 11404
                    ? c == 11402
                    : c <= 11404)
                  : (c <= 11406 || c == 11408))))
              : (c <= 11410 || (c < 11420
                ? (c < 11416
                  ? (c < 11414
                    ? c == 11412
                    : c <= 11414)
                  : (c <= 11416 || c == 11418))
                : (c <= 11420 || (c < 11424
                  ? c == 11422
                  : (c <= 11424 || c == 11426))))))))))))
      : (c <= 11428 || (c < 42796
        ? (c < 42568
          ? (c < 11468
            ? (c < 11448
              ? (c < 11438
                ? (c < 11434
                  ? (c < 11432
                    ? c == 11430
                    : c <= 11432)
                  : (c <= 11434 || c == 11436))
                : (c <= 11438 || (c < 11444
                  ? (c < 11442
                    ? c == 11440
                    : c <= 11442)
                  : (c <= 11444 || c == 11446))))
              : (c <= 11448 || (c < 11458
                ? (c < 11454
                  ? (c < 11452
                    ? c == 11450
                    : c <= 11452)
                  : (c <= 11454 || c == 11456))
                : (c <= 11458 || (c < 11464
                  ? (c < 11462
                    ? c == 11460
                    : c <= 11462)
                  : (c <= 11464 || c == 11466))))))
            : (c <= 11468 || (c < 11488
              ? (c < 11478
                ? (c < 11474
                  ? (c < 11472
                    ? c == 11470
                    : c <= 11472)
                  : (c <= 11474 || c == 11476))
                : (c <= 11478 || (c < 11484
                  ? (c < 11482
                    ? c == 11480
                    : c <= 11482)
                  : (c <= 11484 || c == 11486))))
              : (c <= 11488 || (c < 42560
                ? (c < 11501
                  ? (c < 11499
                    ? c == 11490
                    : c <= 11499)
                  : (c <= 11501 || c == 11506))
                : (c <= 42560 || (c < 42564
                  ? c == 42562
                  : (c <= 42564 || c == 42566))))))))
          : (c <= 42568 || (c < 42624
            ? (c < 42588
              ? (c < 42578
                ? (c < 42574
                  ? (c < 42572
                    ? c == 42570
                    : c <= 42572)
                  : (c <= 42574 || c == 42576))
                : (c <= 42578 || (c < 42584
                  ? (c < 42582
                    ? c == 42580
                    : c <= 42582)
                  : (c <= 42584 || c == 42586))))
              : (c <= 42588 || (c < 42598
                ? (c < 42594
                  ? (c < 42592
                    ? c == 42590
                    : c <= 42592)
                  : (c <= 42594 || c == 42596))
                : (c <= 42598 || (c < 42602
                  ? c == 42600
                  : (c <= 42602 || c == 42604))))))
            : (c <= 42624 || (c < 42644
              ? (c < 42634
                ? (c < 42630
                  ? (c < 42628
                    ? c == 42626
                    : c <= 42628)
                  : (c <= 42630 || c == 42632))
                : (c <= 42634 || (c < 42640
                  ? (c < 42638
                    ? c == 42636
                    : c <= 42638)
                  : (c <= 42640 || c == 42642))))
              : (c <= 42644 || (c < 42788
                ? (c < 42650
                  ? (c < 42648
                    ? c == 42646
                    : c <= 42648)
                  : (c <= 42650 || c == 42786))
                : (c <= 42788 || (c < 42792
                  ? c == 42790
                  : (c <= 42792 || c == 42794))))))))))
        : (c <= 42796 || (c < 42884
          ? (c < 42836
            ? (c < 42818
              ? (c < 42808
                ? (c < 42804
                  ? (c < 42802
                    ? c == 42798
                    : c <= 42802)
                  : (c <= 42804 || c == 42806))
                : (c <= 42808 || (c < 42814
                  ? (c < 42812
                    ? c == 42810
                    : c <= 42812)
                  : (c <= 42814 || c == 42816))))
              : (c <= 42818 || (c < 42828
                ? (c < 42824
                  ? (c < 42822
                    ? c == 42820
                    : c <= 42822)
                  : (c <= 42824 || c == 42826))
                : (c <= 42828 || (c < 42832
                  ? c == 42830
                  : (c <= 42832 || c == 42834))))))
            : (c <= 42836 || (c < 42856
              ? (c < 42846
                ? (c < 42842
                  ? (c < 42840
                    ? c == 42838
                    : c <= 42840)
                  : (c <= 42842 || c == 42844))
                : (c <= 42846 || (c < 42852
                  ? (c < 42850
                    ? c == 42848
                    : c <= 42850)
                  : (c <= 42852 || c == 42854))))
              : (c <= 42856 || (c < 42875
                ? (c < 42862
                  ? (c < 42860
                    ? c == 42858
                    : c <= 42860)
                  : (c <= 42862 || c == 42873))
                : (c <= 42875 || (c < 42880
                  ? (c >= 42877 && c <= 42878)
                  : (c <= 42880 || c == 42882))))))))
          : (c <= 42884 || (c < 42936
            ? (c < 42910
              ? (c < 42898
                ? (c < 42893
                  ? (c < 42891
                    ? c == 42886
                    : c <= 42891)
                  : (c <= 42893 || c == 42896))
                : (c <= 42898 || (c < 42906
                  ? (c < 42904
                    ? c == 42902
                    : c <= 42904)
                  : (c <= 42906 || c == 42908))))
              : (c <= 42910 || (c < 42920
                ? (c < 42916
                  ? (c < 42914
                    ? c == 42912
                    : c <= 42914)
                  : (c <= 42916 || c == 42918))
                : (c <= 42920 || (c < 42928
                  ? (c >= 42922 && c <= 42926)
                  : (c <= 42932 || c == 42934))))))
            : (c <= 42936 || (c < 42968
              ? (c < 42946
                ? (c < 42942
                  ? (c < 42940
                    ? c == 42938
                    : c <= 42940)
                  : (c <= 42942 || c == 42944))
                : (c <= 42946 || (c < 42960
                  ? (c < 42953
                    ? (c >= 42948 && c <= 42951)
                    : c <= 42953)
                  : (c <= 42960 || c == 42966))))
              : (c <= 42968 || (c < 66928
                ? (c < 66560
                  ? (c < 65313
                    ? c == 42997
                    : c <= 65338)
                  : (c <= 66599 || (c >= 66736 && c <= 66771)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))))))))))))));
}

static inline bool anon_sym_DQUOTE_character_set_1(int32_t c) {
  return (c < 5760
    ? (c < ' '
      ? (c < '\r'
        ? c == '\n'
        : c <= '\r')
      : (c <= ' ' || c == 160))
    : (c <= 5760 || (c < 8287
      ? (c < 8239
        ? (c >= 8192 && c <= 8202)
        : c <= 8239)
      : (c <= 8287 || c == 12288))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(53);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(0)
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '+') ADVANCE(54);
      if (lookahead == ',') ADVANCE(103);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == 'F') ADVANCE(36);
      if (lookahead == 'I') ADVANCE(12);
      if (lookahead == 'O') ADVANCE(32);
      if (lookahead == 'P') ADVANCE(38);
      if (lookahead == 'R') ADVANCE(14);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == ']') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (sym__varid_character_set_1(lookahead)) ADVANCE(65);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '^') ADVANCE(112);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(110);
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(104);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 7:
      if (lookahead == 'D') ADVANCE(15);
      if (lookahead == 'U') ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 45:
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 46:
      if (lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 47:
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(47)
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == 'I') ADVANCE(67);
      if (lookahead == 'P') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(92);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(80);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(65);
      END_STATE();
    case 48:
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(48)
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == 'O') ADVANCE(32);
      if (lookahead == 'R') ADVANCE(14);
      if (lookahead == 's') ADVANCE(62);
      if (sym__varid_character_set_1(lookahead)) ADVANCE(65);
      END_STATE();
    case 49:
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(49)
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == 'd') ADVANCE(21);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(80);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (anon_sym_DQUOTE_character_set_1(lookahead)) SKIP(52)
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '+') ADVANCE(54);
      if (lookahead == ',') ADVANCE(103);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == ']') ADVANCE(102);
      if (lookahead == 's') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(80);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(65);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_is_sum_marker);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__varid);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'p') ||
          ('r' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (lookahead == 'q') ADVANCE(60);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'u') ||
          ('w' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (lookahead == 'v') ADVANCE(59);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(80);
      if (lookahead == 'y') ADVANCE(90);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_Id);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_Primary);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_Primary);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__field_strictness_prefix);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__cascade_action);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_Foreign);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_Foreign);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_References);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '-') ADVANCE(82);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(110);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(108);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(4);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 52},
  [2] = {.lex_state = 52},
  [3] = {.lex_state = 52},
  [4] = {.lex_state = 52},
  [5] = {.lex_state = 52},
  [6] = {.lex_state = 52},
  [7] = {.lex_state = 52},
  [8] = {.lex_state = 52},
  [9] = {.lex_state = 52},
  [10] = {.lex_state = 52},
  [11] = {.lex_state = 52},
  [12] = {.lex_state = 52},
  [13] = {.lex_state = 52, .external_lex_state = 2},
  [14] = {.lex_state = 52, .external_lex_state = 2},
  [15] = {.lex_state = 52, .external_lex_state = 2},
  [16] = {.lex_state = 52},
  [17] = {.lex_state = 52},
  [18] = {.lex_state = 47},
  [19] = {.lex_state = 47, .external_lex_state = 3},
  [20] = {.lex_state = 47, .external_lex_state = 3},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 52},
  [24] = {.lex_state = 52},
  [25] = {.lex_state = 52},
  [26] = {.lex_state = 52},
  [27] = {.lex_state = 52},
  [28] = {.lex_state = 52},
  [29] = {.lex_state = 52},
  [30] = {.lex_state = 52},
  [31] = {.lex_state = 52},
  [32] = {.lex_state = 52},
  [33] = {.lex_state = 52},
  [34] = {.lex_state = 52},
  [35] = {.lex_state = 52},
  [36] = {.lex_state = 52},
  [37] = {.lex_state = 52},
  [38] = {.lex_state = 52},
  [39] = {.lex_state = 52},
  [40] = {.lex_state = 52},
  [41] = {.lex_state = 52, .external_lex_state = 2},
  [42] = {.lex_state = 52, .external_lex_state = 2},
  [43] = {.lex_state = 52, .external_lex_state = 2},
  [44] = {.lex_state = 52, .external_lex_state = 2},
  [45] = {.lex_state = 52, .external_lex_state = 2},
  [46] = {.lex_state = 52, .external_lex_state = 2},
  [47] = {.lex_state = 52, .external_lex_state = 2},
  [48] = {.lex_state = 52, .external_lex_state = 2},
  [49] = {.lex_state = 52, .external_lex_state = 2},
  [50] = {.lex_state = 52, .external_lex_state = 2},
  [51] = {.lex_state = 52, .external_lex_state = 2},
  [52] = {.lex_state = 52, .external_lex_state = 2},
  [53] = {.lex_state = 52, .external_lex_state = 2},
  [54] = {.lex_state = 52, .external_lex_state = 2},
  [55] = {.lex_state = 52, .external_lex_state = 2},
  [56] = {.lex_state = 52, .external_lex_state = 2},
  [57] = {.lex_state = 52, .external_lex_state = 2},
  [58] = {.lex_state = 52, .external_lex_state = 2},
  [59] = {.lex_state = 52},
  [60] = {.lex_state = 52, .external_lex_state = 2},
  [61] = {.lex_state = 47, .external_lex_state = 3},
  [62] = {.lex_state = 52},
  [63] = {.lex_state = 52},
  [64] = {.lex_state = 52, .external_lex_state = 2},
  [65] = {.lex_state = 47, .external_lex_state = 3},
  [66] = {.lex_state = 47, .external_lex_state = 3},
  [67] = {.lex_state = 52},
  [68] = {.lex_state = 48, .external_lex_state = 2},
  [69] = {.lex_state = 48, .external_lex_state = 2},
  [70] = {.lex_state = 48, .external_lex_state = 2},
  [71] = {.lex_state = 49, .external_lex_state = 3},
  [72] = {.lex_state = 49, .external_lex_state = 3},
  [73] = {.lex_state = 52, .external_lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 52, .external_lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 49, .external_lex_state = 3},
  [81] = {.lex_state = 52},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 52, .external_lex_state = 4},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 52, .external_lex_state = 4},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 52, .external_lex_state = 4},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 52, .external_lex_state = 4},
  [93] = {.lex_state = 48},
  [94] = {.lex_state = 52},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 52},
  [97] = {.lex_state = 52},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 48, .external_lex_state = 2},
  [100] = {.lex_state = 48, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 49, .external_lex_state = 3},
  [103] = {.lex_state = 49, .external_lex_state = 3},
  [104] = {.lex_state = 52, .external_lex_state = 4},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 52},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 48},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 48, .external_lex_state = 2},
  [115] = {.lex_state = 52},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 49, .external_lex_state = 3},
  [119] = {.lex_state = 52},
  [120] = {.lex_state = 49, .external_lex_state = 3},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 52},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 52},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 48},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 52},
  [132] = {.lex_state = 52},
  [133] = {.lex_state = 52},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 49, .external_lex_state = 3},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 48},
  [147] = {.lex_state = 48},
  [148] = {.lex_state = 48},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 52},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 52},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0, .external_lex_state = 3},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {(TSStateId)(-1)},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
  ts_external_token__string_start = 3,
  ts_external_token__string_content = 4,
  ts_external_token__string_end = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__string_start] = sym__string_start,
  [ts_external_token__string_content] = sym__string_content,
  [ts_external_token__string_end] = sym__string_end,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token__string_content] = true,
    [ts_external_token__string_end] = true,
  },
  [2] = {
    [ts_external_token__newline] = true,
  },
  [3] = {
    [ts_external_token__dedent] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_is_sum_marker] = ACTIONS(1),
    [sym__varid] = ACTIONS(1),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [anon_sym_Id] = ACTIONS(1),
    [anon_sym_Primary] = ACTIONS(1),
    [sym__attribute] = ACTIONS(1),
    [sym__field_strictness_prefix] = ACTIONS(1),
    [sym__cascade_action] = ACTIONS(1),
    [anon_sym_Foreign] = ACTIONS(1),
    [anon_sym_References] = ACTIONS(1),
    [anon_sym_deriving] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_char_token1] = ACTIONS(1),
    [aux_sym_char_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [aux_sym_string_token3] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__string_start] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym__string_end] = ACTIONS(1),
  },
  [1] = {
    [sym_quasi_quotation] = STATE(157),
    [sym_entity_definition] = STATE(127),
    [sym_comment] = STATE(1),
    [sym__entity_name] = STATE(82),
    [sym__entity_header] = STATE(83),
    [sym_type_name] = STATE(150),
    [aux_sym_quasi_quotation_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_is_sum_marker] = ACTIONS(7),
    [sym__conid] = ACTIONS(11),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      sym__number,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(2), 1,
      sym_comment,
    STATE(9), 1,
      sym__atype,
    STATE(38), 1,
      sym__stringly,
    STATE(116), 1,
      sym_type_apply,
    STATE(122), 1,
      aux_sym_con_tuple_repeat1,
    STATE(125), 1,
      sym__type,
    STATE(134), 1,
      sym__btype,
    ACTIONS(23), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
    STATE(31), 2,
      sym__type_literal,
      sym_type_name,
    STATE(32), 2,
      sym_char,
      sym_string,
    STATE(37), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(35), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(33), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [82] = 24,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      sym__number,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      sym_comment,
    STATE(9), 1,
      sym__atype,
    STATE(38), 1,
      sym__stringly,
    STATE(116), 1,
      sym_type_apply,
    STATE(128), 1,
      aux_sym_con_tuple_repeat1,
    STATE(134), 1,
      sym__btype,
    STATE(141), 1,
      sym__type,
    ACTIONS(23), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
    STATE(31), 2,
      sym__type_literal,
      sym_type_name,
    STATE(32), 2,
      sym_char,
      sym_string,
    STATE(37), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(35), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(33), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [164] = 24,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      sym__number,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(4), 1,
      sym_comment,
    STATE(9), 1,
      sym__atype,
    STATE(38), 1,
      sym__stringly,
    STATE(116), 1,
      sym_type_apply,
    STATE(122), 1,
      aux_sym_con_tuple_repeat1,
    STATE(134), 1,
      sym__btype,
    STATE(137), 1,
      sym__type,
    ACTIONS(23), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
    STATE(31), 2,
      sym__type_literal,
      sym_type_name,
    STATE(32), 2,
      sym_char,
      sym_string,
    STATE(37), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(35), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(33), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [246] = 24,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      sym__number,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_comment,
    STATE(9), 1,
      sym__atype,
    STATE(38), 1,
      sym__stringly,
    STATE(116), 1,
      sym_type_apply,
    STATE(128), 1,
      aux_sym_con_tuple_repeat1,
    STATE(130), 1,
      sym__type,
    STATE(134), 1,
      sym__btype,
    ACTIONS(23), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
    STATE(31), 2,
      sym__type_literal,
      sym_type_name,
    STATE(32), 2,
      sym_char,
      sym_string,
    STATE(37), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(35), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(33), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [328] = 20,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      sym__number,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(6), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_type_apply_repeat1,
    STATE(25), 1,
      sym__atype,
    STATE(38), 1,
      sym__stringly,
    ACTIONS(23), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
    STATE(31), 2,
      sym__type_literal,
      sym_type_name,
    STATE(32), 2,
      sym_char,
      sym_string,
    STATE(37), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(33), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(35), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(33), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [400] = 19,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(35), 1,
      sym__conid,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym__number,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      sym__atype,
    STATE(38), 1,
      sym__stringly,
    ACTIONS(46), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
    STATE(7), 2,
      sym_comment,
      aux_sym_type_apply_repeat1,
    STATE(31), 2,
      sym__type_literal,
      sym_type_name,
    STATE(32), 2,
      sym_char,
      sym_string,
    STATE(37), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(41), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(35), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(33), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [470] = 22,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      sym__number,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      sym_comment,
    STATE(9), 1,
      sym__atype,
    STATE(38), 1,
      sym__stringly,
    STATE(116), 1,
      sym_type_apply,
    STATE(134), 1,
      sym__btype,
    STATE(155), 1,
      sym__type,
    ACTIONS(23), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
    STATE(31), 2,
      sym__type_literal,
      sym_type_name,
    STATE(32), 2,
      sym_char,
      sym_string,
    STATE(37), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(35), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(33), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [546] = 20,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      sym__number,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(6), 1,
      aux_sym_type_apply_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(25), 1,
      sym__atype,
    STATE(38), 1,
      sym__stringly,
    ACTIONS(23), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
    STATE(31), 2,
      sym__type_literal,
      sym_type_name,
    STATE(32), 2,
      sym_char,
      sym_string,
    STATE(37), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(60), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(35), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(33), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [618] = 22,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      sym__number,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(62), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      sym__atype,
    STATE(10), 1,
      sym_comment,
    STATE(38), 1,
      sym__stringly,
    STATE(116), 1,
      sym_type_apply,
    STATE(134), 1,
      sym__btype,
    STATE(160), 1,
      sym__type,
    ACTIONS(23), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
    STATE(31), 2,
      sym__type_literal,
      sym_type_name,
    STATE(32), 2,
      sym_char,
      sym_string,
    STATE(37), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(35), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(33), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [694] = 21,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      sym__number,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym__atype,
    STATE(11), 1,
      sym_comment,
    STATE(38), 1,
      sym__stringly,
    STATE(116), 1,
      sym_type_apply,
    STATE(134), 1,
      sym__btype,
    STATE(138), 1,
      sym__type,
    ACTIONS(23), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
    STATE(31), 2,
      sym__type_literal,
      sym_type_name,
    STATE(32), 2,
      sym_char,
      sym_string,
    STATE(37), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(35), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(33), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [767] = 21,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__conid,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      sym__number,
    ACTIONS(74), 1,
      anon_sym_SQUOTE,
    STATE(12), 1,
      sym_comment,
    STATE(14), 1,
      sym__atype,
    STATE(47), 1,
      sym__stringly,
    STATE(90), 1,
      sym__type,
    STATE(140), 1,
      sym__btype,
    STATE(142), 1,
      sym_type_apply,
    ACTIONS(68), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
    STATE(52), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(55), 2,
      sym_char,
      sym_string,
    STATE(56), 2,
      sym__type_literal,
      sym_type_name,
    STATE(41), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(42), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [840] = 19,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(76), 1,
      sym__conid,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym__number,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    STATE(47), 1,
      sym__stringly,
    STATE(48), 1,
      sym__atype,
    ACTIONS(41), 2,
      sym__newline,
      sym__attribute,
    ACTIONS(85), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
    STATE(13), 2,
      sym_comment,
      aux_sym_type_apply_repeat1,
    STATE(52), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(55), 2,
      sym_char,
      sym_string,
    STATE(56), 2,
      sym__type_literal,
      sym_type_name,
    STATE(41), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(42), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [909] = 20,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__conid,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      sym__number,
    ACTIONS(74), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_type_apply_repeat1,
    STATE(47), 1,
      sym__stringly,
    STATE(48), 1,
      sym__atype,
    ACTIONS(60), 2,
      sym__newline,
      sym__attribute,
    ACTIONS(68), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
    STATE(52), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(55), 2,
      sym_char,
      sym_string,
    STATE(56), 2,
      sym__type_literal,
      sym_type_name,
    STATE(41), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(42), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [980] = 20,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__conid,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      sym__number,
    ACTIONS(74), 1,
      anon_sym_SQUOTE,
    STATE(13), 1,
      aux_sym_type_apply_repeat1,
    STATE(15), 1,
      sym_comment,
    STATE(47), 1,
      sym__stringly,
    STATE(48), 1,
      sym__atype,
    ACTIONS(33), 2,
      sym__newline,
      sym__attribute,
    ACTIONS(68), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
    STATE(52), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(55), 2,
      sym_char,
      sym_string,
    STATE(56), 2,
      sym__type_literal,
      sym_type_name,
    STATE(41), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(42), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [1051] = 21,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__conid,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      sym__number,
    ACTIONS(74), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      sym__atype,
    STATE(16), 1,
      sym_comment,
    STATE(47), 1,
      sym__stringly,
    STATE(108), 1,
      sym__type,
    STATE(140), 1,
      sym__btype,
    STATE(142), 1,
      sym_type_apply,
    ACTIONS(68), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
    STATE(52), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(55), 2,
      sym_char,
      sym_string,
    STATE(56), 2,
      sym__type_literal,
      sym_type_name,
    STATE(41), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(42), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [1124] = 21,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__conid,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      sym__number,
    ACTIONS(74), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      sym__atype,
    STATE(17), 1,
      sym_comment,
    STATE(47), 1,
      sym__stringly,
    STATE(105), 1,
      sym__type,
    STATE(140), 1,
      sym__btype,
    STATE(142), 1,
      sym_type_apply,
    ACTIONS(68), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
    STATE(52), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(55), 2,
      sym_char,
      sym_string,
    STATE(56), 2,
      sym__type_literal,
      sym_type_name,
    STATE(41), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(42), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [1197] = 24,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(97), 1,
      sym__varid,
    ACTIONS(99), 1,
      sym__conid,
    ACTIONS(101), 1,
      anon_sym_Id,
    ACTIONS(103), 1,
      anon_sym_Primary,
    ACTIONS(105), 1,
      sym__field_strictness_prefix,
    ACTIONS(107), 1,
      anon_sym_Foreign,
    ACTIONS(109), 1,
      anon_sym_deriving,
    STATE(17), 1,
      sym__field_name,
    STATE(18), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_entity_body_repeat1,
    STATE(61), 1,
      sym__entity_line_definition,
    STATE(63), 1,
      sym_variable,
    STATE(80), 1,
      aux_sym_entity_body_repeat2,
    STATE(97), 1,
      sym__haskell_constraint_name,
    STATE(143), 1,
      sym_entity_derives,
    STATE(154), 1,
      sym__natural_key,
    STATE(156), 1,
      sym_type_name,
    STATE(161), 1,
      sym_entity_body,
    STATE(162), 1,
      sym__entity_key,
    STATE(163), 1,
      sym__surrogate_key,
    STATE(159), 3,
      sym_field_definition,
      sym__unique_constraint,
      sym__foreign_constraint,
  [1272] = 24,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(97), 1,
      sym__varid,
    ACTIONS(99), 1,
      sym__conid,
    ACTIONS(101), 1,
      anon_sym_Id,
    ACTIONS(103), 1,
      anon_sym_Primary,
    ACTIONS(105), 1,
      sym__field_strictness_prefix,
    ACTIONS(107), 1,
      anon_sym_Foreign,
    ACTIONS(109), 1,
      anon_sym_deriving,
    ACTIONS(111), 1,
      sym__dedent,
    STATE(17), 1,
      sym__field_name,
    STATE(19), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_entity_body_repeat1,
    STATE(61), 1,
      sym__entity_line_definition,
    STATE(63), 1,
      sym_variable,
    STATE(97), 1,
      sym__haskell_constraint_name,
    STATE(103), 1,
      aux_sym_entity_body_repeat2,
    STATE(143), 1,
      sym_entity_derives,
    STATE(154), 1,
      sym__natural_key,
    STATE(156), 1,
      sym_type_name,
    STATE(162), 1,
      sym__entity_key,
    STATE(163), 1,
      sym__surrogate_key,
    STATE(159), 3,
      sym_field_definition,
      sym__unique_constraint,
      sym__foreign_constraint,
  [1347] = 21,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(113), 1,
      sym__varid,
    ACTIONS(116), 1,
      sym__conid,
    ACTIONS(119), 1,
      anon_sym_Id,
    ACTIONS(122), 1,
      anon_sym_Primary,
    ACTIONS(125), 1,
      sym__field_strictness_prefix,
    ACTIONS(128), 1,
      anon_sym_Foreign,
    ACTIONS(131), 1,
      anon_sym_deriving,
    ACTIONS(133), 1,
      sym__dedent,
    STATE(17), 1,
      sym__field_name,
    STATE(61), 1,
      sym__entity_line_definition,
    STATE(63), 1,
      sym_variable,
    STATE(97), 1,
      sym__haskell_constraint_name,
    STATE(154), 1,
      sym__natural_key,
    STATE(156), 1,
      sym_type_name,
    STATE(162), 1,
      sym__entity_key,
    STATE(163), 1,
      sym__surrogate_key,
    STATE(20), 2,
      sym_comment,
      aux_sym_entity_body_repeat1,
    STATE(159), 3,
      sym_field_definition,
      sym__unique_constraint,
      sym__foreign_constraint,
  [1414] = 14,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      sym__number,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_comment,
    STATE(44), 1,
      sym__type_promotable_literal,
    STATE(47), 1,
      sym__stringly,
    ACTIONS(68), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
    STATE(55), 2,
      sym_char,
      sym_string,
    STATE(41), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(42), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [1464] = 14,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      sym__number,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_comment,
    STATE(23), 1,
      sym__type_promotable_literal,
    STATE(38), 1,
      sym__stringly,
    ACTIONS(23), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
    STATE(32), 2,
      sym_char,
      sym_string,
    STATE(35), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(33), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [1514] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(23), 1,
      sym_comment,
    ACTIONS(141), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(139), 8,
      sym__conid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__number,
  [1542] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(24), 1,
      sym_comment,
    ACTIONS(145), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(143), 8,
      sym__conid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__number,
  [1570] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(25), 1,
      sym_comment,
    ACTIONS(149), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(147), 8,
      sym__conid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__number,
  [1598] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(26), 1,
      sym_comment,
    ACTIONS(153), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(151), 8,
      sym__conid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__number,
  [1626] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(27), 1,
      sym_comment,
    ACTIONS(157), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(155), 8,
      sym__conid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__number,
  [1654] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(28), 1,
      sym_comment,
    ACTIONS(161), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(159), 8,
      sym__conid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__number,
  [1682] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(29), 1,
      sym_comment,
    ACTIONS(165), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(163), 8,
      sym__conid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__number,
  [1710] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(30), 1,
      sym_comment,
    ACTIONS(169), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(167), 8,
      sym__conid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__number,
  [1738] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(31), 1,
      sym_comment,
    ACTIONS(173), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(171), 8,
      sym__conid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__number,
  [1766] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(32), 1,
      sym_comment,
    ACTIONS(177), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(175), 8,
      sym__conid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__number,
  [1794] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(33), 1,
      sym_comment,
    ACTIONS(181), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(179), 8,
      sym__conid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__number,
  [1822] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(34), 1,
      sym_comment,
    ACTIONS(185), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(183), 8,
      sym__conid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__number,
  [1850] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(35), 1,
      sym_comment,
    ACTIONS(189), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(187), 8,
      sym__conid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__number,
  [1878] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(36), 1,
      sym_comment,
    ACTIONS(193), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(191), 8,
      sym__conid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__number,
  [1906] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(37), 1,
      sym_comment,
    ACTIONS(197), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(195), 8,
      sym__conid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__number,
  [1934] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(38), 1,
      sym_comment,
    ACTIONS(201), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(199), 8,
      sym__conid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__number,
  [1962] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(39), 1,
      sym_comment,
    ACTIONS(205), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(203), 8,
      sym__conid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__number,
  [1990] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(40), 1,
      sym_comment,
    ACTIONS(209), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(207), 8,
      sym__conid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__number,
  [2018] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(41), 1,
      sym_comment,
    ACTIONS(189), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(187), 7,
      sym__newline,
      sym__conid,
      sym__attribute,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__number,
  [2045] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(42), 1,
      sym_comment,
    ACTIONS(181), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(179), 7,
      sym__newline,
      sym__conid,
      sym__attribute,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__number,
  [2072] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(43), 1,
      sym_comment,
    ACTIONS(157), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(155), 7,
      sym__newline,
      sym__conid,
      sym__attribute,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__number,
  [2099] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(44), 1,
      sym_comment,
    ACTIONS(141), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(139), 7,
      sym__newline,
      sym__conid,
      sym__attribute,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__number,
  [2126] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(45), 1,
      sym_comment,
    ACTIONS(205), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(203), 7,
      sym__newline,
      sym__conid,
      sym__attribute,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__number,
  [2153] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(46), 1,
      sym_comment,
    ACTIONS(165), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(163), 7,
      sym__newline,
      sym__conid,
      sym__attribute,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__number,
  [2180] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(47), 1,
      sym_comment,
    ACTIONS(201), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(199), 7,
      sym__newline,
      sym__conid,
      sym__attribute,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__number,
  [2207] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(48), 1,
      sym_comment,
    ACTIONS(149), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(147), 7,
      sym__newline,
      sym__conid,
      sym__attribute,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__number,
  [2234] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(49), 1,
      sym_comment,
    ACTIONS(153), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(151), 7,
      sym__newline,
      sym__conid,
      sym__attribute,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__number,
  [2261] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(50), 1,
      sym_comment,
    ACTIONS(161), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(159), 7,
      sym__newline,
      sym__conid,
      sym__attribute,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__number,
  [2288] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(51), 1,
      sym_comment,
    ACTIONS(209), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(207), 7,
      sym__newline,
      sym__conid,
      sym__attribute,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__number,
  [2315] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(52), 1,
      sym_comment,
    ACTIONS(197), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(195), 7,
      sym__newline,
      sym__conid,
      sym__attribute,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__number,
  [2342] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(53), 1,
      sym_comment,
    ACTIONS(193), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(191), 7,
      sym__newline,
      sym__conid,
      sym__attribute,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__number,
  [2369] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(54), 1,
      sym_comment,
    ACTIONS(145), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(143), 7,
      sym__newline,
      sym__conid,
      sym__attribute,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__number,
  [2396] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(55), 1,
      sym_comment,
    ACTIONS(177), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(175), 7,
      sym__newline,
      sym__conid,
      sym__attribute,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__number,
  [2423] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(56), 1,
      sym_comment,
    ACTIONS(173), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(171), 7,
      sym__newline,
      sym__conid,
      sym__attribute,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__number,
  [2450] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(57), 1,
      sym_comment,
    ACTIONS(185), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(183), 7,
      sym__newline,
      sym__conid,
      sym__attribute,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__number,
  [2477] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(58), 1,
      sym_comment,
    ACTIONS(169), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(167), 7,
      sym__newline,
      sym__conid,
      sym__attribute,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__number,
  [2504] = 11,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      sym__conid,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_quasi_quotation_repeat1,
    STATE(82), 1,
      sym__entity_name,
    STATE(83), 1,
      sym__entity_header,
    STATE(127), 1,
      sym_entity_definition,
    STATE(150), 1,
      sym_type_name,
    ACTIONS(7), 2,
      sym_is_sum_marker,
      aux_sym_comment_token2,
  [2539] = 12,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(213), 1,
      sym__varid,
    ACTIONS(215), 1,
      sym__attribute,
    ACTIONS(217), 1,
      sym__newline,
    STATE(60), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym__natural_key_repeat1,
    STATE(88), 1,
      aux_sym__surrogate_key_repeat1,
    STATE(99), 1,
      sym_variable,
    STATE(114), 1,
      sym__field_name,
    STATE(149), 1,
      sym__key_attribute,
  [2576] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(61), 1,
      sym_comment,
    ACTIONS(221), 2,
      sym__dedent,
      sym__field_strictness_prefix,
    ACTIONS(219), 6,
      sym__varid,
      sym__conid,
      anon_sym_Id,
      anon_sym_Primary,
      anon_sym_Foreign,
      anon_sym_deriving,
  [2601] = 11,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 1,
      sym_is_sum_marker,
    ACTIONS(228), 1,
      sym__conid,
    STATE(82), 1,
      sym__entity_name,
    STATE(83), 1,
      sym__entity_header,
    STATE(127), 1,
      sym_entity_definition,
    STATE(150), 1,
      sym_type_name,
    STATE(62), 2,
      sym_comment,
      aux_sym_quasi_quotation_repeat1,
  [2636] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(63), 1,
      sym_comment,
    ACTIONS(233), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(231), 5,
      sym__conid,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__number,
  [2661] = 12,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(213), 1,
      sym__varid,
    ACTIONS(235), 1,
      sym__attribute,
    ACTIONS(237), 1,
      sym__newline,
    STATE(64), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym__natural_key_repeat1,
    STATE(99), 1,
      sym_variable,
    STATE(101), 1,
      aux_sym__unique_constraint_repeat1,
    STATE(114), 1,
      sym__field_name,
    STATE(153), 1,
      sym__unique_constraint_attribute,
  [2698] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(65), 1,
      sym_comment,
    ACTIONS(241), 2,
      sym__dedent,
      sym__field_strictness_prefix,
    ACTIONS(239), 6,
      sym__varid,
      sym__conid,
      anon_sym_Id,
      anon_sym_Primary,
      anon_sym_Foreign,
      anon_sym_deriving,
  [2723] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(66), 1,
      sym_comment,
    ACTIONS(245), 2,
      sym__dedent,
      sym__field_strictness_prefix,
    ACTIONS(243), 6,
      sym__varid,
      sym__conid,
      anon_sym_Id,
      anon_sym_Primary,
      anon_sym_Foreign,
      anon_sym_deriving,
  [2748] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(67), 1,
      sym_comment,
    ACTIONS(249), 3,
      aux_sym_char_token1,
      aux_sym_char_token2,
      anon_sym_SQUOTE,
    ACTIONS(247), 5,
      sym__conid,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      sym__number,
  [2773] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(251), 1,
      sym__varid,
    STATE(99), 1,
      sym_variable,
    STATE(114), 1,
      sym__field_name,
    STATE(68), 2,
      sym_comment,
      aux_sym__natural_key_repeat1,
    ACTIONS(254), 3,
      sym__newline,
      sym__attribute,
      anon_sym_References,
  [2801] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(256), 1,
      sym__varid,
    ACTIONS(258), 1,
      anon_sym_References,
    ACTIONS(260), 1,
      sym__newline,
    STATE(68), 1,
      aux_sym__natural_key_repeat1,
    STATE(69), 1,
      sym_comment,
    STATE(99), 1,
      sym_variable,
    STATE(114), 1,
      sym__field_name,
  [2832] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(256), 1,
      sym__varid,
    ACTIONS(262), 1,
      anon_sym_References,
    ACTIONS(264), 1,
      sym__newline,
    STATE(68), 1,
      aux_sym__natural_key_repeat1,
    STATE(70), 1,
      sym_comment,
    STATE(99), 1,
      sym_variable,
    STATE(114), 1,
      sym__field_name,
  [2863] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(266), 1,
      sym__conid,
    STATE(71), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_entity_derives_repeat1,
    STATE(120), 1,
      sym__class_name,
    ACTIONS(268), 2,
      sym__dedent,
      anon_sym_deriving,
  [2889] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(270), 1,
      sym__conid,
    STATE(120), 1,
      sym__class_name,
    ACTIONS(273), 2,
      sym__dedent,
      anon_sym_deriving,
    STATE(72), 2,
      sym_comment,
      aux_sym_entity_derives_repeat1,
  [2913] = 9,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(256), 1,
      sym__varid,
    ACTIONS(275), 1,
      sym__newline,
    STATE(68), 1,
      aux_sym__natural_key_repeat1,
    STATE(73), 1,
      sym_comment,
    STATE(99), 1,
      sym_variable,
    STATE(114), 1,
      sym__field_name,
  [2941] = 5,
    ACTIONS(277), 1,
      sym__doc_comment,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    STATE(74), 2,
      sym_comment,
      aux_sym_string_repeat1,
    ACTIONS(281), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [2961] = 9,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(256), 1,
      sym__varid,
    ACTIONS(284), 1,
      sym__newline,
    STATE(68), 1,
      aux_sym__natural_key_repeat1,
    STATE(75), 1,
      sym_comment,
    STATE(99), 1,
      sym_variable,
    STATE(114), 1,
      sym__field_name,
  [2989] = 6,
    ACTIONS(277), 1,
      sym__doc_comment,
    ACTIONS(286), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym_string_repeat1,
    STATE(76), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(288), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [3011] = 6,
    ACTIONS(277), 1,
      sym__doc_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      aux_sym_string_repeat1,
    STATE(77), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(288), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [3033] = 6,
    ACTIONS(277), 1,
      sym__doc_comment,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym_string_repeat1,
    STATE(78), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(288), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [3055] = 6,
    ACTIONS(277), 1,
      sym__doc_comment,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      aux_sym_string_repeat1,
    STATE(79), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(288), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [3077] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(296), 1,
      anon_sym_deriving,
    ACTIONS(298), 1,
      sym__dedent,
    STATE(80), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_entity_body_repeat2,
    STATE(143), 1,
      sym_entity_derives,
  [3102] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(256), 1,
      sym__varid,
    STATE(75), 1,
      aux_sym__natural_key_repeat1,
    STATE(81), 1,
      sym_comment,
    STATE(99), 1,
      sym_variable,
    STATE(114), 1,
      sym__field_name,
  [3127] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(300), 1,
      sym__attribute,
    ACTIONS(302), 1,
      sym__newline,
    STATE(82), 1,
      sym_comment,
    STATE(86), 1,
      aux_sym__entity_header_repeat1,
    STATE(136), 1,
      sym__entity_attribute,
  [3152] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(306), 1,
      sym__indent,
    STATE(83), 1,
      sym_comment,
    ACTIONS(304), 3,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__conid,
  [3173] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(300), 1,
      sym__attribute,
    ACTIONS(308), 1,
      sym__newline,
    STATE(84), 1,
      sym_comment,
    STATE(91), 1,
      aux_sym__entity_header_repeat1,
    STATE(136), 1,
      sym__entity_attribute,
  [3198] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(85), 1,
      sym_comment,
    ACTIONS(310), 4,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__conid,
  [3217] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(300), 1,
      sym__attribute,
    ACTIONS(312), 1,
      sym__newline,
    STATE(86), 1,
      sym_comment,
    STATE(95), 1,
      aux_sym__entity_header_repeat1,
    STATE(136), 1,
      sym__entity_attribute,
  [3242] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(215), 1,
      sym__attribute,
    ACTIONS(314), 1,
      sym__newline,
    STATE(87), 1,
      sym_comment,
    STATE(112), 1,
      aux_sym__surrogate_key_repeat1,
    STATE(149), 1,
      sym__key_attribute,
  [3267] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(215), 1,
      sym__attribute,
    ACTIONS(316), 1,
      sym__newline,
    STATE(88), 1,
      sym_comment,
    STATE(112), 1,
      aux_sym__surrogate_key_repeat1,
    STATE(149), 1,
      sym__key_attribute,
  [3292] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(89), 1,
      sym_comment,
    ACTIONS(318), 4,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__conid,
  [3311] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(320), 1,
      sym__attribute,
    ACTIONS(322), 1,
      sym__newline,
    STATE(90), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym_field_definition_repeat1,
    STATE(139), 1,
      sym__field_attribute,
  [3336] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(300), 1,
      sym__attribute,
    ACTIONS(324), 1,
      sym__newline,
    STATE(91), 1,
      sym_comment,
    STATE(95), 1,
      aux_sym__entity_header_repeat1,
    STATE(136), 1,
      sym__entity_attribute,
  [3361] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(92), 1,
      sym_comment,
    ACTIONS(326), 4,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__conid,
  [3380] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(328), 1,
      sym__varid,
    ACTIONS(330), 1,
      sym__cascade_action,
    STATE(93), 1,
      sym_comment,
    STATE(115), 1,
      sym__constraint_name,
    STATE(129), 1,
      aux_sym__cascade_actions,
  [3405] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(256), 1,
      sym__varid,
    STATE(69), 1,
      aux_sym__natural_key_repeat1,
    STATE(94), 1,
      sym_comment,
    STATE(99), 1,
      sym_variable,
    STATE(114), 1,
      sym__field_name,
  [3430] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(332), 1,
      sym__attribute,
    ACTIONS(335), 1,
      sym__newline,
    STATE(136), 1,
      sym__entity_attribute,
    STATE(95), 2,
      sym_comment,
      aux_sym__entity_header_repeat1,
  [3453] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(256), 1,
      sym__varid,
    STATE(60), 1,
      aux_sym__natural_key_repeat1,
    STATE(96), 1,
      sym_comment,
    STATE(99), 1,
      sym_variable,
    STATE(114), 1,
      sym__field_name,
  [3478] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(256), 1,
      sym__varid,
    STATE(64), 1,
      aux_sym__natural_key_repeat1,
    STATE(97), 1,
      sym_comment,
    STATE(99), 1,
      sym_variable,
    STATE(114), 1,
      sym__field_name,
  [3503] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(320), 1,
      sym__attribute,
    ACTIONS(337), 1,
      sym__newline,
    STATE(98), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym_field_definition_repeat1,
    STATE(139), 1,
      sym__field_attribute,
  [3528] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(233), 1,
      sym__varid,
    STATE(99), 1,
      sym_comment,
    ACTIONS(231), 3,
      sym__newline,
      sym__attribute,
      anon_sym_References,
  [3549] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(249), 1,
      sym__varid,
    STATE(100), 1,
      sym_comment,
    ACTIONS(247), 3,
      sym__newline,
      sym__attribute,
      anon_sym_References,
  [3570] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(235), 1,
      sym__attribute,
    ACTIONS(339), 1,
      sym__newline,
    STATE(101), 1,
      sym_comment,
    STATE(109), 1,
      aux_sym__unique_constraint_repeat1,
    STATE(153), 1,
      sym__unique_constraint_attribute,
  [3595] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(341), 1,
      anon_sym_deriving,
    ACTIONS(344), 1,
      sym__dedent,
    STATE(143), 1,
      sym_entity_derives,
    STATE(102), 2,
      sym_comment,
      aux_sym_entity_body_repeat2,
  [3618] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(296), 1,
      anon_sym_deriving,
    ACTIONS(346), 1,
      sym__dedent,
    STATE(102), 1,
      aux_sym_entity_body_repeat2,
    STATE(103), 1,
      sym_comment,
    STATE(143), 1,
      sym_entity_derives,
  [3643] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(104), 1,
      sym_comment,
    ACTIONS(348), 4,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__conid,
  [3662] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(320), 1,
      sym__attribute,
    ACTIONS(350), 1,
      sym__newline,
    STATE(98), 1,
      aux_sym_field_definition_repeat1,
    STATE(105), 1,
      sym_comment,
    STATE(139), 1,
      sym__field_attribute,
  [3687] = 4,
    ACTIONS(277), 1,
      sym__doc_comment,
    STATE(106), 1,
      sym_comment,
    ACTIONS(5), 2,
      aux_sym_comment_token1,
      aux_sym_comment_token2,
    ACTIONS(352), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [3704] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(256), 1,
      sym__varid,
    STATE(73), 1,
      aux_sym__natural_key_repeat1,
    STATE(99), 1,
      sym_variable,
    STATE(107), 1,
      sym_comment,
    STATE(114), 1,
      sym__field_name,
  [3729] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(215), 1,
      sym__attribute,
    ACTIONS(354), 1,
      sym__newline,
    STATE(87), 1,
      aux_sym__surrogate_key_repeat1,
    STATE(108), 1,
      sym_comment,
    STATE(149), 1,
      sym__key_attribute,
  [3754] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(356), 1,
      sym__attribute,
    ACTIONS(359), 1,
      sym__newline,
    STATE(153), 1,
      sym__unique_constraint_attribute,
    STATE(109), 2,
      sym_comment,
      aux_sym__unique_constraint_repeat1,
  [3777] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(361), 1,
      sym__attribute,
    ACTIONS(364), 1,
      sym__newline,
    STATE(139), 1,
      sym__field_attribute,
    STATE(110), 2,
      sym_comment,
      aux_sym_field_definition_repeat1,
  [3800] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(328), 1,
      sym__varid,
    ACTIONS(330), 1,
      sym__cascade_action,
    STATE(93), 1,
      aux_sym__cascade_actions,
    STATE(94), 1,
      sym__constraint_name,
    STATE(111), 1,
      sym_comment,
  [3825] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(366), 1,
      sym__attribute,
    ACTIONS(369), 1,
      sym__newline,
    STATE(149), 1,
      sym__key_attribute,
    STATE(112), 2,
      sym_comment,
      aux_sym__surrogate_key_repeat1,
  [3848] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(320), 1,
      sym__attribute,
    ACTIONS(371), 1,
      sym__newline,
    STATE(110), 1,
      aux_sym_field_definition_repeat1,
    STATE(113), 1,
      sym_comment,
    STATE(139), 1,
      sym__field_attribute,
  [3873] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(373), 1,
      sym__varid,
    STATE(114), 1,
      sym_comment,
    ACTIONS(375), 3,
      sym__newline,
      sym__attribute,
      anon_sym_References,
  [3894] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(256), 1,
      sym__varid,
    STATE(70), 1,
      aux_sym__natural_key_repeat1,
    STATE(99), 1,
      sym_variable,
    STATE(114), 1,
      sym__field_name,
    STATE(115), 1,
      sym_comment,
  [3919] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(116), 1,
      sym_comment,
    ACTIONS(60), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3937] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      sym_comment,
    STATE(121), 1,
      aux_sym_type_tuple_repeat1,
  [3959] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(118), 1,
      sym_comment,
    ACTIONS(381), 3,
      sym__dedent,
      sym__conid,
      anon_sym_deriving,
  [3977] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__conid,
    STATE(84), 1,
      sym__entity_name,
    STATE(119), 1,
      sym_comment,
    STATE(150), 1,
      sym_type_name,
  [3999] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(120), 1,
      sym_comment,
    ACTIONS(383), 3,
      sym__dedent,
      sym__conid,
      anon_sym_deriving,
  [4017] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    STATE(121), 2,
      sym_comment,
      aux_sym_type_tuple_repeat1,
  [4037] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym_con_tuple_repeat1,
  [4059] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(123), 1,
      sym_comment,
    ACTIONS(392), 3,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__conid,
  [4077] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    STATE(124), 2,
      sym_comment,
      aux_sym_con_tuple_repeat1,
  [4097] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym_type_tuple_repeat1,
    STATE(125), 1,
      sym_comment,
  [4119] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_type_tuple_repeat1,
    STATE(126), 1,
      sym_comment,
  [4141] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(127), 1,
      sym_comment,
    ACTIONS(403), 3,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__conid,
  [4159] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      aux_sym_con_tuple_repeat1,
    STATE(128), 1,
      sym_comment,
  [4181] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(407), 1,
      sym__varid,
    ACTIONS(409), 1,
      sym__cascade_action,
    STATE(129), 2,
      sym_comment,
      aux_sym__cascade_actions,
  [4201] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym_type_tuple_repeat1,
    STATE(130), 1,
      sym_comment,
  [4223] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(414), 1,
      sym__varid,
    STATE(12), 1,
      sym__field_name,
    STATE(63), 1,
      sym_variable,
    STATE(131), 1,
      sym_comment,
  [4245] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(416), 1,
      sym__conid,
    STATE(111), 1,
      sym__entity_name,
    STATE(132), 1,
      sym_comment,
    STATE(148), 1,
      sym_type_name,
  [4267] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(266), 1,
      sym__conid,
    STATE(71), 1,
      aux_sym_entity_derives_repeat1,
    STATE(120), 1,
      sym__class_name,
    STATE(133), 1,
      sym_comment,
  [4289] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(134), 1,
      sym_comment,
    ACTIONS(418), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4307] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(135), 1,
      sym_comment,
    ACTIONS(420), 2,
      sym__newline,
      sym__attribute,
  [4324] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(136), 1,
      sym_comment,
    ACTIONS(422), 2,
      sym__newline,
      sym__attribute,
  [4341] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_type_tuple_repeat1,
    STATE(137), 1,
      sym_comment,
  [4360] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(138), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4377] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(139), 1,
      sym_comment,
    ACTIONS(424), 2,
      sym__newline,
      sym__attribute,
  [4394] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(140), 1,
      sym_comment,
    ACTIONS(418), 2,
      sym__newline,
      sym__attribute,
  [4411] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym_type_tuple_repeat1,
    STATE(141), 1,
      sym_comment,
  [4430] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(142), 1,
      sym_comment,
    ACTIONS(60), 2,
      sym__newline,
      sym__attribute,
  [4447] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(143), 1,
      sym_comment,
    ACTIONS(426), 2,
      sym__dedent,
      anon_sym_deriving,
  [4464] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(144), 1,
      sym_comment,
    ACTIONS(428), 2,
      sym__newline,
      sym__attribute,
  [4481] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(145), 1,
      sym_comment,
    ACTIONS(430), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4498] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(146), 1,
      sym_comment,
    ACTIONS(432), 2,
      sym__varid,
      sym__cascade_action,
  [4515] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(147), 1,
      sym_comment,
    ACTIONS(151), 2,
      sym__varid,
      sym__cascade_action,
  [4532] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(148), 1,
      sym_comment,
    ACTIONS(434), 2,
      sym__varid,
      sym__cascade_action,
  [4549] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(149), 1,
      sym_comment,
    ACTIONS(436), 2,
      sym__newline,
      sym__attribute,
  [4566] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(150), 1,
      sym_comment,
    ACTIONS(434), 2,
      sym__newline,
      sym__attribute,
  [4583] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(151), 1,
      sym_comment,
    ACTIONS(438), 2,
      sym__newline,
      sym__attribute,
  [4600] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(152), 1,
      sym_comment,
    ACTIONS(440), 2,
      sym__newline,
      sym__attribute,
  [4617] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(153), 1,
      sym_comment,
    ACTIONS(442), 2,
      sym__newline,
      sym__attribute,
  [4634] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(444), 1,
      sym__newline,
    STATE(154), 1,
      sym_comment,
  [4650] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(446), 1,
      anon_sym_RBRACK,
    STATE(155), 1,
      sym_comment,
  [4666] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(448), 1,
      sym__varid,
    STATE(156), 1,
      sym_comment,
  [4682] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
    STATE(157), 1,
      sym_comment,
  [4698] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(452), 1,
      sym__varid,
    STATE(158), 1,
      sym_comment,
  [4714] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(454), 1,
      sym__newline,
    STATE(159), 1,
      sym_comment,
  [4730] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(456), 1,
      anon_sym_RBRACK,
    STATE(160), 1,
      sym_comment,
  [4746] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(458), 1,
      sym__dedent,
    STATE(161), 1,
      sym_comment,
  [4762] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(460), 1,
      sym__newline,
    STATE(162), 1,
      sym_comment,
  [4778] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(462), 1,
      sym__newline,
    STATE(163), 1,
      sym_comment,
  [4794] = 1,
    ACTIONS(464), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 164,
  [SMALL_STATE(5)] = 246,
  [SMALL_STATE(6)] = 328,
  [SMALL_STATE(7)] = 400,
  [SMALL_STATE(8)] = 470,
  [SMALL_STATE(9)] = 546,
  [SMALL_STATE(10)] = 618,
  [SMALL_STATE(11)] = 694,
  [SMALL_STATE(12)] = 767,
  [SMALL_STATE(13)] = 840,
  [SMALL_STATE(14)] = 909,
  [SMALL_STATE(15)] = 980,
  [SMALL_STATE(16)] = 1051,
  [SMALL_STATE(17)] = 1124,
  [SMALL_STATE(18)] = 1197,
  [SMALL_STATE(19)] = 1272,
  [SMALL_STATE(20)] = 1347,
  [SMALL_STATE(21)] = 1414,
  [SMALL_STATE(22)] = 1464,
  [SMALL_STATE(23)] = 1514,
  [SMALL_STATE(24)] = 1542,
  [SMALL_STATE(25)] = 1570,
  [SMALL_STATE(26)] = 1598,
  [SMALL_STATE(27)] = 1626,
  [SMALL_STATE(28)] = 1654,
  [SMALL_STATE(29)] = 1682,
  [SMALL_STATE(30)] = 1710,
  [SMALL_STATE(31)] = 1738,
  [SMALL_STATE(32)] = 1766,
  [SMALL_STATE(33)] = 1794,
  [SMALL_STATE(34)] = 1822,
  [SMALL_STATE(35)] = 1850,
  [SMALL_STATE(36)] = 1878,
  [SMALL_STATE(37)] = 1906,
  [SMALL_STATE(38)] = 1934,
  [SMALL_STATE(39)] = 1962,
  [SMALL_STATE(40)] = 1990,
  [SMALL_STATE(41)] = 2018,
  [SMALL_STATE(42)] = 2045,
  [SMALL_STATE(43)] = 2072,
  [SMALL_STATE(44)] = 2099,
  [SMALL_STATE(45)] = 2126,
  [SMALL_STATE(46)] = 2153,
  [SMALL_STATE(47)] = 2180,
  [SMALL_STATE(48)] = 2207,
  [SMALL_STATE(49)] = 2234,
  [SMALL_STATE(50)] = 2261,
  [SMALL_STATE(51)] = 2288,
  [SMALL_STATE(52)] = 2315,
  [SMALL_STATE(53)] = 2342,
  [SMALL_STATE(54)] = 2369,
  [SMALL_STATE(55)] = 2396,
  [SMALL_STATE(56)] = 2423,
  [SMALL_STATE(57)] = 2450,
  [SMALL_STATE(58)] = 2477,
  [SMALL_STATE(59)] = 2504,
  [SMALL_STATE(60)] = 2539,
  [SMALL_STATE(61)] = 2576,
  [SMALL_STATE(62)] = 2601,
  [SMALL_STATE(63)] = 2636,
  [SMALL_STATE(64)] = 2661,
  [SMALL_STATE(65)] = 2698,
  [SMALL_STATE(66)] = 2723,
  [SMALL_STATE(67)] = 2748,
  [SMALL_STATE(68)] = 2773,
  [SMALL_STATE(69)] = 2801,
  [SMALL_STATE(70)] = 2832,
  [SMALL_STATE(71)] = 2863,
  [SMALL_STATE(72)] = 2889,
  [SMALL_STATE(73)] = 2913,
  [SMALL_STATE(74)] = 2941,
  [SMALL_STATE(75)] = 2961,
  [SMALL_STATE(76)] = 2989,
  [SMALL_STATE(77)] = 3011,
  [SMALL_STATE(78)] = 3033,
  [SMALL_STATE(79)] = 3055,
  [SMALL_STATE(80)] = 3077,
  [SMALL_STATE(81)] = 3102,
  [SMALL_STATE(82)] = 3127,
  [SMALL_STATE(83)] = 3152,
  [SMALL_STATE(84)] = 3173,
  [SMALL_STATE(85)] = 3198,
  [SMALL_STATE(86)] = 3217,
  [SMALL_STATE(87)] = 3242,
  [SMALL_STATE(88)] = 3267,
  [SMALL_STATE(89)] = 3292,
  [SMALL_STATE(90)] = 3311,
  [SMALL_STATE(91)] = 3336,
  [SMALL_STATE(92)] = 3361,
  [SMALL_STATE(93)] = 3380,
  [SMALL_STATE(94)] = 3405,
  [SMALL_STATE(95)] = 3430,
  [SMALL_STATE(96)] = 3453,
  [SMALL_STATE(97)] = 3478,
  [SMALL_STATE(98)] = 3503,
  [SMALL_STATE(99)] = 3528,
  [SMALL_STATE(100)] = 3549,
  [SMALL_STATE(101)] = 3570,
  [SMALL_STATE(102)] = 3595,
  [SMALL_STATE(103)] = 3618,
  [SMALL_STATE(104)] = 3643,
  [SMALL_STATE(105)] = 3662,
  [SMALL_STATE(106)] = 3687,
  [SMALL_STATE(107)] = 3704,
  [SMALL_STATE(108)] = 3729,
  [SMALL_STATE(109)] = 3754,
  [SMALL_STATE(110)] = 3777,
  [SMALL_STATE(111)] = 3800,
  [SMALL_STATE(112)] = 3825,
  [SMALL_STATE(113)] = 3848,
  [SMALL_STATE(114)] = 3873,
  [SMALL_STATE(115)] = 3894,
  [SMALL_STATE(116)] = 3919,
  [SMALL_STATE(117)] = 3937,
  [SMALL_STATE(118)] = 3959,
  [SMALL_STATE(119)] = 3977,
  [SMALL_STATE(120)] = 3999,
  [SMALL_STATE(121)] = 4017,
  [SMALL_STATE(122)] = 4037,
  [SMALL_STATE(123)] = 4059,
  [SMALL_STATE(124)] = 4077,
  [SMALL_STATE(125)] = 4097,
  [SMALL_STATE(126)] = 4119,
  [SMALL_STATE(127)] = 4141,
  [SMALL_STATE(128)] = 4159,
  [SMALL_STATE(129)] = 4181,
  [SMALL_STATE(130)] = 4201,
  [SMALL_STATE(131)] = 4223,
  [SMALL_STATE(132)] = 4245,
  [SMALL_STATE(133)] = 4267,
  [SMALL_STATE(134)] = 4289,
  [SMALL_STATE(135)] = 4307,
  [SMALL_STATE(136)] = 4324,
  [SMALL_STATE(137)] = 4341,
  [SMALL_STATE(138)] = 4360,
  [SMALL_STATE(139)] = 4377,
  [SMALL_STATE(140)] = 4394,
  [SMALL_STATE(141)] = 4411,
  [SMALL_STATE(142)] = 4430,
  [SMALL_STATE(143)] = 4447,
  [SMALL_STATE(144)] = 4464,
  [SMALL_STATE(145)] = 4481,
  [SMALL_STATE(146)] = 4498,
  [SMALL_STATE(147)] = 4515,
  [SMALL_STATE(148)] = 4532,
  [SMALL_STATE(149)] = 4549,
  [SMALL_STATE(150)] = 4566,
  [SMALL_STATE(151)] = 4583,
  [SMALL_STATE(152)] = 4600,
  [SMALL_STATE(153)] = 4617,
  [SMALL_STATE(154)] = 4634,
  [SMALL_STATE(155)] = 4650,
  [SMALL_STATE(156)] = 4666,
  [SMALL_STATE(157)] = 4682,
  [SMALL_STATE(158)] = 4698,
  [SMALL_STATE(159)] = 4714,
  [SMALL_STATE(160)] = 4730,
  [SMALL_STATE(161)] = 4746,
  [SMALL_STATE(162)] = 4762,
  [SMALL_STATE(163)] = 4778,
  [SMALL_STATE(164)] = 4794,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quotation, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_apply, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(26),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(10),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(39),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(79),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(38),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(22),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__btype, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(49),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(5),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(8),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(45),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(77),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(47),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(21),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 1, .production_id = 4),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2, .production_id = 8), SHIFT_REPEAT(67),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2, .production_id = 8), SHIFT_REPEAT(147),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2, .production_id = 8), SHIFT_REPEAT(16),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2, .production_id = 8), SHIFT_REPEAT(96),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2, .production_id = 8), SHIFT_REPEAT(131),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2, .production_id = 8), SHIFT_REPEAT(132),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2, .production_id = 8),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2, .production_id = 8),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_promoted_literal, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_promoted_literal, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atype, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atype, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_tuple, 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_tuple, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con_list, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con_list, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con_unit, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con_unit, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atype, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atype, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stringly, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stringly, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_literal, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_literal, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_promotable_literal, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_promotable_literal, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_list, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_literal, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_literal, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con_tuple, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con_tuple, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quotation, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__natural_key, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 1, .production_id = 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 1, .production_id = 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(119),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(49),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_name, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_name, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unique_constraint, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__entity_line_definition, 2, .production_id = 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_line_definition, 2, .production_id = 4),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__entity_line_definition, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_line_definition, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__natural_key_repeat1, 2), SHIFT_REPEAT(100),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__natural_key_repeat1, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__foreign_constraint, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__foreign_constraint, 5),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_derives, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_derives_repeat1, 2), SHIFT_REPEAT(118),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_derives_repeat1, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__foreign_constraint, 6),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(106),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__foreign_constraint, 7),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 1, .production_id = 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 2, .production_id = 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__surrogate_key, 3, .production_id = 6),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__natural_key, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 3, .production_id = 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3, .production_id = 9),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 3, .production_id = 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2), SHIFT_REPEAT(151),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3, .production_id = 7),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unique_constraint, 3),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat2, 2), SHIFT_REPEAT(133),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat2, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 2, .production_id = 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 4, .production_id = 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2, .production_id = 7),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__surrogate_key, 2, .production_id = 6),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unique_constraint_repeat1, 2), SHIFT_REPEAT(152),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__unique_constraint_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(144),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__surrogate_key_repeat1, 2), SHIFT_REPEAT(135),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__surrogate_key_repeat1, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 4, .production_id = 9),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__natural_key_repeat1, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__natural_key_repeat1, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_name, 1, .production_id = 5),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_derives_repeat1, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_tuple_repeat1, 2),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_tuple_repeat1, 2), SHIFT_REPEAT(11),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 4, .production_id = 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_con_tuple_repeat1, 2),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_con_tuple_repeat1, 2), SHIFT_REPEAT(145),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cascade_actions, 2),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cascade_actions, 2), SHIFT_REPEAT(146),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_attribute, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 1),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat2, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_attribute, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_con_tuple_repeat1, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cascade_actions, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_name, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__surrogate_key_repeat1, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_attribute, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unique_constraint_attribute, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__unique_constraint_repeat1, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_key, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__haskell_constraint_name, 1, .production_id = 5),
  [450] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_name, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_key, 1, .production_id = 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_haskell_persistent_external_scanner_create(void);
void tree_sitter_haskell_persistent_external_scanner_destroy(void *);
bool tree_sitter_haskell_persistent_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_haskell_persistent_external_scanner_serialize(void *, char *);
void tree_sitter_haskell_persistent_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_haskell_persistent(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_haskell_persistent_external_scanner_create,
      tree_sitter_haskell_persistent_external_scanner_destroy,
      tree_sitter_haskell_persistent_external_scanner_scan,
      tree_sitter_haskell_persistent_external_scanner_serialize,
      tree_sitter_haskell_persistent_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
