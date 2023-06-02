#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 517
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 177
#define ALIAS_COUNT 5
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 23

enum {
  sym__varid = 1,
  sym_is_sum_marker = 2,
  sym_comment = 3,
  anon_sym_Id = 4,
  anon_sym_Primary = 5,
  aux_sym_key_value_attribute_token1 = 6,
  anon_sym_EQ = 7,
  aux_sym__key_value_atribute_value_other_token_token1 = 8,
  sym_exl_mark_attribute = 9,
  sym__field_strictness_prefix = 10,
  sym_cascade_action = 11,
  sym__sql_constraint_name = 12,
  anon_sym_Foreign = 13,
  anon_sym_References = 14,
  anon_sym_deriving = 15,
  sym_comma = 16,
  anon_sym_DOT = 17,
  sym__consym = 18,
  sym__tyconsym = 19,
  sym_float = 20,
  sym_char = 21,
  sym_string = 22,
  sym__integer_literal = 23,
  sym__binary_literal = 24,
  sym__octal_literal = 25,
  sym__hex_literal = 26,
  anon_sym_ = 27,
  anon_sym_EQ_GT = 28,
  anon_sym_2 = 29,
  anon_sym_DASH_GT = 30,
  anon_sym_3 = 31,
  anon_sym_LT_DASH = 32,
  anon_sym_4 = 33,
  anon_sym_COLON_COLON = 34,
  sym__immediate_dot = 35,
  sym_label = 36,
  anon_sym_DASH = 37,
  anon_sym_LPAREN = 38,
  anon_sym_RPAREN = 39,
  anon_sym_BQUOTE = 40,
  sym_implicit_parid = 41,
  sym__conid = 42,
  anon_sym_LBRACK = 43,
  anon_sym_RBRACK = 44,
  anon_sym_SQUOTE = 45,
  anon_sym_pattern = 46,
  anon_sym_type = 47,
  anon_sym_hiding = 48,
  anon_sym_import = 49,
  anon_sym_qualified = 50,
  anon_sym_as = 51,
  anon_sym_module = 52,
  anon_sym_LBRACE = 53,
  anon_sym_RBRACE = 54,
  anon_sym_forall = 55,
  anon_sym_5 = 56,
  anon_sym_PIPE = 57,
  anon_sym_STAR = 58,
  anon_sym_6 = 59,
  anon_sym_AT = 60,
  anon_sym_PERCENT = 61,
  anon_sym_instance = 62,
  anon_sym_representational = 63,
  anon_sym_nominal = 64,
  anon_sym_phantom = 65,
  anon_sym__ = 66,
  anon_sym_role = 67,
  sym__newline = 68,
  sym__indent = 69,
  sym__dedent = 70,
  sym_quasi_quotation = 71,
  sym_entity_definition = 72,
  sym_entity_body = 73,
  sym__entity_name = 74,
  sym__field_name = 75,
  sym__haskell_constraint_name = 76,
  sym__persistent_type = 77,
  sym__entity_header = 78,
  sym__entity_line_definition = 79,
  sym__entity_key = 80,
  sym_surrogate_key = 81,
  sym_natural_key = 82,
  sym__key_attribute = 83,
  sym__entity_attribute = 84,
  sym__field_attribute = 85,
  sym_key_value_attribute = 86,
  sym__key_value_attribute_value = 87,
  sym__key_value_atribute_value_literal = 88,
  sym__key_value_atribute_value_other_token = 89,
  sym_other_attribute = 90,
  sym_field_definition = 91,
  sym_unique_constraint = 92,
  sym__unique_constraint_attribute = 93,
  sym_foreign_constraint = 94,
  sym_entity_derives = 95,
  sym__dot = 96,
  sym_integer = 97,
  sym__literal = 98,
  sym__carrow = 99,
  sym__arrow = 100,
  sym__colon2 = 101,
  sym_variable = 102,
  sym_constructor = 103,
  sym_constructor_operator = 104,
  sym_qualified_constructor_operator = 105,
  sym_con_unit = 106,
  sym_con_list = 107,
  sym_con_tuple = 108,
  sym_qualified_type = 109,
  sym__type_operator = 110,
  sym_qualified_type_operator = 111,
  sym__qualified_type_operator = 112,
  sym__ticked_qtycon = 113,
  sym__qtyconops = 114,
  sym__promoted_tyconop = 115,
  sym__qtyconop = 116,
  sym_tycon_arrow = 117,
  sym_type_literal = 118,
  sym__promoted_tycon = 119,
  sym__modid = 120,
  aux_sym__qualifying_module = 121,
  sym_type_variable = 122,
  sym_annotated_type_variable = 123,
  sym_inferred_type_variable = 124,
  sym__quantifier = 125,
  sym__forall_kw = 126,
  sym__forall_dot = 127,
  sym__forall = 128,
  sym_type_parens = 129,
  sym_type_list = 130,
  sym__type_tuple = 131,
  sym_type_tuple = 132,
  sym__type_promotable_literal = 133,
  sym__type_promoted_literal = 134,
  sym__type_literal = 135,
  sym_type_name = 136,
  sym_type_star = 137,
  sym__atype = 138,
  sym_type_invisible = 139,
  sym_type_apply = 140,
  sym__btype = 141,
  sym_implicit_param = 142,
  sym_type_infix = 143,
  sym__type_infix = 144,
  sym_constraint = 145,
  sym__quantified_constraint = 146,
  sym__constraint_context = 147,
  sym__constraint = 148,
  sym__context_constraints = 149,
  sym__context = 150,
  sym__type_quantifiers = 151,
  sym__type_context = 152,
  sym_modifier = 153,
  sym__fun_arrow = 154,
  sym__type_fun = 155,
  sym__type = 156,
  sym__type_or_implicit = 157,
  sym__type_annotation = 158,
  sym_kind = 159,
  sym__type_with_kind = 160,
  aux_sym_quasi_quotation_repeat1 = 161,
  aux_sym_entity_body_repeat1 = 162,
  aux_sym_entity_body_repeat2 = 163,
  aux_sym__entity_header_repeat1 = 164,
  aux_sym_surrogate_key_repeat1 = 165,
  aux_sym_natural_key_repeat1 = 166,
  aux_sym_field_definition_repeat1 = 167,
  aux_sym_unique_constraint_repeat1 = 168,
  aux_sym_foreign_constraint_repeat1 = 169,
  aux_sym_entity_derives_repeat1 = 170,
  aux_sym_con_tuple_repeat1 = 171,
  aux_sym__forall_repeat1 = 172,
  aux_sym_type_list_repeat1 = 173,
  aux_sym_type_apply_repeat1 = 174,
  aux_sym_constraint_repeat1 = 175,
  aux_sym__context_constraints_repeat1 = 176,
  alias_sym_attributes = 177,
  alias_sym_class_name = 178,
  alias_sym_module = 179,
  alias_sym_name = 180,
  alias_sym_type = 181,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__varid] = "_varid",
  [sym_is_sum_marker] = "is_sum_marker",
  [sym_comment] = "comment",
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
  [sym_comment] = sym_comment,
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
  [4] = 2,
  [5] = 3,
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
  [39] = 38,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 40,
  [46] = 41,
  [47] = 47,
  [48] = 42,
  [49] = 49,
  [50] = 43,
  [51] = 51,
  [52] = 49,
  [53] = 47,
  [54] = 42,
  [55] = 41,
  [56] = 51,
  [57] = 40,
  [58] = 51,
  [59] = 41,
  [60] = 60,
  [61] = 61,
  [62] = 42,
  [63] = 40,
  [64] = 40,
  [65] = 42,
  [66] = 41,
  [67] = 51,
  [68] = 41,
  [69] = 42,
  [70] = 40,
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
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 87,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 88,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 86,
  [109] = 109,
  [110] = 110,
  [111] = 89,
  [112] = 112,
  [113] = 113,
  [114] = 97,
  [115] = 105,
  [116] = 89,
  [117] = 109,
  [118] = 106,
  [119] = 86,
  [120] = 94,
  [121] = 92,
  [122] = 98,
  [123] = 95,
  [124] = 102,
  [125] = 107,
  [126] = 110,
  [127] = 113,
  [128] = 103,
  [129] = 112,
  [130] = 88,
  [131] = 131,
  [132] = 101,
  [133] = 93,
  [134] = 87,
  [135] = 100,
  [136] = 91,
  [137] = 99,
  [138] = 86,
  [139] = 87,
  [140] = 100,
  [141] = 94,
  [142] = 93,
  [143] = 98,
  [144] = 112,
  [145] = 99,
  [146] = 92,
  [147] = 97,
  [148] = 89,
  [149] = 106,
  [150] = 101,
  [151] = 95,
  [152] = 102,
  [153] = 131,
  [154] = 88,
  [155] = 103,
  [156] = 113,
  [157] = 110,
  [158] = 107,
  [159] = 109,
  [160] = 105,
  [161] = 105,
  [162] = 99,
  [163] = 94,
  [164] = 112,
  [165] = 93,
  [166] = 98,
  [167] = 103,
  [168] = 106,
  [169] = 97,
  [170] = 100,
  [171] = 131,
  [172] = 113,
  [173] = 92,
  [174] = 95,
  [175] = 107,
  [176] = 110,
  [177] = 109,
  [178] = 102,
  [179] = 101,
  [180] = 131,
  [181] = 181,
  [182] = 181,
  [183] = 181,
  [184] = 181,
  [185] = 181,
  [186] = 181,
  [187] = 181,
  [188] = 86,
  [189] = 181,
  [190] = 89,
  [191] = 88,
  [192] = 181,
  [193] = 87,
  [194] = 181,
  [195] = 181,
  [196] = 181,
  [197] = 105,
  [198] = 92,
  [199] = 106,
  [200] = 200,
  [201] = 99,
  [202] = 97,
  [203] = 107,
  [204] = 97,
  [205] = 98,
  [206] = 109,
  [207] = 100,
  [208] = 86,
  [209] = 95,
  [210] = 102,
  [211] = 94,
  [212] = 110,
  [213] = 93,
  [214] = 214,
  [215] = 101,
  [216] = 113,
  [217] = 112,
  [218] = 103,
  [219] = 131,
  [220] = 91,
  [221] = 107,
  [222] = 92,
  [223] = 95,
  [224] = 113,
  [225] = 102,
  [226] = 98,
  [227] = 109,
  [228] = 228,
  [229] = 103,
  [230] = 105,
  [231] = 110,
  [232] = 101,
  [233] = 88,
  [234] = 89,
  [235] = 87,
  [236] = 87,
  [237] = 88,
  [238] = 89,
  [239] = 86,
  [240] = 92,
  [241] = 99,
  [242] = 93,
  [243] = 94,
  [244] = 244,
  [245] = 101,
  [246] = 103,
  [247] = 97,
  [248] = 102,
  [249] = 106,
  [250] = 95,
  [251] = 106,
  [252] = 109,
  [253] = 105,
  [254] = 112,
  [255] = 98,
  [256] = 93,
  [257] = 112,
  [258] = 94,
  [259] = 100,
  [260] = 107,
  [261] = 113,
  [262] = 262,
  [263] = 100,
  [264] = 110,
  [265] = 265,
  [266] = 266,
  [267] = 265,
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
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 285,
  [291] = 286,
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
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 97,
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
  [327] = 325,
  [328] = 87,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 317,
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
  [343] = 88,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 89,
  [348] = 340,
  [349] = 274,
  [350] = 88,
  [351] = 351,
  [352] = 100,
  [353] = 351,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 351,
  [359] = 351,
  [360] = 351,
  [361] = 361,
  [362] = 89,
  [363] = 94,
  [364] = 351,
  [365] = 93,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 106,
  [370] = 370,
  [371] = 371,
  [372] = 351,
  [373] = 373,
  [374] = 86,
  [375] = 375,
  [376] = 87,
  [377] = 351,
  [378] = 351,
  [379] = 379,
  [380] = 112,
  [381] = 381,
  [382] = 382,
  [383] = 87,
  [384] = 351,
  [385] = 86,
  [386] = 386,
  [387] = 355,
  [388] = 351,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 100,
  [395] = 395,
  [396] = 396,
  [397] = 97,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 86,
  [405] = 391,
  [406] = 406,
  [407] = 102,
  [408] = 408,
  [409] = 391,
  [410] = 403,
  [411] = 411,
  [412] = 402,
  [413] = 413,
  [414] = 98,
  [415] = 415,
  [416] = 416,
  [417] = 94,
  [418] = 95,
  [419] = 402,
  [420] = 403,
  [421] = 391,
  [422] = 93,
  [423] = 423,
  [424] = 406,
  [425] = 92,
  [426] = 426,
  [427] = 109,
  [428] = 406,
  [429] = 429,
  [430] = 106,
  [431] = 391,
  [432] = 403,
  [433] = 402,
  [434] = 434,
  [435] = 435,
  [436] = 105,
  [437] = 402,
  [438] = 403,
  [439] = 391,
  [440] = 440,
  [441] = 441,
  [442] = 406,
  [443] = 443,
  [444] = 406,
  [445] = 107,
  [446] = 406,
  [447] = 110,
  [448] = 112,
  [449] = 391,
  [450] = 403,
  [451] = 402,
  [452] = 403,
  [453] = 453,
  [454] = 402,
  [455] = 406,
  [456] = 113,
  [457] = 103,
  [458] = 101,
  [459] = 406,
  [460] = 391,
  [461] = 274,
  [462] = 403,
  [463] = 402,
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
  [476] = 475,
  [477] = 475,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 474,
  [482] = 482,
  [483] = 474,
  [484] = 479,
  [485] = 478,
  [486] = 475,
  [487] = 475,
  [488] = 478,
  [489] = 479,
  [490] = 474,
  [491] = 479,
  [492] = 478,
  [493] = 475,
  [494] = 494,
  [495] = 475,
  [496] = 478,
  [497] = 479,
  [498] = 498,
  [499] = 474,
  [500] = 474,
  [501] = 474,
  [502] = 479,
  [503] = 479,
  [504] = 478,
  [505] = 475,
  [506] = 474,
  [507] = 475,
  [508] = 478,
  [509] = 479,
  [510] = 510,
  [511] = 511,
  [512] = 478,
  [513] = 513,
  [514] = 479,
  [515] = 515,
  [516] = 478,
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
      if (eof) ADVANCE(115);
      if (sym_comment_character_set_1(lookahead)) SKIP(113)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == '+') ADVANCE(116);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == '?') ADVANCE(112);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == 'F') ADVANCE(55);
      if (lookahead == 'I') ADVANCE(26);
      if (lookahead == 'O') ADVANCE(52);
      if (lookahead == 'P') ADVANCE(57);
      if (lookahead == 'R') ADVANCE(29);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '|') ADVANCE(233);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == 8592) ADVANCE(198);
      if (lookahead == 8594) ADVANCE(195);
      if (lookahead == 8658) ADVANCE(192);
      if (lookahead == 8704) ADVANCE(232);
      if (lookahead == 8759) ADVANCE(200);
      if (lookahead == 9733) ADVANCE(235);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(142);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (sym__varid_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '"') ADVANCE(171);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '^') ADVANCE(4);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '^') ADVANCE(4);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(171);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(167);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(120);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '>') ADVANCE(196);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(199);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(202);
      if (sym__consym_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(201);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(193);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(39);
      if (lookahead == 'S') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'U') ADVANCE(56);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(36);
      if (lookahead == 'N') ADVANCE(69);
      END_STATE();
    case 16:
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(6);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 71:
      if (lookahead == 'y') ADVANCE(123);
      END_STATE();
    case 72:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(161);
      END_STATE();
    case 73:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 74:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(182);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(185);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(160);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(161);
      END_STATE();
    case 78:
      if (sym_comment_character_set_1(lookahead)) SKIP(78)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '?') ADVANCE(158);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == 8594) ADVANCE(195);
      if (lookahead == 8704) ADVANCE(232);
      if (lookahead == 9733) ADVANCE(235);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(157);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 79:
      if (sym_comment_character_set_1(lookahead)) SKIP(79)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '?') ADVANCE(158);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == 8704) ADVANCE(232);
      if (lookahead == 9733) ADVANCE(235);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(157);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 80:
      if (sym_comment_character_set_1(lookahead)) SKIP(80)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == 8594) ADVANCE(195);
      if (lookahead == 8658) ADVANCE(192);
      if (lookahead == 8759) ADVANCE(200);
      if (lookahead == 9733) ADVANCE(235);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(157);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(205);
      END_STATE();
    case 81:
      if (sym_comment_character_set_1(lookahead)) SKIP(81)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == 8594) ADVANCE(195);
      if (lookahead == 8658) ADVANCE(192);
      if (lookahead == 9733) ADVANCE(235);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(157);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(205);
      END_STATE();
    case 82:
      if (sym_comment_character_set_1(lookahead)) SKIP(82)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == 8594) ADVANCE(195);
      if (lookahead == 8759) ADVANCE(200);
      if (lookahead == 9733) ADVANCE(235);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(157);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(205);
      END_STATE();
    case 83:
      if (sym_comment_character_set_1(lookahead)) SKIP(83)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == 8594) ADVANCE(195);
      if (lookahead == 9733) ADVANCE(235);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(157);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(205);
      END_STATE();
    case 84:
      if (sym_comment_character_set_1(lookahead)) SKIP(84)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == 8658) ADVANCE(192);
      if (lookahead == 9733) ADVANCE(235);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(157);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(205);
      END_STATE();
    case 85:
      if (sym_comment_character_set_1(lookahead)) SKIP(85)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == 9733) ADVANCE(235);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '+' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(157);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(205);
      END_STATE();
    case 86:
      if (sym_comment_character_set_1(lookahead)) SKIP(86)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == 8594) ADVANCE(195);
      if (lookahead == 8658) ADVANCE(192);
      if (lookahead == 9733) ADVANCE(235);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(205);
      END_STATE();
    case 87:
      if (sym_comment_character_set_1(lookahead)) SKIP(87)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == 8594) ADVANCE(195);
      if (lookahead == 8658) ADVANCE(192);
      if (lookahead == 8759) ADVANCE(200);
      if (lookahead == 9733) ADVANCE(235);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(157);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(205);
      END_STATE();
    case 88:
      if (sym_comment_character_set_1(lookahead)) SKIP(88)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == 8594) ADVANCE(195);
      if (lookahead == 8658) ADVANCE(192);
      if (lookahead == 9733) ADVANCE(235);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(157);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(205);
      END_STATE();
    case 89:
      if (sym_comment_character_set_1(lookahead)) SKIP(89)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == 8594) ADVANCE(195);
      if (lookahead == 8759) ADVANCE(200);
      if (lookahead == 9733) ADVANCE(235);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(157);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(205);
      END_STATE();
    case 90:
      if (sym_comment_character_set_1(lookahead)) SKIP(90)
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == 8594) ADVANCE(195);
      if (lookahead == 8658) ADVANCE(192);
      if (lookahead == 8759) ADVANCE(200);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(157);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      END_STATE();
    case 91:
      if (sym_comment_character_set_1(lookahead)) SKIP(91)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == 8594) ADVANCE(195);
      if (lookahead == 9733) ADVANCE(235);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(157);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(205);
      END_STATE();
    case 92:
      if (sym_comment_character_set_1(lookahead)) SKIP(92)
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == 8594) ADVANCE(195);
      if (lookahead == 8658) ADVANCE(192);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(157);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      END_STATE();
    case 93:
      if (sym_comment_character_set_1(lookahead)) SKIP(93)
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == ':') ADVANCE(154);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == 8594) ADVANCE(195);
      if (lookahead == 8759) ADVANCE(200);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(157);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      END_STATE();
    case 94:
      if (sym_comment_character_set_1(lookahead)) SKIP(94)
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '%') ADVANCE(239);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == 8594) ADVANCE(195);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(157);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      END_STATE();
    case 95:
      if (sym_comment_character_set_1(lookahead)) SKIP(95)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == 8658) ADVANCE(192);
      if (lookahead == 9733) ADVANCE(235);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(157);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(205);
      END_STATE();
    case 96:
      if (sym_comment_character_set_1(lookahead)) SKIP(96)
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '=') ADVANCE(127);
      if (lookahead == 'F') ADVANCE(219);
      if (lookahead == 'I') ADVANCE(212);
      if (lookahead == 'P') ADVANCE(220);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(142);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 97:
      if (sym_comment_character_set_1(lookahead)) SKIP(97)
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == 8658) ADVANCE(192);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(157);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      END_STATE();
    case 98:
      if (sym_comment_character_set_1(lookahead)) SKIP(98)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '@') ADVANCE(237);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == 9733) ADVANCE(235);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(157);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(205);
      END_STATE();
    case 99:
      if (sym_comment_character_set_1(lookahead)) SKIP(99)
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == 8594) ADVANCE(195);
      if (sym__tyconsym_character_set_1(lookahead)) ADVANCE(157);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(205);
      END_STATE();
    case 100:
      if (sym_comment_character_set_1(lookahead)) SKIP(100)
      if (lookahead == '#') ADVANCE(117);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '`') ADVANCE(209);
      if (sym__tyconsym_character_set_1(lookahead)) ADVANCE(157);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      END_STATE();
    case 101:
      if (sym_comment_character_set_1(lookahead)) SKIP(101)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '0') ADVANCE(177);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 102:
      if (sym_comment_character_set_1(lookahead)) SKIP(102)
      if (lookahead == '!') ADVANCE(109);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      if (sym__varid_character_set_4(lookahead)) ADVANCE(205);
      END_STATE();
    case 103:
      if (sym_comment_character_set_1(lookahead)) SKIP(103)
      if (lookahead == '!') ADVANCE(109);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '=') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 104:
      if (sym_comment_character_set_1(lookahead)) SKIP(104)
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(52);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == 8594) ADVANCE(195);
      if (lookahead == 8759) ADVANCE(200);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 105:
      if (sym_comment_character_set_1(lookahead)) SKIP(105)
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'R') ADVANCE(29);
      if (sym__varid_character_set_5(lookahead)) ADVANCE(205);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 111:
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 112:
      if (sym__varid_character_set_5(lookahead)) ADVANCE(210);
      END_STATE();
    case 113:
      if (eof) ADVANCE(115);
      if (sym_comment_character_set_1(lookahead)) SKIP(113)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(119);
      if (lookahead == '%') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(229);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '*') ADVANCE(234);
      if (lookahead == '+') ADVANCE(116);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == '?') ADVANCE(112);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == 'F') ADVANCE(55);
      if (lookahead == 'I') ADVANCE(26);
      if (lookahead == 'O') ADVANCE(52);
      if (lookahead == 'P') ADVANCE(57);
      if (lookahead == 'R') ADVANCE(29);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '|') ADVANCE(233);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == 8592) ADVANCE(198);
      if (lookahead == 8594) ADVANCE(195);
      if (lookahead == 8658) ADVANCE(192);
      if (lookahead == 8704) ADVANCE(232);
      if (lookahead == 8759) ADVANCE(200);
      if (lookahead == 9733) ADVANCE(235);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(142);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (sym__varid_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 114:
      if (eof) ADVANCE(115);
      if (sym_comment_character_set_1(lookahead)) SKIP(114)
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '%') ADVANCE(238);
      if (lookahead == '\'') ADVANCE(228);
      if (lookahead == '(') ADVANCE(207);
      if (lookahead == ')') ADVANCE(208);
      if (lookahead == '+') ADVANCE(116);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '`') ADVANCE(209);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '}') ADVANCE(231);
      if (lookahead == 8594) ADVANCE(195);
      if (lookahead == 8658) ADVANCE(192);
      if (lookahead == 8759) ADVANCE(200);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(225);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(205);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_is_sum_marker);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_comment);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_comment);
      if (sym__varid_character_set_5(lookahead)) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_Id);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_Primary);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_Primary);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_key_value_attribute_token1);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '\'') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_key_value_attribute_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(193);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(129);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '#') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(130);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(131);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '#') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(132);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '#') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(130);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(131);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(132);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_exl_mark_attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__field_strictness_prefix);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_cascade_action);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__sql_constraint_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_Foreign);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_Foreign);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_References);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__consym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '>') ADVANCE(197);
      if (sym__tyconsym_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == '-') ADVANCE(117);
      if (sym__tyconsym_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == ':') ADVANCE(202);
      if (sym__consym_character_set_1(lookahead)) ADVANCE(151);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == '>') ADVANCE(194);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__tyconsym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__tyconsym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__tyconsym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(157);
      if (sym__varid_character_set_5(lookahead)) ADVANCE(210);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(159);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(163);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(164);
      if (lookahead == '\'') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(165);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '\'') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '#') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(169);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(173);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__integer_literal);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(74);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(75);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(137);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(129);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(129);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(175);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__binary_literal);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__binary_literal);
      if (lookahead == '#') ADVANCE(183);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__binary_literal);
      if (lookahead == '#') ADVANCE(181);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__octal_literal);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '#') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '#') ADVANCE(184);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__hex_literal);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(191);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(187);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(151);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__immediate_dot);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__varid);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '>') ADVANCE(196);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_implicit_parid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__conid);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead == 'g') ADVANCE(218);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead == 'm') ADVANCE(224);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(225);
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(211);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(6);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_AT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(157);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(157);
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
  [1] = {.lex_state = 114},
  [2] = {.lex_state = 78},
  [3] = {.lex_state = 78},
  [4] = {.lex_state = 78},
  [5] = {.lex_state = 78},
  [6] = {.lex_state = 78},
  [7] = {.lex_state = 78},
  [8] = {.lex_state = 78},
  [9] = {.lex_state = 78},
  [10] = {.lex_state = 78},
  [11] = {.lex_state = 78},
  [12] = {.lex_state = 78},
  [13] = {.lex_state = 78},
  [14] = {.lex_state = 78},
  [15] = {.lex_state = 79},
  [16] = {.lex_state = 79},
  [17] = {.lex_state = 79},
  [18] = {.lex_state = 79},
  [19] = {.lex_state = 79},
  [20] = {.lex_state = 79},
  [21] = {.lex_state = 79},
  [22] = {.lex_state = 79},
  [23] = {.lex_state = 79},
  [24] = {.lex_state = 79},
  [25] = {.lex_state = 79},
  [26] = {.lex_state = 79},
  [27] = {.lex_state = 78},
  [28] = {.lex_state = 78},
  [29] = {.lex_state = 78},
  [30] = {.lex_state = 78},
  [31] = {.lex_state = 78},
  [32] = {.lex_state = 78},
  [33] = {.lex_state = 78},
  [34] = {.lex_state = 78},
  [35] = {.lex_state = 78},
  [36] = {.lex_state = 78},
  [37] = {.lex_state = 78},
  [38] = {.lex_state = 78},
  [39] = {.lex_state = 78},
  [40] = {.lex_state = 80},
  [41] = {.lex_state = 80},
  [42] = {.lex_state = 80},
  [43] = {.lex_state = 78},
  [44] = {.lex_state = 78},
  [45] = {.lex_state = 81},
  [46] = {.lex_state = 81},
  [47] = {.lex_state = 78},
  [48] = {.lex_state = 81},
  [49] = {.lex_state = 78},
  [50] = {.lex_state = 78},
  [51] = {.lex_state = 80},
  [52] = {.lex_state = 78},
  [53] = {.lex_state = 78},
  [54] = {.lex_state = 82},
  [55] = {.lex_state = 82},
  [56] = {.lex_state = 80},
  [57] = {.lex_state = 82},
  [58] = {.lex_state = 81},
  [59] = {.lex_state = 83},
  [60] = {.lex_state = 78},
  [61] = {.lex_state = 78},
  [62] = {.lex_state = 83},
  [63] = {.lex_state = 83},
  [64] = {.lex_state = 84},
  [65] = {.lex_state = 84},
  [66] = {.lex_state = 84},
  [67] = {.lex_state = 84},
  [68] = {.lex_state = 85},
  [69] = {.lex_state = 85},
  [70] = {.lex_state = 85},
  [71] = {.lex_state = 86},
  [72] = {.lex_state = 86},
  [73] = {.lex_state = 78},
  [74] = {.lex_state = 78},
  [75] = {.lex_state = 78},
  [76] = {.lex_state = 78},
  [77] = {.lex_state = 78},
  [78] = {.lex_state = 78},
  [79] = {.lex_state = 78},
  [80] = {.lex_state = 78},
  [81] = {.lex_state = 78},
  [82] = {.lex_state = 78},
  [83] = {.lex_state = 78},
  [84] = {.lex_state = 78},
  [85] = {.lex_state = 78},
  [86] = {.lex_state = 87},
  [87] = {.lex_state = 87},
  [88] = {.lex_state = 87},
  [89] = {.lex_state = 87},
  [90] = {.lex_state = 80},
  [91] = {.lex_state = 80},
  [92] = {.lex_state = 80},
  [93] = {.lex_state = 80},
  [94] = {.lex_state = 80},
  [95] = {.lex_state = 80},
  [96] = {.lex_state = 88},
  [97] = {.lex_state = 80},
  [98] = {.lex_state = 80},
  [99] = {.lex_state = 80},
  [100] = {.lex_state = 80},
  [101] = {.lex_state = 80},
  [102] = {.lex_state = 80},
  [103] = {.lex_state = 80},
  [104] = {.lex_state = 88},
  [105] = {.lex_state = 80},
  [106] = {.lex_state = 80},
  [107] = {.lex_state = 80},
  [108] = {.lex_state = 88},
  [109] = {.lex_state = 80},
  [110] = {.lex_state = 80},
  [111] = {.lex_state = 88},
  [112] = {.lex_state = 80},
  [113] = {.lex_state = 80},
  [114] = {.lex_state = 81},
  [115] = {.lex_state = 81},
  [116] = {.lex_state = 89},
  [117] = {.lex_state = 81},
  [118] = {.lex_state = 81},
  [119] = {.lex_state = 89},
  [120] = {.lex_state = 81},
  [121] = {.lex_state = 81},
  [122] = {.lex_state = 81},
  [123] = {.lex_state = 81},
  [124] = {.lex_state = 81},
  [125] = {.lex_state = 81},
  [126] = {.lex_state = 81},
  [127] = {.lex_state = 81},
  [128] = {.lex_state = 81},
  [129] = {.lex_state = 81},
  [130] = {.lex_state = 89},
  [131] = {.lex_state = 90},
  [132] = {.lex_state = 81},
  [133] = {.lex_state = 81},
  [134] = {.lex_state = 89},
  [135] = {.lex_state = 81},
  [136] = {.lex_state = 81},
  [137] = {.lex_state = 81},
  [138] = {.lex_state = 91},
  [139] = {.lex_state = 91},
  [140] = {.lex_state = 82},
  [141] = {.lex_state = 82},
  [142] = {.lex_state = 82},
  [143] = {.lex_state = 82},
  [144] = {.lex_state = 82},
  [145] = {.lex_state = 82},
  [146] = {.lex_state = 82},
  [147] = {.lex_state = 82},
  [148] = {.lex_state = 91},
  [149] = {.lex_state = 82},
  [150] = {.lex_state = 82},
  [151] = {.lex_state = 82},
  [152] = {.lex_state = 82},
  [153] = {.lex_state = 92},
  [154] = {.lex_state = 91},
  [155] = {.lex_state = 82},
  [156] = {.lex_state = 82},
  [157] = {.lex_state = 82},
  [158] = {.lex_state = 82},
  [159] = {.lex_state = 82},
  [160] = {.lex_state = 82},
  [161] = {.lex_state = 83},
  [162] = {.lex_state = 83},
  [163] = {.lex_state = 83},
  [164] = {.lex_state = 83},
  [165] = {.lex_state = 83},
  [166] = {.lex_state = 83},
  [167] = {.lex_state = 83},
  [168] = {.lex_state = 83},
  [169] = {.lex_state = 83},
  [170] = {.lex_state = 83},
  [171] = {.lex_state = 93},
  [172] = {.lex_state = 83},
  [173] = {.lex_state = 83},
  [174] = {.lex_state = 83},
  [175] = {.lex_state = 83},
  [176] = {.lex_state = 83},
  [177] = {.lex_state = 83},
  [178] = {.lex_state = 83},
  [179] = {.lex_state = 83},
  [180] = {.lex_state = 94},
  [181] = {.lex_state = 78},
  [182] = {.lex_state = 78},
  [183] = {.lex_state = 78},
  [184] = {.lex_state = 78},
  [185] = {.lex_state = 78},
  [186] = {.lex_state = 78},
  [187] = {.lex_state = 78},
  [188] = {.lex_state = 95},
  [189] = {.lex_state = 78},
  [190] = {.lex_state = 95},
  [191] = {.lex_state = 95},
  [192] = {.lex_state = 78},
  [193] = {.lex_state = 95},
  [194] = {.lex_state = 78},
  [195] = {.lex_state = 78},
  [196] = {.lex_state = 78},
  [197] = {.lex_state = 84},
  [198] = {.lex_state = 84},
  [199] = {.lex_state = 84},
  [200] = {.lex_state = 96},
  [201] = {.lex_state = 84},
  [202] = {.lex_state = 86},
  [203] = {.lex_state = 84},
  [204] = {.lex_state = 84},
  [205] = {.lex_state = 84},
  [206] = {.lex_state = 84},
  [207] = {.lex_state = 84},
  [208] = {.lex_state = 86},
  [209] = {.lex_state = 84},
  [210] = {.lex_state = 84},
  [211] = {.lex_state = 84},
  [212] = {.lex_state = 84},
  [213] = {.lex_state = 84},
  [214] = {.lex_state = 96, .external_lex_state = 2},
  [215] = {.lex_state = 84},
  [216] = {.lex_state = 84},
  [217] = {.lex_state = 84},
  [218] = {.lex_state = 84},
  [219] = {.lex_state = 97},
  [220] = {.lex_state = 84},
  [221] = {.lex_state = 86},
  [222] = {.lex_state = 86},
  [223] = {.lex_state = 86},
  [224] = {.lex_state = 86},
  [225] = {.lex_state = 86},
  [226] = {.lex_state = 86},
  [227] = {.lex_state = 86},
  [228] = {.lex_state = 96, .external_lex_state = 2},
  [229] = {.lex_state = 86},
  [230] = {.lex_state = 86},
  [231] = {.lex_state = 86},
  [232] = {.lex_state = 86},
  [233] = {.lex_state = 86},
  [234] = {.lex_state = 86},
  [235] = {.lex_state = 98},
  [236] = {.lex_state = 86},
  [237] = {.lex_state = 98},
  [238] = {.lex_state = 98},
  [239] = {.lex_state = 98},
  [240] = {.lex_state = 85},
  [241] = {.lex_state = 85},
  [242] = {.lex_state = 86},
  [243] = {.lex_state = 86},
  [244] = {.lex_state = 114},
  [245] = {.lex_state = 85},
  [246] = {.lex_state = 85},
  [247] = {.lex_state = 85},
  [248] = {.lex_state = 85},
  [249] = {.lex_state = 85},
  [250] = {.lex_state = 85},
  [251] = {.lex_state = 86},
  [252] = {.lex_state = 85},
  [253] = {.lex_state = 85},
  [254] = {.lex_state = 85},
  [255] = {.lex_state = 85},
  [256] = {.lex_state = 85},
  [257] = {.lex_state = 86},
  [258] = {.lex_state = 85},
  [259] = {.lex_state = 85},
  [260] = {.lex_state = 85},
  [261] = {.lex_state = 85},
  [262] = {.lex_state = 114},
  [263] = {.lex_state = 86},
  [264] = {.lex_state = 85},
  [265] = {.lex_state = 99},
  [266] = {.lex_state = 100},
  [267] = {.lex_state = 99},
  [268] = {.lex_state = 78},
  [269] = {.lex_state = 78},
  [270] = {.lex_state = 78},
  [271] = {.lex_state = 78},
  [272] = {.lex_state = 78},
  [273] = {.lex_state = 78},
  [274] = {.lex_state = 78},
  [275] = {.lex_state = 78},
  [276] = {.lex_state = 100},
  [277] = {.lex_state = 78},
  [278] = {.lex_state = 114},
  [279] = {.lex_state = 114},
  [280] = {.lex_state = 101},
  [281] = {.lex_state = 102, .external_lex_state = 3},
  [282] = {.lex_state = 100},
  [283] = {.lex_state = 114},
  [284] = {.lex_state = 100},
  [285] = {.lex_state = 114},
  [286] = {.lex_state = 114},
  [287] = {.lex_state = 114},
  [288] = {.lex_state = 102, .external_lex_state = 3},
  [289] = {.lex_state = 114},
  [290] = {.lex_state = 114},
  [291] = {.lex_state = 114},
  [292] = {.lex_state = 114, .external_lex_state = 2},
  [293] = {.lex_state = 114},
  [294] = {.lex_state = 103, .external_lex_state = 3},
  [295] = {.lex_state = 96, .external_lex_state = 2},
  [296] = {.lex_state = 114, .external_lex_state = 2},
  [297] = {.lex_state = 103, .external_lex_state = 3},
  [298] = {.lex_state = 103, .external_lex_state = 3},
  [299] = {.lex_state = 103, .external_lex_state = 3},
  [300] = {.lex_state = 114, .external_lex_state = 4},
  [301] = {.lex_state = 114, .external_lex_state = 4},
  [302] = {.lex_state = 103, .external_lex_state = 3},
  [303] = {.lex_state = 103, .external_lex_state = 3},
  [304] = {.lex_state = 103, .external_lex_state = 3},
  [305] = {.lex_state = 103, .external_lex_state = 3},
  [306] = {.lex_state = 100},
  [307] = {.lex_state = 103, .external_lex_state = 3},
  [308] = {.lex_state = 103, .external_lex_state = 3},
  [309] = {.lex_state = 114},
  [310] = {.lex_state = 103, .external_lex_state = 3},
  [311] = {.lex_state = 114, .external_lex_state = 4},
  [312] = {.lex_state = 100},
  [313] = {.lex_state = 103, .external_lex_state = 3},
  [314] = {.lex_state = 103, .external_lex_state = 3},
  [315] = {.lex_state = 114, .external_lex_state = 4},
  [316] = {.lex_state = 104},
  [317] = {.lex_state = 102, .external_lex_state = 3},
  [318] = {.lex_state = 103, .external_lex_state = 3},
  [319] = {.lex_state = 114, .external_lex_state = 4},
  [320] = {.lex_state = 114},
  [321] = {.lex_state = 105, .external_lex_state = 3},
  [322] = {.lex_state = 114},
  [323] = {.lex_state = 114},
  [324] = {.lex_state = 114},
  [325] = {.lex_state = 114},
  [326] = {.lex_state = 100},
  [327] = {.lex_state = 114},
  [328] = {.lex_state = 104},
  [329] = {.lex_state = 103, .external_lex_state = 3},
  [330] = {.lex_state = 114},
  [331] = {.lex_state = 103, .external_lex_state = 3},
  [332] = {.lex_state = 105, .external_lex_state = 3},
  [333] = {.lex_state = 114},
  [334] = {.lex_state = 105, .external_lex_state = 3},
  [335] = {.lex_state = 114},
  [336] = {.lex_state = 114},
  [337] = {.lex_state = 114},
  [338] = {.lex_state = 114, .external_lex_state = 3},
  [339] = {.lex_state = 114},
  [340] = {.lex_state = 114},
  [341] = {.lex_state = 114},
  [342] = {.lex_state = 114},
  [343] = {.lex_state = 104},
  [344] = {.lex_state = 114, .external_lex_state = 3},
  [345] = {.lex_state = 114},
  [346] = {.lex_state = 114},
  [347] = {.lex_state = 104},
  [348] = {.lex_state = 114},
  [349] = {.lex_state = 102, .external_lex_state = 3},
  [350] = {.lex_state = 103, .external_lex_state = 3},
  [351] = {.lex_state = 114},
  [352] = {.lex_state = 104},
  [353] = {.lex_state = 114},
  [354] = {.lex_state = 114, .external_lex_state = 2},
  [355] = {.lex_state = 114},
  [356] = {.lex_state = 114, .external_lex_state = 2},
  [357] = {.lex_state = 114, .external_lex_state = 2},
  [358] = {.lex_state = 114},
  [359] = {.lex_state = 114},
  [360] = {.lex_state = 114},
  [361] = {.lex_state = 114},
  [362] = {.lex_state = 103, .external_lex_state = 3},
  [363] = {.lex_state = 104},
  [364] = {.lex_state = 114},
  [365] = {.lex_state = 104},
  [366] = {.lex_state = 114},
  [367] = {.lex_state = 114},
  [368] = {.lex_state = 114},
  [369] = {.lex_state = 104},
  [370] = {.lex_state = 114},
  [371] = {.lex_state = 114},
  [372] = {.lex_state = 114},
  [373] = {.lex_state = 103, .external_lex_state = 3},
  [374] = {.lex_state = 114, .external_lex_state = 2},
  [375] = {.lex_state = 114},
  [376] = {.lex_state = 103, .external_lex_state = 3},
  [377] = {.lex_state = 114},
  [378] = {.lex_state = 114},
  [379] = {.lex_state = 114},
  [380] = {.lex_state = 104},
  [381] = {.lex_state = 114},
  [382] = {.lex_state = 114},
  [383] = {.lex_state = 114, .external_lex_state = 2},
  [384] = {.lex_state = 114},
  [385] = {.lex_state = 103, .external_lex_state = 3},
  [386] = {.lex_state = 114},
  [387] = {.lex_state = 114},
  [388] = {.lex_state = 114},
  [389] = {.lex_state = 114, .external_lex_state = 2},
  [390] = {.lex_state = 114},
  [391] = {.lex_state = 114},
  [392] = {.lex_state = 114},
  [393] = {.lex_state = 114},
  [394] = {.lex_state = 103, .external_lex_state = 3},
  [395] = {.lex_state = 103, .external_lex_state = 3},
  [396] = {.lex_state = 104},
  [397] = {.lex_state = 103, .external_lex_state = 3},
  [398] = {.lex_state = 104},
  [399] = {.lex_state = 114},
  [400] = {.lex_state = 114},
  [401] = {.lex_state = 114},
  [402] = {.lex_state = 114},
  [403] = {.lex_state = 114},
  [404] = {.lex_state = 104},
  [405] = {.lex_state = 114},
  [406] = {.lex_state = 114},
  [407] = {.lex_state = 103, .external_lex_state = 3},
  [408] = {.lex_state = 114},
  [409] = {.lex_state = 114},
  [410] = {.lex_state = 114},
  [411] = {.lex_state = 114},
  [412] = {.lex_state = 114},
  [413] = {.lex_state = 114},
  [414] = {.lex_state = 103, .external_lex_state = 3},
  [415] = {.lex_state = 103, .external_lex_state = 3},
  [416] = {.lex_state = 104},
  [417] = {.lex_state = 103, .external_lex_state = 3},
  [418] = {.lex_state = 103, .external_lex_state = 3},
  [419] = {.lex_state = 114},
  [420] = {.lex_state = 114},
  [421] = {.lex_state = 114},
  [422] = {.lex_state = 103, .external_lex_state = 3},
  [423] = {.lex_state = 103, .external_lex_state = 3},
  [424] = {.lex_state = 114},
  [425] = {.lex_state = 103, .external_lex_state = 3},
  [426] = {.lex_state = 103, .external_lex_state = 3},
  [427] = {.lex_state = 103, .external_lex_state = 3},
  [428] = {.lex_state = 114},
  [429] = {.lex_state = 114},
  [430] = {.lex_state = 103, .external_lex_state = 3},
  [431] = {.lex_state = 114},
  [432] = {.lex_state = 114},
  [433] = {.lex_state = 114},
  [434] = {.lex_state = 100},
  [435] = {.lex_state = 114},
  [436] = {.lex_state = 103, .external_lex_state = 3},
  [437] = {.lex_state = 114},
  [438] = {.lex_state = 114},
  [439] = {.lex_state = 114},
  [440] = {.lex_state = 114},
  [441] = {.lex_state = 114},
  [442] = {.lex_state = 114},
  [443] = {.lex_state = 114},
  [444] = {.lex_state = 114},
  [445] = {.lex_state = 103, .external_lex_state = 3},
  [446] = {.lex_state = 114},
  [447] = {.lex_state = 103, .external_lex_state = 3},
  [448] = {.lex_state = 103, .external_lex_state = 3},
  [449] = {.lex_state = 114},
  [450] = {.lex_state = 114},
  [451] = {.lex_state = 114},
  [452] = {.lex_state = 114},
  [453] = {.lex_state = 114, .external_lex_state = 2},
  [454] = {.lex_state = 114},
  [455] = {.lex_state = 114},
  [456] = {.lex_state = 103, .external_lex_state = 3},
  [457] = {.lex_state = 103, .external_lex_state = 3},
  [458] = {.lex_state = 103, .external_lex_state = 3},
  [459] = {.lex_state = 114},
  [460] = {.lex_state = 114},
  [461] = {.lex_state = 105, .external_lex_state = 3},
  [462] = {.lex_state = 114},
  [463] = {.lex_state = 114},
  [464] = {.lex_state = 114},
  [465] = {.lex_state = 114},
  [466] = {.lex_state = 114},
  [467] = {.lex_state = 114},
  [468] = {.lex_state = 114},
  [469] = {.lex_state = 114},
  [470] = {.lex_state = 114},
  [471] = {.lex_state = 114},
  [472] = {.lex_state = 114},
  [473] = {.lex_state = 114},
  [474] = {.lex_state = 114},
  [475] = {.lex_state = 114},
  [476] = {.lex_state = 114},
  [477] = {.lex_state = 114},
  [478] = {.lex_state = 114},
  [479] = {.lex_state = 114},
  [480] = {.lex_state = 114},
  [481] = {.lex_state = 114},
  [482] = {.lex_state = 114},
  [483] = {.lex_state = 114},
  [484] = {.lex_state = 114},
  [485] = {.lex_state = 114},
  [486] = {.lex_state = 114},
  [487] = {.lex_state = 114},
  [488] = {.lex_state = 114},
  [489] = {.lex_state = 114},
  [490] = {.lex_state = 114},
  [491] = {.lex_state = 114},
  [492] = {.lex_state = 114},
  [493] = {.lex_state = 114},
  [494] = {.lex_state = 114},
  [495] = {.lex_state = 114},
  [496] = {.lex_state = 114},
  [497] = {.lex_state = 114},
  [498] = {.lex_state = 96},
  [499] = {.lex_state = 114},
  [500] = {.lex_state = 114},
  [501] = {.lex_state = 114},
  [502] = {.lex_state = 114},
  [503] = {.lex_state = 114},
  [504] = {.lex_state = 114},
  [505] = {.lex_state = 114},
  [506] = {.lex_state = 114},
  [507] = {.lex_state = 114},
  [508] = {.lex_state = 114},
  [509] = {.lex_state = 114},
  [510] = {.lex_state = 114},
  [511] = {.lex_state = 114, .external_lex_state = 3},
  [512] = {.lex_state = 114},
  [513] = {.lex_state = 114},
  [514] = {.lex_state = 114},
  [515] = {.lex_state = 114, .external_lex_state = 2},
  [516] = {.lex_state = 114},
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
    [sym_quasi_quotation] = STATE(510),
    [sym_entity_definition] = STATE(244),
    [sym__entity_name] = STATE(314),
    [sym__entity_header] = STATE(315),
    [sym_constructor] = STATE(362),
    [sym_qualified_type] = STATE(430),
    [sym_tycon_arrow] = STATE(430),
    [sym__promoted_tycon] = STATE(430),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(359),
    [sym_type_variable] = STATE(430),
    [sym_type_name] = STATE(314),
    [aux_sym_quasi_quotation_repeat1] = STATE(244),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__varid] = ACTIONS(7),
    [sym_is_sum_marker] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym__conid] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
  },
  [2] = {
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym__arrow] = STATE(486),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(485),
    [sym_qualified_constructor_operator] = STATE(485),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(485),
    [sym_qualified_type_operator] = STATE(485),
    [sym__qualified_type_operator] = STATE(485),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(485),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(339),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(490),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(56),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(346),
    [sym_type_infix] = STATE(291),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(366),
    [sym__quantified_constraint] = STATE(390),
    [sym__constraint_context] = STATE(390),
    [sym__constraint] = STATE(390),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(36),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(437),
    [aux_sym_con_tuple_repeat1] = STATE(438),
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
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym__arrow] = STATE(505),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(504),
    [sym_qualified_constructor_operator] = STATE(504),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(504),
    [sym_qualified_type_operator] = STATE(504),
    [sym__qualified_type_operator] = STATE(504),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(504),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(339),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(506),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(56),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(346),
    [sym_type_infix] = STATE(291),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(366),
    [sym__quantified_constraint] = STATE(401),
    [sym__constraint_context] = STATE(401),
    [sym__constraint] = STATE(401),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(36),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(402),
    [aux_sym_con_tuple_repeat1] = STATE(403),
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
  [4] = {
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym__arrow] = STATE(475),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(496),
    [sym_qualified_constructor_operator] = STATE(496),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(496),
    [sym_qualified_type_operator] = STATE(496),
    [sym__qualified_type_operator] = STATE(496),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(496),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(339),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(474),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(56),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(346),
    [sym_type_infix] = STATE(291),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(366),
    [sym__quantified_constraint] = STATE(390),
    [sym__constraint_context] = STATE(390),
    [sym__constraint] = STATE(390),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(36),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(433),
    [aux_sym_con_tuple_repeat1] = STATE(432),
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
  [5] = {
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym__arrow] = STATE(486),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(485),
    [sym_qualified_constructor_operator] = STATE(485),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(485),
    [sym_qualified_type_operator] = STATE(485),
    [sym__qualified_type_operator] = STATE(485),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(485),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(339),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(490),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(56),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(346),
    [sym_type_infix] = STATE(291),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(366),
    [sym__quantified_constraint] = STATE(401),
    [sym__constraint_context] = STATE(401),
    [sym__constraint] = STATE(401),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(36),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(437),
    [aux_sym_con_tuple_repeat1] = STATE(438),
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
  [6] = {
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym__arrow] = STATE(505),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(504),
    [sym_qualified_constructor_operator] = STATE(504),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(504),
    [sym_qualified_type_operator] = STATE(504),
    [sym__qualified_type_operator] = STATE(504),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(504),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(340),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(501),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(51),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(293),
    [sym_type_infix] = STATE(286),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(393),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(47),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(463),
    [aux_sym_con_tuple_repeat1] = STATE(462),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(73),
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
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(77),
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
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym__arrow] = STATE(475),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(496),
    [sym_qualified_constructor_operator] = STATE(496),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(496),
    [sym_qualified_type_operator] = STATE(496),
    [sym__qualified_type_operator] = STATE(496),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(496),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(340),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(500),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(51),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(293),
    [sym_type_infix] = STATE(286),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(393),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(47),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(412),
    [aux_sym_con_tuple_repeat1] = STATE(410),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(79),
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
    [anon_sym_LPAREN] = ACTIONS(75),
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
  [8] = {
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym__arrow] = STATE(476),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(516),
    [sym_qualified_constructor_operator] = STATE(516),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(516),
    [sym_qualified_type_operator] = STATE(516),
    [sym__qualified_type_operator] = STATE(516),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(516),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(340),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(499),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(51),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(293),
    [sym_type_infix] = STATE(286),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(393),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(47),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(419),
    [aux_sym_con_tuple_repeat1] = STATE(420),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(83),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(85),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(87),
    [anon_sym_DASH_GT] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(91),
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
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym__arrow] = STATE(507),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(508),
    [sym_qualified_constructor_operator] = STATE(508),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(508),
    [sym_qualified_type_operator] = STATE(508),
    [sym__qualified_type_operator] = STATE(508),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(508),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(340),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(474),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(51),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(293),
    [sym_type_infix] = STATE(286),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(393),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(47),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(433),
    [aux_sym_con_tuple_repeat1] = STATE(432),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(63),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(93),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(95),
    [anon_sym_DASH_GT] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(75),
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
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym__arrow] = STATE(486),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(485),
    [sym_qualified_constructor_operator] = STATE(485),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(485),
    [sym_qualified_type_operator] = STATE(485),
    [sym__qualified_type_operator] = STATE(485),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(485),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(340),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(481),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(51),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(293),
    [sym_type_infix] = STATE(286),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(393),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(47),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(454),
    [aux_sym_con_tuple_repeat1] = STATE(450),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(101),
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
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(103),
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
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym__arrow] = STATE(477),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(478),
    [sym_qualified_constructor_operator] = STATE(478),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(478),
    [sym_qualified_type_operator] = STATE(478),
    [sym__qualified_type_operator] = STATE(478),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(478),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(340),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(506),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(51),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(293),
    [sym_type_infix] = STATE(286),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(393),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(47),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(402),
    [aux_sym_con_tuple_repeat1] = STATE(403),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(53),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(105),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(107),
    [anon_sym_DASH_GT] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(111),
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
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym__arrow] = STATE(495),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(512),
    [sym_qualified_constructor_operator] = STATE(512),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(512),
    [sym_qualified_type_operator] = STATE(512),
    [sym__qualified_type_operator] = STATE(512),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(512),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(340),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(483),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(51),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(293),
    [sym_type_infix] = STATE(286),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(393),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(47),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(451),
    [aux_sym_con_tuple_repeat1] = STATE(452),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(113),
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
    [anon_sym_LPAREN] = ACTIONS(75),
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
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym__arrow] = STATE(487),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(488),
    [sym_qualified_constructor_operator] = STATE(488),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(488),
    [sym_qualified_type_operator] = STATE(488),
    [sym__qualified_type_operator] = STATE(488),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(488),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(340),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(490),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(51),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(293),
    [sym_type_infix] = STATE(286),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(393),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(47),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(437),
    [aux_sym_con_tuple_repeat1] = STATE(438),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(19),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(123),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(125),
    [anon_sym_DASH_GT] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(129),
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
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym__arrow] = STATE(493),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(492),
    [sym_qualified_constructor_operator] = STATE(492),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(492),
    [sym_qualified_type_operator] = STATE(492),
    [sym__qualified_type_operator] = STATE(492),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(492),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(340),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(483),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(51),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(293),
    [sym_type_infix] = STATE(286),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(393),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(47),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(451),
    [aux_sym_con_tuple_repeat1] = STATE(452),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(113),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(131),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(133),
    [anon_sym_DASH_GT] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(75),
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
  [15] = {
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(509),
    [sym_qualified_constructor_operator] = STATE(509),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(509),
    [sym_qualified_type_operator] = STATE(509),
    [sym__qualified_type_operator] = STATE(509),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(340),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(474),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(51),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(293),
    [sym_type_infix] = STATE(286),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(393),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(47),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(465),
    [aux_sym_con_tuple_repeat1] = STATE(432),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(63),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(137),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
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
  [16] = {
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(497),
    [sym_qualified_constructor_operator] = STATE(497),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(497),
    [sym_qualified_type_operator] = STATE(497),
    [sym__qualified_type_operator] = STATE(497),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(340),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(474),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(51),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(293),
    [sym_type_infix] = STATE(286),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(393),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(47),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(465),
    [aux_sym_con_tuple_repeat1] = STATE(432),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(63),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(139),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
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
  [17] = {
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(484),
    [sym_qualified_constructor_operator] = STATE(484),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(484),
    [sym_qualified_type_operator] = STATE(484),
    [sym__qualified_type_operator] = STATE(484),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(340),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(481),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(51),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(293),
    [sym_type_infix] = STATE(286),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(393),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(47),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(465),
    [aux_sym_con_tuple_repeat1] = STATE(450),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(101),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(141),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(103),
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
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(491),
    [sym_qualified_constructor_operator] = STATE(491),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(491),
    [sym_qualified_type_operator] = STATE(491),
    [sym__qualified_type_operator] = STATE(491),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(340),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(483),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(51),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(293),
    [sym_type_infix] = STATE(286),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(393),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(47),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(465),
    [aux_sym_con_tuple_repeat1] = STATE(452),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(113),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(143),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
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
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(489),
    [sym_qualified_constructor_operator] = STATE(489),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(489),
    [sym_qualified_type_operator] = STATE(489),
    [sym__qualified_type_operator] = STATE(489),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(340),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(490),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(51),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(293),
    [sym_type_infix] = STATE(286),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(393),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(47),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(465),
    [aux_sym_con_tuple_repeat1] = STATE(438),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(19),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(145),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(129),
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
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(497),
    [sym_qualified_constructor_operator] = STATE(497),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(497),
    [sym_qualified_type_operator] = STATE(497),
    [sym__qualified_type_operator] = STATE(497),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(340),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(500),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(51),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(293),
    [sym_type_infix] = STATE(286),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(393),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(47),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(465),
    [aux_sym_con_tuple_repeat1] = STATE(410),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(79),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(139),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
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
  [21] = {
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(503),
    [sym_qualified_constructor_operator] = STATE(503),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(503),
    [sym_qualified_type_operator] = STATE(503),
    [sym__qualified_type_operator] = STATE(503),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(340),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(501),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(51),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(293),
    [sym_type_infix] = STATE(286),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(393),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(47),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(465),
    [aux_sym_con_tuple_repeat1] = STATE(462),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(73),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(147),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(77),
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
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(479),
    [sym_qualified_constructor_operator] = STATE(479),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(479),
    [sym_qualified_type_operator] = STATE(479),
    [sym__qualified_type_operator] = STATE(479),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(340),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(506),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(51),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(293),
    [sym_type_infix] = STATE(286),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(393),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(47),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(465),
    [aux_sym_con_tuple_repeat1] = STATE(403),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(53),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(149),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(111),
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
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(514),
    [sym_qualified_constructor_operator] = STATE(514),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(514),
    [sym_qualified_type_operator] = STATE(514),
    [sym__qualified_type_operator] = STATE(514),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(340),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(483),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(51),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(293),
    [sym_type_infix] = STATE(286),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(393),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(47),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(465),
    [aux_sym_con_tuple_repeat1] = STATE(452),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(113),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(151),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
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
  [24] = {
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(502),
    [sym_qualified_constructor_operator] = STATE(502),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(502),
    [sym_qualified_type_operator] = STATE(502),
    [sym__qualified_type_operator] = STATE(502),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(340),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(499),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(51),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(293),
    [sym_type_infix] = STATE(286),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(393),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(47),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(465),
    [aux_sym_con_tuple_repeat1] = STATE(420),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(83),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(153),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(91),
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
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(503),
    [sym_qualified_constructor_operator] = STATE(503),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(503),
    [sym_qualified_type_operator] = STATE(503),
    [sym__qualified_type_operator] = STATE(503),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(340),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(506),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(51),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(293),
    [sym_type_infix] = STATE(286),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(393),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(47),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(465),
    [aux_sym_con_tuple_repeat1] = STATE(403),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(53),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(147),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(111),
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
    [sym_integer] = STATE(146),
    [sym__literal] = STATE(146),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(484),
    [sym_qualified_constructor_operator] = STATE(484),
    [sym_con_unit] = STATE(146),
    [sym_con_list] = STATE(146),
    [sym_con_tuple] = STATE(146),
    [sym_qualified_type] = STATE(106),
    [sym__type_operator] = STATE(484),
    [sym_qualified_type_operator] = STATE(484),
    [sym__qualified_type_operator] = STATE(484),
    [sym_tycon_arrow] = STATE(106),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(106),
    [sym__modid] = STATE(466),
    [aux_sym__qualifying_module] = STATE(312),
    [sym_type_variable] = STATE(106),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(340),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(490),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(51),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(171),
    [sym__btype] = STATE(171),
    [sym_implicit_param] = STATE(293),
    [sym_type_infix] = STATE(286),
    [sym__type_infix] = STATE(285),
    [sym_constraint] = STATE(393),
    [sym__context_constraints] = STATE(393),
    [sym__context] = STATE(47),
    [sym__type_quantifiers] = STATE(293),
    [sym__type_context] = STATE(293),
    [sym__type_fun] = STATE(293),
    [sym__type] = STATE(293),
    [sym__type_or_implicit] = STATE(293),
    [sym__type_with_kind] = STATE(465),
    [aux_sym_con_tuple_repeat1] = STATE(438),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(19),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(141),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(129),
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
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym__context,
    STATE(51), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(285), 1,
      sym__type_infix,
    STATE(286), 1,
      sym_type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(340), 1,
      sym__forall,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(439), 1,
      sym__type_with_kind,
    STATE(466), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(171), 2,
      sym_type_apply,
      sym__btype,
    STATE(393), 2,
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
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(146), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(293), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(55), 9,
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
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym__context,
    STATE(51), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(285), 1,
      sym__type_infix,
    STATE(286), 1,
      sym_type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(340), 1,
      sym__forall,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(421), 1,
      sym__type_with_kind,
    STATE(466), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(171), 2,
      sym_type_apply,
      sym__btype,
    STATE(393), 2,
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
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(146), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(293), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(55), 9,
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
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym__context,
    STATE(51), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(285), 1,
      sym__type_infix,
    STATE(286), 1,
      sym_type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(340), 1,
      sym__forall,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(405), 1,
      sym__type_with_kind,
    STATE(466), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(171), 2,
      sym_type_apply,
      sym__btype,
    STATE(393), 2,
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
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(146), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(293), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(55), 9,
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
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym__context,
    STATE(51), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(285), 1,
      sym__type_infix,
    STATE(286), 1,
      sym_type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(340), 1,
      sym__forall,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(431), 1,
      sym__type_with_kind,
    STATE(466), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(171), 2,
      sym_type_apply,
      sym__btype,
    STATE(393), 2,
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
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(146), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(293), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(55), 9,
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
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym__context,
    STATE(51), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(285), 1,
      sym__type_infix,
    STATE(286), 1,
      sym_type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(340), 1,
      sym__forall,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(449), 1,
      sym__type_with_kind,
    STATE(466), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(171), 2,
      sym_type_apply,
      sym__btype,
    STATE(393), 2,
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
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(146), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(293), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(55), 9,
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
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym__context,
    STATE(51), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(285), 1,
      sym__type_infix,
    STATE(286), 1,
      sym_type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(340), 1,
      sym__forall,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(409), 1,
      sym__type_with_kind,
    STATE(466), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(171), 2,
      sym_type_apply,
      sym__btype,
    STATE(393), 2,
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
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(146), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(293), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(55), 9,
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
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym__context,
    STATE(51), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(285), 1,
      sym__type_infix,
    STATE(286), 1,
      sym_type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(340), 1,
      sym__forall,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(460), 1,
      sym__type_with_kind,
    STATE(466), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(171), 2,
      sym_type_apply,
      sym__btype,
    STATE(393), 2,
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
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(146), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(293), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(55), 9,
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
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym__context,
    STATE(51), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(285), 1,
      sym__type_infix,
    STATE(286), 1,
      sym_type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(340), 1,
      sym__forall,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(391), 1,
      sym__type_with_kind,
    STATE(466), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(171), 2,
      sym_type_apply,
      sym__btype,
    STATE(393), 2,
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
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(146), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(293), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(55), 9,
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
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym__context,
    STATE(51), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(285), 1,
      sym__type_infix,
    STATE(286), 1,
      sym_type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(340), 1,
      sym__forall,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(400), 1,
      sym__type_with_kind,
    STATE(466), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(171), 2,
      sym_type_apply,
      sym__btype,
    STATE(393), 2,
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
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(146), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(293), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(55), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [1059] = 29,
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
    STATE(36), 1,
      sym__context,
    STATE(56), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(285), 1,
      sym__type_infix,
    STATE(291), 1,
      sym_type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(339), 1,
      sym__forall,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(366), 1,
      sym_constraint,
    STATE(393), 1,
      sym__context_constraints,
    STATE(466), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(171), 2,
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
    STATE(467), 3,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(333), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(146), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(55), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [1173] = 29,
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
    STATE(36), 1,
      sym__context,
    STATE(56), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(285), 1,
      sym__type_infix,
    STATE(291), 1,
      sym_type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(339), 1,
      sym__forall,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(366), 1,
      sym_constraint,
    STATE(393), 1,
      sym__context_constraints,
    STATE(466), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(171), 2,
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
    STATE(470), 3,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(330), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(146), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(55), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [1287] = 28,
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
    STATE(53), 1,
      sym__context,
    STATE(58), 1,
      sym_type_name,
    STATE(111), 1,
      sym_constructor,
    STATE(286), 1,
      sym_type_infix,
    STATE(290), 1,
      sym__type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(348), 1,
      sym__forall,
    STATE(364), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(393), 2,
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
    STATE(118), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(173), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(335), 6,
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
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym__context,
    STATE(51), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(285), 1,
      sym__type_infix,
    STATE(286), 1,
      sym_type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(340), 1,
      sym__forall,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(171), 2,
      sym_type_apply,
      sym__btype,
    STATE(393), 2,
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
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(146), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(335), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(55), 9,
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
    ACTIONS(201), 1,
      sym__integer_literal,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      sym__conid,
    ACTIONS(213), 1,
      anon_sym_LBRACK,
    ACTIONS(216), 1,
      anon_sym_SQUOTE,
    ACTIONS(222), 1,
      anon_sym_AT,
    STATE(89), 1,
      sym_constructor,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(219), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(198), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(204), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(92), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(196), 6,
      sym__consym,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    ACTIONS(194), 7,
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
  [1603] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym__varid,
    ACTIONS(233), 1,
      sym__integer_literal,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      sym__conid,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(249), 1,
      anon_sym_AT,
    STATE(89), 1,
      sym_constructor,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(231), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(235), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(92), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(229), 6,
      sym__consym,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    ACTIONS(227), 7,
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
  [1695] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym__varid,
    ACTIONS(233), 1,
      sym__integer_literal,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(249), 1,
      anon_sym_AT,
    ACTIONS(255), 1,
      sym__conid,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    STATE(89), 1,
      sym_constructor,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(231), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(235), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(92), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(253), 6,
      sym__consym,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    ACTIONS(251), 7,
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
  [1787] = 27,
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
    STATE(53), 1,
      sym__context,
    STATE(58), 1,
      sym_type_name,
    STATE(111), 1,
      sym_constructor,
    STATE(286), 1,
      sym_type_infix,
    STATE(290), 1,
      sym__type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(348), 1,
      sym__forall,
    STATE(364), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(393), 2,
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
    STATE(118), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(330), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(173), 5,
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
  [1894] = 28,
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
    STATE(60), 1,
      sym__context,
    STATE(67), 1,
      sym_type_name,
    STATE(190), 1,
      sym_constructor,
    STATE(309), 1,
      sym__forall_kw,
    STATE(341), 1,
      sym__forall,
    STATE(360), 1,
      aux_sym__qualifying_module,
    STATE(366), 1,
      sym_constraint,
    STATE(379), 1,
      sym_type_infix,
    STATE(393), 1,
      sym__context_constraints,
    STATE(466), 1,
      sym__modid,
    ACTIONS(277), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(266), 2,
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
    STATE(199), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(471), 4,
      sym_implicit_param,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(240), 5,
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
  [2003] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym__varid,
    ACTIONS(285), 1,
      sym__integer_literal,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(294), 1,
      sym__conid,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    ACTIONS(300), 1,
      anon_sym_SQUOTE,
    ACTIONS(306), 1,
      anon_sym_AT,
    STATE(111), 1,
      sym_constructor,
    STATE(364), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(303), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(282), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(288), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(196), 4,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(118), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(121), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(194), 8,
      sym_comma,
      sym__consym,
      anon_sym_,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(45), 12,
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
  [2094] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym__varid,
    ACTIONS(313), 1,
      sym__integer_literal,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(319), 1,
      sym__conid,
    ACTIONS(322), 1,
      anon_sym_LBRACK,
    ACTIONS(324), 1,
      anon_sym_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_AT,
    STATE(111), 1,
      sym_constructor,
    STATE(364), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(311), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(315), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(229), 4,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(118), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(121), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(227), 8,
      sym_comma,
      sym__consym,
      anon_sym_,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(48), 12,
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
  [2185] = 27,
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
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym__context,
    STATE(51), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(285), 1,
      sym__type_infix,
    STATE(286), 1,
      sym_type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(340), 1,
      sym__forall,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(171), 2,
      sym_type_apply,
      sym__btype,
    STATE(393), 2,
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
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(333), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(146), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(55), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2292] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym__varid,
    ACTIONS(313), 1,
      sym__integer_literal,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_LBRACK,
    ACTIONS(329), 1,
      anon_sym_AT,
    ACTIONS(331), 1,
      sym__conid,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      sym_constructor,
    STATE(364), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(311), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(315), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(253), 4,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(118), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(121), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(251), 8,
      sym_comma,
      sym__consym,
      anon_sym_,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(45), 12,
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
  [2383] = 27,
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
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym__context,
    STATE(51), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(285), 1,
      sym__type_infix,
    STATE(286), 1,
      sym_type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(340), 1,
      sym__forall,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(171), 2,
      sym_type_apply,
      sym__btype,
    STATE(393), 2,
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
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(336), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(146), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(55), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2490] = 27,
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
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym__context,
    STATE(51), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(285), 1,
      sym__type_infix,
    STATE(286), 1,
      sym_type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(340), 1,
      sym__forall,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(171), 2,
      sym_type_apply,
      sym__btype,
    STATE(393), 2,
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
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(330), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(146), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(55), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2597] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__varid,
    ACTIONS(347), 1,
      sym__integer_literal,
    ACTIONS(353), 1,
      anon_sym_,
    ACTIONS(355), 1,
      anon_sym_EQ_GT,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym__conid,
    ACTIONS(363), 1,
      anon_sym_LBRACK,
    ACTIONS(366), 1,
      anon_sym_SQUOTE,
    STATE(234), 1,
      sym_constructor,
    STATE(378), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(369), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(344), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(350), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(251), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(222), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(340), 6,
      sym_comma,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
    ACTIONS(342), 6,
      sym__consym,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_AT,
      anon_sym_PERCENT,
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
    STATE(53), 1,
      sym__context,
    STATE(58), 1,
      sym_type_name,
    STATE(111), 1,
      sym_constructor,
    STATE(286), 1,
      sym_type_infix,
    STATE(290), 1,
      sym__type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(348), 1,
      sym__forall,
    STATE(364), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(393), 2,
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
    STATE(118), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(336), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(173), 5,
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
    STATE(53), 1,
      sym__context,
    STATE(58), 1,
      sym_type_name,
    STATE(111), 1,
      sym_constructor,
    STATE(286), 1,
      sym_type_infix,
    STATE(290), 1,
      sym__type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(348), 1,
      sym__forall,
    STATE(364), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(393), 2,
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
    STATE(118), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(333), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(173), 5,
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
    STATE(116), 1,
      sym_constructor,
    STATE(358), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
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
    STATE(149), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(253), 5,
      sym__consym,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    STATE(146), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(251), 6,
      sym_comma,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
    STATE(57), 12,
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
  [2994] = 19,
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
    ACTIONS(384), 1,
      sym__conid,
    ACTIONS(387), 1,
      anon_sym_SQUOTE,
    STATE(116), 1,
      sym_constructor,
    STATE(358), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
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
    STATE(149), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(229), 5,
      sym__consym,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    STATE(146), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(227), 6,
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
  [3084] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__varid,
    ACTIONS(347), 1,
      sym__integer_literal,
    ACTIONS(353), 1,
      anon_sym_,
    ACTIONS(355), 1,
      anon_sym_EQ_GT,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym__conid,
    ACTIONS(363), 1,
      anon_sym_LBRACK,
    ACTIONS(366), 1,
      anon_sym_SQUOTE,
    STATE(234), 1,
      sym_constructor,
    STATE(378), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(369), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(390), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(340), 3,
      anon_sym_2,
      anon_sym_4,
      anon_sym_BQUOTE,
    ACTIONS(344), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(350), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(251), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(222), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(342), 6,
      sym__consym,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_AT,
      anon_sym_PERCENT,
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
  [3178] = 19,
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
    STATE(116), 1,
      sym_constructor,
    STATE(358), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
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
    STATE(149), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(196), 5,
      sym__consym,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    STATE(146), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(194), 6,
      sym_comma,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
    STATE(57), 12,
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
  [3268] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym__varid,
    ACTIONS(347), 1,
      sym__integer_literal,
    ACTIONS(353), 1,
      anon_sym_,
    ACTIONS(355), 1,
      anon_sym_EQ_GT,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym__conid,
    ACTIONS(363), 1,
      anon_sym_LBRACK,
    ACTIONS(366), 1,
      anon_sym_SQUOTE,
    STATE(234), 1,
      sym_constructor,
    STATE(378), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(369), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(344), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(350), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(342), 4,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_PERCENT,
    STATE(251), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(222), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(340), 7,
      sym_comma,
      sym__consym,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
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
    STATE(148), 1,
      sym_constructor,
    STATE(351), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
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
    ACTIONS(229), 3,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(168), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(173), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(227), 7,
      sym_comma,
      sym__consym,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(62), 12,
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
  [3449] = 27,
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
    STATE(60), 1,
      sym__context,
    STATE(67), 1,
      sym_type_name,
    STATE(190), 1,
      sym_constructor,
    STATE(309), 1,
      sym__forall_kw,
    STATE(341), 1,
      sym__forall,
    STATE(360), 1,
      aux_sym__qualifying_module,
    STATE(366), 1,
      sym_constraint,
    STATE(379), 1,
      sym_type_infix,
    STATE(393), 1,
      sym__context_constraints,
    STATE(466), 1,
      sym__modid,
    ACTIONS(277), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(266), 2,
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
    STATE(467), 3,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(199), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(240), 5,
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
  [3554] = 27,
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
    STATE(60), 1,
      sym__context,
    STATE(67), 1,
      sym_type_name,
    STATE(190), 1,
      sym_constructor,
    STATE(309), 1,
      sym__forall_kw,
    STATE(341), 1,
      sym__forall,
    STATE(360), 1,
      aux_sym__qualifying_module,
    STATE(366), 1,
      sym_constraint,
    STATE(379), 1,
      sym_type_infix,
    STATE(393), 1,
      sym__context_constraints,
    STATE(466), 1,
      sym__modid,
    ACTIONS(277), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(266), 2,
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
    STATE(470), 3,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(199), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(240), 5,
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
  [3659] = 19,
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
    ACTIONS(435), 1,
      sym__conid,
    ACTIONS(438), 1,
      anon_sym_SQUOTE,
    STATE(148), 1,
      sym_constructor,
    STATE(351), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
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
    ACTIONS(253), 3,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(168), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(173), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(251), 7,
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
  [3748] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym__varid,
    ACTIONS(447), 1,
      sym__integer_literal,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
    ACTIONS(456), 1,
      sym__conid,
    ACTIONS(459), 1,
      anon_sym_LBRACK,
    ACTIONS(462), 1,
      anon_sym_SQUOTE,
    ACTIONS(468), 1,
      anon_sym_AT,
    STATE(148), 1,
      sym_constructor,
    STATE(351), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(465), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(196), 3,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    ACTIONS(444), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(450), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(168), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(173), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(194), 7,
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
  [3837] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym__varid,
    ACTIONS(477), 1,
      sym__integer_literal,
    ACTIONS(483), 1,
      anon_sym_LPAREN,
    ACTIONS(486), 1,
      sym__conid,
    ACTIONS(489), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 1,
      anon_sym_SQUOTE,
    ACTIONS(498), 1,
      anon_sym_AT,
    STATE(190), 1,
      sym_constructor,
    STATE(360), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(196), 2,
      sym__tyconsym,
      anon_sym_EQ_GT,
    ACTIONS(495), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(474), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(480), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(199), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(194), 5,
      sym_comma,
      sym__consym,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
    STATE(198), 5,
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
  [3923] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      sym__varid,
    ACTIONS(505), 1,
      sym__integer_literal,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      sym__conid,
    ACTIONS(514), 1,
      anon_sym_LBRACK,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      anon_sym_AT,
    STATE(190), 1,
      sym_constructor,
    STATE(360), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(253), 2,
      sym__tyconsym,
      anon_sym_EQ_GT,
    ACTIONS(519), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(503), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(507), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(199), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(251), 5,
      sym_comma,
      sym__consym,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
    STATE(198), 5,
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
    ACTIONS(501), 1,
      sym__varid,
    ACTIONS(505), 1,
      sym__integer_literal,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_LBRACK,
    ACTIONS(521), 1,
      anon_sym_AT,
    ACTIONS(523), 1,
      sym__conid,
    ACTIONS(526), 1,
      anon_sym_SQUOTE,
    STATE(190), 1,
      sym_constructor,
    STATE(360), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(229), 2,
      sym__tyconsym,
      anon_sym_EQ_GT,
    ACTIONS(519), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(503), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(507), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(199), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(227), 5,
      sym_comma,
      sym__consym,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
    STATE(198), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(65), 12,
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
    ACTIONS(337), 1,
      sym__varid,
    ACTIONS(347), 1,
      sym__integer_literal,
    ACTIONS(355), 1,
      anon_sym_EQ_GT,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      sym__conid,
    ACTIONS(363), 1,
      anon_sym_LBRACK,
    ACTIONS(366), 1,
      anon_sym_SQUOTE,
    STATE(234), 1,
      sym_constructor,
    STATE(378), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(340), 2,
      sym__consym,
      anon_sym_BQUOTE,
    ACTIONS(342), 2,
      sym__tyconsym,
      anon_sym_AT,
    ACTIONS(369), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(344), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(350), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(353), 3,
      sym_comma,
      anon_sym_,
      anon_sym_RPAREN,
    STATE(251), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(222), 5,
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
  [4182] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
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
    STATE(377), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(227), 2,
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
    STATE(249), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(240), 5,
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
    ACTIONS(253), 1,
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
    STATE(377), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(251), 2,
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
    STATE(249), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(240), 5,
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
    ACTIONS(196), 1,
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
    STATE(377), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(194), 2,
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
    STATE(249), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(240), 5,
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
    ACTIONS(583), 1,
      sym__integer_literal,
    ACTIONS(587), 1,
      anon_sym_LPAREN,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    ACTIONS(593), 1,
      anon_sym_SQUOTE,
    STATE(234), 1,
      sym_constructor,
    STATE(378), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(595), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(581), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(585), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(579), 4,
      sym_comma,
      anon_sym_,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
    STATE(251), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(222), 5,
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
  [4505] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      sym__varid,
    ACTIONS(605), 1,
      sym__integer_literal,
    ACTIONS(611), 1,
      anon_sym_LPAREN,
    ACTIONS(614), 1,
      sym__conid,
    ACTIONS(617), 1,
      anon_sym_LBRACK,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
    STATE(234), 1,
      sym_constructor,
    STATE(378), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(623), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(602), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(608), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(600), 4,
      sym_comma,
      anon_sym_,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
    STATE(251), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(222), 5,
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
  [4582] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__conid,
    ACTIONS(501), 1,
      sym__varid,
    ACTIONS(505), 1,
      sym__integer_literal,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_LBRACK,
    ACTIONS(626), 1,
      anon_sym_SQUOTE,
    STATE(190), 1,
      sym_constructor,
    STATE(360), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(519), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(219), 2,
      sym_type_apply,
      sym__btype,
    STATE(283), 2,
      sym_type_infix,
      sym__type_infix,
    ACTIONS(503), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(507), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(199), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(198), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(66), 10,
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
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(309), 1,
      sym__varid,
    ACTIONS(313), 1,
      sym__integer_literal,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_LBRACK,
    ACTIONS(628), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      sym_constructor,
    STATE(364), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(153), 2,
      sym_type_apply,
      sym__btype,
    STATE(283), 2,
      sym_type_infix,
      sym__type_infix,
    ACTIONS(311), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(315), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(118), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(121), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(46), 10,
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
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(225), 1,
      sym__varid,
    ACTIONS(233), 1,
      sym__integer_literal,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    STATE(89), 1,
      sym_constructor,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(131), 2,
      sym_type_apply,
      sym__btype,
    STATE(283), 2,
      sym_type_infix,
      sym__type_infix,
    ACTIONS(231), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(235), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(92), 5,
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
    STATE(359), 1,
      aux_sym__qualifying_module,
    STATE(362), 1,
      sym_constructor,
    STATE(466), 1,
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
    STATE(430), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(425), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(313), 11,
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
    STATE(359), 1,
      aux_sym__qualifying_module,
    STATE(362), 1,
      sym_constructor,
    STATE(466), 1,
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
    STATE(430), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(425), 5,
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
    STATE(359), 1,
      aux_sym__qualifying_module,
    STATE(362), 1,
      sym_constructor,
    STATE(466), 1,
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
    STATE(430), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(425), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(302), 11,
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
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(225), 1,
      sym__varid,
    ACTIONS(233), 1,
      sym__integer_literal,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    STATE(89), 1,
      sym_constructor,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(231), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(235), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(106), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(92), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(99), 10,
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
    STATE(148), 1,
      sym_constructor,
    STATE(351), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
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
    STATE(168), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(173), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(162), 10,
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
    ACTIONS(583), 1,
      sym__integer_literal,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    ACTIONS(650), 1,
      sym__varid,
    ACTIONS(652), 1,
      anon_sym_LPAREN,
    ACTIONS(654), 1,
      anon_sym_SQUOTE,
    STATE(347), 1,
      sym_constructor,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(595), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(581), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(585), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(369), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(222), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(469), 10,
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
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(309), 1,
      sym__varid,
    ACTIONS(313), 1,
      sym__integer_literal,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_LBRACK,
    ACTIONS(628), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      sym_constructor,
    STATE(364), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(327), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(311), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(315), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(118), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(121), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(137), 10,
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
    STATE(116), 1,
      sym_constructor,
    STATE(358), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
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
    STATE(149), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(146), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(145), 10,
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
    ACTIONS(271), 1,
      sym__conid,
    ACTIONS(501), 1,
      sym__varid,
    ACTIONS(505), 1,
      sym__integer_literal,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_LBRACK,
    ACTIONS(626), 1,
      anon_sym_SQUOTE,
    STATE(190), 1,
      sym_constructor,
    STATE(360), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(519), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(503), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(507), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(199), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(198), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(201), 10,
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
    STATE(377), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
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
    STATE(249), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(240), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(241), 10,
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
  [5634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
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
  [5673] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_4,
    ACTIONS(689), 1,
      anon_sym_COLON_COLON,
    STATE(38), 1,
      sym__colon2,
    STATE(473), 1,
      sym__type_annotation,
    ACTIONS(684), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(682), 17,
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
  [5718] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_,
    ACTIONS(698), 1,
      anon_sym_EQ_GT,
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
  [5758] = 3,
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
  [5794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(704), 19,
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
  [5830] = 3,
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
  [5866] = 3,
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
  [5902] = 4,
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
  [5940] = 3,
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
  [5976] = 3,
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
  [6012] = 3,
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
  [6048] = 3,
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
  [6084] = 3,
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
  [6120] = 3,
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
  [6156] = 3,
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
  [6192] = 4,
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
  [6230] = 3,
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
  [6266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(682), 19,
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
  [6302] = 3,
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
  [6338] = 3,
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
  [6374] = 3,
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
  [6410] = 3,
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
  [6446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
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
  [6484] = 3,
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
  [6520] = 3,
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
  [6556] = 3,
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
  [6591] = 3,
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
  [6626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
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
  [6663] = 3,
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
  [6698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(682), 20,
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
  [6733] = 3,
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
  [6768] = 3,
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
  [6803] = 3,
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
  [6838] = 3,
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
  [6873] = 3,
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
  [6908] = 3,
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
  [6943] = 3,
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
  [6978] = 3,
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
  [7013] = 3,
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
  [7048] = 3,
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
  [7083] = 3,
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
  [7118] = 4,
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
  [7155] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(766), 1,
      sym__consym,
    ACTIONS(768), 1,
      sym__tyconsym,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(774), 1,
      anon_sym_SQUOTE,
    STATE(306), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    STATE(513), 1,
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
  [7208] = 3,
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
  [7243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(704), 20,
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
  [7278] = 4,
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
  [7315] = 3,
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
  [7350] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_,
    ACTIONS(698), 1,
      anon_sym_EQ_GT,
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
  [7389] = 3,
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
  [7424] = 3,
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
  [7458] = 4,
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
  [7494] = 3,
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
  [7528] = 3,
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
  [7562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(704), 18,
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
  [7596] = 3,
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
  [7630] = 3,
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
  [7664] = 3,
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
  [7698] = 3,
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
  [7732] = 3,
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
  [7766] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
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
  [7802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(682), 18,
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
  [7836] = 3,
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
  [7870] = 3,
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
  [7904] = 3,
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
  [7938] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(774), 1,
      anon_sym_SQUOTE,
    ACTIONS(776), 1,
      sym__tyconsym,
    STATE(306), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    STATE(513), 1,
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
  [7990] = 4,
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
  [8026] = 3,
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
  [8060] = 3,
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
  [8094] = 3,
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
  [8128] = 3,
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
  [8162] = 3,
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
  [8196] = 3,
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
  [8230] = 3,
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
  [8263] = 3,
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
  [8296] = 3,
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
  [8329] = 3,
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
  [8362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(704), 19,
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
  [8428] = 3,
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
  [8461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(682), 19,
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
  [8527] = 3,
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
  [8560] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(766), 1,
      sym__consym,
    ACTIONS(768), 1,
      sym__tyconsym,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(774), 1,
      anon_sym_SQUOTE,
    STATE(306), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    STATE(513), 1,
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
  [8611] = 3,
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
  [8644] = 3,
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
  [8677] = 3,
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
  [8710] = 3,
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
  [8743] = 3,
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
  [8776] = 3,
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
  [8809] = 3,
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
  [8842] = 3,
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
  [8875] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(774), 1,
      anon_sym_SQUOTE,
    ACTIONS(776), 1,
      sym__tyconsym,
    STATE(306), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    STATE(513), 1,
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
  [8925] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(634), 1,
      sym__integer_literal,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    STATE(350), 1,
      sym_constructor,
    STATE(359), 1,
      aux_sym__qualifying_module,
    STATE(448), 1,
      sym_qualified_type,
    STATE(466), 1,
      sym__modid,
    ACTIONS(632), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(636), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(436), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(425), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [8976] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym__integer_literal,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(660), 1,
      sym__conid,
    ACTIONS(780), 1,
      anon_sym_LPAREN,
    STATE(237), 1,
      sym_constructor,
    STATE(254), 1,
      sym_qualified_type,
    STATE(377), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(263), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(267), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(253), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(240), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9027] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(313), 1,
      sym__integer_literal,
    ACTIONS(322), 1,
      anon_sym_LBRACK,
    ACTIONS(782), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_constructor,
    STATE(129), 1,
      sym_qualified_type,
    STATE(364), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(311), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(315), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(115), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(121), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9078] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym__integer_literal,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    ACTIONS(784), 1,
      anon_sym_LPAREN,
    STATE(233), 1,
      sym_constructor,
    STATE(257), 1,
      sym_qualified_type,
    STATE(378), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(581), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(585), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(230), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(222), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9129] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(786), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_constructor,
    STATE(129), 1,
      sym_qualified_type,
    STATE(364), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(173), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(177), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(173), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9180] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym__integer_literal,
    ACTIONS(271), 1,
      sym__conid,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(788), 1,
      anon_sym_LPAREN,
    STATE(191), 1,
      sym_constructor,
    STATE(217), 1,
      sym_qualified_type,
    STATE(360), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(263), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(267), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(253), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(240), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9231] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(790), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_constructor,
    STATE(112), 1,
      sym_qualified_type,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(160), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(146), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9282] = 3,
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
  [9313] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(233), 1,
      sym__integer_literal,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_constructor,
    STATE(112), 1,
      sym_qualified_type,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(231), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(235), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(105), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(92), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
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
  [9397] = 4,
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
  [9430] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__conid,
    ACTIONS(505), 1,
      sym__integer_literal,
    ACTIONS(514), 1,
      anon_sym_LBRACK,
    ACTIONS(794), 1,
      anon_sym_LPAREN,
    STATE(191), 1,
      sym_constructor,
    STATE(217), 1,
      sym_qualified_type,
    STATE(360), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(503), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(507), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(197), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(198), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9481] = 4,
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
  [9514] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(646), 1,
      sym__conid,
    ACTIONS(796), 1,
      anon_sym_LPAREN,
    STATE(154), 1,
      sym_constructor,
    STATE(164), 1,
      sym_qualified_type,
    STATE(351), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(173), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(177), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(161), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(173), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9565] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(656), 1,
      sym__conid,
    ACTIONS(798), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_constructor,
    STATE(144), 1,
      sym_qualified_type,
    STATE(358), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(160), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(146), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9616] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym__integer_literal,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    STATE(343), 1,
      sym_constructor,
    STATE(380), 1,
      sym_qualified_type,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    ACTIONS(581), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(585), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(230), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(222), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9667] = 3,
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
  [9697] = 3,
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
  [9727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(682), 17,
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
  [9757] = 14,
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
    STATE(515), 1,
      sym_entity_body,
    STATE(78), 2,
      sym__field_name,
      sym_variable,
    STATE(214), 2,
      sym__entity_line_definition,
      aux_sym_entity_body_repeat1,
    STATE(357), 2,
      sym_entity_derives,
      aux_sym_entity_body_repeat2,
    STATE(361), 2,
      sym__haskell_constraint_name,
      sym_constructor,
    STATE(511), 6,
      sym__entity_key,
      sym_surrogate_key,
      sym_natural_key,
      sym_field_definition,
      sym_unique_constraint,
      sym_foreign_constraint,
  [9809] = 3,
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
  [9839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(716), 20,
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
  [9869] = 3,
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
  [9959] = 3,
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
  [9989] = 3,
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
  [10019] = 3,
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
  [10049] = 3,
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
  [10079] = 3,
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
  [10109] = 3,
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
  [10139] = 3,
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
  [10169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(704), 17,
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
  [10199] = 14,
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
    STATE(228), 2,
      sym__entity_line_definition,
      aux_sym_entity_body_repeat1,
    STATE(354), 2,
      sym_entity_derives,
      aux_sym_entity_body_repeat2,
    STATE(361), 2,
      sym__haskell_constraint_name,
      sym_constructor,
    STATE(511), 6,
      sym__entity_key,
      sym_surrogate_key,
      sym_natural_key,
      sym_field_definition,
      sym_unique_constraint,
      sym_foreign_constraint,
  [10251] = 3,
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
  [10281] = 3,
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
  [10311] = 3,
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
  [10341] = 3,
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
  [10371] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(770), 1,
      anon_sym_EQ_GT,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(774), 1,
      anon_sym_SQUOTE,
    ACTIONS(818), 1,
      sym__tyconsym,
    STATE(306), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    STATE(513), 1,
      sym_constructor,
    ACTIONS(764), 3,
      sym_comma,
      anon_sym_,
      anon_sym_RPAREN,
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
  [10418] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_,
    ACTIONS(698), 1,
      anon_sym_EQ_GT,
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
  [10506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(712), 18,
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
  [10562] = 3,
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
  [10590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(692), 18,
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
  [10646] = 13,
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
    STATE(228), 2,
      sym__entity_line_definition,
      aux_sym_entity_body_repeat1,
    STATE(361), 2,
      sym__haskell_constraint_name,
      sym_constructor,
    STATE(511), 6,
      sym__entity_key,
      sym_surrogate_key,
      sym_natural_key,
      sym_field_definition,
      sym_unique_constraint,
      sym_foreign_constraint,
  [10694] = 3,
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
  [10722] = 3,
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
  [10750] = 3,
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
  [10778] = 3,
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
  [10806] = 4,
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
  [10835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
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
  [10864] = 4,
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
  [10893] = 4,
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
  [10922] = 4,
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
  [10951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DOT,
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
  [10980] = 3,
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
  [11007] = 3,
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
  [11033] = 3,
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
  [11059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(704), 16,
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
  [11085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(708), 16,
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
  [11111] = 14,
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
    STATE(315), 1,
      sym__entity_header,
    STATE(359), 1,
      aux_sym__qualifying_module,
    STATE(362), 1,
      sym_constructor,
    STATE(466), 1,
      sym__modid,
    STATE(262), 2,
      sym_entity_definition,
      aux_sym_quasi_quotation_repeat1,
    STATE(314), 2,
      sym__entity_name,
      sym_type_name,
    STATE(430), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [11159] = 3,
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
  [11185] = 3,
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
  [11211] = 3,
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
  [11237] = 3,
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
  [11263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(682), 14,
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
  [11315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(682), 16,
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
  [11341] = 3,
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
  [11367] = 3,
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
  [11393] = 3,
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
  [11419] = 3,
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
  [11445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(704), 14,
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
    ACTIONS(758), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(756), 16,
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
  [11497] = 3,
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
  [11523] = 3,
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
  [11549] = 3,
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
  [11575] = 3,
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
  [11601] = 14,
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
    STATE(315), 1,
      sym__entity_header,
    STATE(359), 1,
      aux_sym__qualifying_module,
    STATE(362), 1,
      sym_constructor,
    STATE(466), 1,
      sym__modid,
    STATE(262), 2,
      sym_entity_definition,
      aux_sym_quasi_quotation_repeat1,
    STATE(314), 2,
      sym__entity_name,
      sym_type_name,
    STATE(430), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [11649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(724), 16,
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
  [11675] = 3,
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
  [11701] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(85), 1,
      sym__tyconsym,
    ACTIONS(87), 1,
      anon_sym_2,
    ACTIONS(89), 1,
      anon_sym_DASH_GT,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(650), 1,
      sym__varid,
    STATE(306), 1,
      aux_sym__qualifying_module,
    STATE(370), 1,
      sym_type_variable,
    STATE(466), 1,
      sym__modid,
    STATE(476), 1,
      sym__arrow,
    STATE(513), 1,
      sym_constructor,
    STATE(516), 6,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym_annotated_type_variable,
  [11746] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(774), 1,
      anon_sym_SQUOTE,
    ACTIONS(818), 1,
      sym__tyconsym,
    STATE(306), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    STATE(513), 1,
      sym_constructor,
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
  [11785] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(131), 1,
      sym__tyconsym,
    ACTIONS(133), 1,
      anon_sym_2,
    ACTIONS(135), 1,
      anon_sym_DASH_GT,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(650), 1,
      sym__varid,
    STATE(306), 1,
      aux_sym__qualifying_module,
    STATE(370), 1,
      sym_type_variable,
    STATE(466), 1,
      sym__modid,
    STATE(493), 1,
      sym__arrow,
    STATE(513), 1,
      sym_constructor,
    STATE(492), 6,
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
  [11969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(887), 12,
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
  [11991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(891), 12,
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
  [12013] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(895), 1,
      sym__tyconsym,
    STATE(306), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    STATE(513), 1,
      sym_constructor,
    STATE(277), 7,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
      sym__qtyconops,
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
    STATE(359), 1,
      aux_sym__qualifying_module,
    STATE(362), 1,
      sym_constructor,
    STATE(466), 1,
      sym__modid,
    STATE(308), 2,
      sym__entity_name,
      sym_type_name,
    STATE(430), 4,
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
    STATE(347), 1,
      sym_constructor,
    STATE(388), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    STATE(396), 2,
      sym__entity_name,
      sym_type_name,
    STATE(369), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [12139] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 2,
      aux_sym__key_value_atribute_value_other_token_token1,
      sym_float,
    ACTIONS(909), 2,
      sym_char,
      sym_string,
    ACTIONS(634), 4,
      sym__integer_literal,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(395), 5,
      sym__key_value_attribute_value,
      sym__key_value_atribute_value_literal,
      sym__key_value_atribute_value_other_token,
      sym_integer,
      sym__literal,
  [12164] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym__varid,
    ACTIONS(913), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(915), 1,
      sym_exl_mark_attribute,
    ACTIONS(917), 1,
      sym__newline,
    STATE(297), 1,
      aux_sym_surrogate_key_repeat1,
    STATE(317), 3,
      sym__field_name,
      sym_variable,
      aux_sym_natural_key_repeat1,
    STATE(415), 4,
      sym__key_attribute,
      sym__field_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
  [12194] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(153), 1,
      sym__tyconsym,
    ACTIONS(589), 1,
      sym__conid,
    STATE(306), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    STATE(513), 1,
      sym_constructor,
    STATE(502), 5,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
  [12223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 11,
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
  [12240] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(143), 1,
      sym__tyconsym,
    ACTIONS(589), 1,
      sym__conid,
    STATE(306), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    STATE(513), 1,
      sym_constructor,
    STATE(491), 5,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
  [12269] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_PERCENT,
    STATE(413), 1,
      sym_modifier,
    ACTIONS(923), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    STATE(49), 2,
      sym__arrow,
      sym__fun_arrow,
    ACTIONS(921), 5,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [12294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 2,
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
  [12313] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      sym__varid,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    ACTIONS(937), 1,
      anon_sym_LBRACE,
    ACTIONS(932), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
    STATE(287), 4,
      sym_type_variable,
      sym_inferred_type_variable,
      sym__quantifier,
      aux_sym__forall_repeat1,
  [12337] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym__varid,
    ACTIONS(940), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(942), 1,
      sym_exl_mark_attribute,
    ACTIONS(944), 1,
      sym__newline,
    STATE(331), 1,
      aux_sym_unique_constraint_repeat1,
    STATE(426), 2,
      sym_key_value_attribute,
      sym__unique_constraint_attribute,
    STATE(317), 3,
      sym__field_name,
      sym_variable,
      aux_sym_natural_key_repeat1,
  [12365] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym__varid,
    ACTIONS(948), 1,
      anon_sym_LPAREN,
    ACTIONS(950), 1,
      anon_sym_LBRACE,
    ACTIONS(946), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
    STATE(287), 4,
      sym_type_variable,
      sym_inferred_type_variable,
      sym__quantifier,
      aux_sym__forall_repeat1,
  [12389] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_PERCENT,
    STATE(413), 1,
      sym_modifier,
    ACTIONS(952), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    STATE(52), 2,
      sym__arrow,
      sym__fun_arrow,
    ACTIONS(921), 4,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [12413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 2,
      anon_sym_,
      anon_sym_EQ_GT,
    ACTIONS(954), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(764), 5,
      anon_sym_2,
      anon_sym_DASH_GT,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
  [12432] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      sym__conid,
    STATE(292), 1,
      aux_sym_entity_derives_repeat1,
    STATE(372), 1,
      aux_sym__qualifying_module,
    STATE(389), 1,
      sym_constructor,
    STATE(453), 1,
      sym_qualified_type,
    STATE(466), 1,
      sym__modid,
    ACTIONS(957), 2,
      sym__dedent,
      anon_sym_deriving,
  [12458] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      sym__colon2,
    STATE(435), 1,
      sym__type_annotation,
    STATE(440), 1,
      sym_kind,
    ACTIONS(964), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
    ACTIONS(962), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [12480] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      sym_exl_mark_attribute,
    ACTIONS(966), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(968), 1,
      sym__newline,
    STATE(298), 1,
      aux_sym_surrogate_key_repeat1,
    STATE(415), 4,
      sym__key_attribute,
      sym__field_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
  [12502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 2,
      sym__dedent,
      sym__field_strictness_prefix,
    ACTIONS(970), 6,
      anon_sym_Id,
      anon_sym_Primary,
      anon_sym_Foreign,
      anon_sym_deriving,
      sym__varid,
      sym__conid,
  [12518] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      sym__conid,
    STATE(292), 1,
      aux_sym_entity_derives_repeat1,
    STATE(372), 1,
      aux_sym__qualifying_module,
    STATE(389), 1,
      sym_constructor,
    STATE(453), 1,
      sym_qualified_type,
    STATE(466), 1,
      sym__modid,
    ACTIONS(974), 2,
      sym__dedent,
      anon_sym_deriving,
  [12544] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      sym_exl_mark_attribute,
    ACTIONS(966), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(978), 1,
      sym__newline,
    STATE(298), 1,
      aux_sym_surrogate_key_repeat1,
    STATE(415), 4,
      sym__key_attribute,
      sym__field_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
  [12566] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(983), 1,
      sym_exl_mark_attribute,
    ACTIONS(986), 1,
      sym__newline,
    STATE(298), 1,
      aux_sym_surrogate_key_repeat1,
    STATE(415), 4,
      sym__key_attribute,
      sym__field_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
  [12588] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      sym_exl_mark_attribute,
    ACTIONS(966), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(988), 1,
      sym__newline,
    STATE(294), 1,
      aux_sym_surrogate_key_repeat1,
    STATE(415), 4,
      sym__key_attribute,
      sym__field_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
  [12610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [12623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [12636] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(994), 1,
      sym_exl_mark_attribute,
    ACTIONS(996), 1,
      sym__newline,
    STATE(304), 1,
      aux_sym_field_definition_repeat1,
    STATE(423), 3,
      sym__field_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
  [12657] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(994), 1,
      sym_exl_mark_attribute,
    ACTIONS(998), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_field_definition_repeat1,
    STATE(423), 3,
      sym__field_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
  [12678] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(994), 1,
      sym_exl_mark_attribute,
    ACTIONS(1000), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_field_definition_repeat1,
    STATE(423), 3,
      sym__field_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
  [12699] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(1002), 1,
      sym_exl_mark_attribute,
    ACTIONS(1004), 1,
      sym__newline,
    STATE(307), 4,
      sym__entity_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
      aux_sym__entity_header_repeat1,
  [12718] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(1006), 1,
      sym__tyconsym,
    STATE(270), 1,
      sym_constructor_operator,
    STATE(326), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    STATE(513), 1,
      sym_constructor,
  [12743] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(1011), 1,
      sym_exl_mark_attribute,
    ACTIONS(1014), 1,
      sym__newline,
    STATE(307), 4,
      sym__entity_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
      aux_sym__entity_header_repeat1,
  [12762] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(1016), 1,
      sym_exl_mark_attribute,
    ACTIONS(1018), 1,
      sym__newline,
    STATE(305), 4,
      sym__entity_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
      aux_sym__entity_header_repeat1,
  [12781] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym__varid,
    ACTIONS(948), 1,
      anon_sym_LPAREN,
    ACTIONS(950), 1,
      anon_sym_LBRACE,
    STATE(289), 4,
      sym_type_variable,
      sym_inferred_type_variable,
      sym__quantifier,
      aux_sym__forall_repeat1,
  [12800] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1020), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(1023), 1,
      sym_exl_mark_attribute,
    ACTIONS(1026), 1,
      sym__newline,
    STATE(310), 1,
      aux_sym_field_definition_repeat1,
    STATE(423), 3,
      sym__field_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
  [12821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [12834] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(1006), 1,
      sym__tyconsym,
    STATE(87), 1,
      sym_constructor,
    STATE(270), 1,
      sym_constructor_operator,
    STATE(326), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
  [12859] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(994), 1,
      sym_exl_mark_attribute,
    ACTIONS(1030), 1,
      sym__newline,
    STATE(303), 1,
      aux_sym_field_definition_repeat1,
    STATE(423), 3,
      sym__field_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
  [12880] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(1032), 1,
      sym_exl_mark_attribute,
    ACTIONS(1034), 1,
      sym__newline,
    STATE(318), 4,
      sym__entity_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
      aux_sym__entity_header_repeat1,
  [12899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1038), 1,
      sym__indent,
    ACTIONS(1036), 6,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [12914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 7,
      sym_cascade_action,
      sym__sql_constraint_name,
      anon_sym_2,
      anon_sym_DASH_GT,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
  [12927] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      sym__varid,
    ACTIONS(1043), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(1045), 2,
      sym__newline,
      sym_exl_mark_attribute,
    STATE(317), 3,
      sym__field_name,
      sym_variable,
      aux_sym_natural_key_repeat1,
  [12946] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(1002), 1,
      sym_exl_mark_attribute,
    ACTIONS(1047), 1,
      sym__newline,
    STATE(307), 4,
      sym__entity_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
      aux_sym__entity_header_repeat1,
  [12965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [12978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 6,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [12990] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      sym__varid,
    ACTIONS(1055), 1,
      anon_sym_References,
    ACTIONS(1057), 1,
      sym__newline,
    STATE(332), 3,
      sym__field_name,
      sym_variable,
      aux_sym_natural_key_repeat1,
  [13008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 6,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [13032] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      sym__conid,
    STATE(296), 1,
      aux_sym_entity_derives_repeat1,
    STATE(372), 1,
      aux_sym__qualifying_module,
    STATE(389), 1,
      sym_constructor,
    STATE(453), 1,
      sym_qualified_type,
    STATE(466), 1,
      sym__modid,
  [13054] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      sym__conid,
    ACTIONS(1063), 1,
      anon_sym_LPAREN,
    STATE(343), 1,
      sym_constructor,
    STATE(380), 1,
      sym_qualified_type,
    STATE(388), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
  [13076] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      sym__consym,
    ACTIONS(1067), 1,
      sym__tyconsym,
    ACTIONS(1069), 1,
      sym__conid,
    STATE(326), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
    STATE(513), 1,
      sym_constructor,
  [13098] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(1072), 1,
      anon_sym_LPAREN,
    STATE(350), 1,
      sym_constructor,
    STATE(359), 1,
      aux_sym__qualifying_module,
    STATE(448), 1,
      sym_qualified_type,
    STATE(466), 1,
      sym__modid,
  [13120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(668), 5,
      sym_cascade_action,
      sym__sql_constraint_name,
      anon_sym_2,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
  [13134] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(1077), 1,
      sym_exl_mark_attribute,
    ACTIONS(1080), 1,
      sym__newline,
    STATE(329), 1,
      aux_sym_unique_constraint_repeat1,
    STATE(426), 2,
      sym_key_value_attribute,
      sym__unique_constraint_attribute,
  [13154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13166] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      sym_exl_mark_attribute,
    ACTIONS(1084), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(1086), 1,
      sym__newline,
    STATE(329), 1,
      aux_sym_unique_constraint_repeat1,
    STATE(426), 2,
      sym_key_value_attribute,
      sym__unique_constraint_attribute,
  [13186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      sym__varid,
    ACTIONS(1045), 2,
      sym__newline,
      anon_sym_References,
    STATE(332), 3,
      sym__field_name,
      sym_variable,
      aux_sym_natural_key_repeat1,
  [13202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13214] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      sym__varid,
    ACTIONS(1093), 1,
      anon_sym_References,
    ACTIONS(1095), 1,
      sym__newline,
    STATE(332), 3,
      sym__field_name,
      sym_variable,
      aux_sym_natural_key_repeat1,
  [13232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 6,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [13268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      sym__varid,
    ACTIONS(1103), 1,
      sym__newline,
    STATE(332), 3,
      sym__field_name,
      sym_variable,
      aux_sym_natural_key_repeat1,
  [13283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1105), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(50), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1107), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13309] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(61), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1109), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13322] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__conid,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(464), 1,
      sym_constructor,
    STATE(466), 1,
      sym__modid,
    STATE(494), 1,
      sym_qualified_type,
  [13341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(674), 4,
      sym_cascade_action,
      sym__sql_constraint_name,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      sym__varid,
    ACTIONS(1111), 1,
      sym__newline,
    STATE(332), 3,
      sym__field_name,
      sym_variable,
      aux_sym_natural_key_repeat1,
  [13369] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym__colon2,
    STATE(473), 1,
      sym__type_annotation,
    ACTIONS(964), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [13386] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      sym_comma,
    ACTIONS(1120), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      aux_sym__context_constraints_repeat1,
    ACTIONS(1118), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [13403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(678), 4,
      sym_cascade_action,
      sym__sql_constraint_name,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(43), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1123), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13429] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 2,
      sym__newline,
      sym_exl_mark_attribute,
    ACTIONS(889), 2,
      aux_sym_key_value_attribute_token1,
      sym__varid,
  [13441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(674), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [13453] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym__conid,
    STATE(139), 1,
      sym_constructor,
    STATE(326), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
  [13469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 4,
      sym_cascade_action,
      sym__sql_constraint_name,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13479] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym__conid,
    STATE(87), 1,
      sym_constructor,
    STATE(326), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
  [13495] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 1,
      anon_sym_deriving,
    ACTIONS(1127), 1,
      sym__dedent,
    STATE(356), 2,
      sym_entity_derives,
      aux_sym_entity_body_repeat2,
  [13509] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      sym__colon2,
    STATE(322), 1,
      sym__type_annotation,
    ACTIONS(964), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [13523] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_deriving,
    ACTIONS(1132), 1,
      sym__dedent,
    STATE(356), 2,
      sym_entity_derives,
      aux_sym_entity_body_repeat2,
  [13537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      sym__dedent,
    ACTIONS(1125), 1,
      anon_sym_deriving,
    STATE(356), 2,
      sym_entity_derives,
      aux_sym_entity_body_repeat2,
  [13551] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym__conid,
    STATE(134), 1,
      sym_constructor,
    STATE(326), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
  [13567] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__conid,
    STATE(326), 1,
      aux_sym__qualifying_module,
    STATE(376), 1,
      sym_constructor,
    STATE(466), 1,
      sym__modid,
  [13583] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__conid,
    STATE(193), 1,
      sym_constructor,
    STATE(326), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
  [13599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      sym__varid,
    STATE(288), 3,
      sym__field_name,
      sym_variable,
      aux_sym_natural_key_repeat1,
  [13611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(678), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [13623] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 4,
      sym_cascade_action,
      sym__sql_constraint_name,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13633] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym__conid,
    STATE(96), 1,
      sym_constructor,
    STATE(326), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
  [13649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 4,
      sym_cascade_action,
      sym__sql_constraint_name,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(1138), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [13671] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      sym__varid,
    STATE(334), 3,
      sym__field_name,
      sym_variable,
      aux_sym_natural_key_repeat1,
  [13683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      sym__varid,
    STATE(338), 3,
      sym__field_name,
      sym_variable,
      aux_sym_natural_key_repeat1,
  [13695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 4,
      sym_cascade_action,
      sym__sql_constraint_name,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      sym__colon2,
    STATE(473), 1,
      sym__type_annotation,
    ACTIONS(964), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [13719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      sym__varid,
    STATE(344), 3,
      sym__field_name,
      sym_variable,
      aux_sym_natural_key_repeat1,
  [13731] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      sym__conid,
    STATE(326), 1,
      aux_sym__qualifying_module,
    STATE(383), 1,
      sym_constructor,
    STATE(466), 1,
      sym__modid,
  [13747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_EQ,
    ACTIONS(1140), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [13759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 4,
      sym__dedent,
      anon_sym_deriving,
      anon_sym_DOT,
      sym__conid,
  [13769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      sym_comma,
    STATE(375), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(1147), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [13783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(668), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [13795] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      sym__conid,
    STATE(235), 1,
      sym_constructor,
    STATE(326), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
  [13811] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__conid,
    STATE(236), 1,
      sym_constructor,
    STATE(326), 1,
      aux_sym__qualifying_module,
    STATE(466), 1,
      sym__modid,
  [13827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 4,
      sym_comma,
      anon_sym_,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
  [13837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 4,
      sym_cascade_action,
      sym__sql_constraint_name,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(1151), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [13859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1134), 1,
      sym__varid,
    STATE(281), 3,
      sym__field_name,
      sym_variable,
      aux_sym_natural_key_repeat1,
  [13871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(668), 3,
      sym__dedent,
      anon_sym_deriving,
      sym__conid,
  [13883] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__conid,
    STATE(326), 1,
      aux_sym__qualifying_module,
    STATE(328), 1,
      sym_constructor,
    STATE(466), 1,
      sym__modid,
  [13899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 4,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
      anon_sym_DOT,
  [13909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      sym__varid,
    STATE(321), 3,
      sym__field_name,
      sym_variable,
      aux_sym_natural_key_repeat1,
  [13921] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(39), 1,
      sym__colon2,
    STATE(322), 1,
      sym__type_annotation,
    ACTIONS(1153), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [13935] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      sym__conid,
    STATE(326), 1,
      aux_sym__qualifying_module,
    STATE(328), 1,
      sym_constructor,
    STATE(466), 1,
      sym__modid,
  [13951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(1155), 3,
      sym__dedent,
      anon_sym_deriving,
      sym__conid,
  [13963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      sym_comma,
    ACTIONS(1159), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      aux_sym__context_constraints_repeat1,
  [13976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1163), 1,
      anon_sym_RBRACK,
    STATE(455), 1,
      aux_sym_type_list_repeat1,
  [13989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      sym__varid,
    STATE(76), 2,
      sym__field_name,
      sym_variable,
  [14000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(268), 1,
      sym__carrow,
    ACTIONS(1167), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [14011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14029] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1171), 1,
      sym_cascade_action,
    ACTIONS(1173), 1,
      sym__sql_constraint_name,
    STATE(416), 1,
      aux_sym_foreign_constraint_repeat1,
  [14042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_cascade_action,
    ACTIONS(1178), 1,
      sym__sql_constraint_name,
    STATE(398), 1,
      aux_sym_foreign_constraint_repeat1,
  [14064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      sym_comma,
    ACTIONS(1183), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      aux_sym__context_constraints_repeat1,
  [14077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [14086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      sym_comma,
    ACTIONS(1185), 1,
      anon_sym_RPAREN,
    STATE(429), 1,
      aux_sym__context_constraints_repeat1,
  [14099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1187), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      aux_sym_type_list_repeat1,
  [14112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      sym_comma,
    ACTIONS(1191), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      aux_sym_con_tuple_repeat1,
  [14125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 3,
      sym_cascade_action,
      sym__sql_constraint_name,
      anon_sym_DOT,
  [14134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1193), 1,
      anon_sym_RBRACK,
    STATE(444), 1,
      aux_sym_type_list_repeat1,
  [14147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1195), 1,
      anon_sym_RBRACK,
    STATE(375), 1,
      aux_sym_type_list_repeat1,
  [14160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym__varid,
    STATE(370), 1,
      sym_type_variable,
    STATE(482), 1,
      sym_annotated_type_variable,
  [14182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1197), 1,
      anon_sym_RBRACK,
    STATE(406), 1,
      aux_sym_type_list_repeat1,
  [14195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      sym_comma,
    ACTIONS(1199), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      aux_sym_con_tuple_repeat1,
  [14208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym__varid,
    STATE(345), 1,
      sym_type_variable,
    STATE(480), 1,
      sym_annotated_type_variable,
  [14221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1201), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      aux_sym_type_list_repeat1,
  [14234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(269), 1,
      sym__arrow,
    ACTIONS(1203), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
  [14245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1205), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1207), 1,
      sym_cascade_action,
    ACTIONS(1209), 1,
      sym__sql_constraint_name,
    STATE(398), 1,
      aux_sym_foreign_constraint_repeat1,
  [14276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1211), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      aux_sym_type_list_repeat1,
  [14307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      sym_comma,
    ACTIONS(1213), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      aux_sym_con_tuple_repeat1,
  [14320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1215), 1,
      anon_sym_RBRACK,
    STATE(424), 1,
      aux_sym_type_list_repeat1,
  [14333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1217), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1219), 1,
      anon_sym_RBRACK,
    STATE(375), 1,
      aux_sym_type_list_repeat1,
  [14364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1221), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14391] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1223), 1,
      anon_sym_RBRACK,
    STATE(375), 1,
      aux_sym_type_list_repeat1,
  [14404] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      sym_comma,
    ACTIONS(1225), 1,
      anon_sym_RPAREN,
    STATE(399), 1,
      aux_sym__context_constraints_repeat1,
  [14417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14426] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1227), 1,
      anon_sym_RBRACK,
    STATE(428), 1,
      aux_sym_type_list_repeat1,
  [14439] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      sym_comma,
    ACTIONS(1229), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      aux_sym_con_tuple_repeat1,
  [14452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1231), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      aux_sym_type_list_repeat1,
  [14465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 1,
      sym__tyconsym,
    ACTIONS(1065), 2,
      sym__consym,
      sym__conid,
  [14476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1233), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [14485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1235), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      aux_sym_type_list_repeat1,
  [14507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      sym_comma,
    ACTIONS(1237), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      aux_sym_con_tuple_repeat1,
  [14520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1239), 1,
      anon_sym_RBRACK,
    STATE(442), 1,
      aux_sym_type_list_repeat1,
  [14533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [14542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
    STATE(375), 1,
      aux_sym_type_list_repeat1,
  [14555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1245), 1,
      anon_sym_RBRACK,
    STATE(375), 1,
      aux_sym_type_list_repeat1,
  [14568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1247), 1,
      sym_comma,
    ACTIONS(1250), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      aux_sym_con_tuple_repeat1,
  [14581] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1252), 1,
      anon_sym_RBRACK,
    STATE(375), 1,
      aux_sym_type_list_repeat1,
  [14594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1254), 1,
      anon_sym_RBRACK,
    STATE(375), 1,
      aux_sym_type_list_repeat1,
  [14616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1256), 1,
      anon_sym_RBRACK,
    STATE(446), 1,
      aux_sym_type_list_repeat1,
  [14647] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      sym_comma,
    ACTIONS(1258), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      aux_sym_con_tuple_repeat1,
  [14660] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      aux_sym_type_list_repeat1,
  [14673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      sym_comma,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      aux_sym_con_tuple_repeat1,
  [14686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1264), 3,
      sym__dedent,
      anon_sym_deriving,
      sym__conid,
  [14695] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1266), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      aux_sym_type_list_repeat1,
  [14708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1268), 1,
      anon_sym_RBRACK,
    STATE(375), 1,
      aux_sym_type_list_repeat1,
  [14721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1270), 1,
      anon_sym_RBRACK,
    STATE(375), 1,
      aux_sym_type_list_repeat1,
  [14761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1272), 1,
      anon_sym_RBRACK,
    STATE(459), 1,
      aux_sym_type_list_repeat1,
  [14774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 3,
      sym__newline,
      anon_sym_References,
      sym__varid,
  [14783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      sym_comma,
    ACTIONS(1274), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      aux_sym_con_tuple_repeat1,
  [14796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1276), 1,
      anon_sym_RPAREN,
    STATE(441), 1,
      aux_sym_type_list_repeat1,
  [14809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(1278), 1,
      anon_sym_BQUOTE,
  [14819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    STATE(441), 1,
      aux_sym_type_list_repeat1,
  [14829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1280), 1,
      anon_sym_DOT,
    STATE(434), 1,
      sym__dot,
  [14839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1282), 2,
      sym_comma,
      anon_sym_RPAREN,
  [14847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [14855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1284), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
  [14863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1286), 2,
      sym_comma,
      anon_sym_RPAREN,
  [14871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1183), 2,
      sym_comma,
      anon_sym_RPAREN,
  [14879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1288), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [14887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1290), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [14895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
  [14902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
  [14909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1296), 1,
      anon_sym_RPAREN,
  [14916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
  [14923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1300), 1,
      anon_sym_RPAREN,
  [14930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1302), 1,
      anon_sym_RPAREN,
  [14937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      anon_sym_RBRACE,
  [14944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
  [14951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      anon_sym_RPAREN,
  [14958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
  [14965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 1,
      anon_sym_RPAREN,
  [14972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      anon_sym_RPAREN,
  [14979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1314), 1,
      anon_sym_RPAREN,
  [14986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
  [14993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1318), 1,
      anon_sym_RPAREN,
  [15000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1320), 1,
      anon_sym_RPAREN,
  [15007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
  [15014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1324), 1,
      anon_sym_RPAREN,
  [15021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1326), 1,
      anon_sym_RPAREN,
  [15028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1328), 1,
      anon_sym_RPAREN,
  [15035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1330), 1,
      anon_sym_BQUOTE,
  [15042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1332), 1,
      anon_sym_RPAREN,
  [15049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 1,
      anon_sym_RPAREN,
  [15056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1336), 1,
      anon_sym_RPAREN,
  [15063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1142), 1,
      anon_sym_EQ,
  [15070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 1,
      anon_sym_RPAREN,
  [15077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1340), 1,
      anon_sym_RPAREN,
  [15084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1342), 1,
      anon_sym_RPAREN,
  [15091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
  [15098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1346), 1,
      anon_sym_RPAREN,
  [15105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1348), 1,
      anon_sym_RPAREN,
  [15112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1350), 1,
      anon_sym_RPAREN,
  [15119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_RPAREN,
  [15126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1354), 1,
      anon_sym_RPAREN,
  [15133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1356), 1,
      anon_sym_RPAREN,
  [15140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_RPAREN,
  [15147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1360), 1,
      ts_builtin_sym_end,
  [15154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1362), 1,
      sym__newline,
  [15161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1364), 1,
      anon_sym_RPAREN,
  [15168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
  [15175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1366), 1,
      anon_sym_RPAREN,
  [15182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      sym__dedent,
  [15189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1370), 1,
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
  [SMALL_STATE(37)] = 1173,
  [SMALL_STATE(38)] = 1287,
  [SMALL_STATE(39)] = 1399,
  [SMALL_STATE(40)] = 1511,
  [SMALL_STATE(41)] = 1603,
  [SMALL_STATE(42)] = 1695,
  [SMALL_STATE(43)] = 1787,
  [SMALL_STATE(44)] = 1894,
  [SMALL_STATE(45)] = 2003,
  [SMALL_STATE(46)] = 2094,
  [SMALL_STATE(47)] = 2185,
  [SMALL_STATE(48)] = 2292,
  [SMALL_STATE(49)] = 2383,
  [SMALL_STATE(50)] = 2490,
  [SMALL_STATE(51)] = 2597,
  [SMALL_STATE(52)] = 2690,
  [SMALL_STATE(53)] = 2797,
  [SMALL_STATE(54)] = 2904,
  [SMALL_STATE(55)] = 2994,
  [SMALL_STATE(56)] = 3084,
  [SMALL_STATE(57)] = 3178,
  [SMALL_STATE(58)] = 3268,
  [SMALL_STATE(59)] = 3360,
  [SMALL_STATE(60)] = 3449,
  [SMALL_STATE(61)] = 3554,
  [SMALL_STATE(62)] = 3659,
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
  [SMALL_STATE(90)] = 5673,
  [SMALL_STATE(91)] = 5718,
  [SMALL_STATE(92)] = 5758,
  [SMALL_STATE(93)] = 5794,
  [SMALL_STATE(94)] = 5830,
  [SMALL_STATE(95)] = 5866,
  [SMALL_STATE(96)] = 5902,
  [SMALL_STATE(97)] = 5940,
  [SMALL_STATE(98)] = 5976,
  [SMALL_STATE(99)] = 6012,
  [SMALL_STATE(100)] = 6048,
  [SMALL_STATE(101)] = 6084,
  [SMALL_STATE(102)] = 6120,
  [SMALL_STATE(103)] = 6156,
  [SMALL_STATE(104)] = 6192,
  [SMALL_STATE(105)] = 6230,
  [SMALL_STATE(106)] = 6266,
  [SMALL_STATE(107)] = 6302,
  [SMALL_STATE(108)] = 6338,
  [SMALL_STATE(109)] = 6374,
  [SMALL_STATE(110)] = 6410,
  [SMALL_STATE(111)] = 6446,
  [SMALL_STATE(112)] = 6484,
  [SMALL_STATE(113)] = 6520,
  [SMALL_STATE(114)] = 6556,
  [SMALL_STATE(115)] = 6591,
  [SMALL_STATE(116)] = 6626,
  [SMALL_STATE(117)] = 6663,
  [SMALL_STATE(118)] = 6698,
  [SMALL_STATE(119)] = 6733,
  [SMALL_STATE(120)] = 6768,
  [SMALL_STATE(121)] = 6803,
  [SMALL_STATE(122)] = 6838,
  [SMALL_STATE(123)] = 6873,
  [SMALL_STATE(124)] = 6908,
  [SMALL_STATE(125)] = 6943,
  [SMALL_STATE(126)] = 6978,
  [SMALL_STATE(127)] = 7013,
  [SMALL_STATE(128)] = 7048,
  [SMALL_STATE(129)] = 7083,
  [SMALL_STATE(130)] = 7118,
  [SMALL_STATE(131)] = 7155,
  [SMALL_STATE(132)] = 7208,
  [SMALL_STATE(133)] = 7243,
  [SMALL_STATE(134)] = 7278,
  [SMALL_STATE(135)] = 7315,
  [SMALL_STATE(136)] = 7350,
  [SMALL_STATE(137)] = 7389,
  [SMALL_STATE(138)] = 7424,
  [SMALL_STATE(139)] = 7458,
  [SMALL_STATE(140)] = 7494,
  [SMALL_STATE(141)] = 7528,
  [SMALL_STATE(142)] = 7562,
  [SMALL_STATE(143)] = 7596,
  [SMALL_STATE(144)] = 7630,
  [SMALL_STATE(145)] = 7664,
  [SMALL_STATE(146)] = 7698,
  [SMALL_STATE(147)] = 7732,
  [SMALL_STATE(148)] = 7766,
  [SMALL_STATE(149)] = 7802,
  [SMALL_STATE(150)] = 7836,
  [SMALL_STATE(151)] = 7870,
  [SMALL_STATE(152)] = 7904,
  [SMALL_STATE(153)] = 7938,
  [SMALL_STATE(154)] = 7990,
  [SMALL_STATE(155)] = 8026,
  [SMALL_STATE(156)] = 8060,
  [SMALL_STATE(157)] = 8094,
  [SMALL_STATE(158)] = 8128,
  [SMALL_STATE(159)] = 8162,
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
  [SMALL_STATE(172)] = 8611,
  [SMALL_STATE(173)] = 8644,
  [SMALL_STATE(174)] = 8677,
  [SMALL_STATE(175)] = 8710,
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
  [SMALL_STATE(187)] = 9231,
  [SMALL_STATE(188)] = 9282,
  [SMALL_STATE(189)] = 9313,
  [SMALL_STATE(190)] = 9364,
  [SMALL_STATE(191)] = 9397,
  [SMALL_STATE(192)] = 9430,
  [SMALL_STATE(193)] = 9481,
  [SMALL_STATE(194)] = 9514,
  [SMALL_STATE(195)] = 9565,
  [SMALL_STATE(196)] = 9616,
  [SMALL_STATE(197)] = 9667,
  [SMALL_STATE(198)] = 9697,
  [SMALL_STATE(199)] = 9727,
  [SMALL_STATE(200)] = 9757,
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
  [SMALL_STATE(215)] = 10251,
  [SMALL_STATE(216)] = 10281,
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
  [SMALL_STATE(229)] = 10694,
  [SMALL_STATE(230)] = 10722,
  [SMALL_STATE(231)] = 10750,
  [SMALL_STATE(232)] = 10778,
  [SMALL_STATE(233)] = 10806,
  [SMALL_STATE(234)] = 10835,
  [SMALL_STATE(235)] = 10864,
  [SMALL_STATE(236)] = 10893,
  [SMALL_STATE(237)] = 10922,
  [SMALL_STATE(238)] = 10951,
  [SMALL_STATE(239)] = 10980,
  [SMALL_STATE(240)] = 11007,
  [SMALL_STATE(241)] = 11033,
  [SMALL_STATE(242)] = 11059,
  [SMALL_STATE(243)] = 11085,
  [SMALL_STATE(244)] = 11111,
  [SMALL_STATE(245)] = 11159,
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
  [SMALL_STATE(261)] = 11575,
  [SMALL_STATE(262)] = 11601,
  [SMALL_STATE(263)] = 11649,
  [SMALL_STATE(264)] = 11675,
  [SMALL_STATE(265)] = 11701,
  [SMALL_STATE(266)] = 11746,
  [SMALL_STATE(267)] = 11785,
  [SMALL_STATE(268)] = 11830,
  [SMALL_STATE(269)] = 11854,
  [SMALL_STATE(270)] = 11878,
  [SMALL_STATE(271)] = 11901,
  [SMALL_STATE(272)] = 11924,
  [SMALL_STATE(273)] = 11947,
  [SMALL_STATE(274)] = 11969,
  [SMALL_STATE(275)] = 11991,
  [SMALL_STATE(276)] = 12013,
  [SMALL_STATE(277)] = 12047,
  [SMALL_STATE(278)] = 12069,
  [SMALL_STATE(279)] = 12104,
  [SMALL_STATE(280)] = 12139,
  [SMALL_STATE(281)] = 12164,
  [SMALL_STATE(282)] = 12194,
  [SMALL_STATE(283)] = 12223,
  [SMALL_STATE(284)] = 12240,
  [SMALL_STATE(285)] = 12269,
  [SMALL_STATE(286)] = 12294,
  [SMALL_STATE(287)] = 12313,
  [SMALL_STATE(288)] = 12337,
  [SMALL_STATE(289)] = 12365,
  [SMALL_STATE(290)] = 12389,
  [SMALL_STATE(291)] = 12413,
  [SMALL_STATE(292)] = 12432,
  [SMALL_STATE(293)] = 12458,
  [SMALL_STATE(294)] = 12480,
  [SMALL_STATE(295)] = 12502,
  [SMALL_STATE(296)] = 12518,
  [SMALL_STATE(297)] = 12544,
  [SMALL_STATE(298)] = 12566,
  [SMALL_STATE(299)] = 12588,
  [SMALL_STATE(300)] = 12610,
  [SMALL_STATE(301)] = 12623,
  [SMALL_STATE(302)] = 12636,
  [SMALL_STATE(303)] = 12657,
  [SMALL_STATE(304)] = 12678,
  [SMALL_STATE(305)] = 12699,
  [SMALL_STATE(306)] = 12718,
  [SMALL_STATE(307)] = 12743,
  [SMALL_STATE(308)] = 12762,
  [SMALL_STATE(309)] = 12781,
  [SMALL_STATE(310)] = 12800,
  [SMALL_STATE(311)] = 12821,
  [SMALL_STATE(312)] = 12834,
  [SMALL_STATE(313)] = 12859,
  [SMALL_STATE(314)] = 12880,
  [SMALL_STATE(315)] = 12899,
  [SMALL_STATE(316)] = 12914,
  [SMALL_STATE(317)] = 12927,
  [SMALL_STATE(318)] = 12946,
  [SMALL_STATE(319)] = 12965,
  [SMALL_STATE(320)] = 12978,
  [SMALL_STATE(321)] = 12990,
  [SMALL_STATE(322)] = 13008,
  [SMALL_STATE(323)] = 13020,
  [SMALL_STATE(324)] = 13032,
  [SMALL_STATE(325)] = 13054,
  [SMALL_STATE(326)] = 13076,
  [SMALL_STATE(327)] = 13098,
  [SMALL_STATE(328)] = 13120,
  [SMALL_STATE(329)] = 13134,
  [SMALL_STATE(330)] = 13154,
  [SMALL_STATE(331)] = 13166,
  [SMALL_STATE(332)] = 13186,
  [SMALL_STATE(333)] = 13202,
  [SMALL_STATE(334)] = 13214,
  [SMALL_STATE(335)] = 13232,
  [SMALL_STATE(336)] = 13244,
  [SMALL_STATE(337)] = 13256,
  [SMALL_STATE(338)] = 13268,
  [SMALL_STATE(339)] = 13283,
  [SMALL_STATE(340)] = 13296,
  [SMALL_STATE(341)] = 13309,
  [SMALL_STATE(342)] = 13322,
  [SMALL_STATE(343)] = 13341,
  [SMALL_STATE(344)] = 13354,
  [SMALL_STATE(345)] = 13369,
  [SMALL_STATE(346)] = 13386,
  [SMALL_STATE(347)] = 13403,
  [SMALL_STATE(348)] = 13416,
  [SMALL_STATE(349)] = 13429,
  [SMALL_STATE(350)] = 13441,
  [SMALL_STATE(351)] = 13453,
  [SMALL_STATE(352)] = 13469,
  [SMALL_STATE(353)] = 13479,
  [SMALL_STATE(354)] = 13495,
  [SMALL_STATE(355)] = 13509,
  [SMALL_STATE(356)] = 13523,
  [SMALL_STATE(357)] = 13537,
  [SMALL_STATE(358)] = 13551,
  [SMALL_STATE(359)] = 13567,
  [SMALL_STATE(360)] = 13583,
  [SMALL_STATE(361)] = 13599,
  [SMALL_STATE(362)] = 13611,
  [SMALL_STATE(363)] = 13623,
  [SMALL_STATE(364)] = 13633,
  [SMALL_STATE(365)] = 13649,
  [SMALL_STATE(366)] = 13659,
  [SMALL_STATE(367)] = 13671,
  [SMALL_STATE(368)] = 13683,
  [SMALL_STATE(369)] = 13695,
  [SMALL_STATE(370)] = 13705,
  [SMALL_STATE(371)] = 13719,
  [SMALL_STATE(372)] = 13731,
  [SMALL_STATE(373)] = 13747,
  [SMALL_STATE(374)] = 13759,
  [SMALL_STATE(375)] = 13769,
  [SMALL_STATE(376)] = 13783,
  [SMALL_STATE(377)] = 13795,
  [SMALL_STATE(378)] = 13811,
  [SMALL_STATE(379)] = 13827,
  [SMALL_STATE(380)] = 13837,
  [SMALL_STATE(381)] = 13847,
  [SMALL_STATE(382)] = 13859,
  [SMALL_STATE(383)] = 13871,
  [SMALL_STATE(384)] = 13883,
  [SMALL_STATE(385)] = 13899,
  [SMALL_STATE(386)] = 13909,
  [SMALL_STATE(387)] = 13921,
  [SMALL_STATE(388)] = 13935,
  [SMALL_STATE(389)] = 13951,
  [SMALL_STATE(390)] = 13963,
  [SMALL_STATE(391)] = 13976,
  [SMALL_STATE(392)] = 13989,
  [SMALL_STATE(393)] = 14000,
  [SMALL_STATE(394)] = 14011,
  [SMALL_STATE(395)] = 14020,
  [SMALL_STATE(396)] = 14029,
  [SMALL_STATE(397)] = 14042,
  [SMALL_STATE(398)] = 14051,
  [SMALL_STATE(399)] = 14064,
  [SMALL_STATE(400)] = 14077,
  [SMALL_STATE(401)] = 14086,
  [SMALL_STATE(402)] = 14099,
  [SMALL_STATE(403)] = 14112,
  [SMALL_STATE(404)] = 14125,
  [SMALL_STATE(405)] = 14134,
  [SMALL_STATE(406)] = 14147,
  [SMALL_STATE(407)] = 14160,
  [SMALL_STATE(408)] = 14169,
  [SMALL_STATE(409)] = 14182,
  [SMALL_STATE(410)] = 14195,
  [SMALL_STATE(411)] = 14208,
  [SMALL_STATE(412)] = 14221,
  [SMALL_STATE(413)] = 14234,
  [SMALL_STATE(414)] = 14245,
  [SMALL_STATE(415)] = 14254,
  [SMALL_STATE(416)] = 14263,
  [SMALL_STATE(417)] = 14276,
  [SMALL_STATE(418)] = 14285,
  [SMALL_STATE(419)] = 14294,
  [SMALL_STATE(420)] = 14307,
  [SMALL_STATE(421)] = 14320,
  [SMALL_STATE(422)] = 14333,
  [SMALL_STATE(423)] = 14342,
  [SMALL_STATE(424)] = 14351,
  [SMALL_STATE(425)] = 14364,
  [SMALL_STATE(426)] = 14373,
  [SMALL_STATE(427)] = 14382,
  [SMALL_STATE(428)] = 14391,
  [SMALL_STATE(429)] = 14404,
  [SMALL_STATE(430)] = 14417,
  [SMALL_STATE(431)] = 14426,
  [SMALL_STATE(432)] = 14439,
  [SMALL_STATE(433)] = 14452,
  [SMALL_STATE(434)] = 14465,
  [SMALL_STATE(435)] = 14476,
  [SMALL_STATE(436)] = 14485,
  [SMALL_STATE(437)] = 14494,
  [SMALL_STATE(438)] = 14507,
  [SMALL_STATE(439)] = 14520,
  [SMALL_STATE(440)] = 14533,
  [SMALL_STATE(441)] = 14542,
  [SMALL_STATE(442)] = 14555,
  [SMALL_STATE(443)] = 14568,
  [SMALL_STATE(444)] = 14581,
  [SMALL_STATE(445)] = 14594,
  [SMALL_STATE(446)] = 14603,
  [SMALL_STATE(447)] = 14616,
  [SMALL_STATE(448)] = 14625,
  [SMALL_STATE(449)] = 14634,
  [SMALL_STATE(450)] = 14647,
  [SMALL_STATE(451)] = 14660,
  [SMALL_STATE(452)] = 14673,
  [SMALL_STATE(453)] = 14686,
  [SMALL_STATE(454)] = 14695,
  [SMALL_STATE(455)] = 14708,
  [SMALL_STATE(456)] = 14721,
  [SMALL_STATE(457)] = 14730,
  [SMALL_STATE(458)] = 14739,
  [SMALL_STATE(459)] = 14748,
  [SMALL_STATE(460)] = 14761,
  [SMALL_STATE(461)] = 14774,
  [SMALL_STATE(462)] = 14783,
  [SMALL_STATE(463)] = 14796,
  [SMALL_STATE(464)] = 14809,
  [SMALL_STATE(465)] = 14819,
  [SMALL_STATE(466)] = 14829,
  [SMALL_STATE(467)] = 14839,
  [SMALL_STATE(468)] = 14847,
  [SMALL_STATE(469)] = 14855,
  [SMALL_STATE(470)] = 14863,
  [SMALL_STATE(471)] = 14871,
  [SMALL_STATE(472)] = 14879,
  [SMALL_STATE(473)] = 14887,
  [SMALL_STATE(474)] = 14895,
  [SMALL_STATE(475)] = 14902,
  [SMALL_STATE(476)] = 14909,
  [SMALL_STATE(477)] = 14916,
  [SMALL_STATE(478)] = 14923,
  [SMALL_STATE(479)] = 14930,
  [SMALL_STATE(480)] = 14937,
  [SMALL_STATE(481)] = 14944,
  [SMALL_STATE(482)] = 14951,
  [SMALL_STATE(483)] = 14958,
  [SMALL_STATE(484)] = 14965,
  [SMALL_STATE(485)] = 14972,
  [SMALL_STATE(486)] = 14979,
  [SMALL_STATE(487)] = 14986,
  [SMALL_STATE(488)] = 14993,
  [SMALL_STATE(489)] = 15000,
  [SMALL_STATE(490)] = 15007,
  [SMALL_STATE(491)] = 15014,
  [SMALL_STATE(492)] = 15021,
  [SMALL_STATE(493)] = 15028,
  [SMALL_STATE(494)] = 15035,
  [SMALL_STATE(495)] = 15042,
  [SMALL_STATE(496)] = 15049,
  [SMALL_STATE(497)] = 15056,
  [SMALL_STATE(498)] = 15063,
  [SMALL_STATE(499)] = 15070,
  [SMALL_STATE(500)] = 15077,
  [SMALL_STATE(501)] = 15084,
  [SMALL_STATE(502)] = 15091,
  [SMALL_STATE(503)] = 15098,
  [SMALL_STATE(504)] = 15105,
  [SMALL_STATE(505)] = 15112,
  [SMALL_STATE(506)] = 15119,
  [SMALL_STATE(507)] = 15126,
  [SMALL_STATE(508)] = 15133,
  [SMALL_STATE(509)] = 15140,
  [SMALL_STATE(510)] = 15147,
  [SMALL_STATE(511)] = 15154,
  [SMALL_STATE(512)] = 15161,
  [SMALL_STATE(513)] = 15168,
  [SMALL_STATE(514)] = 15175,
  [SMALL_STATE(515)] = 15182,
  [SMALL_STATE(516)] = 15189,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quotation, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(505),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(97),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(92),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(102),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(102),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(10),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(86),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(31),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(189),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(95),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(79),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__btype, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__btype, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(86),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(189),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_apply, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_apply, 2),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(86),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(189),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(114),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(121),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(124),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(124),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(6),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(108),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(33),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(183),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(123),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(82),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(108),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(183),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(108),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(183),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(202),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atype, 1),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atype, 1),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(222),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__atype, 1), SHIFT(225),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(225),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 8),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 1, .production_id = 8),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(12),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(208),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(34),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__atype, 1), SHIFT(184),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(223),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(119),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(195),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(119),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(195),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), REDUCE(sym_constraint, 1, .production_id = 8),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(147),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(146),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(152),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(152),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(13),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(119),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(27),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(195),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(151),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(83),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(138),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(194),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(138),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(194),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(169),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(173),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(178),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(178),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(11),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(138),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(29),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(194),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(174),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(80),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(204),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(198),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(210),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(210),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(7),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(188),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(32),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(192),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(209),
  [498] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(84),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(188),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(192),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(188),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(192),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(239),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(182),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(239),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(182),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(247),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(240),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(248),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(248),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(9),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(239),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(30),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(182),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(250),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(85),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 2, .production_id = 8),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(202),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(222),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(225),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(225),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(12),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(208),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(34),
  [620] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(184),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(223),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor, 1),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type, 2, .production_id = 4),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__modid, 1, .production_id = 2),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type, 2, .production_id = 4),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tycon, 2, .production_id = 4),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tycon, 2, .production_id = 4),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_name, 1), SHIFT(38),
  [689] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_name, 1), SHIFT(38),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con_unit, 2),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con_unit, 2),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 2),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__context_constraints, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_literal, 1),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_literal, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tycon_arrow, 3),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tycon_arrow, 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_star, 1),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_star, 1),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variable, 1),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variable, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_invisible, 2),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_invisible, 2),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tycon, 4),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tycon, 4),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 4),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_list, 4),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 3),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_list, 3),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_promoted_literal, 2),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_promoted_literal, 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_tuple, 3),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_tuple, 3),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con_list, 2),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con_list, 2),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parens, 3),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parens, 3),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tycon, 2),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tycon, 2),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con_tuple, 3),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con_tuple, 3),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_infix, 1),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_infix, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 1),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [820] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(274),
  [823] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(77),
  [826] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(382),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(392),
  [832] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(279),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [837] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(208),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modid, 1, .production_id = 2),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quotation, 1),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(397),
  [851] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(278),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(265),
  [857] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(385),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(327),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__context, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context, 2),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fun_arrow, 2),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fun_arrow, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_constructor_operator, 2),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_constructor_operator, 2),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_operator, 1),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_operator, 1),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type_operator, 2),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type_operator, 2),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ticked_qtycon, 3, .production_id = 4),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ticked_qtycon, 3, .production_id = 4),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ticked_qtycon, 3),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ticked_qtycon, 3),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tyconop, 2),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tyconop, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_key, 2),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_infix, 3, .production_id = 21),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [929] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2), SHIFT_REPEAT(202),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2),
  [934] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2), SHIFT_REPEAT(408),
  [937] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2), SHIFT_REPEAT(411),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 2),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forall, 2),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [954] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_infix, 1), REDUCE(sym_constraint, 1),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_derives_repeat1, 2, .production_id = 18),
  [959] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_derives_repeat1, 2, .production_id = 18), SHIFT_REPEAT(374),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_with_kind, 1),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_surrogate_key, 3, .production_id = 15),
  [970] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__entity_line_definition, 2),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_line_definition, 2),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_derives, 2, .production_id = 13),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_key, 3, .production_id = 16),
  [980] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_surrogate_key_repeat1, 2), SHIFT_REPEAT(373),
  [983] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_surrogate_key_repeat1, 2), SHIFT_REPEAT(415),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_surrogate_key_repeat1, 2),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_surrogate_key, 2, .production_id = 9),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 3, .production_id = 5),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 4, .production_id = 6),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2, .production_id = 14),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 4, .production_id = 22),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3, .production_id = 19),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [1008] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2), SHIFT_REPEAT(373),
  [1011] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2), SHIFT_REPEAT(307),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1020] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(373),
  [1023] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(423),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 3, .production_id = 6),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3, .production_id = 17),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 1, .production_id = 1),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1040] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_natural_key_repeat1, 2), SHIFT_REPEAT(349),
  [1043] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_natural_key_repeat1, 2),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_natural_key_repeat1, 2),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 2, .production_id = 5),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inferred_type_variable, 3),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 5),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_param, 2, .production_id = 7),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantifier, 3),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__qualifying_module, 2),
  [1067] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__qualifying_module, 2),
  [1069] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__qualifying_module, 2), SHIFT_REPEAT(208),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1074] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unique_constraint_repeat1, 2), SHIFT_REPEAT(498),
  [1077] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unique_constraint_repeat1, 2), SHIFT_REPEAT(426),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unique_constraint_repeat1, 2),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_quantifiers, 3),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 3, .production_id = 16),
  [1088] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_natural_key_repeat1, 2), SHIFT_REPEAT(461),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_context, 2),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 4),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_annotation, 2, .production_id = 9),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_fun, 3),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 4, .production_id = 1),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 7),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 6),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_or_implicit, 1), SHIFT(44),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_or_implicit, 1),
  [1120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_or_implicit, 1), SHIFT(468),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 2),
  [1129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat2, 2), SHIFT_REPEAT(324),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat2, 2),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint, 1),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 1),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_attribute, 1),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2), SHIFT_REPEAT(35),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint, 3),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 3),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_derives_repeat1, 1, .production_id = 11),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_attribute, 3, .production_id = 10),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_foreign_constraint_repeat1, 2), SHIFT_REPEAT(398),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_foreign_constraint_repeat1, 2),
  [1180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__context_constraints_repeat1, 2), SHIFT_REPEAT(44),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context_constraints_repeat1, 2),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_surrogate_key_repeat1, 1),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 1),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unique_constraint_repeat1, 1),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kind, 1, .production_id = 20),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_with_kind, 2),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_tuple, 2),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_con_tuple_repeat1, 2), SHIFT_REPEAT(443),
  [1250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_con_tuple_repeat1, 2),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_derives_repeat1, 1, .production_id = 12),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_context, 2),
  [1284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantified_constraint, 3),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 4),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotated_type_variable, 2, .production_id = 7),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1360] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
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
