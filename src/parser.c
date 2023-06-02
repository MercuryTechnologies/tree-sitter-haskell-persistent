#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 572
#define LARGE_STATE_COUNT 24
#define SYMBOL_COUNT 181
#define ALIAS_COUNT 5
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 23

enum {
  sym__varid = 1,
  sym_is_sum_marker = 2,
  sym__doc_comment = 3,
  aux_sym_comment_token1 = 4,
  aux_sym_comment_token2 = 5,
  anon_sym_Id = 6,
  anon_sym_Primary = 7,
  aux_sym_key_value_attribute_token1 = 8,
  anon_sym_EQ = 9,
  aux_sym__key_value_atribute_value_other_token_token1 = 10,
  sym_exl_mark_attribute = 11,
  sym__field_strictness_prefix = 12,
  sym_cascade_action = 13,
  sym__sql_constraint_name = 14,
  anon_sym_Foreign = 15,
  anon_sym_References = 16,
  anon_sym_deriving = 17,
  sym_comma = 18,
  anon_sym_DOT = 19,
  sym__consym = 20,
  sym__tyconsym = 21,
  sym_float = 22,
  sym_char = 23,
  sym_string = 24,
  sym__integer_literal = 25,
  sym__binary_literal = 26,
  sym__octal_literal = 27,
  sym__hex_literal = 28,
  anon_sym_ = 29,
  anon_sym_EQ_GT = 30,
  anon_sym_2 = 31,
  anon_sym_DASH_GT = 32,
  anon_sym_3 = 33,
  anon_sym_LT_DASH = 34,
  anon_sym_4 = 35,
  anon_sym_COLON_COLON = 36,
  sym__immediate_dot = 37,
  sym_pragma = 38,
  sym_label = 39,
  anon_sym_DASH = 40,
  anon_sym_LPAREN = 41,
  anon_sym_RPAREN = 42,
  anon_sym_BQUOTE = 43,
  sym_implicit_parid = 44,
  sym__conid = 45,
  anon_sym_LBRACK = 46,
  anon_sym_RBRACK = 47,
  anon_sym_SQUOTE = 48,
  anon_sym_pattern = 49,
  anon_sym_type = 50,
  anon_sym_hiding = 51,
  anon_sym_import = 52,
  anon_sym_qualified = 53,
  anon_sym_as = 54,
  anon_sym_module = 55,
  anon_sym_LBRACE = 56,
  anon_sym_RBRACE = 57,
  anon_sym_forall = 58,
  anon_sym_5 = 59,
  anon_sym_PIPE = 60,
  anon_sym_STAR = 61,
  anon_sym_6 = 62,
  anon_sym_AT = 63,
  anon_sym_PERCENT = 64,
  anon_sym_instance = 65,
  anon_sym_representational = 66,
  anon_sym_nominal = 67,
  anon_sym_phantom = 68,
  anon_sym__ = 69,
  anon_sym_role = 70,
  sym__newline = 71,
  sym__indent = 72,
  sym__dedent = 73,
  sym_quasi_quotation = 74,
  sym_entity_definition = 75,
  sym_entity_body = 76,
  sym_comment = 77,
  sym__entity_name = 78,
  sym__field_name = 79,
  sym__haskell_constraint_name = 80,
  sym__persistent_type = 81,
  sym__entity_header = 82,
  sym__entity_line_definition = 83,
  sym__entity_key = 84,
  sym_surrogate_key = 85,
  sym_natural_key = 86,
  sym__key_attribute = 87,
  sym__entity_attribute = 88,
  sym__field_attribute = 89,
  sym_key_value_attribute = 90,
  sym__key_value_attribute_value = 91,
  sym__key_value_atribute_value_literal = 92,
  sym__key_value_atribute_value_other_token = 93,
  sym_other_attribute = 94,
  sym_field_definition = 95,
  sym_unique_constraint = 96,
  sym__unique_constraint_attribute = 97,
  sym_foreign_constraint = 98,
  sym_entity_derives = 99,
  sym__dot = 100,
  sym_integer = 101,
  sym__literal = 102,
  sym__carrow = 103,
  sym__arrow = 104,
  sym__colon2 = 105,
  sym_variable = 106,
  sym_constructor = 107,
  sym_constructor_operator = 108,
  sym_qualified_constructor_operator = 109,
  sym_con_unit = 110,
  sym_con_list = 111,
  sym_con_tuple = 112,
  sym_qualified_type = 113,
  sym__type_operator = 114,
  sym_qualified_type_operator = 115,
  sym__qualified_type_operator = 116,
  sym__ticked_qtycon = 117,
  sym__qtyconops = 118,
  sym__promoted_tyconop = 119,
  sym__qtyconop = 120,
  sym_tycon_arrow = 121,
  sym_type_literal = 122,
  sym__promoted_tycon = 123,
  sym__modid = 124,
  aux_sym__qualifying_module = 125,
  sym_type_variable = 126,
  sym_annotated_type_variable = 127,
  sym_inferred_type_variable = 128,
  sym__quantifier = 129,
  sym__forall_kw = 130,
  sym__forall_dot = 131,
  sym__forall = 132,
  sym_type_parens = 133,
  sym_type_list = 134,
  sym__type_tuple = 135,
  sym_type_tuple = 136,
  sym__type_promotable_literal = 137,
  sym__type_promoted_literal = 138,
  sym__type_literal = 139,
  sym_type_name = 140,
  sym_type_star = 141,
  sym__atype = 142,
  sym_type_invisible = 143,
  sym_type_apply = 144,
  sym__btype = 145,
  sym_implicit_param = 146,
  sym_type_infix = 147,
  sym__type_infix = 148,
  sym_constraint = 149,
  sym__quantified_constraint = 150,
  sym__constraint_context = 151,
  sym__constraint = 152,
  sym__context_constraints = 153,
  sym__context = 154,
  sym__type_quantifiers = 155,
  sym__type_context = 156,
  sym_modifier = 157,
  sym__fun_arrow = 158,
  sym__type_fun = 159,
  sym__type = 160,
  sym__type_or_implicit = 161,
  sym__type_annotation = 162,
  sym_kind = 163,
  sym__type_with_kind = 164,
  aux_sym_quasi_quotation_repeat1 = 165,
  aux_sym_entity_body_repeat1 = 166,
  aux_sym_entity_body_repeat2 = 167,
  aux_sym__entity_header_repeat1 = 168,
  aux_sym_surrogate_key_repeat1 = 169,
  aux_sym_natural_key_repeat1 = 170,
  aux_sym_field_definition_repeat1 = 171,
  aux_sym_unique_constraint_repeat1 = 172,
  aux_sym_foreign_constraint_repeat1 = 173,
  aux_sym_entity_derives_repeat1 = 174,
  aux_sym_con_tuple_repeat1 = 175,
  aux_sym__forall_repeat1 = 176,
  aux_sym_type_list_repeat1 = 177,
  aux_sym_type_apply_repeat1 = 178,
  aux_sym_constraint_repeat1 = 179,
  aux_sym__context_constraints_repeat1 = 180,
  alias_sym_attributes = 181,
  alias_sym_class_name = 182,
  alias_sym_module = 183,
  alias_sym_name = 184,
  alias_sym_type = 185,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__varid] = "_varid",
  [sym_is_sum_marker] = "is_sum_marker",
  [sym__doc_comment] = "_doc_comment",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_Id] = "Id",
  [anon_sym_Primary] = "Primary",
  [aux_sym_key_value_attribute_token1] = "key_value_attribute_token1",
  [anon_sym_EQ] = "=",
  [aux_sym__key_value_atribute_value_other_token_token1] = "string",
  [sym_exl_mark_attribute] = "exl_mark_attribute",
  [sym__field_strictness_prefix] = "_field_strictness_prefix",
  [sym_cascade_action] = "cascade_action",
  [sym__sql_constraint_name] = "_sql_constraint_name",
  [anon_sym_Foreign] = "Foreign",
  [anon_sym_References] = "References",
  [anon_sym_deriving] = "deriving",
  [sym_comma] = "comma",
  [anon_sym_DOT] = ".",
  [sym__consym] = "_consym",
  [sym__tyconsym] = "type_operator",
  [sym_float] = "float",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym__integer_literal] = "_integer_literal",
  [sym__binary_literal] = "_binary_literal",
  [sym__octal_literal] = "_octal_literal",
  [sym__hex_literal] = "_hex_literal",
  [anon_sym_] = "⇒",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_2] = "→",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_3] = "←",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_4] = "∷",
  [anon_sym_COLON_COLON] = "::",
  [sym__immediate_dot] = "_immediate_dot",
  [sym_pragma] = "pragma",
  [sym_label] = "label",
  [anon_sym_DASH] = "operator",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_BQUOTE] = "`",
  [sym_implicit_parid] = "implicit_parid",
  [sym__conid] = "_conid",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_pattern] = "pattern",
  [anon_sym_type] = "type",
  [anon_sym_hiding] = "hiding",
  [anon_sym_import] = "import",
  [anon_sym_qualified] = "qualified",
  [anon_sym_as] = "as",
  [anon_sym_module] = "module",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_forall] = "forall",
  [anon_sym_5] = "∀",
  [anon_sym_PIPE] = "|",
  [anon_sym_STAR] = "*",
  [anon_sym_6] = "★",
  [anon_sym_AT] = "@",
  [anon_sym_PERCENT] = "%",
  [anon_sym_instance] = "instance",
  [anon_sym_representational] = "representational",
  [anon_sym_nominal] = "nominal",
  [anon_sym_phantom] = "phantom",
  [anon_sym__] = "_",
  [anon_sym_role] = "role",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_quasi_quotation] = "quasi_quotation",
  [sym_entity_definition] = "entity_definition",
  [sym_entity_body] = "entity_body",
  [sym_comment] = "comment",
  [sym__entity_name] = "_entity_name",
  [sym__field_name] = "_field_name",
  [sym__haskell_constraint_name] = "_haskell_constraint_name",
  [sym__persistent_type] = "_persistent_type",
  [sym__entity_header] = "_entity_header",
  [sym__entity_line_definition] = "_entity_line_definition",
  [sym__entity_key] = "_entity_key",
  [sym_surrogate_key] = "surrogate_key",
  [sym_natural_key] = "natural_key",
  [sym__key_attribute] = "_key_attribute",
  [sym__entity_attribute] = "_entity_attribute",
  [sym__field_attribute] = "_field_attribute",
  [sym_key_value_attribute] = "key_value_attribute",
  [sym__key_value_attribute_value] = "_key_value_attribute_value",
  [sym__key_value_atribute_value_literal] = "_key_value_atribute_value_literal",
  [sym__key_value_atribute_value_other_token] = "_key_value_atribute_value_other_token",
  [sym_other_attribute] = "other_attribute",
  [sym_field_definition] = "field_definition",
  [sym_unique_constraint] = "unique_constraint",
  [sym__unique_constraint_attribute] = "_unique_constraint_attribute",
  [sym_foreign_constraint] = "foreign_constraint",
  [sym_entity_derives] = "entity_derives",
  [sym__dot] = "_dot",
  [sym_integer] = "integer",
  [sym__literal] = "_literal",
  [sym__carrow] = "_carrow",
  [sym__arrow] = "_arrow",
  [sym__colon2] = "_colon2",
  [sym_variable] = "variable",
  [sym_constructor] = "constructor",
  [sym_constructor_operator] = "constructor_operator",
  [sym_qualified_constructor_operator] = "qualified_constructor_operator",
  [sym_con_unit] = "con_unit",
  [sym_con_list] = "con_list",
  [sym_con_tuple] = "con_tuple",
  [sym_qualified_type] = "qualified_type",
  [sym__type_operator] = "_type_operator",
  [sym_qualified_type_operator] = "qualified_type_operator",
  [sym__qualified_type_operator] = "_qualified_type_operator",
  [sym__ticked_qtycon] = "ticked",
  [sym__qtyconops] = "_qtyconops",
  [sym__promoted_tyconop] = "promoted",
  [sym__qtyconop] = "_qtyconop",
  [sym_tycon_arrow] = "tycon_arrow",
  [sym_type_literal] = "type_literal",
  [sym__promoted_tycon] = "promoted",
  [sym__modid] = "_modid",
  [aux_sym__qualifying_module] = "_qualifying_module",
  [sym_type_variable] = "type_variable",
  [sym_annotated_type_variable] = "annotated_type_variable",
  [sym_inferred_type_variable] = "inferred_type_variable",
  [sym__quantifier] = "_quantifier",
  [sym__forall_kw] = "_forall_kw",
  [sym__forall_dot] = "_forall_dot",
  [sym__forall] = "quantifiers",
  [sym_type_parens] = "type_parens",
  [sym_type_list] = "type_list",
  [sym__type_tuple] = "_type_tuple",
  [sym_type_tuple] = "type_tuple",
  [sym__type_promotable_literal] = "_type_promotable_literal",
  [sym__type_promoted_literal] = "promoted",
  [sym__type_literal] = "_type_literal",
  [sym_type_name] = "type_name",
  [sym_type_star] = "type_star",
  [sym__atype] = "_atype",
  [sym_type_invisible] = "type_invisible",
  [sym_type_apply] = "type_apply",
  [sym__btype] = "_btype",
  [sym_implicit_param] = "implicit_param",
  [sym_type_infix] = "type_infix",
  [sym__type_infix] = "_type_infix",
  [sym_constraint] = "constraint",
  [sym__quantified_constraint] = "forall",
  [sym__constraint_context] = "context",
  [sym__constraint] = "_constraint",
  [sym__context_constraints] = "_context_constraints",
  [sym__context] = "_context",
  [sym__type_quantifiers] = "forall",
  [sym__type_context] = "context",
  [sym_modifier] = "modifier",
  [sym__fun_arrow] = "_fun_arrow",
  [sym__type_fun] = "fun",
  [sym__type] = "_type",
  [sym__type_or_implicit] = "_type_or_implicit",
  [sym__type_annotation] = "_type_annotation",
  [sym_kind] = "kind",
  [sym__type_with_kind] = "_type_with_kind",
  [aux_sym_quasi_quotation_repeat1] = "quasi_quotation_repeat1",
  [aux_sym_entity_body_repeat1] = "entity_body_repeat1",
  [aux_sym_entity_body_repeat2] = "entity_body_repeat2",
  [aux_sym__entity_header_repeat1] = "_entity_header_repeat1",
  [aux_sym_surrogate_key_repeat1] = "surrogate_key_repeat1",
  [aux_sym_natural_key_repeat1] = "natural_key_repeat1",
  [aux_sym_field_definition_repeat1] = "field_definition_repeat1",
  [aux_sym_unique_constraint_repeat1] = "unique_constraint_repeat1",
  [aux_sym_foreign_constraint_repeat1] = "foreign_constraint_repeat1",
  [aux_sym_entity_derives_repeat1] = "entity_derives_repeat1",
  [aux_sym_con_tuple_repeat1] = "con_tuple_repeat1",
  [aux_sym__forall_repeat1] = "_forall_repeat1",
  [aux_sym_type_list_repeat1] = "type_list_repeat1",
  [aux_sym_type_apply_repeat1] = "type_apply_repeat1",
  [aux_sym_constraint_repeat1] = "constraint_repeat1",
  [aux_sym__context_constraints_repeat1] = "_context_constraints_repeat1",
  [alias_sym_attributes] = "attributes",
  [alias_sym_class_name] = "class_name",
  [alias_sym_module] = "module",
  [alias_sym_name] = "name",
  [alias_sym_type] = "type",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__varid] = sym__varid,
  [sym_is_sum_marker] = sym_is_sum_marker,
  [sym__doc_comment] = sym__doc_comment,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_Id] = anon_sym_Id,
  [anon_sym_Primary] = anon_sym_Primary,
  [aux_sym_key_value_attribute_token1] = aux_sym_key_value_attribute_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym__key_value_atribute_value_other_token_token1] = sym_string,
  [sym_exl_mark_attribute] = sym_exl_mark_attribute,
  [sym__field_strictness_prefix] = sym__field_strictness_prefix,
  [sym_cascade_action] = sym_cascade_action,
  [sym__sql_constraint_name] = sym__sql_constraint_name,
  [anon_sym_Foreign] = anon_sym_Foreign,
  [anon_sym_References] = anon_sym_References,
  [anon_sym_deriving] = anon_sym_deriving,
  [sym_comma] = sym_comma,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym__consym] = sym__consym,
  [sym__tyconsym] = sym__tyconsym,
  [sym_float] = sym_float,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [sym__integer_literal] = sym__integer_literal,
  [sym__binary_literal] = sym__binary_literal,
  [sym__octal_literal] = sym__octal_literal,
  [sym__hex_literal] = sym__hex_literal,
  [anon_sym_] = anon_sym_,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym__immediate_dot] = sym__immediate_dot,
  [sym_pragma] = sym_pragma,
  [sym_label] = sym_label,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [sym_implicit_parid] = sym_implicit_parid,
  [sym__conid] = sym__conid,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_pattern] = anon_sym_pattern,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_hiding] = anon_sym_hiding,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_qualified] = anon_sym_qualified,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_forall] = anon_sym_forall,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_instance] = anon_sym_instance,
  [anon_sym_representational] = anon_sym_representational,
  [anon_sym_nominal] = anon_sym_nominal,
  [anon_sym_phantom] = anon_sym_phantom,
  [anon_sym__] = anon_sym__,
  [anon_sym_role] = anon_sym_role,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_quasi_quotation] = sym_quasi_quotation,
  [sym_entity_definition] = sym_entity_definition,
  [sym_entity_body] = sym_entity_body,
  [sym_comment] = sym_comment,
  [sym__entity_name] = sym__entity_name,
  [sym__field_name] = sym__field_name,
  [sym__haskell_constraint_name] = sym__haskell_constraint_name,
  [sym__persistent_type] = sym__persistent_type,
  [sym__entity_header] = sym__entity_header,
  [sym__entity_line_definition] = sym__entity_line_definition,
  [sym__entity_key] = sym__entity_key,
  [sym_surrogate_key] = sym_surrogate_key,
  [sym_natural_key] = sym_natural_key,
  [sym__key_attribute] = sym__key_attribute,
  [sym__entity_attribute] = sym__entity_attribute,
  [sym__field_attribute] = sym__field_attribute,
  [sym_key_value_attribute] = sym_key_value_attribute,
  [sym__key_value_attribute_value] = sym__key_value_attribute_value,
  [sym__key_value_atribute_value_literal] = sym__key_value_atribute_value_literal,
  [sym__key_value_atribute_value_other_token] = sym__key_value_atribute_value_other_token,
  [sym_other_attribute] = sym_other_attribute,
  [sym_field_definition] = sym_field_definition,
  [sym_unique_constraint] = sym_unique_constraint,
  [sym__unique_constraint_attribute] = sym__unique_constraint_attribute,
  [sym_foreign_constraint] = sym_foreign_constraint,
  [sym_entity_derives] = sym_entity_derives,
  [sym__dot] = sym__dot,
  [sym_integer] = sym_integer,
  [sym__literal] = sym__literal,
  [sym__carrow] = sym__carrow,
  [sym__arrow] = sym__arrow,
  [sym__colon2] = sym__colon2,
  [sym_variable] = sym_variable,
  [sym_constructor] = sym_constructor,
  [sym_constructor_operator] = sym_constructor_operator,
  [sym_qualified_constructor_operator] = sym_qualified_constructor_operator,
  [sym_con_unit] = sym_con_unit,
  [sym_con_list] = sym_con_list,
  [sym_con_tuple] = sym_con_tuple,
  [sym_qualified_type] = sym_qualified_type,
  [sym__type_operator] = sym__type_operator,
  [sym_qualified_type_operator] = sym_qualified_type_operator,
  [sym__qualified_type_operator] = sym__qualified_type_operator,
  [sym__ticked_qtycon] = sym__ticked_qtycon,
  [sym__qtyconops] = sym__qtyconops,
  [sym__promoted_tyconop] = sym__promoted_tyconop,
  [sym__qtyconop] = sym__qtyconop,
  [sym_tycon_arrow] = sym_tycon_arrow,
  [sym_type_literal] = sym_type_literal,
  [sym__promoted_tycon] = sym__promoted_tyconop,
  [sym__modid] = sym__modid,
  [aux_sym__qualifying_module] = aux_sym__qualifying_module,
  [sym_type_variable] = sym_type_variable,
  [sym_annotated_type_variable] = sym_annotated_type_variable,
  [sym_inferred_type_variable] = sym_inferred_type_variable,
  [sym__quantifier] = sym__quantifier,
  [sym__forall_kw] = sym__forall_kw,
  [sym__forall_dot] = sym__forall_dot,
  [sym__forall] = sym__forall,
  [sym_type_parens] = sym_type_parens,
  [sym_type_list] = sym_type_list,
  [sym__type_tuple] = sym__type_tuple,
  [sym_type_tuple] = sym_type_tuple,
  [sym__type_promotable_literal] = sym__type_promotable_literal,
  [sym__type_promoted_literal] = sym__promoted_tyconop,
  [sym__type_literal] = sym__type_literal,
  [sym_type_name] = sym_type_name,
  [sym_type_star] = sym_type_star,
  [sym__atype] = sym__atype,
  [sym_type_invisible] = sym_type_invisible,
  [sym_type_apply] = sym_type_apply,
  [sym__btype] = sym__btype,
  [sym_implicit_param] = sym_implicit_param,
  [sym_type_infix] = sym_type_infix,
  [sym__type_infix] = sym__type_infix,
  [sym_constraint] = sym_constraint,
  [sym__quantified_constraint] = sym__quantified_constraint,
  [sym__constraint_context] = sym__constraint_context,
  [sym__constraint] = sym__constraint,
  [sym__context_constraints] = sym__context_constraints,
  [sym__context] = sym__context,
  [sym__type_quantifiers] = sym__quantified_constraint,
  [sym__type_context] = sym__constraint_context,
  [sym_modifier] = sym_modifier,
  [sym__fun_arrow] = sym__fun_arrow,
  [sym__type_fun] = sym__type_fun,
  [sym__type] = sym__type,
  [sym__type_or_implicit] = sym__type_or_implicit,
  [sym__type_annotation] = sym__type_annotation,
  [sym_kind] = sym_kind,
  [sym__type_with_kind] = sym__type_with_kind,
  [aux_sym_quasi_quotation_repeat1] = aux_sym_quasi_quotation_repeat1,
  [aux_sym_entity_body_repeat1] = aux_sym_entity_body_repeat1,
  [aux_sym_entity_body_repeat2] = aux_sym_entity_body_repeat2,
  [aux_sym__entity_header_repeat1] = aux_sym__entity_header_repeat1,
  [aux_sym_surrogate_key_repeat1] = aux_sym_surrogate_key_repeat1,
  [aux_sym_natural_key_repeat1] = aux_sym_natural_key_repeat1,
  [aux_sym_field_definition_repeat1] = aux_sym_field_definition_repeat1,
  [aux_sym_unique_constraint_repeat1] = aux_sym_unique_constraint_repeat1,
  [aux_sym_foreign_constraint_repeat1] = aux_sym_foreign_constraint_repeat1,
  [aux_sym_entity_derives_repeat1] = aux_sym_entity_derives_repeat1,
  [aux_sym_con_tuple_repeat1] = aux_sym_con_tuple_repeat1,
  [aux_sym__forall_repeat1] = aux_sym__forall_repeat1,
  [aux_sym_type_list_repeat1] = aux_sym_type_list_repeat1,
  [aux_sym_type_apply_repeat1] = aux_sym_type_apply_repeat1,
  [aux_sym_constraint_repeat1] = aux_sym_constraint_repeat1,
  [aux_sym__context_constraints_repeat1] = aux_sym__context_constraints_repeat1,
  [alias_sym_attributes] = alias_sym_attributes,
  [alias_sym_class_name] = alias_sym_class_name,
  [alias_sym_module] = alias_sym_module,
  [alias_sym_name] = alias_sym_name,
  [alias_sym_type] = alias_sym_type,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__varid] = {
    .visible = false,
    .named = true,
  },
  [sym_is_sum_marker] = {
    .visible = true,
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
  [aux_sym_key_value_attribute_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__key_value_atribute_value_other_token_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_exl_mark_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__field_strictness_prefix] = {
    .visible = false,
    .named = true,
  },
  [sym_cascade_action] = {
    .visible = true,
    .named = true,
  },
  [sym__sql_constraint_name] = {
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
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__consym] = {
    .visible = false,
    .named = true,
  },
  [sym__tyconsym] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
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
  [sym__integer_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__binary_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__octal_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__hex_literal] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__immediate_dot] = {
    .visible = false,
    .named = true,
  },
  [sym_pragma] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_implicit_parid] = {
    .visible = true,
    .named = true,
  },
  [sym__conid] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pattern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hiding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_qualified] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_representational] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nominal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_phantom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_role] = {
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
  [sym__persistent_type] = {
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
  [sym_surrogate_key] = {
    .visible = true,
    .named = true,
  },
  [sym_natural_key] = {
    .visible = true,
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
  [sym_key_value_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__key_value_attribute_value] = {
    .visible = false,
    .named = true,
  },
  [sym__key_value_atribute_value_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__key_value_atribute_value_other_token] = {
    .visible = false,
    .named = true,
  },
  [sym_other_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_field_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_unique_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym__unique_constraint_attribute] = {
    .visible = false,
    .named = true,
  },
  [sym_foreign_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_entity_derives] = {
    .visible = true,
    .named = true,
  },
  [sym__dot] = {
    .visible = false,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__carrow] = {
    .visible = false,
    .named = true,
  },
  [sym__arrow] = {
    .visible = false,
    .named = true,
  },
  [sym__colon2] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_constructor_operator] = {
    .visible = true,
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
  [sym_qualified_type] = {
    .visible = true,
    .named = true,
  },
  [sym__type_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_qualified_type_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__qualified_type_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__ticked_qtycon] = {
    .visible = true,
    .named = true,
  },
  [sym__qtyconops] = {
    .visible = false,
    .named = true,
  },
  [sym__promoted_tyconop] = {
    .visible = true,
    .named = true,
  },
  [sym__qtyconop] = {
    .visible = false,
    .named = true,
  },
  [sym_tycon_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym_type_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__promoted_tycon] = {
    .visible = true,
    .named = true,
  },
  [sym__modid] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__qualifying_module] = {
    .visible = false,
    .named = false,
  },
  [sym_type_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_annotated_type_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_inferred_type_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__quantifier] = {
    .visible = false,
    .named = true,
  },
  [sym__forall_kw] = {
    .visible = false,
    .named = true,
  },
  [sym__forall_dot] = {
    .visible = false,
    .named = true,
  },
  [sym__forall] = {
    .visible = true,
    .named = true,
  },
  [sym_type_parens] = {
    .visible = true,
    .named = true,
  },
  [sym_type_list] = {
    .visible = true,
    .named = true,
  },
  [sym__type_tuple] = {
    .visible = false,
    .named = true,
  },
  [sym_type_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym__type_promotable_literal] = {
    .visible = false,
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
  [sym_type_star] = {
    .visible = true,
    .named = true,
  },
  [sym__atype] = {
    .visible = false,
    .named = true,
  },
  [sym_type_invisible] = {
    .visible = true,
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
  [sym_implicit_param] = {
    .visible = true,
    .named = true,
  },
  [sym_type_infix] = {
    .visible = true,
    .named = true,
  },
  [sym__type_infix] = {
    .visible = false,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym__quantified_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym__constraint_context] = {
    .visible = true,
    .named = true,
  },
  [sym__constraint] = {
    .visible = false,
    .named = true,
  },
  [sym__context_constraints] = {
    .visible = false,
    .named = true,
  },
  [sym__context] = {
    .visible = false,
    .named = true,
  },
  [sym__type_quantifiers] = {
    .visible = true,
    .named = true,
  },
  [sym__type_context] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym__fun_arrow] = {
    .visible = false,
    .named = true,
  },
  [sym__type_fun] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym__type_or_implicit] = {
    .visible = false,
    .named = true,
  },
  [sym__type_annotation] = {
    .visible = false,
    .named = true,
  },
  [sym_kind] = {
    .visible = true,
    .named = true,
  },
  [sym__type_with_kind] = {
    .visible = false,
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
  [aux_sym_surrogate_key_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_natural_key_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unique_constraint_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_foreign_constraint_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_entity_derives_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_con_tuple_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__forall_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_apply_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constraint_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__context_constraints_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_module] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_type] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_class = 1,
  field_left = 2,
  field_name = 3,
  field_op = 4,
  field_right = 5,
  field_type = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_class] = "class",
  [field_left] = "left",
  [field_name] = "name",
  [field_op] = "op",
  [field_right] = "right",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [5] = {.index = 1, .length = 1},
  [6] = {.index = 2, .length = 1},
  [7] = {.index = 3, .length = 1},
  [8] = {.index = 4, .length = 1},
  [9] = {.index = 5, .length = 1},
  [11] = {.index = 4, .length = 1},
  [12] = {.index = 4, .length = 1},
  [13] = {.index = 6, .length = 1},
  [14] = {.index = 7, .length = 2},
  [15] = {.index = 5, .length = 1},
  [17] = {.index = 9, .length = 2},
  [18] = {.index = 11, .length = 2},
  [19] = {.index = 7, .length = 2},
  [20] = {.index = 13, .length = 1},
  [21] = {.index = 14, .length = 3},
  [22] = {.index = 9, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0, .inherited = true},
  [1] =
    {field_name, 0},
  [2] =
    {field_name, 1},
  [3] =
    {field_type, 1, .inherited = true},
  [4] =
    {field_class, 0},
  [5] =
    {field_type, 1},
  [6] =
    {field_class, 1, .inherited = true},
  [7] =
    {field_name, 0},
    {field_type, 1},
  [9] =
    {field_name, 1},
    {field_type, 2},
  [11] =
    {field_class, 0, .inherited = true},
    {field_class, 1, .inherited = true},
  [13] =
    {field_type, 0, .inherited = true},
  [14] =
    {field_left, 0},
    {field_op, 1},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_module,
  },
  [3] = {
    [0] = alias_sym_type,
  },
  [4] = {
    [1] = alias_sym_type,
  },
  [8] = {
    [0] = alias_sym_class_name,
  },
  [10] = {
    [0] = alias_sym_name,
  },
  [11] = {
    [0] = alias_sym_type,
  },
  [15] = {
    [2] = alias_sym_attributes,
  },
  [16] = {
    [2] = alias_sym_attributes,
  },
  [19] = {
    [2] = alias_sym_attributes,
  },
  [22] = {
    [3] = alias_sym_attributes,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_constructor, 3,
    sym_constructor,
    alias_sym_module,
    alias_sym_type,
  sym_type_name, 2,
    sym_type_name,
    alias_sym_class_name,
  aux_sym_surrogate_key_repeat1, 2,
    aux_sym_surrogate_key_repeat1,
    alias_sym_attributes,
  aux_sym_field_definition_repeat1, 2,
    aux_sym_field_definition_repeat1,
    alias_sym_attributes,
  aux_sym_unique_constraint_repeat1, 2,
    aux_sym_unique_constraint_repeat1,
    alias_sym_attributes,
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
  [7] = 6,
  [8] = 6,
  [9] = 6,
  [10] = 6,
  [11] = 6,
  [12] = 6,
  [13] = 6,
  [14] = 14,
  [15] = 14,
  [16] = 14,
  [17] = 14,
  [18] = 14,
  [19] = 14,
  [20] = 14,
  [21] = 14,
  [22] = 14,
  [23] = 14,
  [24] = 24,
  [25] = 24,
  [26] = 24,
  [27] = 24,
  [28] = 24,
  [29] = 24,
  [30] = 24,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 32,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 36,
  [40] = 40,
  [41] = 41,
  [42] = 38,
  [43] = 43,
  [44] = 40,
  [45] = 45,
  [46] = 37,
  [47] = 47,
  [48] = 47,
  [49] = 45,
  [50] = 38,
  [51] = 36,
  [52] = 43,
  [53] = 37,
  [54] = 43,
  [55] = 37,
  [56] = 56,
  [57] = 38,
  [58] = 36,
  [59] = 59,
  [60] = 38,
  [61] = 37,
  [62] = 36,
  [63] = 43,
  [64] = 37,
  [65] = 36,
  [66] = 38,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 69,
  [71] = 69,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 75,
  [77] = 75,
  [78] = 75,
  [79] = 79,
  [80] = 75,
  [81] = 75,
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
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 86,
  [104] = 104,
  [105] = 105,
  [106] = 82,
  [107] = 83,
  [108] = 108,
  [109] = 109,
  [110] = 85,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 91,
  [116] = 102,
  [117] = 109,
  [118] = 98,
  [119] = 112,
  [120] = 86,
  [121] = 89,
  [122] = 122,
  [123] = 96,
  [124] = 93,
  [125] = 94,
  [126] = 104,
  [127] = 90,
  [128] = 97,
  [129] = 114,
  [130] = 111,
  [131] = 82,
  [132] = 105,
  [133] = 99,
  [134] = 87,
  [135] = 83,
  [136] = 92,
  [137] = 113,
  [138] = 95,
  [139] = 88,
  [140] = 85,
  [141] = 101,
  [142] = 108,
  [143] = 100,
  [144] = 100,
  [145] = 93,
  [146] = 95,
  [147] = 111,
  [148] = 102,
  [149] = 114,
  [150] = 96,
  [151] = 99,
  [152] = 94,
  [153] = 85,
  [154] = 105,
  [155] = 90,
  [156] = 104,
  [157] = 89,
  [158] = 83,
  [159] = 87,
  [160] = 97,
  [161] = 112,
  [162] = 98,
  [163] = 82,
  [164] = 86,
  [165] = 88,
  [166] = 101,
  [167] = 92,
  [168] = 122,
  [169] = 113,
  [170] = 109,
  [171] = 108,
  [172] = 104,
  [173] = 94,
  [174] = 122,
  [175] = 93,
  [176] = 87,
  [177] = 105,
  [178] = 109,
  [179] = 96,
  [180] = 112,
  [181] = 89,
  [182] = 108,
  [183] = 92,
  [184] = 88,
  [185] = 100,
  [186] = 98,
  [187] = 90,
  [188] = 114,
  [189] = 102,
  [190] = 97,
  [191] = 113,
  [192] = 101,
  [193] = 99,
  [194] = 95,
  [195] = 111,
  [196] = 122,
  [197] = 83,
  [198] = 82,
  [199] = 199,
  [200] = 199,
  [201] = 199,
  [202] = 199,
  [203] = 85,
  [204] = 199,
  [205] = 199,
  [206] = 199,
  [207] = 199,
  [208] = 199,
  [209] = 199,
  [210] = 199,
  [211] = 199,
  [212] = 86,
  [213] = 114,
  [214] = 90,
  [215] = 87,
  [216] = 100,
  [217] = 93,
  [218] = 96,
  [219] = 102,
  [220] = 113,
  [221] = 111,
  [222] = 99,
  [223] = 223,
  [224] = 104,
  [225] = 92,
  [226] = 95,
  [227] = 89,
  [228] = 228,
  [229] = 101,
  [230] = 94,
  [231] = 86,
  [232] = 112,
  [233] = 109,
  [234] = 105,
  [235] = 97,
  [236] = 108,
  [237] = 88,
  [238] = 98,
  [239] = 122,
  [240] = 91,
  [241] = 241,
  [242] = 85,
  [243] = 83,
  [244] = 86,
  [245] = 83,
  [246] = 82,
  [247] = 85,
  [248] = 82,
  [249] = 89,
  [250] = 114,
  [251] = 109,
  [252] = 95,
  [253] = 253,
  [254] = 108,
  [255] = 96,
  [256] = 113,
  [257] = 112,
  [258] = 98,
  [259] = 104,
  [260] = 87,
  [261] = 88,
  [262] = 105,
  [263] = 102,
  [264] = 92,
  [265] = 100,
  [266] = 266,
  [267] = 111,
  [268] = 99,
  [269] = 93,
  [270] = 94,
  [271] = 90,
  [272] = 97,
  [273] = 273,
  [274] = 101,
  [275] = 275,
  [276] = 275,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 287,
  [299] = 299,
  [300] = 287,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 287,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 306,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 310,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 307,
  [317] = 287,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 101,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 85,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 101,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 336,
  [368] = 368,
  [369] = 353,
  [370] = 370,
  [371] = 371,
  [372] = 287,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 83,
  [377] = 82,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 378,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 85,
  [389] = 389,
  [390] = 386,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 83,
  [395] = 395,
  [396] = 386,
  [397] = 85,
  [398] = 386,
  [399] = 399,
  [400] = 386,
  [401] = 393,
  [402] = 296,
  [403] = 386,
  [404] = 386,
  [405] = 405,
  [406] = 386,
  [407] = 407,
  [408] = 82,
  [409] = 386,
  [410] = 386,
  [411] = 386,
  [412] = 86,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 297,
  [417] = 417,
  [418] = 418,
  [419] = 86,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 101,
  [424] = 296,
  [425] = 425,
  [426] = 97,
  [427] = 422,
  [428] = 425,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 92,
  [440] = 440,
  [441] = 441,
  [442] = 100,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 95,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 422,
  [451] = 433,
  [452] = 435,
  [453] = 425,
  [454] = 454,
  [455] = 422,
  [456] = 433,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 108,
  [464] = 297,
  [465] = 465,
  [466] = 435,
  [467] = 467,
  [468] = 111,
  [469] = 425,
  [470] = 99,
  [471] = 86,
  [472] = 472,
  [473] = 433,
  [474] = 435,
  [475] = 475,
  [476] = 94,
  [477] = 477,
  [478] = 90,
  [479] = 98,
  [480] = 88,
  [481] = 481,
  [482] = 425,
  [483] = 483,
  [484] = 102,
  [485] = 422,
  [486] = 435,
  [487] = 433,
  [488] = 422,
  [489] = 433,
  [490] = 114,
  [491] = 425,
  [492] = 104,
  [493] = 493,
  [494] = 89,
  [495] = 112,
  [496] = 435,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 417,
  [501] = 96,
  [502] = 93,
  [503] = 425,
  [504] = 435,
  [505] = 433,
  [506] = 422,
  [507] = 109,
  [508] = 105,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 108,
  [513] = 96,
  [514] = 93,
  [515] = 90,
  [516] = 97,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 454,
  [529] = 529,
  [530] = 530,
  [531] = 530,
  [532] = 532,
  [533] = 532,
  [534] = 534,
  [535] = 530,
  [536] = 536,
  [537] = 530,
  [538] = 536,
  [539] = 534,
  [540] = 532,
  [541] = 541,
  [542] = 536,
  [543] = 534,
  [544] = 532,
  [545] = 536,
  [546] = 534,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 536,
  [551] = 530,
  [552] = 532,
  [553] = 553,
  [554] = 554,
  [555] = 534,
  [556] = 534,
  [557] = 557,
  [558] = 532,
  [559] = 559,
  [560] = 560,
  [561] = 534,
  [562] = 536,
  [563] = 530,
  [564] = 532,
  [565] = 536,
  [566] = 530,
  [567] = 532,
  [568] = 568,
  [569] = 530,
  [570] = 536,
  [571] = 571,
};

static inline bool aux_sym_comment_token2_character_set_1(int32_t c) {
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

static inline bool aux_sym_comment_token2_character_set_2(int32_t c) {
  return (c < '<'
    ? (c < '+'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < ':'
        ? (c >= '-' && c <= '/')
        : c <= ':')))
    : (c <= '@' || (c < '~'
      ? (c < '|'
        ? c == '^'
        : c <= '|')
      : (c <= '~' || c == 8902))));
}

static inline bool sym__consym_character_set_1(int32_t c) {
  return (c < '<'
    ? (c < '+'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c >= '-' && c <= '/')))
    : (c <= '@' || (c < '~'
      ? (c < '|'
        ? c == '^'
        : c <= '|')
      : (c <= '~' || c == 8902))));
}

static inline bool sym__tyconsym_character_set_1(int32_t c) {
  return (c < '<'
    ? (c < '+'
      ? (c < '$'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c >= '.' && c <= '/')))
    : (c <= '@' || (c < '~'
      ? (c < '|'
        ? c == '^'
        : c <= '|')
      : (c <= '~' || c == 8902))));
}

static inline bool sym__tyconsym_character_set_2(int32_t c) {
  return (c < '<'
    ? (c < '+'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < ':'
        ? (c >= '.' && c <= '/')
        : c <= ':')))
    : (c <= '@' || (c < '~'
      ? (c < '|'
        ? c == '^'
        : c <= '|')
      : (c <= '~' || c == 8902))));
}

static inline bool sym__varid_character_set_1(int32_t c) {
  return (c < 7749
    ? (c < 987
      ? (c < 424
        ? (c < 326
          ? (c < 287
            ? (c < 267
              ? (c < 257
                ? (c < 223
                  ? (c < 181
                    ? (c >= '_' && c <= 'z')
                    : c <= 181)
                  : (c <= 246 || (c >= 248 && c <= 255)))
                : (c <= 257 || (c < 263
                  ? (c < 261
                    ? c == 259
                    : c <= 261)
                  : (c <= 263 || c == 265))))
              : (c <= 267 || (c < 277
                ? (c < 273
                  ? (c < 271
                    ? c == 269
                    : c <= 271)
                  : (c <= 273 || c == 275))
                : (c <= 277 || (c < 283
                  ? (c < 281
                    ? c == 279
                    : c <= 281)
                  : (c <= 283 || c == 285))))))
            : (c <= 287 || (c < 307
              ? (c < 297
                ? (c < 293
                  ? (c < 291
                    ? c == 289
                    : c <= 291)
                  : (c <= 293 || c == 295))
                : (c <= 297 || (c < 303
                  ? (c < 301
                    ? c == 299
                    : c <= 301)
                  : (c <= 303 || c == 305))))
              : (c <= 307 || (c < 318
                ? (c < 314
                  ? (c < 311
                    ? c == 309
                    : c <= 312)
                  : (c <= 314 || c == 316))
                : (c <= 318 || (c < 322
                  ? c == 320
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

static inline bool sym__varid_character_set_3(int32_t c) {
  return (c < 8458
    ? (c < 7296
      ? (c < 891
        ? (c < 445
          ? (c < 223
            ? (c < 181
              ? (c >= '_' && c <= 'z')
              : c <= 181)
            : (c <= 246 || (c >= 248 && c <= 442)))
          : (c <= 447 || (c < 881
            ? (c < 661
              ? (c >= 454 && c <= 659)
              : c <= 687)
            : (c <= 883 || c == 887))))
        : (c <= 893 || (c < 1376
          ? (c < 1016
            ? (c < 940
              ? c == 912
              : c <= 1013)
            : (c <= 1153 || (c >= 1163 && c <= 1327)))
          : (c <= 1416 || (c < 4349
            ? (c >= 4304 && c <= 4346)
            : (c <= 4351 || (c >= 5112 && c <= 5117)))))))
      : (c <= 7304 || (c < 8118
        ? (c < 7968
          ? (c < 7545
            ? (c < 7531
              ? (c >= 7424 && c <= 7467)
              : c <= 7543)
            : (c <= 7578 || (c >= 7681 && c <= 7957)))
          : (c <= 8005 || (c < 8032
            ? (c >= 8016 && c <= 8023)
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

static inline bool sym__varid_character_set_4(int32_t c) {
  return (c < 7751
    ? (c < 989
      ? (c < 426
        ? (c < 328
          ? (c < 289
            ? (c < 269
              ? (c < 259
                ? (c < 248
                  ? (c < 223
                    ? c == 181
                    : c <= 246)
                  : (c <= 255 || c == 257))
                : (c <= 259 || (c < 265
                  ? (c < 263
                    ? c == 261
                    : c <= 263)
                  : (c <= 265 || c == 267))))
              : (c <= 269 || (c < 279
                ? (c < 275
                  ? (c < 273
                    ? c == 271
                    : c <= 273)
                  : (c <= 275 || c == 277))
                : (c <= 279 || (c < 285
                  ? (c < 283
                    ? c == 281
                    : c <= 283)
                  : (c <= 285 || c == 287))))))
            : (c <= 289 || (c < 309
              ? (c < 299
                ? (c < 295
                  ? (c < 293
                    ? c == 291
                    : c <= 293)
                  : (c <= 295 || c == 297))
                : (c <= 299 || (c < 305
                  ? (c < 303
                    ? c == 301
                    : c <= 303)
                  : (c <= 305 || c == 307))))
              : (c <= 309 || (c < 320
                ? (c < 316
                  ? (c < 314
                    ? (c >= 311 && c <= 312)
                    : c <= 314)
                  : (c <= 316 || c == 318))
                : (c <= 320 || (c < 324
                  ? c == 322
                  : (c <= 324 || c == 326))))))))
          : (c <= 329 || (c < 369
            ? (c < 349
              ? (c < 339
                ? (c < 335
                  ? (c < 333
                    ? c == 331
                    : c <= 333)
                  : (c <= 335 || c == 337))
                : (c <= 339 || (c < 345
                  ? (c < 343
                    ? c == 341
                    : c <= 343)
                  : (c <= 345 || c == 347))))
              : (c <= 349 || (c < 359
                ? (c < 355
                  ? (c < 353
                    ? c == 351
                    : c <= 353)
                  : (c <= 355 || c == 357))
                : (c <= 359 || (c < 365
                  ? (c < 363
                    ? c == 361
                    : c <= 363)
                  : (c <= 365 || c == 367))))))
            : (c <= 369 || (c < 396
              ? (c < 380
                ? (c < 375
                  ? (c < 373
                    ? c == 371
                    : c <= 373)
                  : (c <= 375 || c == 378))
                : (c <= 380 || (c < 389
                  ? (c < 387
                    ? (c >= 382 && c <= 384)
                    : c <= 387)
                  : (c <= 389 || c == 392))))
              : (c <= 397 || (c < 417
                ? (c < 409
                  ? (c < 405
                    ? c == 402
                    : c <= 405)
                  : (c <= 411 || c == 414))
                : (c <= 417 || (c < 421
                  ? c == 419
                  : (c <= 421 || c == 424))))))))))
        : (c <= 427 || (c < 525
          ? (c < 483
            ? (c < 462
              ? (c < 441
                ? (c < 436
                  ? (c < 432
                    ? c == 429
                    : c <= 432)
                  : (c <= 436 || c == 438))
                : (c <= 442 || (c < 457
                  ? (c < 454
                    ? (c >= 445 && c <= 447)
                    : c <= 454)
                  : (c <= 457 || c == 460))))
              : (c <= 462 || (c < 472
                ? (c < 468
                  ? (c < 466
                    ? c == 464
                    : c <= 466)
                  : (c <= 468 || c == 470))
                : (c <= 472 || (c < 479
                  ? (c < 476
                    ? c == 474
                    : c <= 477)
                  : (c <= 479 || c == 481))))))
            : (c <= 483 || (c < 507
              ? (c < 493
                ? (c < 489
                  ? (c < 487
                    ? c == 485
                    : c <= 487)
                  : (c <= 489 || c == 491))
                : (c <= 493 || (c < 501
                  ? (c < 499
                    ? (c >= 495 && c <= 496)
                    : c <= 499)
                  : (c <= 501 || c == 505))))
              : (c <= 507 || (c < 517
                ? (c < 513
                  ? (c < 511
                    ? c == 509
                    : c <= 511)
                  : (c <= 513 || c == 515))
                : (c <= 517 || (c < 521
                  ? c == 519
                  : (c <= 521 || c == 523))))))))
          : (c <= 525 || (c < 572
            ? (c < 545
              ? (c < 535
                ? (c < 531
                  ? (c < 529
                    ? c == 527
                    : c <= 529)
                  : (c <= 531 || c == 533))
                : (c <= 535 || (c < 541
                  ? (c < 539
                    ? c == 537
                    : c <= 539)
                  : (c <= 541 || c == 543))))
              : (c <= 545 || (c < 555
                ? (c < 551
                  ? (c < 549
                    ? c == 547
                    : c <= 549)
                  : (c <= 551 || c == 553))
                : (c <= 555 || (c < 561
                  ? (c < 559
                    ? c == 557
                    : c <= 559)
                  : (c <= 561 || (c >= 563 && c <= 569)))))))
            : (c <= 572 || (c < 883
              ? (c < 587
                ? (c < 583
                  ? (c < 578
                    ? (c >= 575 && c <= 576)
                    : c <= 578)
                  : (c <= 583 || c == 585))
                : (c <= 587 || (c < 661
                  ? (c < 591
                    ? c == 589
                    : c <= 659)
                  : (c <= 687 || c == 881))))
              : (c <= 883 || (c < 976
                ? (c < 912
                  ? (c < 891
                    ? c == 887
                    : c <= 893)
                  : (c <= 912 || (c >= 940 && c <= 974)))
                : (c <= 977 || (c < 985
                  ? (c >= 981 && c <= 983)
                  : (c <= 985 || c == 987))))))))))))
      : (c <= 989 || (c < 1259
        ? (c < 1179
          ? (c < 1133
            ? (c < 1013
              ? (c < 999
                ? (c < 995
                  ? (c < 993
                    ? c == 991
                    : c <= 993)
                  : (c <= 995 || c == 997))
                : (c <= 999 || (c < 1005
                  ? (c < 1003
                    ? c == 1001
                    : c <= 1003)
                  : (c <= 1005 || (c >= 1007 && c <= 1011)))))
              : (c <= 1013 || (c < 1123
                ? (c < 1072
                  ? (c < 1019
                    ? c == 1016
                    : c <= 1020)
                  : (c <= 1119 || c == 1121))
                : (c <= 1123 || (c < 1129
                  ? (c < 1127
                    ? c == 1125
                    : c <= 1127)
                  : (c <= 1129 || c == 1131))))))
            : (c <= 1133 || (c < 1153
              ? (c < 1143
                ? (c < 1139
                  ? (c < 1137
                    ? c == 1135
                    : c <= 1137)
                  : (c <= 1139 || c == 1141))
                : (c <= 1143 || (c < 1149
                  ? (c < 1147
                    ? c == 1145
                    : c <= 1147)
                  : (c <= 1149 || c == 1151))))
              : (c <= 1153 || (c < 1171
                ? (c < 1167
                  ? (c < 1165
                    ? c == 1163
                    : c <= 1165)
                  : (c <= 1167 || c == 1169))
                : (c <= 1171 || (c < 1175
                  ? c == 1173
                  : (c <= 1175 || c == 1177))))))))
          : (c <= 1179 || (c < 1220
            ? (c < 1199
              ? (c < 1189
                ? (c < 1185
                  ? (c < 1183
                    ? c == 1181
                    : c <= 1183)
                  : (c <= 1185 || c == 1187))
                : (c <= 1189 || (c < 1195
                  ? (c < 1193
                    ? c == 1191
                    : c <= 1193)
                  : (c <= 1195 || c == 1197))))
              : (c <= 1199 || (c < 1209
                ? (c < 1205
                  ? (c < 1203
                    ? c == 1201
                    : c <= 1203)
                  : (c <= 1205 || c == 1207))
                : (c <= 1209 || (c < 1215
                  ? (c < 1213
                    ? c == 1211
                    : c <= 1213)
                  : (c <= 1215 || c == 1218))))))
            : (c <= 1220 || (c < 1241
              ? (c < 1230
                ? (c < 1226
                  ? (c < 1224
                    ? c == 1222
                    : c <= 1224)
                  : (c <= 1226 || c == 1228))
                : (c <= 1231 || (c < 1237
                  ? (c < 1235
                    ? c == 1233
                    : c <= 1235)
                  : (c <= 1237 || c == 1239))))
              : (c <= 1241 || (c < 1251
                ? (c < 1247
                  ? (c < 1245
                    ? c == 1243
                    : c <= 1245)
                  : (c <= 1247 || c == 1249))
                : (c <= 1251 || (c < 1255
                  ? c == 1253
                  : (c <= 1255 || c == 1257))))))))))
        : (c <= 1259 || (c < 7296
          ? (c < 1299
            ? (c < 1279
              ? (c < 1269
                ? (c < 1265
                  ? (c < 1263
                    ? c == 1261
                    : c <= 1263)
                  : (c <= 1265 || c == 1267))
                : (c <= 1269 || (c < 1275
                  ? (c < 1273
                    ? c == 1271
                    : c <= 1273)
                  : (c <= 1275 || c == 1277))))
              : (c <= 1279 || (c < 1289
                ? (c < 1285
                  ? (c < 1283
                    ? c == 1281
                    : c <= 1283)
                  : (c <= 1285 || c == 1287))
                : (c <= 1289 || (c < 1295
                  ? (c < 1293
                    ? c == 1291
                    : c <= 1293)
                  : (c <= 1295 || c == 1297))))))
            : (c <= 1299 || (c < 1319
              ? (c < 1309
                ? (c < 1305
                  ? (c < 1303
                    ? c == 1301
                    : c <= 1303)
                  : (c <= 1305 || c == 1307))
                : (c <= 1309 || (c < 1315
                  ? (c < 1313
                    ? c == 1311
                    : c <= 1313)
                  : (c <= 1315 || c == 1317))))
              : (c <= 1319 || (c < 1376
                ? (c < 1325
                  ? (c < 1323
                    ? c == 1321
                    : c <= 1323)
                  : (c <= 1325 || c == 1327))
                : (c <= 1416 || (c < 4349
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4351 || (c >= 5112 && c <= 5117)))))))))
          : (c <= 7304 || (c < 7713
            ? (c < 7693
              ? (c < 7683
                ? (c < 7545
                  ? (c < 7531
                    ? (c >= 7424 && c <= 7467)
                    : c <= 7543)
                  : (c <= 7578 || c == 7681))
                : (c <= 7683 || (c < 7689
                  ? (c < 7687
                    ? c == 7685
                    : c <= 7687)
                  : (c <= 7689 || c == 7691))))
              : (c <= 7693 || (c < 7703
                ? (c < 7699
                  ? (c < 7697
                    ? c == 7695
                    : c <= 7697)
                  : (c <= 7699 || c == 7701))
                : (c <= 7703 || (c < 7709
                  ? (c < 7707
                    ? c == 7705
                    : c <= 7707)
                  : (c <= 7709 || c == 7711))))))
            : (c <= 7713 || (c < 7733
              ? (c < 7723
                ? (c < 7719
                  ? (c < 7717
                    ? c == 7715
                    : c <= 7717)
                  : (c <= 7719 || c == 7721))
                : (c <= 7723 || (c < 7729
                  ? (c < 7727
                    ? c == 7725
                    : c <= 7727)
                  : (c <= 7729 || c == 7731))))
              : (c <= 7733 || (c < 7743
                ? (c < 7739
                  ? (c < 7737
                    ? c == 7735
                    : c <= 7737)
                  : (c <= 7739 || c == 7741))
                : (c <= 7743 || (c < 7747
                  ? c == 7745
                  : (c <= 7747 || c == 7749))))))))))))))
    : (c <= 7751 || (c < 11449
      ? (c < 7915
        ? (c < 7829
          ? (c < 7791
            ? (c < 7771
              ? (c < 7761
                ? (c < 7757
                  ? (c < 7755
                    ? c == 7753
                    : c <= 7755)
                  : (c <= 7757 || c == 7759))
                : (c <= 7761 || (c < 7767
                  ? (c < 7765
                    ? c == 7763
                    : c <= 7765)
                  : (c <= 7767 || c == 7769))))
              : (c <= 7771 || (c < 7781
                ? (c < 7777
                  ? (c < 7775
                    ? c == 7773
                    : c <= 7775)
                  : (c <= 7777 || c == 7779))
                : (c <= 7781 || (c < 7787
                  ? (c < 7785
                    ? c == 7783
                    : c <= 7785)
                  : (c <= 7787 || c == 7789))))))
            : (c <= 7791 || (c < 7811
              ? (c < 7801
                ? (c < 7797
                  ? (c < 7795
                    ? c == 7793
                    : c <= 7795)
                  : (c <= 7797 || c == 7799))
                : (c <= 7801 || (c < 7807
                  ? (c < 7805
                    ? c == 7803
                    : c <= 7805)
                  : (c <= 7807 || c == 7809))))
              : (c <= 7811 || (c < 7821
                ? (c < 7817
                  ? (c < 7815
                    ? c == 7813
                    : c <= 7815)
                  : (c <= 7817 || c == 7819))
                : (c <= 7821 || (c < 7825
                  ? c == 7823
                  : (c <= 7825 || c == 7827))))))))
          : (c <= 7837 || (c < 7877
            ? (c < 7857
              ? (c < 7847
                ? (c < 7843
                  ? (c < 7841
                    ? c == 7839
                    : c <= 7841)
                  : (c <= 7843 || c == 7845))
                : (c <= 7847 || (c < 7853
                  ? (c < 7851
                    ? c == 7849
                    : c <= 7851)
                  : (c <= 7853 || c == 7855))))
              : (c <= 7857 || (c < 7867
                ? (c < 7863
                  ? (c < 7861
                    ? c == 7859
                    : c <= 7861)
                  : (c <= 7863 || c == 7865))
                : (c <= 7867 || (c < 7873
                  ? (c < 7871
                    ? c == 7869
                    : c <= 7871)
                  : (c <= 7873 || c == 7875))))))
            : (c <= 7877 || (c < 7897
              ? (c < 7887
                ? (c < 7883
                  ? (c < 7881
                    ? c == 7879
                    : c <= 7881)
                  : (c <= 7883 || c == 7885))
                : (c <= 7887 || (c < 7893
                  ? (c < 7891
                    ? c == 7889
                    : c <= 7891)
                  : (c <= 7893 || c == 7895))))
              : (c <= 7897 || (c < 7907
                ? (c < 7903
                  ? (c < 7901
                    ? c == 7899
                    : c <= 7901)
                  : (c <= 7903 || c == 7905))
                : (c <= 7907 || (c < 7911
                  ? c == 7909
                  : (c <= 7911 || c == 7913))))))))))
        : (c <= 7915 || (c < 8526
          ? (c < 8096
            ? (c < 7935
              ? (c < 7925
                ? (c < 7921
                  ? (c < 7919
                    ? c == 7917
                    : c <= 7919)
                  : (c <= 7921 || c == 7923))
                : (c <= 7925 || (c < 7931
                  ? (c < 7929
                    ? c == 7927
                    : c <= 7929)
                  : (c <= 7931 || c == 7933))))
              : (c <= 7943 || (c < 8016
                ? (c < 7984
                  ? (c < 7968
                    ? (c >= 7952 && c <= 7957)
                    : c <= 7975)
                  : (c <= 7991 || (c >= 8000 && c <= 8005)))
                : (c <= 8023 || (c < 8064
                  ? (c < 8048
                    ? (c >= 8032 && c <= 8039)
                    : c <= 8061)
                  : (c <= 8071 || (c >= 8080 && c <= 8087)))))))
            : (c <= 8103 || (c < 8182
              ? (c < 8134
                ? (c < 8126
                  ? (c < 8118
                    ? (c >= 8112 && c <= 8116)
                    : c <= 8119)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8135 || (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8151)
                  : (c <= 8167 || (c >= 8178 && c <= 8180)))))
              : (c <= 8183 || (c < 8500
                ? (c < 8467
                  ? (c < 8462
                    ? c == 8458
                    : c <= 8463)
                  : (c <= 8467 || c == 8495))
                : (c <= 8500 || (c < 8508
                  ? c == 8505
                  : (c <= 8509 || (c >= 8518 && c <= 8521)))))))))
          : (c <= 8526 || (c < 11411
            ? (c < 11382
              ? (c < 11368
                ? (c < 11361
                  ? (c < 11312
                    ? c == 8580
                    : c <= 11359)
                  : (c <= 11361 || (c >= 11365 && c <= 11366)))
                : (c <= 11368 || (c < 11377
                  ? (c < 11372
                    ? c == 11370
                    : c <= 11372)
                  : (c <= 11377 || (c >= 11379 && c <= 11380)))))
              : (c <= 11387 || (c < 11401
                ? (c < 11397
                  ? (c < 11395
                    ? c == 11393
                    : c <= 11395)
                  : (c <= 11397 || c == 11399))
                : (c <= 11401 || (c < 11407
                  ? (c < 11405
                    ? c == 11403
                    : c <= 11405)
                  : (c <= 11407 || c == 11409))))))
            : (c <= 11411 || (c < 11431
              ? (c < 11421
                ? (c < 11417
                  ? (c < 11415
                    ? c == 11413
                    : c <= 11415)
                  : (c <= 11417 || c == 11419))
                : (c <= 11421 || (c < 11427
                  ? (c < 11425
                    ? c == 11423
                    : c <= 11425)
                  : (c <= 11427 || c == 11429))))
              : (c <= 11431 || (c < 11441
                ? (c < 11437
                  ? (c < 11435
                    ? c == 11433
                    : c <= 11435)
                  : (c <= 11437 || c == 11439))
                : (c <= 11441 || (c < 11445
                  ? c == 11443
                  : (c <= 11445 || c == 11447))))))))))))
      : (c <= 11449 || (c < 42815
        ? (c < 42583
          ? (c < 11489
            ? (c < 11469
              ? (c < 11459
                ? (c < 11455
                  ? (c < 11453
                    ? c == 11451
                    : c <= 11453)
                  : (c <= 11455 || c == 11457))
                : (c <= 11459 || (c < 11465
                  ? (c < 11463
                    ? c == 11461
                    : c <= 11463)
                  : (c <= 11465 || c == 11467))))
              : (c <= 11469 || (c < 11479
                ? (c < 11475
                  ? (c < 11473
                    ? c == 11471
                    : c <= 11473)
                  : (c <= 11475 || c == 11477))
                : (c <= 11479 || (c < 11485
                  ? (c < 11483
                    ? c == 11481
                    : c <= 11483)
                  : (c <= 11485 || c == 11487))))))
            : (c <= 11489 || (c < 42565
              ? (c < 11520
                ? (c < 11502
                  ? (c < 11500
                    ? (c >= 11491 && c <= 11492)
                    : c <= 11500)
                  : (c <= 11502 || c == 11507))
                : (c <= 11557 || (c < 42561
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 42561 || c == 42563))))
              : (c <= 42565 || (c < 42575
                ? (c < 42571
                  ? (c < 42569
                    ? c == 42567
                    : c <= 42569)
                  : (c <= 42571 || c == 42573))
                : (c <= 42575 || (c < 42579
                  ? c == 42577
                  : (c <= 42579 || c == 42581))))))))
          : (c <= 42583 || (c < 42641
            ? (c < 42603
              ? (c < 42593
                ? (c < 42589
                  ? (c < 42587
                    ? c == 42585
                    : c <= 42587)
                  : (c <= 42589 || c == 42591))
                : (c <= 42593 || (c < 42599
                  ? (c < 42597
                    ? c == 42595
                    : c <= 42597)
                  : (c <= 42599 || c == 42601))))
              : (c <= 42603 || (c < 42631
                ? (c < 42627
                  ? (c < 42625
                    ? c == 42605
                    : c <= 42625)
                  : (c <= 42627 || c == 42629))
                : (c <= 42631 || (c < 42637
                  ? (c < 42635
                    ? c == 42633
                    : c <= 42635)
                  : (c <= 42637 || c == 42639))))))
            : (c <= 42641 || (c < 42795
              ? (c < 42651
                ? (c < 42647
                  ? (c < 42645
                    ? c == 42643
                    : c <= 42645)
                  : (c <= 42647 || c == 42649))
                : (c <= 42651 || (c < 42791
                  ? (c < 42789
                    ? c == 42787
                    : c <= 42789)
                  : (c <= 42791 || c == 42793))))
              : (c <= 42795 || (c < 42807
                ? (c < 42803
                  ? (c < 42799
                    ? c == 42797
                    : c <= 42801)
                  : (c <= 42803 || c == 42805))
                : (c <= 42807 || (c < 42811
                  ? c == 42809
                  : (c <= 42811 || c == 42813))))))))))
        : (c <= 42815 || (c < 42907
          ? (c < 42855
            ? (c < 42835
              ? (c < 42825
                ? (c < 42821
                  ? (c < 42819
                    ? c == 42817
                    : c <= 42819)
                  : (c <= 42821 || c == 42823))
                : (c <= 42825 || (c < 42831
                  ? (c < 42829
                    ? c == 42827
                    : c <= 42829)
                  : (c <= 42831 || c == 42833))))
              : (c <= 42835 || (c < 42845
                ? (c < 42841
                  ? (c < 42839
                    ? c == 42837
                    : c <= 42839)
                  : (c <= 42841 || c == 42843))
                : (c <= 42845 || (c < 42851
                  ? (c < 42849
                    ? c == 42847
                    : c <= 42849)
                  : (c <= 42851 || c == 42853))))))
            : (c <= 42855 || (c < 42883
              ? (c < 42865
                ? (c < 42861
                  ? (c < 42859
                    ? c == 42857
                    : c <= 42859)
                  : (c <= 42861 || c == 42863))
                : (c <= 42872 || (c < 42879
                  ? (c < 42876
                    ? c == 42874
                    : c <= 42876)
                  : (c <= 42879 || c == 42881))))
              : (c <= 42883 || (c < 42897
                ? (c < 42892
                  ? (c < 42887
                    ? c == 42885
                    : c <= 42887)
                  : (c <= 42892 || c == 42894))
                : (c <= 42897 || (c < 42903
                  ? (c >= 42899 && c <= 42901)
                  : (c <= 42903 || c == 42905))))))))
          : (c <= 42907 || (c < 42961
            ? (c < 42935
              ? (c < 42917
                ? (c < 42913
                  ? (c < 42911
                    ? c == 42909
                    : c <= 42911)
                  : (c <= 42913 || c == 42915))
                : (c <= 42917 || (c < 42927
                  ? (c < 42921
                    ? c == 42919
                    : c <= 42921)
                  : (c <= 42927 || c == 42933))))
              : (c <= 42935 || (c < 42945
                ? (c < 42941
                  ? (c < 42939
                    ? c == 42937
                    : c <= 42939)
                  : (c <= 42941 || c == 42943))
                : (c <= 42945 || (c < 42952
                  ? c == 42947
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

static inline bool sym__varid_character_set_5(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(119);
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(117)
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(249);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '?') ADVANCE(116);
      if (lookahead == '@') ADVANCE(247);
      if (lookahead == 'F') ADVANCE(59);
      if (lookahead == 'I') ADVANCE(30);
      if (lookahead == 'O') ADVANCE(56);
      if (lookahead == 'P') ADVANCE(61);
      if (lookahead == 'R') ADVANCE(33);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == '{') ADVANCE(241);
      if (lookahead == '|') ADVANCE(244);
      if (lookahead == '}') ADVANCE(242);
      if (lookahead == 8592) ADVANCE(207);
      if (lookahead == 8594) ADVANCE(204);
      if (lookahead == 8658) ADVANCE(201);
      if (lookahead == 8704) ADVANCE(243);
      if (lookahead == 8759) ADVANCE(209);
      if (lookahead == 9733) ADVANCE(246);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(150);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (sym__varid_character_set_1(lookahead)) ADVANCE(215);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '^') ADVANCE(5);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '^') ADVANCE(5);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(176);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '>') ADVANCE(205);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(208);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(76);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(211);
      if (sym__consym_character_set_1(lookahead)) ADVANCE(159);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(210);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(202);
      END_STATE();
    case 17:
      if (lookahead == 'C') ADVANCE(23);
      if (lookahead == 'R') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'U') ADVANCE(60);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(73);
      END_STATE();
    case 20:
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(9);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 75:
      if (lookahead == 'y') ADVANCE(131);
      END_STATE();
    case 76:
      if (lookahead == '}') ADVANCE(213);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 77:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(170);
      END_STATE();
    case 78:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 79:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(191);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(194);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(169);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(170);
      END_STATE();
    case 83:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(83)
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '?') ADVANCE(167);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == 8594) ADVANCE(204);
      if (lookahead == 8704) ADVANCE(243);
      if (lookahead == 9733) ADVANCE(246);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(166);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(215);
      END_STATE();
    case 84:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(84)
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '?') ADVANCE(167);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == 8704) ADVANCE(243);
      if (lookahead == 9733) ADVANCE(246);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(166);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(215);
      END_STATE();
    case 85:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(85)
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == '=') ADVANCE(164);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == 8594) ADVANCE(204);
      if (lookahead == 8658) ADVANCE(201);
      if (lookahead == 8759) ADVANCE(209);
      if (lookahead == 9733) ADVANCE(246);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(166);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(215);
      END_STATE();
    case 86:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(86)
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '=') ADVANCE(164);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == '}') ADVANCE(242);
      if (lookahead == 8594) ADVANCE(204);
      if (lookahead == 8658) ADVANCE(201);
      if (lookahead == 9733) ADVANCE(246);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(166);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(215);
      END_STATE();
    case 87:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(87)
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == 8594) ADVANCE(204);
      if (lookahead == 8759) ADVANCE(209);
      if (lookahead == 9733) ADVANCE(246);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(166);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(215);
      END_STATE();
    case 88:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(88)
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == '}') ADVANCE(242);
      if (lookahead == 8594) ADVANCE(204);
      if (lookahead == 9733) ADVANCE(246);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(166);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(215);
      END_STATE();
    case 89:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(89)
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '=') ADVANCE(164);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == 8658) ADVANCE(201);
      if (lookahead == 9733) ADVANCE(246);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(166);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(215);
      END_STATE();
    case 90:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(90)
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == 9733) ADVANCE(246);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '+' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(166);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(215);
      END_STATE();
    case 91:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(91)
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == '=') ADVANCE(164);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == 8594) ADVANCE(204);
      if (lookahead == 8658) ADVANCE(201);
      if (lookahead == 8759) ADVANCE(209);
      if (lookahead == 9733) ADVANCE(246);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(166);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(215);
      END_STATE();
    case 92:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(92)
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '=') ADVANCE(164);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == '}') ADVANCE(242);
      if (lookahead == 8594) ADVANCE(204);
      if (lookahead == 8658) ADVANCE(201);
      if (lookahead == 9733) ADVANCE(246);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(166);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(215);
      END_STATE();
    case 93:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(93)
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == 8594) ADVANCE(204);
      if (lookahead == 8759) ADVANCE(209);
      if (lookahead == 9733) ADVANCE(246);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(166);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(215);
      END_STATE();
    case 94:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(94)
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == '=') ADVANCE(164);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == 8594) ADVANCE(204);
      if (lookahead == 8658) ADVANCE(201);
      if (lookahead == 8759) ADVANCE(209);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(166);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      END_STATE();
    case 95:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(95)
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == '}') ADVANCE(242);
      if (lookahead == 8594) ADVANCE(204);
      if (lookahead == 9733) ADVANCE(246);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(166);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(215);
      END_STATE();
    case 96:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(96)
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '=') ADVANCE(164);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == '}') ADVANCE(242);
      if (lookahead == 8594) ADVANCE(204);
      if (lookahead == 8658) ADVANCE(201);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(166);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      END_STATE();
    case 97:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(97)
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == 8594) ADVANCE(204);
      if (lookahead == 8759) ADVANCE(209);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(166);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      END_STATE();
    case 98:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(98)
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == '}') ADVANCE(242);
      if (lookahead == 8594) ADVANCE(204);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(166);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      END_STATE();
    case 99:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(99)
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '=') ADVANCE(164);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == 8658) ADVANCE(201);
      if (lookahead == 9733) ADVANCE(246);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(166);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(215);
      END_STATE();
    case 100:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(100)
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == 'F') ADVANCE(229);
      if (lookahead == 'I') ADVANCE(222);
      if (lookahead == 'P') ADVANCE(230);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(150);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(215);
      END_STATE();
    case 101:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(101)
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == 8594) ADVANCE(204);
      if (lookahead == 8658) ADVANCE(201);
      if (lookahead == 9733) ADVANCE(246);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(215);
      END_STATE();
    case 102:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(102)
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '=') ADVANCE(164);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == 8658) ADVANCE(201);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(166);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      END_STATE();
    case 103:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(103)
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '@') ADVANCE(248);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == 9733) ADVANCE(246);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(166);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(215);
      END_STATE();
    case 104:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(104)
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == 8594) ADVANCE(204);
      if (sym__tyconsym_character_set_1(lookahead)) ADVANCE(166);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(215);
      END_STATE();
    case 105:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(105)
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == ':') ADVANCE(165);
      if (lookahead == '`') ADVANCE(219);
      if (sym__tyconsym_character_set_1(lookahead)) ADVANCE(166);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      END_STATE();
    case 106:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(106)
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '0') ADVANCE(186);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 107:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(107)
      if (lookahead == '!') ADVANCE(113);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (sym__varid_character_set_4(lookahead)) ADVANCE(215);
      END_STATE();
    case 108:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(108)
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == 'O') ADVANCE(56);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == '}') ADVANCE(242);
      if (lookahead == 8594) ADVANCE(204);
      if (lookahead == 8759) ADVANCE(209);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 109:
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(109)
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == 'R') ADVANCE(33);
      if (sym__varid_character_set_5(lookahead)) ADVANCE(215);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 115:
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 116:
      if (sym__varid_character_set_5(lookahead)) ADVANCE(220);
      END_STATE();
    case 117:
      if (eof) ADVANCE(119);
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(117)
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(249);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '*') ADVANCE(245);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '0') ADVANCE(185);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '?') ADVANCE(116);
      if (lookahead == '@') ADVANCE(247);
      if (lookahead == 'F') ADVANCE(59);
      if (lookahead == 'I') ADVANCE(30);
      if (lookahead == 'O') ADVANCE(56);
      if (lookahead == 'P') ADVANCE(61);
      if (lookahead == 'R') ADVANCE(33);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == '{') ADVANCE(241);
      if (lookahead == '|') ADVANCE(244);
      if (lookahead == '}') ADVANCE(242);
      if (lookahead == 8592) ADVANCE(207);
      if (lookahead == 8594) ADVANCE(204);
      if (lookahead == 8658) ADVANCE(201);
      if (lookahead == 8704) ADVANCE(243);
      if (lookahead == 8759) ADVANCE(209);
      if (lookahead == 9733) ADVANCE(246);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(150);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (sym__varid_character_set_1(lookahead)) ADVANCE(215);
      END_STATE();
    case 118:
      if (eof) ADVANCE(119);
      if (aux_sym_comment_token2_character_set_1(lookahead)) SKIP(118)
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '%') ADVANCE(249);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead == '{') ADVANCE(240);
      if (lookahead == '}') ADVANCE(242);
      if (lookahead == 8594) ADVANCE(204);
      if (lookahead == 8658) ADVANCE(201);
      if (lookahead == 8759) ADVANCE(209);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(235);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(215);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_is_sum_marker);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__doc_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '|') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (aux_sym_comment_token2_character_set_2(lookahead)) ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(128);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (sym__varid_character_set_5(lookahead)) ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_Id);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_Primary);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_Primary);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_key_value_attribute_token1);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '\'') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_key_value_attribute_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(202);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(137);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '#') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(138);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(139);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '#') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(140);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '#') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(138);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(139);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(140);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_exl_mark_attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__field_strictness_prefix);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_cascade_action);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__sql_constraint_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_Foreign);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_Foreign);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_References);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (aux_sym_comment_token2_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__consym);
      if (aux_sym_comment_token2_character_set_2(lookahead)) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == ' ') ADVANCE(123);
      if (aux_sym_comment_token2_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == '-') ADVANCE(160);
      if (lookahead == '>') ADVANCE(206);
      if (sym__tyconsym_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == '-') ADVANCE(160);
      if (sym__tyconsym_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == ':') ADVANCE(211);
      if (sym__consym_character_set_1(lookahead)) ADVANCE(159);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == '>') ADVANCE(203);
      if (aux_sym_comment_token2_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__tyconsym);
      if (aux_sym_comment_token2_character_set_2(lookahead)) ADVANCE(159);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__tyconsym);
      if (aux_sym_comment_token2_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__tyconsym);
      if (aux_sym_comment_token2_character_set_2(lookahead)) ADVANCE(166);
      if (sym__varid_character_set_5(lookahead)) ADVANCE(220);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(168);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(177);
      if (lookahead == '\'') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(172);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(173);
      if (lookahead == '\'') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(174);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '\'') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '#') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '#') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(178);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(182);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__integer_literal);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(80);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(187);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(145);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(146);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(137);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(189);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(137);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(184);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__binary_literal);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__binary_literal);
      if (lookahead == '#') ADVANCE(192);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__binary_literal);
      if (lookahead == '#') ADVANCE(190);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__octal_literal);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '#') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '#') ADVANCE(193);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__hex_literal);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(196);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (aux_sym_comment_token2_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (aux_sym_comment_token2_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (aux_sym_comment_token2_character_set_2(lookahead)) ADVANCE(159);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__immediate_dot);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_pragma);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__varid);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(214);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '>') ADVANCE(205);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_implicit_parid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__conid);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead == 'g') ADVANCE(228);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead == 'm') ADVANCE(234);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(235);
      if (lookahead == 'y') ADVANCE(132);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(221);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(9);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_AT);
      if (aux_sym_comment_token2_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (aux_sym_comment_token2_character_set_2(lookahead)) ADVANCE(166);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(0)
      if (lookahead == '_') ADVANCE(1);
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'h') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'm') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 'q') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 2:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'm') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'y') ADVANCE(26);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'v') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_role);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(73);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_forall);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_nominal);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_pattern);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_phantom);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_instance);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_qualified);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_representational);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 118},
  [2] = {.lex_state = 83},
  [3] = {.lex_state = 83},
  [4] = {.lex_state = 83},
  [5] = {.lex_state = 83},
  [6] = {.lex_state = 83},
  [7] = {.lex_state = 83},
  [8] = {.lex_state = 83},
  [9] = {.lex_state = 83},
  [10] = {.lex_state = 83},
  [11] = {.lex_state = 83},
  [12] = {.lex_state = 83},
  [13] = {.lex_state = 83},
  [14] = {.lex_state = 84},
  [15] = {.lex_state = 84},
  [16] = {.lex_state = 84},
  [17] = {.lex_state = 84},
  [18] = {.lex_state = 84},
  [19] = {.lex_state = 84},
  [20] = {.lex_state = 84},
  [21] = {.lex_state = 84},
  [22] = {.lex_state = 84},
  [23] = {.lex_state = 84},
  [24] = {.lex_state = 83},
  [25] = {.lex_state = 83},
  [26] = {.lex_state = 83},
  [27] = {.lex_state = 83},
  [28] = {.lex_state = 83},
  [29] = {.lex_state = 83},
  [30] = {.lex_state = 83},
  [31] = {.lex_state = 83},
  [32] = {.lex_state = 83},
  [33] = {.lex_state = 83},
  [34] = {.lex_state = 83},
  [35] = {.lex_state = 83},
  [36] = {.lex_state = 85},
  [37] = {.lex_state = 85},
  [38] = {.lex_state = 85},
  [39] = {.lex_state = 86},
  [40] = {.lex_state = 83},
  [41] = {.lex_state = 83},
  [42] = {.lex_state = 86},
  [43] = {.lex_state = 85},
  [44] = {.lex_state = 83},
  [45] = {.lex_state = 83},
  [46] = {.lex_state = 86},
  [47] = {.lex_state = 83},
  [48] = {.lex_state = 83},
  [49] = {.lex_state = 83},
  [50] = {.lex_state = 87},
  [51] = {.lex_state = 87},
  [52] = {.lex_state = 85},
  [53] = {.lex_state = 87},
  [54] = {.lex_state = 86},
  [55] = {.lex_state = 88},
  [56] = {.lex_state = 83},
  [57] = {.lex_state = 88},
  [58] = {.lex_state = 88},
  [59] = {.lex_state = 83},
  [60] = {.lex_state = 89},
  [61] = {.lex_state = 89},
  [62] = {.lex_state = 89},
  [63] = {.lex_state = 89},
  [64] = {.lex_state = 90},
  [65] = {.lex_state = 90},
  [66] = {.lex_state = 90},
  [67] = {.lex_state = 85},
  [68] = {.lex_state = 85},
  [69] = {.lex_state = 83},
  [70] = {.lex_state = 83},
  [71] = {.lex_state = 83},
  [72] = {.lex_state = 83},
  [73] = {.lex_state = 83},
  [74] = {.lex_state = 83},
  [75] = {.lex_state = 83},
  [76] = {.lex_state = 83},
  [77] = {.lex_state = 83},
  [78] = {.lex_state = 83},
  [79] = {.lex_state = 83},
  [80] = {.lex_state = 83},
  [81] = {.lex_state = 83},
  [82] = {.lex_state = 91},
  [83] = {.lex_state = 91},
  [84] = {.lex_state = 85},
  [85] = {.lex_state = 91},
  [86] = {.lex_state = 91},
  [87] = {.lex_state = 85},
  [88] = {.lex_state = 85},
  [89] = {.lex_state = 85},
  [90] = {.lex_state = 85},
  [91] = {.lex_state = 85},
  [92] = {.lex_state = 85},
  [93] = {.lex_state = 85},
  [94] = {.lex_state = 85},
  [95] = {.lex_state = 85},
  [96] = {.lex_state = 85},
  [97] = {.lex_state = 85},
  [98] = {.lex_state = 85},
  [99] = {.lex_state = 85},
  [100] = {.lex_state = 85},
  [101] = {.lex_state = 85},
  [102] = {.lex_state = 85},
  [103] = {.lex_state = 92},
  [104] = {.lex_state = 85},
  [105] = {.lex_state = 85},
  [106] = {.lex_state = 92},
  [107] = {.lex_state = 92},
  [108] = {.lex_state = 85},
  [109] = {.lex_state = 85},
  [110] = {.lex_state = 92},
  [111] = {.lex_state = 85},
  [112] = {.lex_state = 85},
  [113] = {.lex_state = 85},
  [114] = {.lex_state = 85},
  [115] = {.lex_state = 86},
  [116] = {.lex_state = 86},
  [117] = {.lex_state = 86},
  [118] = {.lex_state = 86},
  [119] = {.lex_state = 86},
  [120] = {.lex_state = 93},
  [121] = {.lex_state = 86},
  [122] = {.lex_state = 94},
  [123] = {.lex_state = 86},
  [124] = {.lex_state = 86},
  [125] = {.lex_state = 86},
  [126] = {.lex_state = 86},
  [127] = {.lex_state = 86},
  [128] = {.lex_state = 86},
  [129] = {.lex_state = 86},
  [130] = {.lex_state = 86},
  [131] = {.lex_state = 93},
  [132] = {.lex_state = 86},
  [133] = {.lex_state = 86},
  [134] = {.lex_state = 86},
  [135] = {.lex_state = 93},
  [136] = {.lex_state = 86},
  [137] = {.lex_state = 86},
  [138] = {.lex_state = 86},
  [139] = {.lex_state = 86},
  [140] = {.lex_state = 93},
  [141] = {.lex_state = 86},
  [142] = {.lex_state = 86},
  [143] = {.lex_state = 86},
  [144] = {.lex_state = 87},
  [145] = {.lex_state = 87},
  [146] = {.lex_state = 87},
  [147] = {.lex_state = 87},
  [148] = {.lex_state = 87},
  [149] = {.lex_state = 87},
  [150] = {.lex_state = 87},
  [151] = {.lex_state = 87},
  [152] = {.lex_state = 87},
  [153] = {.lex_state = 95},
  [154] = {.lex_state = 87},
  [155] = {.lex_state = 87},
  [156] = {.lex_state = 87},
  [157] = {.lex_state = 87},
  [158] = {.lex_state = 95},
  [159] = {.lex_state = 87},
  [160] = {.lex_state = 87},
  [161] = {.lex_state = 87},
  [162] = {.lex_state = 87},
  [163] = {.lex_state = 95},
  [164] = {.lex_state = 95},
  [165] = {.lex_state = 87},
  [166] = {.lex_state = 87},
  [167] = {.lex_state = 87},
  [168] = {.lex_state = 96},
  [169] = {.lex_state = 87},
  [170] = {.lex_state = 87},
  [171] = {.lex_state = 87},
  [172] = {.lex_state = 88},
  [173] = {.lex_state = 88},
  [174] = {.lex_state = 97},
  [175] = {.lex_state = 88},
  [176] = {.lex_state = 88},
  [177] = {.lex_state = 88},
  [178] = {.lex_state = 88},
  [179] = {.lex_state = 88},
  [180] = {.lex_state = 88},
  [181] = {.lex_state = 88},
  [182] = {.lex_state = 88},
  [183] = {.lex_state = 88},
  [184] = {.lex_state = 88},
  [185] = {.lex_state = 88},
  [186] = {.lex_state = 88},
  [187] = {.lex_state = 88},
  [188] = {.lex_state = 88},
  [189] = {.lex_state = 88},
  [190] = {.lex_state = 88},
  [191] = {.lex_state = 88},
  [192] = {.lex_state = 88},
  [193] = {.lex_state = 88},
  [194] = {.lex_state = 88},
  [195] = {.lex_state = 88},
  [196] = {.lex_state = 98},
  [197] = {.lex_state = 99},
  [198] = {.lex_state = 99},
  [199] = {.lex_state = 83},
  [200] = {.lex_state = 83},
  [201] = {.lex_state = 83},
  [202] = {.lex_state = 83},
  [203] = {.lex_state = 99},
  [204] = {.lex_state = 83},
  [205] = {.lex_state = 83},
  [206] = {.lex_state = 83},
  [207] = {.lex_state = 83},
  [208] = {.lex_state = 83},
  [209] = {.lex_state = 83},
  [210] = {.lex_state = 83},
  [211] = {.lex_state = 83},
  [212] = {.lex_state = 99},
  [213] = {.lex_state = 89},
  [214] = {.lex_state = 89},
  [215] = {.lex_state = 89},
  [216] = {.lex_state = 89},
  [217] = {.lex_state = 89},
  [218] = {.lex_state = 89},
  [219] = {.lex_state = 89},
  [220] = {.lex_state = 89},
  [221] = {.lex_state = 89},
  [222] = {.lex_state = 89},
  [223] = {.lex_state = 100, .external_lex_state = 2},
  [224] = {.lex_state = 89},
  [225] = {.lex_state = 89},
  [226] = {.lex_state = 89},
  [227] = {.lex_state = 89},
  [228] = {.lex_state = 100},
  [229] = {.lex_state = 89},
  [230] = {.lex_state = 89},
  [231] = {.lex_state = 101},
  [232] = {.lex_state = 89},
  [233] = {.lex_state = 89},
  [234] = {.lex_state = 89},
  [235] = {.lex_state = 89},
  [236] = {.lex_state = 89},
  [237] = {.lex_state = 89},
  [238] = {.lex_state = 89},
  [239] = {.lex_state = 102},
  [240] = {.lex_state = 89},
  [241] = {.lex_state = 100, .external_lex_state = 2},
  [242] = {.lex_state = 101},
  [243] = {.lex_state = 101},
  [244] = {.lex_state = 103},
  [245] = {.lex_state = 103},
  [246] = {.lex_state = 103},
  [247] = {.lex_state = 103},
  [248] = {.lex_state = 101},
  [249] = {.lex_state = 90},
  [250] = {.lex_state = 90},
  [251] = {.lex_state = 90},
  [252] = {.lex_state = 90},
  [253] = {.lex_state = 85},
  [254] = {.lex_state = 90},
  [255] = {.lex_state = 90},
  [256] = {.lex_state = 90},
  [257] = {.lex_state = 90},
  [258] = {.lex_state = 90},
  [259] = {.lex_state = 90},
  [260] = {.lex_state = 90},
  [261] = {.lex_state = 90},
  [262] = {.lex_state = 90},
  [263] = {.lex_state = 90},
  [264] = {.lex_state = 90},
  [265] = {.lex_state = 90},
  [266] = {.lex_state = 118},
  [267] = {.lex_state = 90},
  [268] = {.lex_state = 90},
  [269] = {.lex_state = 90},
  [270] = {.lex_state = 90},
  [271] = {.lex_state = 90},
  [272] = {.lex_state = 90},
  [273] = {.lex_state = 118},
  [274] = {.lex_state = 90},
  [275] = {.lex_state = 104},
  [276] = {.lex_state = 104},
  [277] = {.lex_state = 105},
  [278] = {.lex_state = 83},
  [279] = {.lex_state = 83},
  [280] = {.lex_state = 83},
  [281] = {.lex_state = 83},
  [282] = {.lex_state = 83},
  [283] = {.lex_state = 83},
  [284] = {.lex_state = 83},
  [285] = {.lex_state = 83},
  [286] = {.lex_state = 83},
  [287] = {.lex_state = 94},
  [288] = {.lex_state = 83},
  [289] = {.lex_state = 83},
  [290] = {.lex_state = 83},
  [291] = {.lex_state = 83},
  [292] = {.lex_state = 83},
  [293] = {.lex_state = 105},
  [294] = {.lex_state = 83},
  [295] = {.lex_state = 83},
  [296] = {.lex_state = 83},
  [297] = {.lex_state = 83},
  [298] = {.lex_state = 96},
  [299] = {.lex_state = 83},
  [300] = {.lex_state = 97},
  [301] = {.lex_state = 106},
  [302] = {.lex_state = 118},
  [303] = {.lex_state = 118},
  [304] = {.lex_state = 98},
  [305] = {.lex_state = 107, .external_lex_state = 3},
  [306] = {.lex_state = 105},
  [307] = {.lex_state = 118},
  [308] = {.lex_state = 105},
  [309] = {.lex_state = 118},
  [310] = {.lex_state = 118},
  [311] = {.lex_state = 118},
  [312] = {.lex_state = 118},
  [313] = {.lex_state = 107, .external_lex_state = 3},
  [314] = {.lex_state = 118},
  [315] = {.lex_state = 118},
  [316] = {.lex_state = 118},
  [317] = {.lex_state = 102},
  [318] = {.lex_state = 100, .external_lex_state = 2},
  [319] = {.lex_state = 107, .external_lex_state = 3},
  [320] = {.lex_state = 107, .external_lex_state = 3},
  [321] = {.lex_state = 118},
  [322] = {.lex_state = 107, .external_lex_state = 3},
  [323] = {.lex_state = 118, .external_lex_state = 2},
  [324] = {.lex_state = 107, .external_lex_state = 3},
  [325] = {.lex_state = 100, .external_lex_state = 2},
  [326] = {.lex_state = 118, .external_lex_state = 2},
  [327] = {.lex_state = 107, .external_lex_state = 3},
  [328] = {.lex_state = 107, .external_lex_state = 3},
  [329] = {.lex_state = 118, .external_lex_state = 4},
  [330] = {.lex_state = 105},
  [331] = {.lex_state = 107, .external_lex_state = 3},
  [332] = {.lex_state = 118, .external_lex_state = 4},
  [333] = {.lex_state = 107, .external_lex_state = 3},
  [334] = {.lex_state = 105},
  [335] = {.lex_state = 118, .external_lex_state = 4},
  [336] = {.lex_state = 107, .external_lex_state = 3},
  [337] = {.lex_state = 107, .external_lex_state = 3},
  [338] = {.lex_state = 118, .external_lex_state = 4},
  [339] = {.lex_state = 107, .external_lex_state = 3},
  [340] = {.lex_state = 107, .external_lex_state = 3},
  [341] = {.lex_state = 118, .external_lex_state = 4},
  [342] = {.lex_state = 107, .external_lex_state = 3},
  [343] = {.lex_state = 107, .external_lex_state = 3},
  [344] = {.lex_state = 107, .external_lex_state = 3},
  [345] = {.lex_state = 118},
  [346] = {.lex_state = 108},
  [347] = {.lex_state = 118},
  [348] = {.lex_state = 105},
  [349] = {.lex_state = 118},
  [350] = {.lex_state = 118},
  [351] = {.lex_state = 118},
  [352] = {.lex_state = 108},
  [353] = {.lex_state = 118},
  [354] = {.lex_state = 118},
  [355] = {.lex_state = 118},
  [356] = {.lex_state = 118},
  [357] = {.lex_state = 107, .external_lex_state = 3},
  [358] = {.lex_state = 118},
  [359] = {.lex_state = 109, .external_lex_state = 3},
  [360] = {.lex_state = 118},
  [361] = {.lex_state = 107, .external_lex_state = 3},
  [362] = {.lex_state = 118},
  [363] = {.lex_state = 118},
  [364] = {.lex_state = 118},
  [365] = {.lex_state = 118},
  [366] = {.lex_state = 118},
  [367] = {.lex_state = 109, .external_lex_state = 3},
  [368] = {.lex_state = 109, .external_lex_state = 3},
  [369] = {.lex_state = 118},
  [370] = {.lex_state = 118},
  [371] = {.lex_state = 118, .external_lex_state = 3},
  [372] = {.lex_state = 105},
  [373] = {.lex_state = 118},
  [374] = {.lex_state = 118},
  [375] = {.lex_state = 118},
  [376] = {.lex_state = 108},
  [377] = {.lex_state = 108},
  [378] = {.lex_state = 118},
  [379] = {.lex_state = 118},
  [380] = {.lex_state = 118},
  [381] = {.lex_state = 118},
  [382] = {.lex_state = 118, .external_lex_state = 3},
  [383] = {.lex_state = 118},
  [384] = {.lex_state = 118},
  [385] = {.lex_state = 118, .external_lex_state = 2},
  [386] = {.lex_state = 118},
  [387] = {.lex_state = 118},
  [388] = {.lex_state = 118, .external_lex_state = 2},
  [389] = {.lex_state = 118},
  [390] = {.lex_state = 118},
  [391] = {.lex_state = 107, .external_lex_state = 3},
  [392] = {.lex_state = 118},
  [393] = {.lex_state = 118},
  [394] = {.lex_state = 107, .external_lex_state = 3},
  [395] = {.lex_state = 118},
  [396] = {.lex_state = 118},
  [397] = {.lex_state = 107, .external_lex_state = 3},
  [398] = {.lex_state = 118},
  [399] = {.lex_state = 118},
  [400] = {.lex_state = 118},
  [401] = {.lex_state = 118},
  [402] = {.lex_state = 107, .external_lex_state = 3},
  [403] = {.lex_state = 118},
  [404] = {.lex_state = 118},
  [405] = {.lex_state = 118},
  [406] = {.lex_state = 118},
  [407] = {.lex_state = 118, .external_lex_state = 2},
  [408] = {.lex_state = 107, .external_lex_state = 3},
  [409] = {.lex_state = 118},
  [410] = {.lex_state = 118},
  [411] = {.lex_state = 118},
  [412] = {.lex_state = 107, .external_lex_state = 3},
  [413] = {.lex_state = 118},
  [414] = {.lex_state = 118, .external_lex_state = 2},
  [415] = {.lex_state = 118, .external_lex_state = 2},
  [416] = {.lex_state = 107, .external_lex_state = 3},
  [417] = {.lex_state = 107, .external_lex_state = 3},
  [418] = {.lex_state = 118},
  [419] = {.lex_state = 118, .external_lex_state = 2},
  [420] = {.lex_state = 118},
  [421] = {.lex_state = 107, .external_lex_state = 3},
  [422] = {.lex_state = 118},
  [423] = {.lex_state = 107, .external_lex_state = 3},
  [424] = {.lex_state = 109, .external_lex_state = 3},
  [425] = {.lex_state = 118},
  [426] = {.lex_state = 107, .external_lex_state = 3},
  [427] = {.lex_state = 118},
  [428] = {.lex_state = 118},
  [429] = {.lex_state = 118},
  [430] = {.lex_state = 118},
  [431] = {.lex_state = 118},
  [432] = {.lex_state = 118},
  [433] = {.lex_state = 118},
  [434] = {.lex_state = 118},
  [435] = {.lex_state = 118},
  [436] = {.lex_state = 118},
  [437] = {.lex_state = 107, .external_lex_state = 3},
  [438] = {.lex_state = 107, .external_lex_state = 3},
  [439] = {.lex_state = 107, .external_lex_state = 3},
  [440] = {.lex_state = 107, .external_lex_state = 3},
  [441] = {.lex_state = 108},
  [442] = {.lex_state = 107, .external_lex_state = 3},
  [443] = {.lex_state = 107, .external_lex_state = 3},
  [444] = {.lex_state = 107, .external_lex_state = 3},
  [445] = {.lex_state = 107, .external_lex_state = 3},
  [446] = {.lex_state = 107, .external_lex_state = 3},
  [447] = {.lex_state = 118},
  [448] = {.lex_state = 118},
  [449] = {.lex_state = 118},
  [450] = {.lex_state = 118},
  [451] = {.lex_state = 118},
  [452] = {.lex_state = 118},
  [453] = {.lex_state = 118},
  [454] = {.lex_state = 107, .external_lex_state = 3},
  [455] = {.lex_state = 118},
  [456] = {.lex_state = 118},
  [457] = {.lex_state = 118, .external_lex_state = 2},
  [458] = {.lex_state = 108},
  [459] = {.lex_state = 107, .external_lex_state = 3},
  [460] = {.lex_state = 107, .external_lex_state = 3},
  [461] = {.lex_state = 107, .external_lex_state = 3},
  [462] = {.lex_state = 107, .external_lex_state = 3},
  [463] = {.lex_state = 107, .external_lex_state = 3},
  [464] = {.lex_state = 109, .external_lex_state = 3},
  [465] = {.lex_state = 108},
  [466] = {.lex_state = 118},
  [467] = {.lex_state = 118},
  [468] = {.lex_state = 107, .external_lex_state = 3},
  [469] = {.lex_state = 118},
  [470] = {.lex_state = 107, .external_lex_state = 3},
  [471] = {.lex_state = 108},
  [472] = {.lex_state = 118},
  [473] = {.lex_state = 118},
  [474] = {.lex_state = 118},
  [475] = {.lex_state = 118},
  [476] = {.lex_state = 107, .external_lex_state = 3},
  [477] = {.lex_state = 118},
  [478] = {.lex_state = 107, .external_lex_state = 3},
  [479] = {.lex_state = 107, .external_lex_state = 3},
  [480] = {.lex_state = 107, .external_lex_state = 3},
  [481] = {.lex_state = 118},
  [482] = {.lex_state = 118},
  [483] = {.lex_state = 107, .external_lex_state = 3},
  [484] = {.lex_state = 107, .external_lex_state = 3},
  [485] = {.lex_state = 118},
  [486] = {.lex_state = 118},
  [487] = {.lex_state = 118},
  [488] = {.lex_state = 118},
  [489] = {.lex_state = 118},
  [490] = {.lex_state = 107, .external_lex_state = 3},
  [491] = {.lex_state = 118},
  [492] = {.lex_state = 107, .external_lex_state = 3},
  [493] = {.lex_state = 118},
  [494] = {.lex_state = 107, .external_lex_state = 3},
  [495] = {.lex_state = 107, .external_lex_state = 3},
  [496] = {.lex_state = 118},
  [497] = {.lex_state = 107, .external_lex_state = 3},
  [498] = {.lex_state = 105},
  [499] = {.lex_state = 105},
  [500] = {.lex_state = 109, .external_lex_state = 3},
  [501] = {.lex_state = 107, .external_lex_state = 3},
  [502] = {.lex_state = 107, .external_lex_state = 3},
  [503] = {.lex_state = 118},
  [504] = {.lex_state = 118},
  [505] = {.lex_state = 118},
  [506] = {.lex_state = 118},
  [507] = {.lex_state = 107, .external_lex_state = 3},
  [508] = {.lex_state = 107, .external_lex_state = 3},
  [509] = {.lex_state = 118},
  [510] = {.lex_state = 118},
  [511] = {.lex_state = 118},
  [512] = {.lex_state = 108},
  [513] = {.lex_state = 108},
  [514] = {.lex_state = 108},
  [515] = {.lex_state = 108},
  [516] = {.lex_state = 108},
  [517] = {.lex_state = 118},
  [518] = {.lex_state = 118},
  [519] = {.lex_state = 118},
  [520] = {.lex_state = 118},
  [521] = {.lex_state = 108},
  [522] = {.lex_state = 118},
  [523] = {.lex_state = 118, .external_lex_state = 2},
  [524] = {.lex_state = 118},
  [525] = {.lex_state = 118},
  [526] = {.lex_state = 118},
  [527] = {.lex_state = 118},
  [528] = {.lex_state = 108},
  [529] = {.lex_state = 118},
  [530] = {.lex_state = 118},
  [531] = {.lex_state = 118},
  [532] = {.lex_state = 118},
  [533] = {.lex_state = 118},
  [534] = {.lex_state = 118},
  [535] = {.lex_state = 118},
  [536] = {.lex_state = 118},
  [537] = {.lex_state = 118},
  [538] = {.lex_state = 118},
  [539] = {.lex_state = 118},
  [540] = {.lex_state = 118},
  [541] = {.lex_state = 118},
  [542] = {.lex_state = 118},
  [543] = {.lex_state = 118},
  [544] = {.lex_state = 118},
  [545] = {.lex_state = 118},
  [546] = {.lex_state = 118},
  [547] = {.lex_state = 118},
  [548] = {.lex_state = 118},
  [549] = {.lex_state = 118, .external_lex_state = 3},
  [550] = {.lex_state = 118},
  [551] = {.lex_state = 118},
  [552] = {.lex_state = 118},
  [553] = {.lex_state = 100},
  [554] = {.lex_state = 118, .external_lex_state = 3},
  [555] = {.lex_state = 118},
  [556] = {.lex_state = 118},
  [557] = {.lex_state = 118, .external_lex_state = 2},
  [558] = {.lex_state = 118},
  [559] = {.lex_state = 118},
  [560] = {.lex_state = 118},
  [561] = {.lex_state = 118},
  [562] = {.lex_state = 118},
  [563] = {.lex_state = 118},
  [564] = {.lex_state = 118},
  [565] = {.lex_state = 118},
  [566] = {.lex_state = 118},
  [567] = {.lex_state = 118},
  [568] = {.lex_state = 118},
  [569] = {.lex_state = 118},
  [570] = {.lex_state = 118},
  [571] = {(TSStateId)(-1)},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__dedent] = true,
  },
  [3] = {
    [ts_external_token__newline] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__varid] = ACTIONS(1),
    [sym_is_sum_marker] = ACTIONS(1),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [anon_sym_Id] = ACTIONS(1),
    [anon_sym_Primary] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym__field_strictness_prefix] = ACTIONS(1),
    [sym_cascade_action] = ACTIONS(1),
    [anon_sym_Foreign] = ACTIONS(1),
    [anon_sym_References] = ACTIONS(1),
    [anon_sym_deriving] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__consym] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym__integer_literal] = ACTIONS(1),
    [sym__binary_literal] = ACTIONS(1),
    [sym__octal_literal] = ACTIONS(1),
    [sym__hex_literal] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym__immediate_dot] = ACTIONS(1),
    [sym_pragma] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym_implicit_parid] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_pattern] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_hiding] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_qualified] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_forall] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_instance] = ACTIONS(1),
    [anon_sym_representational] = ACTIONS(1),
    [anon_sym_nominal] = ACTIONS(1),
    [anon_sym_phantom] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_role] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_quasi_quotation] = STATE(568),
    [sym_entity_definition] = STATE(354),
    [sym_comment] = STATE(1),
    [sym__entity_name] = STATE(342),
    [sym__entity_header] = STATE(341),
    [sym_constructor] = STATE(408),
    [sym_qualified_type] = STATE(426),
    [sym_tycon_arrow] = STATE(426),
    [sym__promoted_tycon] = STATE(426),
    [sym__modid] = STATE(520),
    [aux_sym__qualifying_module] = STATE(403),
    [sym_type_variable] = STATE(426),
    [sym_type_name] = STATE(454),
    [aux_sym_quasi_quotation_repeat1] = STATE(273),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym__varid] = ACTIONS(11),
    [sym_is_sum_marker] = ACTIONS(7),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym__conid] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [2] = {
    [sym_comment] = STATE(2),
    [sym_integer] = STATE(148),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(570),
    [sym_constructor] = STATE(82),
    [sym_constructor_operator] = STATE(285),
    [sym_qualified_constructor_operator] = STATE(286),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(97),
    [sym__type_operator] = STATE(569),
    [sym_qualified_type_operator] = STATE(286),
    [sym__qualified_type_operator] = STATE(569),
    [sym_tycon_arrow] = STATE(97),
    [sym_type_literal] = STATE(161),
    [sym__promoted_tycon] = STATE(97),
    [sym__modid] = STATE(520),
    [aux_sym__qualifying_module] = STATE(330),
    [sym_type_variable] = STATE(84),
    [sym_annotated_type_variable] = STATE(569),
    [sym__forall_kw] = STATE(345),
    [sym__forall] = STATE(375),
    [sym_type_parens] = STATE(170),
    [sym_type_list] = STATE(161),
    [sym__type_tuple] = STATE(539),
    [sym_type_tuple] = STATE(161),
    [sym__type_promotable_literal] = STATE(154),
    [sym__type_promoted_literal] = STATE(154),
    [sym__type_literal] = STATE(170),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(170),
    [sym__atype] = STATE(51),
    [sym_type_apply] = STATE(300),
    [sym__btype] = STATE(174),
    [sym_implicit_param] = STATE(373),
    [sym_type_infix] = STATE(316),
    [sym__type_infix] = STATE(310),
    [sym_constraint] = STATE(418),
    [sym__quantified_constraint] = STATE(522),
    [sym__constraint_context] = STATE(522),
    [sym__constraint] = STATE(481),
    [sym__context_constraints] = STATE(467),
    [sym__context] = STATE(34),
    [sym__type_quantifiers] = STATE(362),
    [sym__type_context] = STATE(362),
    [sym__type_fun] = STATE(362),
    [sym__type] = STATE(364),
    [sym__type_or_implicit] = STATE(321),
    [sym__type_with_kind] = STATE(504),
    [aux_sym_con_tuple_repeat1] = STATE(505),
    [sym__varid] = ACTIONS(19),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym_comma] = ACTIONS(21),
    [sym__consym] = ACTIONS(23),
    [sym__tyconsym] = ACTIONS(25),
    [sym_float] = ACTIONS(27),
    [sym_char] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym__integer_literal] = ACTIONS(29),
    [sym__binary_literal] = ACTIONS(31),
    [sym__octal_literal] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(31),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH_GT] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(39),
    [sym_implicit_parid] = ACTIONS(41),
    [sym__conid] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_forall] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_6] = ACTIONS(53),
  },
  [3] = {
    [sym_comment] = STATE(3),
    [sym_integer] = STATE(148),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(570),
    [sym_constructor] = STATE(82),
    [sym_constructor_operator] = STATE(285),
    [sym_qualified_constructor_operator] = STATE(286),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(97),
    [sym__type_operator] = STATE(569),
    [sym_qualified_type_operator] = STATE(286),
    [sym__qualified_type_operator] = STATE(569),
    [sym_tycon_arrow] = STATE(97),
    [sym_type_literal] = STATE(161),
    [sym__promoted_tycon] = STATE(97),
    [sym__modid] = STATE(520),
    [aux_sym__qualifying_module] = STATE(330),
    [sym_type_variable] = STATE(84),
    [sym_annotated_type_variable] = STATE(569),
    [sym__forall_kw] = STATE(345),
    [sym__forall] = STATE(375),
    [sym_type_parens] = STATE(170),
    [sym_type_list] = STATE(161),
    [sym__type_tuple] = STATE(539),
    [sym_type_tuple] = STATE(161),
    [sym__type_promotable_literal] = STATE(154),
    [sym__type_promoted_literal] = STATE(154),
    [sym__type_literal] = STATE(170),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(170),
    [sym__atype] = STATE(51),
    [sym_type_apply] = STATE(300),
    [sym__btype] = STATE(174),
    [sym_implicit_param] = STATE(373),
    [sym_type_infix] = STATE(316),
    [sym__type_infix] = STATE(310),
    [sym_constraint] = STATE(418),
    [sym__quantified_constraint] = STATE(522),
    [sym__constraint_context] = STATE(522),
    [sym__constraint] = STATE(436),
    [sym__context_constraints] = STATE(467),
    [sym__context] = STATE(34),
    [sym__type_quantifiers] = STATE(362),
    [sym__type_context] = STATE(362),
    [sym__type_fun] = STATE(362),
    [sym__type] = STATE(364),
    [sym__type_or_implicit] = STATE(321),
    [sym__type_with_kind] = STATE(504),
    [aux_sym_con_tuple_repeat1] = STATE(505),
    [sym__varid] = ACTIONS(19),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym_comma] = ACTIONS(21),
    [sym__consym] = ACTIONS(23),
    [sym__tyconsym] = ACTIONS(25),
    [sym_float] = ACTIONS(27),
    [sym_char] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym__integer_literal] = ACTIONS(29),
    [sym__binary_literal] = ACTIONS(31),
    [sym__octal_literal] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(31),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH_GT] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(39),
    [sym_implicit_parid] = ACTIONS(41),
    [sym__conid] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_forall] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_6] = ACTIONS(53),
  },
  [4] = {
    [sym_comment] = STATE(4),
    [sym_integer] = STATE(148),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(550),
    [sym_constructor] = STATE(82),
    [sym_constructor_operator] = STATE(285),
    [sym_qualified_constructor_operator] = STATE(286),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(97),
    [sym__type_operator] = STATE(531),
    [sym_qualified_type_operator] = STATE(286),
    [sym__qualified_type_operator] = STATE(531),
    [sym_tycon_arrow] = STATE(97),
    [sym_type_literal] = STATE(161),
    [sym__promoted_tycon] = STATE(97),
    [sym__modid] = STATE(520),
    [aux_sym__qualifying_module] = STATE(330),
    [sym_type_variable] = STATE(84),
    [sym_annotated_type_variable] = STATE(531),
    [sym__forall_kw] = STATE(345),
    [sym__forall] = STATE(375),
    [sym_type_parens] = STATE(170),
    [sym_type_list] = STATE(161),
    [sym__type_tuple] = STATE(543),
    [sym_type_tuple] = STATE(161),
    [sym__type_promotable_literal] = STATE(154),
    [sym__type_promoted_literal] = STATE(154),
    [sym__type_literal] = STATE(170),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(170),
    [sym__atype] = STATE(51),
    [sym_type_apply] = STATE(300),
    [sym__btype] = STATE(174),
    [sym_implicit_param] = STATE(373),
    [sym_type_infix] = STATE(316),
    [sym__type_infix] = STATE(310),
    [sym_constraint] = STATE(418),
    [sym__quantified_constraint] = STATE(522),
    [sym__constraint_context] = STATE(522),
    [sym__constraint] = STATE(436),
    [sym__context_constraints] = STATE(467),
    [sym__context] = STATE(34),
    [sym__type_quantifiers] = STATE(362),
    [sym__type_context] = STATE(362),
    [sym__type_fun] = STATE(362),
    [sym__type] = STATE(364),
    [sym__type_or_implicit] = STATE(321),
    [sym__type_with_kind] = STATE(466),
    [aux_sym_con_tuple_repeat1] = STATE(456),
    [sym__varid] = ACTIONS(19),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym_comma] = ACTIONS(21),
    [sym__consym] = ACTIONS(23),
    [sym__tyconsym] = ACTIONS(25),
    [sym_float] = ACTIONS(27),
    [sym_char] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym__integer_literal] = ACTIONS(29),
    [sym__binary_literal] = ACTIONS(31),
    [sym__octal_literal] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(31),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH_GT] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(55),
    [sym_implicit_parid] = ACTIONS(41),
    [sym__conid] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_forall] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_6] = ACTIONS(53),
  },
  [5] = {
    [sym_comment] = STATE(5),
    [sym_integer] = STATE(148),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(536),
    [sym_constructor] = STATE(82),
    [sym_constructor_operator] = STATE(285),
    [sym_qualified_constructor_operator] = STATE(286),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(97),
    [sym__type_operator] = STATE(535),
    [sym_qualified_type_operator] = STATE(286),
    [sym__qualified_type_operator] = STATE(535),
    [sym_tycon_arrow] = STATE(97),
    [sym_type_literal] = STATE(161),
    [sym__promoted_tycon] = STATE(97),
    [sym__modid] = STATE(520),
    [aux_sym__qualifying_module] = STATE(330),
    [sym_type_variable] = STATE(84),
    [sym_annotated_type_variable] = STATE(535),
    [sym__forall_kw] = STATE(345),
    [sym__forall] = STATE(375),
    [sym_type_parens] = STATE(170),
    [sym_type_list] = STATE(161),
    [sym__type_tuple] = STATE(546),
    [sym_type_tuple] = STATE(161),
    [sym__type_promotable_literal] = STATE(154),
    [sym__type_promoted_literal] = STATE(154),
    [sym__type_literal] = STATE(170),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(170),
    [sym__atype] = STATE(51),
    [sym_type_apply] = STATE(300),
    [sym__btype] = STATE(174),
    [sym_implicit_param] = STATE(373),
    [sym_type_infix] = STATE(316),
    [sym__type_infix] = STATE(310),
    [sym_constraint] = STATE(418),
    [sym__quantified_constraint] = STATE(522),
    [sym__constraint_context] = STATE(522),
    [sym__constraint] = STATE(481),
    [sym__context_constraints] = STATE(467),
    [sym__context] = STATE(34),
    [sym__type_quantifiers] = STATE(362),
    [sym__type_context] = STATE(362),
    [sym__type_fun] = STATE(362),
    [sym__type] = STATE(364),
    [sym__type_or_implicit] = STATE(321),
    [sym__type_with_kind] = STATE(452),
    [aux_sym_con_tuple_repeat1] = STATE(451),
    [sym__varid] = ACTIONS(19),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym_comma] = ACTIONS(21),
    [sym__consym] = ACTIONS(23),
    [sym__tyconsym] = ACTIONS(25),
    [sym_float] = ACTIONS(27),
    [sym_char] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym__integer_literal] = ACTIONS(29),
    [sym__binary_literal] = ACTIONS(31),
    [sym__octal_literal] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(31),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH_GT] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(57),
    [sym_implicit_parid] = ACTIONS(41),
    [sym__conid] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_forall] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_6] = ACTIONS(53),
  },
  [6] = {
    [sym_comment] = STATE(6),
    [sym_integer] = STATE(148),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(538),
    [sym_constructor] = STATE(82),
    [sym_constructor_operator] = STATE(285),
    [sym_qualified_constructor_operator] = STATE(286),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(97),
    [sym__type_operator] = STATE(530),
    [sym_qualified_type_operator] = STATE(286),
    [sym__qualified_type_operator] = STATE(530),
    [sym_tycon_arrow] = STATE(97),
    [sym_type_literal] = STATE(161),
    [sym__promoted_tycon] = STATE(97),
    [sym__modid] = STATE(520),
    [aux_sym__qualifying_module] = STATE(330),
    [sym_type_variable] = STATE(84),
    [sym_annotated_type_variable] = STATE(530),
    [sym__forall_kw] = STATE(345),
    [sym__forall] = STATE(378),
    [sym_type_parens] = STATE(170),
    [sym_type_list] = STATE(161),
    [sym__type_tuple] = STATE(539),
    [sym_type_tuple] = STATE(161),
    [sym__type_promotable_literal] = STATE(154),
    [sym__type_promoted_literal] = STATE(154),
    [sym__type_literal] = STATE(170),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(170),
    [sym__atype] = STATE(51),
    [sym_type_apply] = STATE(300),
    [sym__btype] = STATE(174),
    [sym_implicit_param] = STATE(364),
    [sym_type_infix] = STATE(307),
    [sym__type_infix] = STATE(310),
    [sym_constraint] = STATE(527),
    [sym__context_constraints] = STATE(467),
    [sym__context] = STATE(49),
    [sym__type_quantifiers] = STATE(362),
    [sym__type_context] = STATE(362),
    [sym__type_fun] = STATE(362),
    [sym__type] = STATE(364),
    [sym__type_or_implicit] = STATE(321),
    [sym__type_with_kind] = STATE(504),
    [aux_sym_con_tuple_repeat1] = STATE(505),
    [sym__varid] = ACTIONS(19),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym_comma] = ACTIONS(21),
    [sym__consym] = ACTIONS(23),
    [sym__tyconsym] = ACTIONS(25),
    [sym_float] = ACTIONS(27),
    [sym_char] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym__integer_literal] = ACTIONS(29),
    [sym__binary_literal] = ACTIONS(31),
    [sym__octal_literal] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(31),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH_GT] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(61),
    [sym_implicit_parid] = ACTIONS(41),
    [sym__conid] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_forall] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_6] = ACTIONS(53),
  },
  [7] = {
    [sym_comment] = STATE(7),
    [sym_integer] = STATE(148),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(545),
    [sym_constructor] = STATE(82),
    [sym_constructor_operator] = STATE(285),
    [sym_qualified_constructor_operator] = STATE(286),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(97),
    [sym__type_operator] = STATE(551),
    [sym_qualified_type_operator] = STATE(286),
    [sym__qualified_type_operator] = STATE(551),
    [sym_tycon_arrow] = STATE(97),
    [sym_type_literal] = STATE(161),
    [sym__promoted_tycon] = STATE(97),
    [sym__modid] = STATE(520),
    [aux_sym__qualifying_module] = STATE(330),
    [sym_type_variable] = STATE(84),
    [sym_annotated_type_variable] = STATE(551),
    [sym__forall_kw] = STATE(345),
    [sym__forall] = STATE(378),
    [sym_type_parens] = STATE(170),
    [sym_type_list] = STATE(161),
    [sym__type_tuple] = STATE(546),
    [sym_type_tuple] = STATE(161),
    [sym__type_promotable_literal] = STATE(154),
    [sym__type_promoted_literal] = STATE(154),
    [sym__type_literal] = STATE(170),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(170),
    [sym__atype] = STATE(51),
    [sym_type_apply] = STATE(300),
    [sym__btype] = STATE(174),
    [sym_implicit_param] = STATE(364),
    [sym_type_infix] = STATE(307),
    [sym__type_infix] = STATE(310),
    [sym_constraint] = STATE(527),
    [sym__context_constraints] = STATE(467),
    [sym__context] = STATE(49),
    [sym__type_quantifiers] = STATE(362),
    [sym__type_context] = STATE(362),
    [sym__type_fun] = STATE(362),
    [sym__type] = STATE(364),
    [sym__type_or_implicit] = STATE(321),
    [sym__type_with_kind] = STATE(452),
    [aux_sym_con_tuple_repeat1] = STATE(451),
    [sym__varid] = ACTIONS(19),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym_comma] = ACTIONS(21),
    [sym__consym] = ACTIONS(23),
    [sym__tyconsym] = ACTIONS(25),
    [sym_float] = ACTIONS(27),
    [sym_char] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym__integer_literal] = ACTIONS(29),
    [sym__binary_literal] = ACTIONS(31),
    [sym__octal_literal] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(31),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH_GT] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(63),
    [sym_implicit_parid] = ACTIONS(41),
    [sym__conid] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_forall] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_6] = ACTIONS(53),
  },
  [8] = {
    [sym_comment] = STATE(8),
    [sym_integer] = STATE(148),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(542),
    [sym_constructor] = STATE(82),
    [sym_constructor_operator] = STATE(285),
    [sym_qualified_constructor_operator] = STATE(286),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(97),
    [sym__type_operator] = STATE(537),
    [sym_qualified_type_operator] = STATE(286),
    [sym__qualified_type_operator] = STATE(537),
    [sym_tycon_arrow] = STATE(97),
    [sym_type_literal] = STATE(161),
    [sym__promoted_tycon] = STATE(97),
    [sym__modid] = STATE(520),
    [aux_sym__qualifying_module] = STATE(330),
    [sym_type_variable] = STATE(84),
    [sym_annotated_type_variable] = STATE(537),
    [sym__forall_kw] = STATE(345),
    [sym__forall] = STATE(378),
    [sym_type_parens] = STATE(170),
    [sym_type_list] = STATE(161),
    [sym__type_tuple] = STATE(556),
    [sym_type_tuple] = STATE(161),
    [sym__type_promotable_literal] = STATE(154),
    [sym__type_promoted_literal] = STATE(154),
    [sym__type_literal] = STATE(170),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(170),
    [sym__atype] = STATE(51),
    [sym_type_apply] = STATE(300),
    [sym__btype] = STATE(174),
    [sym_implicit_param] = STATE(364),
    [sym_type_infix] = STATE(307),
    [sym__type_infix] = STATE(310),
    [sym_constraint] = STATE(527),
    [sym__context_constraints] = STATE(467),
    [sym__context] = STATE(49),
    [sym__type_quantifiers] = STATE(362),
    [sym__type_context] = STATE(362),
    [sym__type_fun] = STATE(362),
    [sym__type] = STATE(364),
    [sym__type_or_implicit] = STATE(321),
    [sym__type_with_kind] = STATE(486),
    [aux_sym_con_tuple_repeat1] = STATE(487),
    [sym__varid] = ACTIONS(19),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym_comma] = ACTIONS(21),
    [sym__consym] = ACTIONS(23),
    [sym__tyconsym] = ACTIONS(25),
    [sym_float] = ACTIONS(27),
    [sym_char] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym__integer_literal] = ACTIONS(29),
    [sym__binary_literal] = ACTIONS(31),
    [sym__octal_literal] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(31),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH_GT] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(65),
    [sym_implicit_parid] = ACTIONS(41),
    [sym__conid] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_forall] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_6] = ACTIONS(53),
  },
  [9] = {
    [sym_comment] = STATE(9),
    [sym_integer] = STATE(148),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(550),
    [sym_constructor] = STATE(82),
    [sym_constructor_operator] = STATE(285),
    [sym_qualified_constructor_operator] = STATE(286),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(97),
    [sym__type_operator] = STATE(531),
    [sym_qualified_type_operator] = STATE(286),
    [sym__qualified_type_operator] = STATE(531),
    [sym_tycon_arrow] = STATE(97),
    [sym_type_literal] = STATE(161),
    [sym__promoted_tycon] = STATE(97),
    [sym__modid] = STATE(520),
    [aux_sym__qualifying_module] = STATE(330),
    [sym_type_variable] = STATE(84),
    [sym_annotated_type_variable] = STATE(531),
    [sym__forall_kw] = STATE(345),
    [sym__forall] = STATE(378),
    [sym_type_parens] = STATE(170),
    [sym_type_list] = STATE(161),
    [sym__type_tuple] = STATE(555),
    [sym_type_tuple] = STATE(161),
    [sym__type_promotable_literal] = STATE(154),
    [sym__type_promoted_literal] = STATE(154),
    [sym__type_literal] = STATE(170),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(170),
    [sym__atype] = STATE(51),
    [sym_type_apply] = STATE(300),
    [sym__btype] = STATE(174),
    [sym_implicit_param] = STATE(364),
    [sym_type_infix] = STATE(307),
    [sym__type_infix] = STATE(310),
    [sym_constraint] = STATE(527),
    [sym__context_constraints] = STATE(467),
    [sym__context] = STATE(49),
    [sym__type_quantifiers] = STATE(362),
    [sym__type_context] = STATE(362),
    [sym__type_fun] = STATE(362),
    [sym__type] = STATE(364),
    [sym__type_or_implicit] = STATE(321),
    [sym__type_with_kind] = STATE(435),
    [aux_sym_con_tuple_repeat1] = STATE(433),
    [sym__varid] = ACTIONS(19),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym_comma] = ACTIONS(21),
    [sym__consym] = ACTIONS(23),
    [sym__tyconsym] = ACTIONS(25),
    [sym_float] = ACTIONS(27),
    [sym_char] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym__integer_literal] = ACTIONS(29),
    [sym__binary_literal] = ACTIONS(31),
    [sym__octal_literal] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(31),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH_GT] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(67),
    [sym_implicit_parid] = ACTIONS(41),
    [sym__conid] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_forall] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_6] = ACTIONS(53),
  },
  [10] = {
    [sym_comment] = STATE(10),
    [sym_integer] = STATE(148),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(536),
    [sym_constructor] = STATE(82),
    [sym_constructor_operator] = STATE(285),
    [sym_qualified_constructor_operator] = STATE(286),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(97),
    [sym__type_operator] = STATE(535),
    [sym_qualified_type_operator] = STATE(286),
    [sym__qualified_type_operator] = STATE(535),
    [sym_tycon_arrow] = STATE(97),
    [sym_type_literal] = STATE(161),
    [sym__promoted_tycon] = STATE(97),
    [sym__modid] = STATE(520),
    [aux_sym__qualifying_module] = STATE(330),
    [sym_type_variable] = STATE(84),
    [sym_annotated_type_variable] = STATE(535),
    [sym__forall_kw] = STATE(345),
    [sym__forall] = STATE(378),
    [sym_type_parens] = STATE(170),
    [sym_type_list] = STATE(161),
    [sym__type_tuple] = STATE(561),
    [sym_type_tuple] = STATE(161),
    [sym__type_promotable_literal] = STATE(154),
    [sym__type_promoted_literal] = STATE(154),
    [sym__type_literal] = STATE(170),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(170),
    [sym__atype] = STATE(51),
    [sym_type_apply] = STATE(300),
    [sym__btype] = STATE(174),
    [sym_implicit_param] = STATE(364),
    [sym_type_infix] = STATE(307),
    [sym__type_infix] = STATE(310),
    [sym_constraint] = STATE(527),
    [sym__context_constraints] = STATE(467),
    [sym__context] = STATE(49),
    [sym__type_quantifiers] = STATE(362),
    [sym__type_context] = STATE(362),
    [sym__type_fun] = STATE(362),
    [sym__type] = STATE(364),
    [sym__type_or_implicit] = STATE(321),
    [sym__type_with_kind] = STATE(496),
    [aux_sym_con_tuple_repeat1] = STATE(489),
    [sym__varid] = ACTIONS(19),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym_comma] = ACTIONS(21),
    [sym__consym] = ACTIONS(23),
    [sym__tyconsym] = ACTIONS(25),
    [sym_float] = ACTIONS(27),
    [sym_char] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym__integer_literal] = ACTIONS(29),
    [sym__binary_literal] = ACTIONS(31),
    [sym__octal_literal] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(31),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH_GT] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(69),
    [sym_implicit_parid] = ACTIONS(41),
    [sym__conid] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_forall] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_6] = ACTIONS(53),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [sym_integer] = STATE(148),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(570),
    [sym_constructor] = STATE(82),
    [sym_constructor_operator] = STATE(285),
    [sym_qualified_constructor_operator] = STATE(286),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(97),
    [sym__type_operator] = STATE(569),
    [sym_qualified_type_operator] = STATE(286),
    [sym__qualified_type_operator] = STATE(569),
    [sym_tycon_arrow] = STATE(97),
    [sym_type_literal] = STATE(161),
    [sym__promoted_tycon] = STATE(97),
    [sym__modid] = STATE(520),
    [aux_sym__qualifying_module] = STATE(330),
    [sym_type_variable] = STATE(84),
    [sym_annotated_type_variable] = STATE(569),
    [sym__forall_kw] = STATE(345),
    [sym__forall] = STATE(378),
    [sym_type_parens] = STATE(170),
    [sym_type_list] = STATE(161),
    [sym__type_tuple] = STATE(534),
    [sym_type_tuple] = STATE(161),
    [sym__type_promotable_literal] = STATE(154),
    [sym__type_promoted_literal] = STATE(154),
    [sym__type_literal] = STATE(170),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(170),
    [sym__atype] = STATE(51),
    [sym_type_apply] = STATE(300),
    [sym__btype] = STATE(174),
    [sym_implicit_param] = STATE(364),
    [sym_type_infix] = STATE(307),
    [sym__type_infix] = STATE(310),
    [sym_constraint] = STATE(527),
    [sym__context_constraints] = STATE(467),
    [sym__context] = STATE(49),
    [sym__type_quantifiers] = STATE(362),
    [sym__type_context] = STATE(362),
    [sym__type_fun] = STATE(362),
    [sym__type] = STATE(364),
    [sym__type_or_implicit] = STATE(321),
    [sym__type_with_kind] = STATE(474),
    [aux_sym_con_tuple_repeat1] = STATE(473),
    [sym__varid] = ACTIONS(19),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym_comma] = ACTIONS(21),
    [sym__consym] = ACTIONS(23),
    [sym__tyconsym] = ACTIONS(25),
    [sym_float] = ACTIONS(27),
    [sym_char] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym__integer_literal] = ACTIONS(29),
    [sym__binary_literal] = ACTIONS(31),
    [sym__octal_literal] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(31),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH_GT] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(71),
    [sym_implicit_parid] = ACTIONS(41),
    [sym__conid] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_forall] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_6] = ACTIONS(53),
  },
  [12] = {
    [sym_comment] = STATE(12),
    [sym_integer] = STATE(148),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(536),
    [sym_constructor] = STATE(82),
    [sym_constructor_operator] = STATE(285),
    [sym_qualified_constructor_operator] = STATE(286),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(97),
    [sym__type_operator] = STATE(535),
    [sym_qualified_type_operator] = STATE(286),
    [sym__qualified_type_operator] = STATE(535),
    [sym_tycon_arrow] = STATE(97),
    [sym_type_literal] = STATE(161),
    [sym__promoted_tycon] = STATE(97),
    [sym__modid] = STATE(520),
    [aux_sym__qualifying_module] = STATE(330),
    [sym_type_variable] = STATE(84),
    [sym_annotated_type_variable] = STATE(535),
    [sym__forall_kw] = STATE(345),
    [sym__forall] = STATE(378),
    [sym_type_parens] = STATE(170),
    [sym_type_list] = STATE(161),
    [sym__type_tuple] = STATE(546),
    [sym_type_tuple] = STATE(161),
    [sym__type_promotable_literal] = STATE(154),
    [sym__type_promoted_literal] = STATE(154),
    [sym__type_literal] = STATE(170),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(170),
    [sym__atype] = STATE(51),
    [sym_type_apply] = STATE(300),
    [sym__btype] = STATE(174),
    [sym_implicit_param] = STATE(364),
    [sym_type_infix] = STATE(307),
    [sym__type_infix] = STATE(310),
    [sym_constraint] = STATE(527),
    [sym__context_constraints] = STATE(467),
    [sym__context] = STATE(49),
    [sym__type_quantifiers] = STATE(362),
    [sym__type_context] = STATE(362),
    [sym__type_fun] = STATE(362),
    [sym__type] = STATE(364),
    [sym__type_or_implicit] = STATE(321),
    [sym__type_with_kind] = STATE(452),
    [aux_sym_con_tuple_repeat1] = STATE(451),
    [sym__varid] = ACTIONS(19),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym_comma] = ACTIONS(21),
    [sym__consym] = ACTIONS(23),
    [sym__tyconsym] = ACTIONS(25),
    [sym_float] = ACTIONS(27),
    [sym_char] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym__integer_literal] = ACTIONS(29),
    [sym__binary_literal] = ACTIONS(31),
    [sym__octal_literal] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(31),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH_GT] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(63),
    [sym_implicit_parid] = ACTIONS(41),
    [sym__conid] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_forall] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_6] = ACTIONS(53),
  },
  [13] = {
    [sym_comment] = STATE(13),
    [sym_integer] = STATE(148),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(562),
    [sym_constructor] = STATE(82),
    [sym_constructor_operator] = STATE(285),
    [sym_qualified_constructor_operator] = STATE(286),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(97),
    [sym__type_operator] = STATE(563),
    [sym_qualified_type_operator] = STATE(286),
    [sym__qualified_type_operator] = STATE(563),
    [sym_tycon_arrow] = STATE(97),
    [sym_type_literal] = STATE(161),
    [sym__promoted_tycon] = STATE(97),
    [sym__modid] = STATE(520),
    [aux_sym__qualifying_module] = STATE(330),
    [sym_type_variable] = STATE(84),
    [sym_annotated_type_variable] = STATE(563),
    [sym__forall_kw] = STATE(345),
    [sym__forall] = STATE(378),
    [sym_type_parens] = STATE(170),
    [sym_type_list] = STATE(161),
    [sym__type_tuple] = STATE(543),
    [sym_type_tuple] = STATE(161),
    [sym__type_promotable_literal] = STATE(154),
    [sym__type_promoted_literal] = STATE(154),
    [sym__type_literal] = STATE(170),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(170),
    [sym__atype] = STATE(51),
    [sym_type_apply] = STATE(300),
    [sym__btype] = STATE(174),
    [sym_implicit_param] = STATE(364),
    [sym_type_infix] = STATE(307),
    [sym__type_infix] = STATE(310),
    [sym_constraint] = STATE(527),
    [sym__context_constraints] = STATE(467),
    [sym__context] = STATE(49),
    [sym__type_quantifiers] = STATE(362),
    [sym__type_context] = STATE(362),
    [sym__type_fun] = STATE(362),
    [sym__type] = STATE(364),
    [sym__type_or_implicit] = STATE(321),
    [sym__type_with_kind] = STATE(466),
    [aux_sym_con_tuple_repeat1] = STATE(456),
    [sym__varid] = ACTIONS(19),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym_comma] = ACTIONS(21),
    [sym__consym] = ACTIONS(23),
    [sym__tyconsym] = ACTIONS(25),
    [sym_float] = ACTIONS(27),
    [sym_char] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym__integer_literal] = ACTIONS(29),
    [sym__binary_literal] = ACTIONS(31),
    [sym__octal_literal] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(31),
    [anon_sym_2] = ACTIONS(33),
    [anon_sym_DASH_GT] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(73),
    [sym_implicit_parid] = ACTIONS(41),
    [sym__conid] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_forall] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_6] = ACTIONS(53),
  },
  [14] = {
    [sym_comment] = STATE(14),
    [sym_integer] = STATE(148),
    [sym__literal] = STATE(157),
    [sym_constructor] = STATE(82),
    [sym_constructor_operator] = STATE(285),
    [sym_qualified_constructor_operator] = STATE(286),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(97),
    [sym__type_operator] = STATE(552),
    [sym_qualified_type_operator] = STATE(286),
    [sym__qualified_type_operator] = STATE(552),
    [sym_tycon_arrow] = STATE(97),
    [sym_type_literal] = STATE(161),
    [sym__promoted_tycon] = STATE(97),
    [sym__modid] = STATE(520),
    [aux_sym__qualifying_module] = STATE(330),
    [sym_type_variable] = STATE(97),
    [sym__forall_kw] = STATE(345),
    [sym__forall] = STATE(378),
    [sym_type_parens] = STATE(170),
    [sym_type_list] = STATE(161),
    [sym__type_tuple] = STATE(555),
    [sym_type_tuple] = STATE(161),
    [sym__type_promotable_literal] = STATE(154),
    [sym__type_promoted_literal] = STATE(154),
    [sym__type_literal] = STATE(170),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(170),
    [sym__atype] = STATE(51),
    [sym_type_apply] = STATE(300),
    [sym__btype] = STATE(174),
    [sym_implicit_param] = STATE(364),
    [sym_type_infix] = STATE(307),
    [sym__type_infix] = STATE(310),
    [sym_constraint] = STATE(527),
    [sym__context_constraints] = STATE(467),
    [sym__context] = STATE(49),
    [sym__type_quantifiers] = STATE(362),
    [sym__type_context] = STATE(362),
    [sym__type_fun] = STATE(362),
    [sym__type] = STATE(364),
    [sym__type_or_implicit] = STATE(321),
    [sym__type_with_kind] = STATE(517),
    [aux_sym_con_tuple_repeat1] = STATE(433),
    [sym__varid] = ACTIONS(19),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym_comma] = ACTIONS(21),
    [sym__consym] = ACTIONS(23),
    [sym__tyconsym] = ACTIONS(25),
    [sym_float] = ACTIONS(27),
    [sym_char] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym__integer_literal] = ACTIONS(29),
    [sym__binary_literal] = ACTIONS(31),
    [sym__octal_literal] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(67),
    [sym_implicit_parid] = ACTIONS(41),
    [sym__conid] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_forall] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_6] = ACTIONS(53),
  },
  [15] = {
    [sym_comment] = STATE(15),
    [sym_integer] = STATE(148),
    [sym__literal] = STATE(157),
    [sym_constructor] = STATE(82),
    [sym_constructor_operator] = STATE(285),
    [sym_qualified_constructor_operator] = STATE(286),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(97),
    [sym__type_operator] = STATE(552),
    [sym_qualified_type_operator] = STATE(286),
    [sym__qualified_type_operator] = STATE(552),
    [sym_tycon_arrow] = STATE(97),
    [sym_type_literal] = STATE(161),
    [sym__promoted_tycon] = STATE(97),
    [sym__modid] = STATE(520),
    [aux_sym__qualifying_module] = STATE(330),
    [sym_type_variable] = STATE(97),
    [sym__forall_kw] = STATE(345),
    [sym__forall] = STATE(378),
    [sym_type_parens] = STATE(170),
    [sym_type_list] = STATE(161),
    [sym__type_tuple] = STATE(543),
    [sym_type_tuple] = STATE(161),
    [sym__type_promotable_literal] = STATE(154),
    [sym__type_promoted_literal] = STATE(154),
    [sym__type_literal] = STATE(170),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(170),
    [sym__atype] = STATE(51),
    [sym_type_apply] = STATE(300),
    [sym__btype] = STATE(174),
    [sym_implicit_param] = STATE(364),
    [sym_type_infix] = STATE(307),
    [sym__type_infix] = STATE(310),
    [sym_constraint] = STATE(527),
    [sym__context_constraints] = STATE(467),
    [sym__context] = STATE(49),
    [sym__type_quantifiers] = STATE(362),
    [sym__type_context] = STATE(362),
    [sym__type_fun] = STATE(362),
    [sym__type] = STATE(364),
    [sym__type_or_implicit] = STATE(321),
    [sym__type_with_kind] = STATE(517),
    [aux_sym_con_tuple_repeat1] = STATE(456),
    [sym__varid] = ACTIONS(19),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym_comma] = ACTIONS(21),
    [sym__consym] = ACTIONS(23),
    [sym__tyconsym] = ACTIONS(25),
    [sym_float] = ACTIONS(27),
    [sym_char] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym__integer_literal] = ACTIONS(29),
    [sym__binary_literal] = ACTIONS(31),
    [sym__octal_literal] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(73),
    [sym_implicit_parid] = ACTIONS(41),
    [sym__conid] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_forall] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_6] = ACTIONS(53),
  },
  [16] = {
    [sym_comment] = STATE(16),
    [sym_integer] = STATE(148),
    [sym__literal] = STATE(157),
    [sym_constructor] = STATE(82),
    [sym_constructor_operator] = STATE(285),
    [sym_qualified_constructor_operator] = STATE(286),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(97),
    [sym__type_operator] = STATE(564),
    [sym_qualified_type_operator] = STATE(286),
    [sym__qualified_type_operator] = STATE(564),
    [sym_tycon_arrow] = STATE(97),
    [sym_type_literal] = STATE(161),
    [sym__promoted_tycon] = STATE(97),
    [sym__modid] = STATE(520),
    [aux_sym__qualifying_module] = STATE(330),
    [sym_type_variable] = STATE(97),
    [sym__forall_kw] = STATE(345),
    [sym__forall] = STATE(378),
    [sym_type_parens] = STATE(170),
    [sym_type_list] = STATE(161),
    [sym__type_tuple] = STATE(543),
    [sym_type_tuple] = STATE(161),
    [sym__type_promotable_literal] = STATE(154),
    [sym__type_promoted_literal] = STATE(154),
    [sym__type_literal] = STATE(170),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(170),
    [sym__atype] = STATE(51),
    [sym_type_apply] = STATE(300),
    [sym__btype] = STATE(174),
    [sym_implicit_param] = STATE(364),
    [sym_type_infix] = STATE(307),
    [sym__type_infix] = STATE(310),
    [sym_constraint] = STATE(527),
    [sym__context_constraints] = STATE(467),
    [sym__context] = STATE(49),
    [sym__type_quantifiers] = STATE(362),
    [sym__type_context] = STATE(362),
    [sym__type_fun] = STATE(362),
    [sym__type] = STATE(364),
    [sym__type_or_implicit] = STATE(321),
    [sym__type_with_kind] = STATE(517),
    [aux_sym_con_tuple_repeat1] = STATE(456),
    [sym__varid] = ACTIONS(19),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym_comma] = ACTIONS(21),
    [sym__consym] = ACTIONS(23),
    [sym__tyconsym] = ACTIONS(25),
    [sym_float] = ACTIONS(27),
    [sym_char] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym__integer_literal] = ACTIONS(29),
    [sym__binary_literal] = ACTIONS(31),
    [sym__octal_literal] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(73),
    [sym_implicit_parid] = ACTIONS(41),
    [sym__conid] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_forall] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_6] = ACTIONS(53),
  },
  [17] = {
    [sym_comment] = STATE(17),
    [sym_integer] = STATE(148),
    [sym__literal] = STATE(157),
    [sym_constructor] = STATE(82),
    [sym_constructor_operator] = STATE(285),
    [sym_qualified_constructor_operator] = STATE(286),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(97),
    [sym__type_operator] = STATE(533),
    [sym_qualified_type_operator] = STATE(286),
    [sym__qualified_type_operator] = STATE(533),
    [sym_tycon_arrow] = STATE(97),
    [sym_type_literal] = STATE(161),
    [sym__promoted_tycon] = STATE(97),
    [sym__modid] = STATE(520),
    [aux_sym__qualifying_module] = STATE(330),
    [sym_type_variable] = STATE(97),
    [sym__forall_kw] = STATE(345),
    [sym__forall] = STATE(378),
    [sym_type_parens] = STATE(170),
    [sym_type_list] = STATE(161),
    [sym__type_tuple] = STATE(546),
    [sym_type_tuple] = STATE(161),
    [sym__type_promotable_literal] = STATE(154),
    [sym__type_promoted_literal] = STATE(154),
    [sym__type_literal] = STATE(170),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(170),
    [sym__atype] = STATE(51),
    [sym_type_apply] = STATE(300),
    [sym__btype] = STATE(174),
    [sym_implicit_param] = STATE(364),
    [sym_type_infix] = STATE(307),
    [sym__type_infix] = STATE(310),
    [sym_constraint] = STATE(527),
    [sym__context_constraints] = STATE(467),
    [sym__context] = STATE(49),
    [sym__type_quantifiers] = STATE(362),
    [sym__type_context] = STATE(362),
    [sym__type_fun] = STATE(362),
    [sym__type] = STATE(364),
    [sym__type_or_implicit] = STATE(321),
    [sym__type_with_kind] = STATE(517),
    [aux_sym_con_tuple_repeat1] = STATE(451),
    [sym__varid] = ACTIONS(19),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym_comma] = ACTIONS(21),
    [sym__consym] = ACTIONS(23),
    [sym__tyconsym] = ACTIONS(25),
    [sym_float] = ACTIONS(27),
    [sym_char] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym__integer_literal] = ACTIONS(29),
    [sym__binary_literal] = ACTIONS(31),
    [sym__octal_literal] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(63),
    [sym_implicit_parid] = ACTIONS(41),
    [sym__conid] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_forall] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_6] = ACTIONS(53),
  },
  [18] = {
    [sym_comment] = STATE(18),
    [sym_integer] = STATE(148),
    [sym__literal] = STATE(157),
    [sym_constructor] = STATE(82),
    [sym_constructor_operator] = STATE(285),
    [sym_qualified_constructor_operator] = STATE(286),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(97),
    [sym__type_operator] = STATE(533),
    [sym_qualified_type_operator] = STATE(286),
    [sym__qualified_type_operator] = STATE(533),
    [sym_tycon_arrow] = STATE(97),
    [sym_type_literal] = STATE(161),
    [sym__promoted_tycon] = STATE(97),
    [sym__modid] = STATE(520),
    [aux_sym__qualifying_module] = STATE(330),
    [sym_type_variable] = STATE(97),
    [sym__forall_kw] = STATE(345),
    [sym__forall] = STATE(378),
    [sym_type_parens] = STATE(170),
    [sym_type_list] = STATE(161),
    [sym__type_tuple] = STATE(561),
    [sym_type_tuple] = STATE(161),
    [sym__type_promotable_literal] = STATE(154),
    [sym__type_promoted_literal] = STATE(154),
    [sym__type_literal] = STATE(170),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(170),
    [sym__atype] = STATE(51),
    [sym_type_apply] = STATE(300),
    [sym__btype] = STATE(174),
    [sym_implicit_param] = STATE(364),
    [sym_type_infix] = STATE(307),
    [sym__type_infix] = STATE(310),
    [sym_constraint] = STATE(527),
    [sym__context_constraints] = STATE(467),
    [sym__context] = STATE(49),
    [sym__type_quantifiers] = STATE(362),
    [sym__type_context] = STATE(362),
    [sym__type_fun] = STATE(362),
    [sym__type] = STATE(364),
    [sym__type_or_implicit] = STATE(321),
    [sym__type_with_kind] = STATE(517),
    [aux_sym_con_tuple_repeat1] = STATE(489),
    [sym__varid] = ACTIONS(19),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym_comma] = ACTIONS(21),
    [sym__consym] = ACTIONS(23),
    [sym__tyconsym] = ACTIONS(25),
    [sym_float] = ACTIONS(27),
    [sym_char] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym__integer_literal] = ACTIONS(29),
    [sym__binary_literal] = ACTIONS(31),
    [sym__octal_literal] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(69),
    [sym_implicit_parid] = ACTIONS(41),
    [sym__conid] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_forall] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_6] = ACTIONS(53),
  },
  [19] = {
    [sym_comment] = STATE(19),
    [sym_integer] = STATE(148),
    [sym__literal] = STATE(157),
    [sym_constructor] = STATE(82),
    [sym_constructor_operator] = STATE(285),
    [sym_qualified_constructor_operator] = STATE(286),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(97),
    [sym__type_operator] = STATE(532),
    [sym_qualified_type_operator] = STATE(286),
    [sym__qualified_type_operator] = STATE(532),
    [sym_tycon_arrow] = STATE(97),
    [sym_type_literal] = STATE(161),
    [sym__promoted_tycon] = STATE(97),
    [sym__modid] = STATE(520),
    [aux_sym__qualifying_module] = STATE(330),
    [sym_type_variable] = STATE(97),
    [sym__forall_kw] = STATE(345),
    [sym__forall] = STATE(378),
    [sym_type_parens] = STATE(170),
    [sym_type_list] = STATE(161),
    [sym__type_tuple] = STATE(546),
    [sym_type_tuple] = STATE(161),
    [sym__type_promotable_literal] = STATE(154),
    [sym__type_promoted_literal] = STATE(154),
    [sym__type_literal] = STATE(170),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(170),
    [sym__atype] = STATE(51),
    [sym_type_apply] = STATE(300),
    [sym__btype] = STATE(174),
    [sym_implicit_param] = STATE(364),
    [sym_type_infix] = STATE(307),
    [sym__type_infix] = STATE(310),
    [sym_constraint] = STATE(527),
    [sym__context_constraints] = STATE(467),
    [sym__context] = STATE(49),
    [sym__type_quantifiers] = STATE(362),
    [sym__type_context] = STATE(362),
    [sym__type_fun] = STATE(362),
    [sym__type] = STATE(364),
    [sym__type_or_implicit] = STATE(321),
    [sym__type_with_kind] = STATE(517),
    [aux_sym_con_tuple_repeat1] = STATE(451),
    [sym__varid] = ACTIONS(19),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym_comma] = ACTIONS(21),
    [sym__consym] = ACTIONS(23),
    [sym__tyconsym] = ACTIONS(25),
    [sym_float] = ACTIONS(27),
    [sym_char] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym__integer_literal] = ACTIONS(29),
    [sym__binary_literal] = ACTIONS(31),
    [sym__octal_literal] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(63),
    [sym_implicit_parid] = ACTIONS(41),
    [sym__conid] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_forall] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_6] = ACTIONS(53),
  },
  [20] = {
    [sym_comment] = STATE(20),
    [sym_integer] = STATE(148),
    [sym__literal] = STATE(157),
    [sym_constructor] = STATE(82),
    [sym_constructor_operator] = STATE(285),
    [sym_qualified_constructor_operator] = STATE(286),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(97),
    [sym__type_operator] = STATE(540),
    [sym_qualified_type_operator] = STATE(286),
    [sym__qualified_type_operator] = STATE(540),
    [sym_tycon_arrow] = STATE(97),
    [sym_type_literal] = STATE(161),
    [sym__promoted_tycon] = STATE(97),
    [sym__modid] = STATE(520),
    [aux_sym__qualifying_module] = STATE(330),
    [sym_type_variable] = STATE(97),
    [sym__forall_kw] = STATE(345),
    [sym__forall] = STATE(378),
    [sym_type_parens] = STATE(170),
    [sym_type_list] = STATE(161),
    [sym__type_tuple] = STATE(539),
    [sym_type_tuple] = STATE(161),
    [sym__type_promotable_literal] = STATE(154),
    [sym__type_promoted_literal] = STATE(154),
    [sym__type_literal] = STATE(170),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(170),
    [sym__atype] = STATE(51),
    [sym_type_apply] = STATE(300),
    [sym__btype] = STATE(174),
    [sym_implicit_param] = STATE(364),
    [sym_type_infix] = STATE(307),
    [sym__type_infix] = STATE(310),
    [sym_constraint] = STATE(527),
    [sym__context_constraints] = STATE(467),
    [sym__context] = STATE(49),
    [sym__type_quantifiers] = STATE(362),
    [sym__type_context] = STATE(362),
    [sym__type_fun] = STATE(362),
    [sym__type] = STATE(364),
    [sym__type_or_implicit] = STATE(321),
    [sym__type_with_kind] = STATE(517),
    [aux_sym_con_tuple_repeat1] = STATE(505),
    [sym__varid] = ACTIONS(19),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym_comma] = ACTIONS(21),
    [sym__consym] = ACTIONS(23),
    [sym__tyconsym] = ACTIONS(25),
    [sym_float] = ACTIONS(27),
    [sym_char] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym__integer_literal] = ACTIONS(29),
    [sym__binary_literal] = ACTIONS(31),
    [sym__octal_literal] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(61),
    [sym_implicit_parid] = ACTIONS(41),
    [sym__conid] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_forall] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_6] = ACTIONS(53),
  },
  [21] = {
    [sym_comment] = STATE(21),
    [sym_integer] = STATE(148),
    [sym__literal] = STATE(157),
    [sym_constructor] = STATE(82),
    [sym_constructor_operator] = STATE(285),
    [sym_qualified_constructor_operator] = STATE(286),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(97),
    [sym__type_operator] = STATE(558),
    [sym_qualified_type_operator] = STATE(286),
    [sym__qualified_type_operator] = STATE(558),
    [sym_tycon_arrow] = STATE(97),
    [sym_type_literal] = STATE(161),
    [sym__promoted_tycon] = STATE(97),
    [sym__modid] = STATE(520),
    [aux_sym__qualifying_module] = STATE(330),
    [sym_type_variable] = STATE(97),
    [sym__forall_kw] = STATE(345),
    [sym__forall] = STATE(378),
    [sym_type_parens] = STATE(170),
    [sym_type_list] = STATE(161),
    [sym__type_tuple] = STATE(556),
    [sym_type_tuple] = STATE(161),
    [sym__type_promotable_literal] = STATE(154),
    [sym__type_promoted_literal] = STATE(154),
    [sym__type_literal] = STATE(170),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(170),
    [sym__atype] = STATE(51),
    [sym_type_apply] = STATE(300),
    [sym__btype] = STATE(174),
    [sym_implicit_param] = STATE(364),
    [sym_type_infix] = STATE(307),
    [sym__type_infix] = STATE(310),
    [sym_constraint] = STATE(527),
    [sym__context_constraints] = STATE(467),
    [sym__context] = STATE(49),
    [sym__type_quantifiers] = STATE(362),
    [sym__type_context] = STATE(362),
    [sym__type_fun] = STATE(362),
    [sym__type] = STATE(364),
    [sym__type_or_implicit] = STATE(321),
    [sym__type_with_kind] = STATE(517),
    [aux_sym_con_tuple_repeat1] = STATE(487),
    [sym__varid] = ACTIONS(19),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym_comma] = ACTIONS(21),
    [sym__consym] = ACTIONS(23),
    [sym__tyconsym] = ACTIONS(25),
    [sym_float] = ACTIONS(27),
    [sym_char] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym__integer_literal] = ACTIONS(29),
    [sym__binary_literal] = ACTIONS(31),
    [sym__octal_literal] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(65),
    [sym_implicit_parid] = ACTIONS(41),
    [sym__conid] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_forall] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_6] = ACTIONS(53),
  },
  [22] = {
    [sym_comment] = STATE(22),
    [sym_integer] = STATE(148),
    [sym__literal] = STATE(157),
    [sym_constructor] = STATE(82),
    [sym_constructor_operator] = STATE(285),
    [sym_qualified_constructor_operator] = STATE(286),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(97),
    [sym__type_operator] = STATE(567),
    [sym_qualified_type_operator] = STATE(286),
    [sym__qualified_type_operator] = STATE(567),
    [sym_tycon_arrow] = STATE(97),
    [sym_type_literal] = STATE(161),
    [sym__promoted_tycon] = STATE(97),
    [sym__modid] = STATE(520),
    [aux_sym__qualifying_module] = STATE(330),
    [sym_type_variable] = STATE(97),
    [sym__forall_kw] = STATE(345),
    [sym__forall] = STATE(378),
    [sym_type_parens] = STATE(170),
    [sym_type_list] = STATE(161),
    [sym__type_tuple] = STATE(539),
    [sym_type_tuple] = STATE(161),
    [sym__type_promotable_literal] = STATE(154),
    [sym__type_promoted_literal] = STATE(154),
    [sym__type_literal] = STATE(170),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(170),
    [sym__atype] = STATE(51),
    [sym_type_apply] = STATE(300),
    [sym__btype] = STATE(174),
    [sym_implicit_param] = STATE(364),
    [sym_type_infix] = STATE(307),
    [sym__type_infix] = STATE(310),
    [sym_constraint] = STATE(527),
    [sym__context_constraints] = STATE(467),
    [sym__context] = STATE(49),
    [sym__type_quantifiers] = STATE(362),
    [sym__type_context] = STATE(362),
    [sym__type_fun] = STATE(362),
    [sym__type] = STATE(364),
    [sym__type_or_implicit] = STATE(321),
    [sym__type_with_kind] = STATE(517),
    [aux_sym_con_tuple_repeat1] = STATE(505),
    [sym__varid] = ACTIONS(19),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym_comma] = ACTIONS(21),
    [sym__consym] = ACTIONS(23),
    [sym__tyconsym] = ACTIONS(25),
    [sym_float] = ACTIONS(27),
    [sym_char] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym__integer_literal] = ACTIONS(29),
    [sym__binary_literal] = ACTIONS(31),
    [sym__octal_literal] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(61),
    [sym_implicit_parid] = ACTIONS(41),
    [sym__conid] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_forall] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_6] = ACTIONS(53),
  },
  [23] = {
    [sym_comment] = STATE(23),
    [sym_integer] = STATE(148),
    [sym__literal] = STATE(157),
    [sym_constructor] = STATE(82),
    [sym_constructor_operator] = STATE(285),
    [sym_qualified_constructor_operator] = STATE(286),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(97),
    [sym__type_operator] = STATE(567),
    [sym_qualified_type_operator] = STATE(286),
    [sym__qualified_type_operator] = STATE(567),
    [sym_tycon_arrow] = STATE(97),
    [sym_type_literal] = STATE(161),
    [sym__promoted_tycon] = STATE(97),
    [sym__modid] = STATE(520),
    [aux_sym__qualifying_module] = STATE(330),
    [sym_type_variable] = STATE(97),
    [sym__forall_kw] = STATE(345),
    [sym__forall] = STATE(378),
    [sym_type_parens] = STATE(170),
    [sym_type_list] = STATE(161),
    [sym__type_tuple] = STATE(534),
    [sym_type_tuple] = STATE(161),
    [sym__type_promotable_literal] = STATE(154),
    [sym__type_promoted_literal] = STATE(154),
    [sym__type_literal] = STATE(170),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(170),
    [sym__atype] = STATE(51),
    [sym_type_apply] = STATE(300),
    [sym__btype] = STATE(174),
    [sym_implicit_param] = STATE(364),
    [sym_type_infix] = STATE(307),
    [sym__type_infix] = STATE(310),
    [sym_constraint] = STATE(527),
    [sym__context_constraints] = STATE(467),
    [sym__context] = STATE(49),
    [sym__type_quantifiers] = STATE(362),
    [sym__type_context] = STATE(362),
    [sym__type_fun] = STATE(362),
    [sym__type] = STATE(364),
    [sym__type_or_implicit] = STATE(321),
    [sym__type_with_kind] = STATE(517),
    [aux_sym_con_tuple_repeat1] = STATE(473),
    [sym__varid] = ACTIONS(19),
    [sym__doc_comment] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(7),
    [sym_comma] = ACTIONS(21),
    [sym__consym] = ACTIONS(23),
    [sym__tyconsym] = ACTIONS(25),
    [sym_float] = ACTIONS(27),
    [sym_char] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym__integer_literal] = ACTIONS(29),
    [sym__binary_literal] = ACTIONS(31),
    [sym__octal_literal] = ACTIONS(31),
    [sym__hex_literal] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(71),
    [sym_implicit_parid] = ACTIONS(41),
    [sym__conid] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_forall] = ACTIONS(49),
    [anon_sym_5] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(53),
    [anon_sym_6] = ACTIONS(53),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 41,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(19), 1,
      sym__varid,
    ACTIONS(29), 1,
      sym__integer_literal,
    ACTIONS(41), 1,
      sym_implicit_parid,
    ACTIONS(43), 1,
      sym__conid,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_forall,
    ACTIONS(51), 1,
      anon_sym_5,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      sym_comment,
    STATE(43), 1,
      sym_type_name,
    STATE(49), 1,
      sym__context,
    STATE(51), 1,
      sym__atype,
    STATE(82), 1,
      sym_constructor,
    STATE(148), 1,
      sym_integer,
    STATE(174), 1,
      sym__btype,
    STATE(300), 1,
      sym_type_apply,
    STATE(307), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__type_infix,
    STATE(321), 1,
      sym__type_or_implicit,
    STATE(345), 1,
      sym__forall_kw,
    STATE(378), 1,
      sym__forall,
    STATE(390), 1,
      aux_sym__qualifying_module,
    STATE(467), 1,
      sym__context_constraints,
    STATE(506), 1,
      sym__type_with_kind,
    STATE(520), 1,
      sym__modid,
    STATE(527), 1,
      sym_constraint,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(154), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(364), 2,
      sym_implicit_param,
      sym__type,
    ACTIONS(27), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(31), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(170), 3,
      sym_type_parens,
      sym__type_literal,
      sym_type_star,
    STATE(362), 3,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
    STATE(97), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(157), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [143] = 41,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(19), 1,
      sym__varid,
    ACTIONS(29), 1,
      sym__integer_literal,
    ACTIONS(41), 1,
      sym_implicit_parid,
    ACTIONS(43), 1,
      sym__conid,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_forall,
    ACTIONS(51), 1,
      anon_sym_5,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym_comment,
    STATE(43), 1,
      sym_type_name,
    STATE(49), 1,
      sym__context,
    STATE(51), 1,
      sym__atype,
    STATE(82), 1,
      sym_constructor,
    STATE(148), 1,
      sym_integer,
    STATE(174), 1,
      sym__btype,
    STATE(300), 1,
      sym_type_apply,
    STATE(307), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__type_infix,
    STATE(321), 1,
      sym__type_or_implicit,
    STATE(345), 1,
      sym__forall_kw,
    STATE(378), 1,
      sym__forall,
    STATE(390), 1,
      aux_sym__qualifying_module,
    STATE(455), 1,
      sym__type_with_kind,
    STATE(467), 1,
      sym__context_constraints,
    STATE(520), 1,
      sym__modid,
    STATE(527), 1,
      sym_constraint,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(154), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(364), 2,
      sym_implicit_param,
      sym__type,
    ACTIONS(27), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(31), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(170), 3,
      sym_type_parens,
      sym__type_literal,
      sym_type_star,
    STATE(362), 3,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
    STATE(97), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(157), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [286] = 41,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(19), 1,
      sym__varid,
    ACTIONS(29), 1,
      sym__integer_literal,
    ACTIONS(41), 1,
      sym_implicit_parid,
    ACTIONS(43), 1,
      sym__conid,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_forall,
    ACTIONS(51), 1,
      anon_sym_5,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym_comment,
    STATE(43), 1,
      sym_type_name,
    STATE(49), 1,
      sym__context,
    STATE(51), 1,
      sym__atype,
    STATE(82), 1,
      sym_constructor,
    STATE(148), 1,
      sym_integer,
    STATE(174), 1,
      sym__btype,
    STATE(300), 1,
      sym_type_apply,
    STATE(307), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__type_infix,
    STATE(321), 1,
      sym__type_or_implicit,
    STATE(345), 1,
      sym__forall_kw,
    STATE(378), 1,
      sym__forall,
    STATE(390), 1,
      aux_sym__qualifying_module,
    STATE(422), 1,
      sym__type_with_kind,
    STATE(467), 1,
      sym__context_constraints,
    STATE(520), 1,
      sym__modid,
    STATE(527), 1,
      sym_constraint,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(154), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(364), 2,
      sym_implicit_param,
      sym__type,
    ACTIONS(27), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(31), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(170), 3,
      sym_type_parens,
      sym__type_literal,
      sym_type_star,
    STATE(362), 3,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
    STATE(97), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(157), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [429] = 41,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(19), 1,
      sym__varid,
    ACTIONS(29), 1,
      sym__integer_literal,
    ACTIONS(41), 1,
      sym_implicit_parid,
    ACTIONS(43), 1,
      sym__conid,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_forall,
    ACTIONS(51), 1,
      anon_sym_5,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      sym_comment,
    STATE(43), 1,
      sym_type_name,
    STATE(49), 1,
      sym__context,
    STATE(51), 1,
      sym__atype,
    STATE(82), 1,
      sym_constructor,
    STATE(148), 1,
      sym_integer,
    STATE(174), 1,
      sym__btype,
    STATE(300), 1,
      sym_type_apply,
    STATE(307), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__type_infix,
    STATE(321), 1,
      sym__type_or_implicit,
    STATE(345), 1,
      sym__forall_kw,
    STATE(378), 1,
      sym__forall,
    STATE(390), 1,
      aux_sym__qualifying_module,
    STATE(450), 1,
      sym__type_with_kind,
    STATE(467), 1,
      sym__context_constraints,
    STATE(520), 1,
      sym__modid,
    STATE(527), 1,
      sym_constraint,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(154), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(364), 2,
      sym_implicit_param,
      sym__type,
    ACTIONS(27), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(31), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(170), 3,
      sym_type_parens,
      sym__type_literal,
      sym_type_star,
    STATE(362), 3,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
    STATE(97), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(157), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [572] = 41,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(19), 1,
      sym__varid,
    ACTIONS(29), 1,
      sym__integer_literal,
    ACTIONS(41), 1,
      sym_implicit_parid,
    ACTIONS(43), 1,
      sym__conid,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_forall,
    ACTIONS(51), 1,
      anon_sym_5,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      sym_comment,
    STATE(43), 1,
      sym_type_name,
    STATE(49), 1,
      sym__context,
    STATE(51), 1,
      sym__atype,
    STATE(82), 1,
      sym_constructor,
    STATE(148), 1,
      sym_integer,
    STATE(174), 1,
      sym__btype,
    STATE(300), 1,
      sym_type_apply,
    STATE(307), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__type_infix,
    STATE(321), 1,
      sym__type_or_implicit,
    STATE(345), 1,
      sym__forall_kw,
    STATE(378), 1,
      sym__forall,
    STATE(390), 1,
      aux_sym__qualifying_module,
    STATE(427), 1,
      sym__type_with_kind,
    STATE(467), 1,
      sym__context_constraints,
    STATE(520), 1,
      sym__modid,
    STATE(527), 1,
      sym_constraint,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(154), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(364), 2,
      sym_implicit_param,
      sym__type,
    ACTIONS(27), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(31), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(170), 3,
      sym_type_parens,
      sym__type_literal,
      sym_type_star,
    STATE(362), 3,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
    STATE(97), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(157), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [715] = 41,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(19), 1,
      sym__varid,
    ACTIONS(29), 1,
      sym__integer_literal,
    ACTIONS(41), 1,
      sym_implicit_parid,
    ACTIONS(43), 1,
      sym__conid,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_forall,
    ACTIONS(51), 1,
      anon_sym_5,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      sym_comment,
    STATE(43), 1,
      sym_type_name,
    STATE(49), 1,
      sym__context,
    STATE(51), 1,
      sym__atype,
    STATE(82), 1,
      sym_constructor,
    STATE(148), 1,
      sym_integer,
    STATE(174), 1,
      sym__btype,
    STATE(300), 1,
      sym_type_apply,
    STATE(307), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__type_infix,
    STATE(321), 1,
      sym__type_or_implicit,
    STATE(345), 1,
      sym__forall_kw,
    STATE(378), 1,
      sym__forall,
    STATE(390), 1,
      aux_sym__qualifying_module,
    STATE(467), 1,
      sym__context_constraints,
    STATE(488), 1,
      sym__type_with_kind,
    STATE(520), 1,
      sym__modid,
    STATE(527), 1,
      sym_constraint,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(154), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(364), 2,
      sym_implicit_param,
      sym__type,
    ACTIONS(27), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(31), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(170), 3,
      sym_type_parens,
      sym__type_literal,
      sym_type_star,
    STATE(362), 3,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
    STATE(97), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(157), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [858] = 41,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(19), 1,
      sym__varid,
    ACTIONS(29), 1,
      sym__integer_literal,
    ACTIONS(41), 1,
      sym_implicit_parid,
    ACTIONS(43), 1,
      sym__conid,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_forall,
    ACTIONS(51), 1,
      anon_sym_5,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym_comment,
    STATE(43), 1,
      sym_type_name,
    STATE(49), 1,
      sym__context,
    STATE(51), 1,
      sym__atype,
    STATE(82), 1,
      sym_constructor,
    STATE(148), 1,
      sym_integer,
    STATE(174), 1,
      sym__btype,
    STATE(300), 1,
      sym_type_apply,
    STATE(307), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__type_infix,
    STATE(321), 1,
      sym__type_or_implicit,
    STATE(345), 1,
      sym__forall_kw,
    STATE(378), 1,
      sym__forall,
    STATE(390), 1,
      aux_sym__qualifying_module,
    STATE(467), 1,
      sym__context_constraints,
    STATE(485), 1,
      sym__type_with_kind,
    STATE(520), 1,
      sym__modid,
    STATE(527), 1,
      sym_constraint,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(154), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(364), 2,
      sym_implicit_param,
      sym__type,
    ACTIONS(27), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(31), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(170), 3,
      sym_type_parens,
      sym__type_literal,
      sym_type_star,
    STATE(362), 3,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
    STATE(97), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(157), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [1001] = 40,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(19), 1,
      sym__varid,
    ACTIONS(29), 1,
      sym__integer_literal,
    ACTIONS(41), 1,
      sym_implicit_parid,
    ACTIONS(43), 1,
      sym__conid,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_forall,
    ACTIONS(51), 1,
      anon_sym_5,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_comment,
    STATE(43), 1,
      sym_type_name,
    STATE(49), 1,
      sym__context,
    STATE(51), 1,
      sym__atype,
    STATE(82), 1,
      sym_constructor,
    STATE(148), 1,
      sym_integer,
    STATE(174), 1,
      sym__btype,
    STATE(300), 1,
      sym_type_apply,
    STATE(307), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__type_infix,
    STATE(321), 1,
      sym__type_or_implicit,
    STATE(345), 1,
      sym__forall_kw,
    STATE(378), 1,
      sym__forall,
    STATE(390), 1,
      aux_sym__qualifying_module,
    STATE(467), 1,
      sym__context_constraints,
    STATE(477), 1,
      sym__type_with_kind,
    STATE(520), 1,
      sym__modid,
    STATE(527), 1,
      sym_constraint,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(154), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(364), 2,
      sym_implicit_param,
      sym__type,
    ACTIONS(27), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(31), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(170), 3,
      sym_type_parens,
      sym__type_literal,
      sym_type_star,
    STATE(362), 3,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
    STATE(97), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(157), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [1141] = 39,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(19), 1,
      sym__varid,
    ACTIONS(29), 1,
      sym__integer_literal,
    ACTIONS(41), 1,
      sym_implicit_parid,
    ACTIONS(43), 1,
      sym__conid,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_forall,
    ACTIONS(51), 1,
      anon_sym_5,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_comment,
    STATE(43), 1,
      sym_type_name,
    STATE(49), 1,
      sym__context,
    STATE(51), 1,
      sym__atype,
    STATE(82), 1,
      sym_constructor,
    STATE(148), 1,
      sym_integer,
    STATE(174), 1,
      sym__btype,
    STATE(300), 1,
      sym_type_apply,
    STATE(307), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__type_infix,
    STATE(345), 1,
      sym__forall_kw,
    STATE(360), 1,
      sym__type_or_implicit,
    STATE(378), 1,
      sym__forall,
    STATE(390), 1,
      aux_sym__qualifying_module,
    STATE(467), 1,
      sym__context_constraints,
    STATE(520), 1,
      sym__modid,
    STATE(527), 1,
      sym_constraint,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(154), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(364), 2,
      sym_implicit_param,
      sym__type,
    ACTIONS(27), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(31), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(170), 3,
      sym_type_parens,
      sym__type_literal,
      sym_type_star,
    STATE(362), 3,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
    STATE(97), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(157), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [1278] = 39,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(19), 1,
      sym__varid,
    ACTIONS(29), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym__conid,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_forall,
    ACTIONS(51), 1,
      anon_sym_5,
    STATE(33), 1,
      sym_comment,
    STATE(34), 1,
      sym__context,
    STATE(51), 1,
      sym__atype,
    STATE(52), 1,
      sym_type_name,
    STATE(82), 1,
      sym_constructor,
    STATE(148), 1,
      sym_integer,
    STATE(174), 1,
      sym__btype,
    STATE(300), 1,
      sym_type_apply,
    STATE(310), 1,
      sym__type_infix,
    STATE(316), 1,
      sym_type_infix,
    STATE(345), 1,
      sym__forall_kw,
    STATE(355), 1,
      sym__type,
    STATE(375), 1,
      sym__forall,
    STATE(390), 1,
      aux_sym__qualifying_module,
    STATE(418), 1,
      sym_constraint,
    STATE(467), 1,
      sym__context_constraints,
    STATE(520), 1,
      sym__modid,
    STATE(525), 1,
      sym__constraint,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(154), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(522), 2,
      sym__quantified_constraint,
      sym__constraint_context,
    ACTIONS(27), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(31), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(170), 3,
      sym_type_parens,
      sym__type_literal,
      sym_type_star,
    STATE(362), 3,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
    STATE(97), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(157), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [1415] = 38,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(19), 1,
      sym__varid,
    ACTIONS(29), 1,
      sym__integer_literal,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym__conid,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_forall,
    ACTIONS(51), 1,
      anon_sym_5,
    STATE(51), 1,
      sym__atype,
    STATE(52), 1,
      sym_type_name,
    STATE(82), 1,
      sym_constructor,
    STATE(148), 1,
      sym_integer,
    STATE(174), 1,
      sym__btype,
    STATE(300), 1,
      sym_type_apply,
    STATE(310), 1,
      sym__type_infix,
    STATE(316), 1,
      sym_type_infix,
    STATE(345), 1,
      sym__forall_kw,
    STATE(349), 1,
      sym__type,
    STATE(375), 1,
      sym__forall,
    STATE(390), 1,
      aux_sym__qualifying_module,
    STATE(418), 1,
      sym_constraint,
    STATE(467), 1,
      sym__context_constraints,
    STATE(518), 1,
      sym__constraint,
    STATE(520), 1,
      sym__modid,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(34), 2,
      sym_comment,
      sym__context,
    STATE(154), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(522), 2,
      sym__quantified_constraint,
      sym__constraint_context,
    ACTIONS(27), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(31), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(170), 3,
      sym_type_parens,
      sym__type_literal,
      sym_type_star,
    STATE(362), 3,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
    STATE(97), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(157), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [1550] = 39,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(49), 1,
      anon_sym_forall,
    ACTIONS(51), 1,
      anon_sym_5,
    ACTIONS(89), 1,
      sym__varid,
    ACTIONS(93), 1,
      sym__integer_literal,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      sym_implicit_parid,
    ACTIONS(101), 1,
      sym__conid,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    STATE(35), 1,
      sym_comment,
    STATE(45), 1,
      sym__context,
    STATE(54), 1,
      sym_type_name,
    STATE(58), 1,
      sym__atype,
    STATE(106), 1,
      sym_constructor,
    STATE(189), 1,
      sym_integer,
    STATE(196), 1,
      sym__btype,
    STATE(304), 1,
      sym_type_apply,
    STATE(307), 1,
      sym_type_infix,
    STATE(312), 1,
      sym__type_infix,
    STATE(345), 1,
      sym__forall_kw,
    STATE(360), 1,
      sym__type_or_implicit,
    STATE(381), 1,
      sym__forall,
    STATE(386), 1,
      aux_sym__qualifying_module,
    STATE(467), 1,
      sym__context_constraints,
    STATE(520), 1,
      sym__modid,
    STATE(527), 1,
      sym_constraint,
    ACTIONS(107), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(177), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(364), 2,
      sym_implicit_param,
      sym__type,
    ACTIONS(91), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(95), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(178), 3,
      sym_type_parens,
      sym__type_literal,
      sym_type_star,
    STATE(180), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(362), 3,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
    STATE(128), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(181), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [1687] = 27,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(109), 1,
      sym__varid,
    ACTIONS(117), 1,
      sym__integer_literal,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym__conid,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      anon_sym_AT,
    STATE(36), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_type_apply_repeat1,
    STATE(82), 1,
      sym_constructor,
    STATE(102), 1,
      sym_integer,
    STATE(390), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(105), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(113), 2,
      sym__atype,
      sym_type_invisible,
    ACTIONS(115), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(119), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(112), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(89), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(97), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(109), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    ACTIONS(113), 6,
      sym__consym,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    ACTIONS(111), 7,
      sym_comma,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
  [1798] = 26,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(135), 1,
      sym__varid,
    ACTIONS(145), 1,
      sym__integer_literal,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      sym__conid,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(160), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      anon_sym_AT,
    STATE(82), 1,
      sym_constructor,
    STATE(102), 1,
      sym_integer,
    STATE(390), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(163), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(37), 2,
      sym_comment,
      aux_sym_type_apply_repeat1,
    STATE(105), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(113), 2,
      sym__atype,
      sym_type_invisible,
    ACTIONS(142), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(148), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(112), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(89), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(97), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(109), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    ACTIONS(140), 6,
      sym__consym,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    ACTIONS(138), 7,
      sym_comma,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
  [1907] = 27,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(109), 1,
      sym__varid,
    ACTIONS(117), 1,
      sym__integer_literal,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      anon_sym_AT,
    ACTIONS(173), 1,
      sym__conid,
    ACTIONS(176), 1,
      anon_sym_SQUOTE,
    STATE(37), 1,
      aux_sym_type_apply_repeat1,
    STATE(38), 1,
      sym_comment,
    STATE(82), 1,
      sym_constructor,
    STATE(102), 1,
      sym_integer,
    STATE(390), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(105), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(113), 2,
      sym__atype,
      sym_type_invisible,
    ACTIONS(115), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(119), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(112), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(89), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(97), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(109), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    ACTIONS(171), 6,
      sym__consym,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    ACTIONS(169), 7,
      sym_comma,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
  [2018] = 27,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(179), 1,
      sym__varid,
    ACTIONS(183), 1,
      sym__integer_literal,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      sym__conid,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      anon_sym_AT,
    STATE(39), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_type_apply_repeat1,
    STATE(106), 1,
      sym_constructor,
    STATE(116), 1,
      sym_integer,
    STATE(386), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(197), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(132), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(137), 2,
      sym__atype,
      sym_type_invisible,
    ACTIONS(181), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(185), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(119), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    ACTIONS(113), 4,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(117), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(121), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(128), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(111), 8,
      sym_comma,
      sym__consym,
      anon_sym_,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2128] = 37,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(19), 1,
      sym__varid,
    ACTIONS(29), 1,
      sym__integer_literal,
    ACTIONS(43), 1,
      sym__conid,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_forall,
    ACTIONS(51), 1,
      anon_sym_5,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_comment,
    STATE(43), 1,
      sym_type_name,
    STATE(49), 1,
      sym__context,
    STATE(51), 1,
      sym__atype,
    STATE(82), 1,
      sym_constructor,
    STATE(148), 1,
      sym_integer,
    STATE(174), 1,
      sym__btype,
    STATE(300), 1,
      sym_type_apply,
    STATE(307), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__type_infix,
    STATE(345), 1,
      sym__forall_kw,
    STATE(358), 1,
      sym__type,
    STATE(378), 1,
      sym__forall,
    STATE(390), 1,
      aux_sym__qualifying_module,
    STATE(467), 1,
      sym__context_constraints,
    STATE(520), 1,
      sym__modid,
    STATE(527), 1,
      sym_constraint,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(154), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(27), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(31), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(170), 3,
      sym_type_parens,
      sym__type_literal,
      sym_type_star,
    STATE(362), 3,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
    STATE(97), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(157), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [2258] = 37,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(49), 1,
      anon_sym_forall,
    ACTIONS(51), 1,
      anon_sym_5,
    ACTIONS(99), 1,
      sym_implicit_parid,
    ACTIONS(201), 1,
      sym__varid,
    ACTIONS(205), 1,
      sym__integer_literal,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      sym__conid,
    ACTIONS(213), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    STATE(41), 1,
      sym_comment,
    STATE(59), 1,
      sym__context,
    STATE(63), 1,
      sym_type_name,
    STATE(65), 1,
      sym__atype,
    STATE(198), 1,
      sym_constructor,
    STATE(263), 1,
      sym_integer,
    STATE(277), 1,
      sym__btype,
    STATE(345), 1,
      sym__forall_kw,
    STATE(372), 1,
      sym_type_apply,
    STATE(379), 1,
      sym__forall,
    STATE(395), 1,
      sym_type_infix,
    STATE(406), 1,
      aux_sym__qualifying_module,
    STATE(418), 1,
      sym_constraint,
    STATE(467), 1,
      sym__context_constraints,
    STATE(520), 1,
      sym__modid,
    ACTIONS(217), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(262), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(522), 2,
      sym__quantified_constraint,
      sym__constraint_context,
    STATE(526), 2,
      sym_implicit_param,
      sym__constraint,
    ACTIONS(203), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(207), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(251), 3,
      sym_type_parens,
      sym__type_literal,
      sym_type_star,
    STATE(257), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(235), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(249), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [2388] = 27,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(179), 1,
      sym__varid,
    ACTIONS(183), 1,
      sym__integer_literal,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      sym__conid,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
    STATE(42), 1,
      sym_comment,
    STATE(46), 1,
      aux_sym_type_apply_repeat1,
    STATE(106), 1,
      sym_constructor,
    STATE(116), 1,
      sym_integer,
    STATE(386), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(197), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(132), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(137), 2,
      sym__atype,
      sym_type_invisible,
    ACTIONS(181), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(185), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(119), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    ACTIONS(171), 4,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(117), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(121), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(128), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(169), 8,
      sym_comma,
      sym__consym,
      anon_sym_,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2498] = 28,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(225), 1,
      sym__varid,
    ACTIONS(235), 1,
      sym__integer_literal,
    ACTIONS(241), 1,
      anon_sym_,
    ACTIONS(243), 1,
      anon_sym_EQ_GT,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      sym__conid,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    STATE(43), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_constraint_repeat1,
    STATE(116), 1,
      sym_integer,
    STATE(248), 1,
      sym_constructor,
    STATE(253), 1,
      sym__atype,
    STATE(404), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(132), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(232), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(238), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(119), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(117), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(121), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(128), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(228), 6,
      sym_comma,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
    ACTIONS(230), 6,
      sym__consym,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_AT,
      anon_sym_PERCENT,
  [2610] = 37,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(49), 1,
      anon_sym_forall,
    ACTIONS(51), 1,
      anon_sym_5,
    ACTIONS(89), 1,
      sym__varid,
    ACTIONS(93), 1,
      sym__integer_literal,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym__conid,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    STATE(44), 1,
      sym_comment,
    STATE(45), 1,
      sym__context,
    STATE(54), 1,
      sym_type_name,
    STATE(58), 1,
      sym__atype,
    STATE(106), 1,
      sym_constructor,
    STATE(189), 1,
      sym_integer,
    STATE(196), 1,
      sym__btype,
    STATE(304), 1,
      sym_type_apply,
    STATE(307), 1,
      sym_type_infix,
    STATE(312), 1,
      sym__type_infix,
    STATE(345), 1,
      sym__forall_kw,
    STATE(358), 1,
      sym__type,
    STATE(381), 1,
      sym__forall,
    STATE(386), 1,
      aux_sym__qualifying_module,
    STATE(467), 1,
      sym__context_constraints,
    STATE(520), 1,
      sym__modid,
    STATE(527), 1,
      sym_constraint,
    ACTIONS(107), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(177), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(91), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(95), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(178), 3,
      sym_type_parens,
      sym__type_literal,
      sym_type_star,
    STATE(180), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(362), 3,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
    STATE(128), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(181), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [2740] = 36,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(49), 1,
      anon_sym_forall,
    ACTIONS(51), 1,
      anon_sym_5,
    ACTIONS(89), 1,
      sym__varid,
    ACTIONS(93), 1,
      sym__integer_literal,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym__conid,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    STATE(54), 1,
      sym_type_name,
    STATE(58), 1,
      sym__atype,
    STATE(106), 1,
      sym_constructor,
    STATE(189), 1,
      sym_integer,
    STATE(196), 1,
      sym__btype,
    STATE(304), 1,
      sym_type_apply,
    STATE(307), 1,
      sym_type_infix,
    STATE(312), 1,
      sym__type_infix,
    STATE(345), 1,
      sym__forall_kw,
    STATE(349), 1,
      sym__type,
    STATE(381), 1,
      sym__forall,
    STATE(386), 1,
      aux_sym__qualifying_module,
    STATE(467), 1,
      sym__context_constraints,
    STATE(520), 1,
      sym__modid,
    STATE(527), 1,
      sym_constraint,
    ACTIONS(107), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(45), 2,
      sym_comment,
      sym__context,
    STATE(177), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(91), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(95), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(178), 3,
      sym_type_parens,
      sym__type_literal,
      sym_type_star,
    STATE(180), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(362), 3,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
    STATE(128), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(181), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [2868] = 26,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(260), 1,
      sym__varid,
    ACTIONS(266), 1,
      sym__integer_literal,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym__conid,
    ACTIONS(278), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      anon_sym_SQUOTE,
    ACTIONS(287), 1,
      anon_sym_AT,
    STATE(106), 1,
      sym_constructor,
    STATE(116), 1,
      sym_integer,
    STATE(386), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(284), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(46), 2,
      sym_comment,
      aux_sym_type_apply_repeat1,
    STATE(132), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(137), 2,
      sym__atype,
      sym_type_invisible,
    ACTIONS(263), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(269), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(119), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    ACTIONS(140), 4,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(117), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(121), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(128), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(138), 8,
      sym_comma,
      sym__consym,
      anon_sym_,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2976] = 37,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(49), 1,
      anon_sym_forall,
    ACTIONS(51), 1,
      anon_sym_5,
    ACTIONS(89), 1,
      sym__varid,
    ACTIONS(93), 1,
      sym__integer_literal,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      sym__conid,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    STATE(45), 1,
      sym__context,
    STATE(47), 1,
      sym_comment,
    STATE(54), 1,
      sym_type_name,
    STATE(58), 1,
      sym__atype,
    STATE(106), 1,
      sym_constructor,
    STATE(189), 1,
      sym_integer,
    STATE(196), 1,
      sym__btype,
    STATE(304), 1,
      sym_type_apply,
    STATE(307), 1,
      sym_type_infix,
    STATE(312), 1,
      sym__type_infix,
    STATE(345), 1,
      sym__forall_kw,
    STATE(355), 1,
      sym__type,
    STATE(381), 1,
      sym__forall,
    STATE(386), 1,
      aux_sym__qualifying_module,
    STATE(467), 1,
      sym__context_constraints,
    STATE(520), 1,
      sym__modid,
    STATE(527), 1,
      sym_constraint,
    ACTIONS(107), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(177), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(91), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(95), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(178), 3,
      sym_type_parens,
      sym__type_literal,
      sym_type_star,
    STATE(180), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(362), 3,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
    STATE(128), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(181), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [3106] = 37,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(19), 1,
      sym__varid,
    ACTIONS(29), 1,
      sym__integer_literal,
    ACTIONS(43), 1,
      sym__conid,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_forall,
    ACTIONS(51), 1,
      anon_sym_5,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_type_name,
    STATE(48), 1,
      sym_comment,
    STATE(49), 1,
      sym__context,
    STATE(51), 1,
      sym__atype,
    STATE(82), 1,
      sym_constructor,
    STATE(148), 1,
      sym_integer,
    STATE(174), 1,
      sym__btype,
    STATE(300), 1,
      sym_type_apply,
    STATE(307), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__type_infix,
    STATE(345), 1,
      sym__forall_kw,
    STATE(355), 1,
      sym__type,
    STATE(378), 1,
      sym__forall,
    STATE(390), 1,
      aux_sym__qualifying_module,
    STATE(467), 1,
      sym__context_constraints,
    STATE(520), 1,
      sym__modid,
    STATE(527), 1,
      sym_constraint,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(154), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(27), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(31), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(170), 3,
      sym_type_parens,
      sym__type_literal,
      sym_type_star,
    STATE(362), 3,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
    STATE(97), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(157), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [3236] = 36,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(19), 1,
      sym__varid,
    ACTIONS(29), 1,
      sym__integer_literal,
    ACTIONS(43), 1,
      sym__conid,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_forall,
    ACTIONS(51), 1,
      anon_sym_5,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_type_name,
    STATE(51), 1,
      sym__atype,
    STATE(82), 1,
      sym_constructor,
    STATE(148), 1,
      sym_integer,
    STATE(174), 1,
      sym__btype,
    STATE(300), 1,
      sym_type_apply,
    STATE(307), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__type_infix,
    STATE(345), 1,
      sym__forall_kw,
    STATE(349), 1,
      sym__type,
    STATE(378), 1,
      sym__forall,
    STATE(390), 1,
      aux_sym__qualifying_module,
    STATE(467), 1,
      sym__context_constraints,
    STATE(520), 1,
      sym__modid,
    STATE(527), 1,
      sym_constraint,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(49), 2,
      sym_comment,
      sym__context,
    STATE(154), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(27), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(31), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(170), 3,
      sym_type_parens,
      sym__type_literal,
      sym_type_star,
    STATE(362), 3,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
    STATE(97), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(157), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [3364] = 27,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(29), 1,
      sym__integer_literal,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      sym__varid,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(294), 1,
      sym__conid,
    ACTIONS(297), 1,
      anon_sym_SQUOTE,
    ACTIONS(300), 1,
      anon_sym_AT,
    STATE(50), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym_type_apply_repeat1,
    STATE(131), 1,
      sym_constructor,
    STATE(148), 1,
      sym_integer,
    STATE(400), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(154), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(169), 2,
      sym__atype,
      sym_type_invisible,
    ACTIONS(27), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(31), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(157), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(160), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(170), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    ACTIONS(171), 5,
      sym__consym,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    ACTIONS(169), 6,
      sym_comma,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
  [3473] = 27,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(29), 1,
      sym__integer_literal,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      sym__varid,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_AT,
    ACTIONS(302), 1,
      sym__conid,
    ACTIONS(305), 1,
      anon_sym_SQUOTE,
    STATE(50), 1,
      aux_sym_type_apply_repeat1,
    STATE(51), 1,
      sym_comment,
    STATE(131), 1,
      sym_constructor,
    STATE(148), 1,
      sym_integer,
    STATE(400), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(154), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(169), 2,
      sym__atype,
      sym_type_invisible,
    ACTIONS(27), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(31), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(157), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(160), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(170), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    ACTIONS(113), 5,
      sym__consym,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    ACTIONS(111), 6,
      sym_comma,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
  [3582] = 29,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(225), 1,
      sym__varid,
    ACTIONS(235), 1,
      sym__integer_literal,
    ACTIONS(241), 1,
      anon_sym_,
    ACTIONS(243), 1,
      anon_sym_EQ_GT,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      sym__conid,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    STATE(52), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_constraint_repeat1,
    STATE(116), 1,
      sym_integer,
    STATE(248), 1,
      sym_constructor,
    STATE(253), 1,
      sym__atype,
    STATE(404), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(308), 2,
      sym_comma,
      anon_sym_RPAREN,
    STATE(132), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(228), 3,
      anon_sym_2,
      anon_sym_4,
      anon_sym_BQUOTE,
    ACTIONS(232), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(238), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(119), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(117), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(121), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(128), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(230), 6,
      sym__consym,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_AT,
      anon_sym_PERCENT,
  [3695] = 26,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(311), 1,
      sym__varid,
    ACTIONS(317), 1,
      sym__integer_literal,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      sym__conid,
    ACTIONS(329), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_SQUOTE,
    ACTIONS(338), 1,
      anon_sym_AT,
    STATE(131), 1,
      sym_constructor,
    STATE(148), 1,
      sym_integer,
    STATE(400), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(335), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(53), 2,
      sym_comment,
      aux_sym_type_apply_repeat1,
    STATE(154), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(169), 2,
      sym__atype,
      sym_type_invisible,
    ACTIONS(314), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(320), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(157), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(160), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(170), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    ACTIONS(140), 5,
      sym__consym,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    ACTIONS(138), 6,
      sym_comma,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
  [3802] = 28,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(225), 1,
      sym__varid,
    ACTIONS(235), 1,
      sym__integer_literal,
    ACTIONS(241), 1,
      anon_sym_,
    ACTIONS(243), 1,
      anon_sym_EQ_GT,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      sym__conid,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    STATE(54), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_constraint_repeat1,
    STATE(116), 1,
      sym_integer,
    STATE(248), 1,
      sym_constructor,
    STATE(253), 1,
      sym__atype,
    STATE(404), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(132), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(232), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(238), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(119), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    ACTIONS(230), 4,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_PERCENT,
    STATE(117), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(121), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(128), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(228), 7,
      sym_comma,
      sym__consym,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3913] = 26,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(341), 1,
      sym__varid,
    ACTIONS(347), 1,
      sym__integer_literal,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(356), 1,
      sym__conid,
    ACTIONS(359), 1,
      anon_sym_LBRACK,
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
    ACTIONS(368), 1,
      anon_sym_AT,
    STATE(163), 1,
      sym_constructor,
    STATE(189), 1,
      sym_integer,
    STATE(398), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(365), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(55), 2,
      sym_comment,
      aux_sym_type_apply_repeat1,
    STATE(177), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(191), 2,
      sym__atype,
      sym_type_invisible,
    ACTIONS(140), 3,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    ACTIONS(344), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(350), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(180), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(178), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(181), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(190), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(138), 7,
      sym_comma,
      sym__consym,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [4019] = 36,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(49), 1,
      anon_sym_forall,
    ACTIONS(51), 1,
      anon_sym_5,
    ACTIONS(201), 1,
      sym__varid,
    ACTIONS(205), 1,
      sym__integer_literal,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      sym__conid,
    ACTIONS(213), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    STATE(56), 1,
      sym_comment,
    STATE(59), 1,
      sym__context,
    STATE(63), 1,
      sym_type_name,
    STATE(65), 1,
      sym__atype,
    STATE(198), 1,
      sym_constructor,
    STATE(263), 1,
      sym_integer,
    STATE(277), 1,
      sym__btype,
    STATE(345), 1,
      sym__forall_kw,
    STATE(372), 1,
      sym_type_apply,
    STATE(379), 1,
      sym__forall,
    STATE(395), 1,
      sym_type_infix,
    STATE(406), 1,
      aux_sym__qualifying_module,
    STATE(418), 1,
      sym_constraint,
    STATE(467), 1,
      sym__context_constraints,
    STATE(520), 1,
      sym__modid,
    STATE(525), 1,
      sym__constraint,
    ACTIONS(217), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(262), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(522), 2,
      sym__quantified_constraint,
      sym__constraint_context,
    ACTIONS(203), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(207), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(251), 3,
      sym_type_parens,
      sym__type_literal,
      sym_type_star,
    STATE(257), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(235), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(249), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [4145] = 27,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(93), 1,
      sym__integer_literal,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(371), 1,
      sym__varid,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      sym__conid,
    ACTIONS(378), 1,
      anon_sym_SQUOTE,
    ACTIONS(381), 1,
      anon_sym_AT,
    STATE(55), 1,
      aux_sym_type_apply_repeat1,
    STATE(57), 1,
      sym_comment,
    STATE(163), 1,
      sym_constructor,
    STATE(189), 1,
      sym_integer,
    STATE(398), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(107), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(177), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(191), 2,
      sym__atype,
      sym_type_invisible,
    ACTIONS(91), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(95), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(171), 3,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(180), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(178), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(181), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(190), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(169), 7,
      sym_comma,
      sym__consym,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [4253] = 27,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(93), 1,
      sym__integer_literal,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(371), 1,
      sym__varid,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(381), 1,
      anon_sym_AT,
    ACTIONS(383), 1,
      sym__conid,
    ACTIONS(386), 1,
      anon_sym_SQUOTE,
    STATE(57), 1,
      aux_sym_type_apply_repeat1,
    STATE(58), 1,
      sym_comment,
    STATE(163), 1,
      sym_constructor,
    STATE(189), 1,
      sym_integer,
    STATE(398), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(107), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(177), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(191), 2,
      sym__atype,
      sym_type_invisible,
    ACTIONS(91), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(95), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(113), 3,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(180), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(178), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(181), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(190), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(111), 7,
      sym_comma,
      sym__consym,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [4361] = 35,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(49), 1,
      anon_sym_forall,
    ACTIONS(51), 1,
      anon_sym_5,
    ACTIONS(201), 1,
      sym__varid,
    ACTIONS(205), 1,
      sym__integer_literal,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      sym__conid,
    ACTIONS(213), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      sym_type_name,
    STATE(65), 1,
      sym__atype,
    STATE(198), 1,
      sym_constructor,
    STATE(263), 1,
      sym_integer,
    STATE(277), 1,
      sym__btype,
    STATE(345), 1,
      sym__forall_kw,
    STATE(372), 1,
      sym_type_apply,
    STATE(379), 1,
      sym__forall,
    STATE(395), 1,
      sym_type_infix,
    STATE(406), 1,
      aux_sym__qualifying_module,
    STATE(418), 1,
      sym_constraint,
    STATE(467), 1,
      sym__context_constraints,
    STATE(518), 1,
      sym__constraint,
    STATE(520), 1,
      sym__modid,
    ACTIONS(217), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(59), 2,
      sym_comment,
      sym__context,
    STATE(262), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    STATE(522), 2,
      sym__quantified_constraint,
      sym__constraint_context,
    ACTIONS(203), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(207), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(251), 3,
      sym_type_parens,
      sym__type_literal,
      sym_type_star,
    STATE(257), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(235), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(249), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [4485] = 27,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(389), 1,
      sym__varid,
    ACTIONS(393), 1,
      sym__integer_literal,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym__conid,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(404), 1,
      anon_sym_SQUOTE,
    ACTIONS(409), 1,
      anon_sym_AT,
    STATE(60), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_type_apply_repeat1,
    STATE(198), 1,
      sym_constructor,
    STATE(219), 1,
      sym_integer,
    STATE(406), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(171), 2,
      sym__tyconsym,
      anon_sym_EQ_GT,
    ACTIONS(407), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(220), 2,
      sym__atype,
      sym_type_invisible,
    STATE(234), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(391), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(395), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(232), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(227), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(233), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(235), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(169), 5,
      sym_comma,
      sym__consym,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
  [4590] = 26,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(411), 1,
      sym__varid,
    ACTIONS(417), 1,
      sym__integer_literal,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(426), 1,
      sym__conid,
    ACTIONS(429), 1,
      anon_sym_LBRACK,
    ACTIONS(432), 1,
      anon_sym_SQUOTE,
    ACTIONS(438), 1,
      anon_sym_AT,
    STATE(198), 1,
      sym_constructor,
    STATE(219), 1,
      sym_integer,
    STATE(406), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(140), 2,
      sym__tyconsym,
      anon_sym_EQ_GT,
    ACTIONS(435), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(61), 2,
      sym_comment,
      aux_sym_type_apply_repeat1,
    STATE(220), 2,
      sym__atype,
      sym_type_invisible,
    STATE(234), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(414), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(420), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(232), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(227), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(233), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(235), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(138), 5,
      sym_comma,
      sym__consym,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
  [4693] = 27,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(389), 1,
      sym__varid,
    ACTIONS(393), 1,
      sym__integer_literal,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(409), 1,
      anon_sym_AT,
    ACTIONS(441), 1,
      sym__conid,
    ACTIONS(444), 1,
      anon_sym_SQUOTE,
    STATE(60), 1,
      aux_sym_type_apply_repeat1,
    STATE(62), 1,
      sym_comment,
    STATE(198), 1,
      sym_constructor,
    STATE(219), 1,
      sym_integer,
    STATE(406), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(113), 2,
      sym__tyconsym,
      anon_sym_EQ_GT,
    ACTIONS(407), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(220), 2,
      sym__atype,
      sym_type_invisible,
    STATE(234), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(391), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(395), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(232), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(227), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(233), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(235), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(111), 5,
      sym_comma,
      sym__consym,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
  [4798] = 28,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(225), 1,
      sym__varid,
    ACTIONS(235), 1,
      sym__integer_literal,
    ACTIONS(243), 1,
      anon_sym_EQ_GT,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      sym__conid,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_constraint_repeat1,
    STATE(116), 1,
      sym_integer,
    STATE(248), 1,
      sym_constructor,
    STATE(253), 1,
      sym__atype,
    STATE(404), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(228), 2,
      sym__consym,
      anon_sym_BQUOTE,
    ACTIONS(230), 2,
      sym__tyconsym,
      anon_sym_AT,
    ACTIONS(257), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(132), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(232), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(238), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(241), 3,
      sym_comma,
      anon_sym_,
      anon_sym_RPAREN,
    STATE(119), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(117), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(121), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(128), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [4904] = 26,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(140), 1,
      sym__tyconsym,
    ACTIONS(447), 1,
      sym__varid,
    ACTIONS(453), 1,
      sym__integer_literal,
    ACTIONS(459), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 1,
      sym__conid,
    ACTIONS(465), 1,
      anon_sym_LBRACK,
    ACTIONS(468), 1,
      anon_sym_SQUOTE,
    ACTIONS(474), 1,
      anon_sym_AT,
    STATE(246), 1,
      sym_constructor,
    STATE(263), 1,
      sym_integer,
    STATE(411), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(138), 2,
      sym__consym,
      anon_sym_BQUOTE,
    ACTIONS(471), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(64), 2,
      sym_comment,
      aux_sym_type_apply_repeat1,
    STATE(256), 2,
      sym__atype,
      sym_type_invisible,
    STATE(262), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(450), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(456), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(257), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(249), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(251), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(272), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [5003] = 27,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(113), 1,
      sym__tyconsym,
    ACTIONS(205), 1,
      sym__integer_literal,
    ACTIONS(213), 1,
      anon_sym_LBRACK,
    ACTIONS(477), 1,
      sym__varid,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym__conid,
    ACTIONS(484), 1,
      anon_sym_SQUOTE,
    ACTIONS(487), 1,
      anon_sym_AT,
    STATE(65), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_type_apply_repeat1,
    STATE(246), 1,
      sym_constructor,
    STATE(263), 1,
      sym_integer,
    STATE(411), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(111), 2,
      sym__consym,
      anon_sym_BQUOTE,
    ACTIONS(217), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(256), 2,
      sym__atype,
      sym_type_invisible,
    STATE(262), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(203), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(207), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(257), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(249), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(251), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(272), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [5104] = 27,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(171), 1,
      sym__tyconsym,
    ACTIONS(205), 1,
      sym__integer_literal,
    ACTIONS(213), 1,
      anon_sym_LBRACK,
    ACTIONS(477), 1,
      sym__varid,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(487), 1,
      anon_sym_AT,
    ACTIONS(489), 1,
      sym__conid,
    ACTIONS(492), 1,
      anon_sym_SQUOTE,
    STATE(64), 1,
      aux_sym_type_apply_repeat1,
    STATE(66), 1,
      sym_comment,
    STATE(246), 1,
      sym_constructor,
    STATE(263), 1,
      sym_integer,
    STATE(411), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(169), 2,
      sym__consym,
      anon_sym_BQUOTE,
    ACTIONS(217), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(256), 2,
      sym__atype,
      sym_type_invisible,
    STATE(262), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(203), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(207), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(257), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(249), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(251), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(272), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [5205] = 24,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(495), 1,
      sym__varid,
    ACTIONS(503), 1,
      sym__integer_literal,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(512), 1,
      sym__conid,
    ACTIONS(515), 1,
      anon_sym_LBRACK,
    ACTIONS(518), 1,
      anon_sym_SQUOTE,
    STATE(116), 1,
      sym_integer,
    STATE(248), 1,
      sym_constructor,
    STATE(253), 1,
      sym__atype,
    STATE(404), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(521), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(67), 2,
      sym_comment,
      aux_sym_constraint_repeat1,
    STATE(132), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(500), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(506), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(119), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    ACTIONS(498), 4,
      sym_comma,
      anon_sym_,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
    STATE(117), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(121), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(128), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [5299] = 25,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(179), 1,
      sym__varid,
    ACTIONS(183), 1,
      sym__integer_literal,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      sym__conid,
    ACTIONS(528), 1,
      anon_sym_SQUOTE,
    STATE(67), 1,
      aux_sym_constraint_repeat1,
    STATE(68), 1,
      sym_comment,
    STATE(116), 1,
      sym_integer,
    STATE(248), 1,
      sym_constructor,
    STATE(253), 1,
      sym__atype,
    STATE(404), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(197), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(132), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(181), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(185), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(119), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    ACTIONS(524), 4,
      sym_comma,
      anon_sym_,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
    STATE(117), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(121), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(128), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [5395] = 27,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(211), 1,
      sym__conid,
    ACTIONS(389), 1,
      sym__varid,
    ACTIONS(393), 1,
      sym__integer_literal,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(530), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      sym__atype,
    STATE(69), 1,
      sym_comment,
    STATE(198), 1,
      sym_constructor,
    STATE(219), 1,
      sym_integer,
    STATE(239), 1,
      sym__btype,
    STATE(309), 1,
      sym__type_infix,
    STATE(311), 1,
      sym_type_infix,
    STATE(317), 1,
      sym_type_apply,
    STATE(406), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(407), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(234), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(391), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(395), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(232), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(227), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(233), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(235), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [5494] = 27,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(101), 1,
      sym__conid,
    ACTIONS(179), 1,
      sym__varid,
    ACTIONS(183), 1,
      sym__integer_literal,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(532), 1,
      anon_sym_SQUOTE,
    STATE(39), 1,
      sym__atype,
    STATE(70), 1,
      sym_comment,
    STATE(106), 1,
      sym_constructor,
    STATE(116), 1,
      sym_integer,
    STATE(168), 1,
      sym__btype,
    STATE(298), 1,
      sym_type_apply,
    STATE(309), 1,
      sym__type_infix,
    STATE(311), 1,
      sym_type_infix,
    STATE(386), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(197), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(132), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(181), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(185), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(119), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(117), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(121), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(128), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [5593] = 27,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(43), 1,
      sym__conid,
    ACTIONS(109), 1,
      sym__varid,
    ACTIONS(117), 1,
      sym__integer_literal,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(534), 1,
      anon_sym_SQUOTE,
    STATE(36), 1,
      sym__atype,
    STATE(71), 1,
      sym_comment,
    STATE(82), 1,
      sym_constructor,
    STATE(102), 1,
      sym_integer,
    STATE(122), 1,
      sym__btype,
    STATE(287), 1,
      sym_type_apply,
    STATE(309), 1,
      sym__type_infix,
    STATE(311), 1,
      sym_type_infix,
    STATE(390), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(105), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(115), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(119), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(112), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(89), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(97), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(109), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
  [5692] = 24,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__varid,
    ACTIONS(15), 1,
      sym__conid,
    ACTIONS(538), 1,
      sym__integer_literal,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(546), 1,
      anon_sym_SQUOTE,
    STATE(72), 1,
      sym_comment,
    STATE(337), 1,
      sym__persistent_type,
    STATE(403), 1,
      aux_sym__qualifying_module,
    STATE(408), 1,
      sym_constructor,
    STATE(459), 1,
      sym__atype,
    STATE(484), 1,
      sym_integer,
    STATE(520), 1,
      sym__modid,
    ACTIONS(548), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(508), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(536), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(540), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(495), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(426), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(494), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(507), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
  [5782] = 24,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__varid,
    ACTIONS(15), 1,
      sym__conid,
    ACTIONS(538), 1,
      sym__integer_literal,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(546), 1,
      anon_sym_SQUOTE,
    STATE(73), 1,
      sym_comment,
    STATE(320), 1,
      sym__persistent_type,
    STATE(403), 1,
      aux_sym__qualifying_module,
    STATE(408), 1,
      sym_constructor,
    STATE(459), 1,
      sym__atype,
    STATE(484), 1,
      sym_integer,
    STATE(520), 1,
      sym__modid,
    ACTIONS(548), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(508), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(536), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(540), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(495), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(426), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(494), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(507), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
  [5872] = 24,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__varid,
    ACTIONS(15), 1,
      sym__conid,
    ACTIONS(538), 1,
      sym__integer_literal,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(546), 1,
      anon_sym_SQUOTE,
    STATE(74), 1,
      sym_comment,
    STATE(333), 1,
      sym__persistent_type,
    STATE(403), 1,
      aux_sym__qualifying_module,
    STATE(408), 1,
      sym_constructor,
    STATE(459), 1,
      sym__atype,
    STATE(484), 1,
      sym_integer,
    STATE(520), 1,
      sym__modid,
    ACTIONS(548), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(508), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(536), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(540), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(495), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(426), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(494), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(507), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
  [5962] = 23,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(29), 1,
      sym__integer_literal,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      sym__varid,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      sym__conid,
    ACTIONS(552), 1,
      anon_sym_SQUOTE,
    STATE(75), 1,
      sym_comment,
    STATE(131), 1,
      sym_constructor,
    STATE(148), 1,
      sym_integer,
    STATE(159), 1,
      sym__atype,
    STATE(400), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(53), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(154), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(27), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(31), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(157), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(160), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(170), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
  [6049] = 23,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(93), 1,
      sym__integer_literal,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(371), 1,
      sym__varid,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(554), 1,
      sym__conid,
    ACTIONS(556), 1,
      anon_sym_SQUOTE,
    STATE(76), 1,
      sym_comment,
    STATE(163), 1,
      sym_constructor,
    STATE(176), 1,
      sym__atype,
    STATE(189), 1,
      sym_integer,
    STATE(398), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(107), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(177), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(91), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(95), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(180), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(178), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(181), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(190), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [6136] = 23,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(101), 1,
      sym__conid,
    ACTIONS(179), 1,
      sym__varid,
    ACTIONS(183), 1,
      sym__integer_literal,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(532), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      sym_comment,
    STATE(106), 1,
      sym_constructor,
    STATE(116), 1,
      sym_integer,
    STATE(134), 1,
      sym__atype,
    STATE(386), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(197), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(132), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(181), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(185), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(119), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(117), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(121), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(128), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [6223] = 23,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(43), 1,
      sym__conid,
    ACTIONS(109), 1,
      sym__varid,
    ACTIONS(117), 1,
      sym__integer_literal,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(534), 1,
      anon_sym_SQUOTE,
    STATE(78), 1,
      sym_comment,
    STATE(82), 1,
      sym_constructor,
    STATE(87), 1,
      sym__atype,
    STATE(102), 1,
      sym_integer,
    STATE(390), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(131), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(105), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(115), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(119), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(112), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(89), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(97), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(109), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
  [6310] = 23,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(93), 1,
      sym__integer_literal,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      sym__conid,
    ACTIONS(558), 1,
      sym__varid,
    ACTIONS(560), 1,
      anon_sym_LPAREN,
    ACTIONS(562), 1,
      anon_sym_SQUOTE,
    STATE(79), 1,
      sym_comment,
    STATE(189), 1,
      sym_integer,
    STATE(377), 1,
      sym_constructor,
    STATE(410), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    STATE(529), 1,
      sym__atype,
    ACTIONS(107), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(177), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(91), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(95), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(180), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(128), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(178), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(181), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [6397] = 23,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(211), 1,
      sym__conid,
    ACTIONS(389), 1,
      sym__varid,
    ACTIONS(393), 1,
      sym__integer_literal,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(530), 1,
      anon_sym_SQUOTE,
    STATE(80), 1,
      sym_comment,
    STATE(198), 1,
      sym_constructor,
    STATE(215), 1,
      sym__atype,
    STATE(219), 1,
      sym_integer,
    STATE(406), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(407), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(234), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(391), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(395), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(232), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(227), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(233), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(235), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [6484] = 23,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(205), 1,
      sym__integer_literal,
    ACTIONS(213), 1,
      anon_sym_LBRACK,
    ACTIONS(477), 1,
      sym__varid,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(564), 1,
      sym__conid,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
    STATE(81), 1,
      sym_comment,
    STATE(246), 1,
      sym_constructor,
    STATE(260), 1,
      sym__atype,
    STATE(263), 1,
      sym_integer,
    STATE(411), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(217), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(262), 2,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
    ACTIONS(203), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(207), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(257), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(249), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(251), 4,
      sym_type_parens,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
    STATE(272), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [6571] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(570), 1,
      anon_sym_DOT,
    STATE(82), 1,
      sym_comment,
    ACTIONS(572), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(568), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [6619] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(570), 1,
      anon_sym_DOT,
    STATE(83), 1,
      sym_comment,
    ACTIONS(576), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(574), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [6667] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(582), 1,
      anon_sym_4,
    ACTIONS(585), 1,
      anon_sym_COLON_COLON,
    STATE(35), 1,
      sym__colon2,
    STATE(84), 1,
      sym_comment,
    STATE(510), 1,
      sym__type_annotation,
    ACTIONS(580), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(578), 17,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [6721] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(570), 1,
      anon_sym_DOT,
    STATE(85), 1,
      sym_comment,
    ACTIONS(590), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(588), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [6769] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(86), 1,
      sym_comment,
    ACTIONS(594), 10,
      anon_sym_DOT,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(592), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [6815] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(87), 1,
      sym_comment,
    ACTIONS(598), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(596), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [6860] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(88), 1,
      sym_comment,
    ACTIONS(602), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(600), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [6905] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(89), 1,
      sym_comment,
    ACTIONS(606), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(604), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [6950] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(90), 1,
      sym_comment,
    ACTIONS(610), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(608), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [6995] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(616), 1,
      anon_sym_,
    ACTIONS(618), 1,
      anon_sym_EQ_GT,
    STATE(91), 1,
      sym_comment,
    ACTIONS(614), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(612), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [7044] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(92), 1,
      sym_comment,
    ACTIONS(622), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(620), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [7089] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(93), 1,
      sym_comment,
    ACTIONS(626), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(624), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [7134] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(94), 1,
      sym_comment,
    ACTIONS(630), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(628), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [7179] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(95), 1,
      sym_comment,
    ACTIONS(614), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(612), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [7224] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(96), 1,
      sym_comment,
    ACTIONS(634), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(632), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [7269] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(97), 1,
      sym_comment,
    ACTIONS(580), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(578), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [7314] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(98), 1,
      sym_comment,
    ACTIONS(638), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(636), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [7359] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(99), 1,
      sym_comment,
    ACTIONS(642), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(640), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [7404] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(100), 1,
      sym_comment,
    ACTIONS(646), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(644), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [7449] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(101), 1,
      sym_comment,
    ACTIONS(650), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(648), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [7494] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(102), 1,
      sym_comment,
    ACTIONS(654), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(652), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [7539] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(103), 1,
      sym_comment,
    ACTIONS(594), 8,
      anon_sym_DOT,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(592), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [7584] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(104), 1,
      sym_comment,
    ACTIONS(658), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(656), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [7629] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(105), 1,
      sym_comment,
    ACTIONS(662), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(660), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [7674] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(570), 1,
      anon_sym_DOT,
    STATE(106), 1,
      sym_comment,
    ACTIONS(572), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(568), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [7721] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(570), 1,
      anon_sym_DOT,
    STATE(107), 1,
      sym_comment,
    ACTIONS(576), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(574), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [7768] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(108), 1,
      sym_comment,
    ACTIONS(666), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(664), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [7813] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(109), 1,
      sym_comment,
    ACTIONS(230), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(228), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [7858] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(570), 1,
      anon_sym_DOT,
    STATE(110), 1,
      sym_comment,
    ACTIONS(590), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(588), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [7905] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(111), 1,
      sym_comment,
    ACTIONS(670), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(668), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [7950] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(112), 1,
      sym_comment,
    ACTIONS(674), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(672), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [7995] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(113), 1,
      sym_comment,
    ACTIONS(678), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(676), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [8040] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(114), 1,
      sym_comment,
    ACTIONS(682), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(680), 19,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [8085] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(616), 1,
      anon_sym_,
    ACTIONS(618), 1,
      anon_sym_EQ_GT,
    STATE(115), 1,
      sym_comment,
    ACTIONS(614), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(612), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [8133] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(116), 1,
      sym_comment,
    ACTIONS(654), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(652), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [8177] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(117), 1,
      sym_comment,
    ACTIONS(230), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(228), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [8221] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(118), 1,
      sym_comment,
    ACTIONS(638), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(636), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [8265] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(119), 1,
      sym_comment,
    ACTIONS(674), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(672), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [8309] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(120), 1,
      sym_comment,
    ACTIONS(594), 9,
      anon_sym_DOT,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(592), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [8353] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(121), 1,
      sym_comment,
    ACTIONS(606), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(604), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [8397] = 19,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      sym__tyconsym,
    ACTIONS(526), 1,
      sym__conid,
    ACTIONS(686), 1,
      sym__consym,
    ACTIONS(690), 1,
      anon_sym_BQUOTE,
    ACTIONS(692), 1,
      anon_sym_SQUOTE,
    STATE(71), 1,
      sym__qtyconop,
    STATE(122), 1,
      sym_comment,
    STATE(285), 1,
      sym_constructor_operator,
    STATE(334), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    STATE(541), 1,
      sym_constructor,
    STATE(286), 2,
      sym_qualified_constructor_operator,
      sym_qualified_type_operator,
    STATE(291), 2,
      sym__qtyconops,
      sym__promoted_tyconop,
    STATE(292), 3,
      sym__type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
    ACTIONS(688), 4,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    ACTIONS(684), 6,
      sym_comma,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [8467] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(123), 1,
      sym_comment,
    ACTIONS(634), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(632), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [8511] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(124), 1,
      sym_comment,
    ACTIONS(626), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(624), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [8555] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(125), 1,
      sym_comment,
    ACTIONS(630), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(628), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [8599] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(126), 1,
      sym_comment,
    ACTIONS(658), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(656), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [8643] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(127), 1,
      sym_comment,
    ACTIONS(610), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(608), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [8687] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(128), 1,
      sym_comment,
    ACTIONS(580), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(578), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [8731] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(129), 1,
      sym_comment,
    ACTIONS(682), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(680), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [8775] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(130), 1,
      sym_comment,
    ACTIONS(670), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(668), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [8819] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(570), 1,
      anon_sym_DOT,
    STATE(131), 1,
      sym_comment,
    ACTIONS(572), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(568), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [8865] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(132), 1,
      sym_comment,
    ACTIONS(662), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(660), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [8909] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(133), 1,
      sym_comment,
    ACTIONS(642), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(640), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [8953] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(134), 1,
      sym_comment,
    ACTIONS(598), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(596), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [8997] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(570), 1,
      anon_sym_DOT,
    STATE(135), 1,
      sym_comment,
    ACTIONS(576), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(574), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [9043] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(136), 1,
      sym_comment,
    ACTIONS(622), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(620), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [9087] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(137), 1,
      sym_comment,
    ACTIONS(678), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(676), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [9131] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(138), 1,
      sym_comment,
    ACTIONS(614), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(612), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [9175] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(139), 1,
      sym_comment,
    ACTIONS(602), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(600), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [9219] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(570), 1,
      anon_sym_DOT,
    STATE(140), 1,
      sym_comment,
    ACTIONS(590), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(588), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [9265] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(141), 1,
      sym_comment,
    ACTIONS(650), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(648), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [9309] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(142), 1,
      sym_comment,
    ACTIONS(666), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(664), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [9353] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(143), 1,
      sym_comment,
    ACTIONS(646), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(644), 20,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [9397] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(144), 1,
      sym_comment,
    ACTIONS(646), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(644), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [9440] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(145), 1,
      sym_comment,
    ACTIONS(626), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(624), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [9483] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(146), 1,
      sym_comment,
    ACTIONS(614), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(612), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [9526] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(147), 1,
      sym_comment,
    ACTIONS(670), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(668), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [9569] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(148), 1,
      sym_comment,
    ACTIONS(654), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(652), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [9612] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(149), 1,
      sym_comment,
    ACTIONS(682), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(680), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [9655] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(150), 1,
      sym_comment,
    ACTIONS(634), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(632), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [9698] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(151), 1,
      sym_comment,
    ACTIONS(642), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(640), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [9741] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(152), 1,
      sym_comment,
    ACTIONS(630), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(628), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [9784] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(570), 1,
      anon_sym_DOT,
    STATE(153), 1,
      sym_comment,
    ACTIONS(590), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(588), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [9829] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(154), 1,
      sym_comment,
    ACTIONS(662), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(660), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [9872] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(155), 1,
      sym_comment,
    ACTIONS(610), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(608), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [9915] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(156), 1,
      sym_comment,
    ACTIONS(658), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(656), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [9958] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(157), 1,
      sym_comment,
    ACTIONS(606), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(604), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [10001] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(570), 1,
      anon_sym_DOT,
    STATE(158), 1,
      sym_comment,
    ACTIONS(576), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(574), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [10046] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(159), 1,
      sym_comment,
    ACTIONS(598), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(596), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [10089] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(160), 1,
      sym_comment,
    ACTIONS(580), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(578), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [10132] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(161), 1,
      sym_comment,
    ACTIONS(674), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(672), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [10175] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(162), 1,
      sym_comment,
    ACTIONS(638), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(636), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [10218] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(570), 1,
      anon_sym_DOT,
    STATE(163), 1,
      sym_comment,
    ACTIONS(572), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(568), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [10263] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(164), 1,
      sym_comment,
    ACTIONS(594), 7,
      anon_sym_DOT,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(592), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [10306] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(165), 1,
      sym_comment,
    ACTIONS(602), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(600), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [10349] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(166), 1,
      sym_comment,
    ACTIONS(650), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(648), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [10392] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(167), 1,
      sym_comment,
    ACTIONS(622), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(620), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [10435] = 19,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(23), 1,
      sym__consym,
    ACTIONS(25), 1,
      sym__tyconsym,
    ACTIONS(526), 1,
      sym__conid,
    ACTIONS(690), 1,
      anon_sym_BQUOTE,
    ACTIONS(692), 1,
      anon_sym_SQUOTE,
    STATE(70), 1,
      sym__qtyconop,
    STATE(168), 1,
      sym_comment,
    STATE(285), 1,
      sym_constructor_operator,
    STATE(334), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    STATE(541), 1,
      sym_constructor,
    STATE(286), 2,
      sym_qualified_constructor_operator,
      sym_qualified_type_operator,
    STATE(291), 2,
      sym__qtyconops,
      sym__promoted_tyconop,
    ACTIONS(688), 3,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(292), 3,
      sym__type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
    ACTIONS(684), 6,
      sym_comma,
      anon_sym_,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [10504] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(169), 1,
      sym_comment,
    ACTIONS(678), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(676), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [10547] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(170), 1,
      sym_comment,
    ACTIONS(230), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(228), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [10590] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(171), 1,
      sym_comment,
    ACTIONS(666), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(664), 18,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      anon_sym_4,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [10633] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(172), 1,
      sym_comment,
    ACTIONS(658), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(656), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [10675] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(173), 1,
      sym_comment,
    ACTIONS(630), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(628), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [10717] = 19,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(25), 1,
      sym__tyconsym,
    ACTIONS(526), 1,
      sym__conid,
    ACTIONS(686), 1,
      sym__consym,
    ACTIONS(690), 1,
      anon_sym_BQUOTE,
    ACTIONS(692), 1,
      anon_sym_SQUOTE,
    STATE(71), 1,
      sym__qtyconop,
    STATE(174), 1,
      sym_comment,
    STATE(285), 1,
      sym_constructor_operator,
    STATE(334), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    STATE(541), 1,
      sym_constructor,
    STATE(286), 2,
      sym_qualified_constructor_operator,
      sym_qualified_type_operator,
    STATE(291), 2,
      sym__qtyconops,
      sym__promoted_tyconop,
    ACTIONS(688), 3,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    STATE(292), 3,
      sym__type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
    ACTIONS(684), 5,
      sym_comma,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [10785] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(175), 1,
      sym_comment,
    ACTIONS(626), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(624), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [10827] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(176), 1,
      sym_comment,
    ACTIONS(598), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(596), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [10869] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(177), 1,
      sym_comment,
    ACTIONS(662), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(660), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [10911] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(178), 1,
      sym_comment,
    ACTIONS(230), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(228), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [10953] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(179), 1,
      sym_comment,
    ACTIONS(634), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(632), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [10995] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(180), 1,
      sym_comment,
    ACTIONS(674), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(672), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [11037] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(181), 1,
      sym_comment,
    ACTIONS(606), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(604), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [11079] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(182), 1,
      sym_comment,
    ACTIONS(666), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(664), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [11121] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(183), 1,
      sym_comment,
    ACTIONS(622), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(620), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [11163] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(184), 1,
      sym_comment,
    ACTIONS(602), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(600), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [11205] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(185), 1,
      sym_comment,
    ACTIONS(646), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(644), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [11247] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(186), 1,
      sym_comment,
    ACTIONS(638), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(636), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [11289] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(187), 1,
      sym_comment,
    ACTIONS(610), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(608), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [11331] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(188), 1,
      sym_comment,
    ACTIONS(682), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(680), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [11373] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(189), 1,
      sym_comment,
    ACTIONS(654), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(652), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [11415] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(190), 1,
      sym_comment,
    ACTIONS(580), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(578), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [11457] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(191), 1,
      sym_comment,
    ACTIONS(678), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(676), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [11499] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(192), 1,
      sym_comment,
    ACTIONS(650), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(648), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [11541] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(193), 1,
      sym_comment,
    ACTIONS(642), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(640), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [11583] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(194), 1,
      sym_comment,
    ACTIONS(614), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(612), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [11625] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(195), 1,
      sym_comment,
    ACTIONS(670), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(668), 19,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_2,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [11667] = 19,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(23), 1,
      sym__consym,
    ACTIONS(25), 1,
      sym__tyconsym,
    ACTIONS(526), 1,
      sym__conid,
    ACTIONS(690), 1,
      anon_sym_BQUOTE,
    ACTIONS(692), 1,
      anon_sym_SQUOTE,
    STATE(70), 1,
      sym__qtyconop,
    STATE(196), 1,
      sym_comment,
    STATE(285), 1,
      sym_constructor_operator,
    STATE(334), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    STATE(541), 1,
      sym_constructor,
    ACTIONS(688), 2,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(286), 2,
      sym_qualified_constructor_operator,
      sym_qualified_type_operator,
    STATE(291), 2,
      sym__qtyconops,
      sym__promoted_tyconop,
    STATE(292), 3,
      sym__type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
    ACTIONS(684), 5,
      sym_comma,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [11734] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(570), 1,
      anon_sym_DOT,
    STATE(197), 1,
      sym_comment,
    ACTIONS(576), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(574), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [11776] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(570), 1,
      anon_sym_DOT,
    STATE(198), 1,
      sym_comment,
    ACTIONS(572), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(568), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [11818] = 18,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(15), 1,
      sym__conid,
    ACTIONS(538), 1,
      sym__integer_literal,
    ACTIONS(544), 1,
      anon_sym_LBRACK,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
    STATE(199), 1,
      sym_comment,
    STATE(394), 1,
      sym_constructor,
    STATE(403), 1,
      aux_sym__qualifying_module,
    STATE(478), 1,
      sym_qualified_type,
    STATE(479), 1,
      sym__type_promotable_literal,
    STATE(484), 1,
      sym_integer,
    STATE(520), 1,
      sym__modid,
    ACTIONS(536), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(540), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(495), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(494), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [11882] = 18,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(101), 1,
      sym__conid,
    ACTIONS(183), 1,
      sym__integer_literal,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(696), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_constructor,
    STATE(116), 1,
      sym_integer,
    STATE(118), 1,
      sym__type_promotable_literal,
    STATE(127), 1,
      sym_qualified_type,
    STATE(200), 1,
      sym_comment,
    STATE(386), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(181), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(185), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(119), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(121), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [11946] = 18,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(93), 1,
      sym__integer_literal,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(554), 1,
      sym__conid,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      sym_constructor,
    STATE(186), 1,
      sym__type_promotable_literal,
    STATE(187), 1,
      sym_qualified_type,
    STATE(189), 1,
      sym_integer,
    STATE(201), 1,
      sym_comment,
    STATE(398), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(91), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(95), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(180), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(181), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [12010] = 18,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(183), 1,
      sym__integer_literal,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      sym__conid,
    ACTIONS(696), 1,
      anon_sym_LPAREN,
    STATE(116), 1,
      sym_integer,
    STATE(118), 1,
      sym__type_promotable_literal,
    STATE(127), 1,
      sym_qualified_type,
    STATE(202), 1,
      sym_comment,
    STATE(243), 1,
      sym_constructor,
    STATE(404), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(181), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(185), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(119), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(121), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [12074] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(570), 1,
      anon_sym_DOT,
    STATE(203), 1,
      sym_comment,
    ACTIONS(590), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(588), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [12116] = 18,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(93), 1,
      sym__integer_literal,
    ACTIONS(101), 1,
      sym__conid,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(700), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_constructor,
    STATE(127), 1,
      sym_qualified_type,
    STATE(186), 1,
      sym__type_promotable_literal,
    STATE(189), 1,
      sym_integer,
    STATE(204), 1,
      sym_comment,
    STATE(386), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(91), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(95), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(180), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(181), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [12180] = 18,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(43), 1,
      sym__conid,
    ACTIONS(117), 1,
      sym__integer_literal,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(702), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_constructor,
    STATE(90), 1,
      sym_qualified_type,
    STATE(98), 1,
      sym__type_promotable_literal,
    STATE(102), 1,
      sym_integer,
    STATE(205), 1,
      sym_comment,
    STATE(390), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(115), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(119), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(112), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(89), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [12244] = 18,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(93), 1,
      sym__integer_literal,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      sym__conid,
    ACTIONS(700), 1,
      anon_sym_LPAREN,
    STATE(127), 1,
      sym_qualified_type,
    STATE(186), 1,
      sym__type_promotable_literal,
    STATE(189), 1,
      sym_integer,
    STATE(206), 1,
      sym_comment,
    STATE(376), 1,
      sym_constructor,
    STATE(410), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(91), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(95), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(180), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(181), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [12308] = 18,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(211), 1,
      sym__conid,
    ACTIONS(393), 1,
      sym__integer_literal,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(704), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_constructor,
    STATE(207), 1,
      sym_comment,
    STATE(214), 1,
      sym_qualified_type,
    STATE(219), 1,
      sym_integer,
    STATE(238), 1,
      sym__type_promotable_literal,
    STATE(406), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(391), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(395), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(232), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(227), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [12372] = 18,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(29), 1,
      sym__integer_literal,
    ACTIONS(43), 1,
      sym__conid,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(706), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_constructor,
    STATE(90), 1,
      sym_qualified_type,
    STATE(148), 1,
      sym_integer,
    STATE(162), 1,
      sym__type_promotable_literal,
    STATE(208), 1,
      sym_comment,
    STATE(390), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(27), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(31), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(157), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [12436] = 18,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(29), 1,
      sym__integer_literal,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(550), 1,
      sym__conid,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
    STATE(135), 1,
      sym_constructor,
    STATE(148), 1,
      sym_integer,
    STATE(155), 1,
      sym_qualified_type,
    STATE(162), 1,
      sym__type_promotable_literal,
    STATE(209), 1,
      sym_comment,
    STATE(400), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(27), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(31), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(157), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [12500] = 18,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(205), 1,
      sym__integer_literal,
    ACTIONS(213), 1,
      anon_sym_LBRACK,
    ACTIONS(564), 1,
      sym__conid,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
    STATE(210), 1,
      sym_comment,
    STATE(245), 1,
      sym_constructor,
    STATE(258), 1,
      sym__type_promotable_literal,
    STATE(263), 1,
      sym_integer,
    STATE(271), 1,
      sym_qualified_type,
    STATE(411), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(203), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(207), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(257), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(249), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [12564] = 18,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(205), 1,
      sym__integer_literal,
    ACTIONS(211), 1,
      sym__conid,
    ACTIONS(213), 1,
      anon_sym_LBRACK,
    ACTIONS(712), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_constructor,
    STATE(211), 1,
      sym_comment,
    STATE(214), 1,
      sym_qualified_type,
    STATE(258), 1,
      sym__type_promotable_literal,
    STATE(263), 1,
      sym_integer,
    STATE(406), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    ACTIONS(203), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(207), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(257), 3,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
    STATE(249), 4,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [12628] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(212), 1,
      sym_comment,
    ACTIONS(594), 6,
      anon_sym_DOT,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(592), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [12668] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(213), 1,
      sym_comment,
    ACTIONS(682), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(680), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [12707] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(214), 1,
      sym_comment,
    ACTIONS(610), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(608), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [12746] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(215), 1,
      sym_comment,
    ACTIONS(598), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(596), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [12785] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(216), 1,
      sym_comment,
    ACTIONS(646), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(644), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [12824] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(217), 1,
      sym_comment,
    ACTIONS(626), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(624), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [12863] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(218), 1,
      sym_comment,
    ACTIONS(634), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(632), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [12902] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(219), 1,
      sym_comment,
    ACTIONS(654), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(652), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [12941] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(220), 1,
      sym_comment,
    ACTIONS(678), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(676), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [12980] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(221), 1,
      sym_comment,
    ACTIONS(670), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(668), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [13019] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(222), 1,
      sym_comment,
    ACTIONS(642), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(640), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [13058] = 22,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(714), 1,
      sym__varid,
    ACTIONS(716), 1,
      anon_sym_Id,
    ACTIONS(718), 1,
      anon_sym_Primary,
    ACTIONS(720), 1,
      sym__field_strictness_prefix,
    ACTIONS(722), 1,
      anon_sym_Foreign,
    ACTIONS(724), 1,
      anon_sym_deriving,
    ACTIONS(726), 1,
      sym__conid,
    ACTIONS(728), 1,
      sym__dedent,
    STATE(74), 1,
      sym__field_name,
    STATE(223), 1,
      sym_comment,
    STATE(241), 1,
      aux_sym_entity_body_repeat1,
    STATE(297), 1,
      sym_variable,
    STATE(325), 1,
      sym__entity_line_definition,
    STATE(405), 1,
      sym__haskell_constraint_name,
    STATE(415), 1,
      aux_sym_entity_body_repeat2,
    STATE(523), 1,
      sym_entity_derives,
    STATE(548), 1,
      sym_constructor,
    STATE(549), 2,
      sym_surrogate_key,
      sym_natural_key,
    STATE(554), 4,
      sym__entity_key,
      sym_field_definition,
      sym_unique_constraint,
      sym_foreign_constraint,
  [13129] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(224), 1,
      sym_comment,
    ACTIONS(658), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(656), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [13168] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(225), 1,
      sym_comment,
    ACTIONS(622), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(620), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [13207] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(226), 1,
      sym_comment,
    ACTIONS(614), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(612), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [13246] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(227), 1,
      sym_comment,
    ACTIONS(606), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(604), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [13285] = 22,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(714), 1,
      sym__varid,
    ACTIONS(716), 1,
      anon_sym_Id,
    ACTIONS(718), 1,
      anon_sym_Primary,
    ACTIONS(720), 1,
      sym__field_strictness_prefix,
    ACTIONS(722), 1,
      anon_sym_Foreign,
    ACTIONS(724), 1,
      anon_sym_deriving,
    ACTIONS(726), 1,
      sym__conid,
    STATE(74), 1,
      sym__field_name,
    STATE(223), 1,
      aux_sym_entity_body_repeat1,
    STATE(228), 1,
      sym_comment,
    STATE(297), 1,
      sym_variable,
    STATE(325), 1,
      sym__entity_line_definition,
    STATE(385), 1,
      aux_sym_entity_body_repeat2,
    STATE(405), 1,
      sym__haskell_constraint_name,
    STATE(523), 1,
      sym_entity_derives,
    STATE(548), 1,
      sym_constructor,
    STATE(557), 1,
      sym_entity_body,
    STATE(549), 2,
      sym_surrogate_key,
      sym_natural_key,
    STATE(554), 4,
      sym__entity_key,
      sym_field_definition,
      sym_unique_constraint,
      sym_foreign_constraint,
  [13356] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(229), 1,
      sym_comment,
    ACTIONS(650), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(648), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [13395] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(230), 1,
      sym_comment,
    ACTIONS(630), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(628), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [13434] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(231), 1,
      sym_comment,
    ACTIONS(594), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(592), 20,
      sym_comma,
      anon_sym_DOT,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_EQ_GT,
      anon_sym_2,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [13473] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(232), 1,
      sym_comment,
    ACTIONS(674), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(672), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [13512] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(233), 1,
      sym_comment,
    ACTIONS(230), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(228), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [13551] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(234), 1,
      sym_comment,
    ACTIONS(662), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(660), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [13590] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(235), 1,
      sym_comment,
    ACTIONS(580), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(578), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [13629] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(236), 1,
      sym_comment,
    ACTIONS(666), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(664), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [13668] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(237), 1,
      sym_comment,
    ACTIONS(602), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(600), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [13707] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(238), 1,
      sym_comment,
    ACTIONS(638), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(636), 17,
      sym_comma,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [13746] = 19,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(23), 1,
      sym__consym,
    ACTIONS(25), 1,
      sym__tyconsym,
    ACTIONS(526), 1,
      sym__conid,
    ACTIONS(688), 1,
      anon_sym_EQ_GT,
    ACTIONS(690), 1,
      anon_sym_BQUOTE,
    ACTIONS(692), 1,
      anon_sym_SQUOTE,
    STATE(69), 1,
      sym__qtyconop,
    STATE(239), 1,
      sym_comment,
    STATE(285), 1,
      sym_constructor_operator,
    STATE(334), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    STATE(541), 1,
      sym_constructor,
    STATE(286), 2,
      sym_qualified_constructor_operator,
      sym_qualified_type_operator,
    STATE(291), 2,
      sym__qtyconops,
      sym__promoted_tyconop,
    ACTIONS(684), 3,
      sym_comma,
      anon_sym_,
      anon_sym_RPAREN,
    STATE(292), 3,
      sym__type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
  [13810] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(616), 1,
      anon_sym_,
    ACTIONS(618), 1,
      anon_sym_EQ_GT,
    STATE(240), 1,
      sym_comment,
    ACTIONS(614), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(612), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [13851] = 19,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(730), 1,
      sym__varid,
    ACTIONS(733), 1,
      anon_sym_Id,
    ACTIONS(736), 1,
      anon_sym_Primary,
    ACTIONS(739), 1,
      sym__field_strictness_prefix,
    ACTIONS(742), 1,
      anon_sym_Foreign,
    ACTIONS(745), 1,
      anon_sym_deriving,
    ACTIONS(747), 1,
      sym__conid,
    ACTIONS(750), 1,
      sym__dedent,
    STATE(74), 1,
      sym__field_name,
    STATE(297), 1,
      sym_variable,
    STATE(325), 1,
      sym__entity_line_definition,
    STATE(405), 1,
      sym__haskell_constraint_name,
    STATE(548), 1,
      sym_constructor,
    STATE(241), 2,
      sym_comment,
      aux_sym_entity_body_repeat1,
    STATE(549), 2,
      sym_surrogate_key,
      sym_natural_key,
    STATE(554), 4,
      sym__entity_key,
      sym_field_definition,
      sym_unique_constraint,
      sym_foreign_constraint,
  [13914] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(752), 1,
      anon_sym_DOT,
    STATE(242), 1,
      sym_comment,
    ACTIONS(590), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(588), 16,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_EQ_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [13952] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(752), 1,
      anon_sym_DOT,
    STATE(243), 1,
      sym_comment,
    ACTIONS(576), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(574), 16,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_EQ_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [13990] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(244), 1,
      sym_comment,
    ACTIONS(594), 5,
      anon_sym_DOT,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(592), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14026] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(570), 1,
      anon_sym_DOT,
    STATE(245), 1,
      sym_comment,
    ACTIONS(576), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(574), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14064] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(570), 1,
      anon_sym_DOT,
    STATE(246), 1,
      sym_comment,
    ACTIONS(572), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(568), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14102] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(570), 1,
      anon_sym_DOT,
    STATE(247), 1,
      sym_comment,
    ACTIONS(590), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(588), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14140] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(752), 1,
      anon_sym_DOT,
    STATE(248), 1,
      sym_comment,
    ACTIONS(572), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(568), 16,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_EQ_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14178] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(249), 1,
      sym_comment,
    ACTIONS(606), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(604), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14213] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(250), 1,
      sym_comment,
    ACTIONS(682), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(680), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14248] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(251), 1,
      sym_comment,
    ACTIONS(230), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(228), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14283] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(252), 1,
      sym_comment,
    ACTIONS(614), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(612), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14318] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(253), 1,
      sym_comment,
    ACTIONS(756), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(754), 16,
      sym_comma,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_,
      anon_sym_EQ_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14353] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(254), 1,
      sym_comment,
    ACTIONS(666), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(664), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14388] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(255), 1,
      sym_comment,
    ACTIONS(634), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(632), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14423] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(256), 1,
      sym_comment,
    ACTIONS(678), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(676), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14458] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(257), 1,
      sym_comment,
    ACTIONS(674), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(672), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14493] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(258), 1,
      sym_comment,
    ACTIONS(638), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(636), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14528] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(259), 1,
      sym_comment,
    ACTIONS(658), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(656), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14563] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(260), 1,
      sym_comment,
    ACTIONS(598), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(596), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14598] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(261), 1,
      sym_comment,
    ACTIONS(602), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(600), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14633] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(262), 1,
      sym_comment,
    ACTIONS(662), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(660), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14668] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(263), 1,
      sym_comment,
    ACTIONS(654), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(652), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14703] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(264), 1,
      sym_comment,
    ACTIONS(622), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(620), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14738] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(265), 1,
      sym_comment,
    ACTIONS(646), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(644), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14773] = 18,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(758), 1,
      ts_builtin_sym_end,
    ACTIONS(760), 1,
      sym__varid,
    ACTIONS(763), 1,
      sym_is_sum_marker,
    ACTIONS(766), 1,
      anon_sym_LPAREN,
    ACTIONS(769), 1,
      sym__conid,
    ACTIONS(772), 1,
      anon_sym_SQUOTE,
    STATE(341), 1,
      sym__entity_header,
    STATE(342), 1,
      sym__entity_name,
    STATE(354), 1,
      sym_entity_definition,
    STATE(403), 1,
      aux_sym__qualifying_module,
    STATE(408), 1,
      sym_constructor,
    STATE(454), 1,
      sym_type_name,
    STATE(520), 1,
      sym__modid,
    STATE(266), 2,
      sym_comment,
      aux_sym_quasi_quotation_repeat1,
    STATE(426), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [14832] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(267), 1,
      sym_comment,
    ACTIONS(670), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(668), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14867] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(268), 1,
      sym_comment,
    ACTIONS(642), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(640), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14902] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(269), 1,
      sym_comment,
    ACTIONS(626), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(624), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14937] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(270), 1,
      sym_comment,
    ACTIONS(630), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(628), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [14972] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(271), 1,
      sym_comment,
    ACTIONS(610), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(608), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [15007] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(272), 1,
      sym_comment,
    ACTIONS(580), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(578), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [15042] = 18,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(11), 1,
      sym__varid,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym__conid,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(775), 1,
      ts_builtin_sym_end,
    STATE(266), 1,
      aux_sym_quasi_quotation_repeat1,
    STATE(273), 1,
      sym_comment,
    STATE(341), 1,
      sym__entity_header,
    STATE(342), 1,
      sym__entity_name,
    STATE(354), 1,
      sym_entity_definition,
    STATE(403), 1,
      aux_sym__qualifying_module,
    STATE(408), 1,
      sym_constructor,
    STATE(454), 1,
      sym_type_name,
    STATE(520), 1,
      sym__modid,
    ACTIONS(7), 2,
      sym_is_sum_marker,
      aux_sym_comment_token2,
    STATE(426), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [15101] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(274), 1,
      sym_comment,
    ACTIONS(650), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(648), 14,
      sym__consym,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [15136] = 18,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(23), 1,
      sym__consym,
    ACTIONS(25), 1,
      sym__tyconsym,
    ACTIONS(33), 1,
      anon_sym_2,
    ACTIONS(35), 1,
      anon_sym_DASH_GT,
    ACTIONS(526), 1,
      sym__conid,
    ACTIONS(558), 1,
      sym__varid,
    STATE(275), 1,
      sym_comment,
    STATE(285), 1,
      sym_constructor_operator,
    STATE(334), 1,
      aux_sym__qualifying_module,
    STATE(383), 1,
      sym_type_variable,
    STATE(520), 1,
      sym__modid,
    STATE(541), 1,
      sym_constructor,
    STATE(542), 1,
      sym__arrow,
    STATE(286), 2,
      sym_qualified_constructor_operator,
      sym_qualified_type_operator,
    STATE(537), 3,
      sym__type_operator,
      sym__qualified_type_operator,
      sym_annotated_type_variable,
  [15194] = 18,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(23), 1,
      sym__consym,
    ACTIONS(25), 1,
      sym__tyconsym,
    ACTIONS(33), 1,
      anon_sym_2,
    ACTIONS(35), 1,
      anon_sym_DASH_GT,
    ACTIONS(526), 1,
      sym__conid,
    ACTIONS(558), 1,
      sym__varid,
    STATE(276), 1,
      sym_comment,
    STATE(285), 1,
      sym_constructor_operator,
    STATE(334), 1,
      aux_sym__qualifying_module,
    STATE(383), 1,
      sym_type_variable,
    STATE(520), 1,
      sym__modid,
    STATE(541), 1,
      sym_constructor,
    STATE(565), 1,
      sym__arrow,
    STATE(286), 2,
      sym_qualified_constructor_operator,
      sym_qualified_type_operator,
    STATE(566), 3,
      sym__type_operator,
      sym__qualified_type_operator,
      sym_annotated_type_variable,
  [15252] = 17,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(23), 1,
      sym__consym,
    ACTIONS(25), 1,
      sym__tyconsym,
    ACTIONS(526), 1,
      sym__conid,
    ACTIONS(690), 1,
      anon_sym_BQUOTE,
    ACTIONS(692), 1,
      anon_sym_SQUOTE,
    STATE(69), 1,
      sym__qtyconop,
    STATE(277), 1,
      sym_comment,
    STATE(285), 1,
      sym_constructor_operator,
    STATE(334), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    STATE(541), 1,
      sym_constructor,
    STATE(286), 2,
      sym_qualified_constructor_operator,
      sym_qualified_type_operator,
    STATE(291), 2,
      sym__qtyconops,
      sym__promoted_tyconop,
    STATE(292), 3,
      sym__type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
  [15308] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(278), 1,
      sym_comment,
    ACTIONS(777), 4,
      sym__integer_literal,
      sym__varid,
      anon_sym_SQUOTE,
      anon_sym_forall,
    ACTIONS(779), 13,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_LPAREN,
      sym_implicit_parid,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_5,
      anon_sym_STAR,
      anon_sym_6,
  [15342] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(279), 1,
      sym_comment,
    ACTIONS(781), 4,
      sym__integer_literal,
      sym__varid,
      anon_sym_SQUOTE,
      anon_sym_forall,
    ACTIONS(783), 13,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_5,
      anon_sym_STAR,
      anon_sym_6,
  [15376] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(280), 1,
      sym_comment,
    ACTIONS(785), 4,
      sym__integer_literal,
      sym__varid,
      anon_sym_SQUOTE,
      anon_sym_forall,
    ACTIONS(787), 12,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_5,
      anon_sym_STAR,
      anon_sym_6,
  [15409] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(281), 1,
      sym_comment,
    ACTIONS(789), 4,
      sym__integer_literal,
      sym__varid,
      anon_sym_SQUOTE,
      anon_sym_forall,
    ACTIONS(791), 12,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_5,
      anon_sym_STAR,
      anon_sym_6,
  [15442] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(282), 1,
      sym_comment,
    ACTIONS(793), 4,
      sym__integer_literal,
      sym__varid,
      anon_sym_SQUOTE,
      anon_sym_forall,
    ACTIONS(795), 12,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_5,
      anon_sym_STAR,
      anon_sym_6,
  [15475] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(283), 1,
      sym_comment,
    ACTIONS(797), 4,
      sym__integer_literal,
      sym__varid,
      anon_sym_SQUOTE,
      anon_sym_forall,
    ACTIONS(799), 12,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_5,
      anon_sym_STAR,
      anon_sym_6,
  [15508] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(284), 1,
      sym_comment,
    ACTIONS(801), 4,
      sym__integer_literal,
      sym__varid,
      anon_sym_SQUOTE,
      anon_sym_forall,
    ACTIONS(803), 12,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_5,
      anon_sym_STAR,
      anon_sym_6,
  [15541] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(285), 1,
      sym_comment,
    ACTIONS(807), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(805), 13,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [15573] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(286), 1,
      sym_comment,
    ACTIONS(811), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(809), 13,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [15605] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(287), 1,
      sym_comment,
    ACTIONS(113), 6,
      sym__consym,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    ACTIONS(111), 9,
      sym_comma,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
  [15637] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(288), 1,
      sym_comment,
    ACTIONS(815), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(813), 13,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [15669] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(289), 1,
      sym_comment,
    ACTIONS(819), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(817), 13,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [15701] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(290), 1,
      sym_comment,
    ACTIONS(823), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(821), 13,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [15733] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(291), 1,
      sym_comment,
    ACTIONS(827), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(825), 12,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [15764] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(292), 1,
      sym_comment,
    ACTIONS(831), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(829), 12,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [15795] = 15,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(23), 1,
      sym__consym,
    ACTIONS(25), 1,
      sym__tyconsym,
    ACTIONS(526), 1,
      sym__conid,
    ACTIONS(690), 1,
      anon_sym_BQUOTE,
    STATE(285), 1,
      sym_constructor_operator,
    STATE(293), 1,
      sym_comment,
    STATE(295), 1,
      sym__qtyconops,
    STATE(334), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    STATE(541), 1,
      sym_constructor,
    STATE(286), 2,
      sym_qualified_constructor_operator,
      sym_qualified_type_operator,
    STATE(292), 3,
      sym__type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
  [15844] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(294), 1,
      sym_comment,
    ACTIONS(835), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(833), 12,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [15875] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(295), 1,
      sym_comment,
    ACTIONS(839), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(837), 12,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [15906] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(296), 1,
      sym_comment,
    ACTIONS(843), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(841), 12,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [15937] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(297), 1,
      sym_comment,
    ACTIONS(847), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(845), 12,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [15968] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(298), 1,
      sym_comment,
    ACTIONS(113), 4,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    ACTIONS(111), 10,
      sym_comma,
      sym__consym,
      anon_sym_,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [15999] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(299), 1,
      sym_comment,
    ACTIONS(851), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(849), 12,
      sym_float,
      sym_char,
      sym_string,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [16030] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(300), 1,
      sym_comment,
    ACTIONS(113), 5,
      sym__consym,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    ACTIONS(111), 8,
      sym_comma,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
  [16060] = 12,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(853), 1,
      aux_sym__key_value_atribute_value_other_token_token1,
    ACTIONS(855), 1,
      sym_float,
    STATE(301), 1,
      sym_comment,
    STATE(460), 1,
      sym__literal,
    STATE(461), 1,
      sym__key_value_attribute_value,
    STATE(484), 1,
      sym_integer,
    ACTIONS(536), 2,
      sym_char,
      sym_string,
    STATE(421), 2,
      sym__key_value_atribute_value_literal,
      sym__key_value_atribute_value_other_token,
    ACTIONS(538), 4,
      sym__integer_literal,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
  [16102] = 14,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(558), 1,
      sym__varid,
    ACTIONS(857), 1,
      anon_sym_LPAREN,
    ACTIONS(859), 1,
      sym__conid,
    ACTIONS(861), 1,
      anon_sym_SQUOTE,
    STATE(302), 1,
      sym_comment,
    STATE(377), 1,
      sym_constructor,
    STATE(409), 1,
      aux_sym__qualifying_module,
    STATE(458), 1,
      sym__entity_name,
    STATE(520), 1,
      sym__modid,
    STATE(528), 1,
      sym_type_name,
    STATE(516), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [16148] = 14,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(11), 1,
      sym__varid,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym__conid,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(303), 1,
      sym_comment,
    STATE(339), 1,
      sym__entity_name,
    STATE(403), 1,
      aux_sym__qualifying_module,
    STATE(408), 1,
      sym_constructor,
    STATE(454), 1,
      sym_type_name,
    STATE(520), 1,
      sym__modid,
    STATE(426), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [16194] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(304), 1,
      sym_comment,
    ACTIONS(113), 3,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    ACTIONS(111), 9,
      sym_comma,
      sym__consym,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_RBRACK,
      anon_sym_SQUOTE,
      anon_sym_RBRACE,
  [16223] = 15,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(863), 1,
      sym__varid,
    ACTIONS(865), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(867), 1,
      sym_exl_mark_attribute,
    ACTIONS(869), 1,
      sym__newline,
    STATE(305), 1,
      sym_comment,
    STATE(324), 1,
      aux_sym_surrogate_key_repeat1,
    STATE(336), 1,
      aux_sym_natural_key_repeat1,
    STATE(416), 1,
      sym_variable,
    STATE(417), 1,
      sym__field_name,
    STATE(443), 1,
      sym__field_attribute,
    STATE(444), 1,
      sym__key_attribute,
    STATE(445), 2,
      sym_key_value_attribute,
      sym_other_attribute,
  [16270] = 13,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(23), 1,
      sym__consym,
    ACTIONS(25), 1,
      sym__tyconsym,
    ACTIONS(526), 1,
      sym__conid,
    STATE(285), 1,
      sym_constructor_operator,
    STATE(306), 1,
      sym_comment,
    STATE(334), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    STATE(541), 1,
      sym_constructor,
    STATE(286), 2,
      sym_qualified_constructor_operator,
      sym_qualified_type_operator,
    STATE(544), 2,
      sym__type_operator,
      sym__qualified_type_operator,
  [16312] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(307), 1,
      sym_comment,
    ACTIONS(871), 2,
      anon_sym_,
      anon_sym_EQ_GT,
    ACTIONS(684), 9,
      sym_comma,
      anon_sym_2,
      anon_sym_DASH_GT,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
  [16340] = 13,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(23), 1,
      sym__consym,
    ACTIONS(25), 1,
      sym__tyconsym,
    ACTIONS(526), 1,
      sym__conid,
    STATE(285), 1,
      sym_constructor_operator,
    STATE(308), 1,
      sym_comment,
    STATE(334), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    STATE(541), 1,
      sym_constructor,
    STATE(286), 2,
      sym_qualified_constructor_operator,
      sym_qualified_type_operator,
    STATE(558), 2,
      sym__type_operator,
      sym__qualified_type_operator,
  [16382] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(309), 1,
      sym_comment,
    ACTIONS(873), 11,
      sym_comma,
      anon_sym_,
      anon_sym_EQ_GT,
      anon_sym_2,
      anon_sym_DASH_GT,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
  [16408] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(877), 1,
      anon_sym_PERCENT,
    STATE(40), 1,
      sym__fun_arrow,
    STATE(282), 1,
      sym__arrow,
    STATE(310), 1,
      sym_comment,
    STATE(447), 1,
      sym_modifier,
    ACTIONS(33), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(875), 5,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [16444] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(311), 1,
      sym_comment,
    ACTIONS(684), 11,
      sym_comma,
      anon_sym_,
      anon_sym_EQ_GT,
      anon_sym_2,
      anon_sym_DASH_GT,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
  [16470] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(877), 1,
      anon_sym_PERCENT,
    STATE(44), 1,
      sym__fun_arrow,
    STATE(282), 1,
      sym__arrow,
    STATE(312), 1,
      sym_comment,
    STATE(447), 1,
      sym_modifier,
    ACTIONS(33), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(875), 4,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [16505] = 14,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(863), 1,
      sym__varid,
    ACTIONS(879), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(881), 1,
      sym_exl_mark_attribute,
    ACTIONS(883), 1,
      sym__newline,
    STATE(313), 1,
      sym_comment,
    STATE(336), 1,
      aux_sym_natural_key_repeat1,
    STATE(357), 1,
      aux_sym_unique_constraint_repeat1,
    STATE(416), 1,
      sym_variable,
    STATE(417), 1,
      sym__field_name,
    STATE(437), 1,
      sym__unique_constraint_attribute,
    STATE(438), 1,
      sym_key_value_attribute,
  [16548] = 11,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(885), 1,
      sym__varid,
    ACTIONS(889), 1,
      anon_sym_LPAREN,
    ACTIONS(891), 1,
      anon_sym_LBRACE,
    STATE(314), 1,
      sym_comment,
    STATE(315), 1,
      aux_sym__forall_repeat1,
    STATE(347), 1,
      sym__quantifier,
    STATE(356), 2,
      sym_type_variable,
      sym_inferred_type_variable,
    ACTIONS(887), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
  [16585] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(893), 1,
      sym__varid,
    ACTIONS(898), 1,
      anon_sym_LPAREN,
    ACTIONS(901), 1,
      anon_sym_LBRACE,
    STATE(347), 1,
      sym__quantifier,
    STATE(315), 2,
      sym_comment,
      aux_sym__forall_repeat1,
    STATE(356), 2,
      sym_type_variable,
      sym_inferred_type_variable,
    ACTIONS(896), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
  [16620] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(316), 1,
      sym_comment,
    ACTIONS(871), 2,
      anon_sym_,
      anon_sym_EQ_GT,
    ACTIONS(904), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(684), 5,
      anon_sym_2,
      anon_sym_DASH_GT,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
  [16648] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(317), 1,
      sym_comment,
    ACTIONS(113), 2,
      sym__tyconsym,
      anon_sym_EQ_GT,
    ACTIONS(111), 7,
      sym_comma,
      sym__consym,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_SQUOTE,
  [16674] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(318), 1,
      sym_comment,
    ACTIONS(909), 2,
      sym__dedent,
      sym__field_strictness_prefix,
    ACTIONS(907), 6,
      anon_sym_Id,
      anon_sym_Primary,
      anon_sym_Foreign,
      anon_sym_deriving,
      sym__varid,
      sym__conid,
  [16699] = 11,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(867), 1,
      sym_exl_mark_attribute,
    ACTIONS(911), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(913), 1,
      sym__newline,
    STATE(319), 1,
      sym_comment,
    STATE(322), 1,
      aux_sym_surrogate_key_repeat1,
    STATE(443), 1,
      sym__field_attribute,
    STATE(444), 1,
      sym__key_attribute,
    STATE(445), 2,
      sym_key_value_attribute,
      sym_other_attribute,
  [16734] = 11,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(867), 1,
      sym_exl_mark_attribute,
    ACTIONS(911), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(915), 1,
      sym__newline,
    STATE(319), 1,
      aux_sym_surrogate_key_repeat1,
    STATE(320), 1,
      sym_comment,
    STATE(443), 1,
      sym__field_attribute,
    STATE(444), 1,
      sym__key_attribute,
    STATE(445), 2,
      sym_key_value_attribute,
      sym_other_attribute,
  [16769] = 9,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(35), 1,
      sym__colon2,
    STATE(321), 1,
      sym_comment,
    STATE(431), 1,
      sym_kind,
    STATE(432), 1,
      sym__type_annotation,
    ACTIONS(919), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
    ACTIONS(917), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [16800] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(921), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(924), 1,
      sym_exl_mark_attribute,
    ACTIONS(927), 1,
      sym__newline,
    STATE(443), 1,
      sym__field_attribute,
    STATE(444), 1,
      sym__key_attribute,
    STATE(322), 2,
      sym_comment,
      aux_sym_surrogate_key_repeat1,
    STATE(445), 2,
      sym_key_value_attribute,
      sym_other_attribute,
  [16833] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(931), 1,
      sym__conid,
    STATE(396), 1,
      aux_sym__qualifying_module,
    STATE(407), 1,
      sym_constructor,
    STATE(457), 1,
      sym_qualified_type,
    STATE(520), 1,
      sym__modid,
    ACTIONS(929), 2,
      sym__dedent,
      anon_sym_deriving,
    STATE(323), 2,
      sym_comment,
      aux_sym_entity_derives_repeat1,
  [16866] = 11,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(867), 1,
      sym_exl_mark_attribute,
    ACTIONS(911), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(934), 1,
      sym__newline,
    STATE(322), 1,
      aux_sym_surrogate_key_repeat1,
    STATE(324), 1,
      sym_comment,
    STATE(443), 1,
      sym__field_attribute,
    STATE(444), 1,
      sym__key_attribute,
    STATE(445), 2,
      sym_key_value_attribute,
      sym_other_attribute,
  [16901] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(325), 1,
      sym_comment,
    ACTIONS(938), 2,
      sym__dedent,
      sym__field_strictness_prefix,
    ACTIONS(936), 6,
      anon_sym_Id,
      anon_sym_Primary,
      anon_sym_Foreign,
      anon_sym_deriving,
      sym__varid,
      sym__conid,
  [16926] = 11,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(942), 1,
      sym__conid,
    STATE(323), 1,
      aux_sym_entity_derives_repeat1,
    STATE(326), 1,
      sym_comment,
    STATE(396), 1,
      aux_sym__qualifying_module,
    STATE(407), 1,
      sym_constructor,
    STATE(457), 1,
      sym_qualified_type,
    STATE(520), 1,
      sym__modid,
    ACTIONS(940), 2,
      sym__dedent,
      anon_sym_deriving,
  [16961] = 9,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(944), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(947), 1,
      sym_exl_mark_attribute,
    ACTIONS(950), 1,
      sym__newline,
    STATE(440), 1,
      sym__field_attribute,
    STATE(327), 2,
      sym_comment,
      aux_sym_field_definition_repeat1,
    STATE(445), 2,
      sym_key_value_attribute,
      sym_other_attribute,
  [16991] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(911), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(952), 1,
      sym_exl_mark_attribute,
    ACTIONS(954), 1,
      sym__newline,
    STATE(328), 1,
      sym_comment,
    STATE(343), 1,
      aux_sym__entity_header_repeat1,
    STATE(497), 1,
      sym__entity_attribute,
    STATE(483), 2,
      sym_key_value_attribute,
      sym_other_attribute,
  [17023] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(329), 1,
      sym_comment,
    ACTIONS(956), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [17045] = 11,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(23), 1,
      sym__consym,
    ACTIONS(43), 1,
      sym__conid,
    ACTIONS(958), 1,
      sym__tyconsym,
    STATE(85), 1,
      sym_constructor,
    STATE(288), 1,
      sym_constructor_operator,
    STATE(330), 1,
      sym_comment,
    STATE(348), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
  [17079] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(911), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(952), 1,
      sym_exl_mark_attribute,
    ACTIONS(960), 1,
      sym__newline,
    STATE(331), 1,
      sym_comment,
    STATE(343), 1,
      aux_sym__entity_header_repeat1,
    STATE(497), 1,
      sym__entity_attribute,
    STATE(483), 2,
      sym_key_value_attribute,
      sym_other_attribute,
  [17111] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(332), 1,
      sym_comment,
    ACTIONS(962), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [17133] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(867), 1,
      sym_exl_mark_attribute,
    ACTIONS(911), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(964), 1,
      sym__newline,
    STATE(333), 1,
      sym_comment,
    STATE(340), 1,
      aux_sym_field_definition_repeat1,
    STATE(440), 1,
      sym__field_attribute,
    STATE(445), 2,
      sym_key_value_attribute,
      sym_other_attribute,
  [17165] = 11,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(23), 1,
      sym__consym,
    ACTIONS(526), 1,
      sym__conid,
    ACTIONS(958), 1,
      sym__tyconsym,
    STATE(288), 1,
      sym_constructor_operator,
    STATE(334), 1,
      sym_comment,
    STATE(348), 1,
      aux_sym__qualifying_module,
    STATE(520), 1,
      sym__modid,
    STATE(541), 1,
      sym_constructor,
  [17199] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(335), 1,
      sym_comment,
    ACTIONS(966), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [17221] = 9,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(968), 1,
      sym__varid,
    ACTIONS(971), 1,
      aux_sym_key_value_attribute_token1,
    STATE(416), 1,
      sym_variable,
    STATE(417), 1,
      sym__field_name,
    ACTIONS(973), 2,
      sym__newline,
      sym_exl_mark_attribute,
    STATE(336), 2,
      sym_comment,
      aux_sym_natural_key_repeat1,
  [17251] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(867), 1,
      sym_exl_mark_attribute,
    ACTIONS(911), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(975), 1,
      sym__newline,
    STATE(337), 1,
      sym_comment,
    STATE(344), 1,
      aux_sym_field_definition_repeat1,
    STATE(440), 1,
      sym__field_attribute,
    STATE(445), 2,
      sym_key_value_attribute,
      sym_other_attribute,
  [17283] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(338), 1,
      sym_comment,
    ACTIONS(977), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [17305] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(911), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(952), 1,
      sym_exl_mark_attribute,
    ACTIONS(979), 1,
      sym__newline,
    STATE(328), 1,
      aux_sym__entity_header_repeat1,
    STATE(339), 1,
      sym_comment,
    STATE(497), 1,
      sym__entity_attribute,
    STATE(483), 2,
      sym_key_value_attribute,
      sym_other_attribute,
  [17337] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(867), 1,
      sym_exl_mark_attribute,
    ACTIONS(911), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(981), 1,
      sym__newline,
    STATE(327), 1,
      aux_sym_field_definition_repeat1,
    STATE(340), 1,
      sym_comment,
    STATE(440), 1,
      sym__field_attribute,
    STATE(445), 2,
      sym_key_value_attribute,
      sym_other_attribute,
  [17369] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(985), 1,
      sym__indent,
    STATE(341), 1,
      sym_comment,
    ACTIONS(983), 6,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [17393] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(911), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(952), 1,
      sym_exl_mark_attribute,
    ACTIONS(987), 1,
      sym__newline,
    STATE(331), 1,
      aux_sym__entity_header_repeat1,
    STATE(342), 1,
      sym_comment,
    STATE(497), 1,
      sym__entity_attribute,
    STATE(483), 2,
      sym_key_value_attribute,
      sym_other_attribute,
  [17425] = 9,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(989), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(992), 1,
      sym_exl_mark_attribute,
    ACTIONS(995), 1,
      sym__newline,
    STATE(497), 1,
      sym__entity_attribute,
    STATE(343), 2,
      sym_comment,
      aux_sym__entity_header_repeat1,
    STATE(483), 2,
      sym_key_value_attribute,
      sym_other_attribute,
  [17455] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(867), 1,
      sym_exl_mark_attribute,
    ACTIONS(911), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(997), 1,
      sym__newline,
    STATE(327), 1,
      aux_sym_field_definition_repeat1,
    STATE(344), 1,
      sym_comment,
    STATE(440), 1,
      sym__field_attribute,
    STATE(445), 2,
      sym_key_value_attribute,
      sym_other_attribute,
  [17487] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(885), 1,
      sym__varid,
    ACTIONS(889), 1,
      anon_sym_LPAREN,
    ACTIONS(891), 1,
      anon_sym_LBRACE,
    STATE(314), 1,
      aux_sym__forall_repeat1,
    STATE(345), 1,
      sym_comment,
    STATE(347), 1,
      sym__quantifier,
    STATE(356), 2,
      sym_type_variable,
      sym_inferred_type_variable,
  [17519] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(346), 1,
      sym_comment,
    ACTIONS(648), 7,
      sym_cascade_action,
      sym__sql_constraint_name,
      anon_sym_2,
      anon_sym_DASH_GT,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
  [17541] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(347), 1,
      sym_comment,
    ACTIONS(999), 6,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [17562] = 9,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1001), 1,
      sym__consym,
    ACTIONS(1003), 1,
      sym__tyconsym,
    ACTIONS(1005), 1,
      sym__conid,
    STATE(520), 1,
      sym__modid,
    STATE(541), 1,
      sym_constructor,
    STATE(348), 2,
      sym_comment,
      aux_sym__qualifying_module,
  [17591] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(349), 1,
      sym_comment,
    ACTIONS(1008), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [17612] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(350), 1,
      sym_comment,
    ACTIONS(1010), 6,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [17633] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(351), 1,
      sym_comment,
    ACTIONS(1012), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [17654] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(752), 1,
      anon_sym_DOT,
    STATE(352), 1,
      sym_comment,
    ACTIONS(588), 5,
      sym_cascade_action,
      sym__sql_constraint_name,
      anon_sym_2,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
  [17677] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(15), 1,
      sym__conid,
    ACTIONS(1014), 1,
      anon_sym_LPAREN,
    STATE(353), 1,
      sym_comment,
    STATE(394), 1,
      sym_constructor,
    STATE(403), 1,
      aux_sym__qualifying_module,
    STATE(478), 1,
      sym_qualified_type,
    STATE(520), 1,
      sym__modid,
  [17708] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(354), 1,
      sym_comment,
    ACTIONS(1016), 6,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [17729] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(355), 1,
      sym_comment,
    ACTIONS(1018), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [17750] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(356), 1,
      sym_comment,
    ACTIONS(1020), 6,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [17771] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(881), 1,
      sym_exl_mark_attribute,
    ACTIONS(1022), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(1024), 1,
      sym__newline,
    STATE(357), 1,
      sym_comment,
    STATE(361), 1,
      aux_sym_unique_constraint_repeat1,
    STATE(437), 1,
      sym__unique_constraint_attribute,
    STATE(438), 1,
      sym_key_value_attribute,
  [17802] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(358), 1,
      sym_comment,
    ACTIONS(1026), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [17823] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1028), 1,
      sym__varid,
    ACTIONS(1030), 1,
      anon_sym_References,
    ACTIONS(1032), 1,
      sym__newline,
    STATE(359), 1,
      sym_comment,
    STATE(367), 1,
      aux_sym_natural_key_repeat1,
    STATE(464), 1,
      sym_variable,
    STATE(500), 1,
      sym__field_name,
  [17854] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(360), 1,
      sym_comment,
    ACTIONS(1034), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [17875] = 9,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1036), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(1039), 1,
      sym_exl_mark_attribute,
    ACTIONS(1042), 1,
      sym__newline,
    STATE(437), 1,
      sym__unique_constraint_attribute,
    STATE(438), 1,
      sym_key_value_attribute,
    STATE(361), 2,
      sym_comment,
      aux_sym_unique_constraint_repeat1,
  [17904] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(362), 1,
      sym_comment,
    ACTIONS(875), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [17925] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(363), 1,
      sym_comment,
    ACTIONS(648), 6,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [17946] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(364), 1,
      sym_comment,
    ACTIONS(1044), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [17967] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(365), 1,
      sym_comment,
    ACTIONS(1046), 6,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [17988] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(366), 1,
      sym_comment,
    ACTIONS(1048), 6,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [18009] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1050), 1,
      sym__varid,
    STATE(464), 1,
      sym_variable,
    STATE(500), 1,
      sym__field_name,
    ACTIONS(973), 2,
      sym__newline,
      anon_sym_References,
    STATE(367), 2,
      sym_comment,
      aux_sym_natural_key_repeat1,
  [18036] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1028), 1,
      sym__varid,
    ACTIONS(1053), 1,
      anon_sym_References,
    ACTIONS(1055), 1,
      sym__newline,
    STATE(367), 1,
      aux_sym_natural_key_repeat1,
    STATE(368), 1,
      sym_comment,
    STATE(464), 1,
      sym_variable,
    STATE(500), 1,
      sym__field_name,
  [18067] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(859), 1,
      sym__conid,
    ACTIONS(1057), 1,
      anon_sym_LPAREN,
    STATE(369), 1,
      sym_comment,
    STATE(376), 1,
      sym_constructor,
    STATE(409), 1,
      aux_sym__qualifying_module,
    STATE(515), 1,
      sym_qualified_type,
    STATE(520), 1,
      sym__modid,
  [18098] = 10,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(942), 1,
      sym__conid,
    STATE(326), 1,
      aux_sym_entity_derives_repeat1,
    STATE(370), 1,
      sym_comment,
    STATE(396), 1,
      aux_sym__qualifying_module,
    STATE(407), 1,
      sym_constructor,
    STATE(457), 1,
      sym_qualified_type,
    STATE(520), 1,
      sym__modid,
  [18129] = 9,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1028), 1,
      sym__varid,
    ACTIONS(1059), 1,
      sym__newline,
    STATE(367), 1,
      aux_sym_natural_key_repeat1,
    STATE(371), 1,
      sym_comment,
    STATE(464), 1,
      sym_variable,
    STATE(500), 1,
      sym__field_name,
  [18157] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(113), 1,
      sym__tyconsym,
    STATE(372), 1,
      sym_comment,
    ACTIONS(111), 4,
      sym__consym,
      anon_sym_BQUOTE,
      sym__conid,
      anon_sym_SQUOTE,
  [18179] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1061), 1,
      sym_comma,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
    STATE(373), 1,
      sym_comment,
    STATE(434), 1,
      aux_sym__context_constraints_repeat1,
    ACTIONS(1044), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [18205] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1067), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym__colon2,
    STATE(374), 1,
      sym_comment,
    STATE(510), 1,
      sym__type_annotation,
    ACTIONS(919), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [18231] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1069), 1,
      anon_sym_DOT,
    STATE(33), 1,
      sym__forall_dot,
    STATE(281), 1,
      sym__arrow,
    STATE(375), 1,
      sym_comment,
    ACTIONS(33), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
  [18257] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(752), 1,
      anon_sym_DOT,
    STATE(376), 1,
      sym_comment,
    ACTIONS(574), 4,
      sym_cascade_action,
      sym__sql_constraint_name,
      anon_sym_2,
      anon_sym_DASH_GT,
  [18279] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(752), 1,
      anon_sym_DOT,
    STATE(377), 1,
      sym_comment,
    ACTIONS(568), 4,
      sym_cascade_action,
      sym__sql_constraint_name,
      anon_sym_2,
      anon_sym_DASH_GT,
  [18301] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1069), 1,
      anon_sym_DOT,
    STATE(48), 1,
      sym__forall_dot,
    STATE(281), 1,
      sym__arrow,
    STATE(378), 1,
      sym_comment,
    ACTIONS(33), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
  [18327] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1069), 1,
      anon_sym_DOT,
    STATE(56), 1,
      sym__forall_dot,
    STATE(281), 1,
      sym__arrow,
    STATE(379), 1,
      sym_comment,
    ACTIONS(33), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
  [18353] = 9,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(526), 1,
      sym__conid,
    STATE(380), 1,
      sym_comment,
    STATE(410), 1,
      aux_sym__qualifying_module,
    STATE(511), 1,
      sym_constructor,
    STATE(520), 1,
      sym__modid,
    STATE(547), 1,
      sym_qualified_type,
  [18381] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1069), 1,
      anon_sym_DOT,
    STATE(47), 1,
      sym__forall_dot,
    STATE(281), 1,
      sym__arrow,
    STATE(381), 1,
      sym_comment,
    ACTIONS(33), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
  [18407] = 9,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1028), 1,
      sym__varid,
    ACTIONS(1071), 1,
      sym__newline,
    STATE(367), 1,
      aux_sym_natural_key_repeat1,
    STATE(382), 1,
      sym_comment,
    STATE(464), 1,
      sym_variable,
    STATE(500), 1,
      sym__field_name,
  [18435] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(35), 1,
      sym__colon2,
    STATE(383), 1,
      sym_comment,
    STATE(510), 1,
      sym__type_annotation,
    ACTIONS(919), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [18458] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1028), 1,
      sym__varid,
    STATE(368), 1,
      aux_sym_natural_key_repeat1,
    STATE(384), 1,
      sym_comment,
    STATE(464), 1,
      sym_variable,
    STATE(500), 1,
      sym__field_name,
  [18483] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(728), 1,
      sym__dedent,
    ACTIONS(1073), 1,
      anon_sym_deriving,
    STATE(385), 1,
      sym_comment,
    STATE(414), 1,
      aux_sym_entity_body_repeat2,
    STATE(523), 1,
      sym_entity_derives,
  [18508] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(101), 1,
      sym__conid,
    STATE(110), 1,
      sym_constructor,
    STATE(348), 1,
      aux_sym__qualifying_module,
    STATE(386), 1,
      sym_comment,
    STATE(520), 1,
      sym__modid,
  [18533] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1028), 1,
      sym__varid,
    STATE(371), 1,
      aux_sym_natural_key_repeat1,
    STATE(387), 1,
      sym_comment,
    STATE(464), 1,
      sym_variable,
    STATE(500), 1,
      sym__field_name,
  [18558] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(752), 1,
      anon_sym_DOT,
    STATE(388), 1,
      sym_comment,
    ACTIONS(588), 3,
      sym__dedent,
      anon_sym_deriving,
      sym__conid,
  [18579] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1028), 1,
      sym__varid,
    STATE(382), 1,
      aux_sym_natural_key_repeat1,
    STATE(389), 1,
      sym_comment,
    STATE(464), 1,
      sym_variable,
    STATE(500), 1,
      sym__field_name,
  [18604] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(43), 1,
      sym__conid,
    STATE(85), 1,
      sym_constructor,
    STATE(348), 1,
      aux_sym__qualifying_module,
    STATE(390), 1,
      sym_comment,
    STATE(520), 1,
      sym__modid,
  [18629] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1077), 1,
      anon_sym_EQ,
    STATE(391), 1,
      sym_comment,
    ACTIONS(1075), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [18650] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1079), 1,
      sym_comma,
    ACTIONS(1082), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(392), 2,
      sym_comment,
      aux_sym_type_list_repeat1,
  [18671] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(35), 1,
      sym__colon2,
    STATE(351), 1,
      sym__type_annotation,
    STATE(393), 1,
      sym_comment,
    ACTIONS(919), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [18694] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(752), 1,
      anon_sym_DOT,
    STATE(394), 1,
      sym_comment,
    ACTIONS(574), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [18715] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(395), 1,
      sym_comment,
    ACTIONS(871), 4,
      sym_comma,
      anon_sym_,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
  [18734] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(942), 1,
      sym__conid,
    STATE(348), 1,
      aux_sym__qualifying_module,
    STATE(388), 1,
      sym_constructor,
    STATE(396), 1,
      sym_comment,
    STATE(520), 1,
      sym__modid,
  [18759] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(752), 1,
      anon_sym_DOT,
    STATE(397), 1,
      sym_comment,
    ACTIONS(588), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [18780] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(554), 1,
      sym__conid,
    STATE(153), 1,
      sym_constructor,
    STATE(348), 1,
      aux_sym__qualifying_module,
    STATE(398), 1,
      sym_comment,
    STATE(520), 1,
      sym__modid,
  [18805] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(399), 1,
      sym_comment,
    ACTIONS(1084), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(1086), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [18826] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(550), 1,
      sym__conid,
    STATE(140), 1,
      sym_constructor,
    STATE(348), 1,
      aux_sym__qualifying_module,
    STATE(400), 1,
      sym_comment,
    STATE(520), 1,
      sym__modid,
  [18851] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(32), 1,
      sym__colon2,
    STATE(351), 1,
      sym__type_annotation,
    STATE(401), 1,
      sym_comment,
    ACTIONS(919), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [18874] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(402), 1,
      sym_comment,
    ACTIONS(841), 2,
      sym__newline,
      sym_exl_mark_attribute,
    ACTIONS(843), 2,
      aux_sym_key_value_attribute_token1,
      sym__varid,
  [18895] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(15), 1,
      sym__conid,
    STATE(348), 1,
      aux_sym__qualifying_module,
    STATE(397), 1,
      sym_constructor,
    STATE(403), 1,
      sym_comment,
    STATE(520), 1,
      sym__modid,
  [18920] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(526), 1,
      sym__conid,
    STATE(242), 1,
      sym_constructor,
    STATE(348), 1,
      aux_sym__qualifying_module,
    STATE(404), 1,
      sym_comment,
    STATE(520), 1,
      sym__modid,
  [18945] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1088), 1,
      sym__varid,
    STATE(313), 1,
      aux_sym_natural_key_repeat1,
    STATE(405), 1,
      sym_comment,
    STATE(416), 1,
      sym_variable,
    STATE(417), 1,
      sym__field_name,
  [18970] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(211), 1,
      sym__conid,
    STATE(203), 1,
      sym_constructor,
    STATE(348), 1,
      aux_sym__qualifying_module,
    STATE(406), 1,
      sym_comment,
    STATE(520), 1,
      sym__modid,
  [18995] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(752), 1,
      anon_sym_DOT,
    STATE(407), 1,
      sym_comment,
    ACTIONS(1090), 3,
      sym__dedent,
      anon_sym_deriving,
      sym__conid,
  [19016] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(752), 1,
      anon_sym_DOT,
    STATE(408), 1,
      sym_comment,
    ACTIONS(568), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [19037] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(859), 1,
      sym__conid,
    STATE(348), 1,
      aux_sym__qualifying_module,
    STATE(352), 1,
      sym_constructor,
    STATE(409), 1,
      sym_comment,
    STATE(520), 1,
      sym__modid,
  [19062] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(526), 1,
      sym__conid,
    STATE(348), 1,
      aux_sym__qualifying_module,
    STATE(352), 1,
      sym_constructor,
    STATE(410), 1,
      sym_comment,
    STATE(520), 1,
      sym__modid,
  [19087] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(564), 1,
      sym__conid,
    STATE(247), 1,
      sym_constructor,
    STATE(348), 1,
      aux_sym__qualifying_module,
    STATE(411), 1,
      sym_comment,
    STATE(520), 1,
      sym__modid,
  [19112] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(412), 1,
      sym_comment,
    ACTIONS(592), 4,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
      anon_sym_DOT,
  [19131] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1028), 1,
      sym__varid,
    STATE(359), 1,
      aux_sym_natural_key_repeat1,
    STATE(413), 1,
      sym_comment,
    STATE(464), 1,
      sym_variable,
    STATE(500), 1,
      sym__field_name,
  [19156] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1092), 1,
      anon_sym_deriving,
    ACTIONS(1095), 1,
      sym__dedent,
    STATE(523), 1,
      sym_entity_derives,
    STATE(414), 2,
      sym_comment,
      aux_sym_entity_body_repeat2,
  [19179] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1073), 1,
      anon_sym_deriving,
    ACTIONS(1097), 1,
      sym__dedent,
    STATE(414), 1,
      aux_sym_entity_body_repeat2,
    STATE(415), 1,
      sym_comment,
    STATE(523), 1,
      sym_entity_derives,
  [19204] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(416), 1,
      sym_comment,
    ACTIONS(845), 2,
      sym__newline,
      sym_exl_mark_attribute,
    ACTIONS(847), 2,
      aux_sym_key_value_attribute_token1,
      sym__varid,
  [19225] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(417), 1,
      sym_comment,
    ACTIONS(1099), 2,
      aux_sym_key_value_attribute_token1,
      sym__varid,
    ACTIONS(1101), 2,
      sym__newline,
      sym_exl_mark_attribute,
  [19246] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(418), 1,
      sym_comment,
    ACTIONS(1103), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(1105), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [19267] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(419), 1,
      sym_comment,
    ACTIONS(592), 4,
      sym__dedent,
      anon_sym_deriving,
      anon_sym_DOT,
      sym__conid,
  [19286] = 8,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1088), 1,
      sym__varid,
    STATE(305), 1,
      aux_sym_natural_key_repeat1,
    STATE(416), 1,
      sym_variable,
    STATE(417), 1,
      sym__field_name,
    STATE(420), 1,
      sym_comment,
  [19311] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(421), 1,
      sym_comment,
    ACTIONS(1107), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [19329] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1109), 1,
      sym_comma,
    ACTIONS(1111), 1,
      anon_sym_RBRACK,
    STATE(422), 1,
      sym_comment,
    STATE(469), 1,
      aux_sym_type_list_repeat1,
  [19351] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(423), 1,
      sym_comment,
    ACTIONS(648), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [19369] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(424), 1,
      sym_comment,
    ACTIONS(841), 3,
      sym__newline,
      anon_sym_References,
      sym__varid,
  [19387] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1109), 1,
      sym_comma,
    ACTIONS(1113), 1,
      anon_sym_RBRACK,
    STATE(392), 1,
      aux_sym_type_list_repeat1,
    STATE(425), 1,
      sym_comment,
  [19409] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(426), 1,
      sym_comment,
    ACTIONS(578), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [19427] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1109), 1,
      sym_comma,
    ACTIONS(1115), 1,
      anon_sym_RBRACK,
    STATE(425), 1,
      aux_sym_type_list_repeat1,
    STATE(427), 1,
      sym_comment,
  [19449] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1109), 1,
      sym_comma,
    ACTIONS(1117), 1,
      anon_sym_RBRACK,
    STATE(392), 1,
      aux_sym_type_list_repeat1,
    STATE(428), 1,
      sym_comment,
  [19471] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1119), 1,
      sym_comma,
    ACTIONS(1122), 1,
      anon_sym_RPAREN,
    STATE(429), 2,
      sym_comment,
      aux_sym_con_tuple_repeat1,
  [19491] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1109), 1,
      sym_comma,
    ACTIONS(1124), 1,
      anon_sym_RPAREN,
    STATE(392), 1,
      aux_sym_type_list_repeat1,
    STATE(430), 1,
      sym_comment,
  [19513] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(431), 1,
      sym_comment,
    ACTIONS(1126), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [19531] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(432), 1,
      sym_comment,
    ACTIONS(1128), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [19549] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(21), 1,
      sym_comma,
    ACTIONS(1130), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      aux_sym_con_tuple_repeat1,
    STATE(433), 1,
      sym_comment,
  [19571] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1132), 1,
      sym_comma,
    ACTIONS(1134), 1,
      anon_sym_RPAREN,
    STATE(434), 1,
      sym_comment,
    STATE(475), 1,
      aux_sym__context_constraints_repeat1,
  [19593] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1109), 1,
      sym_comma,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
    STATE(430), 1,
      aux_sym_type_list_repeat1,
    STATE(435), 1,
      sym_comment,
  [19615] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1132), 1,
      sym_comma,
    ACTIONS(1138), 1,
      anon_sym_RPAREN,
    STATE(434), 1,
      aux_sym__context_constraints_repeat1,
    STATE(436), 1,
      sym_comment,
  [19637] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(437), 1,
      sym_comment,
    ACTIONS(1140), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [19655] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(438), 1,
      sym_comment,
    ACTIONS(1142), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [19673] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(439), 1,
      sym_comment,
    ACTIONS(620), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [19691] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(440), 1,
      sym_comment,
    ACTIONS(1144), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [19709] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1146), 1,
      sym_cascade_action,
    ACTIONS(1148), 1,
      sym__sql_constraint_name,
    STATE(441), 1,
      sym_comment,
    STATE(465), 1,
      aux_sym_foreign_constraint_repeat1,
  [19731] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(442), 1,
      sym_comment,
    ACTIONS(644), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [19749] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(443), 1,
      sym_comment,
    ACTIONS(1150), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [19767] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(444), 1,
      sym_comment,
    ACTIONS(1152), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [19785] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(445), 1,
      sym_comment,
    ACTIONS(1154), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [19803] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(446), 1,
      sym_comment,
    ACTIONS(612), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [19821] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(280), 1,
      sym__arrow,
    STATE(447), 1,
      sym_comment,
    ACTIONS(33), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
  [19841] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(558), 1,
      sym__varid,
    STATE(374), 1,
      sym_type_variable,
    STATE(448), 1,
      sym_comment,
    STATE(560), 1,
      sym_annotated_type_variable,
  [19863] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(558), 1,
      sym__varid,
    STATE(383), 1,
      sym_type_variable,
    STATE(449), 1,
      sym_comment,
    STATE(559), 1,
      sym_annotated_type_variable,
  [19885] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1109), 1,
      sym_comma,
    ACTIONS(1156), 1,
      anon_sym_RBRACK,
    STATE(428), 1,
      aux_sym_type_list_repeat1,
    STATE(450), 1,
      sym_comment,
  [19907] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(21), 1,
      sym_comma,
    ACTIONS(1158), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      aux_sym_con_tuple_repeat1,
    STATE(451), 1,
      sym_comment,
  [19929] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1109), 1,
      sym_comma,
    ACTIONS(1160), 1,
      anon_sym_RPAREN,
    STATE(430), 1,
      aux_sym_type_list_repeat1,
    STATE(452), 1,
      sym_comment,
  [19951] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1109), 1,
      sym_comma,
    ACTIONS(1162), 1,
      anon_sym_RBRACK,
    STATE(392), 1,
      aux_sym_type_list_repeat1,
    STATE(453), 1,
      sym_comment,
  [19973] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(454), 1,
      sym_comment,
    ACTIONS(1164), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [19991] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1109), 1,
      sym_comma,
    ACTIONS(1166), 1,
      anon_sym_RBRACK,
    STATE(453), 1,
      aux_sym_type_list_repeat1,
    STATE(455), 1,
      sym_comment,
  [20013] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(21), 1,
      sym_comma,
    ACTIONS(1168), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      aux_sym_con_tuple_repeat1,
    STATE(456), 1,
      sym_comment,
  [20035] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(457), 1,
      sym_comment,
    ACTIONS(1170), 3,
      sym__dedent,
      anon_sym_deriving,
      sym__conid,
  [20053] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1146), 1,
      sym_cascade_action,
    ACTIONS(1172), 1,
      sym__sql_constraint_name,
    STATE(441), 1,
      aux_sym_foreign_constraint_repeat1,
    STATE(458), 1,
      sym_comment,
  [20075] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(459), 1,
      sym_comment,
    ACTIONS(1174), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [20093] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(460), 1,
      sym_comment,
    ACTIONS(1176), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [20111] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(461), 1,
      sym_comment,
    ACTIONS(1178), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [20129] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(462), 1,
      sym_comment,
    ACTIONS(1180), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [20147] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(463), 1,
      sym_comment,
    ACTIONS(664), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [20165] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(464), 1,
      sym_comment,
    ACTIONS(845), 3,
      sym__newline,
      anon_sym_References,
      sym__varid,
  [20183] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1182), 1,
      sym_cascade_action,
    ACTIONS(1185), 1,
      sym__sql_constraint_name,
    STATE(465), 2,
      sym_comment,
      aux_sym_foreign_constraint_repeat1,
  [20203] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1109), 1,
      sym_comma,
    ACTIONS(1187), 1,
      anon_sym_RPAREN,
    STATE(430), 1,
      aux_sym_type_list_repeat1,
    STATE(466), 1,
      sym_comment,
  [20225] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(284), 1,
      sym__carrow,
    STATE(467), 1,
      sym_comment,
    ACTIONS(1189), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [20245] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(468), 1,
      sym_comment,
    ACTIONS(668), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [20263] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1109), 1,
      sym_comma,
    ACTIONS(1191), 1,
      anon_sym_RBRACK,
    STATE(392), 1,
      aux_sym_type_list_repeat1,
    STATE(469), 1,
      sym_comment,
  [20285] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(470), 1,
      sym_comment,
    ACTIONS(640), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [20303] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(471), 1,
      sym_comment,
    ACTIONS(592), 3,
      sym_cascade_action,
      sym__sql_constraint_name,
      anon_sym_DOT,
  [20321] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(472), 1,
      sym_comment,
    ACTIONS(1193), 3,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [20339] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(21), 1,
      sym_comma,
    ACTIONS(1195), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      aux_sym_con_tuple_repeat1,
    STATE(473), 1,
      sym_comment,
  [20361] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1109), 1,
      sym_comma,
    ACTIONS(1197), 1,
      anon_sym_RPAREN,
    STATE(430), 1,
      aux_sym_type_list_repeat1,
    STATE(474), 1,
      sym_comment,
  [20383] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1199), 1,
      sym_comma,
    ACTIONS(1202), 1,
      anon_sym_RPAREN,
    STATE(475), 2,
      sym_comment,
      aux_sym__context_constraints_repeat1,
  [20403] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(476), 1,
      sym_comment,
    ACTIONS(628), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [20421] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(477), 1,
      sym_comment,
    ACTIONS(1082), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [20439] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(478), 1,
      sym_comment,
    ACTIONS(608), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [20457] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(479), 1,
      sym_comment,
    ACTIONS(636), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [20475] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(480), 1,
      sym_comment,
    ACTIONS(600), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [20493] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1132), 1,
      sym_comma,
    ACTIONS(1204), 1,
      anon_sym_RPAREN,
    STATE(434), 1,
      aux_sym__context_constraints_repeat1,
    STATE(481), 1,
      sym_comment,
  [20515] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1109), 1,
      sym_comma,
    ACTIONS(1206), 1,
      anon_sym_RBRACK,
    STATE(392), 1,
      aux_sym_type_list_repeat1,
    STATE(482), 1,
      sym_comment,
  [20537] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(483), 1,
      sym_comment,
    ACTIONS(1208), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [20555] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(484), 1,
      sym_comment,
    ACTIONS(652), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [20573] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1109), 1,
      sym_comma,
    ACTIONS(1210), 1,
      anon_sym_RBRACK,
    STATE(482), 1,
      aux_sym_type_list_repeat1,
    STATE(485), 1,
      sym_comment,
  [20595] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1109), 1,
      sym_comma,
    ACTIONS(1212), 1,
      anon_sym_RPAREN,
    STATE(430), 1,
      aux_sym_type_list_repeat1,
    STATE(486), 1,
      sym_comment,
  [20617] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(21), 1,
      sym_comma,
    ACTIONS(1214), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      aux_sym_con_tuple_repeat1,
    STATE(487), 1,
      sym_comment,
  [20639] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1109), 1,
      sym_comma,
    ACTIONS(1216), 1,
      anon_sym_RBRACK,
    STATE(488), 1,
      sym_comment,
    STATE(491), 1,
      aux_sym_type_list_repeat1,
  [20661] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(21), 1,
      sym_comma,
    ACTIONS(1218), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      aux_sym_con_tuple_repeat1,
    STATE(489), 1,
      sym_comment,
  [20683] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(490), 1,
      sym_comment,
    ACTIONS(680), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [20701] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1109), 1,
      sym_comma,
    ACTIONS(1220), 1,
      anon_sym_RBRACK,
    STATE(392), 1,
      aux_sym_type_list_repeat1,
    STATE(491), 1,
      sym_comment,
  [20723] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(492), 1,
      sym_comment,
    ACTIONS(656), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [20741] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1222), 1,
      sym__varid,
    STATE(72), 1,
      sym__field_name,
    STATE(297), 1,
      sym_variable,
    STATE(493), 1,
      sym_comment,
  [20763] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(494), 1,
      sym_comment,
    ACTIONS(604), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [20781] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(495), 1,
      sym_comment,
    ACTIONS(672), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [20799] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1109), 1,
      sym_comma,
    ACTIONS(1224), 1,
      anon_sym_RPAREN,
    STATE(430), 1,
      aux_sym_type_list_repeat1,
    STATE(496), 1,
      sym_comment,
  [20821] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(497), 1,
      sym_comment,
    ACTIONS(1226), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [20839] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1230), 1,
      sym__tyconsym,
    STATE(498), 1,
      sym_comment,
    ACTIONS(1228), 2,
      sym__consym,
      sym__conid,
  [20859] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1003), 1,
      sym__tyconsym,
    STATE(499), 1,
      sym_comment,
    ACTIONS(1001), 2,
      sym__consym,
      sym__conid,
  [20879] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(500), 1,
      sym_comment,
    ACTIONS(1101), 3,
      sym__newline,
      anon_sym_References,
      sym__varid,
  [20897] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(501), 1,
      sym_comment,
    ACTIONS(632), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [20915] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(502), 1,
      sym_comment,
    ACTIONS(624), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [20933] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1109), 1,
      sym_comma,
    ACTIONS(1232), 1,
      anon_sym_RBRACK,
    STATE(392), 1,
      aux_sym_type_list_repeat1,
    STATE(503), 1,
      sym_comment,
  [20955] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1109), 1,
      sym_comma,
    ACTIONS(1234), 1,
      anon_sym_RPAREN,
    STATE(430), 1,
      aux_sym_type_list_repeat1,
    STATE(504), 1,
      sym_comment,
  [20977] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(21), 1,
      sym_comma,
    ACTIONS(1236), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      aux_sym_con_tuple_repeat1,
    STATE(505), 1,
      sym_comment,
  [20999] = 7,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1109), 1,
      sym_comma,
    ACTIONS(1238), 1,
      anon_sym_RBRACK,
    STATE(503), 1,
      aux_sym_type_list_repeat1,
    STATE(506), 1,
      sym_comment,
  [21021] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(507), 1,
      sym_comment,
    ACTIONS(228), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [21039] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(508), 1,
      sym_comment,
    ACTIONS(660), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [21057] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(509), 1,
      sym_comment,
    ACTIONS(1240), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [21074] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(510), 1,
      sym_comment,
    ACTIONS(1242), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [21091] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(752), 1,
      anon_sym_DOT,
    ACTIONS(1244), 1,
      anon_sym_BQUOTE,
    STATE(511), 1,
      sym_comment,
  [21110] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(512), 1,
      sym_comment,
    ACTIONS(664), 2,
      sym_cascade_action,
      sym__sql_constraint_name,
  [21127] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(513), 1,
      sym_comment,
    ACTIONS(632), 2,
      sym_cascade_action,
      sym__sql_constraint_name,
  [21144] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(514), 1,
      sym_comment,
    ACTIONS(624), 2,
      sym_cascade_action,
      sym__sql_constraint_name,
  [21161] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(515), 1,
      sym_comment,
    ACTIONS(608), 2,
      sym_cascade_action,
      sym__sql_constraint_name,
  [21178] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(516), 1,
      sym_comment,
    ACTIONS(578), 2,
      sym_cascade_action,
      sym__sql_constraint_name,
  [21195] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1109), 1,
      sym_comma,
    STATE(430), 1,
      aux_sym_type_list_repeat1,
    STATE(517), 1,
      sym_comment,
  [21214] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(518), 1,
      sym_comment,
    ACTIONS(1246), 2,
      sym_comma,
      anon_sym_RPAREN,
  [21231] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(519), 1,
      sym_comment,
    ACTIONS(1086), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [21248] = 6,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1248), 1,
      anon_sym_DOT,
    STATE(499), 1,
      sym__dot,
    STATE(520), 1,
      sym_comment,
  [21267] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(521), 1,
      sym_comment,
    ACTIONS(1250), 2,
      sym_cascade_action,
      sym__sql_constraint_name,
  [21284] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(522), 1,
      sym_comment,
    ACTIONS(1103), 2,
      sym_comma,
      anon_sym_RPAREN,
  [21301] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(523), 1,
      sym_comment,
    ACTIONS(1252), 2,
      sym__dedent,
      anon_sym_deriving,
  [21318] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(524), 1,
      sym_comment,
    ACTIONS(1254), 2,
      sym_comma,
      anon_sym_RPAREN,
  [21335] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(525), 1,
      sym_comment,
    ACTIONS(1256), 2,
      sym_comma,
      anon_sym_RPAREN,
  [21352] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(526), 1,
      sym_comment,
    ACTIONS(1202), 2,
      sym_comma,
      anon_sym_RPAREN,
  [21369] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(527), 1,
      sym_comment,
    ACTIONS(1105), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [21386] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(528), 1,
      sym_comment,
    ACTIONS(1164), 2,
      sym_cascade_action,
      sym__sql_constraint_name,
  [21403] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    STATE(529), 1,
      sym_comment,
    ACTIONS(1258), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
  [21420] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
    STATE(530), 1,
      sym_comment,
  [21436] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    STATE(531), 1,
      sym_comment,
  [21452] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1264), 1,
      anon_sym_RPAREN,
    STATE(532), 1,
      sym_comment,
  [21468] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1266), 1,
      anon_sym_RPAREN,
    STATE(533), 1,
      sym_comment,
  [21484] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1268), 1,
      anon_sym_RPAREN,
    STATE(534), 1,
      sym_comment,
  [21500] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1270), 1,
      anon_sym_RPAREN,
    STATE(535), 1,
      sym_comment,
  [21516] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1272), 1,
      anon_sym_RPAREN,
    STATE(536), 1,
      sym_comment,
  [21532] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1274), 1,
      anon_sym_RPAREN,
    STATE(537), 1,
      sym_comment,
  [21548] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1276), 1,
      anon_sym_RPAREN,
    STATE(538), 1,
      sym_comment,
  [21564] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1278), 1,
      anon_sym_RPAREN,
    STATE(539), 1,
      sym_comment,
  [21580] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1280), 1,
      anon_sym_RPAREN,
    STATE(540), 1,
      sym_comment,
  [21596] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(752), 1,
      anon_sym_DOT,
    STATE(541), 1,
      sym_comment,
  [21612] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1282), 1,
      anon_sym_RPAREN,
    STATE(542), 1,
      sym_comment,
  [21628] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1284), 1,
      anon_sym_RPAREN,
    STATE(543), 1,
      sym_comment,
  [21644] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1286), 1,
      anon_sym_RPAREN,
    STATE(544), 1,
      sym_comment,
  [21660] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1288), 1,
      anon_sym_RPAREN,
    STATE(545), 1,
      sym_comment,
  [21676] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
    STATE(546), 1,
      sym_comment,
  [21692] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1292), 1,
      anon_sym_BQUOTE,
    STATE(547), 1,
      sym_comment,
  [21708] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1294), 1,
      sym__varid,
    STATE(548), 1,
      sym_comment,
  [21724] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1296), 1,
      sym__newline,
    STATE(549), 1,
      sym_comment,
  [21740] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
    STATE(550), 1,
      sym_comment,
  [21756] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1300), 1,
      anon_sym_RPAREN,
    STATE(551), 1,
      sym_comment,
  [21772] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1302), 1,
      anon_sym_RPAREN,
    STATE(552), 1,
      sym_comment,
  [21788] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1077), 1,
      anon_sym_EQ,
    STATE(553), 1,
      sym_comment,
  [21804] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1304), 1,
      sym__newline,
    STATE(554), 1,
      sym_comment,
  [21820] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1306), 1,
      anon_sym_RPAREN,
    STATE(555), 1,
      sym_comment,
  [21836] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
    STATE(556), 1,
      sym_comment,
  [21852] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1310), 1,
      sym__dedent,
    STATE(557), 1,
      sym_comment,
  [21868] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1312), 1,
      anon_sym_RPAREN,
    STATE(558), 1,
      sym_comment,
  [21884] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1314), 1,
      anon_sym_RPAREN,
    STATE(559), 1,
      sym_comment,
  [21900] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1067), 1,
      anon_sym_RBRACE,
    STATE(560), 1,
      sym_comment,
  [21916] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
    STATE(561), 1,
      sym_comment,
  [21932] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1318), 1,
      anon_sym_RPAREN,
    STATE(562), 1,
      sym_comment,
  [21948] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1320), 1,
      anon_sym_RPAREN,
    STATE(563), 1,
      sym_comment,
  [21964] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
    STATE(564), 1,
      sym_comment,
  [21980] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1324), 1,
      anon_sym_RPAREN,
    STATE(565), 1,
      sym_comment,
  [21996] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1326), 1,
      anon_sym_RPAREN,
    STATE(566), 1,
      sym_comment,
  [22012] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1328), 1,
      anon_sym_RPAREN,
    STATE(567), 1,
      sym_comment,
  [22028] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1330), 1,
      ts_builtin_sym_end,
    STATE(568), 1,
      sym_comment,
  [22044] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1332), 1,
      anon_sym_RPAREN,
    STATE(569), 1,
      sym_comment,
  [22060] = 5,
    ACTIONS(3), 1,
      sym__doc_comment,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      aux_sym_comment_token2,
    ACTIONS(1334), 1,
      anon_sym_RPAREN,
    STATE(570), 1,
      sym_comment,
  [22076] = 1,
    ACTIONS(1336), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(24)] = 0,
  [SMALL_STATE(25)] = 143,
  [SMALL_STATE(26)] = 286,
  [SMALL_STATE(27)] = 429,
  [SMALL_STATE(28)] = 572,
  [SMALL_STATE(29)] = 715,
  [SMALL_STATE(30)] = 858,
  [SMALL_STATE(31)] = 1001,
  [SMALL_STATE(32)] = 1141,
  [SMALL_STATE(33)] = 1278,
  [SMALL_STATE(34)] = 1415,
  [SMALL_STATE(35)] = 1550,
  [SMALL_STATE(36)] = 1687,
  [SMALL_STATE(37)] = 1798,
  [SMALL_STATE(38)] = 1907,
  [SMALL_STATE(39)] = 2018,
  [SMALL_STATE(40)] = 2128,
  [SMALL_STATE(41)] = 2258,
  [SMALL_STATE(42)] = 2388,
  [SMALL_STATE(43)] = 2498,
  [SMALL_STATE(44)] = 2610,
  [SMALL_STATE(45)] = 2740,
  [SMALL_STATE(46)] = 2868,
  [SMALL_STATE(47)] = 2976,
  [SMALL_STATE(48)] = 3106,
  [SMALL_STATE(49)] = 3236,
  [SMALL_STATE(50)] = 3364,
  [SMALL_STATE(51)] = 3473,
  [SMALL_STATE(52)] = 3582,
  [SMALL_STATE(53)] = 3695,
  [SMALL_STATE(54)] = 3802,
  [SMALL_STATE(55)] = 3913,
  [SMALL_STATE(56)] = 4019,
  [SMALL_STATE(57)] = 4145,
  [SMALL_STATE(58)] = 4253,
  [SMALL_STATE(59)] = 4361,
  [SMALL_STATE(60)] = 4485,
  [SMALL_STATE(61)] = 4590,
  [SMALL_STATE(62)] = 4693,
  [SMALL_STATE(63)] = 4798,
  [SMALL_STATE(64)] = 4904,
  [SMALL_STATE(65)] = 5003,
  [SMALL_STATE(66)] = 5104,
  [SMALL_STATE(67)] = 5205,
  [SMALL_STATE(68)] = 5299,
  [SMALL_STATE(69)] = 5395,
  [SMALL_STATE(70)] = 5494,
  [SMALL_STATE(71)] = 5593,
  [SMALL_STATE(72)] = 5692,
  [SMALL_STATE(73)] = 5782,
  [SMALL_STATE(74)] = 5872,
  [SMALL_STATE(75)] = 5962,
  [SMALL_STATE(76)] = 6049,
  [SMALL_STATE(77)] = 6136,
  [SMALL_STATE(78)] = 6223,
  [SMALL_STATE(79)] = 6310,
  [SMALL_STATE(80)] = 6397,
  [SMALL_STATE(81)] = 6484,
  [SMALL_STATE(82)] = 6571,
  [SMALL_STATE(83)] = 6619,
  [SMALL_STATE(84)] = 6667,
  [SMALL_STATE(85)] = 6721,
  [SMALL_STATE(86)] = 6769,
  [SMALL_STATE(87)] = 6815,
  [SMALL_STATE(88)] = 6860,
  [SMALL_STATE(89)] = 6905,
  [SMALL_STATE(90)] = 6950,
  [SMALL_STATE(91)] = 6995,
  [SMALL_STATE(92)] = 7044,
  [SMALL_STATE(93)] = 7089,
  [SMALL_STATE(94)] = 7134,
  [SMALL_STATE(95)] = 7179,
  [SMALL_STATE(96)] = 7224,
  [SMALL_STATE(97)] = 7269,
  [SMALL_STATE(98)] = 7314,
  [SMALL_STATE(99)] = 7359,
  [SMALL_STATE(100)] = 7404,
  [SMALL_STATE(101)] = 7449,
  [SMALL_STATE(102)] = 7494,
  [SMALL_STATE(103)] = 7539,
  [SMALL_STATE(104)] = 7584,
  [SMALL_STATE(105)] = 7629,
  [SMALL_STATE(106)] = 7674,
  [SMALL_STATE(107)] = 7721,
  [SMALL_STATE(108)] = 7768,
  [SMALL_STATE(109)] = 7813,
  [SMALL_STATE(110)] = 7858,
  [SMALL_STATE(111)] = 7905,
  [SMALL_STATE(112)] = 7950,
  [SMALL_STATE(113)] = 7995,
  [SMALL_STATE(114)] = 8040,
  [SMALL_STATE(115)] = 8085,
  [SMALL_STATE(116)] = 8133,
  [SMALL_STATE(117)] = 8177,
  [SMALL_STATE(118)] = 8221,
  [SMALL_STATE(119)] = 8265,
  [SMALL_STATE(120)] = 8309,
  [SMALL_STATE(121)] = 8353,
  [SMALL_STATE(122)] = 8397,
  [SMALL_STATE(123)] = 8467,
  [SMALL_STATE(124)] = 8511,
  [SMALL_STATE(125)] = 8555,
  [SMALL_STATE(126)] = 8599,
  [SMALL_STATE(127)] = 8643,
  [SMALL_STATE(128)] = 8687,
  [SMALL_STATE(129)] = 8731,
  [SMALL_STATE(130)] = 8775,
  [SMALL_STATE(131)] = 8819,
  [SMALL_STATE(132)] = 8865,
  [SMALL_STATE(133)] = 8909,
  [SMALL_STATE(134)] = 8953,
  [SMALL_STATE(135)] = 8997,
  [SMALL_STATE(136)] = 9043,
  [SMALL_STATE(137)] = 9087,
  [SMALL_STATE(138)] = 9131,
  [SMALL_STATE(139)] = 9175,
  [SMALL_STATE(140)] = 9219,
  [SMALL_STATE(141)] = 9265,
  [SMALL_STATE(142)] = 9309,
  [SMALL_STATE(143)] = 9353,
  [SMALL_STATE(144)] = 9397,
  [SMALL_STATE(145)] = 9440,
  [SMALL_STATE(146)] = 9483,
  [SMALL_STATE(147)] = 9526,
  [SMALL_STATE(148)] = 9569,
  [SMALL_STATE(149)] = 9612,
  [SMALL_STATE(150)] = 9655,
  [SMALL_STATE(151)] = 9698,
  [SMALL_STATE(152)] = 9741,
  [SMALL_STATE(153)] = 9784,
  [SMALL_STATE(154)] = 9829,
  [SMALL_STATE(155)] = 9872,
  [SMALL_STATE(156)] = 9915,
  [SMALL_STATE(157)] = 9958,
  [SMALL_STATE(158)] = 10001,
  [SMALL_STATE(159)] = 10046,
  [SMALL_STATE(160)] = 10089,
  [SMALL_STATE(161)] = 10132,
  [SMALL_STATE(162)] = 10175,
  [SMALL_STATE(163)] = 10218,
  [SMALL_STATE(164)] = 10263,
  [SMALL_STATE(165)] = 10306,
  [SMALL_STATE(166)] = 10349,
  [SMALL_STATE(167)] = 10392,
  [SMALL_STATE(168)] = 10435,
  [SMALL_STATE(169)] = 10504,
  [SMALL_STATE(170)] = 10547,
  [SMALL_STATE(171)] = 10590,
  [SMALL_STATE(172)] = 10633,
  [SMALL_STATE(173)] = 10675,
  [SMALL_STATE(174)] = 10717,
  [SMALL_STATE(175)] = 10785,
  [SMALL_STATE(176)] = 10827,
  [SMALL_STATE(177)] = 10869,
  [SMALL_STATE(178)] = 10911,
  [SMALL_STATE(179)] = 10953,
  [SMALL_STATE(180)] = 10995,
  [SMALL_STATE(181)] = 11037,
  [SMALL_STATE(182)] = 11079,
  [SMALL_STATE(183)] = 11121,
  [SMALL_STATE(184)] = 11163,
  [SMALL_STATE(185)] = 11205,
  [SMALL_STATE(186)] = 11247,
  [SMALL_STATE(187)] = 11289,
  [SMALL_STATE(188)] = 11331,
  [SMALL_STATE(189)] = 11373,
  [SMALL_STATE(190)] = 11415,
  [SMALL_STATE(191)] = 11457,
  [SMALL_STATE(192)] = 11499,
  [SMALL_STATE(193)] = 11541,
  [SMALL_STATE(194)] = 11583,
  [SMALL_STATE(195)] = 11625,
  [SMALL_STATE(196)] = 11667,
  [SMALL_STATE(197)] = 11734,
  [SMALL_STATE(198)] = 11776,
  [SMALL_STATE(199)] = 11818,
  [SMALL_STATE(200)] = 11882,
  [SMALL_STATE(201)] = 11946,
  [SMALL_STATE(202)] = 12010,
  [SMALL_STATE(203)] = 12074,
  [SMALL_STATE(204)] = 12116,
  [SMALL_STATE(205)] = 12180,
  [SMALL_STATE(206)] = 12244,
  [SMALL_STATE(207)] = 12308,
  [SMALL_STATE(208)] = 12372,
  [SMALL_STATE(209)] = 12436,
  [SMALL_STATE(210)] = 12500,
  [SMALL_STATE(211)] = 12564,
  [SMALL_STATE(212)] = 12628,
  [SMALL_STATE(213)] = 12668,
  [SMALL_STATE(214)] = 12707,
  [SMALL_STATE(215)] = 12746,
  [SMALL_STATE(216)] = 12785,
  [SMALL_STATE(217)] = 12824,
  [SMALL_STATE(218)] = 12863,
  [SMALL_STATE(219)] = 12902,
  [SMALL_STATE(220)] = 12941,
  [SMALL_STATE(221)] = 12980,
  [SMALL_STATE(222)] = 13019,
  [SMALL_STATE(223)] = 13058,
  [SMALL_STATE(224)] = 13129,
  [SMALL_STATE(225)] = 13168,
  [SMALL_STATE(226)] = 13207,
  [SMALL_STATE(227)] = 13246,
  [SMALL_STATE(228)] = 13285,
  [SMALL_STATE(229)] = 13356,
  [SMALL_STATE(230)] = 13395,
  [SMALL_STATE(231)] = 13434,
  [SMALL_STATE(232)] = 13473,
  [SMALL_STATE(233)] = 13512,
  [SMALL_STATE(234)] = 13551,
  [SMALL_STATE(235)] = 13590,
  [SMALL_STATE(236)] = 13629,
  [SMALL_STATE(237)] = 13668,
  [SMALL_STATE(238)] = 13707,
  [SMALL_STATE(239)] = 13746,
  [SMALL_STATE(240)] = 13810,
  [SMALL_STATE(241)] = 13851,
  [SMALL_STATE(242)] = 13914,
  [SMALL_STATE(243)] = 13952,
  [SMALL_STATE(244)] = 13990,
  [SMALL_STATE(245)] = 14026,
  [SMALL_STATE(246)] = 14064,
  [SMALL_STATE(247)] = 14102,
  [SMALL_STATE(248)] = 14140,
  [SMALL_STATE(249)] = 14178,
  [SMALL_STATE(250)] = 14213,
  [SMALL_STATE(251)] = 14248,
  [SMALL_STATE(252)] = 14283,
  [SMALL_STATE(253)] = 14318,
  [SMALL_STATE(254)] = 14353,
  [SMALL_STATE(255)] = 14388,
  [SMALL_STATE(256)] = 14423,
  [SMALL_STATE(257)] = 14458,
  [SMALL_STATE(258)] = 14493,
  [SMALL_STATE(259)] = 14528,
  [SMALL_STATE(260)] = 14563,
  [SMALL_STATE(261)] = 14598,
  [SMALL_STATE(262)] = 14633,
  [SMALL_STATE(263)] = 14668,
  [SMALL_STATE(264)] = 14703,
  [SMALL_STATE(265)] = 14738,
  [SMALL_STATE(266)] = 14773,
  [SMALL_STATE(267)] = 14832,
  [SMALL_STATE(268)] = 14867,
  [SMALL_STATE(269)] = 14902,
  [SMALL_STATE(270)] = 14937,
  [SMALL_STATE(271)] = 14972,
  [SMALL_STATE(272)] = 15007,
  [SMALL_STATE(273)] = 15042,
  [SMALL_STATE(274)] = 15101,
  [SMALL_STATE(275)] = 15136,
  [SMALL_STATE(276)] = 15194,
  [SMALL_STATE(277)] = 15252,
  [SMALL_STATE(278)] = 15308,
  [SMALL_STATE(279)] = 15342,
  [SMALL_STATE(280)] = 15376,
  [SMALL_STATE(281)] = 15409,
  [SMALL_STATE(282)] = 15442,
  [SMALL_STATE(283)] = 15475,
  [SMALL_STATE(284)] = 15508,
  [SMALL_STATE(285)] = 15541,
  [SMALL_STATE(286)] = 15573,
  [SMALL_STATE(287)] = 15605,
  [SMALL_STATE(288)] = 15637,
  [SMALL_STATE(289)] = 15669,
  [SMALL_STATE(290)] = 15701,
  [SMALL_STATE(291)] = 15733,
  [SMALL_STATE(292)] = 15764,
  [SMALL_STATE(293)] = 15795,
  [SMALL_STATE(294)] = 15844,
  [SMALL_STATE(295)] = 15875,
  [SMALL_STATE(296)] = 15906,
  [SMALL_STATE(297)] = 15937,
  [SMALL_STATE(298)] = 15968,
  [SMALL_STATE(299)] = 15999,
  [SMALL_STATE(300)] = 16030,
  [SMALL_STATE(301)] = 16060,
  [SMALL_STATE(302)] = 16102,
  [SMALL_STATE(303)] = 16148,
  [SMALL_STATE(304)] = 16194,
  [SMALL_STATE(305)] = 16223,
  [SMALL_STATE(306)] = 16270,
  [SMALL_STATE(307)] = 16312,
  [SMALL_STATE(308)] = 16340,
  [SMALL_STATE(309)] = 16382,
  [SMALL_STATE(310)] = 16408,
  [SMALL_STATE(311)] = 16444,
  [SMALL_STATE(312)] = 16470,
  [SMALL_STATE(313)] = 16505,
  [SMALL_STATE(314)] = 16548,
  [SMALL_STATE(315)] = 16585,
  [SMALL_STATE(316)] = 16620,
  [SMALL_STATE(317)] = 16648,
  [SMALL_STATE(318)] = 16674,
  [SMALL_STATE(319)] = 16699,
  [SMALL_STATE(320)] = 16734,
  [SMALL_STATE(321)] = 16769,
  [SMALL_STATE(322)] = 16800,
  [SMALL_STATE(323)] = 16833,
  [SMALL_STATE(324)] = 16866,
  [SMALL_STATE(325)] = 16901,
  [SMALL_STATE(326)] = 16926,
  [SMALL_STATE(327)] = 16961,
  [SMALL_STATE(328)] = 16991,
  [SMALL_STATE(329)] = 17023,
  [SMALL_STATE(330)] = 17045,
  [SMALL_STATE(331)] = 17079,
  [SMALL_STATE(332)] = 17111,
  [SMALL_STATE(333)] = 17133,
  [SMALL_STATE(334)] = 17165,
  [SMALL_STATE(335)] = 17199,
  [SMALL_STATE(336)] = 17221,
  [SMALL_STATE(337)] = 17251,
  [SMALL_STATE(338)] = 17283,
  [SMALL_STATE(339)] = 17305,
  [SMALL_STATE(340)] = 17337,
  [SMALL_STATE(341)] = 17369,
  [SMALL_STATE(342)] = 17393,
  [SMALL_STATE(343)] = 17425,
  [SMALL_STATE(344)] = 17455,
  [SMALL_STATE(345)] = 17487,
  [SMALL_STATE(346)] = 17519,
  [SMALL_STATE(347)] = 17541,
  [SMALL_STATE(348)] = 17562,
  [SMALL_STATE(349)] = 17591,
  [SMALL_STATE(350)] = 17612,
  [SMALL_STATE(351)] = 17633,
  [SMALL_STATE(352)] = 17654,
  [SMALL_STATE(353)] = 17677,
  [SMALL_STATE(354)] = 17708,
  [SMALL_STATE(355)] = 17729,
  [SMALL_STATE(356)] = 17750,
  [SMALL_STATE(357)] = 17771,
  [SMALL_STATE(358)] = 17802,
  [SMALL_STATE(359)] = 17823,
  [SMALL_STATE(360)] = 17854,
  [SMALL_STATE(361)] = 17875,
  [SMALL_STATE(362)] = 17904,
  [SMALL_STATE(363)] = 17925,
  [SMALL_STATE(364)] = 17946,
  [SMALL_STATE(365)] = 17967,
  [SMALL_STATE(366)] = 17988,
  [SMALL_STATE(367)] = 18009,
  [SMALL_STATE(368)] = 18036,
  [SMALL_STATE(369)] = 18067,
  [SMALL_STATE(370)] = 18098,
  [SMALL_STATE(371)] = 18129,
  [SMALL_STATE(372)] = 18157,
  [SMALL_STATE(373)] = 18179,
  [SMALL_STATE(374)] = 18205,
  [SMALL_STATE(375)] = 18231,
  [SMALL_STATE(376)] = 18257,
  [SMALL_STATE(377)] = 18279,
  [SMALL_STATE(378)] = 18301,
  [SMALL_STATE(379)] = 18327,
  [SMALL_STATE(380)] = 18353,
  [SMALL_STATE(381)] = 18381,
  [SMALL_STATE(382)] = 18407,
  [SMALL_STATE(383)] = 18435,
  [SMALL_STATE(384)] = 18458,
  [SMALL_STATE(385)] = 18483,
  [SMALL_STATE(386)] = 18508,
  [SMALL_STATE(387)] = 18533,
  [SMALL_STATE(388)] = 18558,
  [SMALL_STATE(389)] = 18579,
  [SMALL_STATE(390)] = 18604,
  [SMALL_STATE(391)] = 18629,
  [SMALL_STATE(392)] = 18650,
  [SMALL_STATE(393)] = 18671,
  [SMALL_STATE(394)] = 18694,
  [SMALL_STATE(395)] = 18715,
  [SMALL_STATE(396)] = 18734,
  [SMALL_STATE(397)] = 18759,
  [SMALL_STATE(398)] = 18780,
  [SMALL_STATE(399)] = 18805,
  [SMALL_STATE(400)] = 18826,
  [SMALL_STATE(401)] = 18851,
  [SMALL_STATE(402)] = 18874,
  [SMALL_STATE(403)] = 18895,
  [SMALL_STATE(404)] = 18920,
  [SMALL_STATE(405)] = 18945,
  [SMALL_STATE(406)] = 18970,
  [SMALL_STATE(407)] = 18995,
  [SMALL_STATE(408)] = 19016,
  [SMALL_STATE(409)] = 19037,
  [SMALL_STATE(410)] = 19062,
  [SMALL_STATE(411)] = 19087,
  [SMALL_STATE(412)] = 19112,
  [SMALL_STATE(413)] = 19131,
  [SMALL_STATE(414)] = 19156,
  [SMALL_STATE(415)] = 19179,
  [SMALL_STATE(416)] = 19204,
  [SMALL_STATE(417)] = 19225,
  [SMALL_STATE(418)] = 19246,
  [SMALL_STATE(419)] = 19267,
  [SMALL_STATE(420)] = 19286,
  [SMALL_STATE(421)] = 19311,
  [SMALL_STATE(422)] = 19329,
  [SMALL_STATE(423)] = 19351,
  [SMALL_STATE(424)] = 19369,
  [SMALL_STATE(425)] = 19387,
  [SMALL_STATE(426)] = 19409,
  [SMALL_STATE(427)] = 19427,
  [SMALL_STATE(428)] = 19449,
  [SMALL_STATE(429)] = 19471,
  [SMALL_STATE(430)] = 19491,
  [SMALL_STATE(431)] = 19513,
  [SMALL_STATE(432)] = 19531,
  [SMALL_STATE(433)] = 19549,
  [SMALL_STATE(434)] = 19571,
  [SMALL_STATE(435)] = 19593,
  [SMALL_STATE(436)] = 19615,
  [SMALL_STATE(437)] = 19637,
  [SMALL_STATE(438)] = 19655,
  [SMALL_STATE(439)] = 19673,
  [SMALL_STATE(440)] = 19691,
  [SMALL_STATE(441)] = 19709,
  [SMALL_STATE(442)] = 19731,
  [SMALL_STATE(443)] = 19749,
  [SMALL_STATE(444)] = 19767,
  [SMALL_STATE(445)] = 19785,
  [SMALL_STATE(446)] = 19803,
  [SMALL_STATE(447)] = 19821,
  [SMALL_STATE(448)] = 19841,
  [SMALL_STATE(449)] = 19863,
  [SMALL_STATE(450)] = 19885,
  [SMALL_STATE(451)] = 19907,
  [SMALL_STATE(452)] = 19929,
  [SMALL_STATE(453)] = 19951,
  [SMALL_STATE(454)] = 19973,
  [SMALL_STATE(455)] = 19991,
  [SMALL_STATE(456)] = 20013,
  [SMALL_STATE(457)] = 20035,
  [SMALL_STATE(458)] = 20053,
  [SMALL_STATE(459)] = 20075,
  [SMALL_STATE(460)] = 20093,
  [SMALL_STATE(461)] = 20111,
  [SMALL_STATE(462)] = 20129,
  [SMALL_STATE(463)] = 20147,
  [SMALL_STATE(464)] = 20165,
  [SMALL_STATE(465)] = 20183,
  [SMALL_STATE(466)] = 20203,
  [SMALL_STATE(467)] = 20225,
  [SMALL_STATE(468)] = 20245,
  [SMALL_STATE(469)] = 20263,
  [SMALL_STATE(470)] = 20285,
  [SMALL_STATE(471)] = 20303,
  [SMALL_STATE(472)] = 20321,
  [SMALL_STATE(473)] = 20339,
  [SMALL_STATE(474)] = 20361,
  [SMALL_STATE(475)] = 20383,
  [SMALL_STATE(476)] = 20403,
  [SMALL_STATE(477)] = 20421,
  [SMALL_STATE(478)] = 20439,
  [SMALL_STATE(479)] = 20457,
  [SMALL_STATE(480)] = 20475,
  [SMALL_STATE(481)] = 20493,
  [SMALL_STATE(482)] = 20515,
  [SMALL_STATE(483)] = 20537,
  [SMALL_STATE(484)] = 20555,
  [SMALL_STATE(485)] = 20573,
  [SMALL_STATE(486)] = 20595,
  [SMALL_STATE(487)] = 20617,
  [SMALL_STATE(488)] = 20639,
  [SMALL_STATE(489)] = 20661,
  [SMALL_STATE(490)] = 20683,
  [SMALL_STATE(491)] = 20701,
  [SMALL_STATE(492)] = 20723,
  [SMALL_STATE(493)] = 20741,
  [SMALL_STATE(494)] = 20763,
  [SMALL_STATE(495)] = 20781,
  [SMALL_STATE(496)] = 20799,
  [SMALL_STATE(497)] = 20821,
  [SMALL_STATE(498)] = 20839,
  [SMALL_STATE(499)] = 20859,
  [SMALL_STATE(500)] = 20879,
  [SMALL_STATE(501)] = 20897,
  [SMALL_STATE(502)] = 20915,
  [SMALL_STATE(503)] = 20933,
  [SMALL_STATE(504)] = 20955,
  [SMALL_STATE(505)] = 20977,
  [SMALL_STATE(506)] = 20999,
  [SMALL_STATE(507)] = 21021,
  [SMALL_STATE(508)] = 21039,
  [SMALL_STATE(509)] = 21057,
  [SMALL_STATE(510)] = 21074,
  [SMALL_STATE(511)] = 21091,
  [SMALL_STATE(512)] = 21110,
  [SMALL_STATE(513)] = 21127,
  [SMALL_STATE(514)] = 21144,
  [SMALL_STATE(515)] = 21161,
  [SMALL_STATE(516)] = 21178,
  [SMALL_STATE(517)] = 21195,
  [SMALL_STATE(518)] = 21214,
  [SMALL_STATE(519)] = 21231,
  [SMALL_STATE(520)] = 21248,
  [SMALL_STATE(521)] = 21267,
  [SMALL_STATE(522)] = 21284,
  [SMALL_STATE(523)] = 21301,
  [SMALL_STATE(524)] = 21318,
  [SMALL_STATE(525)] = 21335,
  [SMALL_STATE(526)] = 21352,
  [SMALL_STATE(527)] = 21369,
  [SMALL_STATE(528)] = 21386,
  [SMALL_STATE(529)] = 21403,
  [SMALL_STATE(530)] = 21420,
  [SMALL_STATE(531)] = 21436,
  [SMALL_STATE(532)] = 21452,
  [SMALL_STATE(533)] = 21468,
  [SMALL_STATE(534)] = 21484,
  [SMALL_STATE(535)] = 21500,
  [SMALL_STATE(536)] = 21516,
  [SMALL_STATE(537)] = 21532,
  [SMALL_STATE(538)] = 21548,
  [SMALL_STATE(539)] = 21564,
  [SMALL_STATE(540)] = 21580,
  [SMALL_STATE(541)] = 21596,
  [SMALL_STATE(542)] = 21612,
  [SMALL_STATE(543)] = 21628,
  [SMALL_STATE(544)] = 21644,
  [SMALL_STATE(545)] = 21660,
  [SMALL_STATE(546)] = 21676,
  [SMALL_STATE(547)] = 21692,
  [SMALL_STATE(548)] = 21708,
  [SMALL_STATE(549)] = 21724,
  [SMALL_STATE(550)] = 21740,
  [SMALL_STATE(551)] = 21756,
  [SMALL_STATE(552)] = 21772,
  [SMALL_STATE(553)] = 21788,
  [SMALL_STATE(554)] = 21804,
  [SMALL_STATE(555)] = 21820,
  [SMALL_STATE(556)] = 21836,
  [SMALL_STATE(557)] = 21852,
  [SMALL_STATE(558)] = 21868,
  [SMALL_STATE(559)] = 21884,
  [SMALL_STATE(560)] = 21900,
  [SMALL_STATE(561)] = 21916,
  [SMALL_STATE(562)] = 21932,
  [SMALL_STATE(563)] = 21948,
  [SMALL_STATE(564)] = 21964,
  [SMALL_STATE(565)] = 21980,
  [SMALL_STATE(566)] = 21996,
  [SMALL_STATE(567)] = 22012,
  [SMALL_STATE(568)] = 22028,
  [SMALL_STATE(569)] = 22044,
  [SMALL_STATE(570)] = 22060,
  [SMALL_STATE(571)] = 22076,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quotation, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__btype, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__btype, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(86),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(205),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(101),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(102),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(114),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(114),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(11),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(86),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(26),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(205),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(104),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(78),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_apply, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_apply, 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(86),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(205),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(103),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(200),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(103),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(200),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(141),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atype, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atype, 1),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(116),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__atype, 1), SHIFT(129),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(129),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 8),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 1, .production_id = 8),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(10),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(231),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(30),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__atype, 1), SHIFT(202),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(126),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(141),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(116),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(129),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(129),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(10),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(103),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(30),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(200),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(126),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(77),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(120),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(209),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(120),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(209),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), REDUCE(sym_constraint, 1, .production_id = 8),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(166),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(148),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(149),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(149),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(6),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(120),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(24),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(209),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(156),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(75),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(192),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(189),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(188),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(188),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(7),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(164),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(27),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(201),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(172),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(76),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(164),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(201),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(164),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(201),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(212),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(207),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(229),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(219),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(213),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(213),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(9),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(212),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(28),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(207),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(224),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(80),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(212),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(207),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(274),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(263),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(250),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(250),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(13),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(244),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(25),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(210),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(259),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(81),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(244),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(210),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(244),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(210),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(141),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2),
  [500] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(116),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(129),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(129),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(10),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(231),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(30),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(202),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(126),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 2, .production_id = 8),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__modid, 1, .production_id = 2),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tycon, 2, .production_id = 4),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tycon, 2, .production_id = 4),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_name, 1), SHIFT(278),
  [585] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_name, 1), SHIFT(278),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type, 2, .production_id = 4),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type, 2, .production_id = 4),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor, 1),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor, 1),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_invisible, 2),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_invisible, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con_list, 2),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con_list, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_literal, 1),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_literal, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tycon, 2),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tycon, 2),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con_unit, 2),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con_unit, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 2),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__context_constraints, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 4),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_list, 4),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tycon_arrow, 3),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tycon_arrow, 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_tuple, 3),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_tuple, 3),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_promoted_literal, 2),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_promoted_literal, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parens, 3),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parens, 3),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 3),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_list, 3),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variable, 1),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variable, 1),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_star, 1),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_star, 1),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_literal, 1),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_literal, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tycon, 4),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tycon, 4),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con_tuple, 3),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con_tuple, 3),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_promotable_literal, 1),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_promotable_literal, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 1),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 1),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_infix, 1),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_infix, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 1),
  [730] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(296),
  [733] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(73),
  [736] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(420),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(493),
  [742] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(302),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [747] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(231),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modid, 1, .production_id = 2),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 1),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 1),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(423),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(303),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(275),
  [769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(412),
  [772] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(353),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quotation, 1),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__colon2, 1),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__colon2, 1),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__arrow, 1),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arrow, 1),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fun_arrow, 2),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fun_arrow, 2),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__forall_dot, 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forall_dot, 1),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fun_arrow, 1),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fun_arrow, 1),
  [797] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__carrow, 1),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__carrow, 1),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__context, 2),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context, 2),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_operator, 1),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_operator, 1),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qualified_type_operator, 1),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__qualified_type_operator, 1),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_constructor_operator, 2),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_constructor_operator, 2),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_operator, 1),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_operator, 1),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type_operator, 2),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type_operator, 2),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qtyconop, 1),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__qtyconop, 1),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qtyconops, 1),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__qtyconops, 1),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ticked_qtycon, 3, .production_id = 4),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ticked_qtycon, 3, .production_id = 4),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tyconop, 2),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tyconop, 2),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_name, 1),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_name, 1),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ticked_qtycon, 3),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ticked_qtycon, 3),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [855] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_key, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_infix, 3, .production_id = 21),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 2),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forall, 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2), SHIFT_REPEAT(363),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2),
  [898] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2), SHIFT_REPEAT(449),
  [901] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2), SHIFT_REPEAT(448),
  [904] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_infix, 1), REDUCE(sym_constraint, 1),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__entity_line_definition, 2),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_line_definition, 2),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_surrogate_key, 3, .production_id = 15),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_surrogate_key, 2, .production_id = 9),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_with_kind, 1),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [921] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_surrogate_key_repeat1, 2), SHIFT_REPEAT(391),
  [924] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_surrogate_key_repeat1, 2), SHIFT_REPEAT(445),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_surrogate_key_repeat1, 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_derives_repeat1, 2, .production_id = 18),
  [931] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_derives_repeat1, 2, .production_id = 18), SHIFT_REPEAT(419),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_key, 3, .production_id = 16),
  [936] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 1),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 1),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_derives, 2, .production_id = 13),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [944] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(391),
  [947] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(445),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 3, .production_id = 6),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 2, .production_id = 5),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2, .production_id = 14),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 4, .production_id = 6),
  [968] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_natural_key_repeat1, 2), SHIFT_REPEAT(402),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_natural_key_repeat1, 2),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_natural_key_repeat1, 2),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3, .production_id = 17),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 3, .production_id = 5),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3, .production_id = 19),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 1, .production_id = 1),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [989] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2), SHIFT_REPEAT(391),
  [992] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2), SHIFT_REPEAT(483),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 4, .production_id = 22),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 1),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__qualifying_module, 2),
  [1003] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__qualifying_module, 2),
  [1005] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__qualifying_module, 2), SHIFT_REPEAT(231),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_context, 2),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 4, .production_id = 1),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_param, 2, .production_id = 7),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 1),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_quantifiers, 3),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantifier, 1),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 3, .production_id = 16),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_fun, 3),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 4),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_annotation, 2, .production_id = 9),
  [1036] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unique_constraint_repeat1, 2), SHIFT_REPEAT(553),
  [1039] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unique_constraint_repeat1, 2), SHIFT_REPEAT(438),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unique_constraint_repeat1, 2),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_or_implicit, 1),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantifier, 3),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inferred_type_variable, 3),
  [1050] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_natural_key_repeat1, 2), SHIFT_REPEAT(424),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 5),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 7),
  [1061] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_or_implicit, 1), SHIFT(41),
  [1064] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_or_implicit, 1), SHIFT(519),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 6),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_attribute, 1),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1079] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2), SHIFT_REPEAT(31),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint, 3),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 3),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_derives_repeat1, 1, .production_id = 11),
  [1092] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat2, 2), SHIFT_REPEAT(370),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat2, 2),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 2),
  [1099] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_natural_key_repeat1, 1),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_natural_key_repeat1, 1),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint, 1),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 1),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_attribute_value, 1),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_con_tuple_repeat1, 2), SHIFT_REPEAT(524),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_con_tuple_repeat1, 2),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_tuple, 2),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_with_kind, 2),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kind, 1, .production_id = 20),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unique_constraint_repeat1, 1),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unique_constraint_attribute, 1),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 1),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_attribute, 1),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_surrogate_key_repeat1, 1),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_attribute, 1),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_name, 1),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_derives_repeat1, 1, .production_id = 12),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__persistent_type, 1),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_atribute_value_literal, 1),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_attribute, 3, .production_id = 10),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_atribute_value_other_token, 1),
  [1182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_foreign_constraint_repeat1, 2), SHIFT_REPEAT(521),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_foreign_constraint_repeat1, 2),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forall_kw, 1),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__context_constraints_repeat1, 2), SHIFT_REPEAT(41),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context_constraints_repeat1, 2),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_attribute, 1),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 1),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dot, 1),
  [1230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dot, 1),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 4),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotated_type_variable, 2, .production_id = 7),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_context, 2),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_foreign_constraint_repeat1, 1),
  [1252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat2, 1),
  [1254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_con_tuple_repeat1, 1),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantified_constraint, 3),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__haskell_constraint_name, 1),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_key, 1),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1330] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__varid,
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
