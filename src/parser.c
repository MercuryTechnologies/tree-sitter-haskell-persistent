#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 520
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 178
#define ALIAS_COUNT 7
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 26

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
  sym_sql_constraint_name = 12,
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
  sym__list_of_fields = 84,
  sym__entity_attribute = 85,
  sym__field_attribute = 86,
  sym_key_value_attribute = 87,
  sym__key_value_attribute_value = 88,
  sym__key_value_atribute_value_literal = 89,
  sym__key_value_atribute_value_other_token = 90,
  sym_other_attribute = 91,
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
  alias_sym_name = 182,
  alias_sym_references = 183,
  alias_sym_type = 184,
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
  [alias_sym_name] = "name",
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
  [aux_sym_key_value_attribute_token1] = aux_sym_key_value_attribute_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym__key_value_atribute_value_other_token_token1] = sym_string,
  [sym_exl_mark_attribute] = sym_exl_mark_attribute,
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
  [alias_sym_name] = alias_sym_name,
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
  [alias_sym_name] = {
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
  [12] = {.index = 4, .length = 1},
  [13] = {.index = 4, .length = 1},
  [14] = {.index = 6, .length = 1},
  [15] = {.index = 7, .length = 2},
  [16] = {.index = 5, .length = 1},
  [17] = {.index = 9, .length = 2},
  [18] = {.index = 11, .length = 2},
  [19] = {.index = 7, .length = 2},
  [21] = {.index = 13, .length = 1},
  [22] = {.index = 14, .length = 3},
  [23] = {.index = 9, .length = 2},
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
    [0] = alias_sym_fields,
  },
  [12] = {
    [0] = alias_sym_type,
  },
  [16] = {
    [2] = alias_sym_attributes,
  },
  [19] = {
    [2] = alias_sym_attributes,
  },
  [20] = {
    [2] = alias_sym_attributes,
  },
  [23] = {
    [3] = alias_sym_attributes,
  },
  [24] = {
    [5] = alias_sym_references,
  },
  [25] = {
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
  [44] = 42,
  [45] = 40,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 46,
  [50] = 48,
  [51] = 47,
  [52] = 52,
  [53] = 41,
  [54] = 40,
  [55] = 41,
  [56] = 42,
  [57] = 52,
  [58] = 52,
  [59] = 40,
  [60] = 60,
  [61] = 61,
  [62] = 42,
  [63] = 41,
  [64] = 41,
  [65] = 40,
  [66] = 42,
  [67] = 52,
  [68] = 40,
  [69] = 41,
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
  [81] = 79,
  [82] = 79,
  [83] = 79,
  [84] = 84,
  [85] = 79,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 88,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 89,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 86,
  [110] = 87,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 102,
  [115] = 111,
  [116] = 95,
  [117] = 91,
  [118] = 88,
  [119] = 100,
  [120] = 96,
  [121] = 113,
  [122] = 86,
  [123] = 89,
  [124] = 124,
  [125] = 106,
  [126] = 108,
  [127] = 103,
  [128] = 87,
  [129] = 107,
  [130] = 94,
  [131] = 98,
  [132] = 97,
  [133] = 101,
  [134] = 112,
  [135] = 92,
  [136] = 104,
  [137] = 105,
  [138] = 101,
  [139] = 113,
  [140] = 95,
  [141] = 106,
  [142] = 112,
  [143] = 103,
  [144] = 91,
  [145] = 89,
  [146] = 124,
  [147] = 87,
  [148] = 108,
  [149] = 107,
  [150] = 104,
  [151] = 92,
  [152] = 102,
  [153] = 100,
  [154] = 94,
  [155] = 88,
  [156] = 97,
  [157] = 96,
  [158] = 86,
  [159] = 105,
  [160] = 98,
  [161] = 100,
  [162] = 113,
  [163] = 97,
  [164] = 95,
  [165] = 124,
  [166] = 106,
  [167] = 104,
  [168] = 107,
  [169] = 96,
  [170] = 103,
  [171] = 112,
  [172] = 108,
  [173] = 101,
  [174] = 91,
  [175] = 105,
  [176] = 102,
  [177] = 94,
  [178] = 98,
  [179] = 92,
  [180] = 124,
  [181] = 181,
  [182] = 181,
  [183] = 181,
  [184] = 181,
  [185] = 181,
  [186] = 181,
  [187] = 181,
  [188] = 181,
  [189] = 88,
  [190] = 181,
  [191] = 181,
  [192] = 86,
  [193] = 181,
  [194] = 89,
  [195] = 181,
  [196] = 87,
  [197] = 86,
  [198] = 96,
  [199] = 98,
  [200] = 94,
  [201] = 100,
  [202] = 106,
  [203] = 104,
  [204] = 97,
  [205] = 205,
  [206] = 113,
  [207] = 92,
  [208] = 91,
  [209] = 105,
  [210] = 101,
  [211] = 95,
  [212] = 95,
  [213] = 103,
  [214] = 108,
  [215] = 102,
  [216] = 216,
  [217] = 107,
  [218] = 112,
  [219] = 124,
  [220] = 111,
  [221] = 107,
  [222] = 222,
  [223] = 98,
  [224] = 106,
  [225] = 104,
  [226] = 103,
  [227] = 112,
  [228] = 92,
  [229] = 102,
  [230] = 101,
  [231] = 105,
  [232] = 108,
  [233] = 88,
  [234] = 87,
  [235] = 89,
  [236] = 86,
  [237] = 88,
  [238] = 87,
  [239] = 89,
  [240] = 105,
  [241] = 97,
  [242] = 91,
  [243] = 243,
  [244] = 100,
  [245] = 97,
  [246] = 91,
  [247] = 95,
  [248] = 94,
  [249] = 106,
  [250] = 250,
  [251] = 96,
  [252] = 103,
  [253] = 100,
  [254] = 113,
  [255] = 112,
  [256] = 94,
  [257] = 113,
  [258] = 98,
  [259] = 101,
  [260] = 102,
  [261] = 92,
  [262] = 104,
  [263] = 107,
  [264] = 108,
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
  [284] = 283,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 281,
  [289] = 285,
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
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 95,
  [318] = 307,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 88,
  [327] = 327,
  [328] = 323,
  [329] = 329,
  [330] = 309,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 89,
  [339] = 87,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 344,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 352,
  [354] = 354,
  [355] = 352,
  [356] = 352,
  [357] = 91,
  [358] = 358,
  [359] = 275,
  [360] = 360,
  [361] = 361,
  [362] = 100,
  [363] = 97,
  [364] = 364,
  [365] = 94,
  [366] = 366,
  [367] = 86,
  [368] = 368,
  [369] = 369,
  [370] = 113,
  [371] = 352,
  [372] = 352,
  [373] = 352,
  [374] = 352,
  [375] = 88,
  [376] = 89,
  [377] = 352,
  [378] = 87,
  [379] = 379,
  [380] = 352,
  [381] = 381,
  [382] = 382,
  [383] = 86,
  [384] = 352,
  [385] = 88,
  [386] = 358,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 95,
  [391] = 91,
  [392] = 275,
  [393] = 379,
  [394] = 106,
  [395] = 103,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 112,
  [400] = 108,
  [401] = 401,
  [402] = 387,
  [403] = 403,
  [404] = 388,
  [405] = 405,
  [406] = 406,
  [407] = 86,
  [408] = 408,
  [409] = 107,
  [410] = 410,
  [411] = 105,
  [412] = 104,
  [413] = 413,
  [414] = 388,
  [415] = 403,
  [416] = 387,
  [417] = 417,
  [418] = 418,
  [419] = 92,
  [420] = 420,
  [421] = 102,
  [422] = 387,
  [423] = 403,
  [424] = 388,
  [425] = 100,
  [426] = 97,
  [427] = 410,
  [428] = 428,
  [429] = 101,
  [430] = 430,
  [431] = 410,
  [432] = 432,
  [433] = 433,
  [434] = 113,
  [435] = 388,
  [436] = 403,
  [437] = 437,
  [438] = 438,
  [439] = 387,
  [440] = 387,
  [441] = 403,
  [442] = 388,
  [443] = 443,
  [444] = 410,
  [445] = 410,
  [446] = 98,
  [447] = 410,
  [448] = 448,
  [449] = 388,
  [450] = 403,
  [451] = 94,
  [452] = 387,
  [453] = 453,
  [454] = 410,
  [455] = 403,
  [456] = 388,
  [457] = 410,
  [458] = 458,
  [459] = 459,
  [460] = 387,
  [461] = 403,
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
  [477] = 476,
  [478] = 478,
  [479] = 474,
  [480] = 476,
  [481] = 481,
  [482] = 481,
  [483] = 483,
  [484] = 474,
  [485] = 478,
  [486] = 476,
  [487] = 476,
  [488] = 478,
  [489] = 474,
  [490] = 490,
  [491] = 481,
  [492] = 478,
  [493] = 481,
  [494] = 474,
  [495] = 478,
  [496] = 476,
  [497] = 497,
  [498] = 476,
  [499] = 478,
  [500] = 474,
  [501] = 478,
  [502] = 481,
  [503] = 481,
  [504] = 504,
  [505] = 505,
  [506] = 474,
  [507] = 507,
  [508] = 474,
  [509] = 478,
  [510] = 476,
  [511] = 478,
  [512] = 474,
  [513] = 513,
  [514] = 476,
  [515] = 481,
  [516] = 481,
  [517] = 517,
  [518] = 518,
  [519] = 519,
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
      if (eof) ADVANCE(116);
      if (sym_comment_character_set_1(lookahead)) SKIP(114)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == '\'') ADVANCE(265);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == '*') ADVANCE(270);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '0') ADVANCE(212);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(129);
      if (lookahead == '?') ADVANCE(113);
      if (lookahead == '@') ADVANCE(272);
      if (lookahead == 'F') ADVANCE(56);
      if (lookahead == 'I') ADVANCE(26);
      if (lookahead == 'O') ADVANCE(52);
      if (lookahead == 'P') ADVANCE(58);
      if (lookahead == 'R') ADVANCE(29);
      if (lookahead == '[') ADVANCE(262);
      if (lookahead == ']') ADVANCE(263);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == '{') ADVANCE(266);
      if (lookahead == '|') ADVANCE(269);
      if (lookahead == '}') ADVANCE(267);
      if (lookahead == 8592) ADVANCE(234);
      if (lookahead == 8594) ADVANCE(231);
      if (lookahead == 8658) ADVANCE(228);
      if (lookahead == 8704) ADVANCE(268);
      if (lookahead == 8759) ADVANCE(236);
      if (lookahead == 9733) ADVANCE(271);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(143);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (sym__varid_character_set_1(lookahead)) ADVANCE(241);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '"') ADVANCE(207);
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
      if (lookahead == '"') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(203);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(121);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '>') ADVANCE(232);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(235);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(238);
      if (sym__consym_character_set_1(lookahead)) ADVANCE(187);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(237);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(229);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(19);
      if (lookahead == 'R') ADVANCE(39);
      if (lookahead == 'S') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(30);
      if (lookahead == 'U') ADVANCE(57);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(36);
      if (lookahead == 'N') ADVANCE(70);
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
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(122);
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
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(62);
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
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(67);
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
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(183);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 72:
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 73:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(197);
      END_STATE();
    case 74:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 75:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(218);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(221);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(196);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(197);
      END_STATE();
    case 79:
      if (sym_comment_character_set_1(lookahead)) SKIP(79)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(265);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == '*') ADVANCE(270);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '0') ADVANCE(212);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead == '?') ADVANCE(194);
      if (lookahead == '[') ADVANCE(262);
      if (lookahead == ']') ADVANCE(263);
      if (lookahead == 8594) ADVANCE(231);
      if (lookahead == 8704) ADVANCE(268);
      if (lookahead == 9733) ADVANCE(271);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(193);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(241);
      END_STATE();
    case 80:
      if (sym_comment_character_set_1(lookahead)) SKIP(80)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(265);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == '*') ADVANCE(270);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '0') ADVANCE(212);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead == '?') ADVANCE(194);
      if (lookahead == '[') ADVANCE(262);
      if (lookahead == 8704) ADVANCE(268);
      if (lookahead == 9733) ADVANCE(271);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(193);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(241);
      END_STATE();
    case 81:
      if (sym_comment_character_set_1(lookahead)) SKIP(81)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(265);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == '*') ADVANCE(270);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '0') ADVANCE(212);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == '@') ADVANCE(273);
      if (lookahead == '[') ADVANCE(262);
      if (lookahead == ']') ADVANCE(263);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == 8594) ADVANCE(231);
      if (lookahead == 8658) ADVANCE(228);
      if (lookahead == 8759) ADVANCE(236);
      if (lookahead == 9733) ADVANCE(271);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(193);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(241);
      END_STATE();
    case 82:
      if (sym_comment_character_set_1(lookahead)) SKIP(82)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(265);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == '*') ADVANCE(270);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '0') ADVANCE(212);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == '@') ADVANCE(273);
      if (lookahead == '[') ADVANCE(262);
      if (lookahead == ']') ADVANCE(263);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == '}') ADVANCE(267);
      if (lookahead == 8594) ADVANCE(231);
      if (lookahead == 8658) ADVANCE(228);
      if (lookahead == 9733) ADVANCE(271);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(193);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(241);
      END_STATE();
    case 83:
      if (sym_comment_character_set_1(lookahead)) SKIP(83)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(265);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == '*') ADVANCE(270);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '0') ADVANCE(212);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == '@') ADVANCE(273);
      if (lookahead == '[') ADVANCE(262);
      if (lookahead == ']') ADVANCE(263);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == 8594) ADVANCE(231);
      if (lookahead == 8759) ADVANCE(236);
      if (lookahead == 9733) ADVANCE(271);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(193);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(241);
      END_STATE();
    case 84:
      if (sym_comment_character_set_1(lookahead)) SKIP(84)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(265);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == '*') ADVANCE(270);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '0') ADVANCE(212);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead == '@') ADVANCE(273);
      if (lookahead == '[') ADVANCE(262);
      if (lookahead == ']') ADVANCE(263);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == '}') ADVANCE(267);
      if (lookahead == 8594) ADVANCE(231);
      if (lookahead == 9733) ADVANCE(271);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(193);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(241);
      END_STATE();
    case 85:
      if (sym_comment_character_set_1(lookahead)) SKIP(85)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(265);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == '*') ADVANCE(270);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '0') ADVANCE(212);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == '@') ADVANCE(273);
      if (lookahead == '[') ADVANCE(262);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == 8658) ADVANCE(228);
      if (lookahead == 9733) ADVANCE(271);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(193);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(241);
      END_STATE();
    case 86:
      if (sym_comment_character_set_1(lookahead)) SKIP(86)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(265);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == '*') ADVANCE(270);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '0') ADVANCE(212);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead == '@') ADVANCE(273);
      if (lookahead == '[') ADVANCE(262);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == 9733) ADVANCE(271);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '+' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(193);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(241);
      END_STATE();
    case 87:
      if (sym_comment_character_set_1(lookahead)) SKIP(87)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(265);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == '*') ADVANCE(270);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '0') ADVANCE(212);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '[') ADVANCE(262);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == '{') ADVANCE(266);
      if (lookahead == 8594) ADVANCE(231);
      if (lookahead == 8658) ADVANCE(228);
      if (lookahead == 9733) ADVANCE(271);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(241);
      END_STATE();
    case 88:
      if (sym_comment_character_set_1(lookahead)) SKIP(88)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(265);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == '*') ADVANCE(270);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '0') ADVANCE(212);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == '@') ADVANCE(273);
      if (lookahead == '[') ADVANCE(262);
      if (lookahead == ']') ADVANCE(263);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == 8594) ADVANCE(231);
      if (lookahead == 8658) ADVANCE(228);
      if (lookahead == 8759) ADVANCE(236);
      if (lookahead == 9733) ADVANCE(271);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(193);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(241);
      END_STATE();
    case 89:
      if (sym_comment_character_set_1(lookahead)) SKIP(89)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(265);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == '*') ADVANCE(270);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '0') ADVANCE(212);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == '@') ADVANCE(273);
      if (lookahead == '[') ADVANCE(262);
      if (lookahead == ']') ADVANCE(263);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == '}') ADVANCE(267);
      if (lookahead == 8594) ADVANCE(231);
      if (lookahead == 8658) ADVANCE(228);
      if (lookahead == 9733) ADVANCE(271);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(193);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(241);
      END_STATE();
    case 90:
      if (sym_comment_character_set_1(lookahead)) SKIP(90)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(265);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == '*') ADVANCE(270);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '0') ADVANCE(212);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == '@') ADVANCE(273);
      if (lookahead == '[') ADVANCE(262);
      if (lookahead == ']') ADVANCE(263);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == 8594) ADVANCE(231);
      if (lookahead == 8759) ADVANCE(236);
      if (lookahead == 9733) ADVANCE(271);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(193);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(241);
      END_STATE();
    case 91:
      if (sym_comment_character_set_1(lookahead)) SKIP(91)
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(264);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == ']') ADVANCE(263);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == 8594) ADVANCE(231);
      if (lookahead == 8658) ADVANCE(228);
      if (lookahead == 8759) ADVANCE(236);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(193);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      END_STATE();
    case 92:
      if (sym_comment_character_set_1(lookahead)) SKIP(92)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(265);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == '*') ADVANCE(270);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '0') ADVANCE(212);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead == '@') ADVANCE(273);
      if (lookahead == '[') ADVANCE(262);
      if (lookahead == ']') ADVANCE(263);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == '}') ADVANCE(267);
      if (lookahead == 8594) ADVANCE(231);
      if (lookahead == 9733) ADVANCE(271);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(193);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(241);
      END_STATE();
    case 93:
      if (sym_comment_character_set_1(lookahead)) SKIP(93)
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(264);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == ']') ADVANCE(263);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == '}') ADVANCE(267);
      if (lookahead == 8594) ADVANCE(231);
      if (lookahead == 8658) ADVANCE(228);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(193);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      END_STATE();
    case 94:
      if (sym_comment_character_set_1(lookahead)) SKIP(94)
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(264);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == ']') ADVANCE(263);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == 8594) ADVANCE(231);
      if (lookahead == 8759) ADVANCE(236);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(193);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      END_STATE();
    case 95:
      if (sym_comment_character_set_1(lookahead)) SKIP(95)
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '%') ADVANCE(275);
      if (lookahead == '\'') ADVANCE(264);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead == ']') ADVANCE(263);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == '}') ADVANCE(267);
      if (lookahead == 8594) ADVANCE(231);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(193);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      END_STATE();
    case 96:
      if (sym_comment_character_set_1(lookahead)) SKIP(96)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(265);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == '*') ADVANCE(270);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '0') ADVANCE(212);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == '@') ADVANCE(273);
      if (lookahead == '[') ADVANCE(262);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == 8658) ADVANCE(228);
      if (lookahead == 9733) ADVANCE(271);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(193);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(241);
      END_STATE();
    case 97:
      if (sym_comment_character_set_1(lookahead)) SKIP(97)
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == 'F') ADVANCE(255);
      if (lookahead == 'I') ADVANCE(248);
      if (lookahead == 'P') ADVANCE(256);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(143);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(241);
      END_STATE();
    case 98:
      if (sym_comment_character_set_1(lookahead)) SKIP(98)
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(264);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead == '=') ADVANCE(191);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == 8658) ADVANCE(228);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(193);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      END_STATE();
    case 99:
      if (sym_comment_character_set_1(lookahead)) SKIP(99)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(265);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == '*') ADVANCE(270);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '0') ADVANCE(212);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead == '@') ADVANCE(273);
      if (lookahead == '[') ADVANCE(262);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == 9733) ADVANCE(271);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(193);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(241);
      END_STATE();
    case 100:
      if (sym_comment_character_set_1(lookahead)) SKIP(100)
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(264);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead == '`') ADVANCE(245);
      if (sym__tyconsym_character_set_1(lookahead)) ADVANCE(193);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      END_STATE();
    case 101:
      if (sym_comment_character_set_1(lookahead)) SKIP(101)
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead == 8594) ADVANCE(231);
      if (sym__tyconsym_character_set_1(lookahead)) ADVANCE(193);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(241);
      END_STATE();
    case 102:
      if (sym_comment_character_set_1(lookahead)) SKIP(102)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '0') ADVANCE(213);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 103:
      if (sym_comment_character_set_1(lookahead)) SKIP(103)
      if (lookahead == '!') ADVANCE(110);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '=') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 104:
      if (sym_comment_character_set_1(lookahead)) SKIP(104)
      if (lookahead == '!') ADVANCE(110);
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      if (sym__varid_character_set_4(lookahead)) ADVANCE(241);
      END_STATE();
    case 105:
      if (sym_comment_character_set_1(lookahead)) SKIP(105)
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(55);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == '}') ADVANCE(267);
      if (lookahead == 8594) ADVANCE(231);
      if (lookahead == 8759) ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 106:
      if (sym_comment_character_set_1(lookahead)) SKIP(106)
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'R') ADVANCE(29);
      if (sym__varid_character_set_5(lookahead)) ADVANCE(241);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 112:
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 113:
      if (sym__varid_character_set_5(lookahead)) ADVANCE(246);
      END_STATE();
    case 114:
      if (eof) ADVANCE(116);
      if (sym_comment_character_set_1(lookahead)) SKIP(114)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(120);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == '\'') ADVANCE(265);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == '*') ADVANCE(270);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(242);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '0') ADVANCE(212);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(129);
      if (lookahead == '?') ADVANCE(113);
      if (lookahead == '@') ADVANCE(272);
      if (lookahead == 'F') ADVANCE(56);
      if (lookahead == 'I') ADVANCE(26);
      if (lookahead == 'O') ADVANCE(52);
      if (lookahead == 'P') ADVANCE(58);
      if (lookahead == 'R') ADVANCE(29);
      if (lookahead == '[') ADVANCE(262);
      if (lookahead == ']') ADVANCE(263);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == '{') ADVANCE(266);
      if (lookahead == '|') ADVANCE(269);
      if (lookahead == '}') ADVANCE(267);
      if (lookahead == 8592) ADVANCE(234);
      if (lookahead == 8594) ADVANCE(231);
      if (lookahead == 8658) ADVANCE(228);
      if (lookahead == 8704) ADVANCE(268);
      if (lookahead == 8759) ADVANCE(236);
      if (lookahead == 9733) ADVANCE(271);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(143);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (sym__varid_character_set_1(lookahead)) ADVANCE(241);
      END_STATE();
    case 115:
      if (eof) ADVANCE(116);
      if (sym_comment_character_set_1(lookahead)) SKIP(115)
      if (lookahead == '#') ADVANCE(121);
      if (lookahead == '%') ADVANCE(274);
      if (lookahead == '\'') ADVANCE(264);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == ')') ADVANCE(244);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(184);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == ']') ADVANCE(263);
      if (lookahead == '`') ADVANCE(245);
      if (lookahead == '{') ADVANCE(266);
      if (lookahead == '}') ADVANCE(267);
      if (lookahead == 8594) ADVANCE(231);
      if (lookahead == 8658) ADVANCE(228);
      if (lookahead == 8759) ADVANCE(236);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(261);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(241);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_is_sum_marker);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_comment);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_comment);
      if (sym__varid_character_set_5(lookahead)) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_Id);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_Primary);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_Primary);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_key_value_attribute_token1);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '\'') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_key_value_attribute_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(229);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(130);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '#') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(131);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(132);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '#') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(133);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '#') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(131);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(132);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(133);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('G' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__key_value_atribute_value_other_token_token1);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_exl_mark_attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__field_strictness_prefix);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_cascade_action);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_cascade_action);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'C') ADVANCE(150);
      if (lookahead == 'R') ADVANCE(163);
      if (lookahead == 'S') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'D') ADVANCE(157);
      if (lookahead == 'U') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'D') ADVANCE(160);
      if (lookahead == 'N') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'a') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'a') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'a') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'a') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'c') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'c') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'd') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'd') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'f') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'i') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'l') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'l') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'l') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'l') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'p') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'r') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 's') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 's') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 't') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 't') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 't') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 't') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'u') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'u') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_Foreign);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_Foreign);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_References);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(193);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__consym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '>') ADVANCE(233);
      if (sym__tyconsym_character_set_2(lookahead)) ADVANCE(193);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == '-') ADVANCE(118);
      if (sym__tyconsym_character_set_2(lookahead)) ADVANCE(193);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == ':') ADVANCE(238);
      if (sym__consym_character_set_1(lookahead)) ADVANCE(187);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == '>') ADVANCE(230);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__tyconsym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(187);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__tyconsym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__tyconsym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(193);
      if (sym__varid_character_set_5(lookahead)) ADVANCE(246);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(195);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(204);
      if (lookahead == '\'') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(199);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(200);
      if (lookahead == '\'') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(201);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '\'') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(210);
      if (lookahead == '#') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(210);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(210);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(205);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(209);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__integer_literal);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(76);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(214);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(138);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(130);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(130);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(211);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__binary_literal);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__binary_literal);
      if (lookahead == '#') ADVANCE(219);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__binary_literal);
      if (lookahead == '#') ADVANCE(217);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__octal_literal);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '#') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '#') ADVANCE(220);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__hex_literal);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(227);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(223);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(193);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(193);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(187);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__immediate_dot);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__varid);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '>') ADVANCE(232);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_implicit_parid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__conid);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead == 'g') ADVANCE(254);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead == 'm') ADVANCE(260);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(261);
      if (lookahead == 'y') ADVANCE(125);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(6);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_AT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(193);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(193);
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
  [1] = {.lex_state = 115},
  [2] = {.lex_state = 79},
  [3] = {.lex_state = 79},
  [4] = {.lex_state = 79},
  [5] = {.lex_state = 79},
  [6] = {.lex_state = 79},
  [7] = {.lex_state = 79},
  [8] = {.lex_state = 79},
  [9] = {.lex_state = 79},
  [10] = {.lex_state = 79},
  [11] = {.lex_state = 79},
  [12] = {.lex_state = 79},
  [13] = {.lex_state = 79},
  [14] = {.lex_state = 79},
  [15] = {.lex_state = 80},
  [16] = {.lex_state = 80},
  [17] = {.lex_state = 80},
  [18] = {.lex_state = 80},
  [19] = {.lex_state = 80},
  [20] = {.lex_state = 80},
  [21] = {.lex_state = 80},
  [22] = {.lex_state = 80},
  [23] = {.lex_state = 80},
  [24] = {.lex_state = 80},
  [25] = {.lex_state = 80},
  [26] = {.lex_state = 80},
  [27] = {.lex_state = 79},
  [28] = {.lex_state = 79},
  [29] = {.lex_state = 79},
  [30] = {.lex_state = 79},
  [31] = {.lex_state = 79},
  [32] = {.lex_state = 79},
  [33] = {.lex_state = 79},
  [34] = {.lex_state = 79},
  [35] = {.lex_state = 79},
  [36] = {.lex_state = 79},
  [37] = {.lex_state = 79},
  [38] = {.lex_state = 79},
  [39] = {.lex_state = 79},
  [40] = {.lex_state = 81},
  [41] = {.lex_state = 81},
  [42] = {.lex_state = 81},
  [43] = {.lex_state = 79},
  [44] = {.lex_state = 82},
  [45] = {.lex_state = 82},
  [46] = {.lex_state = 79},
  [47] = {.lex_state = 79},
  [48] = {.lex_state = 79},
  [49] = {.lex_state = 79},
  [50] = {.lex_state = 79},
  [51] = {.lex_state = 79},
  [52] = {.lex_state = 81},
  [53] = {.lex_state = 82},
  [54] = {.lex_state = 83},
  [55] = {.lex_state = 83},
  [56] = {.lex_state = 83},
  [57] = {.lex_state = 82},
  [58] = {.lex_state = 81},
  [59] = {.lex_state = 84},
  [60] = {.lex_state = 79},
  [61] = {.lex_state = 79},
  [62] = {.lex_state = 84},
  [63] = {.lex_state = 84},
  [64] = {.lex_state = 85},
  [65] = {.lex_state = 85},
  [66] = {.lex_state = 85},
  [67] = {.lex_state = 85},
  [68] = {.lex_state = 86},
  [69] = {.lex_state = 86},
  [70] = {.lex_state = 86},
  [71] = {.lex_state = 87},
  [72] = {.lex_state = 87},
  [73] = {.lex_state = 79},
  [74] = {.lex_state = 79},
  [75] = {.lex_state = 79},
  [76] = {.lex_state = 79},
  [77] = {.lex_state = 79},
  [78] = {.lex_state = 79},
  [79] = {.lex_state = 79},
  [80] = {.lex_state = 79},
  [81] = {.lex_state = 79},
  [82] = {.lex_state = 79},
  [83] = {.lex_state = 79},
  [84] = {.lex_state = 79},
  [85] = {.lex_state = 79},
  [86] = {.lex_state = 88},
  [87] = {.lex_state = 88},
  [88] = {.lex_state = 88},
  [89] = {.lex_state = 88},
  [90] = {.lex_state = 81},
  [91] = {.lex_state = 81},
  [92] = {.lex_state = 81},
  [93] = {.lex_state = 89},
  [94] = {.lex_state = 81},
  [95] = {.lex_state = 81},
  [96] = {.lex_state = 81},
  [97] = {.lex_state = 81},
  [98] = {.lex_state = 81},
  [99] = {.lex_state = 89},
  [100] = {.lex_state = 81},
  [101] = {.lex_state = 81},
  [102] = {.lex_state = 81},
  [103] = {.lex_state = 81},
  [104] = {.lex_state = 81},
  [105] = {.lex_state = 81},
  [106] = {.lex_state = 81},
  [107] = {.lex_state = 81},
  [108] = {.lex_state = 81},
  [109] = {.lex_state = 89},
  [110] = {.lex_state = 89},
  [111] = {.lex_state = 81},
  [112] = {.lex_state = 81},
  [113] = {.lex_state = 81},
  [114] = {.lex_state = 82},
  [115] = {.lex_state = 82},
  [116] = {.lex_state = 82},
  [117] = {.lex_state = 82},
  [118] = {.lex_state = 90},
  [119] = {.lex_state = 82},
  [120] = {.lex_state = 82},
  [121] = {.lex_state = 82},
  [122] = {.lex_state = 90},
  [123] = {.lex_state = 90},
  [124] = {.lex_state = 91},
  [125] = {.lex_state = 82},
  [126] = {.lex_state = 82},
  [127] = {.lex_state = 82},
  [128] = {.lex_state = 90},
  [129] = {.lex_state = 82},
  [130] = {.lex_state = 82},
  [131] = {.lex_state = 82},
  [132] = {.lex_state = 82},
  [133] = {.lex_state = 82},
  [134] = {.lex_state = 82},
  [135] = {.lex_state = 82},
  [136] = {.lex_state = 82},
  [137] = {.lex_state = 82},
  [138] = {.lex_state = 83},
  [139] = {.lex_state = 83},
  [140] = {.lex_state = 83},
  [141] = {.lex_state = 83},
  [142] = {.lex_state = 83},
  [143] = {.lex_state = 83},
  [144] = {.lex_state = 83},
  [145] = {.lex_state = 92},
  [146] = {.lex_state = 93},
  [147] = {.lex_state = 92},
  [148] = {.lex_state = 83},
  [149] = {.lex_state = 83},
  [150] = {.lex_state = 83},
  [151] = {.lex_state = 83},
  [152] = {.lex_state = 83},
  [153] = {.lex_state = 83},
  [154] = {.lex_state = 83},
  [155] = {.lex_state = 92},
  [156] = {.lex_state = 83},
  [157] = {.lex_state = 83},
  [158] = {.lex_state = 92},
  [159] = {.lex_state = 83},
  [160] = {.lex_state = 83},
  [161] = {.lex_state = 84},
  [162] = {.lex_state = 84},
  [163] = {.lex_state = 84},
  [164] = {.lex_state = 84},
  [165] = {.lex_state = 94},
  [166] = {.lex_state = 84},
  [167] = {.lex_state = 84},
  [168] = {.lex_state = 84},
  [169] = {.lex_state = 84},
  [170] = {.lex_state = 84},
  [171] = {.lex_state = 84},
  [172] = {.lex_state = 84},
  [173] = {.lex_state = 84},
  [174] = {.lex_state = 84},
  [175] = {.lex_state = 84},
  [176] = {.lex_state = 84},
  [177] = {.lex_state = 84},
  [178] = {.lex_state = 84},
  [179] = {.lex_state = 84},
  [180] = {.lex_state = 95},
  [181] = {.lex_state = 79},
  [182] = {.lex_state = 79},
  [183] = {.lex_state = 79},
  [184] = {.lex_state = 79},
  [185] = {.lex_state = 79},
  [186] = {.lex_state = 79},
  [187] = {.lex_state = 79},
  [188] = {.lex_state = 79},
  [189] = {.lex_state = 96},
  [190] = {.lex_state = 79},
  [191] = {.lex_state = 79},
  [192] = {.lex_state = 96},
  [193] = {.lex_state = 79},
  [194] = {.lex_state = 96},
  [195] = {.lex_state = 79},
  [196] = {.lex_state = 96},
  [197] = {.lex_state = 87},
  [198] = {.lex_state = 85},
  [199] = {.lex_state = 85},
  [200] = {.lex_state = 85},
  [201] = {.lex_state = 85},
  [202] = {.lex_state = 85},
  [203] = {.lex_state = 85},
  [204] = {.lex_state = 85},
  [205] = {.lex_state = 97},
  [206] = {.lex_state = 85},
  [207] = {.lex_state = 85},
  [208] = {.lex_state = 85},
  [209] = {.lex_state = 85},
  [210] = {.lex_state = 85},
  [211] = {.lex_state = 87},
  [212] = {.lex_state = 85},
  [213] = {.lex_state = 85},
  [214] = {.lex_state = 85},
  [215] = {.lex_state = 85},
  [216] = {.lex_state = 97, .external_lex_state = 2},
  [217] = {.lex_state = 85},
  [218] = {.lex_state = 85},
  [219] = {.lex_state = 98},
  [220] = {.lex_state = 85},
  [221] = {.lex_state = 87},
  [222] = {.lex_state = 97, .external_lex_state = 2},
  [223] = {.lex_state = 87},
  [224] = {.lex_state = 87},
  [225] = {.lex_state = 87},
  [226] = {.lex_state = 87},
  [227] = {.lex_state = 87},
  [228] = {.lex_state = 87},
  [229] = {.lex_state = 87},
  [230] = {.lex_state = 87},
  [231] = {.lex_state = 87},
  [232] = {.lex_state = 87},
  [233] = {.lex_state = 99},
  [234] = {.lex_state = 99},
  [235] = {.lex_state = 99},
  [236] = {.lex_state = 99},
  [237] = {.lex_state = 87},
  [238] = {.lex_state = 87},
  [239] = {.lex_state = 87},
  [240] = {.lex_state = 86},
  [241] = {.lex_state = 87},
  [242] = {.lex_state = 86},
  [243] = {.lex_state = 115},
  [244] = {.lex_state = 86},
  [245] = {.lex_state = 86},
  [246] = {.lex_state = 87},
  [247] = {.lex_state = 86},
  [248] = {.lex_state = 86},
  [249] = {.lex_state = 86},
  [250] = {.lex_state = 115},
  [251] = {.lex_state = 86},
  [252] = {.lex_state = 86},
  [253] = {.lex_state = 87},
  [254] = {.lex_state = 86},
  [255] = {.lex_state = 86},
  [256] = {.lex_state = 87},
  [257] = {.lex_state = 87},
  [258] = {.lex_state = 86},
  [259] = {.lex_state = 86},
  [260] = {.lex_state = 86},
  [261] = {.lex_state = 86},
  [262] = {.lex_state = 86},
  [263] = {.lex_state = 86},
  [264] = {.lex_state = 86},
  [265] = {.lex_state = 100},
  [266] = {.lex_state = 101},
  [267] = {.lex_state = 101},
  [268] = {.lex_state = 79},
  [269] = {.lex_state = 79},
  [270] = {.lex_state = 79},
  [271] = {.lex_state = 79},
  [272] = {.lex_state = 79},
  [273] = {.lex_state = 79},
  [274] = {.lex_state = 79},
  [275] = {.lex_state = 79},
  [276] = {.lex_state = 79},
  [277] = {.lex_state = 100},
  [278] = {.lex_state = 115},
  [279] = {.lex_state = 102},
  [280] = {.lex_state = 115},
  [281] = {.lex_state = 115},
  [282] = {.lex_state = 115},
  [283] = {.lex_state = 100},
  [284] = {.lex_state = 100},
  [285] = {.lex_state = 115},
  [286] = {.lex_state = 115},
  [287] = {.lex_state = 115},
  [288] = {.lex_state = 115},
  [289] = {.lex_state = 115},
  [290] = {.lex_state = 103, .external_lex_state = 3},
  [291] = {.lex_state = 103, .external_lex_state = 3},
  [292] = {.lex_state = 103, .external_lex_state = 3},
  [293] = {.lex_state = 115, .external_lex_state = 2},
  [294] = {.lex_state = 115, .external_lex_state = 2},
  [295] = {.lex_state = 115},
  [296] = {.lex_state = 97, .external_lex_state = 2},
  [297] = {.lex_state = 103, .external_lex_state = 3},
  [298] = {.lex_state = 100},
  [299] = {.lex_state = 103, .external_lex_state = 3},
  [300] = {.lex_state = 115, .external_lex_state = 4},
  [301] = {.lex_state = 115, .external_lex_state = 4},
  [302] = {.lex_state = 103, .external_lex_state = 3},
  [303] = {.lex_state = 103, .external_lex_state = 3},
  [304] = {.lex_state = 100},
  [305] = {.lex_state = 115, .external_lex_state = 4},
  [306] = {.lex_state = 103, .external_lex_state = 3},
  [307] = {.lex_state = 104, .external_lex_state = 3},
  [308] = {.lex_state = 103, .external_lex_state = 3},
  [309] = {.lex_state = 104, .external_lex_state = 3},
  [310] = {.lex_state = 115},
  [311] = {.lex_state = 103, .external_lex_state = 3},
  [312] = {.lex_state = 115, .external_lex_state = 4},
  [313] = {.lex_state = 103, .external_lex_state = 3},
  [314] = {.lex_state = 103, .external_lex_state = 3},
  [315] = {.lex_state = 115, .external_lex_state = 4},
  [316] = {.lex_state = 103, .external_lex_state = 3},
  [317] = {.lex_state = 105},
  [318] = {.lex_state = 106, .external_lex_state = 3},
  [319] = {.lex_state = 115},
  [320] = {.lex_state = 103, .external_lex_state = 3},
  [321] = {.lex_state = 103, .external_lex_state = 3},
  [322] = {.lex_state = 115},
  [323] = {.lex_state = 115},
  [324] = {.lex_state = 100},
  [325] = {.lex_state = 103, .external_lex_state = 3},
  [326] = {.lex_state = 105},
  [327] = {.lex_state = 115},
  [328] = {.lex_state = 115},
  [329] = {.lex_state = 115},
  [330] = {.lex_state = 106, .external_lex_state = 3},
  [331] = {.lex_state = 115},
  [332] = {.lex_state = 115},
  [333] = {.lex_state = 115},
  [334] = {.lex_state = 115},
  [335] = {.lex_state = 115},
  [336] = {.lex_state = 115},
  [337] = {.lex_state = 115},
  [338] = {.lex_state = 105},
  [339] = {.lex_state = 105},
  [340] = {.lex_state = 115},
  [341] = {.lex_state = 115},
  [342] = {.lex_state = 115},
  [343] = {.lex_state = 115},
  [344] = {.lex_state = 115},
  [345] = {.lex_state = 115},
  [346] = {.lex_state = 115},
  [347] = {.lex_state = 115},
  [348] = {.lex_state = 115},
  [349] = {.lex_state = 115},
  [350] = {.lex_state = 115},
  [351] = {.lex_state = 115, .external_lex_state = 2},
  [352] = {.lex_state = 115},
  [353] = {.lex_state = 115},
  [354] = {.lex_state = 115, .external_lex_state = 2},
  [355] = {.lex_state = 115},
  [356] = {.lex_state = 115},
  [357] = {.lex_state = 105},
  [358] = {.lex_state = 115},
  [359] = {.lex_state = 104, .external_lex_state = 3},
  [360] = {.lex_state = 115},
  [361] = {.lex_state = 115, .external_lex_state = 2},
  [362] = {.lex_state = 105},
  [363] = {.lex_state = 105},
  [364] = {.lex_state = 115},
  [365] = {.lex_state = 105},
  [366] = {.lex_state = 115},
  [367] = {.lex_state = 115, .external_lex_state = 2},
  [368] = {.lex_state = 115},
  [369] = {.lex_state = 115},
  [370] = {.lex_state = 105},
  [371] = {.lex_state = 115},
  [372] = {.lex_state = 115},
  [373] = {.lex_state = 115},
  [374] = {.lex_state = 115},
  [375] = {.lex_state = 115, .external_lex_state = 2},
  [376] = {.lex_state = 103, .external_lex_state = 3},
  [377] = {.lex_state = 115},
  [378] = {.lex_state = 103, .external_lex_state = 3},
  [379] = {.lex_state = 104, .external_lex_state = 3},
  [380] = {.lex_state = 115},
  [381] = {.lex_state = 103, .external_lex_state = 3},
  [382] = {.lex_state = 115, .external_lex_state = 2},
  [383] = {.lex_state = 103, .external_lex_state = 3},
  [384] = {.lex_state = 115},
  [385] = {.lex_state = 103, .external_lex_state = 3},
  [386] = {.lex_state = 115},
  [387] = {.lex_state = 115},
  [388] = {.lex_state = 115},
  [389] = {.lex_state = 115},
  [390] = {.lex_state = 103, .external_lex_state = 3},
  [391] = {.lex_state = 103, .external_lex_state = 3},
  [392] = {.lex_state = 106, .external_lex_state = 3},
  [393] = {.lex_state = 106, .external_lex_state = 3},
  [394] = {.lex_state = 103, .external_lex_state = 3},
  [395] = {.lex_state = 103, .external_lex_state = 3},
  [396] = {.lex_state = 115},
  [397] = {.lex_state = 105},
  [398] = {.lex_state = 115, .external_lex_state = 2},
  [399] = {.lex_state = 103, .external_lex_state = 3},
  [400] = {.lex_state = 103, .external_lex_state = 3},
  [401] = {.lex_state = 115},
  [402] = {.lex_state = 115},
  [403] = {.lex_state = 115},
  [404] = {.lex_state = 115},
  [405] = {.lex_state = 115},
  [406] = {.lex_state = 115},
  [407] = {.lex_state = 105},
  [408] = {.lex_state = 115},
  [409] = {.lex_state = 103, .external_lex_state = 3},
  [410] = {.lex_state = 115},
  [411] = {.lex_state = 103, .external_lex_state = 3},
  [412] = {.lex_state = 103, .external_lex_state = 3},
  [413] = {.lex_state = 103, .external_lex_state = 3},
  [414] = {.lex_state = 115},
  [415] = {.lex_state = 115},
  [416] = {.lex_state = 115},
  [417] = {.lex_state = 105},
  [418] = {.lex_state = 103, .external_lex_state = 3},
  [419] = {.lex_state = 103, .external_lex_state = 3},
  [420] = {.lex_state = 103, .external_lex_state = 3},
  [421] = {.lex_state = 103, .external_lex_state = 3},
  [422] = {.lex_state = 115},
  [423] = {.lex_state = 115},
  [424] = {.lex_state = 115},
  [425] = {.lex_state = 103, .external_lex_state = 3},
  [426] = {.lex_state = 103, .external_lex_state = 3},
  [427] = {.lex_state = 115},
  [428] = {.lex_state = 115},
  [429] = {.lex_state = 103, .external_lex_state = 3},
  [430] = {.lex_state = 115},
  [431] = {.lex_state = 115},
  [432] = {.lex_state = 115},
  [433] = {.lex_state = 115},
  [434] = {.lex_state = 103, .external_lex_state = 3},
  [435] = {.lex_state = 115},
  [436] = {.lex_state = 115},
  [437] = {.lex_state = 115},
  [438] = {.lex_state = 100},
  [439] = {.lex_state = 115},
  [440] = {.lex_state = 115},
  [441] = {.lex_state = 115},
  [442] = {.lex_state = 115},
  [443] = {.lex_state = 115},
  [444] = {.lex_state = 115},
  [445] = {.lex_state = 115},
  [446] = {.lex_state = 103, .external_lex_state = 3},
  [447] = {.lex_state = 115},
  [448] = {.lex_state = 115},
  [449] = {.lex_state = 115},
  [450] = {.lex_state = 115},
  [451] = {.lex_state = 103, .external_lex_state = 3},
  [452] = {.lex_state = 115},
  [453] = {.lex_state = 115},
  [454] = {.lex_state = 115},
  [455] = {.lex_state = 115},
  [456] = {.lex_state = 115},
  [457] = {.lex_state = 115},
  [458] = {.lex_state = 103, .external_lex_state = 3},
  [459] = {.lex_state = 105},
  [460] = {.lex_state = 115},
  [461] = {.lex_state = 115},
  [462] = {.lex_state = 115},
  [463] = {.lex_state = 115},
  [464] = {.lex_state = 115},
  [465] = {.lex_state = 106, .external_lex_state = 3},
  [466] = {.lex_state = 115},
  [467] = {.lex_state = 106, .external_lex_state = 3},
  [468] = {.lex_state = 115},
  [469] = {.lex_state = 115},
  [470] = {.lex_state = 115},
  [471] = {.lex_state = 115},
  [472] = {.lex_state = 115},
  [473] = {.lex_state = 115},
  [474] = {.lex_state = 115},
  [475] = {.lex_state = 115},
  [476] = {.lex_state = 115},
  [477] = {.lex_state = 115},
  [478] = {.lex_state = 115},
  [479] = {.lex_state = 115},
  [480] = {.lex_state = 115},
  [481] = {.lex_state = 115},
  [482] = {.lex_state = 115},
  [483] = {.lex_state = 115},
  [484] = {.lex_state = 115},
  [485] = {.lex_state = 115},
  [486] = {.lex_state = 115},
  [487] = {.lex_state = 115},
  [488] = {.lex_state = 115},
  [489] = {.lex_state = 115},
  [490] = {.lex_state = 115},
  [491] = {.lex_state = 115},
  [492] = {.lex_state = 115},
  [493] = {.lex_state = 115},
  [494] = {.lex_state = 115},
  [495] = {.lex_state = 115},
  [496] = {.lex_state = 115},
  [497] = {.lex_state = 115, .external_lex_state = 3},
  [498] = {.lex_state = 115},
  [499] = {.lex_state = 115},
  [500] = {.lex_state = 115},
  [501] = {.lex_state = 115},
  [502] = {.lex_state = 115},
  [503] = {.lex_state = 115},
  [504] = {.lex_state = 97},
  [505] = {.lex_state = 115},
  [506] = {.lex_state = 115},
  [507] = {.lex_state = 115, .external_lex_state = 2},
  [508] = {.lex_state = 115},
  [509] = {.lex_state = 115},
  [510] = {.lex_state = 115},
  [511] = {.lex_state = 115},
  [512] = {.lex_state = 115},
  [513] = {.lex_state = 115},
  [514] = {.lex_state = 115},
  [515] = {.lex_state = 115},
  [516] = {.lex_state = 115},
  [517] = {.lex_state = 115, .external_lex_state = 3},
  [518] = {.lex_state = 115, .external_lex_state = 3},
  [519] = {.lex_state = 115, .external_lex_state = 3},
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
    [sym_quasi_quotation] = STATE(513),
    [sym_entity_definition] = STATE(243),
    [sym__entity_name] = STATE(308),
    [sym__entity_header] = STATE(305),
    [sym_constructor] = STATE(376),
    [sym_qualified_type] = STATE(434),
    [sym_tycon_arrow] = STATE(434),
    [sym__promoted_tycon] = STATE(434),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(373),
    [sym_type_variable] = STATE(434),
    [sym_type_name] = STATE(308),
    [aux_sym_quasi_quotation_repeat1] = STATE(243),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__varid] = ACTIONS(7),
    [sym_is_sum_marker] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym__conid] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
  },
  [2] = {
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym__arrow] = STATE(498),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(499),
    [sym_qualified_constructor_operator] = STATE(499),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(499),
    [sym_qualified_type_operator] = STATE(499),
    [sym__qualified_type_operator] = STATE(499),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(499),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(491),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(58),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(348),
    [sym_type_infix] = STATE(289),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(360),
    [sym__quantified_constraint] = STATE(428),
    [sym__constraint_context] = STATE(428),
    [sym__constraint] = STATE(428),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(36),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(439),
    [aux_sym_con_tuple_repeat1] = STATE(436),
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
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym__arrow] = STATE(486),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(485),
    [sym_qualified_constructor_operator] = STATE(485),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(485),
    [sym_qualified_type_operator] = STATE(485),
    [sym__qualified_type_operator] = STATE(485),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(485),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(493),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(58),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(348),
    [sym_type_infix] = STATE(289),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(360),
    [sym__quantified_constraint] = STATE(401),
    [sym__constraint_context] = STATE(401),
    [sym__constraint] = STATE(401),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(36),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(440),
    [aux_sym_con_tuple_repeat1] = STATE(441),
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
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym__arrow] = STATE(486),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(485),
    [sym_qualified_constructor_operator] = STATE(485),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(485),
    [sym_qualified_type_operator] = STATE(485),
    [sym__qualified_type_operator] = STATE(485),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(485),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(493),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(58),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(348),
    [sym_type_infix] = STATE(289),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(360),
    [sym__quantified_constraint] = STATE(428),
    [sym__constraint_context] = STATE(428),
    [sym__constraint] = STATE(428),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(36),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(440),
    [aux_sym_con_tuple_repeat1] = STATE(441),
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
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym__arrow] = STATE(514),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(509),
    [sym_qualified_constructor_operator] = STATE(509),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(509),
    [sym_qualified_type_operator] = STATE(509),
    [sym__qualified_type_operator] = STATE(509),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(509),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(515),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(58),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(348),
    [sym_type_infix] = STATE(289),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(360),
    [sym__quantified_constraint] = STATE(401),
    [sym__constraint_context] = STATE(401),
    [sym__constraint] = STATE(401),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(36),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(402),
    [aux_sym_con_tuple_repeat1] = STATE(403),
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
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym__arrow] = STATE(477),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(478),
    [sym_qualified_constructor_operator] = STATE(478),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(478),
    [sym_qualified_type_operator] = STATE(478),
    [sym__qualified_type_operator] = STATE(478),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(478),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(347),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(515),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(295),
    [sym_type_infix] = STATE(285),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(402),
    [aux_sym_con_tuple_repeat1] = STATE(403),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(63),
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
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym__arrow] = STATE(486),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(485),
    [sym_qualified_constructor_operator] = STATE(485),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(485),
    [sym_qualified_type_operator] = STATE(485),
    [sym__qualified_type_operator] = STATE(485),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(485),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(347),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(481),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(295),
    [sym_type_infix] = STATE(285),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(452),
    [aux_sym_con_tuple_repeat1] = STATE(450),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(83),
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
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym__arrow] = STATE(496),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(495),
    [sym_qualified_constructor_operator] = STATE(495),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(495),
    [sym_qualified_type_operator] = STATE(495),
    [sym__qualified_type_operator] = STATE(495),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(495),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(347),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(482),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(295),
    [sym_type_infix] = STATE(285),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(387),
    [aux_sym_con_tuple_repeat1] = STATE(455),
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
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym__arrow] = STATE(498),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(499),
    [sym_qualified_constructor_operator] = STATE(499),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(499),
    [sym_qualified_type_operator] = STATE(499),
    [sym__qualified_type_operator] = STATE(499),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(499),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(347),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(503),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(295),
    [sym_type_infix] = STATE(285),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(416),
    [aux_sym_con_tuple_repeat1] = STATE(415),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(97),
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
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym__arrow] = STATE(480),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(501),
    [sym_qualified_constructor_operator] = STATE(501),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(501),
    [sym_qualified_type_operator] = STATE(501),
    [sym__qualified_type_operator] = STATE(501),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(501),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(347),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(482),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(295),
    [sym_type_infix] = STATE(285),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(387),
    [aux_sym_con_tuple_repeat1] = STATE(455),
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
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym__arrow] = STATE(487),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(488),
    [sym_qualified_constructor_operator] = STATE(488),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(488),
    [sym_qualified_type_operator] = STATE(488),
    [sym__qualified_type_operator] = STATE(488),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(488),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(347),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(493),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(295),
    [sym_type_infix] = STATE(285),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(440),
    [aux_sym_con_tuple_repeat1] = STATE(441),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(53),
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
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym__arrow] = STATE(510),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(511),
    [sym_qualified_constructor_operator] = STATE(511),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(511),
    [sym_qualified_type_operator] = STATE(511),
    [sym__qualified_type_operator] = STATE(511),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(511),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(347),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(491),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(295),
    [sym_type_infix] = STATE(285),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(439),
    [aux_sym_con_tuple_repeat1] = STATE(436),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(19),
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
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym__arrow] = STATE(514),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(509),
    [sym_qualified_constructor_operator] = STATE(509),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(509),
    [sym_qualified_type_operator] = STATE(509),
    [sym__qualified_type_operator] = STATE(509),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(509),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(347),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(516),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(295),
    [sym_type_infix] = STATE(285),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(460),
    [aux_sym_con_tuple_repeat1] = STATE(461),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(123),
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
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym__arrow] = STATE(476),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(492),
    [sym_qualified_constructor_operator] = STATE(492),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(492),
    [sym_qualified_type_operator] = STATE(492),
    [sym__qualified_type_operator] = STATE(492),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(492),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(347),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(502),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(295),
    [sym_type_infix] = STATE(285),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(422),
    [aux_sym_con_tuple_repeat1] = STATE(423),
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
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(479),
    [sym_qualified_constructor_operator] = STATE(479),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(479),
    [sym_qualified_type_operator] = STATE(479),
    [sym__qualified_type_operator] = STATE(479),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(113),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(347),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(482),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(295),
    [sym_type_infix] = STATE(285),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(470),
    [aux_sym_con_tuple_repeat1] = STATE(455),
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
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(494),
    [sym_qualified_constructor_operator] = STATE(494),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(494),
    [sym_qualified_type_operator] = STATE(494),
    [sym__qualified_type_operator] = STATE(494),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(113),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(347),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(482),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(295),
    [sym_type_infix] = STATE(285),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(470),
    [aux_sym_con_tuple_repeat1] = STATE(455),
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
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(474),
    [sym_qualified_constructor_operator] = STATE(474),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(474),
    [sym_qualified_type_operator] = STATE(474),
    [sym__qualified_type_operator] = STATE(474),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(113),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(347),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(515),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(295),
    [sym_type_infix] = STATE(285),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(470),
    [aux_sym_con_tuple_repeat1] = STATE(403),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(63),
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
  [18] = {
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(512),
    [sym_qualified_constructor_operator] = STATE(512),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(512),
    [sym_qualified_type_operator] = STATE(512),
    [sym__qualified_type_operator] = STATE(512),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(113),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(347),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(491),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(295),
    [sym_type_infix] = STATE(285),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(470),
    [aux_sym_con_tuple_repeat1] = STATE(436),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(19),
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
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(500),
    [sym_qualified_constructor_operator] = STATE(500),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(500),
    [sym_qualified_type_operator] = STATE(500),
    [sym__qualified_type_operator] = STATE(500),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(113),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(347),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(491),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(295),
    [sym_type_infix] = STATE(285),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(470),
    [aux_sym_con_tuple_repeat1] = STATE(436),
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
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(489),
    [sym_qualified_constructor_operator] = STATE(489),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(489),
    [sym_qualified_type_operator] = STATE(489),
    [sym__qualified_type_operator] = STATE(489),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(113),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(347),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(493),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(295),
    [sym_type_infix] = STATE(285),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(470),
    [aux_sym_con_tuple_repeat1] = STATE(441),
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
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(484),
    [sym_qualified_constructor_operator] = STATE(484),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(484),
    [sym_qualified_type_operator] = STATE(484),
    [sym__qualified_type_operator] = STATE(484),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(113),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(347),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(493),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(295),
    [sym_type_infix] = STATE(285),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(470),
    [aux_sym_con_tuple_repeat1] = STATE(441),
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
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(508),
    [sym_qualified_constructor_operator] = STATE(508),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(508),
    [sym_qualified_type_operator] = STATE(508),
    [sym__qualified_type_operator] = STATE(508),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(113),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(347),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(516),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(295),
    [sym_type_infix] = STATE(285),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(470),
    [aux_sym_con_tuple_repeat1] = STATE(461),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(123),
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
  [23] = {
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(508),
    [sym_qualified_constructor_operator] = STATE(508),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(508),
    [sym_qualified_type_operator] = STATE(508),
    [sym__qualified_type_operator] = STATE(508),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(113),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(347),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(515),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(295),
    [sym_type_infix] = STATE(285),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(470),
    [aux_sym_con_tuple_repeat1] = STATE(403),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(63),
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
  [24] = {
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(500),
    [sym_qualified_constructor_operator] = STATE(500),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(500),
    [sym_qualified_type_operator] = STATE(500),
    [sym__qualified_type_operator] = STATE(500),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(113),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(347),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(503),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(295),
    [sym_type_infix] = STATE(285),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(470),
    [aux_sym_con_tuple_repeat1] = STATE(415),
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
  [25] = {
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(484),
    [sym_qualified_constructor_operator] = STATE(484),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(484),
    [sym_qualified_type_operator] = STATE(484),
    [sym__qualified_type_operator] = STATE(484),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(113),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(347),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(481),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(295),
    [sym_type_infix] = STATE(285),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(470),
    [aux_sym_con_tuple_repeat1] = STATE(450),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(83),
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
    [sym_integer] = STATE(142),
    [sym__literal] = STATE(142),
    [sym_constructor] = STATE(89),
    [sym_constructor_operator] = STATE(506),
    [sym_qualified_constructor_operator] = STATE(506),
    [sym_con_unit] = STATE(142),
    [sym_con_list] = STATE(142),
    [sym_con_tuple] = STATE(142),
    [sym_qualified_type] = STATE(113),
    [sym__type_operator] = STATE(506),
    [sym_qualified_type_operator] = STATE(506),
    [sym__qualified_type_operator] = STATE(506),
    [sym_tycon_arrow] = STATE(113),
    [sym_type_literal] = STATE(55),
    [sym__promoted_tycon] = STATE(113),
    [sym__modid] = STATE(471),
    [aux_sym__qualifying_module] = STATE(298),
    [sym_type_variable] = STATE(113),
    [sym__forall_kw] = STATE(310),
    [sym__forall] = STATE(347),
    [sym_type_parens] = STATE(55),
    [sym_type_list] = STATE(55),
    [sym__type_tuple] = STATE(502),
    [sym_type_tuple] = STATE(55),
    [sym__type_promotable_literal] = STATE(55),
    [sym__type_promoted_literal] = STATE(55),
    [sym__type_literal] = STATE(55),
    [sym_type_name] = STATE(52),
    [sym_type_star] = STATE(55),
    [sym__atype] = STATE(55),
    [sym_type_apply] = STATE(165),
    [sym__btype] = STATE(165),
    [sym_implicit_param] = STATE(295),
    [sym_type_infix] = STATE(285),
    [sym__type_infix] = STATE(281),
    [sym_constraint] = STATE(389),
    [sym__context_constraints] = STATE(389),
    [sym__context] = STATE(46),
    [sym__type_quantifiers] = STATE(295),
    [sym__type_context] = STATE(295),
    [sym__type_fun] = STATE(295),
    [sym__type] = STATE(295),
    [sym__type_or_implicit] = STATE(295),
    [sym__type_with_kind] = STATE(470),
    [aux_sym_con_tuple_repeat1] = STATE(423),
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
    STATE(52), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(285), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__forall_kw,
    STATE(347), 1,
      sym__forall,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(435), 1,
      sym__type_with_kind,
    STATE(471), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(165), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
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
    STATE(113), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(142), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(295), 6,
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
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      sym__context,
    STATE(52), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(285), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__forall_kw,
    STATE(347), 1,
      sym__forall,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(449), 1,
      sym__type_with_kind,
    STATE(471), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(165), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
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
    STATE(113), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(142), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(295), 6,
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
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      sym__context,
    STATE(52), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(285), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__forall_kw,
    STATE(347), 1,
      sym__forall,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(388), 1,
      sym__type_with_kind,
    STATE(471), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(165), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
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
    STATE(113), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(142), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(295), 6,
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
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      sym__context,
    STATE(52), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(285), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__forall_kw,
    STATE(347), 1,
      sym__forall,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(456), 1,
      sym__type_with_kind,
    STATE(471), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(165), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
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
    STATE(113), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(142), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(295), 6,
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
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      sym__context,
    STATE(52), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(285), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__forall_kw,
    STATE(347), 1,
      sym__forall,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(404), 1,
      sym__type_with_kind,
    STATE(471), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(165), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
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
    STATE(113), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(142), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(295), 6,
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
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      sym__context,
    STATE(52), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(285), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__forall_kw,
    STATE(347), 1,
      sym__forall,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(442), 1,
      sym__type_with_kind,
    STATE(471), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(165), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
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
    STATE(113), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(142), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(295), 6,
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
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      sym__context,
    STATE(52), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(285), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__forall_kw,
    STATE(347), 1,
      sym__forall,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(424), 1,
      sym__type_with_kind,
    STATE(471), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(165), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
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
    STATE(113), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(142), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(295), 6,
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
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      sym__context,
    STATE(52), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(285), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__forall_kw,
    STATE(347), 1,
      sym__forall,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(414), 1,
      sym__type_with_kind,
    STATE(471), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(165), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
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
    STATE(113), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(142), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(295), 6,
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
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym__context,
    STATE(52), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(285), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__forall_kw,
    STATE(347), 1,
      sym__forall,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(448), 1,
      sym__type_with_kind,
    STATE(471), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(165), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
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
    STATE(113), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(142), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(295), 6,
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
    STATE(58), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(289), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__forall_kw,
    STATE(350), 1,
      sym__forall,
    STATE(360), 1,
      sym_constraint,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(389), 1,
      sym__context_constraints,
    STATE(471), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(165), 2,
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
    STATE(469), 3,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(113), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(332), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(142), 5,
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
    STATE(58), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(289), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__forall_kw,
    STATE(350), 1,
      sym__forall,
    STATE(360), 1,
      sym_constraint,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(389), 1,
      sym__context_constraints,
    STATE(471), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(165), 2,
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
    STATE(472), 3,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(113), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(334), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(142), 5,
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
    STATE(52), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(285), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__forall_kw,
    STATE(347), 1,
      sym__forall,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(165), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
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
    STATE(113), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(142), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(327), 6,
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
  [1399] = 28,
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
    STATE(49), 1,
      sym__context,
    STATE(57), 1,
      sym_type_name,
    STATE(99), 1,
      sym_constructor,
    STATE(285), 1,
      sym_type_infix,
    STATE(288), 1,
      sym__type_infix,
    STATE(310), 1,
      sym__forall_kw,
    STATE(344), 1,
      sym__forall,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
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
    STATE(121), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(171), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(327), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(63), 9,
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
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
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
    STATE(113), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(112), 5,
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
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
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
    STATE(113), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(112), 5,
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
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
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
    STATE(113), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(112), 5,
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
  [1787] = 28,
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
    STATE(194), 1,
      sym_constructor,
    STATE(310), 1,
      sym__forall_kw,
    STATE(346), 1,
      sym__forall,
    STATE(360), 1,
      sym_constraint,
    STATE(368), 1,
      sym_type_infix,
    STATE(374), 1,
      aux_sym__qualifying_module,
    STATE(389), 1,
      sym__context_constraints,
    STATE(471), 1,
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
    STATE(206), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(473), 4,
      sym_implicit_param,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(255), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(69), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [1896] = 19,
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
    STATE(99), 1,
      sym_constructor,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
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
    ACTIONS(253), 4,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(121), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(134), 5,
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
  [1987] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym__varid,
    ACTIONS(307), 1,
      sym__integer_literal,
    ACTIONS(313), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      sym__conid,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    ACTIONS(322), 1,
      anon_sym_SQUOTE,
    ACTIONS(328), 1,
      anon_sym_AT,
    STATE(99), 1,
      sym_constructor,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(304), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(310), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(196), 4,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(121), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(134), 5,
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
  [2078] = 27,
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
    STATE(52), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(285), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__forall_kw,
    STATE(347), 1,
      sym__forall,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(165), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
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
    STATE(113), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(332), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(142), 5,
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
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym__context,
    STATE(52), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(285), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__forall_kw,
    STATE(347), 1,
      sym__forall,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(165), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
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
    STATE(113), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(334), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(142), 5,
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
  [2292] = 27,
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
    STATE(49), 1,
      sym__context,
    STATE(57), 1,
      sym_type_name,
    STATE(99), 1,
      sym_constructor,
    STATE(285), 1,
      sym_type_infix,
    STATE(288), 1,
      sym__type_infix,
    STATE(310), 1,
      sym__forall_kw,
    STATE(344), 1,
      sym__forall,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
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
    STATE(121), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(335), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(171), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(63), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2399] = 27,
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
    STATE(49), 1,
      sym__context,
    STATE(57), 1,
      sym_type_name,
    STATE(99), 1,
      sym_constructor,
    STATE(285), 1,
      sym_type_infix,
    STATE(288), 1,
      sym__type_infix,
    STATE(310), 1,
      sym__forall_kw,
    STATE(344), 1,
      sym__forall,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
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
    STATE(121), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(332), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(171), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(63), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2506] = 27,
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
    STATE(52), 1,
      sym_type_name,
    STATE(89), 1,
      sym_constructor,
    STATE(281), 1,
      sym__type_infix,
    STATE(285), 1,
      sym_type_infix,
    STATE(310), 1,
      sym__forall_kw,
    STATE(347), 1,
      sym__forall,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(165), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
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
    STATE(113), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(335), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(142), 5,
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
  [2613] = 27,
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
    STATE(49), 1,
      sym__context,
    STATE(57), 1,
      sym_type_name,
    STATE(99), 1,
      sym_constructor,
    STATE(285), 1,
      sym_type_infix,
    STATE(288), 1,
      sym__type_infix,
    STATE(310), 1,
      sym__forall_kw,
    STATE(344), 1,
      sym__forall,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(389), 2,
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
    STATE(121), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(334), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(171), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(63), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2720] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym__varid,
    ACTIONS(341), 1,
      sym__integer_literal,
    ACTIONS(347), 1,
      anon_sym_,
    ACTIONS(349), 1,
      anon_sym_EQ_GT,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      sym__conid,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_SQUOTE,
    STATE(239), 1,
      sym_constructor,
    STATE(352), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(363), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(338), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(344), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(257), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(227), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(334), 6,
      sym_comma,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
    ACTIONS(336), 6,
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
  [2813] = 19,
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
    ACTIONS(366), 1,
      sym__conid,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    STATE(99), 1,
      sym_constructor,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
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
    ACTIONS(229), 4,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(121), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(134), 5,
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
    STATE(44), 12,
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
  [2904] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym__varid,
    ACTIONS(378), 1,
      sym__integer_literal,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      sym__conid,
    ACTIONS(390), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(399), 1,
      anon_sym_AT,
    STATE(123), 1,
      sym_constructor,
    STATE(372), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(396), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(375), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(381), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(139), 4,
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
    STATE(142), 5,
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
  [2994] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(402), 1,
      sym__varid,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(406), 1,
      sym__conid,
    ACTIONS(409), 1,
      anon_sym_SQUOTE,
    ACTIONS(412), 1,
      anon_sym_AT,
    STATE(123), 1,
      sym_constructor,
    STATE(372), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
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
    STATE(139), 4,
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
    STATE(142), 5,
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
    STATE(56), 12,
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
  [3084] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(402), 1,
      sym__varid,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(412), 1,
      anon_sym_AT,
    ACTIONS(414), 1,
      sym__conid,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    STATE(123), 1,
      sym_constructor,
    STATE(372), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
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
    STATE(139), 4,
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
    STATE(142), 5,
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
  [3174] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym__varid,
    ACTIONS(341), 1,
      sym__integer_literal,
    ACTIONS(347), 1,
      anon_sym_,
    ACTIONS(349), 1,
      anon_sym_EQ_GT,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      sym__conid,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_SQUOTE,
    STATE(239), 1,
      sym_constructor,
    STATE(352), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(363), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(338), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(344), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(336), 4,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_PERCENT,
    STATE(257), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(227), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(334), 7,
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
  [3266] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym__varid,
    ACTIONS(341), 1,
      sym__integer_literal,
    ACTIONS(347), 1,
      anon_sym_,
    ACTIONS(349), 1,
      anon_sym_EQ_GT,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      sym__conid,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_SQUOTE,
    STATE(239), 1,
      sym_constructor,
    STATE(352), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(363), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(420), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(334), 3,
      anon_sym_2,
      anon_sym_4,
      anon_sym_BQUOTE,
    ACTIONS(338), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(344), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(257), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(227), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(336), 6,
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
  [3360] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      sym__varid,
    ACTIONS(429), 1,
      sym__integer_literal,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
    ACTIONS(438), 1,
      sym__conid,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(444), 1,
      anon_sym_SQUOTE,
    ACTIONS(450), 1,
      anon_sym_AT,
    STATE(145), 1,
      sym_constructor,
    STATE(355), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(447), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(196), 3,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    ACTIONS(426), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(432), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(162), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(171), 5,
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
    STATE(59), 12,
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
    STATE(194), 1,
      sym_constructor,
    STATE(310), 1,
      sym__forall_kw,
    STATE(346), 1,
      sym__forall,
    STATE(360), 1,
      sym_constraint,
    STATE(368), 1,
      sym_type_infix,
    STATE(374), 1,
      aux_sym__qualifying_module,
    STATE(389), 1,
      sym__context_constraints,
    STATE(471), 1,
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
    STATE(469), 3,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(206), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(255), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(69), 9,
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
    STATE(194), 1,
      sym_constructor,
    STATE(310), 1,
      sym__forall_kw,
    STATE(346), 1,
      sym__forall,
    STATE(360), 1,
      sym_constraint,
    STATE(368), 1,
      sym_type_infix,
    STATE(374), 1,
      aux_sym__qualifying_module,
    STATE(389), 1,
      sym__context_constraints,
    STATE(471), 1,
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
    STATE(472), 3,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(206), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(255), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(69), 9,
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
    ACTIONS(453), 1,
      sym__varid,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(457), 1,
      sym__conid,
    ACTIONS(460), 1,
      anon_sym_SQUOTE,
    ACTIONS(463), 1,
      anon_sym_AT,
    STATE(145), 1,
      sym_constructor,
    STATE(355), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
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
    STATE(162), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(171), 5,
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
    STATE(59), 12,
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
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(453), 1,
      sym__varid,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_AT,
    ACTIONS(465), 1,
      sym__conid,
    ACTIONS(468), 1,
      anon_sym_SQUOTE,
    STATE(145), 1,
      sym_constructor,
    STATE(355), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
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
    STATE(162), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(171), 5,
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
    STATE(194), 1,
      sym_constructor,
    STATE(374), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(229), 2,
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
    STATE(206), 4,
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
    STATE(218), 5,
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
    ACTIONS(493), 1,
      sym__varid,
    ACTIONS(499), 1,
      sym__integer_literal,
    ACTIONS(505), 1,
      anon_sym_LPAREN,
    ACTIONS(508), 1,
      sym__conid,
    ACTIONS(511), 1,
      anon_sym_LBRACK,
    ACTIONS(514), 1,
      anon_sym_SQUOTE,
    ACTIONS(520), 1,
      anon_sym_AT,
    STATE(194), 1,
      sym_constructor,
    STATE(374), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(196), 2,
      sym__tyconsym,
      anon_sym_EQ_GT,
    ACTIONS(517), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(496), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(502), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(206), 4,
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
    STATE(218), 5,
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
  [4009] = 19,
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
    ACTIONS(523), 1,
      sym__conid,
    ACTIONS(526), 1,
      anon_sym_SQUOTE,
    STATE(194), 1,
      sym_constructor,
    STATE(374), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(253), 2,
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
    STATE(206), 4,
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
    STATE(218), 5,
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
    ACTIONS(331), 1,
      sym__varid,
    ACTIONS(341), 1,
      sym__integer_literal,
    ACTIONS(349), 1,
      anon_sym_EQ_GT,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      sym__conid,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_SQUOTE,
    STATE(239), 1,
      sym_constructor,
    STATE(352), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(334), 2,
      sym__consym,
      anon_sym_BQUOTE,
    ACTIONS(336), 2,
      sym__tyconsym,
      anon_sym_AT,
    ACTIONS(363), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(338), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(344), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(347), 3,
      sym_comma,
      anon_sym_,
      anon_sym_RPAREN,
    STATE(257), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(227), 5,
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
    ACTIONS(196), 1,
      sym__tyconsym,
    ACTIONS(529), 1,
      sym__varid,
    ACTIONS(535), 1,
      sym__integer_literal,
    ACTIONS(541), 1,
      anon_sym_LPAREN,
    ACTIONS(544), 1,
      sym__conid,
    ACTIONS(547), 1,
      anon_sym_LBRACK,
    ACTIONS(550), 1,
      anon_sym_SQUOTE,
    ACTIONS(556), 1,
      anon_sym_AT,
    STATE(235), 1,
      sym_constructor,
    STATE(377), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(194), 2,
      sym__consym,
      anon_sym_BQUOTE,
    ACTIONS(553), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(532), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(538), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(254), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(255), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(68), 12,
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
    ACTIONS(229), 1,
      sym__tyconsym,
    ACTIONS(265), 1,
      sym__integer_literal,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(559), 1,
      sym__varid,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    ACTIONS(563), 1,
      sym__conid,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
    ACTIONS(569), 1,
      anon_sym_AT,
    STATE(235), 1,
      sym_constructor,
    STATE(377), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
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
    STATE(254), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(255), 5,
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
    ACTIONS(253), 1,
      sym__tyconsym,
    ACTIONS(265), 1,
      sym__integer_literal,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(559), 1,
      sym__varid,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    ACTIONS(569), 1,
      anon_sym_AT,
    ACTIONS(571), 1,
      sym__conid,
    ACTIONS(574), 1,
      anon_sym_SQUOTE,
    STATE(235), 1,
      sym_constructor,
    STATE(377), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
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
    STATE(254), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(255), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(68), 12,
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
    STATE(239), 1,
      sym_constructor,
    STATE(352), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
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
    STATE(257), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(227), 5,
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
    STATE(239), 1,
      sym_constructor,
    STATE(352), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
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
    STATE(257), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(227), 5,
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
    ACTIONS(471), 1,
      sym__varid,
    ACTIONS(475), 1,
      sym__integer_literal,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(626), 1,
      anon_sym_SQUOTE,
    STATE(194), 1,
      sym_constructor,
    STATE(374), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(489), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(219), 2,
      sym_type_apply,
      sym__btype,
    STATE(282), 2,
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
    STATE(206), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(218), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(64), 10,
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
    ACTIONS(628), 1,
      anon_sym_SQUOTE,
    STATE(89), 1,
      sym_constructor,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(124), 2,
      sym_type_apply,
      sym__btype,
    STATE(282), 2,
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
    STATE(113), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(112), 5,
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
    STATE(99), 1,
      sym_constructor,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(297), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(146), 2,
      sym_type_apply,
      sym__btype,
    STATE(282), 2,
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
    STATE(121), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(134), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(53), 10,
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
    STATE(373), 1,
      aux_sym__qualifying_module,
    STATE(376), 1,
      sym_constructor,
    STATE(471), 1,
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
    STATE(434), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(399), 5,
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
    STATE(373), 1,
      aux_sym__qualifying_module,
    STATE(376), 1,
      sym_constructor,
    STATE(471), 1,
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
    STATE(434), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(399), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(297), 11,
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
    STATE(373), 1,
      aux_sym__qualifying_module,
    STATE(376), 1,
      sym_constructor,
    STATE(471), 1,
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
    STATE(434), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(399), 5,
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
  [5029] = 16,
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
    STATE(99), 1,
      sym_constructor,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
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
    STATE(121), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(134), 5,
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
  [5099] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(453), 1,
      sym__varid,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    ACTIONS(646), 1,
      sym__conid,
    ACTIONS(648), 1,
      anon_sym_SQUOTE,
    STATE(145), 1,
      sym_constructor,
    STATE(355), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
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
    STATE(162), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(171), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(169), 10,
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
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(402), 1,
      sym__varid,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    ACTIONS(650), 1,
      sym__conid,
    ACTIONS(652), 1,
      anon_sym_SQUOTE,
    STATE(123), 1,
      sym_constructor,
    STATE(372), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
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
    STATE(139), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(142), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(157), 10,
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
    ACTIONS(265), 1,
      sym__integer_literal,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(559), 1,
      sym__varid,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    ACTIONS(654), 1,
      sym__conid,
    ACTIONS(656), 1,
      anon_sym_SQUOTE,
    STATE(235), 1,
      sym_constructor,
    STATE(377), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
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
    STATE(254), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(255), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(251), 10,
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
    ACTIONS(626), 1,
      anon_sym_SQUOTE,
    STATE(194), 1,
      sym_constructor,
    STATE(374), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
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
    STATE(206), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(218), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(198), 10,
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
    ACTIONS(583), 1,
      sym__integer_literal,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    ACTIONS(658), 1,
      sym__varid,
    ACTIONS(660), 1,
      anon_sym_LPAREN,
    ACTIONS(662), 1,
      anon_sym_SQUOTE,
    STATE(338), 1,
      sym_constructor,
    STATE(356), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
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
    STATE(370), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(227), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(464), 10,
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
    ACTIONS(628), 1,
      anon_sym_SQUOTE,
    STATE(89), 1,
      sym_constructor,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
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
    STATE(113), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(112), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(96), 10,
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
    STATE(39), 1,
      sym__colon2,
    STATE(466), 1,
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
  [5790] = 4,
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
  [5828] = 3,
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
  [5864] = 3,
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
  [5900] = 3,
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
  [5936] = 3,
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
  [5972] = 3,
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
  [6008] = 4,
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
  [6046] = 3,
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
  [6082] = 3,
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
  [6118] = 3,
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
  [6154] = 3,
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
  [6190] = 3,
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
  [6226] = 3,
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
  [6262] = 3,
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
  [6298] = 3,
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
  [6334] = 3,
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
  [6370] = 3,
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
  [6406] = 4,
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
  [6444] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_,
    ACTIONS(758), 1,
      anon_sym_EQ_GT,
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
  [6556] = 3,
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
  [6591] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_,
    ACTIONS(758), 1,
      anon_sym_EQ_GT,
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
  [6630] = 3,
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
  [6665] = 3,
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
  [6700] = 4,
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
  [6737] = 3,
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
  [6772] = 3,
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
  [6807] = 3,
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
  [6842] = 3,
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
  [6877] = 4,
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
  [6914] = 12,
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
    STATE(304), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    STATE(475), 1,
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
  [6967] = 3,
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
  [7002] = 3,
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
  [7037] = 3,
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
  [7072] = 4,
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
  [7109] = 3,
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
  [7144] = 3,
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
  [7179] = 3,
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
  [7214] = 3,
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
  [7249] = 3,
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
  [7284] = 3,
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
  [7319] = 3,
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
  [7354] = 3,
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
  [7389] = 3,
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
  [7424] = 3,
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
  [7458] = 3,
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
  [7492] = 3,
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
  [7526] = 3,
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
  [7560] = 3,
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
  [7594] = 3,
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
  [7628] = 3,
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
  [7662] = 4,
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
  [7698] = 12,
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
    STATE(304), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    STATE(475), 1,
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
  [7750] = 4,
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
  [7786] = 3,
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
  [7820] = 3,
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
  [7854] = 3,
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
  [7888] = 3,
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
  [7922] = 3,
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
  [7956] = 3,
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
  [7990] = 3,
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
  [8024] = 4,
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
  [8060] = 3,
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
  [8094] = 3,
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
  [8128] = 3,
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
  [8162] = 3,
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
  [8196] = 3,
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
  [8296] = 3,
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
  [8329] = 3,
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
  [8362] = 12,
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
    STATE(304), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    STATE(475), 1,
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
  [8413] = 3,
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
  [8446] = 3,
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
  [8479] = 3,
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
  [8512] = 3,
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
  [8545] = 3,
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
  [8578] = 3,
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
  [8611] = 3,
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
  [8644] = 3,
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
  [8677] = 3,
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
  [8710] = 3,
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
  [8743] = 3,
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
  [8776] = 3,
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
  [8809] = 3,
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
  [8842] = 3,
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
    STATE(304), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    STATE(475), 1,
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
    STATE(196), 1,
      sym_constructor,
    STATE(200), 1,
      sym_qualified_type,
    STATE(374), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(473), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(477), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(217), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(218), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [8976] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      sym__integer_literal,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    ACTIONS(780), 1,
      anon_sym_LPAREN,
    STATE(238), 1,
      sym_constructor,
    STATE(256), 1,
      sym_qualified_type,
    STATE(352), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(581), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(585), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(221), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(227), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9027] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(233), 1,
      sym__integer_literal,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(782), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_constructor,
    STATE(94), 1,
      sym_qualified_type,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(231), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(235), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(107), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(112), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9078] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(784), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_constructor,
    STATE(94), 1,
      sym_qualified_type,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(149), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(142), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9129] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(634), 1,
      sym__integer_literal,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(786), 1,
      anon_sym_LPAREN,
    STATE(373), 1,
      aux_sym__qualifying_module,
    STATE(378), 1,
      sym_constructor,
    STATE(451), 1,
      sym_qualified_type,
    STATE(471), 1,
      sym__modid,
    ACTIONS(632), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(636), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(409), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(399), 5,
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
    STATE(196), 1,
      sym_constructor,
    STATE(200), 1,
      sym_qualified_type,
    STATE(374), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(263), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(267), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(263), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(255), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9231] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(790), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_constructor,
    STATE(130), 1,
      sym_qualified_type,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(173), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(177), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(168), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(171), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9282] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym__integer_literal,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(654), 1,
      sym__conid,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    STATE(234), 1,
      sym_constructor,
    STATE(248), 1,
      sym_qualified_type,
    STATE(377), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(263), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(267), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(263), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(255), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9333] = 4,
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
  [9366] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(283), 1,
      sym__integer_literal,
    ACTIONS(292), 1,
      anon_sym_LBRACK,
    ACTIONS(794), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_constructor,
    STATE(130), 1,
      sym_qualified_type,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(281), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(285), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(129), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(134), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9417] = 13,
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
    STATE(147), 1,
      sym_constructor,
    STATE(177), 1,
      sym_qualified_type,
    STATE(355), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(173), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(177), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(168), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(171), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9468] = 3,
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
  [9499] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(650), 1,
      sym__conid,
    ACTIONS(798), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym_constructor,
    STATE(154), 1,
      sym_qualified_type,
    STATE(372), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    ACTIONS(25), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(29), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(149), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(142), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9550] = 4,
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
  [9583] = 13,
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
    STATE(339), 1,
      sym_constructor,
    STATE(356), 1,
      aux_sym__qualifying_module,
    STATE(365), 1,
      sym_qualified_type,
    STATE(471), 1,
      sym__modid,
    ACTIONS(581), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(585), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(221), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(227), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
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
  [9697] = 3,
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
  [9727] = 3,
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
  [9757] = 3,
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
  [9787] = 3,
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
  [9817] = 3,
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
  [9847] = 3,
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
  [9877] = 3,
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
  [9907] = 14,
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
    STATE(507), 1,
      sym_entity_body,
    STATE(76), 2,
      sym__field_name,
      sym_variable,
    STATE(216), 2,
      sym__entity_line_definition,
      aux_sym_entity_body_repeat1,
    STATE(342), 2,
      sym__haskell_constraint_name,
      sym_constructor,
    STATE(382), 2,
      sym_entity_derives,
      aux_sym_entity_body_repeat2,
    STATE(497), 6,
      sym__entity_key,
      sym_surrogate_key,
      sym_natural_key,
      sym_field_definition,
      sym_unique_constraint,
      sym_foreign_constraint,
  [9959] = 3,
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
  [9989] = 3,
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
  [10019] = 3,
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
  [10049] = 3,
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
  [10079] = 3,
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
  [10109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(704), 20,
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
  [10139] = 3,
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
  [10169] = 3,
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
  [10199] = 3,
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
  [10229] = 3,
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
    STATE(76), 2,
      sym__field_name,
      sym_variable,
    STATE(222), 2,
      sym__entity_line_definition,
      aux_sym_entity_body_repeat1,
    STATE(342), 2,
      sym__haskell_constraint_name,
      sym_constructor,
    STATE(354), 2,
      sym_entity_derives,
      aux_sym_entity_body_repeat2,
    STATE(497), 6,
      sym__entity_key,
      sym_surrogate_key,
      sym_natural_key,
      sym_field_definition,
      sym_unique_constraint,
      sym_foreign_constraint,
  [10311] = 3,
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
  [10341] = 3,
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
    STATE(304), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    STATE(475), 1,
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
    ACTIONS(756), 1,
      anon_sym_,
    ACTIONS(758), 1,
      anon_sym_EQ_GT,
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
  [10450] = 3,
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
  [10478] = 13,
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
    STATE(76), 2,
      sym__field_name,
      sym_variable,
    STATE(222), 2,
      sym__entity_line_definition,
      aux_sym_entity_body_repeat1,
    STATE(342), 2,
      sym__haskell_constraint_name,
      sym_constructor,
    STATE(497), 6,
      sym__entity_key,
      sym_surrogate_key,
      sym_natural_key,
      sym_field_definition,
      sym_unique_constraint,
      sym_foreign_constraint,
  [10526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(716), 18,
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
  [10554] = 3,
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
  [10582] = 3,
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
  [10610] = 3,
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
  [10638] = 3,
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
  [10666] = 3,
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
  [10694] = 3,
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
  [10722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(724), 18,
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
  [10778] = 3,
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
  [10806] = 4,
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
  [10835] = 4,
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
  [10864] = 4,
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
  [10893] = 3,
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
  [10920] = 4,
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
  [10949] = 4,
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
  [10978] = 4,
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
  [11007] = 3,
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
  [11033] = 3,
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
  [11059] = 3,
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
  [11085] = 14,
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
    STATE(305), 1,
      sym__entity_header,
    STATE(373), 1,
      aux_sym__qualifying_module,
    STATE(376), 1,
      sym_constructor,
    STATE(471), 1,
      sym__modid,
    STATE(250), 2,
      sym_entity_definition,
      aux_sym_quasi_quotation_repeat1,
    STATE(308), 2,
      sym__entity_name,
      sym_type_name,
    STATE(434), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [11133] = 3,
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
  [11159] = 3,
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
  [11185] = 3,
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
  [11211] = 3,
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
  [11237] = 3,
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
  [11263] = 3,
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
  [11289] = 14,
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
    STATE(305), 1,
      sym__entity_header,
    STATE(373), 1,
      aux_sym__qualifying_module,
    STATE(376), 1,
      sym_constructor,
    STATE(471), 1,
      sym__modid,
    STATE(250), 2,
      sym_entity_definition,
      aux_sym_quasi_quotation_repeat1,
    STATE(308), 2,
      sym__entity_name,
      sym_type_name,
    STATE(434), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [11337] = 3,
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
  [11363] = 3,
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
  [11389] = 3,
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
  [11415] = 3,
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
  [11441] = 3,
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
  [11467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(700), 16,
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
  [11493] = 3,
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
  [11519] = 3,
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
  [11545] = 3,
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
  [11571] = 3,
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
  [11597] = 3,
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
  [11623] = 3,
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
  [11649] = 3,
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
  [11701] = 10,
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
    STATE(304), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    STATE(475), 1,
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
  [11740] = 13,
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
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(658), 1,
      sym__varid,
    STATE(304), 1,
      aux_sym__qualifying_module,
    STATE(366), 1,
      sym_type_variable,
    STATE(471), 1,
      sym__modid,
    STATE(475), 1,
      sym_constructor,
    STATE(496), 1,
      sym__arrow,
    STATE(495), 6,
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
    ACTIONS(129), 1,
      sym__tyconsym,
    ACTIONS(131), 1,
      anon_sym_2,
    ACTIONS(133), 1,
      anon_sym_DASH_GT,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(658), 1,
      sym__varid,
    STATE(304), 1,
      aux_sym__qualifying_module,
    STATE(366), 1,
      sym_type_variable,
    STATE(471), 1,
      sym__modid,
    STATE(475), 1,
      sym_constructor,
    STATE(476), 1,
      sym__arrow,
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
  [12013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(895), 12,
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
  [12035] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(899), 1,
      sym__tyconsym,
    STATE(304), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    STATE(475), 1,
      sym_constructor,
    STATE(273), 7,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
      sym__qtyconops,
  [12069] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym__varid,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    ACTIONS(903), 1,
      sym__conid,
    ACTIONS(905), 1,
      anon_sym_SQUOTE,
    STATE(338), 1,
      sym_constructor,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    STATE(397), 2,
      sym__entity_name,
      sym_type_name,
    STATE(370), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [12104] = 5,
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
    STATE(458), 5,
      sym__key_value_attribute_value,
      sym__key_value_atribute_value_literal,
      sym__key_value_atribute_value_other_token,
      sym_integer,
      sym__literal,
  [12129] = 10,
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
    STATE(373), 1,
      aux_sym__qualifying_module,
    STATE(376), 1,
      sym_constructor,
    STATE(471), 1,
      sym__modid,
    STATE(299), 2,
      sym__entity_name,
      sym_type_name,
    STATE(434), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [12164] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_PERCENT,
    STATE(408), 1,
      sym_modifier,
    ACTIONS(913), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    STATE(50), 2,
      sym__arrow,
      sym__fun_arrow,
    ACTIONS(911), 5,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [12189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 11,
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
  [12206] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(153), 1,
      sym__tyconsym,
    ACTIONS(589), 1,
      sym__conid,
    STATE(304), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    STATE(475), 1,
      sym_constructor,
    STATE(506), 5,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
  [12235] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(139), 1,
      sym__tyconsym,
    ACTIONS(589), 1,
      sym__conid,
    STATE(304), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    STATE(475), 1,
      sym_constructor,
    STATE(494), 5,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
  [12264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 2,
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
  [12283] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      sym__varid,
    ACTIONS(926), 1,
      anon_sym_LPAREN,
    ACTIONS(929), 1,
      anon_sym_LBRACE,
    ACTIONS(924), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
    STATE(286), 4,
      sym_type_variable,
      sym_inferred_type_variable,
      sym__quantifier,
      aux_sym__forall_repeat1,
  [12307] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym__varid,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    ACTIONS(936), 1,
      anon_sym_LBRACE,
    ACTIONS(932), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
    STATE(286), 4,
      sym_type_variable,
      sym_inferred_type_variable,
      sym__quantifier,
      aux_sym__forall_repeat1,
  [12331] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_PERCENT,
    STATE(408), 1,
      sym_modifier,
    ACTIONS(938), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    STATE(48), 2,
      sym__arrow,
      sym__fun_arrow,
    ACTIONS(911), 4,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [12355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 2,
      anon_sym_,
      anon_sym_EQ_GT,
    ACTIONS(940), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(764), 5,
      anon_sym_2,
      anon_sym_DASH_GT,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
  [12374] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(945), 1,
      sym_exl_mark_attribute,
    ACTIONS(947), 1,
      sym__newline,
    STATE(292), 1,
      aux_sym_surrogate_key_repeat1,
    STATE(413), 4,
      sym__key_attribute,
      sym__field_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
  [12396] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(945), 1,
      sym_exl_mark_attribute,
    ACTIONS(949), 1,
      sym__newline,
    STATE(290), 1,
      aux_sym_surrogate_key_repeat1,
    STATE(413), 4,
      sym__key_attribute,
      sym__field_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
  [12418] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(954), 1,
      sym_exl_mark_attribute,
    ACTIONS(957), 1,
      sym__newline,
    STATE(292), 1,
      aux_sym_surrogate_key_repeat1,
    STATE(413), 4,
      sym__key_attribute,
      sym__field_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
  [12440] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      sym__conid,
    STATE(293), 1,
      aux_sym_entity_derives_repeat1,
    STATE(361), 1,
      sym_constructor,
    STATE(380), 1,
      aux_sym__qualifying_module,
    STATE(398), 1,
      sym_qualified_type,
    STATE(471), 1,
      sym__modid,
    ACTIONS(959), 2,
      sym__dedent,
      anon_sym_deriving,
  [12466] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym__conid,
    STATE(293), 1,
      aux_sym_entity_derives_repeat1,
    STATE(361), 1,
      sym_constructor,
    STATE(380), 1,
      aux_sym__qualifying_module,
    STATE(398), 1,
      sym_qualified_type,
    STATE(471), 1,
      sym__modid,
    ACTIONS(964), 2,
      sym__dedent,
      anon_sym_deriving,
  [12492] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(39), 1,
      sym__colon2,
    STATE(432), 1,
      sym__type_annotation,
    STATE(433), 1,
      sym_kind,
    ACTIONS(970), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
    ACTIONS(968), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [12514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 2,
      sym__dedent,
      sym__field_strictness_prefix,
    ACTIONS(972), 6,
      anon_sym_Id,
      anon_sym_Primary,
      anon_sym_Foreign,
      anon_sym_deriving,
      sym__varid,
      sym__conid,
  [12530] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(976), 1,
      sym_exl_mark_attribute,
    ACTIONS(978), 1,
      sym__newline,
    STATE(311), 1,
      aux_sym_field_definition_repeat1,
    STATE(418), 3,
      sym__field_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
  [12551] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(980), 1,
      sym__tyconsym,
    STATE(88), 1,
      sym_constructor,
    STATE(271), 1,
      sym_constructor_operator,
    STATE(324), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
  [12576] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(982), 1,
      sym_exl_mark_attribute,
    ACTIONS(984), 1,
      sym__newline,
    STATE(314), 4,
      sym__entity_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
      aux_sym__entity_header_repeat1,
  [12595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [12608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [12621] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(976), 1,
      sym_exl_mark_attribute,
    ACTIONS(990), 1,
      sym__newline,
    STATE(313), 1,
      aux_sym_field_definition_repeat1,
    STATE(418), 3,
      sym__field_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
  [12642] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(995), 1,
      sym_exl_mark_attribute,
    ACTIONS(998), 1,
      sym__newline,
    STATE(303), 4,
      sym__entity_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
      aux_sym__entity_header_repeat1,
  [12661] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(589), 1,
      sym__conid,
    ACTIONS(980), 1,
      sym__tyconsym,
    STATE(271), 1,
      sym_constructor_operator,
    STATE(324), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    STATE(475), 1,
      sym_constructor,
  [12686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1002), 1,
      sym__indent,
    ACTIONS(1000), 6,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [12701] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(1004), 1,
      sym_exl_mark_attribute,
    ACTIONS(1006), 1,
      sym__newline,
    STATE(303), 4,
      sym__entity_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
      aux_sym__entity_header_repeat1,
  [12720] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      sym__varid,
    ACTIONS(1011), 1,
      aux_sym_key_value_attribute_token1,
    STATE(307), 1,
      aux_sym__list_of_fields_repeat1,
    ACTIONS(1013), 2,
      sym__newline,
      sym_exl_mark_attribute,
    STATE(379), 2,
      sym__field_name,
      sym_variable,
  [12741] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(1015), 1,
      sym_exl_mark_attribute,
    ACTIONS(1017), 1,
      sym__newline,
    STATE(306), 4,
      sym__entity_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
      aux_sym__entity_header_repeat1,
  [12760] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      sym__varid,
    ACTIONS(1021), 1,
      aux_sym_key_value_attribute_token1,
    STATE(307), 1,
      aux_sym__list_of_fields_repeat1,
    ACTIONS(1023), 2,
      sym__newline,
      sym_exl_mark_attribute,
    STATE(379), 2,
      sym__field_name,
      sym_variable,
  [12781] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym__varid,
    ACTIONS(934), 1,
      anon_sym_LPAREN,
    ACTIONS(936), 1,
      anon_sym_LBRACE,
    STATE(287), 4,
      sym_type_variable,
      sym_inferred_type_variable,
      sym__quantifier,
      aux_sym__forall_repeat1,
  [12800] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(976), 1,
      sym_exl_mark_attribute,
    ACTIONS(1025), 1,
      sym__newline,
    STATE(316), 1,
      aux_sym_field_definition_repeat1,
    STATE(418), 3,
      sym__field_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
  [12821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [12834] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(976), 1,
      sym_exl_mark_attribute,
    ACTIONS(1029), 1,
      sym__newline,
    STATE(316), 1,
      aux_sym_field_definition_repeat1,
    STATE(418), 3,
      sym__field_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
  [12855] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(1004), 1,
      sym_exl_mark_attribute,
    ACTIONS(1031), 1,
      sym__newline,
    STATE(303), 4,
      sym__entity_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
      aux_sym__entity_header_repeat1,
  [12874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [12887] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(1038), 1,
      sym_exl_mark_attribute,
    ACTIONS(1041), 1,
      sym__newline,
    STATE(316), 1,
      aux_sym_field_definition_repeat1,
    STATE(418), 3,
      sym__field_attribute,
      sym_key_value_attribute,
      sym_other_attribute,
  [12908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
    ACTIONS(704), 5,
      anon_sym_2,
      anon_sym_DASH_GT,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
  [12923] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      sym__varid,
    STATE(318), 1,
      aux_sym__list_of_fields_repeat1,
    ACTIONS(1013), 2,
      sym__newline,
      anon_sym_References,
    STATE(393), 2,
      sym__field_name,
      sym_variable,
  [12941] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym__conid,
    STATE(294), 1,
      aux_sym_entity_derives_repeat1,
    STATE(361), 1,
      sym_constructor,
    STATE(380), 1,
      aux_sym__qualifying_module,
    STATE(398), 1,
      sym_qualified_type,
    STATE(471), 1,
      sym__modid,
  [12963] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(1048), 1,
      sym_exl_mark_attribute,
    ACTIONS(1050), 1,
      sym__newline,
    STATE(325), 1,
      aux_sym_unique_constraint_repeat1,
    STATE(420), 2,
      sym_key_value_attribute,
      sym__unique_constraint_attribute,
  [12983] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(1048), 1,
      sym_exl_mark_attribute,
    ACTIONS(1052), 1,
      sym__newline,
    STATE(320), 1,
      aux_sym_unique_constraint_repeat1,
    STATE(420), 2,
      sym_key_value_attribute,
      sym__unique_constraint_attribute,
  [13003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 6,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [13015] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      sym__conid,
    ACTIONS(1056), 1,
      anon_sym_LPAREN,
    STATE(339), 1,
      sym_constructor,
    STATE(353), 1,
      aux_sym__qualifying_module,
    STATE(365), 1,
      sym_qualified_type,
    STATE(471), 1,
      sym__modid,
  [13037] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1058), 1,
      sym__consym,
    ACTIONS(1060), 1,
      sym__tyconsym,
    ACTIONS(1062), 1,
      sym__conid,
    STATE(324), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
    STATE(475), 1,
      sym_constructor,
  [13059] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      aux_sym_key_value_attribute_token1,
    ACTIONS(1068), 1,
      sym_exl_mark_attribute,
    ACTIONS(1071), 1,
      sym__newline,
    STATE(325), 1,
      aux_sym_unique_constraint_repeat1,
    STATE(420), 2,
      sym_key_value_attribute,
      sym__unique_constraint_attribute,
  [13079] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(676), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
    ACTIONS(674), 3,
      anon_sym_2,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
  [13095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13107] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(1075), 1,
      anon_sym_LPAREN,
    STATE(373), 1,
      aux_sym__qualifying_module,
    STATE(378), 1,
      sym_constructor,
    STATE(451), 1,
      sym_qualified_type,
    STATE(471), 1,
      sym__modid,
  [13129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13141] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      sym__varid,
    STATE(318), 1,
      aux_sym__list_of_fields_repeat1,
    ACTIONS(1023), 2,
      sym__newline,
      anon_sym_References,
    STATE(393), 2,
      sym__field_name,
      sym_variable,
  [13159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 6,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [13171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 6,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [13195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13219] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      sym__varid,
    STATE(330), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(519), 1,
      sym__list_of_fields,
    STATE(393), 2,
      sym__field_name,
      sym_variable,
  [13236] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__conid,
    STATE(356), 1,
      aux_sym__qualifying_module,
    STATE(462), 1,
      sym_constructor,
    STATE(471), 1,
      sym__modid,
    STATE(505), 1,
      sym_qualified_type,
  [13255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(678), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(680), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(668), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(672), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13285] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      sym__varid,
    STATE(330), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(465), 1,
      sym__list_of_fields,
    STATE(393), 2,
      sym__field_name,
      sym_variable,
  [13302] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym__colon2,
    STATE(466), 1,
      sym__type_annotation,
    ACTIONS(970), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [13319] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      sym__varid,
    STATE(309), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(321), 1,
      sym__list_of_fields,
    STATE(379), 2,
      sym__field_name,
      sym_variable,
  [13336] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      sym__varid,
    STATE(330), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(467), 1,
      sym__list_of_fields,
    STATE(393), 2,
      sym__field_name,
      sym_variable,
  [13353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(51), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1095), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13366] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      sym__varid,
    STATE(330), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(518), 1,
      sym__list_of_fields,
    STATE(393), 2,
      sym__field_name,
      sym_variable,
  [13383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(61), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1097), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(47), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1099), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13409] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 1,
      sym_comma,
    ACTIONS(1106), 1,
      anon_sym_RPAREN,
    STATE(430), 1,
      aux_sym__context_constraints_repeat1,
    ACTIONS(1104), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [13426] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      sym__varid,
    STATE(330), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(517), 1,
      sym__list_of_fields,
    STATE(393), 2,
      sym__field_name,
      sym_variable,
  [13443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1109), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13456] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      anon_sym_deriving,
    ACTIONS(1114), 1,
      sym__dedent,
    STATE(351), 2,
      sym_entity_derives,
      aux_sym_entity_body_repeat2,
  [13470] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__conid,
    STATE(237), 1,
      sym_constructor,
    STATE(324), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
  [13486] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      sym__conid,
    STATE(324), 1,
      aux_sym__qualifying_module,
    STATE(326), 1,
      sym_constructor,
    STATE(471), 1,
      sym__modid,
  [13502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 1,
      anon_sym_deriving,
    ACTIONS(1118), 1,
      sym__dedent,
    STATE(351), 2,
      sym_entity_derives,
      aux_sym_entity_body_repeat2,
  [13516] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym__conid,
    STATE(155), 1,
      sym_constructor,
    STATE(324), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
  [13532] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__conid,
    STATE(324), 1,
      aux_sym__qualifying_module,
    STATE(326), 1,
      sym_constructor,
    STATE(471), 1,
      sym__modid,
  [13548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(694), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13560] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(39), 1,
      sym__colon2,
    STATE(329), 1,
      sym__type_annotation,
    ACTIONS(970), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [13574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 2,
      sym__newline,
      sym_exl_mark_attribute,
    ACTIONS(893), 2,
      aux_sym_key_value_attribute_token1,
      sym__varid,
  [13586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1120), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(1122), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [13598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(1124), 3,
      sym__dedent,
      anon_sym_deriving,
      sym__conid,
  [13610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(722), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(714), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(1128), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [13646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(702), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(39), 1,
      sym__colon2,
    STATE(466), 1,
      sym__type_annotation,
    ACTIONS(970), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [13672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 4,
      sym__dedent,
      anon_sym_deriving,
      anon_sym_DOT,
      sym__conid,
  [13682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 4,
      sym_comma,
      anon_sym_,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
  [13692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1130), 1,
      sym_comma,
    STATE(369), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(1133), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [13706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(684), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13718] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym__conid,
    STATE(88), 1,
      sym_constructor,
    STATE(324), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
  [13734] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym__conid,
    STATE(118), 1,
      sym_constructor,
    STATE(324), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
  [13750] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__conid,
    STATE(324), 1,
      aux_sym__qualifying_module,
    STATE(385), 1,
      sym_constructor,
    STATE(471), 1,
      sym__modid,
  [13766] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__conid,
    STATE(189), 1,
      sym_constructor,
    STATE(324), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
  [13782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(674), 3,
      sym__dedent,
      anon_sym_deriving,
      sym__conid,
  [13794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(678), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [13806] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym__conid,
    STATE(233), 1,
      sym_constructor,
    STATE(324), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
  [13822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(668), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [13834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 2,
      aux_sym_key_value_attribute_token1,
      sym__varid,
    ACTIONS(1137), 2,
      sym__newline,
      sym_exl_mark_attribute,
  [13846] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 1,
      sym__conid,
    STATE(324), 1,
      aux_sym__qualifying_module,
    STATE(375), 1,
      sym_constructor,
    STATE(471), 1,
      sym__modid,
  [13862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      anon_sym_EQ,
    ACTIONS(1139), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [13874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      sym__dedent,
    ACTIONS(1116), 1,
      anon_sym_deriving,
    STATE(351), 2,
      sym_entity_derives,
      aux_sym_entity_body_repeat2,
  [13888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 4,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
      anon_sym_DOT,
  [13898] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym__conid,
    STATE(93), 1,
      sym_constructor,
    STATE(324), 1,
      aux_sym__qualifying_module,
    STATE(471), 1,
      sym__modid,
  [13914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(674), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [13926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      sym__colon2,
    STATE(329), 1,
      sym__type_annotation,
    ACTIONS(1143), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [13940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1147), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      aux_sym_type_list_repeat1,
  [13953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1149), 1,
      anon_sym_RBRACK,
    STATE(427), 1,
      aux_sym_type_list_repeat1,
  [13966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(269), 1,
      sym__carrow,
    ACTIONS(1151), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [13977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [13986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [13995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 3,
      sym__newline,
      anon_sym_References,
      sym__varid,
  [14004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 3,
      sym__newline,
      anon_sym_References,
      sym__varid,
  [14013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14031] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      sym__varid,
    STATE(77), 2,
      sym__field_name,
      sym_variable,
  [14042] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      sym_cascade_action,
    ACTIONS(1157), 1,
      sym_sql_constraint_name,
    STATE(417), 1,
      aux_sym_foreign_constraint_repeat1,
  [14055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 3,
      sym__dedent,
      anon_sym_deriving,
      sym__conid,
  [14064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1163), 1,
      anon_sym_RPAREN,
    STATE(430), 1,
      aux_sym__context_constraints_repeat1,
  [14095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1165), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      aux_sym_type_list_repeat1,
  [14108] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1169), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      aux_sym_con_tuple_repeat1,
  [14121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1171), 1,
      anon_sym_RBRACK,
    STATE(444), 1,
      aux_sym_type_list_repeat1,
  [14134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym__varid,
    STATE(366), 1,
      sym_type_variable,
    STATE(490), 1,
      sym_annotated_type_variable,
  [14147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym__varid,
    STATE(341), 1,
      sym_type_variable,
    STATE(483), 1,
      sym_annotated_type_variable,
  [14160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_DOT,
    ACTIONS(666), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [14171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(268), 1,
      sym__arrow,
    ACTIONS(1173), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
  [14182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14191] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1175), 1,
      anon_sym_RBRACK,
    STATE(369), 1,
      aux_sym_type_list_repeat1,
  [14204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1179), 1,
      anon_sym_RBRACK,
    STATE(410), 1,
      aux_sym_type_list_repeat1,
  [14244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1181), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      aux_sym_con_tuple_repeat1,
  [14257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1183), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      aux_sym_type_list_repeat1,
  [14270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      sym_cascade_action,
    ACTIONS(1187), 1,
      sym_sql_constraint_name,
    STATE(459), 1,
      aux_sym_foreign_constraint_repeat1,
  [14283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1191), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1193), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      aux_sym_type_list_repeat1,
  [14332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1195), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      aux_sym_con_tuple_repeat1,
  [14345] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1197), 1,
      anon_sym_RBRACK,
    STATE(454), 1,
      aux_sym_type_list_repeat1,
  [14358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1199), 1,
      anon_sym_RBRACK,
    STATE(369), 1,
      aux_sym_type_list_repeat1,
  [14389] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1201), 1,
      anon_sym_RPAREN,
    STATE(430), 1,
      aux_sym__context_constraints_repeat1,
  [14402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_comma,
    ACTIONS(1203), 1,
      anon_sym_RPAREN,
    STATE(453), 1,
      aux_sym__context_constraints_repeat1,
  [14424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1205), 1,
      anon_sym_RBRACK,
    STATE(369), 1,
      aux_sym_type_list_repeat1,
  [14437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1207), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [14446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1209), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [14455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1211), 1,
      anon_sym_RBRACK,
    STATE(431), 1,
      aux_sym_type_list_repeat1,
  [14477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1213), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      aux_sym_con_tuple_repeat1,
  [14490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1215), 1,
      anon_sym_RPAREN,
    STATE(369), 1,
      aux_sym_type_list_repeat1,
  [14503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      sym__tyconsym,
    ACTIONS(1058), 2,
      sym__consym,
      sym__conid,
  [14514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1217), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      aux_sym_type_list_repeat1,
  [14527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1219), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      aux_sym_type_list_repeat1,
  [14540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1221), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      aux_sym_con_tuple_repeat1,
  [14553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1223), 1,
      anon_sym_RBRACK,
    STATE(445), 1,
      aux_sym_type_list_repeat1,
  [14566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      sym_comma,
    ACTIONS(1228), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      aux_sym_con_tuple_repeat1,
  [14579] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1230), 1,
      anon_sym_RBRACK,
    STATE(369), 1,
      aux_sym_type_list_repeat1,
  [14592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1232), 1,
      anon_sym_RBRACK,
    STATE(369), 1,
      aux_sym_type_list_repeat1,
  [14605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1234), 1,
      anon_sym_RBRACK,
    STATE(369), 1,
      aux_sym_type_list_repeat1,
  [14627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [14636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1236), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      aux_sym_type_list_repeat1,
  [14649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1238), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      aux_sym_con_tuple_repeat1,
  [14662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1240), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      aux_sym_type_list_repeat1,
  [14684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1242), 1,
      sym_comma,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
    STATE(453), 1,
      aux_sym__context_constraints_repeat1,
  [14697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1247), 1,
      anon_sym_RBRACK,
    STATE(369), 1,
      aux_sym_type_list_repeat1,
  [14710] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1249), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      aux_sym_con_tuple_repeat1,
  [14723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1251), 1,
      anon_sym_RBRACK,
    STATE(457), 1,
      aux_sym_type_list_repeat1,
  [14736] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1253), 1,
      anon_sym_RBRACK,
    STATE(369), 1,
      aux_sym_type_list_repeat1,
  [14749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1255), 3,
      sym__newline,
      aux_sym_key_value_attribute_token1,
      sym_exl_mark_attribute,
  [14758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1257), 1,
      sym_cascade_action,
    ACTIONS(1260), 1,
      sym_sql_constraint_name,
    STATE(459), 1,
      aux_sym_foreign_constraint_repeat1,
  [14771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    STATE(437), 1,
      aux_sym_type_list_repeat1,
  [14784] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1264), 1,
      anon_sym_RPAREN,
    STATE(443), 1,
      aux_sym_con_tuple_repeat1,
  [14797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(1266), 1,
      anon_sym_BQUOTE,
  [14807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1268), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [14815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1270), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
  [14823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1272), 1,
      anon_sym_References,
    ACTIONS(1274), 1,
      sym__newline,
  [14833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1276), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [14841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1278), 1,
      anon_sym_References,
    ACTIONS(1280), 1,
      sym__newline,
  [14851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1128), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [14859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1282), 2,
      sym_comma,
      anon_sym_RPAREN,
  [14867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      sym_comma,
    STATE(437), 1,
      aux_sym_type_list_repeat1,
  [14877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1284), 1,
      anon_sym_DOT,
    STATE(438), 1,
      sym__dot,
  [14887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1286), 2,
      sym_comma,
      anon_sym_RPAREN,
  [14895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1245), 2,
      sym_comma,
      anon_sym_RPAREN,
  [14903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1288), 1,
      anon_sym_RPAREN,
  [14910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
  [14917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
  [14924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
  [14931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
  [14938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1296), 1,
      anon_sym_RPAREN,
  [14945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
  [14952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1300), 1,
      anon_sym_RPAREN,
  [14959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1302), 1,
      anon_sym_RPAREN,
  [14966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      anon_sym_RBRACE,
  [14973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
  [14980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      anon_sym_RPAREN,
  [14987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
  [14994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 1,
      anon_sym_RPAREN,
  [15001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      anon_sym_RPAREN,
  [15008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1314), 1,
      anon_sym_RPAREN,
  [15015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
  [15022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1318), 1,
      anon_sym_RPAREN,
  [15029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1320), 1,
      anon_sym_RPAREN,
  [15036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
  [15043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1324), 1,
      anon_sym_RPAREN,
  [15050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1326), 1,
      anon_sym_RPAREN,
  [15057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1328), 1,
      anon_sym_RPAREN,
  [15064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1330), 1,
      sym__newline,
  [15071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1332), 1,
      anon_sym_RPAREN,
  [15078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 1,
      anon_sym_RPAREN,
  [15085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1336), 1,
      anon_sym_RPAREN,
  [15092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 1,
      anon_sym_RPAREN,
  [15099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1340), 1,
      anon_sym_RPAREN,
  [15106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1342), 1,
      anon_sym_RPAREN,
  [15113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      anon_sym_EQ,
  [15120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      anon_sym_BQUOTE,
  [15127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1346), 1,
      anon_sym_RPAREN,
  [15134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1348), 1,
      sym__dedent,
  [15141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1350), 1,
      anon_sym_RPAREN,
  [15148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_RPAREN,
  [15155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1354), 1,
      anon_sym_RPAREN,
  [15162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1356), 1,
      anon_sym_RPAREN,
  [15169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_RPAREN,
  [15176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1360), 1,
      ts_builtin_sym_end,
  [15183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1362), 1,
      anon_sym_RPAREN,
  [15190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1364), 1,
      anon_sym_RPAREN,
  [15197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1366), 1,
      anon_sym_RPAREN,
  [15204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      sym__newline,
  [15211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1370), 1,
      sym__newline,
  [15218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1372), 1,
      sym__newline,
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
  [SMALL_STATE(44)] = 1896,
  [SMALL_STATE(45)] = 1987,
  [SMALL_STATE(46)] = 2078,
  [SMALL_STATE(47)] = 2185,
  [SMALL_STATE(48)] = 2292,
  [SMALL_STATE(49)] = 2399,
  [SMALL_STATE(50)] = 2506,
  [SMALL_STATE(51)] = 2613,
  [SMALL_STATE(52)] = 2720,
  [SMALL_STATE(53)] = 2813,
  [SMALL_STATE(54)] = 2904,
  [SMALL_STATE(55)] = 2994,
  [SMALL_STATE(56)] = 3084,
  [SMALL_STATE(57)] = 3174,
  [SMALL_STATE(58)] = 3266,
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
  [SMALL_STATE(92)] = 5754,
  [SMALL_STATE(93)] = 5790,
  [SMALL_STATE(94)] = 5828,
  [SMALL_STATE(95)] = 5864,
  [SMALL_STATE(96)] = 5900,
  [SMALL_STATE(97)] = 5936,
  [SMALL_STATE(98)] = 5972,
  [SMALL_STATE(99)] = 6008,
  [SMALL_STATE(100)] = 6046,
  [SMALL_STATE(101)] = 6082,
  [SMALL_STATE(102)] = 6118,
  [SMALL_STATE(103)] = 6154,
  [SMALL_STATE(104)] = 6190,
  [SMALL_STATE(105)] = 6226,
  [SMALL_STATE(106)] = 6262,
  [SMALL_STATE(107)] = 6298,
  [SMALL_STATE(108)] = 6334,
  [SMALL_STATE(109)] = 6370,
  [SMALL_STATE(110)] = 6406,
  [SMALL_STATE(111)] = 6444,
  [SMALL_STATE(112)] = 6484,
  [SMALL_STATE(113)] = 6520,
  [SMALL_STATE(114)] = 6556,
  [SMALL_STATE(115)] = 6591,
  [SMALL_STATE(116)] = 6630,
  [SMALL_STATE(117)] = 6665,
  [SMALL_STATE(118)] = 6700,
  [SMALL_STATE(119)] = 6737,
  [SMALL_STATE(120)] = 6772,
  [SMALL_STATE(121)] = 6807,
  [SMALL_STATE(122)] = 6842,
  [SMALL_STATE(123)] = 6877,
  [SMALL_STATE(124)] = 6914,
  [SMALL_STATE(125)] = 6967,
  [SMALL_STATE(126)] = 7002,
  [SMALL_STATE(127)] = 7037,
  [SMALL_STATE(128)] = 7072,
  [SMALL_STATE(129)] = 7109,
  [SMALL_STATE(130)] = 7144,
  [SMALL_STATE(131)] = 7179,
  [SMALL_STATE(132)] = 7214,
  [SMALL_STATE(133)] = 7249,
  [SMALL_STATE(134)] = 7284,
  [SMALL_STATE(135)] = 7319,
  [SMALL_STATE(136)] = 7354,
  [SMALL_STATE(137)] = 7389,
  [SMALL_STATE(138)] = 7424,
  [SMALL_STATE(139)] = 7458,
  [SMALL_STATE(140)] = 7492,
  [SMALL_STATE(141)] = 7526,
  [SMALL_STATE(142)] = 7560,
  [SMALL_STATE(143)] = 7594,
  [SMALL_STATE(144)] = 7628,
  [SMALL_STATE(145)] = 7662,
  [SMALL_STATE(146)] = 7698,
  [SMALL_STATE(147)] = 7750,
  [SMALL_STATE(148)] = 7786,
  [SMALL_STATE(149)] = 7820,
  [SMALL_STATE(150)] = 7854,
  [SMALL_STATE(151)] = 7888,
  [SMALL_STATE(152)] = 7922,
  [SMALL_STATE(153)] = 7956,
  [SMALL_STATE(154)] = 7990,
  [SMALL_STATE(155)] = 8024,
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
  [SMALL_STATE(166)] = 8413,
  [SMALL_STATE(167)] = 8446,
  [SMALL_STATE(168)] = 8479,
  [SMALL_STATE(169)] = 8512,
  [SMALL_STATE(170)] = 8545,
  [SMALL_STATE(171)] = 8578,
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
  [SMALL_STATE(189)] = 9333,
  [SMALL_STATE(190)] = 9366,
  [SMALL_STATE(191)] = 9417,
  [SMALL_STATE(192)] = 9468,
  [SMALL_STATE(193)] = 9499,
  [SMALL_STATE(194)] = 9550,
  [SMALL_STATE(195)] = 9583,
  [SMALL_STATE(196)] = 9634,
  [SMALL_STATE(197)] = 9667,
  [SMALL_STATE(198)] = 9697,
  [SMALL_STATE(199)] = 9727,
  [SMALL_STATE(200)] = 9757,
  [SMALL_STATE(201)] = 9787,
  [SMALL_STATE(202)] = 9817,
  [SMALL_STATE(203)] = 9847,
  [SMALL_STATE(204)] = 9877,
  [SMALL_STATE(205)] = 9907,
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
  [SMALL_STATE(223)] = 10526,
  [SMALL_STATE(224)] = 10554,
  [SMALL_STATE(225)] = 10582,
  [SMALL_STATE(226)] = 10610,
  [SMALL_STATE(227)] = 10638,
  [SMALL_STATE(228)] = 10666,
  [SMALL_STATE(229)] = 10694,
  [SMALL_STATE(230)] = 10722,
  [SMALL_STATE(231)] = 10750,
  [SMALL_STATE(232)] = 10778,
  [SMALL_STATE(233)] = 10806,
  [SMALL_STATE(234)] = 10835,
  [SMALL_STATE(235)] = 10864,
  [SMALL_STATE(236)] = 10893,
  [SMALL_STATE(237)] = 10920,
  [SMALL_STATE(238)] = 10949,
  [SMALL_STATE(239)] = 10978,
  [SMALL_STATE(240)] = 11007,
  [SMALL_STATE(241)] = 11033,
  [SMALL_STATE(242)] = 11059,
  [SMALL_STATE(243)] = 11085,
  [SMALL_STATE(244)] = 11133,
  [SMALL_STATE(245)] = 11159,
  [SMALL_STATE(246)] = 11185,
  [SMALL_STATE(247)] = 11211,
  [SMALL_STATE(248)] = 11237,
  [SMALL_STATE(249)] = 11263,
  [SMALL_STATE(250)] = 11289,
  [SMALL_STATE(251)] = 11337,
  [SMALL_STATE(252)] = 11363,
  [SMALL_STATE(253)] = 11389,
  [SMALL_STATE(254)] = 11415,
  [SMALL_STATE(255)] = 11441,
  [SMALL_STATE(256)] = 11467,
  [SMALL_STATE(257)] = 11493,
  [SMALL_STATE(258)] = 11519,
  [SMALL_STATE(259)] = 11545,
  [SMALL_STATE(260)] = 11571,
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
  [SMALL_STATE(275)] = 11991,
  [SMALL_STATE(276)] = 12013,
  [SMALL_STATE(277)] = 12035,
  [SMALL_STATE(278)] = 12069,
  [SMALL_STATE(279)] = 12104,
  [SMALL_STATE(280)] = 12129,
  [SMALL_STATE(281)] = 12164,
  [SMALL_STATE(282)] = 12189,
  [SMALL_STATE(283)] = 12206,
  [SMALL_STATE(284)] = 12235,
  [SMALL_STATE(285)] = 12264,
  [SMALL_STATE(286)] = 12283,
  [SMALL_STATE(287)] = 12307,
  [SMALL_STATE(288)] = 12331,
  [SMALL_STATE(289)] = 12355,
  [SMALL_STATE(290)] = 12374,
  [SMALL_STATE(291)] = 12396,
  [SMALL_STATE(292)] = 12418,
  [SMALL_STATE(293)] = 12440,
  [SMALL_STATE(294)] = 12466,
  [SMALL_STATE(295)] = 12492,
  [SMALL_STATE(296)] = 12514,
  [SMALL_STATE(297)] = 12530,
  [SMALL_STATE(298)] = 12551,
  [SMALL_STATE(299)] = 12576,
  [SMALL_STATE(300)] = 12595,
  [SMALL_STATE(301)] = 12608,
  [SMALL_STATE(302)] = 12621,
  [SMALL_STATE(303)] = 12642,
  [SMALL_STATE(304)] = 12661,
  [SMALL_STATE(305)] = 12686,
  [SMALL_STATE(306)] = 12701,
  [SMALL_STATE(307)] = 12720,
  [SMALL_STATE(308)] = 12741,
  [SMALL_STATE(309)] = 12760,
  [SMALL_STATE(310)] = 12781,
  [SMALL_STATE(311)] = 12800,
  [SMALL_STATE(312)] = 12821,
  [SMALL_STATE(313)] = 12834,
  [SMALL_STATE(314)] = 12855,
  [SMALL_STATE(315)] = 12874,
  [SMALL_STATE(316)] = 12887,
  [SMALL_STATE(317)] = 12908,
  [SMALL_STATE(318)] = 12923,
  [SMALL_STATE(319)] = 12941,
  [SMALL_STATE(320)] = 12963,
  [SMALL_STATE(321)] = 12983,
  [SMALL_STATE(322)] = 13003,
  [SMALL_STATE(323)] = 13015,
  [SMALL_STATE(324)] = 13037,
  [SMALL_STATE(325)] = 13059,
  [SMALL_STATE(326)] = 13079,
  [SMALL_STATE(327)] = 13095,
  [SMALL_STATE(328)] = 13107,
  [SMALL_STATE(329)] = 13129,
  [SMALL_STATE(330)] = 13141,
  [SMALL_STATE(331)] = 13159,
  [SMALL_STATE(332)] = 13171,
  [SMALL_STATE(333)] = 13183,
  [SMALL_STATE(334)] = 13195,
  [SMALL_STATE(335)] = 13207,
  [SMALL_STATE(336)] = 13219,
  [SMALL_STATE(337)] = 13236,
  [SMALL_STATE(338)] = 13255,
  [SMALL_STATE(339)] = 13270,
  [SMALL_STATE(340)] = 13285,
  [SMALL_STATE(341)] = 13302,
  [SMALL_STATE(342)] = 13319,
  [SMALL_STATE(343)] = 13336,
  [SMALL_STATE(344)] = 13353,
  [SMALL_STATE(345)] = 13366,
  [SMALL_STATE(346)] = 13383,
  [SMALL_STATE(347)] = 13396,
  [SMALL_STATE(348)] = 13409,
  [SMALL_STATE(349)] = 13426,
  [SMALL_STATE(350)] = 13443,
  [SMALL_STATE(351)] = 13456,
  [SMALL_STATE(352)] = 13470,
  [SMALL_STATE(353)] = 13486,
  [SMALL_STATE(354)] = 13502,
  [SMALL_STATE(355)] = 13516,
  [SMALL_STATE(356)] = 13532,
  [SMALL_STATE(357)] = 13548,
  [SMALL_STATE(358)] = 13560,
  [SMALL_STATE(359)] = 13574,
  [SMALL_STATE(360)] = 13586,
  [SMALL_STATE(361)] = 13598,
  [SMALL_STATE(362)] = 13610,
  [SMALL_STATE(363)] = 13622,
  [SMALL_STATE(364)] = 13634,
  [SMALL_STATE(365)] = 13646,
  [SMALL_STATE(366)] = 13658,
  [SMALL_STATE(367)] = 13672,
  [SMALL_STATE(368)] = 13682,
  [SMALL_STATE(369)] = 13692,
  [SMALL_STATE(370)] = 13706,
  [SMALL_STATE(371)] = 13718,
  [SMALL_STATE(372)] = 13734,
  [SMALL_STATE(373)] = 13750,
  [SMALL_STATE(374)] = 13766,
  [SMALL_STATE(375)] = 13782,
  [SMALL_STATE(376)] = 13794,
  [SMALL_STATE(377)] = 13806,
  [SMALL_STATE(378)] = 13822,
  [SMALL_STATE(379)] = 13834,
  [SMALL_STATE(380)] = 13846,
  [SMALL_STATE(381)] = 13862,
  [SMALL_STATE(382)] = 13874,
  [SMALL_STATE(383)] = 13888,
  [SMALL_STATE(384)] = 13898,
  [SMALL_STATE(385)] = 13914,
  [SMALL_STATE(386)] = 13926,
  [SMALL_STATE(387)] = 13940,
  [SMALL_STATE(388)] = 13953,
  [SMALL_STATE(389)] = 13966,
  [SMALL_STATE(390)] = 13977,
  [SMALL_STATE(391)] = 13986,
  [SMALL_STATE(392)] = 13995,
  [SMALL_STATE(393)] = 14004,
  [SMALL_STATE(394)] = 14013,
  [SMALL_STATE(395)] = 14022,
  [SMALL_STATE(396)] = 14031,
  [SMALL_STATE(397)] = 14042,
  [SMALL_STATE(398)] = 14055,
  [SMALL_STATE(399)] = 14064,
  [SMALL_STATE(400)] = 14073,
  [SMALL_STATE(401)] = 14082,
  [SMALL_STATE(402)] = 14095,
  [SMALL_STATE(403)] = 14108,
  [SMALL_STATE(404)] = 14121,
  [SMALL_STATE(405)] = 14134,
  [SMALL_STATE(406)] = 14147,
  [SMALL_STATE(407)] = 14160,
  [SMALL_STATE(408)] = 14171,
  [SMALL_STATE(409)] = 14182,
  [SMALL_STATE(410)] = 14191,
  [SMALL_STATE(411)] = 14204,
  [SMALL_STATE(412)] = 14213,
  [SMALL_STATE(413)] = 14222,
  [SMALL_STATE(414)] = 14231,
  [SMALL_STATE(415)] = 14244,
  [SMALL_STATE(416)] = 14257,
  [SMALL_STATE(417)] = 14270,
  [SMALL_STATE(418)] = 14283,
  [SMALL_STATE(419)] = 14292,
  [SMALL_STATE(420)] = 14301,
  [SMALL_STATE(421)] = 14310,
  [SMALL_STATE(422)] = 14319,
  [SMALL_STATE(423)] = 14332,
  [SMALL_STATE(424)] = 14345,
  [SMALL_STATE(425)] = 14358,
  [SMALL_STATE(426)] = 14367,
  [SMALL_STATE(427)] = 14376,
  [SMALL_STATE(428)] = 14389,
  [SMALL_STATE(429)] = 14402,
  [SMALL_STATE(430)] = 14411,
  [SMALL_STATE(431)] = 14424,
  [SMALL_STATE(432)] = 14437,
  [SMALL_STATE(433)] = 14446,
  [SMALL_STATE(434)] = 14455,
  [SMALL_STATE(435)] = 14464,
  [SMALL_STATE(436)] = 14477,
  [SMALL_STATE(437)] = 14490,
  [SMALL_STATE(438)] = 14503,
  [SMALL_STATE(439)] = 14514,
  [SMALL_STATE(440)] = 14527,
  [SMALL_STATE(441)] = 14540,
  [SMALL_STATE(442)] = 14553,
  [SMALL_STATE(443)] = 14566,
  [SMALL_STATE(444)] = 14579,
  [SMALL_STATE(445)] = 14592,
  [SMALL_STATE(446)] = 14605,
  [SMALL_STATE(447)] = 14614,
  [SMALL_STATE(448)] = 14627,
  [SMALL_STATE(449)] = 14636,
  [SMALL_STATE(450)] = 14649,
  [SMALL_STATE(451)] = 14662,
  [SMALL_STATE(452)] = 14671,
  [SMALL_STATE(453)] = 14684,
  [SMALL_STATE(454)] = 14697,
  [SMALL_STATE(455)] = 14710,
  [SMALL_STATE(456)] = 14723,
  [SMALL_STATE(457)] = 14736,
  [SMALL_STATE(458)] = 14749,
  [SMALL_STATE(459)] = 14758,
  [SMALL_STATE(460)] = 14771,
  [SMALL_STATE(461)] = 14784,
  [SMALL_STATE(462)] = 14797,
  [SMALL_STATE(463)] = 14807,
  [SMALL_STATE(464)] = 14815,
  [SMALL_STATE(465)] = 14823,
  [SMALL_STATE(466)] = 14833,
  [SMALL_STATE(467)] = 14841,
  [SMALL_STATE(468)] = 14851,
  [SMALL_STATE(469)] = 14859,
  [SMALL_STATE(470)] = 14867,
  [SMALL_STATE(471)] = 14877,
  [SMALL_STATE(472)] = 14887,
  [SMALL_STATE(473)] = 14895,
  [SMALL_STATE(474)] = 14903,
  [SMALL_STATE(475)] = 14910,
  [SMALL_STATE(476)] = 14917,
  [SMALL_STATE(477)] = 14924,
  [SMALL_STATE(478)] = 14931,
  [SMALL_STATE(479)] = 14938,
  [SMALL_STATE(480)] = 14945,
  [SMALL_STATE(481)] = 14952,
  [SMALL_STATE(482)] = 14959,
  [SMALL_STATE(483)] = 14966,
  [SMALL_STATE(484)] = 14973,
  [SMALL_STATE(485)] = 14980,
  [SMALL_STATE(486)] = 14987,
  [SMALL_STATE(487)] = 14994,
  [SMALL_STATE(488)] = 15001,
  [SMALL_STATE(489)] = 15008,
  [SMALL_STATE(490)] = 15015,
  [SMALL_STATE(491)] = 15022,
  [SMALL_STATE(492)] = 15029,
  [SMALL_STATE(493)] = 15036,
  [SMALL_STATE(494)] = 15043,
  [SMALL_STATE(495)] = 15050,
  [SMALL_STATE(496)] = 15057,
  [SMALL_STATE(497)] = 15064,
  [SMALL_STATE(498)] = 15071,
  [SMALL_STATE(499)] = 15078,
  [SMALL_STATE(500)] = 15085,
  [SMALL_STATE(501)] = 15092,
  [SMALL_STATE(502)] = 15099,
  [SMALL_STATE(503)] = 15106,
  [SMALL_STATE(504)] = 15113,
  [SMALL_STATE(505)] = 15120,
  [SMALL_STATE(506)] = 15127,
  [SMALL_STATE(507)] = 15134,
  [SMALL_STATE(508)] = 15141,
  [SMALL_STATE(509)] = 15148,
  [SMALL_STATE(510)] = 15155,
  [SMALL_STATE(511)] = 15162,
  [SMALL_STATE(512)] = 15169,
  [SMALL_STATE(513)] = 15176,
  [SMALL_STATE(514)] = 15183,
  [SMALL_STATE(515)] = 15190,
  [SMALL_STATE(516)] = 15197,
  [SMALL_STATE(517)] = 15204,
  [SMALL_STATE(518)] = 15211,
  [SMALL_STATE(519)] = 15218,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quotation, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(95),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(112),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(106),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(106),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(7),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(86),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(28),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(183),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(103),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(85),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__btype, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__btype, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(86),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(183),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_apply, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_apply, 2),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(86),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(183),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(109),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(190),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(116),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(134),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(125),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(125),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(13),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(109),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(33),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(190),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(127),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(79),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(211),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atype, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atype, 1),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(227),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__atype, 1), SHIFT(224),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(224),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 8),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 1, .production_id = 8),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(10),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(197),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(30),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__atype, 1), SHIFT(182),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(226),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(109),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(190),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(140),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(142),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(141),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(141),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(11),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(122),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(32),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(193),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(143),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(81),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(122),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(193),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(122),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(193),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), REDUCE(sym_constraint, 1, .production_id = 8),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(164),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(171),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(166),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(166),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(6),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(158),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(31),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(191),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(170),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(80),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(158),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(191),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(158),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(191),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(192),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(181),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(212),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(218),
  [499] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(202),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(202),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(9),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(192),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(34),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(181),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(213),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(83),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(192),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(181),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(247),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(255),
  [535] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(249),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(249),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(12),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(236),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(27),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(188),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(252),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(82),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(236),
  [566] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(188),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(236),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(188),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 2, .production_id = 8),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(211),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(227),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(224),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(224),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(10),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(197),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(30),
  [620] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(182),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(226),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor, 1),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tycon, 2, .production_id = 4),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__modid, 1, .production_id = 2),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tycon, 2, .production_id = 4),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type, 2, .production_id = 4),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type, 2, .production_id = 4),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_name, 1), SHIFT(39),
  [689] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_name, 1), SHIFT(39),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tycon, 4),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tycon, 4),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parens, 3),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parens, 3),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tycon, 2),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tycon, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variable, 1),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variable, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_invisible, 2),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_invisible, 2),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tycon_arrow, 3),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tycon_arrow, 3),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 4),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_list, 4),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 3),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 3),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_list, 3),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con_tuple, 3),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con_tuple, 3),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_star, 1),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_star, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_tuple, 3),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_tuple, 3),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con_unit, 2),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con_unit, 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_promoted_literal, 2),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_promoted_literal, 2),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con_list, 2),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con_list, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 2),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__context_constraints, 2),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_literal, 1),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_literal, 1),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_infix, 1),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_infix, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 1),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [820] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(275),
  [823] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(78),
  [826] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(345),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(396),
  [832] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(278),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [837] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(197),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modid, 1, .production_id = 2),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quotation, 1),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(390),
  [851] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(280),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(267),
  [857] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(383),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(328),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fun_arrow, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fun_arrow, 2),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__context, 2),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_operator, 1),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_operator, 1),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_constructor_operator, 2),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_constructor_operator, 2),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type_operator, 2),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type_operator, 2),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tyconop, 2),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tyconop, 2),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ticked_qtycon, 3),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ticked_qtycon, 3),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ticked_qtycon, 3, .production_id = 4),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ticked_qtycon, 3, .production_id = 4),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_infix, 3, .production_id = 22),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [921] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2), SHIFT_REPEAT(211),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2),
  [926] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2), SHIFT_REPEAT(405),
  [929] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2), SHIFT_REPEAT(406),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forall, 2),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [940] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_infix, 1), REDUCE(sym_constraint, 1),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_surrogate_key, 3, .production_id = 16),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_surrogate_key, 2, .production_id = 9),
  [951] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_surrogate_key_repeat1, 2), SHIFT_REPEAT(381),
  [954] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_surrogate_key_repeat1, 2), SHIFT_REPEAT(413),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_surrogate_key_repeat1, 2),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_derives_repeat1, 2, .production_id = 18),
  [961] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_derives_repeat1, 2, .production_id = 18), SHIFT_REPEAT(367),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_derives, 2, .production_id = 14),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_with_kind, 1),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__entity_line_definition, 2),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_line_definition, 2),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3, .production_id = 17),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 3, .production_id = 5),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 2, .production_id = 5),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2, .production_id = 15),
  [992] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2), SHIFT_REPEAT(381),
  [995] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2), SHIFT_REPEAT(303),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2),
  [1000] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 1, .production_id = 1),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1008] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_of_fields_repeat1, 2), SHIFT_REPEAT(359),
  [1011] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_of_fields_repeat1, 2),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_of_fields_repeat1, 2),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [1021] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_of_fields, 1, .production_id = 11),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_of_fields, 1, .production_id = 11),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 4, .production_id = 23),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 3, .production_id = 6),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3, .production_id = 19),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 4, .production_id = 6),
  [1035] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(381),
  [1038] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(418),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2),
  [1043] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_of_fields_repeat1, 2), SHIFT_REPEAT(392),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 3, .production_id = 20),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 2),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 4, .production_id = 1),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__qualifying_module, 2),
  [1060] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__qualifying_module, 2),
  [1062] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__qualifying_module, 2), SHIFT_REPEAT(197),
  [1065] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unique_constraint_repeat1, 2), SHIFT_REPEAT(504),
  [1068] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unique_constraint_repeat1, 2), SHIFT_REPEAT(420),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unique_constraint_repeat1, 2),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_annotation, 2, .production_id = 9),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_param, 2, .production_id = 7),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inferred_type_variable, 3),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_context, 2),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantifier, 3),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_quantifiers, 3),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_fun, 3),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_or_implicit, 1), SHIFT(43),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_or_implicit, 1),
  [1106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_or_implicit, 1), SHIFT(468),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat2, 2), SHIFT_REPEAT(319),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat2, 2),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 2),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint, 1),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 1),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_derives_repeat1, 1, .production_id = 12),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint, 3),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 3),
  [1130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2), SHIFT_REPEAT(35),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2),
  [1135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_of_fields_repeat1, 1),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_of_fields_repeat1, 1),
  [1139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_other_attribute, 1),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_derives_repeat1, 1, .production_id = 13),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_surrogate_key_repeat1, 1),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 1),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unique_constraint_repeat1, 1),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kind, 1, .production_id = 21),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_with_kind, 2),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_tuple, 2),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_con_tuple_repeat1, 2), SHIFT_REPEAT(443),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_con_tuple_repeat1, 2),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__context_constraints_repeat1, 2), SHIFT_REPEAT(43),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context_constraints_repeat1, 2),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_attribute, 3, .production_id = 10),
  [1257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_foreign_constraint_repeat1, 2), SHIFT_REPEAT(459),
  [1260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_foreign_constraint_repeat1, 2),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 4),
  [1270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 5),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotated_type_variable, 2, .production_id = 7),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 4),
  [1282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_context, 2),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantified_constraint, 3),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1360] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 7, .production_id = 25),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_key, 2),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 6, .production_id = 24),
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
