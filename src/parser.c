#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 518
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 178
#define ALIAS_COUNT 6
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 25

enum {
  sym__varid = 1,
  sym_is_sum_marker = 2,
  sym_comment = 3,
  anon_sym_Id = 4,
  anon_sym_Primary = 5,
  aux_sym__key_value_attribute_key_token1 = 6,
  aux_sym__key_value_attribute_value_token1 = 7,
  aux_sym__key_value_attribute_value_token2 = 8,
  sym_exl_mark_attribute = 9,
  sym_other_attribute = 10,
  sym__field_strictness_prefix = 11,
  sym_cascade_action = 12,
  sym_sql_constraint_name = 13,
  anon_sym_Foreign = 14,
  anon_sym_References = 15,
  anon_sym_deriving = 16,
  sym_comma = 17,
  anon_sym_DOT = 18,
  sym__consym = 19,
  sym__tyconsym = 20,
  sym_float = 21,
  sym_char = 22,
  sym_string = 23,
  sym__integer_literal = 24,
  sym__binary_literal = 25,
  sym__octal_literal = 26,
  sym__hex_literal = 27,
  anon_sym_ = 28,
  anon_sym_EQ_GT = 29,
  anon_sym_2 = 30,
  anon_sym_DASH_GT = 31,
  anon_sym_3 = 32,
  anon_sym_LT_DASH = 33,
  anon_sym_4 = 34,
  anon_sym_COLON_COLON = 35,
  sym__immediate_dot = 36,
  sym_label = 37,
  anon_sym_DASH = 38,
  anon_sym_LPAREN = 39,
  anon_sym_RPAREN = 40,
  anon_sym_BQUOTE = 41,
  sym_implicit_parid = 42,
  sym__conid = 43,
  anon_sym_LBRACK = 44,
  anon_sym_RBRACK = 45,
  anon_sym_SQUOTE = 46,
  anon_sym_pattern = 47,
  anon_sym_type = 48,
  anon_sym_hiding = 49,
  anon_sym_import = 50,
  anon_sym_qualified = 51,
  anon_sym_as = 52,
  anon_sym_module = 53,
  anon_sym_LBRACE = 54,
  anon_sym_RBRACE = 55,
  anon_sym_forall = 56,
  anon_sym_5 = 57,
  anon_sym_PIPE = 58,
  anon_sym_STAR = 59,
  anon_sym_6 = 60,
  anon_sym_AT = 61,
  anon_sym_PERCENT = 62,
  anon_sym_EQ = 63,
  anon_sym_instance = 64,
  anon_sym_representational = 65,
  anon_sym_nominal = 66,
  anon_sym_phantom = 67,
  anon_sym__ = 68,
  anon_sym_role = 69,
  sym__newline = 70,
  sym__indent = 71,
  sym__dedent = 72,
  sym_quasi_quotation = 73,
  sym_entity_definition = 74,
  sym_entity_body = 75,
  sym__entity_name = 76,
  sym__field_name = 77,
  sym__haskell_constraint_name = 78,
  sym__persistent_type = 79,
  sym__entity_header = 80,
  sym__entity_line_definition = 81,
  sym__entity_key = 82,
  sym_surrogate_key = 83,
  sym_natural_key = 84,
  sym__key_attribute = 85,
  sym__list_of_fields = 86,
  sym__entity_attribute = 87,
  sym__field_attribute = 88,
  sym_key_value_attribute = 89,
  sym__key_value_attribute_key = 90,
  sym__key_value_attribute_value = 91,
  sym_field_definition = 92,
  sym_unique_constraint = 93,
  sym__unique_constraint_attribute = 94,
  sym_foreign_constraint = 95,
  sym_entity_derives = 96,
  sym__dot = 97,
  sym_integer = 98,
  sym__literal = 99,
  sym__carrow = 100,
  sym__arrow = 101,
  sym__colon2 = 102,
  sym_variable = 103,
  sym_constructor = 104,
  sym_constructor_operator = 105,
  sym_qualified_constructor_operator = 106,
  sym_con_unit = 107,
  sym_con_list = 108,
  sym_con_tuple = 109,
  sym_qualified_type = 110,
  sym__type_operator = 111,
  sym_qualified_type_operator = 112,
  sym__qualified_type_operator = 113,
  sym__ticked_qtycon = 114,
  sym__qtyconops = 115,
  sym__promoted_tyconop = 116,
  sym__qtyconop = 117,
  sym_tycon_arrow = 118,
  sym_type_literal = 119,
  sym__promoted_tycon = 120,
  sym__modid = 121,
  aux_sym__qualifying_module = 122,
  sym_type_variable = 123,
  sym_annotated_type_variable = 124,
  sym_inferred_type_variable = 125,
  sym__quantifier = 126,
  sym__forall_kw = 127,
  sym__forall_dot = 128,
  sym__forall = 129,
  sym_type_parens = 130,
  sym_type_list = 131,
  sym__type_tuple = 132,
  sym_type_tuple = 133,
  sym__type_promotable_literal = 134,
  sym__type_promoted_literal = 135,
  sym__type_literal = 136,
  sym_type_name = 137,
  sym_type_star = 138,
  sym__atype = 139,
  sym_type_invisible = 140,
  sym_type_apply = 141,
  sym__btype = 142,
  sym_implicit_param = 143,
  sym_type_infix = 144,
  sym__type_infix = 145,
  sym_constraint = 146,
  sym__quantified_constraint = 147,
  sym__constraint_context = 148,
  sym__constraint = 149,
  sym__context_constraints = 150,
  sym__context = 151,
  sym__type_quantifiers = 152,
  sym__type_context = 153,
  sym_modifier = 154,
  sym__fun_arrow = 155,
  sym__type_fun = 156,
  sym__type = 157,
  sym__type_or_implicit = 158,
  sym__type_annotation = 159,
  sym_kind = 160,
  sym__type_with_kind = 161,
  aux_sym_quasi_quotation_repeat1 = 162,
  aux_sym_entity_body_repeat1 = 163,
  aux_sym_entity_body_repeat2 = 164,
  aux_sym__entity_header_repeat1 = 165,
  aux_sym_surrogate_key_repeat1 = 166,
  aux_sym__list_of_fields_repeat1 = 167,
  aux_sym_field_definition_repeat1 = 168,
  aux_sym_unique_constraint_repeat1 = 169,
  aux_sym_foreign_constraint_repeat1 = 170,
  aux_sym_entity_derives_repeat1 = 171,
  aux_sym_con_tuple_repeat1 = 172,
  aux_sym__forall_repeat1 = 173,
  aux_sym_type_list_repeat1 = 174,
  aux_sym_type_apply_repeat1 = 175,
  aux_sym_constraint_repeat1 = 176,
  aux_sym__context_constraints_repeat1 = 177,
  alias_sym_attributes = 178,
  alias_sym_class_name = 179,
  alias_sym_fields = 180,
  alias_sym_module = 181,
  alias_sym_references = 182,
  alias_sym_type = 183,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__varid] = "_varid",
  [sym_is_sum_marker] = "is_sum_marker",
  [sym_comment] = "comment",
  [anon_sym_Id] = "Id",
  [anon_sym_Primary] = "Primary",
  [aux_sym__key_value_attribute_key_token1] = "name",
  [aux_sym__key_value_attribute_value_token1] = "number",
  [aux_sym__key_value_attribute_value_token2] = "string",
  [sym_exl_mark_attribute] = "exl_mark_attribute",
  [sym_other_attribute] = "other_attribute",
  [sym__field_strictness_prefix] = "_field_strictness_prefix",
  [sym_cascade_action] = "cascade_action",
  [sym_sql_constraint_name] = "sql_constraint_name",
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
  [anon_sym_EQ] = "=",
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
  [sym__list_of_fields] = "_list_of_fields",
  [sym__entity_attribute] = "_entity_attribute",
  [sym__field_attribute] = "_field_attribute",
  [sym_key_value_attribute] = "key_value_attribute",
  [sym__key_value_attribute_key] = "_key_value_attribute_key",
  [sym__key_value_attribute_value] = "_key_value_attribute_value",
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
  [aux_sym__list_of_fields_repeat1] = "_list_of_fields_repeat1",
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
  [alias_sym_fields] = "fields",
  [alias_sym_module] = "module",
  [alias_sym_references] = "references",
  [alias_sym_type] = "type",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__varid] = sym__varid,
  [sym_is_sum_marker] = sym_is_sum_marker,
  [sym_comment] = sym_comment,
  [anon_sym_Id] = anon_sym_Id,
  [anon_sym_Primary] = anon_sym_Primary,
  [aux_sym__key_value_attribute_key_token1] = aux_sym__key_value_attribute_key_token1,
  [aux_sym__key_value_attribute_value_token1] = aux_sym__key_value_attribute_value_token1,
  [aux_sym__key_value_attribute_value_token2] = sym_string,
  [sym_exl_mark_attribute] = sym_exl_mark_attribute,
  [sym_other_attribute] = sym_other_attribute,
  [sym__field_strictness_prefix] = sym__field_strictness_prefix,
  [sym_cascade_action] = sym_cascade_action,
  [sym_sql_constraint_name] = sym_sql_constraint_name,
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
  [anon_sym_EQ] = anon_sym_EQ,
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
  [sym__list_of_fields] = sym__list_of_fields,
  [sym__entity_attribute] = sym__entity_attribute,
  [sym__field_attribute] = sym__field_attribute,
  [sym_key_value_attribute] = sym_key_value_attribute,
  [sym__key_value_attribute_key] = sym__key_value_attribute_key,
  [sym__key_value_attribute_value] = sym__key_value_attribute_value,
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
  [aux_sym__list_of_fields_repeat1] = aux_sym__list_of_fields_repeat1,
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
  [alias_sym_fields] = alias_sym_fields,
  [alias_sym_module] = alias_sym_module,
  [alias_sym_references] = alias_sym_references,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Primary] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__key_value_attribute_key_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__key_value_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__key_value_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym_exl_mark_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_other_attribute] = {
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
  [sym_sql_constraint_name] = {
    .visible = true,
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
  [anon_sym_EQ] = {
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
  [sym__list_of_fields] = {
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
  [sym__key_value_attribute_key] = {
    .visible = false,
    .named = true,
  },
  [sym__key_value_attribute_value] = {
    .visible = false,
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
  [aux_sym__list_of_fields_repeat1] = {
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
  [alias_sym_fields] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_module] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_references] = {
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
  [16] = {.index = 9, .length = 2},
  [17] = {.index = 11, .length = 2},
  [18] = {.index = 7, .length = 2},
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
    [0] = alias_sym_fields,
  },
  [11] = {
    [0] = alias_sym_type,
  },
  [15] = {
    [2] = alias_sym_attributes,
  },
  [18] = {
    [2] = alias_sym_attributes,
  },
  [19] = {
    [2] = alias_sym_attributes,
  },
  [22] = {
    [3] = alias_sym_attributes,
  },
  [23] = {
    [5] = alias_sym_references,
  },
  [24] = {
    [6] = alias_sym_references,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__list_of_fields, 2,
    sym__list_of_fields,
    alias_sym_references,
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
  aux_sym__list_of_fields_repeat1, 2,
    aux_sym__list_of_fields_repeat1,
    alias_sym_fields,
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
  [14] = 6,
  [15] = 15,
  [16] = 15,
  [17] = 15,
  [18] = 15,
  [19] = 15,
  [20] = 15,
  [21] = 15,
  [22] = 15,
  [23] = 15,
  [24] = 15,
  [25] = 15,
  [26] = 15,
  [27] = 27,
  [28] = 27,
  [29] = 27,
  [30] = 27,
  [31] = 27,
  [32] = 27,
  [33] = 27,
  [34] = 27,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 36,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 43,
  [45] = 45,
  [46] = 46,
  [47] = 41,
  [48] = 48,
  [49] = 40,
  [50] = 42,
  [51] = 51,
  [52] = 46,
  [53] = 51,
  [54] = 40,
  [55] = 48,
  [56] = 41,
  [57] = 48,
  [58] = 42,
  [59] = 41,
  [60] = 42,
  [61] = 61,
  [62] = 62,
  [63] = 40,
  [64] = 40,
  [65] = 41,
  [66] = 42,
  [67] = 48,
  [68] = 41,
  [69] = 40,
  [70] = 42,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 73,
  [75] = 73,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 79,
  [81] = 81,
  [82] = 79,
  [83] = 79,
  [84] = 79,
  [85] = 79,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 86,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 88,
  [102] = 90,
  [103] = 103,
  [104] = 104,
  [105] = 87,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 112,
  [115] = 97,
  [116] = 86,
  [117] = 95,
  [118] = 94,
  [119] = 99,
  [120] = 100,
  [121] = 121,
  [122] = 91,
  [123] = 98,
  [124] = 90,
  [125] = 107,
  [126] = 104,
  [127] = 96,
  [128] = 108,
  [129] = 87,
  [130] = 92,
  [131] = 103,
  [132] = 106,
  [133] = 109,
  [134] = 110,
  [135] = 111,
  [136] = 88,
  [137] = 113,
  [138] = 96,
  [139] = 106,
  [140] = 100,
  [141] = 88,
  [142] = 86,
  [143] = 95,
  [144] = 91,
  [145] = 103,
  [146] = 92,
  [147] = 107,
  [148] = 112,
  [149] = 104,
  [150] = 111,
  [151] = 121,
  [152] = 110,
  [153] = 109,
  [154] = 90,
  [155] = 108,
  [156] = 99,
  [157] = 113,
  [158] = 98,
  [159] = 87,
  [160] = 97,
  [161] = 99,
  [162] = 92,
  [163] = 107,
  [164] = 104,
  [165] = 100,
  [166] = 108,
  [167] = 98,
  [168] = 95,
  [169] = 91,
  [170] = 97,
  [171] = 109,
  [172] = 110,
  [173] = 111,
  [174] = 112,
  [175] = 121,
  [176] = 106,
  [177] = 103,
  [178] = 113,
  [179] = 96,
  [180] = 121,
  [181] = 181,
  [182] = 181,
  [183] = 181,
  [184] = 181,
  [185] = 181,
  [186] = 86,
  [187] = 181,
  [188] = 181,
  [189] = 181,
  [190] = 181,
  [191] = 181,
  [192] = 181,
  [193] = 90,
  [194] = 181,
  [195] = 88,
  [196] = 87,
  [197] = 104,
  [198] = 198,
  [199] = 95,
  [200] = 86,
  [201] = 103,
  [202] = 109,
  [203] = 99,
  [204] = 98,
  [205] = 92,
  [206] = 97,
  [207] = 110,
  [208] = 106,
  [209] = 111,
  [210] = 108,
  [211] = 100,
  [212] = 91,
  [213] = 95,
  [214] = 107,
  [215] = 112,
  [216] = 216,
  [217] = 113,
  [218] = 96,
  [219] = 121,
  [220] = 94,
  [221] = 108,
  [222] = 104,
  [223] = 107,
  [224] = 106,
  [225] = 109,
  [226] = 110,
  [227] = 111,
  [228] = 112,
  [229] = 92,
  [230] = 113,
  [231] = 103,
  [232] = 232,
  [233] = 86,
  [234] = 90,
  [235] = 88,
  [236] = 87,
  [237] = 87,
  [238] = 88,
  [239] = 90,
  [240] = 98,
  [241] = 91,
  [242] = 96,
  [243] = 97,
  [244] = 96,
  [245] = 245,
  [246] = 100,
  [247] = 95,
  [248] = 106,
  [249] = 109,
  [250] = 110,
  [251] = 111,
  [252] = 112,
  [253] = 113,
  [254] = 92,
  [255] = 103,
  [256] = 108,
  [257] = 104,
  [258] = 107,
  [259] = 91,
  [260] = 260,
  [261] = 99,
  [262] = 99,
  [263] = 97,
  [264] = 98,
  [265] = 265,
  [266] = 266,
  [267] = 266,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 282,
  [285] = 285,
  [286] = 286,
  [287] = 281,
  [288] = 288,
  [289] = 283,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 95,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
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
  [328] = 327,
  [329] = 318,
  [330] = 315,
  [331] = 331,
  [332] = 332,
  [333] = 87,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 90,
  [339] = 87,
  [340] = 88,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 88,
  [350] = 86,
  [351] = 90,
  [352] = 352,
  [353] = 345,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 109,
  [358] = 358,
  [359] = 355,
  [360] = 360,
  [361] = 361,
  [362] = 98,
  [363] = 91,
  [364] = 99,
  [365] = 275,
  [366] = 99,
  [367] = 98,
  [368] = 368,
  [369] = 97,
  [370] = 95,
  [371] = 355,
  [372] = 96,
  [373] = 113,
  [374] = 374,
  [375] = 355,
  [376] = 107,
  [377] = 355,
  [378] = 91,
  [379] = 379,
  [380] = 97,
  [381] = 355,
  [382] = 106,
  [383] = 383,
  [384] = 355,
  [385] = 385,
  [386] = 355,
  [387] = 387,
  [388] = 385,
  [389] = 355,
  [390] = 96,
  [391] = 110,
  [392] = 355,
  [393] = 111,
  [394] = 394,
  [395] = 87,
  [396] = 112,
  [397] = 355,
  [398] = 92,
  [399] = 103,
  [400] = 86,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 108,
  [405] = 104,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 86,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 407,
  [415] = 406,
  [416] = 416,
  [417] = 275,
  [418] = 402,
  [419] = 419,
  [420] = 406,
  [421] = 407,
  [422] = 410,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 425,
  [427] = 427,
  [428] = 425,
  [429] = 429,
  [430] = 430,
  [431] = 407,
  [432] = 410,
  [433] = 407,
  [434] = 406,
  [435] = 410,
  [436] = 436,
  [437] = 410,
  [438] = 406,
  [439] = 425,
  [440] = 410,
  [441] = 441,
  [442] = 442,
  [443] = 425,
  [444] = 444,
  [445] = 425,
  [446] = 407,
  [447] = 410,
  [448] = 407,
  [449] = 449,
  [450] = 450,
  [451] = 406,
  [452] = 406,
  [453] = 407,
  [454] = 410,
  [455] = 455,
  [456] = 425,
  [457] = 406,
  [458] = 458,
  [459] = 459,
  [460] = 425,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 477,
  [479] = 473,
  [480] = 480,
  [481] = 480,
  [482] = 473,
  [483] = 473,
  [484] = 480,
  [485] = 473,
  [486] = 474,
  [487] = 474,
  [488] = 473,
  [489] = 477,
  [490] = 480,
  [491] = 477,
  [492] = 474,
  [493] = 473,
  [494] = 480,
  [495] = 495,
  [496] = 480,
  [497] = 473,
  [498] = 474,
  [499] = 499,
  [500] = 500,
  [501] = 477,
  [502] = 477,
  [503] = 474,
  [504] = 480,
  [505] = 505,
  [506] = 480,
  [507] = 477,
  [508] = 480,
  [509] = 473,
  [510] = 474,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 477,
  [515] = 515,
  [516] = 474,
  [517] = 474,
};

static inline bool sym_comment_character_set_1(int32_t c) {
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

static inline bool sym_comment_character_set_2(int32_t c) {
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
      if (eof) ADVANCE(117);
      if (sym_comment_character_set_1(lookahead)) SKIP(115)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '%') ADVANCE(263);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == '+') ADVANCE(118);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == '.') ADVANCE(227);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(265);
      if (lookahead == '?') ADVANCE(114);
      if (lookahead == '@') ADVANCE(261);
      if (lookahead == 'F') ADVANCE(57);
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead == 'O') ADVANCE(53);
      if (lookahead == 'P') ADVANCE(59);
      if (lookahead == 'R') ADVANCE(30);
      if (lookahead == '[') ADVANCE(251);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == '{') ADVANCE(255);
      if (lookahead == '|') ADVANCE(258);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == 8592) ADVANCE(222);
      if (lookahead == 8594) ADVANCE(219);
      if (lookahead == 8658) ADVANCE(216);
      if (lookahead == 8704) ADVANCE(257);
      if (lookahead == 8759) ADVANCE(224);
      if (lookahead == 9733) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (sym__varid_character_set_1(lookahead)) ADVANCE(230);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '"') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '^') ADVANCE(4);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '^') ADVANCE(4);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(193);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(122);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '>') ADVANCE(220);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(223);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(226);
      if (sym__consym_character_set_1(lookahead)) ADVANCE(177);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(225);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(217);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(20);
      if (lookahead == 'R') ADVANCE(40);
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(31);
      if (lookahead == 'U') ADVANCE(58);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(37);
      if (lookahead == 'N') ADVANCE(71);
      END_STATE();
    case 17:
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(6);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 73:
      if (lookahead == 'y') ADVANCE(125);
      END_STATE();
    case 74:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(187);
      END_STATE();
    case 75:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 76:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(206);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(209);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(186);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(187);
      END_STATE();
    case 80:
      if (sym_comment_character_set_1(lookahead)) SKIP(80)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '0') ADVANCE(202);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '?') ADVANCE(184);
      if (lookahead == '[') ADVANCE(251);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == 8594) ADVANCE(219);
      if (lookahead == 8704) ADVANCE(257);
      if (lookahead == 9733) ADVANCE(260);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(183);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(230);
      END_STATE();
    case 81:
      if (sym_comment_character_set_1(lookahead)) SKIP(81)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '0') ADVANCE(202);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '?') ADVANCE(184);
      if (lookahead == '[') ADVANCE(251);
      if (lookahead == 8704) ADVANCE(257);
      if (lookahead == 9733) ADVANCE(260);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(183);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(230);
      END_STATE();
    case 82:
      if (sym_comment_character_set_1(lookahead)) SKIP(82)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '0') ADVANCE(202);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '@') ADVANCE(262);
      if (lookahead == '[') ADVANCE(251);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == 8594) ADVANCE(219);
      if (lookahead == 8658) ADVANCE(216);
      if (lookahead == 8759) ADVANCE(224);
      if (lookahead == 9733) ADVANCE(260);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(183);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 83:
      if (sym_comment_character_set_1(lookahead)) SKIP(83)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '0') ADVANCE(202);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '@') ADVANCE(262);
      if (lookahead == '[') ADVANCE(251);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == 8594) ADVANCE(219);
      if (lookahead == 8658) ADVANCE(216);
      if (lookahead == 9733) ADVANCE(260);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(183);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 84:
      if (sym_comment_character_set_1(lookahead)) SKIP(84)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '0') ADVANCE(202);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == '@') ADVANCE(262);
      if (lookahead == '[') ADVANCE(251);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == 8594) ADVANCE(219);
      if (lookahead == 8759) ADVANCE(224);
      if (lookahead == 9733) ADVANCE(260);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(183);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 85:
      if (sym_comment_character_set_1(lookahead)) SKIP(85)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '0') ADVANCE(202);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '@') ADVANCE(262);
      if (lookahead == '[') ADVANCE(251);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == 8594) ADVANCE(219);
      if (lookahead == 9733) ADVANCE(260);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(183);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 86:
      if (sym_comment_character_set_1(lookahead)) SKIP(86)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '0') ADVANCE(202);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '@') ADVANCE(262);
      if (lookahead == '[') ADVANCE(251);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == 8658) ADVANCE(216);
      if (lookahead == 9733) ADVANCE(260);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(183);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 87:
      if (sym_comment_character_set_1(lookahead)) SKIP(87)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '0') ADVANCE(202);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '@') ADVANCE(262);
      if (lookahead == '[') ADVANCE(251);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == 9733) ADVANCE(260);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '+' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(183);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 88:
      if (sym_comment_character_set_1(lookahead)) SKIP(88)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == '0') ADVANCE(202);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '[') ADVANCE(251);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == '{') ADVANCE(255);
      if (lookahead == 8594) ADVANCE(219);
      if (lookahead == 8658) ADVANCE(216);
      if (lookahead == 9733) ADVANCE(260);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 89:
      if (sym_comment_character_set_1(lookahead)) SKIP(89)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '0') ADVANCE(202);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '@') ADVANCE(262);
      if (lookahead == '[') ADVANCE(251);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == 8594) ADVANCE(219);
      if (lookahead == 8658) ADVANCE(216);
      if (lookahead == 8759) ADVANCE(224);
      if (lookahead == 9733) ADVANCE(260);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(183);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 90:
      if (sym_comment_character_set_1(lookahead)) SKIP(90)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '0') ADVANCE(202);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '@') ADVANCE(262);
      if (lookahead == '[') ADVANCE(251);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == 8594) ADVANCE(219);
      if (lookahead == 8658) ADVANCE(216);
      if (lookahead == 9733) ADVANCE(260);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(183);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 91:
      if (sym_comment_character_set_1(lookahead)) SKIP(91)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '0') ADVANCE(202);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == '@') ADVANCE(262);
      if (lookahead == '[') ADVANCE(251);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == 8594) ADVANCE(219);
      if (lookahead == 8759) ADVANCE(224);
      if (lookahead == 9733) ADVANCE(260);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(183);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 92:
      if (sym_comment_character_set_1(lookahead)) SKIP(92)
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == 8594) ADVANCE(219);
      if (lookahead == 8658) ADVANCE(216);
      if (lookahead == 8759) ADVANCE(224);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(183);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      END_STATE();
    case 93:
      if (sym_comment_character_set_1(lookahead)) SKIP(93)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '0') ADVANCE(202);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '@') ADVANCE(262);
      if (lookahead == '[') ADVANCE(251);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == 8594) ADVANCE(219);
      if (lookahead == 9733) ADVANCE(260);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(183);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 94:
      if (sym_comment_character_set_1(lookahead)) SKIP(94)
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == 8594) ADVANCE(219);
      if (lookahead == 8658) ADVANCE(216);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(183);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      END_STATE();
    case 95:
      if (sym_comment_character_set_1(lookahead)) SKIP(95)
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == 8594) ADVANCE(219);
      if (lookahead == 8759) ADVANCE(224);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(183);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      END_STATE();
    case 96:
      if (sym_comment_character_set_1(lookahead)) SKIP(96)
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(264);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == 8594) ADVANCE(219);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(183);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      END_STATE();
    case 97:
      if (sym_comment_character_set_1(lookahead)) SKIP(97)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '0') ADVANCE(202);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '@') ADVANCE(262);
      if (lookahead == '[') ADVANCE(251);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == 8658) ADVANCE(216);
      if (lookahead == 9733) ADVANCE(260);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(183);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 98:
      if (sym_comment_character_set_1(lookahead)) SKIP(98)
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'F') ADVANCE(244);
      if (lookahead == 'I') ADVANCE(237);
      if (lookahead == 'P') ADVANCE(245);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(133);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(230);
      END_STATE();
    case 99:
      if (sym_comment_character_set_1(lookahead)) SKIP(99)
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == 8658) ADVANCE(216);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(183);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      END_STATE();
    case 100:
      if (sym_comment_character_set_1(lookahead)) SKIP(100)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == '0') ADVANCE(202);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '@') ADVANCE(262);
      if (lookahead == '[') ADVANCE(251);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == 9733) ADVANCE(260);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(183);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 101:
      if (sym_comment_character_set_1(lookahead)) SKIP(101)
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == '`') ADVANCE(234);
      if (sym__tyconsym_character_set_1(lookahead)) ADVANCE(183);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      END_STATE();
    case 102:
      if (sym_comment_character_set_1(lookahead)) SKIP(102)
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == 8594) ADVANCE(219);
      if (sym__tyconsym_character_set_1(lookahead)) ADVANCE(183);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(230);
      END_STATE();
    case 103:
      if (sym_comment_character_set_1(lookahead)) SKIP(103)
      if (lookahead == '!') ADVANCE(111);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 104:
      if (sym_comment_character_set_1(lookahead)) SKIP(104)
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(56);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == 8594) ADVANCE(219);
      if (lookahead == 8759) ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 105:
      if (sym_comment_character_set_1(lookahead)) SKIP(105)
      if (lookahead == '!') ADVANCE(111);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(12);
      if (sym__varid_character_set_4(lookahead)) ADVANCE(230);
      END_STATE();
    case 106:
      if (sym_comment_character_set_1(lookahead)) SKIP(106)
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'R') ADVANCE(30);
      if (sym__varid_character_set_5(lookahead)) ADVANCE(230);
      END_STATE();
    case 107:
      if (sym_comment_character_set_1(lookahead)) SKIP(107)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 113:
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 114:
      if (sym__varid_character_set_5(lookahead)) ADVANCE(235);
      END_STATE();
    case 115:
      if (eof) ADVANCE(117);
      if (sym_comment_character_set_1(lookahead)) SKIP(115)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '%') ADVANCE(263);
      if (lookahead == '\'') ADVANCE(254);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == '*') ADVANCE(259);
      if (lookahead == '+') ADVANCE(118);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(265);
      if (lookahead == '?') ADVANCE(114);
      if (lookahead == '@') ADVANCE(261);
      if (lookahead == 'F') ADVANCE(57);
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead == 'O') ADVANCE(53);
      if (lookahead == 'P') ADVANCE(59);
      if (lookahead == 'R') ADVANCE(30);
      if (lookahead == '[') ADVANCE(251);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == '{') ADVANCE(255);
      if (lookahead == '|') ADVANCE(258);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == 8592) ADVANCE(222);
      if (lookahead == 8594) ADVANCE(219);
      if (lookahead == 8658) ADVANCE(216);
      if (lookahead == 8704) ADVANCE(257);
      if (lookahead == 8759) ADVANCE(224);
      if (lookahead == 9733) ADVANCE(260);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (sym__varid_character_set_1(lookahead)) ADVANCE(230);
      END_STATE();
    case 116:
      if (eof) ADVANCE(117);
      if (sym_comment_character_set_1(lookahead)) SKIP(116)
      if (lookahead == '#') ADVANCE(122);
      if (lookahead == '%') ADVANCE(263);
      if (lookahead == '\'') ADVANCE(253);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == ')') ADVANCE(233);
      if (lookahead == '+') ADVANCE(118);
      if (lookahead == ',') ADVANCE(174);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == ']') ADVANCE(252);
      if (lookahead == '`') ADVANCE(234);
      if (lookahead == '{') ADVANCE(255);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == 8594) ADVANCE(219);
      if (lookahead == 8658) ADVANCE(216);
      if (lookahead == 8759) ADVANCE(224);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(250);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_is_sum_marker);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_comment);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_comment);
      if (sym__varid_character_set_5(lookahead)) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_Id);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_Primary);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_Primary);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__key_value_attribute_key_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__key_value_attribute_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__key_value_attribute_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(129);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__key_value_attribute_value_token2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_exl_mark_attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_other_attribute);
      if (lookahead == '=') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__field_strictness_prefix);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_cascade_action);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_cascade_action);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'C') ADVANCE(140);
      if (lookahead == 'R') ADVANCE(153);
      if (lookahead == 'S') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'D') ADVANCE(147);
      if (lookahead == 'U') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'D') ADVANCE(150);
      if (lookahead == 'N') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'a') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'a') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'a') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'a') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'c') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'c') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'd') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'd') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'f') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'i') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'l') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'l') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'l') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'l') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'p') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'r') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 's') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 't') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 't') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 't') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 't') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'u') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'u') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_Foreign);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_Foreign);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_References);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(183);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__consym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '>') ADVANCE(221);
      if (sym__tyconsym_character_set_2(lookahead)) ADVANCE(183);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == '-') ADVANCE(119);
      if (sym__tyconsym_character_set_2(lookahead)) ADVANCE(183);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == ':') ADVANCE(226);
      if (sym__consym_character_set_1(lookahead)) ADVANCE(177);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == '>') ADVANCE(218);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(183);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__tyconsym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__tyconsym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__tyconsym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(183);
      if (sym__varid_character_set_5(lookahead)) ADVANCE(235);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(188);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(185);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(194);
      if (lookahead == '\'') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(189);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '\'') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(191);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '\'') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(196);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(195);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(199);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__integer_literal);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(77);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(201);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__binary_literal);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__binary_literal);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__binary_literal);
      if (lookahead == '#') ADVANCE(205);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__octal_literal);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '#') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '#') ADVANCE(208);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__hex_literal);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(211);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(183);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(183);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(177);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__immediate_dot);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__varid);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '\'') ADVANCE(230);
      if (lookahead == '=') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '>') ADVANCE(220);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_implicit_parid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__conid);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead == 'g') ADVANCE(243);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead == 'm') ADVANCE(249);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(250);
      if (lookahead == 'y') ADVANCE(126);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(6);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_AT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(183);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(183);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(217);
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
  [1] = {.lex_state = 116},
  [2] = {.lex_state = 80},
  [3] = {.lex_state = 80},
  [4] = {.lex_state = 80},
  [5] = {.lex_state = 80},
  [6] = {.lex_state = 80},
  [7] = {.lex_state = 80},
  [8] = {.lex_state = 80},
  [9] = {.lex_state = 80},
  [10] = {.lex_state = 80},
  [11] = {.lex_state = 80},
  [12] = {.lex_state = 80},
  [13] = {.lex_state = 80},
  [14] = {.lex_state = 80},
  [15] = {.lex_state = 81},
  [16] = {.lex_state = 81},
  [17] = {.lex_state = 81},
  [18] = {.lex_state = 81},
  [19] = {.lex_state = 81},
  [20] = {.lex_state = 81},
  [21] = {.lex_state = 81},
  [22] = {.lex_state = 81},
  [23] = {.lex_state = 81},
  [24] = {.lex_state = 81},
  [25] = {.lex_state = 81},
  [26] = {.lex_state = 81},
  [27] = {.lex_state = 80},
  [28] = {.lex_state = 80},
  [29] = {.lex_state = 80},
  [30] = {.lex_state = 80},
  [31] = {.lex_state = 80},
  [32] = {.lex_state = 80},
  [33] = {.lex_state = 80},
  [34] = {.lex_state = 80},
  [35] = {.lex_state = 80},
  [36] = {.lex_state = 80},
  [37] = {.lex_state = 80},
  [38] = {.lex_state = 80},
  [39] = {.lex_state = 80},
  [40] = {.lex_state = 82},
  [41] = {.lex_state = 82},
  [42] = {.lex_state = 82},
  [43] = {.lex_state = 80},
  [44] = {.lex_state = 80},
  [45] = {.lex_state = 80},
  [46] = {.lex_state = 80},
  [47] = {.lex_state = 83},
  [48] = {.lex_state = 82},
  [49] = {.lex_state = 83},
  [50] = {.lex_state = 83},
  [51] = {.lex_state = 80},
  [52] = {.lex_state = 80},
  [53] = {.lex_state = 80},
  [54] = {.lex_state = 84},
  [55] = {.lex_state = 82},
  [56] = {.lex_state = 84},
  [57] = {.lex_state = 83},
  [58] = {.lex_state = 84},
  [59] = {.lex_state = 85},
  [60] = {.lex_state = 85},
  [61] = {.lex_state = 80},
  [62] = {.lex_state = 80},
  [63] = {.lex_state = 85},
  [64] = {.lex_state = 86},
  [65] = {.lex_state = 86},
  [66] = {.lex_state = 86},
  [67] = {.lex_state = 86},
  [68] = {.lex_state = 87},
  [69] = {.lex_state = 87},
  [70] = {.lex_state = 87},
  [71] = {.lex_state = 88},
  [72] = {.lex_state = 88},
  [73] = {.lex_state = 80},
  [74] = {.lex_state = 80},
  [75] = {.lex_state = 80},
  [76] = {.lex_state = 80},
  [77] = {.lex_state = 80},
  [78] = {.lex_state = 80},
  [79] = {.lex_state = 80},
  [80] = {.lex_state = 80},
  [81] = {.lex_state = 80},
  [82] = {.lex_state = 80},
  [83] = {.lex_state = 80},
  [84] = {.lex_state = 80},
  [85] = {.lex_state = 80},
  [86] = {.lex_state = 89},
  [87] = {.lex_state = 89},
  [88] = {.lex_state = 89},
  [89] = {.lex_state = 82},
  [90] = {.lex_state = 89},
  [91] = {.lex_state = 82},
  [92] = {.lex_state = 82},
  [93] = {.lex_state = 90},
  [94] = {.lex_state = 82},
  [95] = {.lex_state = 82},
  [96] = {.lex_state = 82},
  [97] = {.lex_state = 82},
  [98] = {.lex_state = 82},
  [99] = {.lex_state = 82},
  [100] = {.lex_state = 82},
  [101] = {.lex_state = 90},
  [102] = {.lex_state = 90},
  [103] = {.lex_state = 82},
  [104] = {.lex_state = 82},
  [105] = {.lex_state = 90},
  [106] = {.lex_state = 82},
  [107] = {.lex_state = 82},
  [108] = {.lex_state = 82},
  [109] = {.lex_state = 82},
  [110] = {.lex_state = 82},
  [111] = {.lex_state = 82},
  [112] = {.lex_state = 82},
  [113] = {.lex_state = 82},
  [114] = {.lex_state = 83},
  [115] = {.lex_state = 83},
  [116] = {.lex_state = 91},
  [117] = {.lex_state = 83},
  [118] = {.lex_state = 83},
  [119] = {.lex_state = 83},
  [120] = {.lex_state = 83},
  [121] = {.lex_state = 92},
  [122] = {.lex_state = 83},
  [123] = {.lex_state = 83},
  [124] = {.lex_state = 91},
  [125] = {.lex_state = 83},
  [126] = {.lex_state = 83},
  [127] = {.lex_state = 83},
  [128] = {.lex_state = 83},
  [129] = {.lex_state = 91},
  [130] = {.lex_state = 83},
  [131] = {.lex_state = 83},
  [132] = {.lex_state = 83},
  [133] = {.lex_state = 83},
  [134] = {.lex_state = 83},
  [135] = {.lex_state = 83},
  [136] = {.lex_state = 91},
  [137] = {.lex_state = 83},
  [138] = {.lex_state = 84},
  [139] = {.lex_state = 84},
  [140] = {.lex_state = 84},
  [141] = {.lex_state = 93},
  [142] = {.lex_state = 93},
  [143] = {.lex_state = 84},
  [144] = {.lex_state = 84},
  [145] = {.lex_state = 84},
  [146] = {.lex_state = 84},
  [147] = {.lex_state = 84},
  [148] = {.lex_state = 84},
  [149] = {.lex_state = 84},
  [150] = {.lex_state = 84},
  [151] = {.lex_state = 94},
  [152] = {.lex_state = 84},
  [153] = {.lex_state = 84},
  [154] = {.lex_state = 93},
  [155] = {.lex_state = 84},
  [156] = {.lex_state = 84},
  [157] = {.lex_state = 84},
  [158] = {.lex_state = 84},
  [159] = {.lex_state = 93},
  [160] = {.lex_state = 84},
  [161] = {.lex_state = 85},
  [162] = {.lex_state = 85},
  [163] = {.lex_state = 85},
  [164] = {.lex_state = 85},
  [165] = {.lex_state = 85},
  [166] = {.lex_state = 85},
  [167] = {.lex_state = 85},
  [168] = {.lex_state = 85},
  [169] = {.lex_state = 85},
  [170] = {.lex_state = 85},
  [171] = {.lex_state = 85},
  [172] = {.lex_state = 85},
  [173] = {.lex_state = 85},
  [174] = {.lex_state = 85},
  [175] = {.lex_state = 95},
  [176] = {.lex_state = 85},
  [177] = {.lex_state = 85},
  [178] = {.lex_state = 85},
  [179] = {.lex_state = 85},
  [180] = {.lex_state = 96},
  [181] = {.lex_state = 80},
  [182] = {.lex_state = 80},
  [183] = {.lex_state = 80},
  [184] = {.lex_state = 80},
  [185] = {.lex_state = 80},
  [186] = {.lex_state = 97},
  [187] = {.lex_state = 80},
  [188] = {.lex_state = 80},
  [189] = {.lex_state = 80},
  [190] = {.lex_state = 80},
  [191] = {.lex_state = 80},
  [192] = {.lex_state = 80},
  [193] = {.lex_state = 97},
  [194] = {.lex_state = 80},
  [195] = {.lex_state = 97},
  [196] = {.lex_state = 97},
  [197] = {.lex_state = 86},
  [198] = {.lex_state = 98},
  [199] = {.lex_state = 88},
  [200] = {.lex_state = 88},
  [201] = {.lex_state = 86},
  [202] = {.lex_state = 86},
  [203] = {.lex_state = 86},
  [204] = {.lex_state = 86},
  [205] = {.lex_state = 86},
  [206] = {.lex_state = 86},
  [207] = {.lex_state = 86},
  [208] = {.lex_state = 86},
  [209] = {.lex_state = 86},
  [210] = {.lex_state = 86},
  [211] = {.lex_state = 86},
  [212] = {.lex_state = 86},
  [213] = {.lex_state = 86},
  [214] = {.lex_state = 86},
  [215] = {.lex_state = 86},
  [216] = {.lex_state = 98, .external_lex_state = 2},
  [217] = {.lex_state = 86},
  [218] = {.lex_state = 86},
  [219] = {.lex_state = 99},
  [220] = {.lex_state = 86},
  [221] = {.lex_state = 88},
  [222] = {.lex_state = 88},
  [223] = {.lex_state = 88},
  [224] = {.lex_state = 88},
  [225] = {.lex_state = 88},
  [226] = {.lex_state = 88},
  [227] = {.lex_state = 88},
  [228] = {.lex_state = 88},
  [229] = {.lex_state = 88},
  [230] = {.lex_state = 88},
  [231] = {.lex_state = 88},
  [232] = {.lex_state = 98, .external_lex_state = 2},
  [233] = {.lex_state = 100},
  [234] = {.lex_state = 88},
  [235] = {.lex_state = 88},
  [236] = {.lex_state = 88},
  [237] = {.lex_state = 100},
  [238] = {.lex_state = 100},
  [239] = {.lex_state = 100},
  [240] = {.lex_state = 87},
  [241] = {.lex_state = 87},
  [242] = {.lex_state = 87},
  [243] = {.lex_state = 88},
  [244] = {.lex_state = 88},
  [245] = {.lex_state = 116},
  [246] = {.lex_state = 87},
  [247] = {.lex_state = 87},
  [248] = {.lex_state = 87},
  [249] = {.lex_state = 87},
  [250] = {.lex_state = 87},
  [251] = {.lex_state = 87},
  [252] = {.lex_state = 87},
  [253] = {.lex_state = 87},
  [254] = {.lex_state = 87},
  [255] = {.lex_state = 87},
  [256] = {.lex_state = 87},
  [257] = {.lex_state = 87},
  [258] = {.lex_state = 87},
  [259] = {.lex_state = 88},
  [260] = {.lex_state = 116},
  [261] = {.lex_state = 88},
  [262] = {.lex_state = 87},
  [263] = {.lex_state = 87},
  [264] = {.lex_state = 88},
  [265] = {.lex_state = 101},
  [266] = {.lex_state = 102},
  [267] = {.lex_state = 102},
  [268] = {.lex_state = 80},
  [269] = {.lex_state = 80},
  [270] = {.lex_state = 80},
  [271] = {.lex_state = 80},
  [272] = {.lex_state = 80},
  [273] = {.lex_state = 80},
  [274] = {.lex_state = 101},
  [275] = {.lex_state = 80},
  [276] = {.lex_state = 80},
  [277] = {.lex_state = 80},
  [278] = {.lex_state = 116},
  [279] = {.lex_state = 116},
  [280] = {.lex_state = 116},
  [281] = {.lex_state = 116},
  [282] = {.lex_state = 101},
  [283] = {.lex_state = 116},
  [284] = {.lex_state = 101},
  [285] = {.lex_state = 116},
  [286] = {.lex_state = 116},
  [287] = {.lex_state = 116},
  [288] = {.lex_state = 103, .external_lex_state = 3},
  [289] = {.lex_state = 116},
  [290] = {.lex_state = 103, .external_lex_state = 3},
  [291] = {.lex_state = 103, .external_lex_state = 3},
  [292] = {.lex_state = 103, .external_lex_state = 3},
  [293] = {.lex_state = 103, .external_lex_state = 3},
  [294] = {.lex_state = 103, .external_lex_state = 3},
  [295] = {.lex_state = 116, .external_lex_state = 2},
  [296] = {.lex_state = 103, .external_lex_state = 3},
  [297] = {.lex_state = 103, .external_lex_state = 3},
  [298] = {.lex_state = 116, .external_lex_state = 2},
  [299] = {.lex_state = 103, .external_lex_state = 3},
  [300] = {.lex_state = 116},
  [301] = {.lex_state = 98, .external_lex_state = 2},
  [302] = {.lex_state = 103, .external_lex_state = 3},
  [303] = {.lex_state = 103, .external_lex_state = 3},
  [304] = {.lex_state = 103, .external_lex_state = 3},
  [305] = {.lex_state = 103, .external_lex_state = 3},
  [306] = {.lex_state = 116, .external_lex_state = 4},
  [307] = {.lex_state = 101},
  [308] = {.lex_state = 116, .external_lex_state = 4},
  [309] = {.lex_state = 103, .external_lex_state = 3},
  [310] = {.lex_state = 116, .external_lex_state = 4},
  [311] = {.lex_state = 104},
  [312] = {.lex_state = 116, .external_lex_state = 4},
  [313] = {.lex_state = 116},
  [314] = {.lex_state = 116, .external_lex_state = 4},
  [315] = {.lex_state = 105, .external_lex_state = 3},
  [316] = {.lex_state = 103, .external_lex_state = 3},
  [317] = {.lex_state = 101},
  [318] = {.lex_state = 105, .external_lex_state = 3},
  [319] = {.lex_state = 103, .external_lex_state = 3},
  [320] = {.lex_state = 116},
  [321] = {.lex_state = 116},
  [322] = {.lex_state = 116},
  [323] = {.lex_state = 116},
  [324] = {.lex_state = 116},
  [325] = {.lex_state = 116},
  [326] = {.lex_state = 116},
  [327] = {.lex_state = 116},
  [328] = {.lex_state = 116},
  [329] = {.lex_state = 106, .external_lex_state = 3},
  [330] = {.lex_state = 106, .external_lex_state = 3},
  [331] = {.lex_state = 116},
  [332] = {.lex_state = 101},
  [333] = {.lex_state = 104},
  [334] = {.lex_state = 116},
  [335] = {.lex_state = 107},
  [336] = {.lex_state = 116},
  [337] = {.lex_state = 116},
  [338] = {.lex_state = 104},
  [339] = {.lex_state = 103, .external_lex_state = 3},
  [340] = {.lex_state = 104},
  [341] = {.lex_state = 116},
  [342] = {.lex_state = 116},
  [343] = {.lex_state = 116},
  [344] = {.lex_state = 116},
  [345] = {.lex_state = 116},
  [346] = {.lex_state = 116},
  [347] = {.lex_state = 116},
  [348] = {.lex_state = 116},
  [349] = {.lex_state = 103, .external_lex_state = 3},
  [350] = {.lex_state = 103, .external_lex_state = 3},
  [351] = {.lex_state = 103, .external_lex_state = 3},
  [352] = {.lex_state = 116},
  [353] = {.lex_state = 116},
  [354] = {.lex_state = 116},
  [355] = {.lex_state = 116},
  [356] = {.lex_state = 116, .external_lex_state = 2},
  [357] = {.lex_state = 103, .external_lex_state = 3},
  [358] = {.lex_state = 116},
  [359] = {.lex_state = 116},
  [360] = {.lex_state = 116},
  [361] = {.lex_state = 116, .external_lex_state = 2},
  [362] = {.lex_state = 103, .external_lex_state = 3},
  [363] = {.lex_state = 104},
  [364] = {.lex_state = 103, .external_lex_state = 3},
  [365] = {.lex_state = 105, .external_lex_state = 3},
  [366] = {.lex_state = 104},
  [367] = {.lex_state = 104},
  [368] = {.lex_state = 116, .external_lex_state = 2},
  [369] = {.lex_state = 104},
  [370] = {.lex_state = 103, .external_lex_state = 3},
  [371] = {.lex_state = 116},
  [372] = {.lex_state = 104},
  [373] = {.lex_state = 103, .external_lex_state = 3},
  [374] = {.lex_state = 103, .external_lex_state = 3},
  [375] = {.lex_state = 116},
  [376] = {.lex_state = 103, .external_lex_state = 3},
  [377] = {.lex_state = 116},
  [378] = {.lex_state = 103, .external_lex_state = 3},
  [379] = {.lex_state = 103, .external_lex_state = 3},
  [380] = {.lex_state = 103, .external_lex_state = 3},
  [381] = {.lex_state = 116},
  [382] = {.lex_state = 103, .external_lex_state = 3},
  [383] = {.lex_state = 116},
  [384] = {.lex_state = 116},
  [385] = {.lex_state = 116},
  [386] = {.lex_state = 116},
  [387] = {.lex_state = 116, .external_lex_state = 2},
  [388] = {.lex_state = 116},
  [389] = {.lex_state = 116},
  [390] = {.lex_state = 103, .external_lex_state = 3},
  [391] = {.lex_state = 103, .external_lex_state = 3},
  [392] = {.lex_state = 116},
  [393] = {.lex_state = 103, .external_lex_state = 3},
  [394] = {.lex_state = 103, .external_lex_state = 3},
  [395] = {.lex_state = 116, .external_lex_state = 2},
  [396] = {.lex_state = 103, .external_lex_state = 3},
  [397] = {.lex_state = 116},
  [398] = {.lex_state = 103, .external_lex_state = 3},
  [399] = {.lex_state = 103, .external_lex_state = 3},
  [400] = {.lex_state = 116, .external_lex_state = 2},
  [401] = {.lex_state = 116},
  [402] = {.lex_state = 105, .external_lex_state = 3},
  [403] = {.lex_state = 116},
  [404] = {.lex_state = 103, .external_lex_state = 3},
  [405] = {.lex_state = 103, .external_lex_state = 3},
  [406] = {.lex_state = 116},
  [407] = {.lex_state = 116},
  [408] = {.lex_state = 116},
  [409] = {.lex_state = 104},
  [410] = {.lex_state = 116},
  [411] = {.lex_state = 116},
  [412] = {.lex_state = 116},
  [413] = {.lex_state = 104},
  [414] = {.lex_state = 116},
  [415] = {.lex_state = 116},
  [416] = {.lex_state = 116},
  [417] = {.lex_state = 106, .external_lex_state = 3},
  [418] = {.lex_state = 106, .external_lex_state = 3},
  [419] = {.lex_state = 116},
  [420] = {.lex_state = 116},
  [421] = {.lex_state = 116},
  [422] = {.lex_state = 116},
  [423] = {.lex_state = 116},
  [424] = {.lex_state = 104},
  [425] = {.lex_state = 116},
  [426] = {.lex_state = 116},
  [427] = {.lex_state = 116, .external_lex_state = 2},
  [428] = {.lex_state = 116},
  [429] = {.lex_state = 116},
  [430] = {.lex_state = 116},
  [431] = {.lex_state = 116},
  [432] = {.lex_state = 116},
  [433] = {.lex_state = 116},
  [434] = {.lex_state = 116},
  [435] = {.lex_state = 116},
  [436] = {.lex_state = 101},
  [437] = {.lex_state = 116},
  [438] = {.lex_state = 116},
  [439] = {.lex_state = 116},
  [440] = {.lex_state = 116},
  [441] = {.lex_state = 116},
  [442] = {.lex_state = 116},
  [443] = {.lex_state = 116},
  [444] = {.lex_state = 116},
  [445] = {.lex_state = 116},
  [446] = {.lex_state = 116},
  [447] = {.lex_state = 116},
  [448] = {.lex_state = 116},
  [449] = {.lex_state = 104},
  [450] = {.lex_state = 103, .external_lex_state = 3},
  [451] = {.lex_state = 116},
  [452] = {.lex_state = 116},
  [453] = {.lex_state = 116},
  [454] = {.lex_state = 116},
  [455] = {.lex_state = 116},
  [456] = {.lex_state = 116},
  [457] = {.lex_state = 116},
  [458] = {.lex_state = 116},
  [459] = {.lex_state = 116},
  [460] = {.lex_state = 116},
  [461] = {.lex_state = 116},
  [462] = {.lex_state = 116},
  [463] = {.lex_state = 116},
  [464] = {.lex_state = 116},
  [465] = {.lex_state = 116},
  [466] = {.lex_state = 116},
  [467] = {.lex_state = 116},
  [468] = {.lex_state = 106, .external_lex_state = 3},
  [469] = {.lex_state = 106, .external_lex_state = 3},
  [470] = {.lex_state = 116},
  [471] = {.lex_state = 116},
  [472] = {.lex_state = 116},
  [473] = {.lex_state = 116},
  [474] = {.lex_state = 116},
  [475] = {.lex_state = 116, .external_lex_state = 3},
  [476] = {.lex_state = 116},
  [477] = {.lex_state = 116},
  [478] = {.lex_state = 116},
  [479] = {.lex_state = 116},
  [480] = {.lex_state = 116},
  [481] = {.lex_state = 116},
  [482] = {.lex_state = 116},
  [483] = {.lex_state = 116},
  [484] = {.lex_state = 116},
  [485] = {.lex_state = 116},
  [486] = {.lex_state = 116},
  [487] = {.lex_state = 116},
  [488] = {.lex_state = 116},
  [489] = {.lex_state = 116},
  [490] = {.lex_state = 116},
  [491] = {.lex_state = 116},
  [492] = {.lex_state = 116},
  [493] = {.lex_state = 116},
  [494] = {.lex_state = 116},
  [495] = {.lex_state = 116},
  [496] = {.lex_state = 116},
  [497] = {.lex_state = 116},
  [498] = {.lex_state = 116},
  [499] = {.lex_state = 116},
  [500] = {.lex_state = 116, .external_lex_state = 2},
  [501] = {.lex_state = 116},
  [502] = {.lex_state = 116},
  [503] = {.lex_state = 116},
  [504] = {.lex_state = 116},
  [505] = {.lex_state = 116},
  [506] = {.lex_state = 116},
  [507] = {.lex_state = 116},
  [508] = {.lex_state = 116},
  [509] = {.lex_state = 116},
  [510] = {.lex_state = 116},
  [511] = {.lex_state = 116},
  [512] = {.lex_state = 116, .external_lex_state = 3},
  [513] = {.lex_state = 116, .external_lex_state = 3},
  [514] = {.lex_state = 116},
  [515] = {.lex_state = 116, .external_lex_state = 3},
  [516] = {.lex_state = 116},
  [517] = {.lex_state = 116},
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
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__varid] = ACTIONS(1),
    [sym_is_sum_marker] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_Id] = ACTIONS(1),
    [anon_sym_Primary] = ACTIONS(1),
    [aux_sym__key_value_attribute_value_token1] = ACTIONS(1),
    [sym__field_strictness_prefix] = ACTIONS(1),
    [sym_cascade_action] = ACTIONS(1),
    [anon_sym_Foreign] = ACTIONS(1),
    [anon_sym_References] = ACTIONS(1),
    [anon_sym_deriving] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym__consym] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym__immediate_dot] = ACTIONS(1),
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
    [anon_sym_EQ] = ACTIONS(1),
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
    [sym_quasi_quotation] = STATE(511),
    [sym_entity_definition] = STATE(245),
    [sym__entity_name] = STATE(304),
    [sym__entity_header] = STATE(306),
    [sym_constructor] = STATE(349),
    [sym_qualified_type] = STATE(390),
    [sym_tycon_arrow] = STATE(390),
    [sym__promoted_tycon] = STATE(390),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(389),
    [sym_type_variable] = STATE(390),
    [sym_type_name] = STATE(304),
    [aux_sym_quasi_quotation_repeat1] = STATE(245),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__varid] = ACTIONS(7),
    [sym_is_sum_marker] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym__conid] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
  },
  [2] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym__arrow] = STATE(494),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(493),
    [sym_qualified_constructor_operator] = STATE(493),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(493),
    [sym_qualified_type_operator] = STATE(493),
    [sym__qualified_type_operator] = STATE(493),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(89),
    [sym_annotated_type_variable] = STATE(493),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(348),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(502),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(55),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(346),
    [sym_type_infix] = STATE(289),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(358),
    [sym__quantified_constraint] = STATE(455),
    [sym__constraint_context] = STATE(455),
    [sym__constraint] = STATE(455),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(38),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(438),
    [aux_sym_con_tuple_repeat1] = STATE(407),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(19),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(37),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [3] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym__arrow] = STATE(494),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(493),
    [sym_qualified_constructor_operator] = STATE(493),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(493),
    [sym_qualified_type_operator] = STATE(493),
    [sym__qualified_type_operator] = STATE(493),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(89),
    [sym_annotated_type_variable] = STATE(493),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(348),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(502),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(55),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(346),
    [sym_type_infix] = STATE(289),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(358),
    [sym__quantified_constraint] = STATE(429),
    [sym__constraint_context] = STATE(429),
    [sym__constraint] = STATE(429),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(38),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(438),
    [aux_sym_con_tuple_repeat1] = STATE(407),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(19),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(37),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [4] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym__arrow] = STATE(504),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(483),
    [sym_qualified_constructor_operator] = STATE(483),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(483),
    [sym_qualified_type_operator] = STATE(483),
    [sym__qualified_type_operator] = STATE(483),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(89),
    [sym_annotated_type_variable] = STATE(483),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(348),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(507),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(55),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(346),
    [sym_type_infix] = STATE(289),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(358),
    [sym__quantified_constraint] = STATE(429),
    [sym__constraint_context] = STATE(429),
    [sym__constraint] = STATE(429),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(38),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(406),
    [aux_sym_con_tuple_repeat1] = STATE(431),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(53),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(55),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(57),
    [anon_sym_DASH_GT] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(61),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [5] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym__arrow] = STATE(496),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(497),
    [sym_qualified_constructor_operator] = STATE(497),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(497),
    [sym_qualified_type_operator] = STATE(497),
    [sym__qualified_type_operator] = STATE(497),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(89),
    [sym_annotated_type_variable] = STATE(497),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(348),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(489),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(55),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(346),
    [sym_type_infix] = STATE(289),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(358),
    [sym__quantified_constraint] = STATE(455),
    [sym__constraint_context] = STATE(455),
    [sym__constraint] = STATE(455),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(38),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(451),
    [aux_sym_con_tuple_repeat1] = STATE(448),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(63),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(65),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(67),
    [anon_sym_DASH_GT] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(71),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [6] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym__arrow] = STATE(481),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(482),
    [sym_qualified_constructor_operator] = STATE(482),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(482),
    [sym_qualified_type_operator] = STATE(482),
    [sym__qualified_type_operator] = STATE(482),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(89),
    [sym_annotated_type_variable] = STATE(482),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(353),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(507),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(300),
    [sym_type_infix] = STATE(283),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(416),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(406),
    [aux_sym_con_tuple_repeat1] = STATE(431),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(53),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(73),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(75),
    [anon_sym_DASH_GT] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(81),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [7] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym__arrow] = STATE(494),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(493),
    [sym_qualified_constructor_operator] = STATE(493),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(493),
    [sym_qualified_type_operator] = STATE(493),
    [sym__qualified_type_operator] = STATE(493),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(89),
    [sym_annotated_type_variable] = STATE(493),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(353),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(477),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(300),
    [sym_type_infix] = STATE(283),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(416),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(415),
    [aux_sym_con_tuple_repeat1] = STATE(414),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(83),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(23),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(31),
    [anon_sym_DASH_GT] = ACTIONS(33),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(85),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [8] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym__arrow] = STATE(506),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(473),
    [sym_qualified_constructor_operator] = STATE(473),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(473),
    [sym_qualified_type_operator] = STATE(473),
    [sym__qualified_type_operator] = STATE(473),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(89),
    [sym_annotated_type_variable] = STATE(473),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(353),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(491),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(300),
    [sym_type_infix] = STATE(283),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(416),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(452),
    [aux_sym_con_tuple_repeat1] = STATE(453),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(87),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(89),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(91),
    [anon_sym_DASH_GT] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(95),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [9] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym__arrow] = STATE(496),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(497),
    [sym_qualified_constructor_operator] = STATE(497),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(497),
    [sym_qualified_type_operator] = STATE(497),
    [sym__qualified_type_operator] = STATE(497),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(89),
    [sym_annotated_type_variable] = STATE(497),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(353),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(501),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(300),
    [sym_type_infix] = STATE(283),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(416),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(434),
    [aux_sym_con_tuple_repeat1] = STATE(433),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(97),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(65),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(67),
    [anon_sym_DASH_GT] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(99),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [10] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym__arrow] = STATE(490),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(488),
    [sym_qualified_constructor_operator] = STATE(488),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(488),
    [sym_qualified_type_operator] = STATE(488),
    [sym__qualified_type_operator] = STATE(488),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(89),
    [sym_annotated_type_variable] = STATE(488),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(353),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(491),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(300),
    [sym_type_infix] = STATE(283),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(416),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(452),
    [aux_sym_con_tuple_repeat1] = STATE(453),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(87),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(101),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(103),
    [anon_sym_DASH_GT] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(95),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [11] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym__arrow] = STATE(484),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(485),
    [sym_qualified_constructor_operator] = STATE(485),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(485),
    [sym_qualified_type_operator] = STATE(485),
    [sym__qualified_type_operator] = STATE(485),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(89),
    [sym_annotated_type_variable] = STATE(485),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(353),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(502),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(300),
    [sym_type_infix] = STATE(283),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(416),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(438),
    [aux_sym_con_tuple_repeat1] = STATE(407),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(19),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(107),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(109),
    [anon_sym_DASH_GT] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(113),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [12] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym__arrow] = STATE(508),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(509),
    [sym_qualified_constructor_operator] = STATE(509),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(509),
    [sym_qualified_type_operator] = STATE(509),
    [sym__qualified_type_operator] = STATE(509),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(89),
    [sym_annotated_type_variable] = STATE(509),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(353),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(489),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(300),
    [sym_type_infix] = STATE(283),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(416),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(451),
    [aux_sym_con_tuple_repeat1] = STATE(448),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(63),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(115),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(117),
    [anon_sym_DASH_GT] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(121),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [13] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym__arrow] = STATE(504),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(483),
    [sym_qualified_constructor_operator] = STATE(483),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(483),
    [sym_qualified_type_operator] = STATE(483),
    [sym__qualified_type_operator] = STATE(483),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(89),
    [sym_annotated_type_variable] = STATE(483),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(353),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(478),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(300),
    [sym_type_infix] = STATE(283),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(416),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(457),
    [aux_sym_con_tuple_repeat1] = STATE(446),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(123),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(55),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(57),
    [anon_sym_DASH_GT] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(125),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [14] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym__arrow] = STATE(480),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(479),
    [sym_qualified_constructor_operator] = STATE(479),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(479),
    [sym_qualified_type_operator] = STATE(479),
    [sym__qualified_type_operator] = STATE(479),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(89),
    [sym_annotated_type_variable] = STATE(479),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(353),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(514),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(300),
    [sym_type_infix] = STATE(283),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(416),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(420),
    [aux_sym_con_tuple_repeat1] = STATE(421),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(127),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(129),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(131),
    [anon_sym_DASH_GT] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(135),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [15] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(487),
    [sym_qualified_constructor_operator] = STATE(487),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(487),
    [sym_qualified_type_operator] = STATE(487),
    [sym__qualified_type_operator] = STATE(487),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(353),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(491),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(300),
    [sym_type_infix] = STATE(283),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(416),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(464),
    [aux_sym_con_tuple_repeat1] = STATE(453),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(87),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(137),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(95),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [16] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(503),
    [sym_qualified_constructor_operator] = STATE(503),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(503),
    [sym_qualified_type_operator] = STATE(503),
    [sym__qualified_type_operator] = STATE(503),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(353),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(491),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(300),
    [sym_type_infix] = STATE(283),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(416),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(464),
    [aux_sym_con_tuple_repeat1] = STATE(453),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(87),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(139),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(95),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [17] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(517),
    [sym_qualified_constructor_operator] = STATE(517),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(517),
    [sym_qualified_type_operator] = STATE(517),
    [sym__qualified_type_operator] = STATE(517),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(353),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(478),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(300),
    [sym_type_infix] = STATE(283),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(416),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(464),
    [aux_sym_con_tuple_repeat1] = STATE(446),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(123),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(141),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(125),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [18] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(510),
    [sym_qualified_constructor_operator] = STATE(510),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(510),
    [sym_qualified_type_operator] = STATE(510),
    [sym__qualified_type_operator] = STATE(510),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(353),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(489),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(300),
    [sym_type_infix] = STATE(283),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(416),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(464),
    [aux_sym_con_tuple_repeat1] = STATE(448),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(63),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(143),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(121),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [19] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(498),
    [sym_qualified_constructor_operator] = STATE(498),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(498),
    [sym_qualified_type_operator] = STATE(498),
    [sym__qualified_type_operator] = STATE(498),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(353),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(489),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(300),
    [sym_type_infix] = STATE(283),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(416),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(464),
    [aux_sym_con_tuple_repeat1] = STATE(448),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(63),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(145),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(121),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [20] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(492),
    [sym_qualified_constructor_operator] = STATE(492),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(492),
    [sym_qualified_type_operator] = STATE(492),
    [sym__qualified_type_operator] = STATE(492),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(353),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(502),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(300),
    [sym_type_infix] = STATE(283),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(416),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(464),
    [aux_sym_con_tuple_repeat1] = STATE(407),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(19),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(147),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(113),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [21] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(486),
    [sym_qualified_constructor_operator] = STATE(486),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(486),
    [sym_qualified_type_operator] = STATE(486),
    [sym__qualified_type_operator] = STATE(486),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(353),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(502),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(300),
    [sym_type_infix] = STATE(283),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(416),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(464),
    [aux_sym_con_tuple_repeat1] = STATE(407),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(19),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(149),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(113),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [22] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(498),
    [sym_qualified_constructor_operator] = STATE(498),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(498),
    [sym_qualified_type_operator] = STATE(498),
    [sym__qualified_type_operator] = STATE(498),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(353),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(501),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(300),
    [sym_type_infix] = STATE(283),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(416),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(464),
    [aux_sym_con_tuple_repeat1] = STATE(433),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(97),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(145),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(99),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [23] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(517),
    [sym_qualified_constructor_operator] = STATE(517),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(517),
    [sym_qualified_type_operator] = STATE(517),
    [sym__qualified_type_operator] = STATE(517),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(353),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(507),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(300),
    [sym_type_infix] = STATE(283),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(416),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(464),
    [aux_sym_con_tuple_repeat1] = STATE(431),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(53),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(141),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(81),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [24] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(474),
    [sym_qualified_constructor_operator] = STATE(474),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(474),
    [sym_qualified_type_operator] = STATE(474),
    [sym__qualified_type_operator] = STATE(474),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(353),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(507),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(300),
    [sym_type_infix] = STATE(283),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(416),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(464),
    [aux_sym_con_tuple_repeat1] = STATE(431),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(53),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(151),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(81),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [25] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(492),
    [sym_qualified_constructor_operator] = STATE(492),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(492),
    [sym_qualified_type_operator] = STATE(492),
    [sym__qualified_type_operator] = STATE(492),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(353),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(477),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(300),
    [sym_type_infix] = STATE(283),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(416),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(464),
    [aux_sym_con_tuple_repeat1] = STATE(414),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(83),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(147),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(85),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
  [26] = {
    [sym_integer] = STATE(155),
    [sym__literal] = STATE(155),
    [sym_constructor] = STATE(88),
    [sym_constructor_operator] = STATE(516),
    [sym_qualified_constructor_operator] = STATE(516),
    [sym_con_unit] = STATE(155),
    [sym_con_list] = STATE(155),
    [sym_con_tuple] = STATE(155),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(516),
    [sym_qualified_type_operator] = STATE(516),
    [sym__qualified_type_operator] = STATE(516),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(307),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(313),
    [sym__forall] = STATE(353),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(514),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(48),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(175),
    [sym__btype] = STATE(175),
    [sym_implicit_param] = STATE(300),
    [sym_type_infix] = STATE(283),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(416),
    [sym__context_constraints] = STATE(416),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(300),
    [sym__type_context] = STATE(300),
    [sym__type_fun] = STATE(300),
    [sym__type] = STATE(300),
    [sym__type_or_implicit] = STATE(300),
    [sym__type_with_kind] = STATE(464),
    [aux_sym_con_tuple_repeat1] = STATE(421),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(127),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(153),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(135),
    [sym_implicit_parid] = ACTIONS(39),
    [sym__conid] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_forall] = ACTIONS(47),
    [anon_sym_5] = ACTIONS(49),
    [anon_sym_STAR] = ACTIONS(51),
    [anon_sym_6] = ACTIONS(51),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym_implicit_parid,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(88), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(283), 1,
      sym_type_infix,
    STATE(313), 1,
      sym__forall_kw,
    STATE(353), 1,
      sym__forall,
    STATE(381), 1,
      aux_sym__qualifying_module,
    STATE(447), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(175), 2,
      sym_type_apply,
      sym__btype,
    STATE(416), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(155), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(300), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [118] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym_implicit_parid,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(88), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(283), 1,
      sym_type_infix,
    STATE(313), 1,
      sym__forall_kw,
    STATE(353), 1,
      sym__forall,
    STATE(381), 1,
      aux_sym__qualifying_module,
    STATE(410), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(175), 2,
      sym_type_apply,
      sym__btype,
    STATE(416), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(155), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(300), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [236] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym_implicit_parid,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(88), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(283), 1,
      sym_type_infix,
    STATE(313), 1,
      sym__forall_kw,
    STATE(353), 1,
      sym__forall,
    STATE(381), 1,
      aux_sym__qualifying_module,
    STATE(437), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(175), 2,
      sym_type_apply,
      sym__btype,
    STATE(416), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(155), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(300), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [354] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym_implicit_parid,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(88), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(283), 1,
      sym_type_infix,
    STATE(313), 1,
      sym__forall_kw,
    STATE(353), 1,
      sym__forall,
    STATE(381), 1,
      aux_sym__qualifying_module,
    STATE(454), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(175), 2,
      sym_type_apply,
      sym__btype,
    STATE(416), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(155), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(300), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [472] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym_implicit_parid,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(88), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(283), 1,
      sym_type_infix,
    STATE(313), 1,
      sym__forall_kw,
    STATE(353), 1,
      sym__forall,
    STATE(381), 1,
      aux_sym__qualifying_module,
    STATE(435), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(175), 2,
      sym_type_apply,
      sym__btype,
    STATE(416), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(155), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(300), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [590] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym_implicit_parid,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(88), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(283), 1,
      sym_type_infix,
    STATE(313), 1,
      sym__forall_kw,
    STATE(353), 1,
      sym__forall,
    STATE(381), 1,
      aux_sym__qualifying_module,
    STATE(440), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(175), 2,
      sym_type_apply,
      sym__btype,
    STATE(416), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(155), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(300), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [708] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym_implicit_parid,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(88), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(283), 1,
      sym_type_infix,
    STATE(313), 1,
      sym__forall_kw,
    STATE(353), 1,
      sym__forall,
    STATE(381), 1,
      aux_sym__qualifying_module,
    STATE(422), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(175), 2,
      sym_type_apply,
      sym__btype,
    STATE(416), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(155), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(300), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [826] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym_implicit_parid,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(88), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(283), 1,
      sym_type_infix,
    STATE(313), 1,
      sym__forall_kw,
    STATE(353), 1,
      sym__forall,
    STATE(381), 1,
      aux_sym__qualifying_module,
    STATE(432), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(175), 2,
      sym_type_apply,
      sym__btype,
    STATE(416), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(155), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(300), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [944] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym_implicit_parid,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(88), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(283), 1,
      sym_type_infix,
    STATE(313), 1,
      sym__forall_kw,
    STATE(353), 1,
      sym__forall,
    STATE(381), 1,
      aux_sym__qualifying_module,
    STATE(430), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(175), 2,
      sym_type_apply,
      sym__btype,
    STATE(416), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(155), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(300), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [1059] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    ACTIONS(171), 1,
      sym__varid,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(181), 1,
      sym_implicit_parid,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    STATE(52), 1,
      sym__context,
    STATE(57), 1,
      sym_type_name,
    STATE(101), 1,
      sym_constructor,
    STATE(283), 1,
      sym_type_infix,
    STATE(287), 1,
      sym__type_infix,
    STATE(313), 1,
      sym__forall_kw,
    STATE(345), 1,
      sym__forall,
    STATE(375), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(416), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(173), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(177), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(127), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(166), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(326), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(59), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [1171] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    STATE(38), 1,
      sym__context,
    STATE(55), 1,
      sym_type_name,
    STATE(88), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(289), 1,
      sym_type_infix,
    STATE(313), 1,
      sym__forall_kw,
    STATE(348), 1,
      sym__forall,
    STATE(358), 1,
      sym_constraint,
    STATE(381), 1,
      aux_sym__qualifying_module,
    STATE(416), 1,
      sym__context_constraints,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(175), 2,
      sym_type_apply,
      sym__btype,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(471), 3,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(320), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(155), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [1285] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    STATE(38), 1,
      sym__context,
    STATE(55), 1,
      sym_type_name,
    STATE(88), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(289), 1,
      sym_type_infix,
    STATE(313), 1,
      sym__forall_kw,
    STATE(348), 1,
      sym__forall,
    STATE(358), 1,
      sym_constraint,
    STATE(381), 1,
      aux_sym__qualifying_module,
    STATE(416), 1,
      sym__context_constraints,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(175), 2,
      sym_type_apply,
      sym__btype,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(462), 3,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(334), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(155), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [1399] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(39), 1,
      sym_implicit_parid,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(88), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(283), 1,
      sym_type_infix,
    STATE(313), 1,
      sym__forall_kw,
    STATE(353), 1,
      sym__forall,
    STATE(381), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(175), 2,
      sym_type_apply,
      sym__btype,
    STATE(416), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(155), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(326), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [1511] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym__varid,
    ACTIONS(199), 1,
      sym__integer_literal,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      sym__conid,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(210), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      anon_sym_AT,
    STATE(88), 1,
      sym_constructor,
    STATE(381), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(213), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(197), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(201), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(108), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(195), 6,
      sym__consym,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    ACTIONS(193), 7,
      sym_comma,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
    STATE(42), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [1603] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym__varid,
    ACTIONS(199), 1,
      sym__integer_literal,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_AT,
    ACTIONS(221), 1,
      sym__conid,
    ACTIONS(224), 1,
      anon_sym_SQUOTE,
    STATE(88), 1,
      sym_constructor,
    STATE(381), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(213), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(197), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(201), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(108), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(219), 6,
      sym__consym,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    ACTIONS(217), 7,
      sym_comma,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
    STATE(40), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [1695] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym__varid,
    ACTIONS(237), 1,
      sym__integer_literal,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    ACTIONS(246), 1,
      sym__conid,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(252), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      anon_sym_AT,
    STATE(88), 1,
      sym_constructor,
    STATE(381), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(255), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(234), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(240), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(108), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(232), 6,
      sym__consym,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    ACTIONS(230), 7,
      sym_comma,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
    STATE(42), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [1787] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(88), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(283), 1,
      sym_type_infix,
    STATE(313), 1,
      sym__forall_kw,
    STATE(353), 1,
      sym__forall,
    STATE(381), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(175), 2,
      sym_type_apply,
      sym__btype,
    STATE(416), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(320), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(155), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [1894] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    ACTIONS(171), 1,
      sym__varid,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    STATE(52), 1,
      sym__context,
    STATE(57), 1,
      sym_type_name,
    STATE(101), 1,
      sym_constructor,
    STATE(283), 1,
      sym_type_infix,
    STATE(287), 1,
      sym__type_infix,
    STATE(313), 1,
      sym__forall_kw,
    STATE(345), 1,
      sym__forall,
    STATE(375), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(416), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(173), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(177), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(127), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(320), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(166), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(59), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2001] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    ACTIONS(181), 1,
      sym_implicit_parid,
    ACTIONS(261), 1,
      sym__varid,
    ACTIONS(265), 1,
      sym__integer_literal,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      sym__conid,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym__context,
    STATE(67), 1,
      sym_type_name,
    STATE(195), 1,
      sym_constructor,
    STATE(313), 1,
      sym__forall_kw,
    STATE(347), 1,
      sym__forall,
    STATE(358), 1,
      sym_constraint,
    STATE(392), 1,
      aux_sym__qualifying_module,
    STATE(403), 1,
      sym_type_infix,
    STATE(416), 1,
      sym__context_constraints,
    STATE(461), 1,
      sym__modid,
    ACTIONS(277), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(265), 2,
      sym_type_apply,
      sym__btype,
    ACTIONS(263), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(267), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(218), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(472), 4,
      sym_implicit_param,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(256), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(68), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2110] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(88), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(283), 1,
      sym_type_infix,
    STATE(313), 1,
      sym__forall_kw,
    STATE(353), 1,
      sym__forall,
    STATE(381), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(175), 2,
      sym_type_apply,
      sym__btype,
    STATE(416), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(334), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(155), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2217] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym__varid,
    ACTIONS(283), 1,
      sym__integer_literal,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(289), 1,
      sym__conid,
    ACTIONS(292), 1,
      anon_sym_LBRACK,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
    ACTIONS(299), 1,
      anon_sym_AT,
    STATE(101), 1,
      sym_constructor,
    STATE(375), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(297), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(281), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(285), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(219), 4,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(127), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(128), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(217), 8,
      sym_comma,
      sym__consym,
      anon_sym_,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(49), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [2308] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym__varid,
    ACTIONS(311), 1,
      sym__integer_literal,
    ACTIONS(317), 1,
      anon_sym_,
    ACTIONS(319), 1,
      anon_sym_EQ_GT,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      sym__conid,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_SQUOTE,
    STATE(235), 1,
      sym_constructor,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(308), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(314), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(244), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(221), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(304), 6,
      sym_comma,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
    ACTIONS(306), 6,
      sym__consym,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_AT,
      anon_sym_PERCENT,
    STATE(72), 11,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      aux_sym_constraint_repeat1,
  [2401] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym__varid,
    ACTIONS(283), 1,
      sym__integer_literal,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_LBRACK,
    ACTIONS(299), 1,
      anon_sym_AT,
    ACTIONS(336), 1,
      sym__conid,
    ACTIONS(339), 1,
      anon_sym_SQUOTE,
    STATE(101), 1,
      sym_constructor,
    STATE(375), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(297), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(281), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(285), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(195), 4,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(127), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(128), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(193), 8,
      sym_comma,
      sym__consym,
      anon_sym_,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(50), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [2492] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym__varid,
    ACTIONS(348), 1,
      sym__integer_literal,
    ACTIONS(354), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      sym__conid,
    ACTIONS(360), 1,
      anon_sym_LBRACK,
    ACTIONS(363), 1,
      anon_sym_SQUOTE,
    ACTIONS(369), 1,
      anon_sym_AT,
    STATE(101), 1,
      sym_constructor,
    STATE(375), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(366), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(345), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(351), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(232), 4,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(127), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(128), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(230), 8,
      sym_comma,
      sym__consym,
      anon_sym_,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(50), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [2583] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    ACTIONS(171), 1,
      sym__varid,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    STATE(52), 1,
      sym__context,
    STATE(57), 1,
      sym_type_name,
    STATE(101), 1,
      sym_constructor,
    STATE(283), 1,
      sym_type_infix,
    STATE(287), 1,
      sym__type_infix,
    STATE(313), 1,
      sym__forall_kw,
    STATE(345), 1,
      sym__forall,
    STATE(375), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(416), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(173), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(177), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(127), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(324), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(166), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(59), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2690] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    ACTIONS(171), 1,
      sym__varid,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(179), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    STATE(52), 1,
      sym__context,
    STATE(57), 1,
      sym_type_name,
    STATE(101), 1,
      sym_constructor,
    STATE(283), 1,
      sym_type_infix,
    STATE(287), 1,
      sym__type_infix,
    STATE(313), 1,
      sym__forall_kw,
    STATE(345), 1,
      sym__forall,
    STATE(375), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(416), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(173), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(177), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(127), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(334), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(166), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(59), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2797] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__varid,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym__context,
    STATE(48), 1,
      sym_type_name,
    STATE(88), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(283), 1,
      sym_type_infix,
    STATE(313), 1,
      sym__forall_kw,
    STATE(353), 1,
      sym__forall,
    STATE(381), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(175), 2,
      sym_type_apply,
      sym__btype,
    STATE(416), 2,
      sym_constraint,
      sym__context_constraints,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(324), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(155), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(56), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2904] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(372), 1,
      sym__varid,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      sym__conid,
    ACTIONS(379), 1,
      anon_sym_SQUOTE,
    ACTIONS(382), 1,
      anon_sym_AT,
    STATE(136), 1,
      sym_constructor,
    STATE(386), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(138), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(195), 5,
      sym__consym,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    STATE(155), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(193), 6,
      sym_comma,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
    STATE(58), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [2994] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym__varid,
    ACTIONS(311), 1,
      sym__integer_literal,
    ACTIONS(317), 1,
      anon_sym_,
    ACTIONS(319), 1,
      anon_sym_EQ_GT,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      sym__conid,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_SQUOTE,
    STATE(235), 1,
      sym_constructor,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(384), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(304), 3,
      anon_sym_2,
      anon_sym_4,
      anon_sym_BQUOTE,
    ACTIONS(308), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(314), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(244), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(221), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(306), 6,
      sym__consym,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_AT,
      anon_sym_PERCENT,
    STATE(72), 11,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      aux_sym_constraint_repeat1,
  [3088] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(372), 1,
      sym__varid,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_AT,
    ACTIONS(387), 1,
      sym__conid,
    ACTIONS(390), 1,
      anon_sym_SQUOTE,
    STATE(136), 1,
      sym_constructor,
    STATE(386), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(138), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(219), 5,
      sym__consym,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    STATE(155), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(217), 6,
      sym_comma,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
    STATE(54), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [3178] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym__varid,
    ACTIONS(311), 1,
      sym__integer_literal,
    ACTIONS(317), 1,
      anon_sym_,
    ACTIONS(319), 1,
      anon_sym_EQ_GT,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      sym__conid,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_SQUOTE,
    STATE(235), 1,
      sym_constructor,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(308), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(314), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(306), 4,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_PERCENT,
    STATE(244), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(221), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(304), 7,
      sym_comma,
      sym__consym,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(72), 11,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      aux_sym_constraint_repeat1,
  [3270] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym__varid,
    ACTIONS(399), 1,
      sym__integer_literal,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(408), 1,
      sym__conid,
    ACTIONS(411), 1,
      anon_sym_LBRACK,
    ACTIONS(414), 1,
      anon_sym_SQUOTE,
    ACTIONS(420), 1,
      anon_sym_AT,
    STATE(136), 1,
      sym_constructor,
    STATE(386), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(417), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(396), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(402), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(138), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(232), 5,
      sym__consym,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    STATE(155), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(230), 6,
      sym_comma,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
    STATE(58), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [3360] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(423), 1,
      sym__varid,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      sym__conid,
    ACTIONS(430), 1,
      anon_sym_SQUOTE,
    ACTIONS(433), 1,
      anon_sym_AT,
    STATE(141), 1,
      sym_constructor,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(173), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(177), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(219), 3,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(179), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(166), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(217), 7,
      sym_comma,
      sym__consym,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(63), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [3449] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      sym__varid,
    ACTIONS(441), 1,
      sym__integer_literal,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 1,
      sym__conid,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(456), 1,
      anon_sym_SQUOTE,
    ACTIONS(462), 1,
      anon_sym_AT,
    STATE(141), 1,
      sym_constructor,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(459), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(232), 3,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    ACTIONS(438), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(444), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(179), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(166), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(230), 7,
      sym_comma,
      sym__consym,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(60), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [3538] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    ACTIONS(261), 1,
      sym__varid,
    ACTIONS(265), 1,
      sym__integer_literal,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      sym__conid,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym__context,
    STATE(67), 1,
      sym_type_name,
    STATE(195), 1,
      sym_constructor,
    STATE(313), 1,
      sym__forall_kw,
    STATE(347), 1,
      sym__forall,
    STATE(358), 1,
      sym_constraint,
    STATE(392), 1,
      aux_sym__qualifying_module,
    STATE(403), 1,
      sym_type_infix,
    STATE(416), 1,
      sym__context_constraints,
    STATE(461), 1,
      sym__modid,
    ACTIONS(277), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(265), 2,
      sym_type_apply,
      sym__btype,
    ACTIONS(263), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(267), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(462), 3,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(218), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(256), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(68), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [3643] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    ACTIONS(261), 1,
      sym__varid,
    ACTIONS(265), 1,
      sym__integer_literal,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    ACTIONS(271), 1,
      sym__conid,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym__context,
    STATE(67), 1,
      sym_type_name,
    STATE(195), 1,
      sym_constructor,
    STATE(313), 1,
      sym__forall_kw,
    STATE(347), 1,
      sym__forall,
    STATE(358), 1,
      sym_constraint,
    STATE(392), 1,
      aux_sym__qualifying_module,
    STATE(403), 1,
      sym_type_infix,
    STATE(416), 1,
      sym__context_constraints,
    STATE(461), 1,
      sym__modid,
    ACTIONS(277), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(265), 2,
      sym_type_apply,
      sym__btype,
    ACTIONS(263), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(267), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(471), 3,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(218), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(256), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(68), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [3748] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(423), 1,
      sym__varid,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      anon_sym_AT,
    ACTIONS(465), 1,
      sym__conid,
    ACTIONS(468), 1,
      anon_sym_SQUOTE,
    STATE(141), 1,
      sym_constructor,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(173), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(177), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(195), 3,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(179), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(166), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(193), 7,
      sym_comma,
      sym__consym,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(60), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [3837] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym__varid,
    ACTIONS(475), 1,
      sym__integer_literal,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(481), 1,
      sym__conid,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(486), 1,
      anon_sym_SQUOTE,
    ACTIONS(491), 1,
      anon_sym_AT,
    STATE(195), 1,
      sym_constructor,
    STATE(392), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(195), 2,
      sym__tyconsym,
      anon_sym_EQ_GT,
    ACTIONS(489), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(473), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(477), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(218), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(193), 5,
      sym_comma,
      sym__consym,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
    STATE(210), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(66), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [3923] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym__varid,
    ACTIONS(475), 1,
      sym__integer_literal,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(491), 1,
      anon_sym_AT,
    ACTIONS(493), 1,
      sym__conid,
    ACTIONS(496), 1,
      anon_sym_SQUOTE,
    STATE(195), 1,
      sym_constructor,
    STATE(392), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(219), 2,
      sym__tyconsym,
      anon_sym_EQ_GT,
    ACTIONS(489), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(473), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(477), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(218), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(217), 5,
      sym_comma,
      sym__consym,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
    STATE(210), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(64), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [4009] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      sym__varid,
    ACTIONS(505), 1,
      sym__integer_literal,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      sym__conid,
    ACTIONS(517), 1,
      anon_sym_LBRACK,
    ACTIONS(520), 1,
      anon_sym_SQUOTE,
    ACTIONS(526), 1,
      anon_sym_AT,
    STATE(195), 1,
      sym_constructor,
    STATE(392), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(232), 2,
      sym__tyconsym,
      anon_sym_EQ_GT,
    ACTIONS(523), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(502), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(508), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(218), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(230), 5,
      sym_comma,
      sym__consym,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
    STATE(210), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(66), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [4095] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym__varid,
    ACTIONS(311), 1,
      sym__integer_literal,
    ACTIONS(319), 1,
      anon_sym_EQ_GT,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
    ACTIONS(324), 1,
      sym__conid,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      anon_sym_SQUOTE,
    STATE(235), 1,
      sym_constructor,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(304), 2,
      sym__consym,
      anon_sym_BQUOTE,
    ACTIONS(306), 2,
      sym__tyconsym,
      anon_sym_AT,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(308), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(314), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(317), 3,
      sym_comma,
      anon_sym_,
      anon_sym_RPAREN,
    STATE(244), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(221), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(72), 11,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      aux_sym_constraint_repeat1,
  [4182] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym__tyconsym,
    ACTIONS(265), 1,
      sym__integer_literal,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(529), 1,
      sym__varid,
    ACTIONS(531), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      sym__conid,
    ACTIONS(536), 1,
      anon_sym_SQUOTE,
    ACTIONS(539), 1,
      anon_sym_AT,
    STATE(238), 1,
      sym_constructor,
    STATE(397), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(217), 2,
      sym__consym,
      anon_sym_BQUOTE,
    ACTIONS(277), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(263), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(267), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(242), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(256), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(69), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [4264] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      sym__tyconsym,
    ACTIONS(265), 1,
      sym__integer_literal,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(529), 1,
      sym__varid,
    ACTIONS(531), 1,
      anon_sym_LPAREN,
    ACTIONS(539), 1,
      anon_sym_AT,
    ACTIONS(541), 1,
      sym__conid,
    ACTIONS(544), 1,
      anon_sym_SQUOTE,
    STATE(238), 1,
      sym_constructor,
    STATE(397), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(193), 2,
      sym__consym,
      anon_sym_BQUOTE,
    ACTIONS(277), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(263), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(267), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(242), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(256), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(70), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [4346] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym__tyconsym,
    ACTIONS(547), 1,
      sym__varid,
    ACTIONS(553), 1,
      sym__integer_literal,
    ACTIONS(559), 1,
      anon_sym_LPAREN,
    ACTIONS(562), 1,
      sym__conid,
    ACTIONS(565), 1,
      anon_sym_LBRACK,
    ACTIONS(568), 1,
      anon_sym_SQUOTE,
    ACTIONS(574), 1,
      anon_sym_AT,
    STATE(238), 1,
      sym_constructor,
    STATE(397), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(230), 2,
      sym__consym,
      anon_sym_BQUOTE,
    ACTIONS(571), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(550), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(556), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(242), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(256), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(70), 12,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      sym_type_invisible,
      aux_sym_type_apply_repeat1,
  [4428] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym__varid,
    ACTIONS(585), 1,
      sym__integer_literal,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
    ACTIONS(594), 1,
      sym__conid,
    ACTIONS(597), 1,
      anon_sym_LBRACK,
    ACTIONS(600), 1,
      anon_sym_SQUOTE,
    STATE(235), 1,
      sym_constructor,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(603), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(582), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(588), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(580), 4,
      sym_comma,
      anon_sym_,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
    STATE(244), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(221), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(71), 11,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      aux_sym_constraint_repeat1,
  [4505] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym__varid,
    ACTIONS(612), 1,
      sym__integer_literal,
    ACTIONS(616), 1,
      anon_sym_LPAREN,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(620), 1,
      anon_sym_LBRACK,
    ACTIONS(622), 1,
      anon_sym_SQUOTE,
    STATE(235), 1,
      sym_constructor,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(624), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(610), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(614), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(608), 4,
      sym_comma,
      anon_sym_,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
    STATE(244), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(221), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(71), 11,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
      aux_sym_constraint_repeat1,
  [4582] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(191), 1,
      sym__varid,
    ACTIONS(199), 1,
      sym__integer_literal,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(626), 1,
      anon_sym_SQUOTE,
    STATE(88), 1,
      sym_constructor,
    STATE(381), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(213), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(121), 2,
      sym_type_apply,
      sym__btype,
    STATE(280), 2,
      sym_type_infix,
      sym__type_infix,
    ACTIONS(197), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(201), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(108), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(41), 10,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [4660] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__conid,
    ACTIONS(471), 1,
      sym__varid,
    ACTIONS(475), 1,
      sym__integer_literal,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(628), 1,
      anon_sym_SQUOTE,
    STATE(195), 1,
      sym_constructor,
    STATE(392), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(489), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(219), 2,
      sym_type_apply,
      sym__btype,
    STATE(280), 2,
      sym_type_infix,
      sym__type_infix,
    ACTIONS(473), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(477), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(218), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(210), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(65), 10,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [4738] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(279), 1,
      sym__varid,
    ACTIONS(283), 1,
      sym__integer_literal,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_LBRACK,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    STATE(101), 1,
      sym_constructor,
    STATE(375), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(297), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(151), 2,
      sym_type_apply,
      sym__btype,
    STATE(280), 2,
      sym_type_infix,
      sym__type_infix,
    ACTIONS(281), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(285), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(127), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(128), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(47), 10,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [4816] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__varid,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(634), 1,
      sym__integer_literal,
    ACTIONS(638), 1,
      anon_sym_LPAREN,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(642), 1,
      anon_sym_SQUOTE,
    STATE(349), 1,
      sym_constructor,
    STATE(389), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(644), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(632), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(636), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(390), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(404), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(291), 11,
      sym__persistent_type,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [4887] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__varid,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(634), 1,
      sym__integer_literal,
    ACTIONS(638), 1,
      anon_sym_LPAREN,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(642), 1,
      anon_sym_SQUOTE,
    STATE(349), 1,
      sym_constructor,
    STATE(389), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(644), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(632), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(636), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(390), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(404), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(294), 11,
      sym__persistent_type,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [4958] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__varid,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(634), 1,
      sym__integer_literal,
    ACTIONS(638), 1,
      anon_sym_LPAREN,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(642), 1,
      anon_sym_SQUOTE,
    STATE(349), 1,
      sym_constructor,
    STATE(389), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(644), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(632), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(636), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(390), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(404), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(299), 11,
      sym__persistent_type,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [5029] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(423), 1,
      sym__varid,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(646), 1,
      sym__conid,
    ACTIONS(648), 1,
      anon_sym_SQUOTE,
    STATE(141), 1,
      sym_constructor,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(173), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(177), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(179), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(166), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(165), 10,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [5099] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__conid,
    ACTIONS(471), 1,
      sym__varid,
    ACTIONS(475), 1,
      sym__integer_literal,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(628), 1,
      anon_sym_SQUOTE,
    STATE(195), 1,
      sym_constructor,
    STATE(392), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(489), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(473), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(477), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(218), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(210), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(211), 10,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [5169] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      sym__integer_literal,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(620), 1,
      anon_sym_LBRACK,
    ACTIONS(650), 1,
      sym__varid,
    ACTIONS(652), 1,
      anon_sym_LPAREN,
    ACTIONS(654), 1,
      anon_sym_SQUOTE,
    STATE(340), 1,
      sym_constructor,
    STATE(355), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(624), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(610), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(614), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(372), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(221), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(467), 10,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [5239] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(372), 1,
      sym__varid,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(656), 1,
      sym__conid,
    ACTIONS(658), 1,
      anon_sym_SQUOTE,
    STATE(136), 1,
      sym_constructor,
    STATE(386), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(138), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(155), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(140), 10,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [5309] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(279), 1,
      sym__varid,
    ACTIONS(283), 1,
      sym__integer_literal,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 1,
      anon_sym_LBRACK,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    STATE(101), 1,
      sym_constructor,
    STATE(375), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(297), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(281), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(285), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(127), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(128), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(120), 10,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [5379] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(191), 1,
      sym__varid,
    ACTIONS(199), 1,
      sym__integer_literal,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(626), 1,
      anon_sym_SQUOTE,
    STATE(88), 1,
      sym_constructor,
    STATE(381), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(213), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(197), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(201), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(108), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(100), 10,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [5449] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym__integer_literal,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(529), 1,
      sym__varid,
    ACTIONS(531), 1,
      anon_sym_LPAREN,
    ACTIONS(660), 1,
      sym__conid,
    ACTIONS(662), 1,
      anon_sym_SQUOTE,
    STATE(238), 1,
      sym_constructor,
    STATE(397), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(277), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(263), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(267), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(242), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(256), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(246), 10,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_name,
      sym_type_star,
      sym__atype,
  [5519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 10,
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
  [5556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(672), 9,
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
  [5595] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(676), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(674), 19,
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
  [5634] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_4,
    ACTIONS(685), 1,
      anon_sym_COLON_COLON,
    STATE(36), 1,
      sym__colon2,
    STATE(470), 1,
      sym__type_annotation,
    ACTIONS(680), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(678), 17,
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
  [5679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(690), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(688), 19,
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
  [5718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(692), 19,
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
  [5754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(696), 19,
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
  [5790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 8,
      anon_sym_DOT,
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
  [5826] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_,
    ACTIONS(706), 1,
      anon_sym_EQ_GT,
    ACTIONS(702), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(700), 18,
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
  [5866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(708), 19,
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
  [5902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(678), 19,
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
  [5938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(712), 19,
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
  [5974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(716), 19,
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
  [6010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(720), 19,
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
  [6046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(724), 19,
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
  [6082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(676), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(674), 20,
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
  [6120] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(690), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(688), 20,
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
  [6158] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(728), 19,
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
  [6194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(732), 19,
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
  [6230] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(672), 7,
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
  [6268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(736), 19,
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
  [6304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(740), 19,
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
  [6340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(744), 19,
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
  [6376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(748), 19,
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
  [6412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(752), 19,
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
  [6448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(756), 19,
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
  [6484] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(760), 19,
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
  [6520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(700), 19,
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
  [6556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(760), 20,
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
  [6591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(712), 20,
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
  [6626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 9,
      anon_sym_DOT,
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
  [6661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(708), 20,
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
  [6696] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_,
    ACTIONS(706), 1,
      anon_sym_EQ_GT,
    ACTIONS(702), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(700), 19,
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
  [6735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(720), 20,
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
  [6770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(724), 20,
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
  [6805] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(766), 1,
      sym__consym,
    ACTIONS(768), 1,
      sym__tyconsym,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(774), 1,
      anon_sym_SQUOTE,
    STATE(317), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(476), 1,
      sym_constructor,
    ACTIONS(770), 4,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    ACTIONS(764), 6,
      sym_comma,
      anon_sym_,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(73), 9,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
      sym__qtyconops,
      sym__promoted_tyconop,
      sym__qtyconop,
  [6858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(692), 20,
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
  [6893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(716), 20,
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
  [6928] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(690), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(688), 18,
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
  [6965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(740), 20,
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
  [7000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(732), 20,
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
  [7035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(678), 20,
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
  [7070] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(744), 20,
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
  [7105] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(672), 8,
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
  [7142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(696), 20,
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
  [7177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(728), 20,
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
  [7212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(736), 20,
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
  [7247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(748), 20,
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
  [7282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(752), 20,
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
  [7317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(756), 20,
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
  [7352] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(676), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(674), 18,
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
  [7389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(700), 20,
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
  [7424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(678), 18,
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
  [7458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(736), 18,
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
  [7492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(724), 18,
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
  [7526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(676), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(674), 19,
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
  [7562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 7,
      anon_sym_DOT,
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
  [7596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(708), 18,
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
  [7630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(692), 18,
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
  [7664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(728), 18,
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
  [7698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(696), 18,
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
  [7732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(740), 18,
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
  [7766] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(760), 18,
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
  [7800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(732), 18,
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
  [7834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(756), 18,
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
  [7868] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(774), 1,
      anon_sym_SQUOTE,
    ACTIONS(776), 1,
      sym__tyconsym,
    STATE(317), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(476), 1,
      sym_constructor,
    ACTIONS(770), 3,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    ACTIONS(764), 6,
      sym_comma,
      anon_sym_,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(75), 9,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
      sym__qtyconops,
      sym__promoted_tyconop,
      sym__qtyconop,
  [7920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(752), 18,
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
  [7954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(748), 18,
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
  [7988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(690), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(688), 19,
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
  [8024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(744), 18,
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
  [8058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(720), 18,
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
  [8092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(700), 18,
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
  [8126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(716), 18,
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
  [8160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(672), 6,
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
  [8196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(712), 18,
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
  [8230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(720), 19,
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
  [8263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(696), 19,
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
  [8296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(740), 19,
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
  [8329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(732), 19,
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
  [8362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(724), 19,
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
  [8395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(744), 19,
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
  [8428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(716), 19,
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
  [8461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(708), 19,
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
  [8494] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(692), 19,
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
  [8527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(712), 19,
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
  [8560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(748), 19,
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
  [8593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(752), 19,
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
  [8626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(756), 19,
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
  [8659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(760), 19,
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
  [8692] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(766), 1,
      sym__consym,
    ACTIONS(768), 1,
      sym__tyconsym,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(774), 1,
      anon_sym_SQUOTE,
    STATE(317), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(476), 1,
      sym_constructor,
    ACTIONS(770), 3,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    ACTIONS(764), 5,
      sym_comma,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(73), 9,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
      sym__qtyconops,
      sym__promoted_tyconop,
      sym__qtyconop,
  [8743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(736), 19,
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
  [8776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(728), 19,
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
  [8809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(700), 19,
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
  [8842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(678), 19,
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
  [8875] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(774), 1,
      anon_sym_SQUOTE,
    ACTIONS(776), 1,
      sym__tyconsym,
    STATE(317), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(476), 1,
      sym_constructor,
    ACTIONS(770), 2,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    ACTIONS(764), 5,
      sym_comma,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(75), 9,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
      sym__qtyconops,
      sym__promoted_tyconop,
      sym__qtyconop,
  [8925] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__conid,
    ACTIONS(475), 1,
      sym__integer_literal,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    STATE(193), 1,
      sym_constructor,
    STATE(206), 1,
      sym_qualified_type,
    STATE(392), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(473), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(477), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(205), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(210), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [8976] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(780), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_constructor,
    STATE(115), 1,
      sym_qualified_type,
    STATE(375), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(173), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(177), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(162), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(166), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9027] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym__integer_literal,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(660), 1,
      sym__conid,
    ACTIONS(782), 1,
      anon_sym_LPAREN,
    STATE(239), 1,
      sym_constructor,
    STATE(263), 1,
      sym_qualified_type,
    STATE(397), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(263), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(267), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(254), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(256), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9078] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      sym__integer_literal,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(620), 1,
      anon_sym_LBRACK,
    ACTIONS(784), 1,
      anon_sym_LPAREN,
    STATE(338), 1,
      sym_constructor,
    STATE(355), 1,
      aux_sym__qualifying_module,
    STATE(369), 1,
      sym_qualified_type,
    STATE(461), 1,
      sym__modid,
    ACTIONS(610), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(614), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(229), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(221), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9129] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      sym__integer_literal,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(620), 1,
      anon_sym_LBRACK,
    ACTIONS(786), 1,
      anon_sym_LPAREN,
    STATE(234), 1,
      sym_constructor,
    STATE(243), 1,
      sym_qualified_type,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(610), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(614), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(229), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(221), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 6,
      anon_sym_DOT,
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
  [9211] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(656), 1,
      sym__conid,
    ACTIONS(788), 1,
      anon_sym_LPAREN,
    STATE(124), 1,
      sym_constructor,
    STATE(160), 1,
      sym_qualified_type,
    STATE(386), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(146), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(155), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9262] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(646), 1,
      sym__conid,
    ACTIONS(790), 1,
      anon_sym_LPAREN,
    STATE(154), 1,
      sym_constructor,
    STATE(170), 1,
      sym_qualified_type,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(173), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(177), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(162), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(166), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9313] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym__integer_literal,
    ACTIONS(271), 1,
      sym__conid,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    STATE(193), 1,
      sym_constructor,
    STATE(206), 1,
      sym_qualified_type,
    STATE(392), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(263), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(267), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(254), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(256), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9364] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(634), 1,
      sym__integer_literal,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(794), 1,
      anon_sym_LPAREN,
    STATE(351), 1,
      sym_constructor,
    STATE(380), 1,
      sym_qualified_type,
    STATE(389), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(632), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(636), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(398), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(404), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9415] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(796), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym_constructor,
    STATE(97), 1,
      sym_qualified_type,
    STATE(381), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(146), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(155), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9466] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(199), 1,
      sym__integer_literal,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(798), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym_constructor,
    STATE(97), 1,
      sym_qualified_type,
    STATE(381), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(197), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(201), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(92), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(108), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(690), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(688), 17,
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
  [9550] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(283), 1,
      sym__integer_literal,
    ACTIONS(292), 1,
      anon_sym_LBRACK,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_constructor,
    STATE(115), 1,
      sym_qualified_type,
    STATE(375), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(281), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(285), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(130), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(128), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(676), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(674), 17,
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
  [9634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(672), 5,
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
  [9667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(732), 17,
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
  [9697] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym__varid,
    ACTIONS(804), 1,
      anon_sym_Id,
    ACTIONS(806), 1,
      anon_sym_Primary,
    ACTIONS(808), 1,
      sym__field_strictness_prefix,
    ACTIONS(810), 1,
      anon_sym_Foreign,
    ACTIONS(812), 1,
      anon_sym_deriving,
    ACTIONS(814), 1,
      sym__conid,
    STATE(500), 1,
      sym_entity_body,
    STATE(78), 2,
      sym__field_name,
      sym_variable,
    STATE(216), 2,
      sym__entity_line_definition,
      aux_sym_entity_body_repeat1,
    STATE(343), 2,
      sym__haskell_constraint_name,
      sym_constructor,
    STATE(387), 2,
      sym_entity_derives,
      aux_sym_entity_body_repeat2,
    STATE(515), 6,
      sym__entity_key,
      sym_surrogate_key,
      sym_natural_key,
      sym_field_definition,
      sym_unique_constraint,
      sym_foreign_constraint,
  [9749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(708), 20,
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
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_6,
  [9779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(664), 20,
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
  [9809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(728), 17,
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
  [9839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(748), 17,
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
  [9869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(720), 17,
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
  [9899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(716), 17,
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
  [9929] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(696), 17,
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
  [9959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(712), 17,
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
  [9989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(752), 17,
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
  [10019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(736), 17,
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
  [10049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(756), 17,
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
  [10079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(744), 17,
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
  [10109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(724), 17,
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
  [10139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(692), 17,
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
  [10169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(708), 17,
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
  [10199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(740), 17,
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
  [10229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(760), 17,
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
  [10259] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym__varid,
    ACTIONS(804), 1,
      anon_sym_Id,
    ACTIONS(806), 1,
      anon_sym_Primary,
    ACTIONS(808), 1,
      sym__field_strictness_prefix,
    ACTIONS(810), 1,
      anon_sym_Foreign,
    ACTIONS(812), 1,
      anon_sym_deriving,
    ACTIONS(814), 1,
      sym__conid,
    ACTIONS(816), 1,
      sym__dedent,
    STATE(78), 2,
      sym__field_name,
      sym_variable,
    STATE(232), 2,
      sym__entity_line_definition,
      aux_sym_entity_body_repeat1,
    STATE(343), 2,
      sym__haskell_constraint_name,
      sym_constructor,
    STATE(356), 2,
      sym_entity_derives,
      aux_sym_entity_body_repeat2,
    STATE(515), 6,
      sym__entity_key,
      sym_surrogate_key,
      sym_natural_key,
      sym_field_definition,
      sym_unique_constraint,
      sym_foreign_constraint,
  [10311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(700), 17,
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
  [10341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(678), 17,
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
  [10371] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(770), 1,
      anon_sym_EQ_GT,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(774), 1,
      anon_sym_SQUOTE,
    ACTIONS(818), 1,
      sym__tyconsym,
    STATE(317), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(476), 1,
      sym_constructor,
    ACTIONS(764), 3,
      sym_comma,
      anon_sym_,
      anon_sym_RPAREN,
    STATE(74), 9,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
      sym__qtyconops,
      sym__promoted_tyconop,
      sym__qtyconop,
  [10418] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_,
    ACTIONS(706), 1,
      anon_sym_EQ_GT,
    ACTIONS(702), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(700), 14,
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
  [10450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(744), 18,
      sym_comma,
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
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [10478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(732), 18,
      sym_comma,
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
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [10506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(740), 18,
      sym_comma,
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
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [10534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(736), 18,
      sym_comma,
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
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [10562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(748), 18,
      sym_comma,
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
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [10590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(752), 18,
      sym_comma,
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
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [10618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(756), 18,
      sym_comma,
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
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [10646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(760), 18,
      sym_comma,
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
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [10674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(696), 18,
      sym_comma,
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
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [10702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(700), 18,
      sym_comma,
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
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [10730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(728), 18,
      sym_comma,
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
      sym__conid,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_6,
  [10758] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      sym__varid,
    ACTIONS(823), 1,
      anon_sym_Id,
    ACTIONS(826), 1,
      anon_sym_Primary,
    ACTIONS(829), 1,
      sym__field_strictness_prefix,
    ACTIONS(832), 1,
      anon_sym_Foreign,
    ACTIONS(835), 1,
      anon_sym_deriving,
    ACTIONS(837), 1,
      sym__conid,
    ACTIONS(840), 1,
      sym__dedent,
    STATE(78), 2,
      sym__field_name,
      sym_variable,
    STATE(232), 2,
      sym__entity_line_definition,
      aux_sym_entity_body_repeat1,
    STATE(343), 2,
      sym__haskell_constraint_name,
      sym_constructor,
    STATE(515), 6,
      sym__entity_key,
      sym_surrogate_key,
      sym_natural_key,
      sym_field_definition,
      sym_unique_constraint,
      sym_foreign_constraint,
  [10806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 5,
      anon_sym_DOT,
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
  [10833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(690), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(688), 16,
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
  [10862] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(676), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(674), 16,
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
  [10891] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(672), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(668), 16,
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
  [10920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(672), 4,
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
  [10949] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(676), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(674), 14,
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
  [10978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
    ACTIONS(690), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(688), 14,
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
  [11007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(716), 14,
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
  [11033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(692), 14,
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
  [11059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(678), 14,
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
  [11085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(712), 16,
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
  [11111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(678), 16,
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
  [11137] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__varid,
    ACTIONS(9), 1,
      sym_is_sum_marker,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(844), 1,
      ts_builtin_sym_end,
    STATE(306), 1,
      sym__entity_header,
    STATE(349), 1,
      sym_constructor,
    STATE(389), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(260), 2,
      sym_entity_definition,
      aux_sym_quasi_quotation_repeat1,
    STATE(304), 2,
      sym__entity_name,
      sym_type_name,
    STATE(390), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [11185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(724), 14,
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
  [11211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(708), 14,
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
  [11237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(736), 14,
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
  [11263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(748), 14,
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
  [11289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(752), 14,
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
  [11315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(756), 14,
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
  [11341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(760), 14,
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
  [11367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(700), 14,
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
  [11393] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(696), 14,
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
  [11419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(728), 14,
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
  [11445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(744), 14,
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
  [11471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(732), 14,
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
  [11497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(740), 14,
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
  [11523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(692), 16,
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
  [11549] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      ts_builtin_sym_end,
    ACTIONS(848), 1,
      sym__varid,
    ACTIONS(851), 1,
      sym_is_sum_marker,
    ACTIONS(854), 1,
      anon_sym_LPAREN,
    ACTIONS(857), 1,
      sym__conid,
    ACTIONS(860), 1,
      anon_sym_SQUOTE,
    STATE(306), 1,
      sym__entity_header,
    STATE(349), 1,
      sym_constructor,
    STATE(389), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(260), 2,
      sym_entity_definition,
      aux_sym_quasi_quotation_repeat1,
    STATE(304), 2,
      sym__entity_name,
      sym_type_name,
    STATE(390), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [11597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(720), 16,
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
  [11623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(720), 14,
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
  [11649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(712), 14,
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
  [11675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(716), 16,
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
  [11701] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(774), 1,
      anon_sym_SQUOTE,
    ACTIONS(818), 1,
      sym__tyconsym,
    STATE(317), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(476), 1,
      sym_constructor,
    STATE(74), 9,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
      sym__qtyconops,
      sym__promoted_tyconop,
      sym__qtyconop,
  [11740] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(129), 1,
      sym__tyconsym,
    ACTIONS(131), 1,
      anon_sym_2,
    ACTIONS(133), 1,
      anon_sym_DASH_GT,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(650), 1,
      sym__varid,
    STATE(317), 1,
      aux_sym__qualifying_module,
    STATE(383), 1,
      sym_type_variable,
    STATE(461), 1,
      sym__modid,
    STATE(476), 1,
      sym_constructor,
    STATE(480), 1,
      sym__arrow,
    STATE(479), 6,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym_annotated_type_variable,
  [11785] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(89), 1,
      sym__tyconsym,
    ACTIONS(91), 1,
      anon_sym_2,
    ACTIONS(93), 1,
      anon_sym_DASH_GT,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(650), 1,
      sym__varid,
    STATE(317), 1,
      aux_sym__qualifying_module,
    STATE(383), 1,
      sym_type_variable,
    STATE(461), 1,
      sym__modid,
    STATE(476), 1,
      sym_constructor,
    STATE(506), 1,
      sym__arrow,
    STATE(473), 6,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym_annotated_type_variable,
  [11830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 4,
      sym__integer_literal,
      sym__varid,
      anon_sym_SQUOTE,
      anon_sym_forall,
    ACTIONS(865), 12,
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
  [11854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 4,
      sym__integer_literal,
      sym__varid,
      anon_sym_SQUOTE,
      anon_sym_forall,
    ACTIONS(869), 12,
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
  [11878] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(871), 13,
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
  [11901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(875), 13,
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
  [11924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(879), 13,
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
  [11947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(883), 12,
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
  [11969] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(887), 1,
      sym__tyconsym,
    STATE(317), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(476), 1,
      sym_constructor,
    STATE(273), 7,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
      sym__qtyconops,
  [12003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(889), 12,
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
  [12025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(893), 12,
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
  [12047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(897), 12,
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
  [12069] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym__varid,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    STATE(349), 1,
      sym_constructor,
    STATE(389), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(296), 2,
      sym__entity_name,
      sym_type_name,
    STATE(390), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [12104] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym__varid,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    ACTIONS(903), 1,
      sym__conid,
    ACTIONS(905), 1,
      anon_sym_SQUOTE,
    STATE(340), 1,
      sym_constructor,
    STATE(359), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(424), 2,
      sym__entity_name,
      sym_type_name,
    STATE(372), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [12139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 11,
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
  [12156] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_PERCENT,
    STATE(444), 1,
      sym_modifier,
    ACTIONS(911), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    STATE(53), 2,
      sym__arrow,
      sym__fun_arrow,
    ACTIONS(909), 5,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [12181] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(153), 1,
      sym__tyconsym,
    ACTIONS(618), 1,
      sym__conid,
    STATE(317), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(476), 1,
      sym_constructor,
    STATE(516), 5,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
  [12210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 2,
      anon_sym_,
      anon_sym_EQ_GT,
    ACTIONS(764), 9,
      sym_comma,
      anon_sym_2,
      anon_sym_DASH_GT,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT,
  [12229] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(139), 1,
      sym__tyconsym,
    ACTIONS(618), 1,
      sym__conid,
    STATE(317), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(476), 1,
      sym_constructor,
    STATE(503), 5,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
  [12258] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      sym__varid,
    ACTIONS(922), 1,
      anon_sym_LPAREN,
    ACTIONS(925), 1,
      anon_sym_LBRACE,
    ACTIONS(920), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
    STATE(285), 4,
      sym_type_variable,
      sym_inferred_type_variable,
      sym__quantifier,
      aux_sym__forall_repeat1,
  [12282] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym__varid,
    ACTIONS(930), 1,
      anon_sym_LPAREN,
    ACTIONS(932), 1,
      anon_sym_LBRACE,
    ACTIONS(928), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
    STATE(285), 4,
      sym_type_variable,
      sym_inferred_type_variable,
      sym__quantifier,
      aux_sym__forall_repeat1,
  [12306] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_PERCENT,
    STATE(444), 1,
      sym_modifier,
    ACTIONS(934), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    STATE(51), 2,
      sym__arrow,
      sym__fun_arrow,
    ACTIONS(909), 4,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [12330] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(939), 1,
      sym_exl_mark_attribute,
    ACTIONS(942), 1,
      sym_other_attribute,
    ACTIONS(945), 1,
      sym__newline,
    STATE(288), 1,
      aux_sym_surrogate_key_repeat1,
    STATE(335), 1,
      sym__key_value_attribute_key,
    STATE(374), 3,
      sym__key_attribute,
      sym__field_attribute,
      sym_key_value_attribute,
  [12357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 2,
      anon_sym_,
      anon_sym_EQ_GT,
    ACTIONS(947), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(764), 5,
      anon_sym_2,
      anon_sym_DASH_GT,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
  [12376] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(952), 1,
      sym_exl_mark_attribute,
    ACTIONS(954), 1,
      sym_other_attribute,
    ACTIONS(956), 1,
      sym__newline,
    STATE(288), 1,
      aux_sym_surrogate_key_repeat1,
    STATE(335), 1,
      sym__key_value_attribute_key,
    STATE(374), 3,
      sym__key_attribute,
      sym__field_attribute,
      sym_key_value_attribute,
  [12403] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(952), 1,
      sym_exl_mark_attribute,
    ACTIONS(954), 1,
      sym_other_attribute,
    ACTIONS(958), 1,
      sym__newline,
    STATE(290), 1,
      aux_sym_surrogate_key_repeat1,
    STATE(335), 1,
      sym__key_value_attribute_key,
    STATE(374), 3,
      sym__key_attribute,
      sym__field_attribute,
      sym_key_value_attribute,
  [12430] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(960), 1,
      sym_exl_mark_attribute,
    ACTIONS(962), 1,
      sym_other_attribute,
    ACTIONS(964), 1,
      sym__newline,
    STATE(335), 1,
      sym__key_value_attribute_key,
    STATE(293), 3,
      sym__entity_attribute,
      sym_key_value_attribute,
      aux_sym__entity_header_repeat1,
  [12454] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(969), 1,
      sym_exl_mark_attribute,
    ACTIONS(972), 1,
      sym_other_attribute,
    ACTIONS(975), 1,
      sym__newline,
    STATE(335), 1,
      sym__key_value_attribute_key,
    STATE(293), 3,
      sym__entity_attribute,
      sym_key_value_attribute,
      aux_sym__entity_header_repeat1,
  [12478] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(977), 1,
      sym_exl_mark_attribute,
    ACTIONS(979), 1,
      sym_other_attribute,
    ACTIONS(981), 1,
      sym__newline,
    STATE(302), 1,
      aux_sym_field_definition_repeat1,
    STATE(335), 1,
      sym__key_value_attribute_key,
    STATE(379), 2,
      sym__field_attribute,
      sym_key_value_attribute,
  [12504] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      sym__conid,
    STATE(295), 1,
      aux_sym_entity_derives_repeat1,
    STATE(361), 1,
      sym_constructor,
    STATE(377), 1,
      aux_sym__qualifying_module,
    STATE(427), 1,
      sym_qualified_type,
    STATE(461), 1,
      sym__modid,
    ACTIONS(983), 2,
      sym__dedent,
      anon_sym_deriving,
  [12530] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(988), 1,
      sym_exl_mark_attribute,
    ACTIONS(990), 1,
      sym_other_attribute,
    ACTIONS(992), 1,
      sym__newline,
    STATE(335), 1,
      sym__key_value_attribute_key,
    STATE(305), 3,
      sym__entity_attribute,
      sym_key_value_attribute,
      aux_sym__entity_header_repeat1,
  [12554] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(997), 1,
      sym_exl_mark_attribute,
    ACTIONS(1000), 1,
      sym_other_attribute,
    ACTIONS(1003), 1,
      sym__newline,
    STATE(297), 1,
      aux_sym_field_definition_repeat1,
    STATE(335), 1,
      sym__key_value_attribute_key,
    STATE(379), 2,
      sym__field_attribute,
      sym_key_value_attribute,
  [12580] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      sym__conid,
    STATE(295), 1,
      aux_sym_entity_derives_repeat1,
    STATE(361), 1,
      sym_constructor,
    STATE(377), 1,
      aux_sym__qualifying_module,
    STATE(427), 1,
      sym_qualified_type,
    STATE(461), 1,
      sym__modid,
    ACTIONS(1005), 2,
      sym__dedent,
      anon_sym_deriving,
  [12606] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(977), 1,
      sym_exl_mark_attribute,
    ACTIONS(979), 1,
      sym_other_attribute,
    ACTIONS(1009), 1,
      sym__newline,
    STATE(303), 1,
      aux_sym_field_definition_repeat1,
    STATE(335), 1,
      sym__key_value_attribute_key,
    STATE(379), 2,
      sym__field_attribute,
      sym_key_value_attribute,
  [12632] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(36), 1,
      sym__colon2,
    STATE(419), 1,
      sym_kind,
    STATE(423), 1,
      sym__type_annotation,
    ACTIONS(1013), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
    ACTIONS(1011), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [12654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 2,
      sym__dedent,
      sym__field_strictness_prefix,
    ACTIONS(1015), 6,
      anon_sym_Id,
      anon_sym_Primary,
      anon_sym_Foreign,
      anon_sym_deriving,
      sym__varid,
      sym__conid,
  [12670] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(977), 1,
      sym_exl_mark_attribute,
    ACTIONS(979), 1,
      sym_other_attribute,
    ACTIONS(1019), 1,
      sym__newline,
    STATE(297), 1,
      aux_sym_field_definition_repeat1,
    STATE(335), 1,
      sym__key_value_attribute_key,
    STATE(379), 2,
      sym__field_attribute,
      sym_key_value_attribute,
  [12696] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(977), 1,
      sym_exl_mark_attribute,
    ACTIONS(979), 1,
      sym_other_attribute,
    ACTIONS(1021), 1,
      sym__newline,
    STATE(297), 1,
      aux_sym_field_definition_repeat1,
    STATE(335), 1,
      sym__key_value_attribute_key,
    STATE(379), 2,
      sym__field_attribute,
      sym_key_value_attribute,
  [12722] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(1023), 1,
      sym_exl_mark_attribute,
    ACTIONS(1025), 1,
      sym_other_attribute,
    ACTIONS(1027), 1,
      sym__newline,
    STATE(335), 1,
      sym__key_value_attribute_key,
    STATE(292), 3,
      sym__entity_attribute,
      sym_key_value_attribute,
      aux_sym__entity_header_repeat1,
  [12746] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(960), 1,
      sym_exl_mark_attribute,
    ACTIONS(962), 1,
      sym_other_attribute,
    ACTIONS(1029), 1,
      sym__newline,
    STATE(335), 1,
      sym__key_value_attribute_key,
    STATE(293), 3,
      sym__entity_attribute,
      sym_key_value_attribute,
      aux_sym__entity_header_repeat1,
  [12770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      sym__indent,
    ACTIONS(1031), 6,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [12785] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(1035), 1,
      sym__tyconsym,
    STATE(87), 1,
      sym_constructor,
    STATE(270), 1,
      sym_constructor_operator,
    STATE(332), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [12810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [12823] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(1039), 1,
      sym_exl_mark_attribute,
    ACTIONS(1041), 1,
      sym__newline,
    STATE(319), 1,
      aux_sym_unique_constraint_repeat1,
    STATE(335), 1,
      sym__key_value_attribute_key,
    STATE(450), 2,
      sym_key_value_attribute,
      sym__unique_constraint_attribute,
  [12846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [12859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
    ACTIONS(708), 5,
      anon_sym_2,
      anon_sym_DASH_GT,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
  [12874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [12887] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym__varid,
    ACTIONS(930), 1,
      anon_sym_LPAREN,
    ACTIONS(932), 1,
      anon_sym_LBRACE,
    STATE(286), 4,
      sym_type_variable,
      sym_inferred_type_variable,
      sym__quantifier,
      aux_sym__forall_repeat1,
  [12906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [12919] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      sym__varid,
    STATE(315), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(402), 2,
      sym__field_name,
      sym_variable,
    ACTIONS(1052), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [12938] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(1057), 1,
      sym_exl_mark_attribute,
    ACTIONS(1060), 1,
      sym__newline,
    STATE(316), 1,
      aux_sym_unique_constraint_repeat1,
    STATE(335), 1,
      sym__key_value_attribute_key,
    STATE(450), 2,
      sym_key_value_attribute,
      sym__unique_constraint_attribute,
  [12961] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(1035), 1,
      sym__tyconsym,
    STATE(270), 1,
      sym_constructor_operator,
    STATE(332), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(476), 1,
      sym_constructor,
  [12986] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      sym__varid,
    STATE(315), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(402), 2,
      sym__field_name,
      sym_variable,
    ACTIONS(1064), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [13005] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(1039), 1,
      sym_exl_mark_attribute,
    ACTIONS(1066), 1,
      sym__newline,
    STATE(316), 1,
      aux_sym_unique_constraint_repeat1,
    STATE(335), 1,
      sym__key_value_attribute_key,
    STATE(450), 2,
      sym_key_value_attribute,
      sym__unique_constraint_attribute,
  [13028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 6,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [13052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 6,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [13064] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      sym__conid,
    STATE(298), 1,
      aux_sym_entity_derives_repeat1,
    STATE(361), 1,
      sym_constructor,
    STATE(377), 1,
      aux_sym__qualifying_module,
    STATE(427), 1,
      sym_qualified_type,
    STATE(461), 1,
      sym__modid,
  [13086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 6,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [13110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13122] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(1080), 1,
      anon_sym_LPAREN,
    STATE(351), 1,
      sym_constructor,
    STATE(380), 1,
      sym_qualified_type,
    STATE(389), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [13144] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      sym__conid,
    ACTIONS(1082), 1,
      anon_sym_LPAREN,
    STATE(338), 1,
      sym_constructor,
    STATE(359), 1,
      aux_sym__qualifying_module,
    STATE(369), 1,
      sym_qualified_type,
    STATE(461), 1,
      sym__modid,
  [13166] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      sym__varid,
    STATE(330), 1,
      aux_sym__list_of_fields_repeat1,
    ACTIONS(1064), 2,
      sym__newline,
      anon_sym_References,
    STATE(418), 2,
      sym__field_name,
      sym_variable,
  [13184] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      sym__varid,
    STATE(330), 1,
      aux_sym__list_of_fields_repeat1,
    ACTIONS(1052), 2,
      sym__newline,
      anon_sym_References,
    STATE(418), 2,
      sym__field_name,
      sym_variable,
  [13202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13214] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      sym__consym,
    ACTIONS(1093), 1,
      sym__tyconsym,
    ACTIONS(1095), 1,
      sym__conid,
    STATE(332), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(476), 1,
      sym_constructor,
  [13236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(672), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
    ACTIONS(668), 3,
      anon_sym_2,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
  [13252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(394), 1,
      sym__key_value_attribute_value,
    ACTIONS(1100), 2,
      aux_sym__key_value_attribute_value_token1,
      aux_sym__key_value_attribute_value_token2,
    ACTIONS(1102), 2,
      sym_char,
      sym_string,
  [13279] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__conid,
    STATE(355), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(465), 1,
      sym_constructor,
    STATE(505), 1,
      sym_qualified_type,
  [13298] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      sym__varid,
    STATE(329), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(475), 1,
      sym__list_of_fields,
    STATE(418), 2,
      sym__field_name,
      sym_variable,
  [13315] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(688), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(690), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym_other_attribute,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(668), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [13345] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(674), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(676), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13360] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      sym__varid,
    STATE(329), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(513), 1,
      sym__list_of_fields,
    STATE(418), 2,
      sym__field_name,
      sym_variable,
  [13377] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      sym__varid,
    STATE(329), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(468), 1,
      sym__list_of_fields,
    STATE(418), 2,
      sym__field_name,
      sym_variable,
  [13394] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      sym__varid,
    STATE(309), 1,
      sym__list_of_fields,
    STATE(318), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(402), 2,
      sym__field_name,
      sym_variable,
  [13411] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      sym__colon2,
    STATE(470), 1,
      sym__type_annotation,
    ACTIONS(1013), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [13428] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(44), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1108), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13441] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 1,
      sym_comma,
    ACTIONS(1115), 1,
      anon_sym_RPAREN,
    STATE(458), 1,
      aux_sym__context_constraints_repeat1,
    ACTIONS(1113), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [13458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(62), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1118), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1120), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym_other_attribute,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(674), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [13499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      sym_other_attribute,
    ACTIONS(664), 4,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
      anon_sym_DOT,
  [13512] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym_other_attribute,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(688), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [13527] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      sym__varid,
    STATE(329), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(512), 1,
      sym__list_of_fields,
    STATE(418), 2,
      sym__field_name,
      sym_variable,
  [13544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(43), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1122), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13557] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      sym__varid,
    STATE(329), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(469), 1,
      sym__list_of_fields,
    STATE(418), 2,
      sym__field_name,
      sym_variable,
  [13574] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__conid,
    STATE(332), 1,
      aux_sym__qualifying_module,
    STATE(333), 1,
      sym_constructor,
    STATE(461), 1,
      sym__modid,
  [13590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 1,
      anon_sym_deriving,
    ACTIONS(1126), 1,
      sym__dedent,
    STATE(368), 2,
      sym_entity_derives,
      aux_sym_entity_body_repeat2,
  [13604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      sym_other_attribute,
    ACTIONS(748), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [13616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(1130), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [13628] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      sym__conid,
    STATE(332), 1,
      aux_sym__qualifying_module,
    STATE(333), 1,
      sym_constructor,
    STATE(461), 1,
      sym__modid,
  [13644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      sym_comma,
    STATE(360), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(1135), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [13658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(1137), 3,
      sym__dedent,
      anon_sym_deriving,
      sym__conid,
  [13670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym_other_attribute,
    ACTIONS(716), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [13682] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(694), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym_other_attribute,
    ACTIONS(720), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [13706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      sym__varid,
    ACTIONS(889), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [13718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(722), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(718), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_deriving,
    ACTIONS(1142), 1,
      sym__dedent,
    STATE(368), 2,
      sym_entity_derives,
      aux_sym_entity_body_repeat2,
  [13756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(714), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym_other_attribute,
    ACTIONS(708), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [13780] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__conid,
    STATE(236), 1,
      sym_constructor,
    STATE(332), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [13796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(680), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym_other_attribute,
    ACTIONS(700), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [13820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      sym_other_attribute,
    ACTIONS(1144), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [13832] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym__conid,
    STATE(105), 1,
      sym_constructor,
    STATE(332), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [13848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym_other_attribute,
    ACTIONS(740), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [13860] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      sym__conid,
    STATE(332), 1,
      aux_sym__qualifying_module,
    STATE(395), 1,
      sym_constructor,
    STATE(461), 1,
      sym__modid,
  [13876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_other_attribute,
    ACTIONS(692), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [13888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1150), 1,
      sym_other_attribute,
    ACTIONS(1148), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [13900] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym_other_attribute,
    ACTIONS(712), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [13912] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym__conid,
    STATE(87), 1,
      sym_constructor,
    STATE(332), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [13928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_other_attribute,
    ACTIONS(736), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [13940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(36), 1,
      sym__colon2,
    STATE(470), 1,
      sym__type_annotation,
    ACTIONS(1013), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [13954] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym__conid,
    STATE(159), 1,
      sym_constructor,
    STATE(332), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [13970] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(36), 1,
      sym__colon2,
    STATE(331), 1,
      sym__type_annotation,
    ACTIONS(1013), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [13984] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym__conid,
    STATE(129), 1,
      sym_constructor,
    STATE(332), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [14000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      sym__dedent,
    ACTIONS(1124), 1,
      anon_sym_deriving,
    STATE(368), 2,
      sym_entity_derives,
      aux_sym_entity_body_repeat2,
  [14014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(39), 1,
      sym__colon2,
    STATE(331), 1,
      sym__type_annotation,
    ACTIONS(1152), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [14028] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__conid,
    STATE(332), 1,
      aux_sym__qualifying_module,
    STATE(339), 1,
      sym_constructor,
    STATE(461), 1,
      sym__modid,
  [14044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym_other_attribute,
    ACTIONS(678), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [14056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_other_attribute,
    ACTIONS(752), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [14068] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__conid,
    STATE(196), 1,
      sym_constructor,
    STATE(332), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [14084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_other_attribute,
    ACTIONS(756), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [14096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1156), 1,
      sym_other_attribute,
    ACTIONS(1154), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [14108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(668), 3,
      sym__dedent,
      anon_sym_deriving,
      sym__conid,
  [14120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      sym_other_attribute,
    ACTIONS(760), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [14132] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      sym__conid,
    STATE(237), 1,
      sym_constructor,
    STATE(332), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [14148] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym_other_attribute,
    ACTIONS(696), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [14160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym_other_attribute,
    ACTIONS(728), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [14172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 4,
      sym__dedent,
      anon_sym_deriving,
      anon_sym_DOT,
      sym__conid,
  [14182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1158), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(1160), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [14194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1162), 1,
      sym__varid,
    ACTIONS(1164), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [14206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 4,
      sym_comma,
      anon_sym_,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
  [14216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_other_attribute,
    ACTIONS(744), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [14228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      sym_other_attribute,
    ACTIONS(732), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [14240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1168), 1,
      anon_sym_RPAREN,
    STATE(408), 1,
      aux_sym_type_list_repeat1,
  [14253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      sym_comma,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym_con_tuple_repeat1,
  [14266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1174), 1,
      anon_sym_RPAREN,
    STATE(360), 1,
      aux_sym_type_list_repeat1,
  [14279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_DOT,
    ACTIONS(666), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [14290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1176), 1,
      anon_sym_RBRACK,
    STATE(439), 1,
      aux_sym_type_list_repeat1,
  [14303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1178), 1,
      sym_comma,
    ACTIONS(1181), 1,
      anon_sym_RPAREN,
    STATE(411), 1,
      aux_sym__context_constraints_repeat1,
  [14316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1183), 1,
      sym__varid,
    STATE(77), 2,
      sym__field_name,
      sym_variable,
  [14327] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      sym_cascade_action,
    ACTIONS(1188), 1,
      sym_sql_constraint_name,
    STATE(413), 1,
      aux_sym_foreign_constraint_repeat1,
  [14340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      sym_comma,
    ACTIONS(1190), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym_con_tuple_repeat1,
  [14353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1192), 1,
      anon_sym_RPAREN,
    STATE(408), 1,
      aux_sym_type_list_repeat1,
  [14366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(269), 1,
      sym__carrow,
    ACTIONS(1194), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [14377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 3,
      sym__newline,
      anon_sym_References,
      sym__varid,
  [14386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1164), 3,
      sym__newline,
      anon_sym_References,
      sym__varid,
  [14395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1196), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [14404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1198), 1,
      anon_sym_RPAREN,
    STATE(408), 1,
      aux_sym_type_list_repeat1,
  [14417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      sym_comma,
    ACTIONS(1200), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym_con_tuple_repeat1,
  [14430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1202), 1,
      anon_sym_RBRACK,
    STATE(425), 1,
      aux_sym_type_list_repeat1,
  [14443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1204), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [14452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1206), 1,
      sym_cascade_action,
    ACTIONS(1208), 1,
      sym_sql_constraint_name,
    STATE(449), 1,
      aux_sym_foreign_constraint_repeat1,
  [14465] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1210), 1,
      anon_sym_RBRACK,
    STATE(360), 1,
      aux_sym_type_list_repeat1,
  [14478] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1212), 1,
      anon_sym_RBRACK,
    STATE(360), 1,
      aux_sym_type_list_repeat1,
  [14491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1214), 3,
      sym__dedent,
      anon_sym_deriving,
      sym__conid,
  [14500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1216), 1,
      anon_sym_RBRACK,
    STATE(360), 1,
      aux_sym_type_list_repeat1,
  [14513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      sym_comma,
    ACTIONS(1220), 1,
      anon_sym_RPAREN,
    STATE(458), 1,
      aux_sym__context_constraints_repeat1,
  [14526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [14535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      sym_comma,
    ACTIONS(1222), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym_con_tuple_repeat1,
  [14548] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1224), 1,
      anon_sym_RBRACK,
    STATE(428), 1,
      aux_sym_type_list_repeat1,
  [14561] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      sym_comma,
    ACTIONS(1226), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym_con_tuple_repeat1,
  [14574] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1228), 1,
      anon_sym_RPAREN,
    STATE(408), 1,
      aux_sym_type_list_repeat1,
  [14587] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1230), 1,
      anon_sym_RBRACK,
    STATE(460), 1,
      aux_sym_type_list_repeat1,
  [14600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      sym__tyconsym,
    ACTIONS(1091), 2,
      sym__consym,
      sym__conid,
  [14611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1232), 1,
      anon_sym_RBRACK,
    STATE(426), 1,
      aux_sym_type_list_repeat1,
  [14624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1234), 1,
      anon_sym_RPAREN,
    STATE(408), 1,
      aux_sym_type_list_repeat1,
  [14637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1236), 1,
      anon_sym_RBRACK,
    STATE(360), 1,
      aux_sym_type_list_repeat1,
  [14650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1238), 1,
      anon_sym_RBRACK,
    STATE(443), 1,
      aux_sym_type_list_repeat1,
  [14663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym__varid,
    STATE(383), 1,
      sym_type_variable,
    STATE(495), 1,
      sym_annotated_type_variable,
  [14676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym__varid,
    STATE(344), 1,
      sym_type_variable,
    STATE(499), 1,
      sym_annotated_type_variable,
  [14689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1240), 1,
      anon_sym_RBRACK,
    STATE(360), 1,
      aux_sym_type_list_repeat1,
  [14702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(268), 1,
      sym__arrow,
    ACTIONS(1242), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
  [14713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1244), 1,
      anon_sym_RBRACK,
    STATE(360), 1,
      aux_sym_type_list_repeat1,
  [14726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      sym_comma,
    ACTIONS(1246), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym_con_tuple_repeat1,
  [14739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1248), 1,
      anon_sym_RBRACK,
    STATE(445), 1,
      aux_sym_type_list_repeat1,
  [14752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      sym_comma,
    ACTIONS(1250), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym_con_tuple_repeat1,
  [14765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1252), 1,
      sym_cascade_action,
    ACTIONS(1254), 1,
      sym_sql_constraint_name,
    STATE(413), 1,
      aux_sym_foreign_constraint_repeat1,
  [14778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1256), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exl_mark_attribute,
  [14787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1258), 1,
      anon_sym_RPAREN,
    STATE(408), 1,
      aux_sym_type_list_repeat1,
  [14800] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
    STATE(408), 1,
      aux_sym_type_list_repeat1,
  [14813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1170), 1,
      sym_comma,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym_con_tuple_repeat1,
  [14826] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1264), 1,
      anon_sym_RBRACK,
    STATE(456), 1,
      aux_sym_type_list_repeat1,
  [14839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      sym_comma,
    ACTIONS(1266), 1,
      anon_sym_RPAREN,
    STATE(458), 1,
      aux_sym__context_constraints_repeat1,
  [14852] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1268), 1,
      anon_sym_RBRACK,
    STATE(360), 1,
      aux_sym_type_list_repeat1,
  [14865] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1270), 1,
      anon_sym_RPAREN,
    STATE(408), 1,
      aux_sym_type_list_repeat1,
  [14878] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      sym_comma,
    ACTIONS(1272), 1,
      anon_sym_RPAREN,
    STATE(411), 1,
      aux_sym__context_constraints_repeat1,
  [14891] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1274), 1,
      sym_comma,
    ACTIONS(1277), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym_con_tuple_repeat1,
  [14904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    ACTIONS(1279), 1,
      anon_sym_RBRACK,
    STATE(360), 1,
      aux_sym_type_list_repeat1,
  [14917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1281), 1,
      anon_sym_DOT,
    STATE(436), 1,
      sym__dot,
  [14927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1283), 2,
      sym_comma,
      anon_sym_RPAREN,
  [14935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1160), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [14943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1166), 1,
      sym_comma,
    STATE(408), 1,
      aux_sym_type_list_repeat1,
  [14953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(1285), 1,
      anon_sym_BQUOTE,
  [14963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1287), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [14971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1289), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
  [14979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1291), 1,
      anon_sym_References,
    ACTIONS(1293), 1,
      sym__newline,
  [14989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1295), 1,
      anon_sym_References,
    ACTIONS(1297), 1,
      sym__newline,
  [14999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1299), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1301), 2,
      sym_comma,
      anon_sym_RPAREN,
  [15015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 2,
      sym_comma,
      anon_sym_RPAREN,
  [15023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1303), 1,
      anon_sym_RPAREN,
  [15030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1305), 1,
      anon_sym_RPAREN,
  [15037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1307), 1,
      sym__newline,
  [15044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
  [15051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1309), 1,
      anon_sym_RPAREN,
  [15058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1311), 1,
      anon_sym_RPAREN,
  [15065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1313), 1,
      anon_sym_RPAREN,
  [15072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1315), 1,
      anon_sym_RPAREN,
  [15079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
  [15086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1319), 1,
      anon_sym_RPAREN,
  [15093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1321), 1,
      anon_sym_RPAREN,
  [15100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1323), 1,
      anon_sym_RPAREN,
  [15107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1325), 1,
      anon_sym_RPAREN,
  [15114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1327), 1,
      anon_sym_RPAREN,
  [15121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1329), 1,
      anon_sym_RPAREN,
  [15128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1331), 1,
      anon_sym_RPAREN,
  [15135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1333), 1,
      anon_sym_RPAREN,
  [15142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
  [15149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
  [15156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1339), 1,
      anon_sym_RPAREN,
  [15163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
  [15170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1343), 1,
      anon_sym_RPAREN,
  [15177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1345), 1,
      anon_sym_RPAREN,
  [15184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1347), 1,
      anon_sym_RPAREN,
  [15191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1349), 1,
      anon_sym_RPAREN,
  [15198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1351), 1,
      anon_sym_RPAREN,
  [15205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      anon_sym_RBRACE,
  [15212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1353), 1,
      sym__dedent,
  [15219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1355), 1,
      anon_sym_RPAREN,
  [15226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1357), 1,
      anon_sym_RPAREN,
  [15233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1359), 1,
      anon_sym_RPAREN,
  [15240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1361), 1,
      anon_sym_RPAREN,
  [15247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1363), 1,
      anon_sym_BQUOTE,
  [15254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1365), 1,
      anon_sym_RPAREN,
  [15261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1367), 1,
      anon_sym_RPAREN,
  [15268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1369), 1,
      anon_sym_RPAREN,
  [15275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1371), 1,
      anon_sym_RPAREN,
  [15282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1373), 1,
      anon_sym_RPAREN,
  [15289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1375), 1,
      ts_builtin_sym_end,
  [15296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1377), 1,
      sym__newline,
  [15303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1379), 1,
      sym__newline,
  [15310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1381), 1,
      anon_sym_RPAREN,
  [15317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1383), 1,
      sym__newline,
  [15324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1385), 1,
      anon_sym_RPAREN,
  [15331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1387), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 118,
  [SMALL_STATE(29)] = 236,
  [SMALL_STATE(30)] = 354,
  [SMALL_STATE(31)] = 472,
  [SMALL_STATE(32)] = 590,
  [SMALL_STATE(33)] = 708,
  [SMALL_STATE(34)] = 826,
  [SMALL_STATE(35)] = 944,
  [SMALL_STATE(36)] = 1059,
  [SMALL_STATE(37)] = 1171,
  [SMALL_STATE(38)] = 1285,
  [SMALL_STATE(39)] = 1399,
  [SMALL_STATE(40)] = 1511,
  [SMALL_STATE(41)] = 1603,
  [SMALL_STATE(42)] = 1695,
  [SMALL_STATE(43)] = 1787,
  [SMALL_STATE(44)] = 1894,
  [SMALL_STATE(45)] = 2001,
  [SMALL_STATE(46)] = 2110,
  [SMALL_STATE(47)] = 2217,
  [SMALL_STATE(48)] = 2308,
  [SMALL_STATE(49)] = 2401,
  [SMALL_STATE(50)] = 2492,
  [SMALL_STATE(51)] = 2583,
  [SMALL_STATE(52)] = 2690,
  [SMALL_STATE(53)] = 2797,
  [SMALL_STATE(54)] = 2904,
  [SMALL_STATE(55)] = 2994,
  [SMALL_STATE(56)] = 3088,
  [SMALL_STATE(57)] = 3178,
  [SMALL_STATE(58)] = 3270,
  [SMALL_STATE(59)] = 3360,
  [SMALL_STATE(60)] = 3449,
  [SMALL_STATE(61)] = 3538,
  [SMALL_STATE(62)] = 3643,
  [SMALL_STATE(63)] = 3748,
  [SMALL_STATE(64)] = 3837,
  [SMALL_STATE(65)] = 3923,
  [SMALL_STATE(66)] = 4009,
  [SMALL_STATE(67)] = 4095,
  [SMALL_STATE(68)] = 4182,
  [SMALL_STATE(69)] = 4264,
  [SMALL_STATE(70)] = 4346,
  [SMALL_STATE(71)] = 4428,
  [SMALL_STATE(72)] = 4505,
  [SMALL_STATE(73)] = 4582,
  [SMALL_STATE(74)] = 4660,
  [SMALL_STATE(75)] = 4738,
  [SMALL_STATE(76)] = 4816,
  [SMALL_STATE(77)] = 4887,
  [SMALL_STATE(78)] = 4958,
  [SMALL_STATE(79)] = 5029,
  [SMALL_STATE(80)] = 5099,
  [SMALL_STATE(81)] = 5169,
  [SMALL_STATE(82)] = 5239,
  [SMALL_STATE(83)] = 5309,
  [SMALL_STATE(84)] = 5379,
  [SMALL_STATE(85)] = 5449,
  [SMALL_STATE(86)] = 5519,
  [SMALL_STATE(87)] = 5556,
  [SMALL_STATE(88)] = 5595,
  [SMALL_STATE(89)] = 5634,
  [SMALL_STATE(90)] = 5679,
  [SMALL_STATE(91)] = 5718,
  [SMALL_STATE(92)] = 5754,
  [SMALL_STATE(93)] = 5790,
  [SMALL_STATE(94)] = 5826,
  [SMALL_STATE(95)] = 5866,
  [SMALL_STATE(96)] = 5902,
  [SMALL_STATE(97)] = 5938,
  [SMALL_STATE(98)] = 5974,
  [SMALL_STATE(99)] = 6010,
  [SMALL_STATE(100)] = 6046,
  [SMALL_STATE(101)] = 6082,
  [SMALL_STATE(102)] = 6120,
  [SMALL_STATE(103)] = 6158,
  [SMALL_STATE(104)] = 6194,
  [SMALL_STATE(105)] = 6230,
  [SMALL_STATE(106)] = 6268,
  [SMALL_STATE(107)] = 6304,
  [SMALL_STATE(108)] = 6340,
  [SMALL_STATE(109)] = 6376,
  [SMALL_STATE(110)] = 6412,
  [SMALL_STATE(111)] = 6448,
  [SMALL_STATE(112)] = 6484,
  [SMALL_STATE(113)] = 6520,
  [SMALL_STATE(114)] = 6556,
  [SMALL_STATE(115)] = 6591,
  [SMALL_STATE(116)] = 6626,
  [SMALL_STATE(117)] = 6661,
  [SMALL_STATE(118)] = 6696,
  [SMALL_STATE(119)] = 6735,
  [SMALL_STATE(120)] = 6770,
  [SMALL_STATE(121)] = 6805,
  [SMALL_STATE(122)] = 6858,
  [SMALL_STATE(123)] = 6893,
  [SMALL_STATE(124)] = 6928,
  [SMALL_STATE(125)] = 6965,
  [SMALL_STATE(126)] = 7000,
  [SMALL_STATE(127)] = 7035,
  [SMALL_STATE(128)] = 7070,
  [SMALL_STATE(129)] = 7105,
  [SMALL_STATE(130)] = 7142,
  [SMALL_STATE(131)] = 7177,
  [SMALL_STATE(132)] = 7212,
  [SMALL_STATE(133)] = 7247,
  [SMALL_STATE(134)] = 7282,
  [SMALL_STATE(135)] = 7317,
  [SMALL_STATE(136)] = 7352,
  [SMALL_STATE(137)] = 7389,
  [SMALL_STATE(138)] = 7424,
  [SMALL_STATE(139)] = 7458,
  [SMALL_STATE(140)] = 7492,
  [SMALL_STATE(141)] = 7526,
  [SMALL_STATE(142)] = 7562,
  [SMALL_STATE(143)] = 7596,
  [SMALL_STATE(144)] = 7630,
  [SMALL_STATE(145)] = 7664,
  [SMALL_STATE(146)] = 7698,
  [SMALL_STATE(147)] = 7732,
  [SMALL_STATE(148)] = 7766,
  [SMALL_STATE(149)] = 7800,
  [SMALL_STATE(150)] = 7834,
  [SMALL_STATE(151)] = 7868,
  [SMALL_STATE(152)] = 7920,
  [SMALL_STATE(153)] = 7954,
  [SMALL_STATE(154)] = 7988,
  [SMALL_STATE(155)] = 8024,
  [SMALL_STATE(156)] = 8058,
  [SMALL_STATE(157)] = 8092,
  [SMALL_STATE(158)] = 8126,
  [SMALL_STATE(159)] = 8160,
  [SMALL_STATE(160)] = 8196,
  [SMALL_STATE(161)] = 8230,
  [SMALL_STATE(162)] = 8263,
  [SMALL_STATE(163)] = 8296,
  [SMALL_STATE(164)] = 8329,
  [SMALL_STATE(165)] = 8362,
  [SMALL_STATE(166)] = 8395,
  [SMALL_STATE(167)] = 8428,
  [SMALL_STATE(168)] = 8461,
  [SMALL_STATE(169)] = 8494,
  [SMALL_STATE(170)] = 8527,
  [SMALL_STATE(171)] = 8560,
  [SMALL_STATE(172)] = 8593,
  [SMALL_STATE(173)] = 8626,
  [SMALL_STATE(174)] = 8659,
  [SMALL_STATE(175)] = 8692,
  [SMALL_STATE(176)] = 8743,
  [SMALL_STATE(177)] = 8776,
  [SMALL_STATE(178)] = 8809,
  [SMALL_STATE(179)] = 8842,
  [SMALL_STATE(180)] = 8875,
  [SMALL_STATE(181)] = 8925,
  [SMALL_STATE(182)] = 8976,
  [SMALL_STATE(183)] = 9027,
  [SMALL_STATE(184)] = 9078,
  [SMALL_STATE(185)] = 9129,
  [SMALL_STATE(186)] = 9180,
  [SMALL_STATE(187)] = 9211,
  [SMALL_STATE(188)] = 9262,
  [SMALL_STATE(189)] = 9313,
  [SMALL_STATE(190)] = 9364,
  [SMALL_STATE(191)] = 9415,
  [SMALL_STATE(192)] = 9466,
  [SMALL_STATE(193)] = 9517,
  [SMALL_STATE(194)] = 9550,
  [SMALL_STATE(195)] = 9601,
  [SMALL_STATE(196)] = 9634,
  [SMALL_STATE(197)] = 9667,
  [SMALL_STATE(198)] = 9697,
  [SMALL_STATE(199)] = 9749,
  [SMALL_STATE(200)] = 9779,
  [SMALL_STATE(201)] = 9809,
  [SMALL_STATE(202)] = 9839,
  [SMALL_STATE(203)] = 9869,
  [SMALL_STATE(204)] = 9899,
  [SMALL_STATE(205)] = 9929,
  [SMALL_STATE(206)] = 9959,
  [SMALL_STATE(207)] = 9989,
  [SMALL_STATE(208)] = 10019,
  [SMALL_STATE(209)] = 10049,
  [SMALL_STATE(210)] = 10079,
  [SMALL_STATE(211)] = 10109,
  [SMALL_STATE(212)] = 10139,
  [SMALL_STATE(213)] = 10169,
  [SMALL_STATE(214)] = 10199,
  [SMALL_STATE(215)] = 10229,
  [SMALL_STATE(216)] = 10259,
  [SMALL_STATE(217)] = 10311,
  [SMALL_STATE(218)] = 10341,
  [SMALL_STATE(219)] = 10371,
  [SMALL_STATE(220)] = 10418,
  [SMALL_STATE(221)] = 10450,
  [SMALL_STATE(222)] = 10478,
  [SMALL_STATE(223)] = 10506,
  [SMALL_STATE(224)] = 10534,
  [SMALL_STATE(225)] = 10562,
  [SMALL_STATE(226)] = 10590,
  [SMALL_STATE(227)] = 10618,
  [SMALL_STATE(228)] = 10646,
  [SMALL_STATE(229)] = 10674,
  [SMALL_STATE(230)] = 10702,
  [SMALL_STATE(231)] = 10730,
  [SMALL_STATE(232)] = 10758,
  [SMALL_STATE(233)] = 10806,
  [SMALL_STATE(234)] = 10833,
  [SMALL_STATE(235)] = 10862,
  [SMALL_STATE(236)] = 10891,
  [SMALL_STATE(237)] = 10920,
  [SMALL_STATE(238)] = 10949,
  [SMALL_STATE(239)] = 10978,
  [SMALL_STATE(240)] = 11007,
  [SMALL_STATE(241)] = 11033,
  [SMALL_STATE(242)] = 11059,
  [SMALL_STATE(243)] = 11085,
  [SMALL_STATE(244)] = 11111,
  [SMALL_STATE(245)] = 11137,
  [SMALL_STATE(246)] = 11185,
  [SMALL_STATE(247)] = 11211,
  [SMALL_STATE(248)] = 11237,
  [SMALL_STATE(249)] = 11263,
  [SMALL_STATE(250)] = 11289,
  [SMALL_STATE(251)] = 11315,
  [SMALL_STATE(252)] = 11341,
  [SMALL_STATE(253)] = 11367,
  [SMALL_STATE(254)] = 11393,
  [SMALL_STATE(255)] = 11419,
  [SMALL_STATE(256)] = 11445,
  [SMALL_STATE(257)] = 11471,
  [SMALL_STATE(258)] = 11497,
  [SMALL_STATE(259)] = 11523,
  [SMALL_STATE(260)] = 11549,
  [SMALL_STATE(261)] = 11597,
  [SMALL_STATE(262)] = 11623,
  [SMALL_STATE(263)] = 11649,
  [SMALL_STATE(264)] = 11675,
  [SMALL_STATE(265)] = 11701,
  [SMALL_STATE(266)] = 11740,
  [SMALL_STATE(267)] = 11785,
  [SMALL_STATE(268)] = 11830,
  [SMALL_STATE(269)] = 11854,
  [SMALL_STATE(270)] = 11878,
  [SMALL_STATE(271)] = 11901,
  [SMALL_STATE(272)] = 11924,
  [SMALL_STATE(273)] = 11947,
  [SMALL_STATE(274)] = 11969,
  [SMALL_STATE(275)] = 12003,
  [SMALL_STATE(276)] = 12025,
  [SMALL_STATE(277)] = 12047,
  [SMALL_STATE(278)] = 12069,
  [SMALL_STATE(279)] = 12104,
  [SMALL_STATE(280)] = 12139,
  [SMALL_STATE(281)] = 12156,
  [SMALL_STATE(282)] = 12181,
  [SMALL_STATE(283)] = 12210,
  [SMALL_STATE(284)] = 12229,
  [SMALL_STATE(285)] = 12258,
  [SMALL_STATE(286)] = 12282,
  [SMALL_STATE(287)] = 12306,
  [SMALL_STATE(288)] = 12330,
  [SMALL_STATE(289)] = 12357,
  [SMALL_STATE(290)] = 12376,
  [SMALL_STATE(291)] = 12403,
  [SMALL_STATE(292)] = 12430,
  [SMALL_STATE(293)] = 12454,
  [SMALL_STATE(294)] = 12478,
  [SMALL_STATE(295)] = 12504,
  [SMALL_STATE(296)] = 12530,
  [SMALL_STATE(297)] = 12554,
  [SMALL_STATE(298)] = 12580,
  [SMALL_STATE(299)] = 12606,
  [SMALL_STATE(300)] = 12632,
  [SMALL_STATE(301)] = 12654,
  [SMALL_STATE(302)] = 12670,
  [SMALL_STATE(303)] = 12696,
  [SMALL_STATE(304)] = 12722,
  [SMALL_STATE(305)] = 12746,
  [SMALL_STATE(306)] = 12770,
  [SMALL_STATE(307)] = 12785,
  [SMALL_STATE(308)] = 12810,
  [SMALL_STATE(309)] = 12823,
  [SMALL_STATE(310)] = 12846,
  [SMALL_STATE(311)] = 12859,
  [SMALL_STATE(312)] = 12874,
  [SMALL_STATE(313)] = 12887,
  [SMALL_STATE(314)] = 12906,
  [SMALL_STATE(315)] = 12919,
  [SMALL_STATE(316)] = 12938,
  [SMALL_STATE(317)] = 12961,
  [SMALL_STATE(318)] = 12986,
  [SMALL_STATE(319)] = 13005,
  [SMALL_STATE(320)] = 13028,
  [SMALL_STATE(321)] = 13040,
  [SMALL_STATE(322)] = 13052,
  [SMALL_STATE(323)] = 13064,
  [SMALL_STATE(324)] = 13086,
  [SMALL_STATE(325)] = 13098,
  [SMALL_STATE(326)] = 13110,
  [SMALL_STATE(327)] = 13122,
  [SMALL_STATE(328)] = 13144,
  [SMALL_STATE(329)] = 13166,
  [SMALL_STATE(330)] = 13184,
  [SMALL_STATE(331)] = 13202,
  [SMALL_STATE(332)] = 13214,
  [SMALL_STATE(333)] = 13236,
  [SMALL_STATE(334)] = 13252,
  [SMALL_STATE(335)] = 13264,
  [SMALL_STATE(336)] = 13279,
  [SMALL_STATE(337)] = 13298,
  [SMALL_STATE(338)] = 13315,
  [SMALL_STATE(339)] = 13330,
  [SMALL_STATE(340)] = 13345,
  [SMALL_STATE(341)] = 13360,
  [SMALL_STATE(342)] = 13377,
  [SMALL_STATE(343)] = 13394,
  [SMALL_STATE(344)] = 13411,
  [SMALL_STATE(345)] = 13428,
  [SMALL_STATE(346)] = 13441,
  [SMALL_STATE(347)] = 13458,
  [SMALL_STATE(348)] = 13471,
  [SMALL_STATE(349)] = 13484,
  [SMALL_STATE(350)] = 13499,
  [SMALL_STATE(351)] = 13512,
  [SMALL_STATE(352)] = 13527,
  [SMALL_STATE(353)] = 13544,
  [SMALL_STATE(354)] = 13557,
  [SMALL_STATE(355)] = 13574,
  [SMALL_STATE(356)] = 13590,
  [SMALL_STATE(357)] = 13604,
  [SMALL_STATE(358)] = 13616,
  [SMALL_STATE(359)] = 13628,
  [SMALL_STATE(360)] = 13644,
  [SMALL_STATE(361)] = 13658,
  [SMALL_STATE(362)] = 13670,
  [SMALL_STATE(363)] = 13682,
  [SMALL_STATE(364)] = 13694,
  [SMALL_STATE(365)] = 13706,
  [SMALL_STATE(366)] = 13718,
  [SMALL_STATE(367)] = 13730,
  [SMALL_STATE(368)] = 13742,
  [SMALL_STATE(369)] = 13756,
  [SMALL_STATE(370)] = 13768,
  [SMALL_STATE(371)] = 13780,
  [SMALL_STATE(372)] = 13796,
  [SMALL_STATE(373)] = 13808,
  [SMALL_STATE(374)] = 13820,
  [SMALL_STATE(375)] = 13832,
  [SMALL_STATE(376)] = 13848,
  [SMALL_STATE(377)] = 13860,
  [SMALL_STATE(378)] = 13876,
  [SMALL_STATE(379)] = 13888,
  [SMALL_STATE(380)] = 13900,
  [SMALL_STATE(381)] = 13912,
  [SMALL_STATE(382)] = 13928,
  [SMALL_STATE(383)] = 13940,
  [SMALL_STATE(384)] = 13954,
  [SMALL_STATE(385)] = 13970,
  [SMALL_STATE(386)] = 13984,
  [SMALL_STATE(387)] = 14000,
  [SMALL_STATE(388)] = 14014,
  [SMALL_STATE(389)] = 14028,
  [SMALL_STATE(390)] = 14044,
  [SMALL_STATE(391)] = 14056,
  [SMALL_STATE(392)] = 14068,
  [SMALL_STATE(393)] = 14084,
  [SMALL_STATE(394)] = 14096,
  [SMALL_STATE(395)] = 14108,
  [SMALL_STATE(396)] = 14120,
  [SMALL_STATE(397)] = 14132,
  [SMALL_STATE(398)] = 14148,
  [SMALL_STATE(399)] = 14160,
  [SMALL_STATE(400)] = 14172,
  [SMALL_STATE(401)] = 14182,
  [SMALL_STATE(402)] = 14194,
  [SMALL_STATE(403)] = 14206,
  [SMALL_STATE(404)] = 14216,
  [SMALL_STATE(405)] = 14228,
  [SMALL_STATE(406)] = 14240,
  [SMALL_STATE(407)] = 14253,
  [SMALL_STATE(408)] = 14266,
  [SMALL_STATE(409)] = 14279,
  [SMALL_STATE(410)] = 14290,
  [SMALL_STATE(411)] = 14303,
  [SMALL_STATE(412)] = 14316,
  [SMALL_STATE(413)] = 14327,
  [SMALL_STATE(414)] = 14340,
  [SMALL_STATE(415)] = 14353,
  [SMALL_STATE(416)] = 14366,
  [SMALL_STATE(417)] = 14377,
  [SMALL_STATE(418)] = 14386,
  [SMALL_STATE(419)] = 14395,
  [SMALL_STATE(420)] = 14404,
  [SMALL_STATE(421)] = 14417,
  [SMALL_STATE(422)] = 14430,
  [SMALL_STATE(423)] = 14443,
  [SMALL_STATE(424)] = 14452,
  [SMALL_STATE(425)] = 14465,
  [SMALL_STATE(426)] = 14478,
  [SMALL_STATE(427)] = 14491,
  [SMALL_STATE(428)] = 14500,
  [SMALL_STATE(429)] = 14513,
  [SMALL_STATE(430)] = 14526,
  [SMALL_STATE(431)] = 14535,
  [SMALL_STATE(432)] = 14548,
  [SMALL_STATE(433)] = 14561,
  [SMALL_STATE(434)] = 14574,
  [SMALL_STATE(435)] = 14587,
  [SMALL_STATE(436)] = 14600,
  [SMALL_STATE(437)] = 14611,
  [SMALL_STATE(438)] = 14624,
  [SMALL_STATE(439)] = 14637,
  [SMALL_STATE(440)] = 14650,
  [SMALL_STATE(441)] = 14663,
  [SMALL_STATE(442)] = 14676,
  [SMALL_STATE(443)] = 14689,
  [SMALL_STATE(444)] = 14702,
  [SMALL_STATE(445)] = 14713,
  [SMALL_STATE(446)] = 14726,
  [SMALL_STATE(447)] = 14739,
  [SMALL_STATE(448)] = 14752,
  [SMALL_STATE(449)] = 14765,
  [SMALL_STATE(450)] = 14778,
  [SMALL_STATE(451)] = 14787,
  [SMALL_STATE(452)] = 14800,
  [SMALL_STATE(453)] = 14813,
  [SMALL_STATE(454)] = 14826,
  [SMALL_STATE(455)] = 14839,
  [SMALL_STATE(456)] = 14852,
  [SMALL_STATE(457)] = 14865,
  [SMALL_STATE(458)] = 14878,
  [SMALL_STATE(459)] = 14891,
  [SMALL_STATE(460)] = 14904,
  [SMALL_STATE(461)] = 14917,
  [SMALL_STATE(462)] = 14927,
  [SMALL_STATE(463)] = 14935,
  [SMALL_STATE(464)] = 14943,
  [SMALL_STATE(465)] = 14953,
  [SMALL_STATE(466)] = 14963,
  [SMALL_STATE(467)] = 14971,
  [SMALL_STATE(468)] = 14979,
  [SMALL_STATE(469)] = 14989,
  [SMALL_STATE(470)] = 14999,
  [SMALL_STATE(471)] = 15007,
  [SMALL_STATE(472)] = 15015,
  [SMALL_STATE(473)] = 15023,
  [SMALL_STATE(474)] = 15030,
  [SMALL_STATE(475)] = 15037,
  [SMALL_STATE(476)] = 15044,
  [SMALL_STATE(477)] = 15051,
  [SMALL_STATE(478)] = 15058,
  [SMALL_STATE(479)] = 15065,
  [SMALL_STATE(480)] = 15072,
  [SMALL_STATE(481)] = 15079,
  [SMALL_STATE(482)] = 15086,
  [SMALL_STATE(483)] = 15093,
  [SMALL_STATE(484)] = 15100,
  [SMALL_STATE(485)] = 15107,
  [SMALL_STATE(486)] = 15114,
  [SMALL_STATE(487)] = 15121,
  [SMALL_STATE(488)] = 15128,
  [SMALL_STATE(489)] = 15135,
  [SMALL_STATE(490)] = 15142,
  [SMALL_STATE(491)] = 15149,
  [SMALL_STATE(492)] = 15156,
  [SMALL_STATE(493)] = 15163,
  [SMALL_STATE(494)] = 15170,
  [SMALL_STATE(495)] = 15177,
  [SMALL_STATE(496)] = 15184,
  [SMALL_STATE(497)] = 15191,
  [SMALL_STATE(498)] = 15198,
  [SMALL_STATE(499)] = 15205,
  [SMALL_STATE(500)] = 15212,
  [SMALL_STATE(501)] = 15219,
  [SMALL_STATE(502)] = 15226,
  [SMALL_STATE(503)] = 15233,
  [SMALL_STATE(504)] = 15240,
  [SMALL_STATE(505)] = 15247,
  [SMALL_STATE(506)] = 15254,
  [SMALL_STATE(507)] = 15261,
  [SMALL_STATE(508)] = 15268,
  [SMALL_STATE(509)] = 15275,
  [SMALL_STATE(510)] = 15282,
  [SMALL_STATE(511)] = 15289,
  [SMALL_STATE(512)] = 15296,
  [SMALL_STATE(513)] = 15303,
  [SMALL_STATE(514)] = 15310,
  [SMALL_STATE(515)] = 15317,
  [SMALL_STATE(516)] = 15324,
  [SMALL_STATE(517)] = 15331,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quotation, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_apply, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_apply, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(86),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(192),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__btype, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__btype, 1),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(86),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(192),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(95),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(108),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(107),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(107),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(7),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(86),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(28),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(192),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(104),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(84),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(93),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(194),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(199),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atype, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atype, 1),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(221),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__atype, 1), SHIFT(223),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(223),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 8),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 1, .production_id = 8),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(10),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(200),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(30),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__atype, 1), SHIFT(185),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(222),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(93),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(194),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(117),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(128),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(125),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(125),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(13),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(93),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(29),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(194),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(126),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(83),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(116),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(187),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), REDUCE(sym_constraint, 1, .production_id = 8),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(116),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(187),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(143),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(155),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(147),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(147),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(11),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(116),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(32),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(187),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(149),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(82),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(142),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(188),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(168),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(166),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(163),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(163),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(6),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(142),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(31),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(188),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(164),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(79),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(142),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(188),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(186),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(181),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(186),
  [496] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(181),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(213),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(210),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(214),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(214),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(9),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(186),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(34),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(181),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(197),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(80),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(233),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(183),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(233),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(183),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(247),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(256),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(258),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(258),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(12),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(233),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(27),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(183),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(257),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(85),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(199),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(221),
  [585] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(223),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(223),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(10),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(200),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(30),
  [600] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(185),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(222),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 2, .production_id = 8),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor, 1),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type, 2, .production_id = 4),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__modid, 1, .production_id = 2),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type, 2, .production_id = 4),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_name, 1), SHIFT(36),
  [685] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_name, 1), SHIFT(36),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tycon, 2, .production_id = 4),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tycon, 2, .production_id = 4),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tycon, 4),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tycon, 4),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_promoted_literal, 2),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_promoted_literal, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con_unit, 2),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con_unit, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 2),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__context_constraints, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variable, 1),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variable, 1),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tycon, 2),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tycon, 2),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tycon_arrow, 3),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tycon_arrow, 3),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 3),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_invisible, 2),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_invisible, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con_list, 2),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con_list, 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_star, 1),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_star, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 4),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_list, 4),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_literal, 1),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_literal, 1),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 3),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_list, 3),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con_tuple, 3),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con_tuple, 3),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parens, 3),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parens, 3),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_tuple, 3),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_tuple, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_infix, 1),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_infix, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 1),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [820] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(275),
  [823] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(76),
  [826] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(352),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(412),
  [832] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(279),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [837] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(200),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modid, 1, .production_id = 2),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quotation, 1),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(370),
  [851] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(278),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(266),
  [857] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(350),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(327),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fun_arrow, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fun_arrow, 2),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__context, 2),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_constructor_operator, 2),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_constructor_operator, 2),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type_operator, 2),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type_operator, 2),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_operator, 1),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_operator, 1),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tyconop, 2),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tyconop, 2),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ticked_qtycon, 3),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ticked_qtycon, 3),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ticked_qtycon, 3, .production_id = 4),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ticked_qtycon, 3, .production_id = 4),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_infix, 3, .production_id = 21),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [917] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2), SHIFT_REPEAT(199),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2),
  [922] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2), SHIFT_REPEAT(441),
  [925] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2), SHIFT_REPEAT(442),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forall, 2),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [936] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_surrogate_key_repeat1, 2), SHIFT_REPEAT(335),
  [939] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_surrogate_key_repeat1, 2), SHIFT_REPEAT(374),
  [942] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_surrogate_key_repeat1, 2), SHIFT_REPEAT(374),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_surrogate_key_repeat1, 2),
  [947] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_infix, 1), REDUCE(sym_constraint, 1),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_surrogate_key, 3, .production_id = 15),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_surrogate_key, 2, .production_id = 9),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [966] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2), SHIFT_REPEAT(335),
  [969] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2), SHIFT_REPEAT(293),
  [972] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__entity_header_repeat1, 2), SHIFT_REPEAT(293),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3, .production_id = 16),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_derives_repeat1, 2, .production_id = 17),
  [985] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_derives_repeat1, 2, .production_id = 17), SHIFT_REPEAT(400),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [990] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [994] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(335),
  [997] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(379),
  [1000] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(379),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_derives, 2, .production_id = 13),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2, .production_id = 14),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_with_kind, 1),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1015] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__entity_line_definition, 2),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_line_definition, 2),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 4, .production_id = 22),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3, .production_id = 18),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 1, .production_id = 1),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 3, .production_id = 5),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 2),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 3, .production_id = 6),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 4, .production_id = 6),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 2, .production_id = 5),
  [1049] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_of_fields_repeat1, 2), SHIFT_REPEAT(365),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_of_fields_repeat1, 2),
  [1054] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unique_constraint_repeat1, 2), SHIFT_REPEAT(335),
  [1057] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unique_constraint_repeat1, 2), SHIFT_REPEAT(450),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unique_constraint_repeat1, 2),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_of_fields, 1, .production_id = 10),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 3, .production_id = 19),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_quantifiers, 3),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inferred_type_variable, 3),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 4, .production_id = 1),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_fun, 3),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantifier, 3),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_annotation, 2, .production_id = 9),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1086] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_of_fields_repeat1, 2), SHIFT_REPEAT(417),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_param, 2, .production_id = 7),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__qualifying_module, 2),
  [1093] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__qualifying_module, 2),
  [1095] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__qualifying_module, 2), SHIFT_REPEAT(200),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_context, 2),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_or_implicit, 1), SHIFT(45),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_or_implicit, 1),
  [1115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_or_implicit, 1), SHIFT(463),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 2),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint, 1),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 1),
  [1132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2), SHIFT_REPEAT(35),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_derives_repeat1, 1, .production_id = 11),
  [1139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat2, 2), SHIFT_REPEAT(323),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat2, 2),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_surrogate_key_repeat1, 1),
  [1146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_surrogate_key_repeat1, 1),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 1),
  [1150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_definition_repeat1, 1),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_attribute, 2),
  [1156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value_attribute, 2),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint, 3),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 3),
  [1162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_of_fields_repeat1, 1),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_of_fields_repeat1, 1),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_tuple, 2),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__context_constraints_repeat1, 2), SHIFT_REPEAT(45),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context_constraints_repeat1, 2),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_foreign_constraint_repeat1, 2), SHIFT_REPEAT(413),
  [1188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_foreign_constraint_repeat1, 2),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_with_kind, 2),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kind, 1, .production_id = 20),
  [1206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [1208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_derives_repeat1, 1, .production_id = 12),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unique_constraint_repeat1, 1),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_con_tuple_repeat1, 2), SHIFT_REPEAT(459),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_con_tuple_repeat1, 2),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_context, 2),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 4),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 4),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 5),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotated_type_variable, 2, .production_id = 7),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantified_constraint, 3),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 7, .production_id = 24),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1375] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_key, 2),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 6, .production_id = 23),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
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
