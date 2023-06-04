#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 520
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 178
#define ALIAS_COUNT 5
#define TOKEN_COUNT 73
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 24

enum {
  sym__varid = 1,
  sym_is_sum_marker = 2,
  sym_comment = 3,
  anon_sym_Id = 4,
  anon_sym_Primary = 5,
  aux_sym__key_value_attribute_key_token1 = 6,
  aux_sym__key_value_attribute_value_token1 = 7,
  aux_sym__key_value_attribute_value_token2 = 8,
  sym_exclamation_mark_attribute = 9,
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
  sym__list_of_fields = 85,
  sym__entity_attribute = 86,
  sym__field_attribute = 87,
  sym__attribute = 88,
  sym__attribute_no_other = 89,
  sym__list_of_attributes_start_with_no_other = 90,
  sym_key_value_attribute = 91,
  sym__key_value_attribute_key = 92,
  sym__key_value_attribute_value = 93,
  sym_field_definition = 94,
  sym_unique_constraint = 95,
  sym_foreign_constraint = 96,
  sym_entity_derives = 97,
  sym__dot = 98,
  sym_integer = 99,
  sym__literal = 100,
  sym__carrow = 101,
  sym__arrow = 102,
  sym__colon2 = 103,
  sym_variable = 104,
  sym_constructor = 105,
  sym_constructor_operator = 106,
  sym_qualified_constructor_operator = 107,
  sym_con_unit = 108,
  sym_con_list = 109,
  sym_con_tuple = 110,
  sym_qualified_type = 111,
  sym__type_operator = 112,
  sym_qualified_type_operator = 113,
  sym__qualified_type_operator = 114,
  sym__ticked_qtycon = 115,
  sym__qtyconops = 116,
  sym__promoted_tyconop = 117,
  sym__qtyconop = 118,
  sym_tycon_arrow = 119,
  sym_type_literal = 120,
  sym__promoted_tycon = 121,
  sym__modid = 122,
  aux_sym__qualifying_module = 123,
  sym_type_variable = 124,
  sym_annotated_type_variable = 125,
  sym_inferred_type_variable = 126,
  sym__quantifier = 127,
  sym__forall_kw = 128,
  sym__forall_dot = 129,
  sym__forall = 130,
  sym_type_parens = 131,
  sym_type_list = 132,
  sym__type_tuple = 133,
  sym_type_tuple = 134,
  sym__type_promotable_literal = 135,
  sym__type_promoted_literal = 136,
  sym__type_literal = 137,
  sym_type_name = 138,
  sym_type_star = 139,
  sym__atype = 140,
  sym_type_invisible = 141,
  sym_type_apply = 142,
  sym__btype = 143,
  sym_implicit_param = 144,
  sym_type_infix = 145,
  sym__type_infix = 146,
  sym_constraint = 147,
  sym__quantified_constraint = 148,
  sym__constraint_context = 149,
  sym__constraint = 150,
  sym__context_constraints = 151,
  sym__context = 152,
  sym__type_quantifiers = 153,
  sym__type_context = 154,
  sym_modifier = 155,
  sym__fun_arrow = 156,
  sym__type_fun = 157,
  sym__type = 158,
  sym__type_or_implicit = 159,
  sym__type_annotation = 160,
  sym_kind = 161,
  sym__type_with_kind = 162,
  aux_sym_quasi_quotation_repeat1 = 163,
  aux_sym_entity_body_repeat1 = 164,
  aux_sym_entity_body_repeat2 = 165,
  aux_sym__entity_header_repeat1 = 166,
  aux_sym__list_of_fields_repeat1 = 167,
  aux_sym__list_of_attributes_start_with_no_other_repeat1 = 168,
  aux_sym_field_definition_repeat1 = 169,
  aux_sym_foreign_constraint_repeat1 = 170,
  aux_sym_entity_derives_repeat1 = 171,
  aux_sym_con_tuple_repeat1 = 172,
  aux_sym__forall_repeat1 = 173,
  aux_sym_type_list_repeat1 = 174,
  aux_sym_type_apply_repeat1 = 175,
  aux_sym_constraint_repeat1 = 176,
  aux_sym__context_constraints_repeat1 = 177,
  alias_sym_class_name = 178,
  alias_sym_fields = 179,
  alias_sym_module = 180,
  alias_sym_references = 181,
  alias_sym_type = 182,
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
  [sym_exclamation_mark_attribute] = "exclamation_mark_attribute",
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
  [sym__list_of_fields] = "_list_of_fields",
  [sym__entity_attribute] = "_entity_attribute",
  [sym__field_attribute] = "_field_attribute",
  [sym__attribute] = "_attribute",
  [sym__attribute_no_other] = "attributes",
  [sym__list_of_attributes_start_with_no_other] = "_list_of_attributes_start_with_no_other",
  [sym_key_value_attribute] = "key_value_attribute",
  [sym__key_value_attribute_key] = "_key_value_attribute_key",
  [sym__key_value_attribute_value] = "_key_value_attribute_value",
  [sym_field_definition] = "field_definition",
  [sym_unique_constraint] = "unique_constraint",
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
  [aux_sym__list_of_fields_repeat1] = "_list_of_fields_repeat1",
  [aux_sym__list_of_attributes_start_with_no_other_repeat1] = "_list_of_attributes_start_with_no_other_repeat1",
  [aux_sym_field_definition_repeat1] = "field_definition_repeat1",
  [aux_sym_foreign_constraint_repeat1] = "foreign_constraint_repeat1",
  [aux_sym_entity_derives_repeat1] = "entity_derives_repeat1",
  [aux_sym_con_tuple_repeat1] = "con_tuple_repeat1",
  [aux_sym__forall_repeat1] = "_forall_repeat1",
  [aux_sym_type_list_repeat1] = "type_list_repeat1",
  [aux_sym_type_apply_repeat1] = "type_apply_repeat1",
  [aux_sym_constraint_repeat1] = "constraint_repeat1",
  [aux_sym__context_constraints_repeat1] = "_context_constraints_repeat1",
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
  [sym_exclamation_mark_attribute] = sym_exclamation_mark_attribute,
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
  [sym__list_of_fields] = sym__list_of_fields,
  [sym__entity_attribute] = sym__entity_attribute,
  [sym__field_attribute] = sym__field_attribute,
  [sym__attribute] = sym__attribute,
  [sym__attribute_no_other] = sym__attribute_no_other,
  [sym__list_of_attributes_start_with_no_other] = sym__list_of_attributes_start_with_no_other,
  [sym_key_value_attribute] = sym_key_value_attribute,
  [sym__key_value_attribute_key] = sym__key_value_attribute_key,
  [sym__key_value_attribute_value] = sym__key_value_attribute_value,
  [sym_field_definition] = sym_field_definition,
  [sym_unique_constraint] = sym_unique_constraint,
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
  [aux_sym__list_of_fields_repeat1] = aux_sym__list_of_fields_repeat1,
  [aux_sym__list_of_attributes_start_with_no_other_repeat1] = aux_sym__list_of_attributes_start_with_no_other_repeat1,
  [aux_sym_field_definition_repeat1] = aux_sym_field_definition_repeat1,
  [aux_sym_foreign_constraint_repeat1] = aux_sym_foreign_constraint_repeat1,
  [aux_sym_entity_derives_repeat1] = aux_sym_entity_derives_repeat1,
  [aux_sym_con_tuple_repeat1] = aux_sym_con_tuple_repeat1,
  [aux_sym__forall_repeat1] = aux_sym__forall_repeat1,
  [aux_sym_type_list_repeat1] = aux_sym_type_list_repeat1,
  [aux_sym_type_apply_repeat1] = aux_sym_type_apply_repeat1,
  [aux_sym_constraint_repeat1] = aux_sym_constraint_repeat1,
  [aux_sym__context_constraints_repeat1] = aux_sym__context_constraints_repeat1,
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
  [sym_exclamation_mark_attribute] = {
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
  [sym__attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__attribute_no_other] = {
    .visible = true,
    .named = true,
  },
  [sym__list_of_attributes_start_with_no_other] = {
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
  [aux_sym__list_of_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__list_of_attributes_start_with_no_other_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_definition_repeat1] = {
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
  [15] = {.index = 9, .length = 2},
  [16] = {.index = 11, .length = 2},
  [17] = {.index = 7, .length = 2},
  [18] = {.index = 13, .length = 1},
  [19] = {.index = 14, .length = 3},
  [21] = {.index = 9, .length = 2},
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
  [17] = {
    [2] = sym__attribute_no_other,
  },
  [20] = {
    [1] = sym__attribute_no_other,
  },
  [21] = {
    [3] = sym__attribute_no_other,
  },
  [22] = {
    [5] = alias_sym_references,
  },
  [23] = {
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
  aux_sym__list_of_fields_repeat1, 2,
    aux_sym__list_of_fields_repeat1,
    alias_sym_fields,
  aux_sym__list_of_attributes_start_with_no_other_repeat1, 2,
    aux_sym__list_of_attributes_start_with_no_other_repeat1,
    sym__attribute_no_other,
  aux_sym_field_definition_repeat1, 2,
    aux_sym_field_definition_repeat1,
    sym__attribute_no_other,
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
  [44] = 40,
  [45] = 45,
  [46] = 46,
  [47] = 42,
  [48] = 46,
  [49] = 49,
  [50] = 50,
  [51] = 50,
  [52] = 45,
  [53] = 41,
  [54] = 41,
  [55] = 43,
  [56] = 40,
  [57] = 42,
  [58] = 43,
  [59] = 59,
  [60] = 40,
  [61] = 42,
  [62] = 41,
  [63] = 63,
  [64] = 40,
  [65] = 42,
  [66] = 41,
  [67] = 43,
  [68] = 42,
  [69] = 41,
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
  [93] = 93,
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
  [105] = 86,
  [106] = 106,
  [107] = 107,
  [108] = 89,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 91,
  [115] = 107,
  [116] = 116,
  [117] = 88,
  [118] = 94,
  [119] = 86,
  [120] = 90,
  [121] = 93,
  [122] = 100,
  [123] = 98,
  [124] = 96,
  [125] = 92,
  [126] = 95,
  [127] = 104,
  [128] = 103,
  [129] = 99,
  [130] = 89,
  [131] = 106,
  [132] = 97,
  [133] = 109,
  [134] = 110,
  [135] = 111,
  [136] = 112,
  [137] = 113,
  [138] = 88,
  [139] = 116,
  [140] = 99,
  [141] = 92,
  [142] = 98,
  [143] = 97,
  [144] = 112,
  [145] = 111,
  [146] = 90,
  [147] = 86,
  [148] = 110,
  [149] = 109,
  [150] = 95,
  [151] = 106,
  [152] = 89,
  [153] = 93,
  [154] = 94,
  [155] = 107,
  [156] = 113,
  [157] = 103,
  [158] = 96,
  [159] = 91,
  [160] = 104,
  [161] = 106,
  [162] = 112,
  [163] = 99,
  [164] = 91,
  [165] = 92,
  [166] = 94,
  [167] = 107,
  [168] = 93,
  [169] = 97,
  [170] = 103,
  [171] = 104,
  [172] = 113,
  [173] = 95,
  [174] = 98,
  [175] = 109,
  [176] = 96,
  [177] = 110,
  [178] = 116,
  [179] = 111,
  [180] = 116,
  [181] = 181,
  [182] = 89,
  [183] = 181,
  [184] = 181,
  [185] = 90,
  [186] = 181,
  [187] = 181,
  [188] = 181,
  [189] = 181,
  [190] = 181,
  [191] = 181,
  [192] = 181,
  [193] = 88,
  [194] = 86,
  [195] = 181,
  [196] = 181,
  [197] = 111,
  [198] = 94,
  [199] = 106,
  [200] = 97,
  [201] = 93,
  [202] = 202,
  [203] = 91,
  [204] = 204,
  [205] = 110,
  [206] = 90,
  [207] = 103,
  [208] = 109,
  [209] = 112,
  [210] = 96,
  [211] = 104,
  [212] = 107,
  [213] = 98,
  [214] = 95,
  [215] = 97,
  [216] = 113,
  [217] = 99,
  [218] = 92,
  [219] = 116,
  [220] = 100,
  [221] = 92,
  [222] = 222,
  [223] = 106,
  [224] = 107,
  [225] = 112,
  [226] = 104,
  [227] = 103,
  [228] = 111,
  [229] = 110,
  [230] = 109,
  [231] = 113,
  [232] = 99,
  [233] = 89,
  [234] = 88,
  [235] = 86,
  [236] = 90,
  [237] = 89,
  [238] = 88,
  [239] = 86,
  [240] = 113,
  [241] = 109,
  [242] = 96,
  [243] = 91,
  [244] = 94,
  [245] = 245,
  [246] = 93,
  [247] = 98,
  [248] = 95,
  [249] = 96,
  [250] = 94,
  [251] = 251,
  [252] = 93,
  [253] = 91,
  [254] = 107,
  [255] = 98,
  [256] = 97,
  [257] = 104,
  [258] = 106,
  [259] = 103,
  [260] = 110,
  [261] = 111,
  [262] = 112,
  [263] = 92,
  [264] = 99,
  [265] = 265,
  [266] = 265,
  [267] = 267,
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
  [281] = 280,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 283,
  [287] = 287,
  [288] = 288,
  [289] = 284,
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
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 97,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 89,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 329,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 86,
  [338] = 338,
  [339] = 339,
  [340] = 89,
  [341] = 88,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 86,
  [346] = 346,
  [347] = 347,
  [348] = 90,
  [349] = 349,
  [350] = 350,
  [351] = 274,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 343,
  [356] = 356,
  [357] = 357,
  [358] = 88,
  [359] = 359,
  [360] = 360,
  [361] = 94,
  [362] = 93,
  [363] = 363,
  [364] = 364,
  [365] = 98,
  [366] = 366,
  [367] = 360,
  [368] = 96,
  [369] = 93,
  [370] = 360,
  [371] = 106,
  [372] = 109,
  [373] = 110,
  [374] = 111,
  [375] = 91,
  [376] = 360,
  [377] = 94,
  [378] = 378,
  [379] = 112,
  [380] = 92,
  [381] = 91,
  [382] = 99,
  [383] = 383,
  [384] = 103,
  [385] = 113,
  [386] = 386,
  [387] = 387,
  [388] = 360,
  [389] = 389,
  [390] = 387,
  [391] = 391,
  [392] = 104,
  [393] = 107,
  [394] = 98,
  [395] = 360,
  [396] = 396,
  [397] = 360,
  [398] = 360,
  [399] = 360,
  [400] = 360,
  [401] = 96,
  [402] = 360,
  [403] = 403,
  [404] = 89,
  [405] = 97,
  [406] = 90,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 90,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 409,
  [419] = 419,
  [420] = 420,
  [421] = 415,
  [422] = 409,
  [423] = 417,
  [424] = 416,
  [425] = 425,
  [426] = 426,
  [427] = 415,
  [428] = 416,
  [429] = 417,
  [430] = 430,
  [431] = 409,
  [432] = 417,
  [433] = 416,
  [434] = 409,
  [435] = 415,
  [436] = 416,
  [437] = 437,
  [438] = 438,
  [439] = 417,
  [440] = 409,
  [441] = 417,
  [442] = 416,
  [443] = 443,
  [444] = 444,
  [445] = 415,
  [446] = 409,
  [447] = 415,
  [448] = 448,
  [449] = 449,
  [450] = 415,
  [451] = 451,
  [452] = 416,
  [453] = 417,
  [454] = 454,
  [455] = 417,
  [456] = 416,
  [457] = 409,
  [458] = 415,
  [459] = 459,
  [460] = 460,
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
  [475] = 474,
  [476] = 471,
  [477] = 473,
  [478] = 471,
  [479] = 474,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 480,
  [484] = 473,
  [485] = 485,
  [486] = 474,
  [487] = 471,
  [488] = 473,
  [489] = 489,
  [490] = 471,
  [491] = 480,
  [492] = 471,
  [493] = 474,
  [494] = 480,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 474,
  [499] = 471,
  [500] = 473,
  [501] = 480,
  [502] = 480,
  [503] = 480,
  [504] = 504,
  [505] = 505,
  [506] = 474,
  [507] = 473,
  [508] = 480,
  [509] = 471,
  [510] = 474,
  [511] = 471,
  [512] = 473,
  [513] = 513,
  [514] = 514,
  [515] = 473,
  [516] = 473,
  [517] = 474,
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

static inline bool sym_implicit_parid_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(125);
      if (sym_comment_character_set_1(lookahead)) SKIP(123)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(272);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == '*') ADVANCE(268);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == '.') ADVANCE(236);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(274);
      if (lookahead == '?') ADVANCE(122);
      if (lookahead == '@') ADVANCE(270);
      if (lookahead == 'F') ADVANCE(66);
      if (lookahead == 'I') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(62);
      if (lookahead == 'P') ADVANCE(68);
      if (lookahead == 'R') ADVANCE(39);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(267);
      if (lookahead == '}') ADVANCE(265);
      if (lookahead == 8592) ADVANCE(231);
      if (lookahead == 8594) ADVANCE(228);
      if (lookahead == 8658) ADVANCE(225);
      if (lookahead == 8704) ADVANCE(266);
      if (lookahead == 8759) ADVANCE(233);
      if (lookahead == 9733) ADVANCE(269);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (sym__varid_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '"') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '^') ADVANCE(4);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '^') ADVANCE(4);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(206);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(202);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(130);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '>') ADVANCE(229);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(232);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(235);
      if (sym__consym_character_set_1(lookahead)) ADVANCE(186);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(234);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == 'c') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == 'e') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == 'e') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == 'f') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == 's') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(226);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(29);
      if (lookahead == 'R') ADVANCE(49);
      if (lookahead == 'S') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(40);
      if (lookahead == 'U') ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == 'D') ADVANCE(46);
      if (lookahead == 'N') ADVANCE(80);
      END_STATE();
    case 26:
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(6);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 82:
      if (lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 83:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(196);
      END_STATE();
    case 84:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 85:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(215);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(218);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(195);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(196);
      END_STATE();
    case 89:
      if (sym_comment_character_set_1(lookahead)) SKIP(89)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == '*') ADVANCE(268);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '?') ADVANCE(193);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == 8594) ADVANCE(228);
      if (lookahead == 8704) ADVANCE(266);
      if (lookahead == 9733) ADVANCE(269);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(192);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(239);
      END_STATE();
    case 90:
      if (sym_comment_character_set_1(lookahead)) SKIP(90)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == '*') ADVANCE(268);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '?') ADVANCE(193);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == 8704) ADVANCE(266);
      if (lookahead == 9733) ADVANCE(269);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(192);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(239);
      END_STATE();
    case 91:
      if (sym_comment_character_set_1(lookahead)) SKIP(91)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == '*') ADVANCE(268);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '@') ADVANCE(271);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == 8594) ADVANCE(228);
      if (lookahead == 8658) ADVANCE(225);
      if (lookahead == 8759) ADVANCE(233);
      if (lookahead == 9733) ADVANCE(269);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(192);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(239);
      END_STATE();
    case 92:
      if (sym_comment_character_set_1(lookahead)) SKIP(92)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == '*') ADVANCE(268);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '@') ADVANCE(271);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == '}') ADVANCE(265);
      if (lookahead == 8594) ADVANCE(228);
      if (lookahead == 8658) ADVANCE(225);
      if (lookahead == 9733) ADVANCE(269);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(192);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(239);
      END_STATE();
    case 93:
      if (sym_comment_character_set_1(lookahead)) SKIP(93)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == '*') ADVANCE(268);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead == '@') ADVANCE(271);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == 8594) ADVANCE(228);
      if (lookahead == 8759) ADVANCE(233);
      if (lookahead == 9733) ADVANCE(269);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(192);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(239);
      END_STATE();
    case 94:
      if (sym_comment_character_set_1(lookahead)) SKIP(94)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == '*') ADVANCE(268);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '@') ADVANCE(271);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == '}') ADVANCE(265);
      if (lookahead == 8594) ADVANCE(228);
      if (lookahead == 9733) ADVANCE(269);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(192);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(239);
      END_STATE();
    case 95:
      if (sym_comment_character_set_1(lookahead)) SKIP(95)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == '*') ADVANCE(268);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '@') ADVANCE(271);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == 8658) ADVANCE(225);
      if (lookahead == 9733) ADVANCE(269);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(192);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(239);
      END_STATE();
    case 96:
      if (sym_comment_character_set_1(lookahead)) SKIP(96)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == '*') ADVANCE(268);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '@') ADVANCE(271);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == 9733) ADVANCE(269);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '+' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(192);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(239);
      END_STATE();
    case 97:
      if (sym_comment_character_set_1(lookahead)) SKIP(97)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == '*') ADVANCE(268);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == 8594) ADVANCE(228);
      if (lookahead == 8658) ADVANCE(225);
      if (lookahead == 9733) ADVANCE(269);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(239);
      END_STATE();
    case 98:
      if (sym_comment_character_set_1(lookahead)) SKIP(98)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == '*') ADVANCE(268);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '@') ADVANCE(271);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == 8594) ADVANCE(228);
      if (lookahead == 8658) ADVANCE(225);
      if (lookahead == 8759) ADVANCE(233);
      if (lookahead == 9733) ADVANCE(269);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(192);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(239);
      END_STATE();
    case 99:
      if (sym_comment_character_set_1(lookahead)) SKIP(99)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == '*') ADVANCE(268);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '@') ADVANCE(271);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == '}') ADVANCE(265);
      if (lookahead == 8594) ADVANCE(228);
      if (lookahead == 8658) ADVANCE(225);
      if (lookahead == 9733) ADVANCE(269);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(192);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(239);
      END_STATE();
    case 100:
      if (sym_comment_character_set_1(lookahead)) SKIP(100)
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == 8594) ADVANCE(228);
      if (lookahead == 8658) ADVANCE(225);
      if (lookahead == 8759) ADVANCE(233);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(192);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      END_STATE();
    case 101:
      if (sym_comment_character_set_1(lookahead)) SKIP(101)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == '*') ADVANCE(268);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead == '@') ADVANCE(271);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == 8594) ADVANCE(228);
      if (lookahead == 8759) ADVANCE(233);
      if (lookahead == 9733) ADVANCE(269);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(192);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(239);
      END_STATE();
    case 102:
      if (sym_comment_character_set_1(lookahead)) SKIP(102)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == '*') ADVANCE(268);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '@') ADVANCE(271);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == '}') ADVANCE(265);
      if (lookahead == 8594) ADVANCE(228);
      if (lookahead == 9733) ADVANCE(269);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(192);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(239);
      END_STATE();
    case 103:
      if (sym_comment_character_set_1(lookahead)) SKIP(103)
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == '}') ADVANCE(265);
      if (lookahead == 8594) ADVANCE(228);
      if (lookahead == 8658) ADVANCE(225);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(192);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      END_STATE();
    case 104:
      if (sym_comment_character_set_1(lookahead)) SKIP(104)
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == ':') ADVANCE(189);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == 8594) ADVANCE(228);
      if (lookahead == 8759) ADVANCE(233);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(192);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      END_STATE();
    case 105:
      if (sym_comment_character_set_1(lookahead)) SKIP(105)
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '%') ADVANCE(273);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == '}') ADVANCE(265);
      if (lookahead == 8594) ADVANCE(228);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(192);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      END_STATE();
    case 106:
      if (sym_comment_character_set_1(lookahead)) SKIP(106)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == '*') ADVANCE(268);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '@') ADVANCE(271);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == 8658) ADVANCE(225);
      if (lookahead == 9733) ADVANCE(269);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(192);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(239);
      END_STATE();
    case 107:
      if (sym_comment_character_set_1(lookahead)) SKIP(107)
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'F') ADVANCE(253);
      if (lookahead == 'I') ADVANCE(246);
      if (lookahead == 'P') ADVANCE(254);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(141);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(239);
      END_STATE();
    case 108:
      if (sym_comment_character_set_1(lookahead)) SKIP(108)
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == 8658) ADVANCE(225);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(192);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      END_STATE();
    case 109:
      if (sym_comment_character_set_1(lookahead)) SKIP(109)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == '*') ADVANCE(268);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '0') ADVANCE(211);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '@') ADVANCE(271);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == 9733) ADVANCE(269);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(192);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(239);
      END_STATE();
    case 110:
      if (sym_comment_character_set_1(lookahead)) SKIP(110)
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == 8594) ADVANCE(228);
      if (sym__tyconsym_character_set_1(lookahead)) ADVANCE(192);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(239);
      END_STATE();
    case 111:
      if (sym_comment_character_set_1(lookahead)) SKIP(111)
      if (lookahead == '#') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == ':') ADVANCE(191);
      if (lookahead == '`') ADVANCE(243);
      if (sym__tyconsym_character_set_1(lookahead)) ADVANCE(192);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      END_STATE();
    case 112:
      if (sym_comment_character_set_1(lookahead)) SKIP(112)
      if (lookahead == '!') ADVANCE(119);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 113:
      if (sym_comment_character_set_1(lookahead)) SKIP(113)
      if (lookahead == '!') ADVANCE(119);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'R') ADVANCE(13);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(21);
      if (sym__varid_character_set_4(lookahead)) ADVANCE(239);
      END_STATE();
    case 114:
      if (sym_comment_character_set_1(lookahead)) SKIP(114)
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(65);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == '}') ADVANCE(265);
      if (lookahead == 8594) ADVANCE(228);
      if (lookahead == 8759) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 115:
      if (sym_comment_character_set_1(lookahead)) SKIP(115)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 117:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 121:
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 122:
      if (sym_implicit_parid_character_set_1(lookahead)) ADVANCE(244);
      END_STATE();
    case 123:
      if (eof) ADVANCE(125);
      if (sym_comment_character_set_1(lookahead)) SKIP(123)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(272);
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == '*') ADVANCE(268);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(274);
      if (lookahead == '?') ADVANCE(122);
      if (lookahead == '@') ADVANCE(270);
      if (lookahead == 'F') ADVANCE(66);
      if (lookahead == 'I') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(62);
      if (lookahead == 'P') ADVANCE(68);
      if (lookahead == 'R') ADVANCE(39);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(267);
      if (lookahead == '}') ADVANCE(265);
      if (lookahead == 8592) ADVANCE(231);
      if (lookahead == 8594) ADVANCE(228);
      if (lookahead == 8658) ADVANCE(225);
      if (lookahead == 8704) ADVANCE(266);
      if (lookahead == 8759) ADVANCE(233);
      if (lookahead == 9733) ADVANCE(269);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (sym__varid_character_set_1(lookahead)) ADVANCE(239);
      END_STATE();
    case 124:
      if (eof) ADVANCE(125);
      if (sym_comment_character_set_1(lookahead)) SKIP(124)
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '%') ADVANCE(272);
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == '(') ADVANCE(241);
      if (lookahead == ')') ADVANCE(242);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == ',') ADVANCE(183);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(184);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == '`') ADVANCE(243);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '}') ADVANCE(265);
      if (lookahead == 8594) ADVANCE(228);
      if (lookahead == 8658) ADVANCE(225);
      if (lookahead == 8759) ADVANCE(233);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(259);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(239);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_is_sum_marker);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_comment);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_comment);
      if (sym_implicit_parid_character_set_1(lookahead)) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_Id);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_Primary);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_Primary);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__key_value_attribute_key_token1);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__key_value_attribute_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__key_value_attribute_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(137);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__key_value_attribute_value_token2);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_exclamation_mark_attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_other_attribute);
      if (lookahead == '=') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__field_strictness_prefix);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_cascade_action);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_cascade_action);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'C') ADVANCE(148);
      if (lookahead == 'R') ADVANCE(161);
      if (lookahead == 'S') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'D') ADVANCE(155);
      if (lookahead == 'U') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'D') ADVANCE(158);
      if (lookahead == 'N') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'a') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'a') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'a') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'a') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'c') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'c') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'd') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'd') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'f') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'i') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'l') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'l') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'l') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'l') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'p') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'r') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 's') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 's') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 't') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 't') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 't') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 't') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'u') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'u') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_Foreign);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_Foreign);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_References);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_References);
      if (lookahead == '=') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(192);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__consym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '>') ADVANCE(230);
      if (sym__tyconsym_character_set_2(lookahead)) ADVANCE(192);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == '-') ADVANCE(127);
      if (sym__tyconsym_character_set_2(lookahead)) ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == ':') ADVANCE(235);
      if (sym__consym_character_set_1(lookahead)) ADVANCE(186);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == '>') ADVANCE(227);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__tyconsym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(186);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__tyconsym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__tyconsym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(192);
      if (sym_implicit_parid_character_set_1(lookahead)) ADVANCE(244);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(194);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == '\'') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(198);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '\'') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(200);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '\'') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(209);
      if (lookahead == '#') ADVANCE(207);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(209);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(204);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__integer_literal);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(85);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(86);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(213);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(210);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__binary_literal);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__binary_literal);
      if (lookahead == '#') ADVANCE(216);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__binary_literal);
      if (lookahead == '#') ADVANCE(214);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__octal_literal);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '#') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '#') ADVANCE(217);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__hex_literal);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(220);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(192);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(192);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(186);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__immediate_dot);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__varid);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'') ADVANCE(239);
      if (lookahead == '=') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(237);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '>') ADVANCE(229);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_implicit_parid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__conid);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (lookahead == 'g') ADVANCE(252);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (lookahead == 'm') ADVANCE(258);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (lookahead == 'r') ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(259);
      if (lookahead == 'y') ADVANCE(134);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(6);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_AT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(192);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(192);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(226);
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
  [1] = {.lex_state = 124},
  [2] = {.lex_state = 89},
  [3] = {.lex_state = 89},
  [4] = {.lex_state = 89},
  [5] = {.lex_state = 89},
  [6] = {.lex_state = 89},
  [7] = {.lex_state = 89},
  [8] = {.lex_state = 89},
  [9] = {.lex_state = 89},
  [10] = {.lex_state = 89},
  [11] = {.lex_state = 89},
  [12] = {.lex_state = 89},
  [13] = {.lex_state = 89},
  [14] = {.lex_state = 89},
  [15] = {.lex_state = 90},
  [16] = {.lex_state = 90},
  [17] = {.lex_state = 90},
  [18] = {.lex_state = 90},
  [19] = {.lex_state = 90},
  [20] = {.lex_state = 90},
  [21] = {.lex_state = 90},
  [22] = {.lex_state = 90},
  [23] = {.lex_state = 90},
  [24] = {.lex_state = 90},
  [25] = {.lex_state = 90},
  [26] = {.lex_state = 90},
  [27] = {.lex_state = 89},
  [28] = {.lex_state = 89},
  [29] = {.lex_state = 89},
  [30] = {.lex_state = 89},
  [31] = {.lex_state = 89},
  [32] = {.lex_state = 89},
  [33] = {.lex_state = 89},
  [34] = {.lex_state = 89},
  [35] = {.lex_state = 89},
  [36] = {.lex_state = 89},
  [37] = {.lex_state = 89},
  [38] = {.lex_state = 89},
  [39] = {.lex_state = 89},
  [40] = {.lex_state = 91},
  [41] = {.lex_state = 91},
  [42] = {.lex_state = 91},
  [43] = {.lex_state = 91},
  [44] = {.lex_state = 92},
  [45] = {.lex_state = 89},
  [46] = {.lex_state = 89},
  [47] = {.lex_state = 92},
  [48] = {.lex_state = 89},
  [49] = {.lex_state = 89},
  [50] = {.lex_state = 89},
  [51] = {.lex_state = 89},
  [52] = {.lex_state = 89},
  [53] = {.lex_state = 92},
  [54] = {.lex_state = 93},
  [55] = {.lex_state = 92},
  [56] = {.lex_state = 93},
  [57] = {.lex_state = 93},
  [58] = {.lex_state = 91},
  [59] = {.lex_state = 89},
  [60] = {.lex_state = 94},
  [61] = {.lex_state = 94},
  [62] = {.lex_state = 94},
  [63] = {.lex_state = 89},
  [64] = {.lex_state = 95},
  [65] = {.lex_state = 95},
  [66] = {.lex_state = 95},
  [67] = {.lex_state = 95},
  [68] = {.lex_state = 96},
  [69] = {.lex_state = 96},
  [70] = {.lex_state = 96},
  [71] = {.lex_state = 97},
  [72] = {.lex_state = 97},
  [73] = {.lex_state = 89},
  [74] = {.lex_state = 89},
  [75] = {.lex_state = 89},
  [76] = {.lex_state = 89},
  [77] = {.lex_state = 89},
  [78] = {.lex_state = 89},
  [79] = {.lex_state = 89},
  [80] = {.lex_state = 89},
  [81] = {.lex_state = 89},
  [82] = {.lex_state = 89},
  [83] = {.lex_state = 89},
  [84] = {.lex_state = 89},
  [85] = {.lex_state = 89},
  [86] = {.lex_state = 98},
  [87] = {.lex_state = 91},
  [88] = {.lex_state = 98},
  [89] = {.lex_state = 98},
  [90] = {.lex_state = 98},
  [91] = {.lex_state = 91},
  [92] = {.lex_state = 91},
  [93] = {.lex_state = 91},
  [94] = {.lex_state = 91},
  [95] = {.lex_state = 91},
  [96] = {.lex_state = 91},
  [97] = {.lex_state = 91},
  [98] = {.lex_state = 91},
  [99] = {.lex_state = 91},
  [100] = {.lex_state = 91},
  [101] = {.lex_state = 99},
  [102] = {.lex_state = 99},
  [103] = {.lex_state = 91},
  [104] = {.lex_state = 91},
  [105] = {.lex_state = 99},
  [106] = {.lex_state = 91},
  [107] = {.lex_state = 91},
  [108] = {.lex_state = 99},
  [109] = {.lex_state = 91},
  [110] = {.lex_state = 91},
  [111] = {.lex_state = 91},
  [112] = {.lex_state = 91},
  [113] = {.lex_state = 91},
  [114] = {.lex_state = 92},
  [115] = {.lex_state = 92},
  [116] = {.lex_state = 100},
  [117] = {.lex_state = 101},
  [118] = {.lex_state = 92},
  [119] = {.lex_state = 101},
  [120] = {.lex_state = 101},
  [121] = {.lex_state = 92},
  [122] = {.lex_state = 92},
  [123] = {.lex_state = 92},
  [124] = {.lex_state = 92},
  [125] = {.lex_state = 92},
  [126] = {.lex_state = 92},
  [127] = {.lex_state = 92},
  [128] = {.lex_state = 92},
  [129] = {.lex_state = 92},
  [130] = {.lex_state = 101},
  [131] = {.lex_state = 92},
  [132] = {.lex_state = 92},
  [133] = {.lex_state = 92},
  [134] = {.lex_state = 92},
  [135] = {.lex_state = 92},
  [136] = {.lex_state = 92},
  [137] = {.lex_state = 92},
  [138] = {.lex_state = 102},
  [139] = {.lex_state = 103},
  [140] = {.lex_state = 93},
  [141] = {.lex_state = 93},
  [142] = {.lex_state = 93},
  [143] = {.lex_state = 93},
  [144] = {.lex_state = 93},
  [145] = {.lex_state = 93},
  [146] = {.lex_state = 102},
  [147] = {.lex_state = 102},
  [148] = {.lex_state = 93},
  [149] = {.lex_state = 93},
  [150] = {.lex_state = 93},
  [151] = {.lex_state = 93},
  [152] = {.lex_state = 102},
  [153] = {.lex_state = 93},
  [154] = {.lex_state = 93},
  [155] = {.lex_state = 93},
  [156] = {.lex_state = 93},
  [157] = {.lex_state = 93},
  [158] = {.lex_state = 93},
  [159] = {.lex_state = 93},
  [160] = {.lex_state = 93},
  [161] = {.lex_state = 94},
  [162] = {.lex_state = 94},
  [163] = {.lex_state = 94},
  [164] = {.lex_state = 94},
  [165] = {.lex_state = 94},
  [166] = {.lex_state = 94},
  [167] = {.lex_state = 94},
  [168] = {.lex_state = 94},
  [169] = {.lex_state = 94},
  [170] = {.lex_state = 94},
  [171] = {.lex_state = 94},
  [172] = {.lex_state = 94},
  [173] = {.lex_state = 94},
  [174] = {.lex_state = 94},
  [175] = {.lex_state = 94},
  [176] = {.lex_state = 94},
  [177] = {.lex_state = 94},
  [178] = {.lex_state = 104},
  [179] = {.lex_state = 94},
  [180] = {.lex_state = 105},
  [181] = {.lex_state = 89},
  [182] = {.lex_state = 106},
  [183] = {.lex_state = 89},
  [184] = {.lex_state = 89},
  [185] = {.lex_state = 106},
  [186] = {.lex_state = 89},
  [187] = {.lex_state = 89},
  [188] = {.lex_state = 89},
  [189] = {.lex_state = 89},
  [190] = {.lex_state = 89},
  [191] = {.lex_state = 89},
  [192] = {.lex_state = 89},
  [193] = {.lex_state = 106},
  [194] = {.lex_state = 106},
  [195] = {.lex_state = 89},
  [196] = {.lex_state = 89},
  [197] = {.lex_state = 95},
  [198] = {.lex_state = 95},
  [199] = {.lex_state = 95},
  [200] = {.lex_state = 97},
  [201] = {.lex_state = 95},
  [202] = {.lex_state = 107, .external_lex_state = 2},
  [203] = {.lex_state = 95},
  [204] = {.lex_state = 107},
  [205] = {.lex_state = 95},
  [206] = {.lex_state = 97},
  [207] = {.lex_state = 95},
  [208] = {.lex_state = 95},
  [209] = {.lex_state = 95},
  [210] = {.lex_state = 95},
  [211] = {.lex_state = 95},
  [212] = {.lex_state = 95},
  [213] = {.lex_state = 95},
  [214] = {.lex_state = 95},
  [215] = {.lex_state = 95},
  [216] = {.lex_state = 95},
  [217] = {.lex_state = 95},
  [218] = {.lex_state = 95},
  [219] = {.lex_state = 108},
  [220] = {.lex_state = 95},
  [221] = {.lex_state = 97},
  [222] = {.lex_state = 107, .external_lex_state = 2},
  [223] = {.lex_state = 97},
  [224] = {.lex_state = 97},
  [225] = {.lex_state = 97},
  [226] = {.lex_state = 97},
  [227] = {.lex_state = 97},
  [228] = {.lex_state = 97},
  [229] = {.lex_state = 97},
  [230] = {.lex_state = 97},
  [231] = {.lex_state = 97},
  [232] = {.lex_state = 97},
  [233] = {.lex_state = 109},
  [234] = {.lex_state = 109},
  [235] = {.lex_state = 109},
  [236] = {.lex_state = 109},
  [237] = {.lex_state = 97},
  [238] = {.lex_state = 97},
  [239] = {.lex_state = 97},
  [240] = {.lex_state = 96},
  [241] = {.lex_state = 96},
  [242] = {.lex_state = 97},
  [243] = {.lex_state = 96},
  [244] = {.lex_state = 96},
  [245] = {.lex_state = 124},
  [246] = {.lex_state = 96},
  [247] = {.lex_state = 96},
  [248] = {.lex_state = 96},
  [249] = {.lex_state = 96},
  [250] = {.lex_state = 97},
  [251] = {.lex_state = 124},
  [252] = {.lex_state = 97},
  [253] = {.lex_state = 97},
  [254] = {.lex_state = 96},
  [255] = {.lex_state = 97},
  [256] = {.lex_state = 96},
  [257] = {.lex_state = 96},
  [258] = {.lex_state = 96},
  [259] = {.lex_state = 96},
  [260] = {.lex_state = 96},
  [261] = {.lex_state = 96},
  [262] = {.lex_state = 96},
  [263] = {.lex_state = 96},
  [264] = {.lex_state = 96},
  [265] = {.lex_state = 110},
  [266] = {.lex_state = 110},
  [267] = {.lex_state = 111},
  [268] = {.lex_state = 89},
  [269] = {.lex_state = 89},
  [270] = {.lex_state = 89},
  [271] = {.lex_state = 89},
  [272] = {.lex_state = 89},
  [273] = {.lex_state = 89},
  [274] = {.lex_state = 89},
  [275] = {.lex_state = 111},
  [276] = {.lex_state = 89},
  [277] = {.lex_state = 89},
  [278] = {.lex_state = 124},
  [279] = {.lex_state = 124},
  [280] = {.lex_state = 111},
  [281] = {.lex_state = 111},
  [282] = {.lex_state = 124},
  [283] = {.lex_state = 124},
  [284] = {.lex_state = 124},
  [285] = {.lex_state = 124},
  [286] = {.lex_state = 124},
  [287] = {.lex_state = 124},
  [288] = {.lex_state = 112, .external_lex_state = 3},
  [289] = {.lex_state = 124},
  [290] = {.lex_state = 112, .external_lex_state = 3},
  [291] = {.lex_state = 112, .external_lex_state = 3},
  [292] = {.lex_state = 112, .external_lex_state = 3},
  [293] = {.lex_state = 112, .external_lex_state = 3},
  [294] = {.lex_state = 112, .external_lex_state = 3},
  [295] = {.lex_state = 112, .external_lex_state = 3},
  [296] = {.lex_state = 112, .external_lex_state = 3},
  [297] = {.lex_state = 112, .external_lex_state = 3},
  [298] = {.lex_state = 112, .external_lex_state = 3},
  [299] = {.lex_state = 113, .external_lex_state = 3},
  [300] = {.lex_state = 113, .external_lex_state = 3},
  [301] = {.lex_state = 112, .external_lex_state = 3},
  [302] = {.lex_state = 113, .external_lex_state = 3},
  [303] = {.lex_state = 124},
  [304] = {.lex_state = 124, .external_lex_state = 2},
  [305] = {.lex_state = 112, .external_lex_state = 3},
  [306] = {.lex_state = 113, .external_lex_state = 3},
  [307] = {.lex_state = 112, .external_lex_state = 3},
  [308] = {.lex_state = 107, .external_lex_state = 2},
  [309] = {.lex_state = 124, .external_lex_state = 2},
  [310] = {.lex_state = 124, .external_lex_state = 4},
  [311] = {.lex_state = 112, .external_lex_state = 3},
  [312] = {.lex_state = 124, .external_lex_state = 4},
  [313] = {.lex_state = 112, .external_lex_state = 3},
  [314] = {.lex_state = 111},
  [315] = {.lex_state = 111},
  [316] = {.lex_state = 112, .external_lex_state = 3},
  [317] = {.lex_state = 112, .external_lex_state = 3},
  [318] = {.lex_state = 124, .external_lex_state = 4},
  [319] = {.lex_state = 112, .external_lex_state = 3},
  [320] = {.lex_state = 114},
  [321] = {.lex_state = 124, .external_lex_state = 4},
  [322] = {.lex_state = 124, .external_lex_state = 4},
  [323] = {.lex_state = 124},
  [324] = {.lex_state = 124},
  [325] = {.lex_state = 111},
  [326] = {.lex_state = 114},
  [327] = {.lex_state = 124},
  [328] = {.lex_state = 124},
  [329] = {.lex_state = 124},
  [330] = {.lex_state = 124},
  [331] = {.lex_state = 124},
  [332] = {.lex_state = 124},
  [333] = {.lex_state = 124},
  [334] = {.lex_state = 124},
  [335] = {.lex_state = 124},
  [336] = {.lex_state = 124},
  [337] = {.lex_state = 112, .external_lex_state = 3},
  [338] = {.lex_state = 124},
  [339] = {.lex_state = 124},
  [340] = {.lex_state = 112, .external_lex_state = 3},
  [341] = {.lex_state = 112, .external_lex_state = 3},
  [342] = {.lex_state = 124},
  [343] = {.lex_state = 124},
  [344] = {.lex_state = 113, .external_lex_state = 3},
  [345] = {.lex_state = 114},
  [346] = {.lex_state = 124},
  [347] = {.lex_state = 124},
  [348] = {.lex_state = 112, .external_lex_state = 3},
  [349] = {.lex_state = 115},
  [350] = {.lex_state = 124},
  [351] = {.lex_state = 113, .external_lex_state = 3},
  [352] = {.lex_state = 124},
  [353] = {.lex_state = 124},
  [354] = {.lex_state = 124},
  [355] = {.lex_state = 124},
  [356] = {.lex_state = 124},
  [357] = {.lex_state = 124},
  [358] = {.lex_state = 114},
  [359] = {.lex_state = 124},
  [360] = {.lex_state = 124},
  [361] = {.lex_state = 112, .external_lex_state = 3},
  [362] = {.lex_state = 114},
  [363] = {.lex_state = 124, .external_lex_state = 2},
  [364] = {.lex_state = 124, .external_lex_state = 2},
  [365] = {.lex_state = 114},
  [366] = {.lex_state = 124, .external_lex_state = 2},
  [367] = {.lex_state = 124},
  [368] = {.lex_state = 114},
  [369] = {.lex_state = 112, .external_lex_state = 3},
  [370] = {.lex_state = 124},
  [371] = {.lex_state = 112, .external_lex_state = 3},
  [372] = {.lex_state = 112, .external_lex_state = 3},
  [373] = {.lex_state = 112, .external_lex_state = 3},
  [374] = {.lex_state = 112, .external_lex_state = 3},
  [375] = {.lex_state = 112, .external_lex_state = 3},
  [376] = {.lex_state = 124},
  [377] = {.lex_state = 114},
  [378] = {.lex_state = 124},
  [379] = {.lex_state = 112, .external_lex_state = 3},
  [380] = {.lex_state = 112, .external_lex_state = 3},
  [381] = {.lex_state = 114},
  [382] = {.lex_state = 112, .external_lex_state = 3},
  [383] = {.lex_state = 124},
  [384] = {.lex_state = 112, .external_lex_state = 3},
  [385] = {.lex_state = 112, .external_lex_state = 3},
  [386] = {.lex_state = 112, .external_lex_state = 3},
  [387] = {.lex_state = 124},
  [388] = {.lex_state = 124},
  [389] = {.lex_state = 124, .external_lex_state = 2},
  [390] = {.lex_state = 124},
  [391] = {.lex_state = 112, .external_lex_state = 3},
  [392] = {.lex_state = 112, .external_lex_state = 3},
  [393] = {.lex_state = 112, .external_lex_state = 3},
  [394] = {.lex_state = 112, .external_lex_state = 3},
  [395] = {.lex_state = 124},
  [396] = {.lex_state = 124},
  [397] = {.lex_state = 124},
  [398] = {.lex_state = 124},
  [399] = {.lex_state = 124},
  [400] = {.lex_state = 124},
  [401] = {.lex_state = 112, .external_lex_state = 3},
  [402] = {.lex_state = 124},
  [403] = {.lex_state = 112, .external_lex_state = 3},
  [404] = {.lex_state = 124, .external_lex_state = 2},
  [405] = {.lex_state = 112, .external_lex_state = 3},
  [406] = {.lex_state = 124, .external_lex_state = 2},
  [407] = {.lex_state = 124},
  [408] = {.lex_state = 112, .external_lex_state = 3},
  [409] = {.lex_state = 124},
  [410] = {.lex_state = 124},
  [411] = {.lex_state = 114},
  [412] = {.lex_state = 124},
  [413] = {.lex_state = 124},
  [414] = {.lex_state = 124},
  [415] = {.lex_state = 124},
  [416] = {.lex_state = 124},
  [417] = {.lex_state = 124},
  [418] = {.lex_state = 124},
  [419] = {.lex_state = 124},
  [420] = {.lex_state = 114},
  [421] = {.lex_state = 124},
  [422] = {.lex_state = 124},
  [423] = {.lex_state = 124},
  [424] = {.lex_state = 124},
  [425] = {.lex_state = 114},
  [426] = {.lex_state = 124, .external_lex_state = 2},
  [427] = {.lex_state = 124},
  [428] = {.lex_state = 124},
  [429] = {.lex_state = 124},
  [430] = {.lex_state = 124},
  [431] = {.lex_state = 124},
  [432] = {.lex_state = 124},
  [433] = {.lex_state = 124},
  [434] = {.lex_state = 124},
  [435] = {.lex_state = 124},
  [436] = {.lex_state = 124},
  [437] = {.lex_state = 124},
  [438] = {.lex_state = 111},
  [439] = {.lex_state = 124},
  [440] = {.lex_state = 124},
  [441] = {.lex_state = 124},
  [442] = {.lex_state = 124},
  [443] = {.lex_state = 124},
  [444] = {.lex_state = 124},
  [445] = {.lex_state = 124},
  [446] = {.lex_state = 124},
  [447] = {.lex_state = 124},
  [448] = {.lex_state = 124},
  [449] = {.lex_state = 124},
  [450] = {.lex_state = 124},
  [451] = {.lex_state = 114},
  [452] = {.lex_state = 124},
  [453] = {.lex_state = 124},
  [454] = {.lex_state = 124},
  [455] = {.lex_state = 124},
  [456] = {.lex_state = 124},
  [457] = {.lex_state = 124},
  [458] = {.lex_state = 124},
  [459] = {.lex_state = 124},
  [460] = {.lex_state = 124},
  [461] = {.lex_state = 124},
  [462] = {.lex_state = 124},
  [463] = {.lex_state = 124},
  [464] = {.lex_state = 124},
  [465] = {.lex_state = 124},
  [466] = {.lex_state = 124},
  [467] = {.lex_state = 124},
  [468] = {.lex_state = 124},
  [469] = {.lex_state = 124},
  [470] = {.lex_state = 124},
  [471] = {.lex_state = 124},
  [472] = {.lex_state = 124, .external_lex_state = 3},
  [473] = {.lex_state = 124},
  [474] = {.lex_state = 124},
  [475] = {.lex_state = 124},
  [476] = {.lex_state = 124},
  [477] = {.lex_state = 124},
  [478] = {.lex_state = 124},
  [479] = {.lex_state = 124},
  [480] = {.lex_state = 124},
  [481] = {.lex_state = 124, .external_lex_state = 2},
  [482] = {.lex_state = 124, .external_lex_state = 3},
  [483] = {.lex_state = 124},
  [484] = {.lex_state = 124},
  [485] = {.lex_state = 124},
  [486] = {.lex_state = 124},
  [487] = {.lex_state = 124},
  [488] = {.lex_state = 124},
  [489] = {.lex_state = 124},
  [490] = {.lex_state = 124},
  [491] = {.lex_state = 124},
  [492] = {.lex_state = 124},
  [493] = {.lex_state = 124},
  [494] = {.lex_state = 124},
  [495] = {.lex_state = 124},
  [496] = {.lex_state = 124, .external_lex_state = 3},
  [497] = {.lex_state = 124},
  [498] = {.lex_state = 124},
  [499] = {.lex_state = 124},
  [500] = {.lex_state = 124},
  [501] = {.lex_state = 124},
  [502] = {.lex_state = 124},
  [503] = {.lex_state = 124},
  [504] = {.lex_state = 124, .external_lex_state = 3},
  [505] = {.lex_state = 124, .external_lex_state = 3},
  [506] = {.lex_state = 124},
  [507] = {.lex_state = 124},
  [508] = {.lex_state = 124},
  [509] = {.lex_state = 124},
  [510] = {.lex_state = 124},
  [511] = {.lex_state = 124},
  [512] = {.lex_state = 124},
  [513] = {.lex_state = 124},
  [514] = {.lex_state = 124, .external_lex_state = 3},
  [515] = {.lex_state = 124},
  [516] = {.lex_state = 124},
  [517] = {.lex_state = 124},
  [518] = {.lex_state = 124, .external_lex_state = 3},
  [519] = {.lex_state = 124, .external_lex_state = 3},
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
    [sym_quasi_quotation] = STATE(513),
    [sym_entity_definition] = STATE(245),
    [sym__entity_name] = STATE(291),
    [sym__entity_header] = STATE(312),
    [sym_constructor] = STATE(337),
    [sym_qualified_type] = STATE(401),
    [sym_tycon_arrow] = STATE(401),
    [sym__promoted_tycon] = STATE(401),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(400),
    [sym_type_variable] = STATE(401),
    [sym_type_name] = STATE(291),
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
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(479),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(478),
    [sym_qualified_constructor_operator] = STATE(478),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(478),
    [sym_qualified_type_operator] = STATE(478),
    [sym__qualified_type_operator] = STATE(478),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(87),
    [sym_annotated_type_variable] = STATE(478),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(483),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(58),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(346),
    [sym_type_infix] = STATE(289),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(359),
    [sym__quantified_constraint] = STATE(430),
    [sym__constraint_context] = STATE(430),
    [sym__constraint] = STATE(430),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(37),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(440),
    [aux_sym_con_tuple_repeat1] = STATE(441),
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
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(498),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(499),
    [sym_qualified_constructor_operator] = STATE(499),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(499),
    [sym_qualified_type_operator] = STATE(499),
    [sym__qualified_type_operator] = STATE(499),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(87),
    [sym_annotated_type_variable] = STATE(499),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(491),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(58),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(346),
    [sym_type_infix] = STATE(289),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(359),
    [sym__quantified_constraint] = STATE(454),
    [sym__constraint_context] = STATE(454),
    [sym__constraint] = STATE(454),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(37),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(434),
    [aux_sym_con_tuple_repeat1] = STATE(429),
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
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(517),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(471),
    [sym_qualified_constructor_operator] = STATE(471),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(471),
    [sym_qualified_type_operator] = STATE(471),
    [sym__qualified_type_operator] = STATE(471),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(87),
    [sym_annotated_type_variable] = STATE(471),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(494),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(58),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(346),
    [sym_type_infix] = STATE(289),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(359),
    [sym__quantified_constraint] = STATE(430),
    [sym__constraint_context] = STATE(430),
    [sym__constraint] = STATE(430),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(37),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(431),
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
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(479),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(478),
    [sym_qualified_constructor_operator] = STATE(478),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(478),
    [sym_qualified_type_operator] = STATE(478),
    [sym__qualified_type_operator] = STATE(478),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(87),
    [sym_annotated_type_variable] = STATE(478),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(350),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(483),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(58),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(346),
    [sym_type_infix] = STATE(289),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(359),
    [sym__quantified_constraint] = STATE(454),
    [sym__constraint_context] = STATE(454),
    [sym__constraint] = STATE(454),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(37),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(440),
    [aux_sym_con_tuple_repeat1] = STATE(441),
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
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(493),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(492),
    [sym_qualified_constructor_operator] = STATE(492),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(492),
    [sym_qualified_type_operator] = STATE(492),
    [sym__qualified_type_operator] = STATE(492),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(87),
    [sym_annotated_type_variable] = STATE(492),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(355),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(501),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(303),
    [sym_type_infix] = STATE(284),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(419),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(48),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(409),
    [aux_sym_con_tuple_repeat1] = STATE(455),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(73),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(75),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(83),
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
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(506),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(490),
    [sym_qualified_constructor_operator] = STATE(490),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(490),
    [sym_qualified_type_operator] = STATE(490),
    [sym__qualified_type_operator] = STATE(490),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(87),
    [sym_annotated_type_variable] = STATE(490),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(355),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(501),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(303),
    [sym_type_infix] = STATE(284),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(419),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(48),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(409),
    [aux_sym_con_tuple_repeat1] = STATE(455),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(73),
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
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(83),
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
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(475),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(476),
    [sym_qualified_constructor_operator] = STATE(476),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(476),
    [sym_qualified_type_operator] = STATE(476),
    [sym__qualified_type_operator] = STATE(476),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(87),
    [sym_annotated_type_variable] = STATE(476),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(355),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(494),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(303),
    [sym_type_infix] = STATE(284),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(419),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(48),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(431),
    [aux_sym_con_tuple_repeat1] = STATE(432),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(63),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(91),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(93),
    [anon_sym_DASH_GT] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(97),
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
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(498),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(499),
    [sym_qualified_constructor_operator] = STATE(499),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(499),
    [sym_qualified_type_operator] = STATE(499),
    [sym__qualified_type_operator] = STATE(499),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(87),
    [sym_annotated_type_variable] = STATE(499),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(355),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(503),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(303),
    [sym_type_infix] = STATE(284),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(419),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(48),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(418),
    [aux_sym_con_tuple_repeat1] = STATE(417),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(99),
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
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(101),
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
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(474),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(509),
    [sym_qualified_constructor_operator] = STATE(509),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(509),
    [sym_qualified_type_operator] = STATE(509),
    [sym__qualified_type_operator] = STATE(509),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(87),
    [sym_annotated_type_variable] = STATE(509),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(355),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(502),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(303),
    [sym_type_infix] = STATE(284),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(419),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(48),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(422),
    [aux_sym_con_tuple_repeat1] = STATE(423),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(103),
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
    [anon_sym_LPAREN] = ACTIONS(81),
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
  [11] = {
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(510),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(511),
    [sym_qualified_constructor_operator] = STATE(511),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(511),
    [sym_qualified_type_operator] = STATE(511),
    [sym__qualified_type_operator] = STATE(511),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(87),
    [sym_annotated_type_variable] = STATE(511),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(355),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(491),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(303),
    [sym_type_infix] = STATE(284),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(419),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(48),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(434),
    [aux_sym_con_tuple_repeat1] = STATE(429),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(53),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(113),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(115),
    [anon_sym_DASH_GT] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(119),
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
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(486),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(487),
    [sym_qualified_constructor_operator] = STATE(487),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(487),
    [sym_qualified_type_operator] = STATE(487),
    [sym__qualified_type_operator] = STATE(487),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(87),
    [sym_annotated_type_variable] = STATE(487),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(355),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(483),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(303),
    [sym_type_infix] = STATE(284),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(419),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(48),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(440),
    [aux_sym_con_tuple_repeat1] = STATE(441),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(19),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(121),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(123),
    [anon_sym_DASH_GT] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(127),
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
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(517),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(471),
    [sym_qualified_constructor_operator] = STATE(471),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(471),
    [sym_qualified_type_operator] = STATE(471),
    [sym__qualified_type_operator] = STATE(471),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(87),
    [sym_annotated_type_variable] = STATE(471),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(355),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(508),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(303),
    [sym_type_infix] = STATE(284),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(419),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(48),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(457),
    [aux_sym_con_tuple_repeat1] = STATE(453),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(129),
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
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(131),
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
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym__arrow] = STATE(479),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(478),
    [sym_qualified_constructor_operator] = STATE(478),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(478),
    [sym_qualified_type_operator] = STATE(478),
    [sym__qualified_type_operator] = STATE(478),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(87),
    [sym_annotated_type_variable] = STATE(478),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(355),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(480),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(303),
    [sym_type_infix] = STATE(284),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(419),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(48),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(446),
    [aux_sym_con_tuple_repeat1] = STATE(439),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(133),
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
    [anon_sym_LPAREN] = ACTIONS(81),
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
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(507),
    [sym_qualified_constructor_operator] = STATE(507),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(507),
    [sym_qualified_type_operator] = STATE(507),
    [sym__qualified_type_operator] = STATE(507),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(355),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(494),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(303),
    [sym_type_infix] = STATE(284),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(419),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(48),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(462),
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
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(97),
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
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(500),
    [sym_qualified_constructor_operator] = STATE(500),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(500),
    [sym_qualified_type_operator] = STATE(500),
    [sym__qualified_type_operator] = STATE(500),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(355),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(491),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(303),
    [sym_type_infix] = STATE(284),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(419),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(48),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(462),
    [aux_sym_con_tuple_repeat1] = STATE(429),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(53),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(139),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(119),
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
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(477),
    [sym_qualified_constructor_operator] = STATE(477),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(477),
    [sym_qualified_type_operator] = STATE(477),
    [sym__qualified_type_operator] = STATE(477),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(355),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(494),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(303),
    [sym_type_infix] = STATE(284),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(419),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(48),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(462),
    [aux_sym_con_tuple_repeat1] = STATE(432),
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
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(97),
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
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(500),
    [sym_qualified_constructor_operator] = STATE(500),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(500),
    [sym_qualified_type_operator] = STATE(500),
    [sym__qualified_type_operator] = STATE(500),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(355),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(503),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(303),
    [sym_type_infix] = STATE(284),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(419),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(48),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(462),
    [aux_sym_con_tuple_repeat1] = STATE(417),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(99),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(139),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(101),
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
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(507),
    [sym_qualified_constructor_operator] = STATE(507),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(507),
    [sym_qualified_type_operator] = STATE(507),
    [sym__qualified_type_operator] = STATE(507),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(355),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(508),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(303),
    [sym_type_infix] = STATE(284),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(419),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(48),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(462),
    [aux_sym_con_tuple_repeat1] = STATE(453),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(129),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(137),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(131),
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
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(512),
    [sym_qualified_constructor_operator] = STATE(512),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(512),
    [sym_qualified_type_operator] = STATE(512),
    [sym__qualified_type_operator] = STATE(512),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(355),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(491),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(303),
    [sym_type_infix] = STATE(284),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(419),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(48),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(462),
    [aux_sym_con_tuple_repeat1] = STATE(429),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(53),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(143),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(119),
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
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(515),
    [sym_qualified_constructor_operator] = STATE(515),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(515),
    [sym_qualified_type_operator] = STATE(515),
    [sym__qualified_type_operator] = STATE(515),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(355),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(501),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(303),
    [sym_type_infix] = STATE(284),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(419),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(48),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(462),
    [aux_sym_con_tuple_repeat1] = STATE(455),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(73),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(145),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(83),
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
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(488),
    [sym_qualified_constructor_operator] = STATE(488),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(488),
    [sym_qualified_type_operator] = STATE(488),
    [sym__qualified_type_operator] = STATE(488),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(355),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(483),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(303),
    [sym_type_infix] = STATE(284),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(419),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(48),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(462),
    [aux_sym_con_tuple_repeat1] = STATE(441),
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
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(127),
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
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(516),
    [sym_qualified_constructor_operator] = STATE(516),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(516),
    [sym_qualified_type_operator] = STATE(516),
    [sym__qualified_type_operator] = STATE(516),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(355),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(502),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(303),
    [sym_type_infix] = STATE(284),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(419),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(48),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(462),
    [aux_sym_con_tuple_repeat1] = STATE(423),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(103),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(149),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(81),
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
  [24] = {
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(484),
    [sym_qualified_constructor_operator] = STATE(484),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(484),
    [sym_qualified_type_operator] = STATE(484),
    [sym__qualified_type_operator] = STATE(484),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(355),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(501),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(303),
    [sym_type_infix] = STATE(284),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(419),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(48),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(462),
    [aux_sym_con_tuple_repeat1] = STATE(455),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(73),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(151),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(83),
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
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(473),
    [sym_qualified_constructor_operator] = STATE(473),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(473),
    [sym_qualified_type_operator] = STATE(473),
    [sym__qualified_type_operator] = STATE(473),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(355),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(480),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(303),
    [sym_type_infix] = STATE(284),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(419),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(48),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(462),
    [aux_sym_con_tuple_repeat1] = STATE(439),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(133),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(153),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(81),
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
  [26] = {
    [sym_integer] = STATE(157),
    [sym__literal] = STATE(157),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(473),
    [sym_qualified_constructor_operator] = STATE(473),
    [sym_con_unit] = STATE(157),
    [sym_con_list] = STATE(157),
    [sym_con_tuple] = STATE(157),
    [sym_qualified_type] = STATE(96),
    [sym__type_operator] = STATE(473),
    [sym_qualified_type_operator] = STATE(473),
    [sym__qualified_type_operator] = STATE(473),
    [sym_tycon_arrow] = STATE(96),
    [sym_type_literal] = STATE(57),
    [sym__promoted_tycon] = STATE(96),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(314),
    [sym_type_variable] = STATE(96),
    [sym__forall_kw] = STATE(323),
    [sym__forall] = STATE(355),
    [sym_type_parens] = STATE(57),
    [sym_type_list] = STATE(57),
    [sym__type_tuple] = STATE(483),
    [sym_type_tuple] = STATE(57),
    [sym__type_promotable_literal] = STATE(57),
    [sym__type_promoted_literal] = STATE(57),
    [sym__type_literal] = STATE(57),
    [sym_type_name] = STATE(43),
    [sym_type_star] = STATE(57),
    [sym__atype] = STATE(57),
    [sym_type_apply] = STATE(178),
    [sym__btype] = STATE(178),
    [sym_implicit_param] = STATE(303),
    [sym_type_infix] = STATE(284),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(419),
    [sym__context_constraints] = STATE(419),
    [sym__context] = STATE(48),
    [sym__type_quantifiers] = STATE(303),
    [sym__type_context] = STATE(303),
    [sym__type_fun] = STATE(303),
    [sym__type] = STATE(303),
    [sym__type_or_implicit] = STATE(303),
    [sym__type_with_kind] = STATE(462),
    [aux_sym_con_tuple_repeat1] = STATE(441),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(19),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(153),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(127),
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
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym_type_name,
    STATE(48), 1,
      sym__context,
    STATE(86), 1,
      sym_constructor,
    STATE(283), 1,
      sym__type_infix,
    STATE(284), 1,
      sym_type_infix,
    STATE(323), 1,
      sym__forall_kw,
    STATE(355), 1,
      sym__forall,
    STATE(395), 1,
      aux_sym__qualifying_module,
    STATE(416), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(178), 2,
      sym_type_apply,
      sym__btype,
    STATE(419), 2,
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
    STATE(157), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(303), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(57), 9,
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
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym_type_name,
    STATE(48), 1,
      sym__context,
    STATE(86), 1,
      sym_constructor,
    STATE(283), 1,
      sym__type_infix,
    STATE(284), 1,
      sym_type_infix,
    STATE(323), 1,
      sym__forall_kw,
    STATE(355), 1,
      sym__forall,
    STATE(395), 1,
      aux_sym__qualifying_module,
    STATE(442), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(178), 2,
      sym_type_apply,
      sym__btype,
    STATE(419), 2,
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
    STATE(157), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(303), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(57), 9,
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
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym_type_name,
    STATE(48), 1,
      sym__context,
    STATE(86), 1,
      sym_constructor,
    STATE(283), 1,
      sym__type_infix,
    STATE(284), 1,
      sym_type_infix,
    STATE(323), 1,
      sym__forall_kw,
    STATE(355), 1,
      sym__forall,
    STATE(395), 1,
      aux_sym__qualifying_module,
    STATE(433), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(178), 2,
      sym_type_apply,
      sym__btype,
    STATE(419), 2,
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
    STATE(157), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(303), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(57), 9,
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
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym_type_name,
    STATE(48), 1,
      sym__context,
    STATE(86), 1,
      sym_constructor,
    STATE(283), 1,
      sym__type_infix,
    STATE(284), 1,
      sym_type_infix,
    STATE(323), 1,
      sym__forall_kw,
    STATE(355), 1,
      sym__forall,
    STATE(395), 1,
      aux_sym__qualifying_module,
    STATE(428), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(178), 2,
      sym_type_apply,
      sym__btype,
    STATE(419), 2,
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
    STATE(157), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(303), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(57), 9,
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
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym_type_name,
    STATE(48), 1,
      sym__context,
    STATE(86), 1,
      sym_constructor,
    STATE(283), 1,
      sym__type_infix,
    STATE(284), 1,
      sym_type_infix,
    STATE(323), 1,
      sym__forall_kw,
    STATE(355), 1,
      sym__forall,
    STATE(395), 1,
      aux_sym__qualifying_module,
    STATE(456), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(178), 2,
      sym_type_apply,
      sym__btype,
    STATE(419), 2,
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
    STATE(157), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(303), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(57), 9,
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
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym_type_name,
    STATE(48), 1,
      sym__context,
    STATE(86), 1,
      sym_constructor,
    STATE(283), 1,
      sym__type_infix,
    STATE(284), 1,
      sym_type_infix,
    STATE(323), 1,
      sym__forall_kw,
    STATE(355), 1,
      sym__forall,
    STATE(395), 1,
      aux_sym__qualifying_module,
    STATE(452), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(178), 2,
      sym_type_apply,
      sym__btype,
    STATE(419), 2,
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
    STATE(157), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(303), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(57), 9,
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
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym_type_name,
    STATE(48), 1,
      sym__context,
    STATE(86), 1,
      sym_constructor,
    STATE(283), 1,
      sym__type_infix,
    STATE(284), 1,
      sym_type_infix,
    STATE(323), 1,
      sym__forall_kw,
    STATE(355), 1,
      sym__forall,
    STATE(395), 1,
      aux_sym__qualifying_module,
    STATE(424), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(178), 2,
      sym_type_apply,
      sym__btype,
    STATE(419), 2,
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
    STATE(157), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(303), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(57), 9,
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
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      sym_type_name,
    STATE(48), 1,
      sym__context,
    STATE(86), 1,
      sym_constructor,
    STATE(283), 1,
      sym__type_infix,
    STATE(284), 1,
      sym_type_infix,
    STATE(323), 1,
      sym__forall_kw,
    STATE(355), 1,
      sym__forall,
    STATE(395), 1,
      aux_sym__qualifying_module,
    STATE(436), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(178), 2,
      sym_type_apply,
      sym__btype,
    STATE(419), 2,
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
    STATE(157), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(303), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(57), 9,
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
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_type_name,
    STATE(48), 1,
      sym__context,
    STATE(86), 1,
      sym_constructor,
    STATE(283), 1,
      sym__type_infix,
    STATE(284), 1,
      sym_type_infix,
    STATE(323), 1,
      sym__forall_kw,
    STATE(355), 1,
      sym__forall,
    STATE(395), 1,
      aux_sym__qualifying_module,
    STATE(412), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(178), 2,
      sym_type_apply,
      sym__btype,
    STATE(419), 2,
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
    STATE(157), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(303), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(57), 9,
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
    STATE(37), 1,
      sym__context,
    STATE(58), 1,
      sym_type_name,
    STATE(86), 1,
      sym_constructor,
    STATE(283), 1,
      sym__type_infix,
    STATE(289), 1,
      sym_type_infix,
    STATE(323), 1,
      sym__forall_kw,
    STATE(350), 1,
      sym__forall,
    STATE(359), 1,
      sym_constraint,
    STATE(395), 1,
      aux_sym__qualifying_module,
    STATE(419), 1,
      sym__context_constraints,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(178), 2,
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
    STATE(466), 3,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(335), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(157), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(57), 9,
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
    STATE(37), 1,
      sym__context,
    STATE(58), 1,
      sym_type_name,
    STATE(86), 1,
      sym_constructor,
    STATE(283), 1,
      sym__type_infix,
    STATE(289), 1,
      sym_type_infix,
    STATE(323), 1,
      sym__forall_kw,
    STATE(350), 1,
      sym__forall,
    STATE(359), 1,
      sym_constraint,
    STATE(395), 1,
      aux_sym__qualifying_module,
    STATE(419), 1,
      sym__context_constraints,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(178), 2,
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
    STATE(157), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(57), 9,
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
    STATE(46), 1,
      sym__context,
    STATE(55), 1,
      sym_type_name,
    STATE(105), 1,
      sym_constructor,
    STATE(284), 1,
      sym_type_infix,
    STATE(286), 1,
      sym__type_infix,
    STATE(323), 1,
      sym__forall_kw,
    STATE(343), 1,
      sym__forall,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(419), 2,
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
    STATE(124), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(170), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(324), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(61), 9,
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
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_type_name,
    STATE(48), 1,
      sym__context,
    STATE(86), 1,
      sym_constructor,
    STATE(283), 1,
      sym__type_infix,
    STATE(284), 1,
      sym_type_infix,
    STATE(323), 1,
      sym__forall_kw,
    STATE(355), 1,
      sym__forall,
    STATE(395), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(178), 2,
      sym_type_apply,
      sym__btype,
    STATE(419), 2,
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
    STATE(157), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(324), 6,
      sym_implicit_param,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
      sym__type_or_implicit,
    STATE(57), 9,
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
    STATE(86), 1,
      sym_constructor,
    STATE(395), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
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
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(103), 5,
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
    STATE(86), 1,
      sym_constructor,
    STATE(395), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
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
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(103), 5,
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
    STATE(86), 1,
      sym_constructor,
    STATE(395), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
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
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(103), 5,
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
    STATE(41), 12,
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
  [1787] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym__varid,
    ACTIONS(271), 1,
      sym__integer_literal,
    ACTIONS(277), 1,
      anon_sym_,
    ACTIONS(279), 1,
      anon_sym_EQ_GT,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      sym__conid,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_SQUOTE,
    STATE(239), 1,
      sym_constructor,
    STATE(367), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(293), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(268), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(274), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(242), 4,
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
    ACTIONS(264), 6,
      sym_comma,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
    ACTIONS(266), 6,
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
  [1880] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym__varid,
    ACTIONS(302), 1,
      sym__integer_literal,
    ACTIONS(308), 1,
      anon_sym_LPAREN,
    ACTIONS(311), 1,
      sym__conid,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
    ACTIONS(317), 1,
      anon_sym_SQUOTE,
    ACTIONS(323), 1,
      anon_sym_AT,
    STATE(105), 1,
      sym_constructor,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(320), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(299), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(305), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(196), 4,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(124), 4,
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
    ACTIONS(194), 8,
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
  [1971] = 27,
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
    STATE(46), 1,
      sym__context,
    STATE(55), 1,
      sym_type_name,
    STATE(105), 1,
      sym_constructor,
    STATE(284), 1,
      sym_type_infix,
    STATE(286), 1,
      sym__type_infix,
    STATE(323), 1,
      sym__forall_kw,
    STATE(343), 1,
      sym__forall,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(419), 2,
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
    STATE(124), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(335), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(170), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(61), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2078] = 27,
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
    STATE(46), 1,
      sym__context,
    STATE(55), 1,
      sym_type_name,
    STATE(105), 1,
      sym_constructor,
    STATE(284), 1,
      sym_type_infix,
    STATE(286), 1,
      sym__type_infix,
    STATE(323), 1,
      sym__forall_kw,
    STATE(343), 1,
      sym__forall,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(419), 2,
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
    STATE(124), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(334), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(170), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(61), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2185] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      sym__varid,
    ACTIONS(330), 1,
      sym__integer_literal,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(336), 1,
      sym__conid,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    ACTIONS(346), 1,
      anon_sym_AT,
    STATE(105), 1,
      sym_constructor,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(328), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(332), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(253), 4,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(124), 4,
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
    ACTIONS(251), 8,
      sym_comma,
      sym__consym,
      anon_sym_,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(53), 12,
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
  [2276] = 27,
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
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_type_name,
    STATE(48), 1,
      sym__context,
    STATE(86), 1,
      sym_constructor,
    STATE(283), 1,
      sym__type_infix,
    STATE(284), 1,
      sym_type_infix,
    STATE(323), 1,
      sym__forall_kw,
    STATE(355), 1,
      sym__forall,
    STATE(395), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(178), 2,
      sym_type_apply,
      sym__btype,
    STATE(419), 2,
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
    STATE(157), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(57), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2383] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    ACTIONS(181), 1,
      sym_implicit_parid,
    ACTIONS(348), 1,
      sym__varid,
    ACTIONS(352), 1,
      sym__integer_literal,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      sym__conid,
    ACTIONS(360), 1,
      anon_sym_LBRACK,
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
    STATE(59), 1,
      sym__context,
    STATE(67), 1,
      sym_type_name,
    STATE(194), 1,
      sym_constructor,
    STATE(323), 1,
      sym__forall_kw,
    STATE(356), 1,
      sym__forall,
    STATE(359), 1,
      sym_constraint,
    STATE(378), 1,
      sym_type_infix,
    STATE(402), 1,
      aux_sym__qualifying_module,
    STATE(419), 1,
      sym__context_constraints,
    STATE(461), 1,
      sym__modid,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(267), 2,
      sym_type_apply,
      sym__btype,
    ACTIONS(350), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(354), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(210), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(464), 4,
      sym_implicit_param,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(259), 5,
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
  [2492] = 27,
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
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_type_name,
    STATE(48), 1,
      sym__context,
    STATE(86), 1,
      sym_constructor,
    STATE(283), 1,
      sym__type_infix,
    STATE(284), 1,
      sym_type_infix,
    STATE(323), 1,
      sym__forall_kw,
    STATE(355), 1,
      sym__forall,
    STATE(395), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(178), 2,
      sym_type_apply,
      sym__btype,
    STATE(419), 2,
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
    STATE(336), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(157), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(57), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2599] = 27,
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
    STATE(46), 1,
      sym__context,
    STATE(55), 1,
      sym_type_name,
    STATE(105), 1,
      sym_constructor,
    STATE(284), 1,
      sym_type_infix,
    STATE(286), 1,
      sym__type_infix,
    STATE(323), 1,
      sym__forall_kw,
    STATE(343), 1,
      sym__forall,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(419), 2,
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
    STATE(124), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(336), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(170), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(61), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2706] = 27,
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
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_type_name,
    STATE(48), 1,
      sym__context,
    STATE(86), 1,
      sym_constructor,
    STATE(283), 1,
      sym__type_infix,
    STATE(284), 1,
      sym_type_infix,
    STATE(323), 1,
      sym__forall_kw,
    STATE(355), 1,
      sym__forall,
    STATE(395), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(178), 2,
      sym_type_apply,
      sym__btype,
    STATE(419), 2,
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
    STATE(335), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(157), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(57), 9,
      sym_type_literal,
      sym_type_parens,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
      sym__type_promoted_literal,
      sym__type_literal,
      sym_type_star,
      sym__atype,
  [2813] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      sym__varid,
    ACTIONS(330), 1,
      sym__integer_literal,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      sym__conid,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    STATE(105), 1,
      sym_constructor,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(328), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(332), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(229), 4,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(124), 4,
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
    STATE(119), 1,
      sym_constructor,
    STATE(398), 1,
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
    STATE(158), 4,
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
    STATE(157), 5,
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
  [2994] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym__varid,
    ACTIONS(271), 1,
      sym__integer_literal,
    ACTIONS(277), 1,
      anon_sym_,
    ACTIONS(279), 1,
      anon_sym_EQ_GT,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      sym__conid,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_SQUOTE,
    STATE(239), 1,
      sym_constructor,
    STATE(367), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(293), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(268), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(274), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(266), 4,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_PERCENT,
    STATE(242), 4,
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
    ACTIONS(264), 7,
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
  [3086] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym__varid,
    ACTIONS(390), 1,
      sym__integer_literal,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      sym__conid,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(405), 1,
      anon_sym_SQUOTE,
    ACTIONS(411), 1,
      anon_sym_AT,
    STATE(119), 1,
      sym_constructor,
    STATE(398), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(387), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(393), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(158), 4,
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
    STATE(157), 5,
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
  [3176] = 19,
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
    ACTIONS(414), 1,
      sym__conid,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    STATE(119), 1,
      sym_constructor,
    STATE(398), 1,
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
    STATE(158), 4,
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
    STATE(157), 5,
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
  [3266] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym__varid,
    ACTIONS(271), 1,
      sym__integer_literal,
    ACTIONS(277), 1,
      anon_sym_,
    ACTIONS(279), 1,
      anon_sym_EQ_GT,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      sym__conid,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_SQUOTE,
    STATE(239), 1,
      sym_constructor,
    STATE(367), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(293), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(420), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(264), 3,
      anon_sym_2,
      anon_sym_4,
      anon_sym_BQUOTE,
    ACTIONS(268), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(274), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(242), 4,
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
    ACTIONS(266), 6,
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
  [3360] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    ACTIONS(348), 1,
      sym__varid,
    ACTIONS(352), 1,
      sym__integer_literal,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      sym__conid,
    ACTIONS(360), 1,
      anon_sym_LBRACK,
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
    STATE(59), 1,
      sym__context,
    STATE(67), 1,
      sym_type_name,
    STATE(194), 1,
      sym_constructor,
    STATE(323), 1,
      sym__forall_kw,
    STATE(356), 1,
      sym__forall,
    STATE(359), 1,
      sym_constraint,
    STATE(378), 1,
      sym_type_infix,
    STATE(402), 1,
      aux_sym__qualifying_module,
    STATE(419), 1,
      sym__context_constraints,
    STATE(461), 1,
      sym__modid,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(267), 2,
      sym_type_apply,
      sym__btype,
    ACTIONS(350), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(354), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(470), 3,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(210), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(259), 5,
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
  [3465] = 19,
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
    STATE(147), 1,
      sym_constructor,
    STATE(397), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
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
    STATE(176), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(170), 5,
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
  [3554] = 19,
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
    STATE(147), 1,
      sym_constructor,
    STATE(397), 1,
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
    ACTIONS(253), 3,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(176), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(170), 5,
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
  [3643] = 19,
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
    STATE(147), 1,
      sym_constructor,
    STATE(397), 1,
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
    ACTIONS(229), 3,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(176), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(170), 5,
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
  [3732] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_forall,
    ACTIONS(49), 1,
      anon_sym_5,
    ACTIONS(348), 1,
      sym__varid,
    ACTIONS(352), 1,
      sym__integer_literal,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      sym__conid,
    ACTIONS(360), 1,
      anon_sym_LBRACK,
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
    STATE(59), 1,
      sym__context,
    STATE(67), 1,
      sym_type_name,
    STATE(194), 1,
      sym_constructor,
    STATE(323), 1,
      sym__forall_kw,
    STATE(356), 1,
      sym__forall,
    STATE(359), 1,
      sym_constraint,
    STATE(378), 1,
      sym_type_infix,
    STATE(402), 1,
      aux_sym__qualifying_module,
    STATE(419), 1,
      sym__context_constraints,
    STATE(461), 1,
      sym__modid,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(267), 2,
      sym_type_apply,
      sym__btype,
    ACTIONS(350), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(354), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(466), 3,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(210), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(259), 5,
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
    STATE(194), 1,
      sym_constructor,
    STATE(402), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
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
    STATE(210), 4,
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
    STATE(207), 5,
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
    STATE(194), 1,
      sym_constructor,
    STATE(402), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
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
    STATE(210), 4,
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
    STATE(207), 5,
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
    STATE(194), 1,
      sym_constructor,
    STATE(402), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
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
    STATE(210), 4,
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
    STATE(207), 5,
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
  [4095] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym__varid,
    ACTIONS(271), 1,
      sym__integer_literal,
    ACTIONS(279), 1,
      anon_sym_EQ_GT,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(284), 1,
      sym__conid,
    ACTIONS(287), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_SQUOTE,
    STATE(239), 1,
      sym_constructor,
    STATE(367), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(264), 2,
      sym__consym,
      anon_sym_BQUOTE,
    ACTIONS(266), 2,
      sym__tyconsym,
      anon_sym_AT,
    ACTIONS(293), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(268), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(274), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(277), 3,
      sym_comma,
      anon_sym_,
      anon_sym_RPAREN,
    STATE(242), 4,
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
  [4182] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym__tyconsym,
    ACTIONS(352), 1,
      sym__integer_literal,
    ACTIONS(360), 1,
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
    STATE(235), 1,
      sym_constructor,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(251), 2,
      sym__consym,
      anon_sym_BQUOTE,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(350), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(354), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(249), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(259), 5,
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
    ACTIONS(229), 1,
      sym__tyconsym,
    ACTIONS(352), 1,
      sym__integer_literal,
    ACTIONS(360), 1,
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
    STATE(235), 1,
      sym_constructor,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(227), 2,
      sym__consym,
      anon_sym_BQUOTE,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(350), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(354), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(249), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(259), 5,
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
    STATE(235), 1,
      sym_constructor,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
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
    STATE(259), 5,
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
    STATE(239), 1,
      sym_constructor,
    STATE(367), 1,
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
    STATE(242), 4,
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
    STATE(239), 1,
      sym_constructor,
    STATE(367), 1,
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
    STATE(242), 4,
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
  [4582] = 18,
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
    ACTIONS(626), 1,
      anon_sym_SQUOTE,
    STATE(86), 1,
      sym_constructor,
    STATE(395), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(247), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(116), 2,
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
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(103), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(42), 10,
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
    ACTIONS(326), 1,
      sym__varid,
    ACTIONS(330), 1,
      sym__integer_literal,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(628), 1,
      anon_sym_SQUOTE,
    STATE(105), 1,
      sym_constructor,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(139), 2,
      sym_type_apply,
      sym__btype,
    STATE(282), 2,
      sym_type_infix,
      sym__type_infix,
    ACTIONS(328), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(332), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(124), 4,
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
  [4738] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym__conid,
    ACTIONS(501), 1,
      sym__varid,
    ACTIONS(505), 1,
      sym__integer_literal,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_LBRACK,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    STATE(194), 1,
      sym_constructor,
    STATE(402), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(519), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(219), 2,
      sym_type_apply,
      sym__btype,
    STATE(282), 2,
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
    STATE(210), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(207), 5,
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
    STATE(337), 1,
      sym_constructor,
    STATE(400), 1,
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
    STATE(401), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(384), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(316), 11,
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
    STATE(337), 1,
      sym_constructor,
    STATE(400), 1,
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
    STATE(401), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(384), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(292), 11,
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
    STATE(337), 1,
      sym_constructor,
    STATE(400), 1,
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
    STATE(401), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(384), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(288), 11,
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
    ACTIONS(352), 1,
      sym__integer_literal,
    ACTIONS(360), 1,
      anon_sym_LBRACK,
    ACTIONS(529), 1,
      sym__varid,
    ACTIONS(531), 1,
      anon_sym_LPAREN,
    ACTIONS(646), 1,
      sym__conid,
    ACTIONS(648), 1,
      anon_sym_SQUOTE,
    STATE(235), 1,
      sym_constructor,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(364), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(350), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(354), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(249), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(259), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(248), 10,
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
    ACTIONS(650), 1,
      sym__conid,
    ACTIONS(652), 1,
      anon_sym_SQUOTE,
    STATE(147), 1,
      sym_constructor,
    STATE(397), 1,
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
    STATE(176), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(170), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(173), 10,
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
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(326), 1,
      sym__varid,
    ACTIONS(330), 1,
      sym__integer_literal,
    ACTIONS(334), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(628), 1,
      anon_sym_SQUOTE,
    STATE(105), 1,
      sym_constructor,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(344), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(328), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(332), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(124), 4,
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
    STATE(126), 10,
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
    ACTIONS(358), 1,
      sym__conid,
    ACTIONS(501), 1,
      sym__varid,
    ACTIONS(505), 1,
      sym__integer_literal,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(514), 1,
      anon_sym_LBRACK,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    STATE(194), 1,
      sym_constructor,
    STATE(402), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
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
    STATE(210), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(207), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(214), 10,
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
    ACTIONS(626), 1,
      anon_sym_SQUOTE,
    STATE(86), 1,
      sym_constructor,
    STATE(395), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
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
    STATE(96), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(103), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(95), 10,
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
    ACTIONS(612), 1,
      sym__integer_literal,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(620), 1,
      anon_sym_LBRACK,
    ACTIONS(654), 1,
      sym__varid,
    ACTIONS(656), 1,
      anon_sym_LPAREN,
    ACTIONS(658), 1,
      anon_sym_SQUOTE,
    STATE(345), 1,
      sym_constructor,
    STATE(376), 1,
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
    STATE(368), 4,
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
  [5449] = 16,
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
    ACTIONS(660), 1,
      sym__conid,
    ACTIONS(662), 1,
      anon_sym_SQUOTE,
    STATE(119), 1,
      sym_constructor,
    STATE(398), 1,
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
    STATE(158), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(157), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(150), 10,
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
  [5519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
    ACTIONS(668), 9,
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
  [5558] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_4,
    ACTIONS(677), 1,
      anon_sym_COLON_COLON,
    STATE(38), 1,
      sym__colon2,
    STATE(465), 1,
      sym__type_annotation,
    ACTIONS(672), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(670), 17,
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
  [5603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
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
  [5642] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
    ACTIONS(686), 9,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(684), 19,
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
  [5681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 10,
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
  [5826] = 3,
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
  [5862] = 3,
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
  [5898] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
    ACTIONS(670), 19,
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
  [5934] = 3,
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
  [5970] = 3,
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
  [6006] = 3,
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
  [6042] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_,
    ACTIONS(730), 1,
      anon_sym_EQ_GT,
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
  [6082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
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
  [6120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 8,
      anon_sym_DOT,
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
  [6156] = 3,
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
  [6192] = 3,
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
  [6228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
    ACTIONS(668), 7,
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
  [6266] = 3,
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
  [6338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
    ACTIONS(686), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(684), 20,
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
  [6556] = 3,
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
  [6591] = 3,
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
  [6626] = 12,
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
    STATE(315), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(495), 1,
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
  [6679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
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
  [6716] = 3,
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
  [6751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
    ACTIONS(668), 8,
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
  [6788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 9,
      anon_sym_DOT,
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
  [6823] = 3,
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
  [6858] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_,
    ACTIONS(730), 1,
      anon_sym_EQ_GT,
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
  [6897] = 3,
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
  [6932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 7,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(670), 20,
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
  [6967] = 3,
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
  [7002] = 3,
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
  [7037] = 3,
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
  [7072] = 3,
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
  [7107] = 3,
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
  [7142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
    ACTIONS(686), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(684), 18,
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
  [7179] = 3,
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
  [7284] = 3,
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
  [7319] = 3,
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
  [7354] = 3,
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
  [7389] = 3,
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
  [7424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
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
  [7460] = 12,
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
    STATE(315), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(495), 1,
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
  [7512] = 3,
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
  [7546] = 3,
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
  [7580] = 3,
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
  [7614] = 3,
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
  [7648] = 3,
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
  [7682] = 3,
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
  [7716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 7,
      anon_sym_DOT,
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
  [7750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
    ACTIONS(668), 6,
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
  [7888] = 3,
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
  [7922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
    ACTIONS(686), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(684), 19,
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
  [7958] = 3,
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
  [7992] = 3,
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
  [8026] = 3,
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
  [8060] = 3,
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
  [8094] = 3,
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
  [8128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 8,
      sym__consym,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(670), 18,
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
  [8196] = 3,
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
  [8296] = 3,
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
  [8329] = 3,
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
  [8362] = 3,
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
  [8395] = 3,
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
  [8428] = 3,
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
  [8461] = 3,
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
  [8494] = 3,
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
  [8527] = 3,
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
  [8560] = 3,
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
  [8593] = 3,
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
  [8626] = 3,
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
  [8659] = 3,
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
  [8692] = 3,
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
  [8725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 6,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_DASH_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
      anon_sym_PERCENT,
    ACTIONS(670), 19,
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
  [8758] = 3,
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
  [8791] = 12,
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
    STATE(315), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(495), 1,
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
  [8842] = 3,
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
    STATE(315), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(495), 1,
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
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(660), 1,
      sym__conid,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    STATE(117), 1,
      sym_constructor,
    STATE(142), 1,
      sym_qualified_type,
    STATE(398), 1,
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
    STATE(141), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(157), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [8976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
    ACTIONS(686), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(684), 17,
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
  [9009] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym__integer_literal,
    ACTIONS(360), 1,
      anon_sym_LBRACK,
    ACTIONS(646), 1,
      sym__conid,
    ACTIONS(780), 1,
      anon_sym_LPAREN,
    STATE(234), 1,
      sym_constructor,
    STATE(247), 1,
      sym_qualified_type,
    STATE(370), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(350), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(354), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(263), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(259), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9060] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(634), 1,
      sym__integer_literal,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(782), 1,
      anon_sym_LPAREN,
    STATE(341), 1,
      sym_constructor,
    STATE(394), 1,
      sym_qualified_type,
    STATE(400), 1,
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
    STATE(380), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(384), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9111] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 6,
      anon_sym_DOT,
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
  [9142] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym__integer_literal,
    ACTIONS(358), 1,
      sym__conid,
    ACTIONS(360), 1,
      anon_sym_LBRACK,
    ACTIONS(784), 1,
      anon_sym_LPAREN,
    STATE(193), 1,
      sym_constructor,
    STATE(213), 1,
      sym_qualified_type,
    STATE(402), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(350), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(354), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(263), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(259), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9193] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym__conid,
    ACTIONS(505), 1,
      sym__integer_literal,
    ACTIONS(514), 1,
      anon_sym_LBRACK,
    ACTIONS(786), 1,
      anon_sym_LPAREN,
    STATE(193), 1,
      sym_constructor,
    STATE(213), 1,
      sym_qualified_type,
    STATE(402), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(503), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(507), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(218), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(207), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9244] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(788), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_constructor,
    STATE(98), 1,
      sym_qualified_type,
    STATE(395), 1,
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
    STATE(141), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(157), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9295] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(233), 1,
      sym__integer_literal,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(790), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_constructor,
    STATE(98), 1,
      sym_qualified_type,
    STATE(395), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(231), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(235), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(92), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(103), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9346] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      sym__integer_literal,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(620), 1,
      anon_sym_LBRACK,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    STATE(238), 1,
      sym_constructor,
    STATE(255), 1,
      sym_qualified_type,
    STATE(367), 1,
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
  [9397] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      sym__integer_literal,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(620), 1,
      anon_sym_LBRACK,
    ACTIONS(794), 1,
      anon_sym_LPAREN,
    STATE(358), 1,
      sym_constructor,
    STATE(365), 1,
      sym_qualified_type,
    STATE(376), 1,
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
  [9448] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(796), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
      sym_constructor,
    STATE(123), 1,
      sym_qualified_type,
    STATE(399), 1,
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
    STATE(165), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(170), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9499] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
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
  [9532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
    ACTIONS(668), 5,
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
  [9565] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(650), 1,
      sym__conid,
    ACTIONS(798), 1,
      anon_sym_LPAREN,
    STATE(138), 1,
      sym_constructor,
    STATE(174), 1,
      sym_qualified_type,
    STATE(397), 1,
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
    STATE(165), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(170), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9616] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(330), 1,
      sym__integer_literal,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    STATE(101), 1,
      sym_constructor,
    STATE(123), 1,
      sym_qualified_type,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(328), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(332), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(125), 4,
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
  [9667] = 3,
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
  [9697] = 3,
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
  [9727] = 3,
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
  [9757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(712), 20,
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
  [9787] = 3,
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
  [9817] = 14,
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
    STATE(77), 2,
      sym__field_name,
      sym_variable,
    STATE(222), 2,
      sym__entity_line_definition,
      aux_sym_entity_body_repeat1,
    STATE(357), 2,
      sym__haskell_constraint_name,
      sym_constructor,
    STATE(366), 2,
      sym_entity_derives,
      aux_sym_entity_body_repeat2,
    STATE(505), 6,
      sym__entity_key,
      sym_surrogate_key,
      sym_natural_key,
      sym_field_definition,
      sym_unique_constraint,
      sym_foreign_constraint,
  [9869] = 3,
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
  [9899] = 14,
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
    STATE(481), 1,
      sym_entity_body,
    STATE(77), 2,
      sym__field_name,
      sym_variable,
    STATE(202), 2,
      sym__entity_line_definition,
      aux_sym_entity_body_repeat1,
    STATE(357), 2,
      sym__haskell_constraint_name,
      sym_constructor,
    STATE(389), 2,
      sym_entity_derives,
      aux_sym_entity_body_repeat2,
    STATE(505), 6,
      sym__entity_key,
      sym_surrogate_key,
      sym_natural_key,
      sym_field_definition,
      sym_unique_constraint,
      sym_foreign_constraint,
  [9951] = 3,
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
  [9981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(688), 20,
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
  [10011] = 3,
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
  [10041] = 3,
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
  [10071] = 3,
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
  [10101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 5,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_EQ_GT,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(670), 17,
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
  [10131] = 3,
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
  [10161] = 3,
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
  [10191] = 3,
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
  [10221] = 3,
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
  [10251] = 3,
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
  [10281] = 3,
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
  [10311] = 3,
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
  [10341] = 3,
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
    STATE(315), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(495), 1,
      sym_constructor,
    ACTIONS(764), 3,
      sym_comma,
      anon_sym_,
      anon_sym_RPAREN,
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
  [10418] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_,
    ACTIONS(730), 1,
      anon_sym_EQ_GT,
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
  [10450] = 3,
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
    STATE(77), 2,
      sym__field_name,
      sym_variable,
    STATE(222), 2,
      sym__entity_line_definition,
      aux_sym_entity_body_repeat1,
    STATE(357), 2,
      sym__haskell_constraint_name,
      sym_constructor,
    STATE(505), 6,
      sym__entity_key,
      sym_surrogate_key,
      sym_natural_key,
      sym_field_definition,
      sym_unique_constraint,
      sym_foreign_constraint,
  [10526] = 3,
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
  [10610] = 3,
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
  [10638] = 3,
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
  [10666] = 3,
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
  [10694] = 3,
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
  [10722] = 3,
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
  [10750] = 3,
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
  [10778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(720), 18,
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
    ACTIONS(666), 1,
      anon_sym_DOT,
    ACTIONS(686), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(684), 14,
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
    ACTIONS(666), 1,
      anon_sym_DOT,
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
  [10864] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
    ACTIONS(668), 4,
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
  [10893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 5,
      anon_sym_DOT,
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
  [10920] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(686), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(684), 16,
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
    ACTIONS(682), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(680), 16,
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
    ACTIONS(668), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(664), 16,
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
  [11033] = 3,
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
  [11059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(670), 16,
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
  [11111] = 3,
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
    STATE(312), 1,
      sym__entity_header,
    STATE(337), 1,
      sym_constructor,
    STATE(400), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(251), 2,
      sym_entity_definition,
      aux_sym_quasi_quotation_repeat1,
    STATE(291), 2,
      sym__entity_name,
      sym_type_name,
    STATE(401), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [11185] = 3,
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
  [11263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 4,
      sym__tyconsym,
      sym__integer_literal,
      anon_sym_SQUOTE,
      anon_sym_AT,
    ACTIONS(670), 14,
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
  [11315] = 14,
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
    STATE(312), 1,
      sym__entity_header,
    STATE(337), 1,
      sym_constructor,
    STATE(400), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(251), 2,
      sym_entity_definition,
      aux_sym_quasi_quotation_repeat1,
    STATE(291), 2,
      sym__entity_name,
      sym_type_name,
    STATE(401), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [11363] = 3,
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
  [11389] = 3,
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
  [11415] = 3,
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
  [11441] = 3,
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
  [11467] = 3,
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
  [11493] = 3,
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
  [11519] = 3,
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
  [11545] = 3,
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
  [11571] = 3,
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
  [11597] = 3,
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
  [11623] = 3,
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
  [11649] = 3,
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
  [11675] = 3,
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
  [11701] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(75), 1,
      sym__tyconsym,
    ACTIONS(77), 1,
      anon_sym_2,
    ACTIONS(79), 1,
      anon_sym_DASH_GT,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(654), 1,
      sym__varid,
    STATE(315), 1,
      aux_sym__qualifying_module,
    STATE(396), 1,
      sym_type_variable,
    STATE(461), 1,
      sym__modid,
    STATE(493), 1,
      sym__arrow,
    STATE(495), 1,
      sym_constructor,
    STATE(492), 6,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym_annotated_type_variable,
  [11746] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(105), 1,
      sym__tyconsym,
    ACTIONS(107), 1,
      anon_sym_2,
    ACTIONS(109), 1,
      anon_sym_DASH_GT,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(654), 1,
      sym__varid,
    STATE(315), 1,
      aux_sym__qualifying_module,
    STATE(396), 1,
      sym_type_variable,
    STATE(461), 1,
      sym__modid,
    STATE(474), 1,
      sym__arrow,
    STATE(495), 1,
      sym_constructor,
    STATE(509), 6,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym_annotated_type_variable,
  [11791] = 10,
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
    STATE(315), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(495), 1,
      sym_constructor,
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
  [11991] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(891), 1,
      sym__tyconsym,
    STATE(315), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(495), 1,
      sym_constructor,
    STATE(273), 7,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
      sym__qtyconops,
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
    STATE(337), 1,
      sym_constructor,
    STATE(400), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(293), 2,
      sym__entity_name,
      sym_type_name,
    STATE(401), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [12104] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym__varid,
    ACTIONS(901), 1,
      anon_sym_LPAREN,
    ACTIONS(903), 1,
      sym__conid,
    ACTIONS(905), 1,
      anon_sym_SQUOTE,
    STATE(345), 1,
      sym_constructor,
    STATE(360), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(425), 2,
      sym__entity_name,
      sym_type_name,
    STATE(368), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [12139] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(151), 1,
      sym__tyconsym,
    ACTIONS(618), 1,
      sym__conid,
    STATE(315), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(495), 1,
      sym_constructor,
    STATE(484), 5,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
  [12168] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(149), 1,
      sym__tyconsym,
    ACTIONS(618), 1,
      sym__conid,
    STATE(315), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(495), 1,
      sym_constructor,
    STATE(516), 5,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
  [12197] = 2,
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
  [12214] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_PERCENT,
    STATE(444), 1,
      sym_modifier,
    ACTIONS(911), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    STATE(50), 2,
      sym__arrow,
      sym__fun_arrow,
    ACTIONS(909), 5,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [12239] = 3,
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
  [12258] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym__varid,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
    ACTIONS(921), 1,
      anon_sym_LBRACE,
    ACTIONS(917), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
    STATE(287), 4,
      sym_type_variable,
      sym_inferred_type_variable,
      sym__quantifier,
      aux_sym__forall_repeat1,
  [12282] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_PERCENT,
    STATE(444), 1,
      sym_modifier,
    ACTIONS(923), 2,
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
  [12306] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      sym__varid,
    ACTIONS(930), 1,
      anon_sym_LPAREN,
    ACTIONS(933), 1,
      anon_sym_LBRACE,
    ACTIONS(928), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
    STATE(287), 4,
      sym_type_variable,
      sym_inferred_type_variable,
      sym__quantifier,
      aux_sym__forall_repeat1,
  [12330] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(938), 1,
      sym_exclamation_mark_attribute,
    ACTIONS(940), 1,
      sym_other_attribute,
    ACTIONS(942), 1,
      sym__newline,
    STATE(298), 1,
      aux_sym_field_definition_repeat1,
    STATE(349), 1,
      sym__key_value_attribute_key,
    STATE(391), 3,
      sym__field_attribute,
      sym__attribute,
      sym_key_value_attribute,
  [12357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 2,
      anon_sym_,
      anon_sym_EQ_GT,
    ACTIONS(944), 2,
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
    ACTIONS(936), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(938), 1,
      sym_exclamation_mark_attribute,
    ACTIONS(940), 1,
      sym_other_attribute,
    ACTIONS(947), 1,
      sym__newline,
    STATE(295), 1,
      aux_sym_field_definition_repeat1,
    STATE(349), 1,
      sym__key_value_attribute_key,
    STATE(391), 3,
      sym__field_attribute,
      sym__attribute,
      sym_key_value_attribute,
  [12403] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(949), 1,
      sym_exclamation_mark_attribute,
    ACTIONS(951), 1,
      sym_other_attribute,
    ACTIONS(953), 1,
      sym__newline,
    STATE(349), 1,
      sym__key_value_attribute_key,
    STATE(297), 4,
      sym__entity_attribute,
      sym__attribute,
      sym_key_value_attribute,
      aux_sym__entity_header_repeat1,
  [12428] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(938), 1,
      sym_exclamation_mark_attribute,
    ACTIONS(940), 1,
      sym_other_attribute,
    ACTIONS(955), 1,
      sym__newline,
    STATE(290), 1,
      aux_sym_field_definition_repeat1,
    STATE(349), 1,
      sym__key_value_attribute_key,
    STATE(391), 3,
      sym__field_attribute,
      sym__attribute,
      sym_key_value_attribute,
  [12455] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(957), 1,
      sym_exclamation_mark_attribute,
    ACTIONS(959), 1,
      sym_other_attribute,
    ACTIONS(961), 1,
      sym__newline,
    STATE(349), 1,
      sym__key_value_attribute_key,
    STATE(294), 4,
      sym__entity_attribute,
      sym__attribute,
      sym_key_value_attribute,
      aux_sym__entity_header_repeat1,
  [12480] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(963), 1,
      sym_exclamation_mark_attribute,
    ACTIONS(965), 1,
      sym_other_attribute,
    ACTIONS(967), 1,
      sym__newline,
    STATE(349), 1,
      sym__key_value_attribute_key,
    STATE(296), 4,
      sym__entity_attribute,
      sym__attribute,
      sym_key_value_attribute,
      aux_sym__entity_header_repeat1,
  [12505] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(972), 1,
      sym_exclamation_mark_attribute,
    ACTIONS(975), 1,
      sym_other_attribute,
    ACTIONS(978), 1,
      sym__newline,
    STATE(295), 1,
      aux_sym_field_definition_repeat1,
    STATE(349), 1,
      sym__key_value_attribute_key,
    STATE(391), 3,
      sym__field_attribute,
      sym__attribute,
      sym_key_value_attribute,
  [12532] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(983), 1,
      sym_exclamation_mark_attribute,
    ACTIONS(986), 1,
      sym_other_attribute,
    ACTIONS(989), 1,
      sym__newline,
    STATE(349), 1,
      sym__key_value_attribute_key,
    STATE(296), 4,
      sym__entity_attribute,
      sym__attribute,
      sym_key_value_attribute,
      aux_sym__entity_header_repeat1,
  [12557] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(963), 1,
      sym_exclamation_mark_attribute,
    ACTIONS(965), 1,
      sym_other_attribute,
    ACTIONS(991), 1,
      sym__newline,
    STATE(349), 1,
      sym__key_value_attribute_key,
    STATE(296), 4,
      sym__entity_attribute,
      sym__attribute,
      sym_key_value_attribute,
      aux_sym__entity_header_repeat1,
  [12582] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(938), 1,
      sym_exclamation_mark_attribute,
    ACTIONS(940), 1,
      sym_other_attribute,
    ACTIONS(993), 1,
      sym__newline,
    STATE(295), 1,
      aux_sym_field_definition_repeat1,
    STATE(349), 1,
      sym__key_value_attribute_key,
    STATE(391), 3,
      sym__field_attribute,
      sym__attribute,
      sym_key_value_attribute,
  [12609] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(995), 1,
      sym_exclamation_mark_attribute,
    ACTIONS(997), 1,
      anon_sym_References,
    ACTIONS(999), 1,
      sym__newline,
    STATE(305), 1,
      sym__attribute_no_other,
    STATE(349), 1,
      sym__key_value_attribute_key,
    STATE(386), 1,
      sym_key_value_attribute,
    STATE(472), 1,
      sym__list_of_attributes_start_with_no_other,
  [12637] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(995), 1,
      sym_exclamation_mark_attribute,
    ACTIONS(1001), 1,
      anon_sym_References,
    ACTIONS(1003), 1,
      sym__newline,
    STATE(305), 1,
      sym__attribute_no_other,
    STATE(349), 1,
      sym__key_value_attribute_key,
    STATE(386), 1,
      sym_key_value_attribute,
    STATE(504), 1,
      sym__list_of_attributes_start_with_no_other,
  [12665] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(1005), 1,
      sym_exclamation_mark_attribute,
    ACTIONS(1007), 1,
      sym_other_attribute,
    ACTIONS(1009), 1,
      sym__newline,
    STATE(307), 1,
      aux_sym__list_of_attributes_start_with_no_other_repeat1,
    STATE(349), 1,
      sym__key_value_attribute_key,
    STATE(403), 2,
      sym__attribute,
      sym_key_value_attribute,
  [12691] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      sym__varid,
    ACTIONS(1015), 1,
      anon_sym_References,
    STATE(306), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(344), 2,
      sym__field_name,
      sym_variable,
    ACTIONS(1013), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [12713] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      sym__colon2,
    STATE(410), 1,
      sym__type_annotation,
    STATE(460), 1,
      sym_kind,
    ACTIONS(1019), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
    ACTIONS(1017), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [12735] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      sym__conid,
    STATE(304), 1,
      aux_sym_entity_derives_repeat1,
    STATE(363), 1,
      sym_constructor,
    STATE(388), 1,
      aux_sym__qualifying_module,
    STATE(426), 1,
      sym_qualified_type,
    STATE(461), 1,
      sym__modid,
    ACTIONS(1021), 2,
      sym__dedent,
      anon_sym_deriving,
  [12761] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(1005), 1,
      sym_exclamation_mark_attribute,
    ACTIONS(1007), 1,
      sym_other_attribute,
    ACTIONS(1026), 1,
      sym__newline,
    STATE(301), 1,
      aux_sym__list_of_attributes_start_with_no_other_repeat1,
    STATE(349), 1,
      sym__key_value_attribute_key,
    STATE(403), 2,
      sym__attribute,
      sym_key_value_attribute,
  [12787] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1028), 1,
      sym__varid,
    ACTIONS(1033), 1,
      anon_sym_References,
    STATE(306), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(344), 2,
      sym__field_name,
      sym_variable,
    ACTIONS(1031), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [12809] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(1038), 1,
      sym_exclamation_mark_attribute,
    ACTIONS(1041), 1,
      sym_other_attribute,
    ACTIONS(1044), 1,
      sym__newline,
    STATE(307), 1,
      aux_sym__list_of_attributes_start_with_no_other_repeat1,
    STATE(349), 1,
      sym__key_value_attribute_key,
    STATE(403), 2,
      sym__attribute,
      sym_key_value_attribute,
  [12835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1048), 2,
      sym__dedent,
      sym__field_strictness_prefix,
    ACTIONS(1046), 6,
      anon_sym_Id,
      anon_sym_Primary,
      anon_sym_Foreign,
      anon_sym_deriving,
      sym__varid,
      sym__conid,
  [12851] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      sym__conid,
    STATE(304), 1,
      aux_sym_entity_derives_repeat1,
    STATE(363), 1,
      sym_constructor,
    STATE(388), 1,
      aux_sym__qualifying_module,
    STATE(426), 1,
      sym_qualified_type,
    STATE(461), 1,
      sym__modid,
    ACTIONS(1050), 2,
      sym__dedent,
      anon_sym_deriving,
  [12877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [12890] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(995), 1,
      sym_exclamation_mark_attribute,
    ACTIONS(1056), 1,
      sym__newline,
    STATE(305), 1,
      sym__attribute_no_other,
    STATE(349), 1,
      sym__key_value_attribute_key,
    STATE(386), 1,
      sym_key_value_attribute,
    STATE(519), 1,
      sym__list_of_attributes_start_with_no_other,
  [12915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1060), 1,
      sym__indent,
    ACTIONS(1058), 6,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [12930] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(995), 1,
      sym_exclamation_mark_attribute,
    ACTIONS(1062), 1,
      sym__newline,
    STATE(305), 1,
      sym__attribute_no_other,
    STATE(349), 1,
      sym__key_value_attribute_key,
    STATE(386), 1,
      sym_key_value_attribute,
    STATE(496), 1,
      sym__list_of_attributes_start_with_no_other,
  [12955] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(1064), 1,
      sym__tyconsym,
    STATE(89), 1,
      sym_constructor,
    STATE(271), 1,
      sym_constructor_operator,
    STATE(325), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [12980] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(1064), 1,
      sym__tyconsym,
    STATE(271), 1,
      sym_constructor_operator,
    STATE(325), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(495), 1,
      sym_constructor,
  [13005] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(995), 1,
      sym_exclamation_mark_attribute,
    ACTIONS(1066), 1,
      sym__newline,
    STATE(305), 1,
      sym__attribute_no_other,
    STATE(349), 1,
      sym__key_value_attribute_key,
    STATE(386), 1,
      sym_key_value_attribute,
    STATE(482), 1,
      sym__list_of_attributes_start_with_no_other,
  [13030] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(995), 1,
      sym_exclamation_mark_attribute,
    ACTIONS(1068), 1,
      sym__newline,
    STATE(305), 1,
      sym__attribute_no_other,
    STATE(349), 1,
      sym__key_value_attribute_key,
    STATE(386), 1,
      sym_key_value_attribute,
    STATE(518), 1,
      sym__list_of_attributes_start_with_no_other,
  [13055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1070), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [13068] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym__key_value_attribute_key_token1,
    ACTIONS(995), 1,
      sym_exclamation_mark_attribute,
    ACTIONS(1072), 1,
      sym__newline,
    STATE(305), 1,
      sym__attribute_no_other,
    STATE(349), 1,
      sym__key_value_attribute_key,
    STATE(386), 1,
      sym_key_value_attribute,
    STATE(514), 1,
      sym__list_of_attributes_start_with_no_other,
  [13093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
    ACTIONS(712), 5,
      anon_sym_2,
      anon_sym_DASH_GT,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
  [13108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1074), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [13121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1076), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [13134] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym__varid,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
    ACTIONS(921), 1,
      anon_sym_LBRACE,
    STATE(285), 4,
      sym_type_variable,
      sym_inferred_type_variable,
      sym__quantifier,
      aux_sym__forall_repeat1,
  [13153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13165] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      sym__consym,
    ACTIONS(1082), 1,
      sym__tyconsym,
    ACTIONS(1084), 1,
      sym__conid,
    STATE(325), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(495), 1,
      sym_constructor,
  [13187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(686), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
    ACTIONS(684), 3,
      anon_sym_2,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
  [13203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 6,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [13215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 6,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [13227] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(1091), 1,
      anon_sym_LPAREN,
    STATE(341), 1,
      sym_constructor,
    STATE(394), 1,
      sym_qualified_type,
    STATE(400), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [13249] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      sym__conid,
    STATE(309), 1,
      aux_sym_entity_derives_repeat1,
    STATE(363), 1,
      sym_constructor,
    STATE(388), 1,
      aux_sym__qualifying_module,
    STATE(426), 1,
      sym_qualified_type,
    STATE(461), 1,
      sym__modid,
  [13271] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      sym__conid,
    ACTIONS(1093), 1,
      anon_sym_LPAREN,
    STATE(358), 1,
      sym_constructor,
    STATE(360), 1,
      aux_sym__qualifying_module,
    STATE(365), 1,
      sym_qualified_type,
    STATE(461), 1,
      sym__modid,
  [13293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 6,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [13317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      sym_other_attribute,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(664), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [13368] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      sym__varid,
    STATE(299), 1,
      sym__list_of_fields,
    STATE(302), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(344), 2,
      sym__field_name,
      sym_variable,
  [13385] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      sym__varid,
    STATE(302), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(311), 1,
      sym__list_of_fields,
    STATE(344), 2,
      sym__field_name,
      sym_variable,
  [13402] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym_other_attribute,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(684), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [13417] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_other_attribute,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(680), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [13432] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      sym__varid,
    STATE(300), 1,
      sym__list_of_fields,
    STATE(302), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(344), 2,
      sym__field_name,
      sym_variable,
  [13449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(45), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1107), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 2,
      anon_sym_References,
      sym__varid,
    ACTIONS(1111), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [13475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(664), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(668), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13490] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      sym_comma,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym__context_constraints_repeat1,
    ACTIONS(1116), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [13507] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__conid,
    STATE(376), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(469), 1,
      sym_constructor,
    STATE(497), 1,
      sym_qualified_type,
  [13526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym_other_attribute,
    ACTIONS(688), 4,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
      anon_sym_DOT,
  [13539] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(408), 1,
      sym__key_value_attribute_value,
    ACTIONS(1121), 2,
      aux_sym__key_value_attribute_value_token1,
      aux_sym__key_value_attribute_value_token2,
    ACTIONS(1123), 2,
      sym_char,
      sym_string,
  [13554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(36), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1125), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 2,
      anon_sym_References,
      sym__varid,
    ACTIONS(887), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [13580] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      sym__varid,
    STATE(302), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(317), 1,
      sym__list_of_fields,
    STATE(344), 2,
      sym__field_name,
      sym_variable,
  [13597] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      sym__varid,
    STATE(302), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(319), 1,
      sym__list_of_fields,
    STATE(344), 2,
      sym__field_name,
      sym_variable,
  [13614] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym__colon2,
    STATE(465), 1,
      sym__type_annotation,
    ACTIONS(1019), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [13631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(52), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1129), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(63), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1131), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13657] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      sym__varid,
    STATE(302), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(313), 1,
      sym__list_of_fields,
    STATE(344), 2,
      sym__field_name,
      sym_variable,
  [13674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(680), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(682), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13689] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(1135), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [13701] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      sym__conid,
    STATE(325), 1,
      aux_sym__qualifying_module,
    STATE(326), 1,
      sym_constructor,
    STATE(461), 1,
      sym__modid,
  [13717] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      sym_other_attribute,
    ACTIONS(704), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [13729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(702), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(1137), 3,
      sym__dedent,
      anon_sym_deriving,
      sym__conid,
  [13753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_deriving,
    ACTIONS(1142), 1,
      sym__dedent,
    STATE(364), 2,
      sym_entity_derives,
      aux_sym_entity_body_repeat2,
  [13767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(716), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(718), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13779] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1144), 1,
      anon_sym_deriving,
    ACTIONS(1146), 1,
      sym__dedent,
    STATE(364), 2,
      sym_entity_derives,
      aux_sym_entity_body_repeat2,
  [13793] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__conid,
    STATE(237), 1,
      sym_constructor,
    STATE(325), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [13809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(672), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym_other_attribute,
    ACTIONS(700), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [13833] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym__conid,
    STATE(233), 1,
      sym_constructor,
    STATE(325), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [13849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym_other_attribute,
    ACTIONS(740), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [13861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      sym_other_attribute,
    ACTIONS(748), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [13873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_other_attribute,
    ACTIONS(752), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [13885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_other_attribute,
    ACTIONS(756), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [13897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_other_attribute,
    ACTIONS(692), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [13909] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__conid,
    STATE(325), 1,
      aux_sym__qualifying_module,
    STATE(326), 1,
      sym_constructor,
    STATE(461), 1,
      sym__modid,
  [13925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(706), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 4,
      sym_comma,
      anon_sym_,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
  [13947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      sym_other_attribute,
    ACTIONS(760), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [13959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym_other_attribute,
    ACTIONS(696), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [13971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(694), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym_other_attribute,
    ACTIONS(720), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [13995] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      sym_comma,
    STATE(383), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(1151), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [14009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      sym_other_attribute,
    ACTIONS(732), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [14021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym_other_attribute,
    ACTIONS(724), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [14033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      sym_other_attribute,
    ACTIONS(1153), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [14045] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      sym__colon2,
    STATE(332), 1,
      sym__type_annotation,
    ACTIONS(1019), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [14059] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1052), 1,
      sym__conid,
    STATE(325), 1,
      aux_sym__qualifying_module,
    STATE(404), 1,
      sym_constructor,
    STATE(461), 1,
      sym__modid,
  [14075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      sym__dedent,
    ACTIONS(1144), 1,
      anon_sym_deriving,
    STATE(364), 2,
      sym_entity_derives,
      aux_sym_entity_body_repeat2,
  [14089] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(39), 1,
      sym__colon2,
    STATE(332), 1,
      sym__type_annotation,
    ACTIONS(1157), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [14103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      sym_other_attribute,
    ACTIONS(1159), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [14115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_other_attribute,
    ACTIONS(736), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [14127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_other_attribute,
    ACTIONS(744), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [14139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym_other_attribute,
    ACTIONS(716), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [14151] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym__conid,
    STATE(89), 1,
      sym_constructor,
    STATE(325), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [14167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      sym__colon2,
    STATE(465), 1,
      sym__type_annotation,
    ACTIONS(1019), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [14181] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym__conid,
    STATE(152), 1,
      sym_constructor,
    STATE(325), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [14197] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      sym__conid,
    STATE(130), 1,
      sym_constructor,
    STATE(325), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [14213] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym__conid,
    STATE(108), 1,
      sym_constructor,
    STATE(325), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [14229] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__conid,
    STATE(325), 1,
      aux_sym__qualifying_module,
    STATE(340), 1,
      sym_constructor,
    STATE(461), 1,
      sym__modid,
  [14245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym_other_attribute,
    ACTIONS(670), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [14257] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym__conid,
    STATE(182), 1,
      sym_constructor,
    STATE(325), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [14273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      sym_other_attribute,
    ACTIONS(1163), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [14285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(684), 3,
      sym__dedent,
      anon_sym_deriving,
      sym__conid,
  [14297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym_other_attribute,
    ACTIONS(712), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [14309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 4,
      sym__dedent,
      anon_sym_deriving,
      anon_sym_DOT,
      sym__conid,
  [14319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(1169), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [14331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 1,
      sym_other_attribute,
    ACTIONS(1171), 3,
      sym__newline,
      aux_sym__key_value_attribute_key_token1,
      sym_exclamation_mark_attribute,
  [14343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1177), 1,
      anon_sym_RPAREN,
    STATE(449), 1,
      aux_sym_type_list_repeat1,
  [14356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [14365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_DOT,
    ACTIONS(690), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [14376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [14385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      sym__varid,
    STATE(78), 2,
      sym__field_name,
      sym_variable,
  [14396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1183), 1,
      sym_comma,
    ACTIONS(1186), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      aux_sym__context_constraints_repeat1,
  [14409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1188), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      aux_sym_type_list_repeat1,
  [14422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1190), 1,
      anon_sym_RBRACK,
    STATE(415), 1,
      aux_sym_type_list_repeat1,
  [14435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      sym_comma,
    ACTIONS(1194), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      aux_sym_con_tuple_repeat1,
  [14448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1196), 1,
      anon_sym_RPAREN,
    STATE(449), 1,
      aux_sym_type_list_repeat1,
  [14461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(269), 1,
      sym__carrow,
    ACTIONS(1198), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [14472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1200), 1,
      sym_cascade_action,
    ACTIONS(1203), 1,
      sym_sql_constraint_name,
    STATE(420), 1,
      aux_sym_foreign_constraint_repeat1,
  [14485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1205), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      aux_sym_type_list_repeat1,
  [14498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1207), 1,
      anon_sym_RPAREN,
    STATE(449), 1,
      aux_sym_type_list_repeat1,
  [14511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      sym_comma,
    ACTIONS(1209), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      aux_sym_con_tuple_repeat1,
  [14524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1211), 1,
      anon_sym_RBRACK,
    STATE(427), 1,
      aux_sym_type_list_repeat1,
  [14537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1213), 1,
      sym_cascade_action,
    ACTIONS(1215), 1,
      sym_sql_constraint_name,
    STATE(451), 1,
      aux_sym_foreign_constraint_repeat1,
  [14550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1217), 3,
      sym__dedent,
      anon_sym_deriving,
      sym__conid,
  [14559] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1219), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      aux_sym_type_list_repeat1,
  [14572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1221), 1,
      anon_sym_RBRACK,
    STATE(421), 1,
      aux_sym_type_list_repeat1,
  [14585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      sym_comma,
    ACTIONS(1223), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      aux_sym_con_tuple_repeat1,
  [14598] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      sym_comma,
    ACTIONS(1227), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym__context_constraints_repeat1,
  [14611] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1229), 1,
      anon_sym_RPAREN,
    STATE(449), 1,
      aux_sym_type_list_repeat1,
  [14624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      sym_comma,
    ACTIONS(1231), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      aux_sym_con_tuple_repeat1,
  [14637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1233), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      aux_sym_type_list_repeat1,
  [14650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1235), 1,
      anon_sym_RPAREN,
    STATE(449), 1,
      aux_sym_type_list_repeat1,
  [14663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1237), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      aux_sym_type_list_repeat1,
  [14676] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1239), 1,
      anon_sym_RBRACK,
    STATE(435), 1,
      aux_sym_type_list_repeat1,
  [14689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym__varid,
    STATE(396), 1,
      sym_type_variable,
    STATE(485), 1,
      sym_annotated_type_variable,
  [14702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1082), 1,
      sym__tyconsym,
    ACTIONS(1080), 2,
      sym__consym,
      sym__conid,
  [14713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      sym_comma,
    ACTIONS(1241), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      aux_sym_con_tuple_repeat1,
  [14726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
    STATE(449), 1,
      aux_sym_type_list_repeat1,
  [14739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      sym_comma,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      aux_sym_con_tuple_repeat1,
  [14752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1247), 1,
      anon_sym_RBRACK,
    STATE(445), 1,
      aux_sym_type_list_repeat1,
  [14765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym__varid,
    STATE(354), 1,
      sym_type_variable,
    STATE(489), 1,
      sym_annotated_type_variable,
  [14778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(268), 1,
      sym__arrow,
    ACTIONS(1249), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
  [14789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1251), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      aux_sym_type_list_repeat1,
  [14802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1253), 1,
      anon_sym_RPAREN,
    STATE(449), 1,
      aux_sym_type_list_repeat1,
  [14815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1255), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      aux_sym_type_list_repeat1,
  [14828] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1257), 1,
      sym_comma,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      aux_sym_con_tuple_repeat1,
  [14841] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    STATE(383), 1,
      aux_sym_type_list_repeat1,
  [14854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1264), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      aux_sym_type_list_repeat1,
  [14867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1266), 1,
      sym_cascade_action,
    ACTIONS(1268), 1,
      sym_sql_constraint_name,
    STATE(420), 1,
      aux_sym_foreign_constraint_repeat1,
  [14880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1270), 1,
      anon_sym_RBRACK,
    STATE(450), 1,
      aux_sym_type_list_repeat1,
  [14893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      sym_comma,
    ACTIONS(1272), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      aux_sym_con_tuple_repeat1,
  [14906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      sym_comma,
    ACTIONS(1274), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      aux_sym__context_constraints_repeat1,
  [14919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1192), 1,
      sym_comma,
    ACTIONS(1276), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      aux_sym_con_tuple_repeat1,
  [14932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1278), 1,
      anon_sym_RBRACK,
    STATE(458), 1,
      aux_sym_type_list_repeat1,
  [14945] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1280), 1,
      anon_sym_RPAREN,
    STATE(449), 1,
      aux_sym_type_list_repeat1,
  [14958] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    ACTIONS(1282), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      aux_sym_type_list_repeat1,
  [14971] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      sym_comma,
    ACTIONS(1284), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      aux_sym__context_constraints_repeat1,
  [14984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1286), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [14993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1288), 1,
      anon_sym_DOT,
    STATE(438), 1,
      sym__dot,
  [15003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym_comma,
    STATE(449), 1,
      aux_sym_type_list_repeat1,
  [15013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1290), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [15021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1186), 2,
      sym_comma,
      anon_sym_RPAREN,
  [15029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1294), 2,
      sym_comma,
      anon_sym_RPAREN,
  [15045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1296), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
  [15053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [15061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
    ACTIONS(1298), 1,
      anon_sym_BQUOTE,
  [15071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1300), 2,
      sym_comma,
      anon_sym_RPAREN,
  [15079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1302), 1,
      anon_sym_RPAREN,
  [15086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      sym__newline,
  [15093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
  [15100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      anon_sym_RPAREN,
  [15107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
  [15114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 1,
      anon_sym_RPAREN,
  [15121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      anon_sym_RPAREN,
  [15128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1314), 1,
      anon_sym_RPAREN,
  [15135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
  [15142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1318), 1,
      anon_sym_RPAREN,
  [15149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1320), 1,
      sym__dedent,
  [15156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1322), 1,
      sym__newline,
  [15163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1324), 1,
      anon_sym_RPAREN,
  [15170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1326), 1,
      anon_sym_RPAREN,
  [15177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1328), 1,
      anon_sym_RPAREN,
  [15184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
  [15191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1332), 1,
      anon_sym_RPAREN,
  [15198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 1,
      anon_sym_RPAREN,
  [15205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      anon_sym_RBRACE,
  [15212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1336), 1,
      anon_sym_RPAREN,
  [15219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 1,
      anon_sym_RPAREN,
  [15226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1340), 1,
      anon_sym_RPAREN,
  [15233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1342), 1,
      anon_sym_RPAREN,
  [15240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
  [15247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_DOT,
  [15254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1346), 1,
      sym__newline,
  [15261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1348), 1,
      anon_sym_BQUOTE,
  [15268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1350), 1,
      anon_sym_RPAREN,
  [15275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1352), 1,
      anon_sym_RPAREN,
  [15282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1354), 1,
      anon_sym_RPAREN,
  [15289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1356), 1,
      anon_sym_RPAREN,
  [15296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_RPAREN,
  [15303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1360), 1,
      anon_sym_RPAREN,
  [15310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1362), 1,
      sym__newline,
  [15317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1364), 1,
      sym__newline,
  [15324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1366), 1,
      anon_sym_RPAREN,
  [15331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      anon_sym_RPAREN,
  [15338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1370), 1,
      anon_sym_RPAREN,
  [15345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1372), 1,
      anon_sym_RPAREN,
  [15352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1374), 1,
      anon_sym_RPAREN,
  [15359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1376), 1,
      anon_sym_RPAREN,
  [15366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      anon_sym_RPAREN,
  [15373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1380), 1,
      ts_builtin_sym_end,
  [15380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      sym__newline,
  [15387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1384), 1,
      anon_sym_RPAREN,
  [15394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1386), 1,
      anon_sym_RPAREN,
  [15401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1388), 1,
      anon_sym_RPAREN,
  [15408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1390), 1,
      sym__newline,
  [15415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1392), 1,
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
  [SMALL_STATE(44)] = 1880,
  [SMALL_STATE(45)] = 1971,
  [SMALL_STATE(46)] = 2078,
  [SMALL_STATE(47)] = 2185,
  [SMALL_STATE(48)] = 2276,
  [SMALL_STATE(49)] = 2383,
  [SMALL_STATE(50)] = 2492,
  [SMALL_STATE(51)] = 2599,
  [SMALL_STATE(52)] = 2706,
  [SMALL_STATE(53)] = 2813,
  [SMALL_STATE(54)] = 2904,
  [SMALL_STATE(55)] = 2994,
  [SMALL_STATE(56)] = 3086,
  [SMALL_STATE(57)] = 3176,
  [SMALL_STATE(58)] = 3266,
  [SMALL_STATE(59)] = 3360,
  [SMALL_STATE(60)] = 3465,
  [SMALL_STATE(61)] = 3554,
  [SMALL_STATE(62)] = 3643,
  [SMALL_STATE(63)] = 3732,
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
  [SMALL_STATE(87)] = 5558,
  [SMALL_STATE(88)] = 5603,
  [SMALL_STATE(89)] = 5642,
  [SMALL_STATE(90)] = 5681,
  [SMALL_STATE(91)] = 5718,
  [SMALL_STATE(92)] = 5754,
  [SMALL_STATE(93)] = 5790,
  [SMALL_STATE(94)] = 5826,
  [SMALL_STATE(95)] = 5862,
  [SMALL_STATE(96)] = 5898,
  [SMALL_STATE(97)] = 5934,
  [SMALL_STATE(98)] = 5970,
  [SMALL_STATE(99)] = 6006,
  [SMALL_STATE(100)] = 6042,
  [SMALL_STATE(101)] = 6082,
  [SMALL_STATE(102)] = 6120,
  [SMALL_STATE(103)] = 6156,
  [SMALL_STATE(104)] = 6192,
  [SMALL_STATE(105)] = 6228,
  [SMALL_STATE(106)] = 6266,
  [SMALL_STATE(107)] = 6302,
  [SMALL_STATE(108)] = 6338,
  [SMALL_STATE(109)] = 6376,
  [SMALL_STATE(110)] = 6412,
  [SMALL_STATE(111)] = 6448,
  [SMALL_STATE(112)] = 6484,
  [SMALL_STATE(113)] = 6520,
  [SMALL_STATE(114)] = 6556,
  [SMALL_STATE(115)] = 6591,
  [SMALL_STATE(116)] = 6626,
  [SMALL_STATE(117)] = 6679,
  [SMALL_STATE(118)] = 6716,
  [SMALL_STATE(119)] = 6751,
  [SMALL_STATE(120)] = 6788,
  [SMALL_STATE(121)] = 6823,
  [SMALL_STATE(122)] = 6858,
  [SMALL_STATE(123)] = 6897,
  [SMALL_STATE(124)] = 6932,
  [SMALL_STATE(125)] = 6967,
  [SMALL_STATE(126)] = 7002,
  [SMALL_STATE(127)] = 7037,
  [SMALL_STATE(128)] = 7072,
  [SMALL_STATE(129)] = 7107,
  [SMALL_STATE(130)] = 7142,
  [SMALL_STATE(131)] = 7179,
  [SMALL_STATE(132)] = 7214,
  [SMALL_STATE(133)] = 7249,
  [SMALL_STATE(134)] = 7284,
  [SMALL_STATE(135)] = 7319,
  [SMALL_STATE(136)] = 7354,
  [SMALL_STATE(137)] = 7389,
  [SMALL_STATE(138)] = 7424,
  [SMALL_STATE(139)] = 7460,
  [SMALL_STATE(140)] = 7512,
  [SMALL_STATE(141)] = 7546,
  [SMALL_STATE(142)] = 7580,
  [SMALL_STATE(143)] = 7614,
  [SMALL_STATE(144)] = 7648,
  [SMALL_STATE(145)] = 7682,
  [SMALL_STATE(146)] = 7716,
  [SMALL_STATE(147)] = 7750,
  [SMALL_STATE(148)] = 7786,
  [SMALL_STATE(149)] = 7820,
  [SMALL_STATE(150)] = 7854,
  [SMALL_STATE(151)] = 7888,
  [SMALL_STATE(152)] = 7922,
  [SMALL_STATE(153)] = 7958,
  [SMALL_STATE(154)] = 7992,
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
  [SMALL_STATE(172)] = 8593,
  [SMALL_STATE(173)] = 8626,
  [SMALL_STATE(174)] = 8659,
  [SMALL_STATE(175)] = 8692,
  [SMALL_STATE(176)] = 8725,
  [SMALL_STATE(177)] = 8758,
  [SMALL_STATE(178)] = 8791,
  [SMALL_STATE(179)] = 8842,
  [SMALL_STATE(180)] = 8875,
  [SMALL_STATE(181)] = 8925,
  [SMALL_STATE(182)] = 8976,
  [SMALL_STATE(183)] = 9009,
  [SMALL_STATE(184)] = 9060,
  [SMALL_STATE(185)] = 9111,
  [SMALL_STATE(186)] = 9142,
  [SMALL_STATE(187)] = 9193,
  [SMALL_STATE(188)] = 9244,
  [SMALL_STATE(189)] = 9295,
  [SMALL_STATE(190)] = 9346,
  [SMALL_STATE(191)] = 9397,
  [SMALL_STATE(192)] = 9448,
  [SMALL_STATE(193)] = 9499,
  [SMALL_STATE(194)] = 9532,
  [SMALL_STATE(195)] = 9565,
  [SMALL_STATE(196)] = 9616,
  [SMALL_STATE(197)] = 9667,
  [SMALL_STATE(198)] = 9697,
  [SMALL_STATE(199)] = 9727,
  [SMALL_STATE(200)] = 9757,
  [SMALL_STATE(201)] = 9787,
  [SMALL_STATE(202)] = 9817,
  [SMALL_STATE(203)] = 9869,
  [SMALL_STATE(204)] = 9899,
  [SMALL_STATE(205)] = 9951,
  [SMALL_STATE(206)] = 9981,
  [SMALL_STATE(207)] = 10011,
  [SMALL_STATE(208)] = 10041,
  [SMALL_STATE(209)] = 10071,
  [SMALL_STATE(210)] = 10101,
  [SMALL_STATE(211)] = 10131,
  [SMALL_STATE(212)] = 10161,
  [SMALL_STATE(213)] = 10191,
  [SMALL_STATE(214)] = 10221,
  [SMALL_STATE(215)] = 10251,
  [SMALL_STATE(216)] = 10281,
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
  [SMALL_STATE(244)] = 11111,
  [SMALL_STATE(245)] = 11137,
  [SMALL_STATE(246)] = 11185,
  [SMALL_STATE(247)] = 11211,
  [SMALL_STATE(248)] = 11237,
  [SMALL_STATE(249)] = 11263,
  [SMALL_STATE(250)] = 11289,
  [SMALL_STATE(251)] = 11315,
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
  [SMALL_STATE(266)] = 11746,
  [SMALL_STATE(267)] = 11791,
  [SMALL_STATE(268)] = 11830,
  [SMALL_STATE(269)] = 11854,
  [SMALL_STATE(270)] = 11878,
  [SMALL_STATE(271)] = 11901,
  [SMALL_STATE(272)] = 11924,
  [SMALL_STATE(273)] = 11947,
  [SMALL_STATE(274)] = 11969,
  [SMALL_STATE(275)] = 11991,
  [SMALL_STATE(276)] = 12025,
  [SMALL_STATE(277)] = 12047,
  [SMALL_STATE(278)] = 12069,
  [SMALL_STATE(279)] = 12104,
  [SMALL_STATE(280)] = 12139,
  [SMALL_STATE(281)] = 12168,
  [SMALL_STATE(282)] = 12197,
  [SMALL_STATE(283)] = 12214,
  [SMALL_STATE(284)] = 12239,
  [SMALL_STATE(285)] = 12258,
  [SMALL_STATE(286)] = 12282,
  [SMALL_STATE(287)] = 12306,
  [SMALL_STATE(288)] = 12330,
  [SMALL_STATE(289)] = 12357,
  [SMALL_STATE(290)] = 12376,
  [SMALL_STATE(291)] = 12403,
  [SMALL_STATE(292)] = 12428,
  [SMALL_STATE(293)] = 12455,
  [SMALL_STATE(294)] = 12480,
  [SMALL_STATE(295)] = 12505,
  [SMALL_STATE(296)] = 12532,
  [SMALL_STATE(297)] = 12557,
  [SMALL_STATE(298)] = 12582,
  [SMALL_STATE(299)] = 12609,
  [SMALL_STATE(300)] = 12637,
  [SMALL_STATE(301)] = 12665,
  [SMALL_STATE(302)] = 12691,
  [SMALL_STATE(303)] = 12713,
  [SMALL_STATE(304)] = 12735,
  [SMALL_STATE(305)] = 12761,
  [SMALL_STATE(306)] = 12787,
  [SMALL_STATE(307)] = 12809,
  [SMALL_STATE(308)] = 12835,
  [SMALL_STATE(309)] = 12851,
  [SMALL_STATE(310)] = 12877,
  [SMALL_STATE(311)] = 12890,
  [SMALL_STATE(312)] = 12915,
  [SMALL_STATE(313)] = 12930,
  [SMALL_STATE(314)] = 12955,
  [SMALL_STATE(315)] = 12980,
  [SMALL_STATE(316)] = 13005,
  [SMALL_STATE(317)] = 13030,
  [SMALL_STATE(318)] = 13055,
  [SMALL_STATE(319)] = 13068,
  [SMALL_STATE(320)] = 13093,
  [SMALL_STATE(321)] = 13108,
  [SMALL_STATE(322)] = 13121,
  [SMALL_STATE(323)] = 13134,
  [SMALL_STATE(324)] = 13153,
  [SMALL_STATE(325)] = 13165,
  [SMALL_STATE(326)] = 13187,
  [SMALL_STATE(327)] = 13203,
  [SMALL_STATE(328)] = 13215,
  [SMALL_STATE(329)] = 13227,
  [SMALL_STATE(330)] = 13249,
  [SMALL_STATE(331)] = 13271,
  [SMALL_STATE(332)] = 13293,
  [SMALL_STATE(333)] = 13305,
  [SMALL_STATE(334)] = 13317,
  [SMALL_STATE(335)] = 13329,
  [SMALL_STATE(336)] = 13341,
  [SMALL_STATE(337)] = 13353,
  [SMALL_STATE(338)] = 13368,
  [SMALL_STATE(339)] = 13385,
  [SMALL_STATE(340)] = 13402,
  [SMALL_STATE(341)] = 13417,
  [SMALL_STATE(342)] = 13432,
  [SMALL_STATE(343)] = 13449,
  [SMALL_STATE(344)] = 13462,
  [SMALL_STATE(345)] = 13475,
  [SMALL_STATE(346)] = 13490,
  [SMALL_STATE(347)] = 13507,
  [SMALL_STATE(348)] = 13526,
  [SMALL_STATE(349)] = 13539,
  [SMALL_STATE(350)] = 13554,
  [SMALL_STATE(351)] = 13567,
  [SMALL_STATE(352)] = 13580,
  [SMALL_STATE(353)] = 13597,
  [SMALL_STATE(354)] = 13614,
  [SMALL_STATE(355)] = 13631,
  [SMALL_STATE(356)] = 13644,
  [SMALL_STATE(357)] = 13657,
  [SMALL_STATE(358)] = 13674,
  [SMALL_STATE(359)] = 13689,
  [SMALL_STATE(360)] = 13701,
  [SMALL_STATE(361)] = 13717,
  [SMALL_STATE(362)] = 13729,
  [SMALL_STATE(363)] = 13741,
  [SMALL_STATE(364)] = 13753,
  [SMALL_STATE(365)] = 13767,
  [SMALL_STATE(366)] = 13779,
  [SMALL_STATE(367)] = 13793,
  [SMALL_STATE(368)] = 13809,
  [SMALL_STATE(369)] = 13821,
  [SMALL_STATE(370)] = 13833,
  [SMALL_STATE(371)] = 13849,
  [SMALL_STATE(372)] = 13861,
  [SMALL_STATE(373)] = 13873,
  [SMALL_STATE(374)] = 13885,
  [SMALL_STATE(375)] = 13897,
  [SMALL_STATE(376)] = 13909,
  [SMALL_STATE(377)] = 13925,
  [SMALL_STATE(378)] = 13937,
  [SMALL_STATE(379)] = 13947,
  [SMALL_STATE(380)] = 13959,
  [SMALL_STATE(381)] = 13971,
  [SMALL_STATE(382)] = 13983,
  [SMALL_STATE(383)] = 13995,
  [SMALL_STATE(384)] = 14009,
  [SMALL_STATE(385)] = 14021,
  [SMALL_STATE(386)] = 14033,
  [SMALL_STATE(387)] = 14045,
  [SMALL_STATE(388)] = 14059,
  [SMALL_STATE(389)] = 14075,
  [SMALL_STATE(390)] = 14089,
  [SMALL_STATE(391)] = 14103,
  [SMALL_STATE(392)] = 14115,
  [SMALL_STATE(393)] = 14127,
  [SMALL_STATE(394)] = 14139,
  [SMALL_STATE(395)] = 14151,
  [SMALL_STATE(396)] = 14167,
  [SMALL_STATE(397)] = 14181,
  [SMALL_STATE(398)] = 14197,
  [SMALL_STATE(399)] = 14213,
  [SMALL_STATE(400)] = 14229,
  [SMALL_STATE(401)] = 14245,
  [SMALL_STATE(402)] = 14257,
  [SMALL_STATE(403)] = 14273,
  [SMALL_STATE(404)] = 14285,
  [SMALL_STATE(405)] = 14297,
  [SMALL_STATE(406)] = 14309,
  [SMALL_STATE(407)] = 14319,
  [SMALL_STATE(408)] = 14331,
  [SMALL_STATE(409)] = 14343,
  [SMALL_STATE(410)] = 14356,
  [SMALL_STATE(411)] = 14365,
  [SMALL_STATE(412)] = 14376,
  [SMALL_STATE(413)] = 14385,
  [SMALL_STATE(414)] = 14396,
  [SMALL_STATE(415)] = 14409,
  [SMALL_STATE(416)] = 14422,
  [SMALL_STATE(417)] = 14435,
  [SMALL_STATE(418)] = 14448,
  [SMALL_STATE(419)] = 14461,
  [SMALL_STATE(420)] = 14472,
  [SMALL_STATE(421)] = 14485,
  [SMALL_STATE(422)] = 14498,
  [SMALL_STATE(423)] = 14511,
  [SMALL_STATE(424)] = 14524,
  [SMALL_STATE(425)] = 14537,
  [SMALL_STATE(426)] = 14550,
  [SMALL_STATE(427)] = 14559,
  [SMALL_STATE(428)] = 14572,
  [SMALL_STATE(429)] = 14585,
  [SMALL_STATE(430)] = 14598,
  [SMALL_STATE(431)] = 14611,
  [SMALL_STATE(432)] = 14624,
  [SMALL_STATE(433)] = 14637,
  [SMALL_STATE(434)] = 14650,
  [SMALL_STATE(435)] = 14663,
  [SMALL_STATE(436)] = 14676,
  [SMALL_STATE(437)] = 14689,
  [SMALL_STATE(438)] = 14702,
  [SMALL_STATE(439)] = 14713,
  [SMALL_STATE(440)] = 14726,
  [SMALL_STATE(441)] = 14739,
  [SMALL_STATE(442)] = 14752,
  [SMALL_STATE(443)] = 14765,
  [SMALL_STATE(444)] = 14778,
  [SMALL_STATE(445)] = 14789,
  [SMALL_STATE(446)] = 14802,
  [SMALL_STATE(447)] = 14815,
  [SMALL_STATE(448)] = 14828,
  [SMALL_STATE(449)] = 14841,
  [SMALL_STATE(450)] = 14854,
  [SMALL_STATE(451)] = 14867,
  [SMALL_STATE(452)] = 14880,
  [SMALL_STATE(453)] = 14893,
  [SMALL_STATE(454)] = 14906,
  [SMALL_STATE(455)] = 14919,
  [SMALL_STATE(456)] = 14932,
  [SMALL_STATE(457)] = 14945,
  [SMALL_STATE(458)] = 14958,
  [SMALL_STATE(459)] = 14971,
  [SMALL_STATE(460)] = 14984,
  [SMALL_STATE(461)] = 14993,
  [SMALL_STATE(462)] = 15003,
  [SMALL_STATE(463)] = 15013,
  [SMALL_STATE(464)] = 15021,
  [SMALL_STATE(465)] = 15029,
  [SMALL_STATE(466)] = 15037,
  [SMALL_STATE(467)] = 15045,
  [SMALL_STATE(468)] = 15053,
  [SMALL_STATE(469)] = 15061,
  [SMALL_STATE(470)] = 15071,
  [SMALL_STATE(471)] = 15079,
  [SMALL_STATE(472)] = 15086,
  [SMALL_STATE(473)] = 15093,
  [SMALL_STATE(474)] = 15100,
  [SMALL_STATE(475)] = 15107,
  [SMALL_STATE(476)] = 15114,
  [SMALL_STATE(477)] = 15121,
  [SMALL_STATE(478)] = 15128,
  [SMALL_STATE(479)] = 15135,
  [SMALL_STATE(480)] = 15142,
  [SMALL_STATE(481)] = 15149,
  [SMALL_STATE(482)] = 15156,
  [SMALL_STATE(483)] = 15163,
  [SMALL_STATE(484)] = 15170,
  [SMALL_STATE(485)] = 15177,
  [SMALL_STATE(486)] = 15184,
  [SMALL_STATE(487)] = 15191,
  [SMALL_STATE(488)] = 15198,
  [SMALL_STATE(489)] = 15205,
  [SMALL_STATE(490)] = 15212,
  [SMALL_STATE(491)] = 15219,
  [SMALL_STATE(492)] = 15226,
  [SMALL_STATE(493)] = 15233,
  [SMALL_STATE(494)] = 15240,
  [SMALL_STATE(495)] = 15247,
  [SMALL_STATE(496)] = 15254,
  [SMALL_STATE(497)] = 15261,
  [SMALL_STATE(498)] = 15268,
  [SMALL_STATE(499)] = 15275,
  [SMALL_STATE(500)] = 15282,
  [SMALL_STATE(501)] = 15289,
  [SMALL_STATE(502)] = 15296,
  [SMALL_STATE(503)] = 15303,
  [SMALL_STATE(504)] = 15310,
  [SMALL_STATE(505)] = 15317,
  [SMALL_STATE(506)] = 15324,
  [SMALL_STATE(507)] = 15331,
  [SMALL_STATE(508)] = 15338,
  [SMALL_STATE(509)] = 15345,
  [SMALL_STATE(510)] = 15352,
  [SMALL_STATE(511)] = 15359,
  [SMALL_STATE(512)] = 15366,
  [SMALL_STATE(513)] = 15373,
  [SMALL_STATE(514)] = 15380,
  [SMALL_STATE(515)] = 15387,
  [SMALL_STATE(516)] = 15394,
  [SMALL_STATE(517)] = 15401,
  [SMALL_STATE(518)] = 15408,
  [SMALL_STATE(519)] = 15415,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quotation, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(97),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(103),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(107),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(107),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(14),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(90),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(34),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(189),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(104),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(83),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_apply, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_apply, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(90),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(189),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__btype, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__btype, 1),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(90),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(189),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(200),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atype, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atype, 1),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(227),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__atype, 1), SHIFT(224),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(224),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 8),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 1, .production_id = 8),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(7),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(206),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(31),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__atype, 1), SHIFT(190),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(226),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(132),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(128),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(115),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(115),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(13),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(102),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(32),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(196),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(127),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(81),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(102),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(196),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(102),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(196),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(120),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(181),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(143),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(157),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(155),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(155),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(12),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(120),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(28),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(181),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(160),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(85),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(120),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(181),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), REDUCE(sym_constraint, 1, .production_id = 8),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(169),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(170),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(167),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(167),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(8),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(146),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(29),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(195),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(171),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(80),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(146),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(195),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(146),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(195),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(215),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(207),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(212),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(212),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(9),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(185),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(27),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(187),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(211),
  [498] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(82),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(185),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(187),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(185),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(187),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(236),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(183),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(236),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(183),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(256),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(259),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(254),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(254),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(11),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(236),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(30),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(183),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(257),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(79),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(200),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(227),
  [585] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(224),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(224),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(7),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(206),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(31),
  [600] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(190),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(226),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 2, .production_id = 8),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [648] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__modid, 1, .production_id = 2),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_name, 1), SHIFT(38),
  [677] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_name, 1), SHIFT(38),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tycon, 2, .production_id = 4),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tycon, 2, .production_id = 4),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type, 2, .production_id = 4),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type, 2, .production_id = 4),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor, 1),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor, 1),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tycon, 4),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tycon, 4),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_promoted_literal, 2),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_promoted_literal, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tycon_arrow, 3),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tycon_arrow, 3),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_invisible, 2),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_invisible, 2),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variable, 1),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variable, 1),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tycon, 2),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tycon, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con_list, 2),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con_list, 2),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con_unit, 2),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con_unit, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 2),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__context_constraints, 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_literal, 1),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_literal, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_star, 1),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_star, 1),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 4),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_list, 4),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
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
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 1),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [820] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(274),
  [823] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(76),
  [826] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(353),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(413),
  [832] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(279),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [837] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(206),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modid, 1, .production_id = 2),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quotation, 1),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(405),
  [851] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(278),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(266),
  [857] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(348),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(329),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fun_arrow, 2),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fun_arrow, 2),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__context, 2),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type_operator, 2),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type_operator, 2),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_constructor_operator, 2),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_constructor_operator, 2),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_operator, 1),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_operator, 1),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tyconop, 2),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tyconop, 2),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ticked_qtycon, 3),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ticked_qtycon, 3),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ticked_qtycon, 3, .production_id = 4),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ticked_qtycon, 3, .production_id = 4),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_infix, 3, .production_id = 19),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forall, 2),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [925] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2), SHIFT_REPEAT(200),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2),
  [930] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2), SHIFT_REPEAT(437),
  [933] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2), SHIFT_REPEAT(443),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3, .production_id = 15),
  [944] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_infix, 1), REDUCE(sym_constraint, 1),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3, .production_id = 17),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2, .production_id = 14),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [965] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [969] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(349),
  [972] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(391),
  [975] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(391),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2),
  [980] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2), SHIFT_REPEAT(349),
  [983] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2), SHIFT_REPEAT(296),
  [986] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__entity_header_repeat1, 2), SHIFT_REPEAT(296),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 4, .production_id = 21),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 4),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 5),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_of_attributes_start_with_no_other, 2, .production_id = 20),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_of_fields, 1, .production_id = 10),
  [1015] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_of_fields, 1, .production_id = 10),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_with_kind, 1),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_derives_repeat1, 2, .production_id = 16),
  [1023] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_derives_repeat1, 2, .production_id = 16), SHIFT_REPEAT(406),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_of_attributes_start_with_no_other, 1),
  [1028] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_of_fields_repeat1, 2), SHIFT_REPEAT(351),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_of_fields_repeat1, 2),
  [1033] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_of_fields_repeat1, 2),
  [1035] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_of_attributes_start_with_no_other_repeat1, 2), SHIFT_REPEAT(349),
  [1038] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_of_attributes_start_with_no_other_repeat1, 2), SHIFT_REPEAT(403),
  [1041] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_of_attributes_start_with_no_other_repeat1, 2), SHIFT_REPEAT(403),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_of_attributes_start_with_no_other_repeat1, 2),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__entity_line_definition, 2),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_line_definition, 2),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_derives, 2, .production_id = 13),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 2, .production_id = 5),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 6, .production_id = 22),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 1, .production_id = 1),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 2),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_surrogate_key, 2, .production_id = 9),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 7, .production_id = 23),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 3, .production_id = 6),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_key, 2),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 4, .production_id = 6),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 3, .production_id = 5),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_annotation, 2, .production_id = 9),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__qualifying_module, 2),
  [1082] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__qualifying_module, 2),
  [1084] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__qualifying_module, 2), SHIFT_REPEAT(206),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 4, .production_id = 1),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantifier, 3),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_param, 2, .production_id = 7),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inferred_type_variable, 3),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_context, 2),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_quantifiers, 3),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_fun, 3),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_of_fields_repeat1, 1),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_of_fields_repeat1, 1),
  [1113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_or_implicit, 1), SHIFT(49),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_or_implicit, 1),
  [1118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_or_implicit, 1), SHIFT(468),
  [1121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint, 1),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 1),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_derives_repeat1, 1, .production_id = 11),
  [1139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat2, 2), SHIFT_REPEAT(330),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat2, 2),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 2),
  [1148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2), SHIFT_REPEAT(35),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_no_other, 1),
  [1155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute_no_other, 1),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 1),
  [1161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_definition_repeat1, 1),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_of_attributes_start_with_no_other_repeat1, 1),
  [1165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_of_attributes_start_with_no_other_repeat1, 1),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint, 3),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 3),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_attribute, 2),
  [1173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value_attribute, 2),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kind, 1, .production_id = 18),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__context_constraints_repeat1, 2), SHIFT_REPEAT(49),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context_constraints_repeat1, 2),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_foreign_constraint_repeat1, 2), SHIFT_REPEAT(420),
  [1203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_foreign_constraint_repeat1, 2),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_derives_repeat1, 1, .production_id = 12),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_con_tuple_repeat1, 2), SHIFT_REPEAT(448),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_con_tuple_repeat1, 2),
  [1262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_tuple, 2),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_with_kind, 2),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 4),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotated_type_variable, 2, .production_id = 7),
  [1294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantified_constraint, 3),
  [1296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_context, 2),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_surrogate_key, 3, .production_id = 9),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 3),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 6),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1380] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_key, 3),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 8, .production_id = 23),
  [1392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 7, .production_id = 22),
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
