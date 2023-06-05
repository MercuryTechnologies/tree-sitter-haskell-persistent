#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 517
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 178
#define ALIAS_COUNT 5
#define TOKEN_COUNT 74
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
  aux_sym__attribute_key_value_key_token1 = 6,
  aux_sym__attribute_key_value_value_token1 = 7,
  aux_sym__attribute_key_value_value_token2 = 8,
  aux_sym__attribute_key_value_value_token3 = 9,
  sym_attribute_exclamation_mark = 10,
  sym_attribute_other = 11,
  sym__field_strictness_prefix = 12,
  sym_cascade_action = 13,
  sym_sql_constraint_name = 14,
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
  sym_label = 38,
  anon_sym_DASH = 39,
  anon_sym_LPAREN = 40,
  anon_sym_RPAREN = 41,
  anon_sym_BQUOTE = 42,
  sym_implicit_parid = 43,
  sym__conid = 44,
  anon_sym_LBRACK = 45,
  anon_sym_RBRACK = 46,
  anon_sym_SQUOTE = 47,
  anon_sym_pattern = 48,
  anon_sym_type = 49,
  anon_sym_hiding = 50,
  anon_sym_import = 51,
  anon_sym_qualified = 52,
  anon_sym_as = 53,
  anon_sym_module = 54,
  anon_sym_LBRACE = 55,
  anon_sym_RBRACE = 56,
  anon_sym_forall = 57,
  anon_sym_5 = 58,
  anon_sym_PIPE = 59,
  anon_sym_STAR = 60,
  anon_sym_6 = 61,
  anon_sym_AT = 62,
  anon_sym_PERCENT = 63,
  anon_sym_EQ = 64,
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
  sym__entity_name = 77,
  sym__field_name = 78,
  sym__haskell_constraint_name = 79,
  sym__persistent_type = 80,
  sym__entity_header = 81,
  sym__entity_line_definition = 82,
  sym__entity_key = 83,
  sym_surrogate_key = 84,
  sym_natural_key = 85,
  sym__list_of_fields = 86,
  sym__entity_attribute = 87,
  sym__field_attribute = 88,
  sym__attribute = 89,
  sym__attribute_no_other = 90,
  sym__list_of_attributes_start_with_no_other = 91,
  sym_attribute_key_value = 92,
  sym__attribute_key_value_key = 93,
  sym__attribute_key_value_value = 94,
  sym_field_definition = 95,
  sym_unique_constraint = 96,
  sym_foreign_constraint = 97,
  sym_entity_deriving = 98,
  sym__dot = 99,
  sym_integer = 100,
  sym__literal = 101,
  sym__carrow = 102,
  sym__arrow = 103,
  sym__colon2 = 104,
  sym_variable = 105,
  sym_constructor = 106,
  sym_constructor_operator = 107,
  sym_qualified_constructor_operator = 108,
  sym_con_unit = 109,
  sym_con_list = 110,
  sym_con_tuple = 111,
  sym_qualified_type = 112,
  sym__type_operator = 113,
  sym_qualified_type_operator = 114,
  sym__qualified_type_operator = 115,
  sym__ticked_qtycon = 116,
  sym__qtyconops = 117,
  sym__promoted_tyconop = 118,
  sym__qtyconop = 119,
  sym_tycon_arrow = 120,
  sym_type_literal = 121,
  sym__promoted_tycon = 122,
  sym__modid = 123,
  aux_sym__qualifying_module = 124,
  sym_type_variable = 125,
  sym_annotated_type_variable = 126,
  sym_inferred_type_variable = 127,
  sym__quantifier = 128,
  sym__forall_kw = 129,
  sym__forall_dot = 130,
  sym__forall = 131,
  sym_type_parens = 132,
  sym_type_list = 133,
  sym__type_tuple = 134,
  sym_type_tuple = 135,
  sym__type_promotable_literal = 136,
  sym__type_promoted_literal = 137,
  sym__type_literal = 138,
  sym_type_name = 139,
  sym_type_star = 140,
  sym__atype = 141,
  sym_type_invisible = 142,
  sym_type_apply = 143,
  sym__btype = 144,
  sym_implicit_param = 145,
  sym_type_infix = 146,
  sym__type_infix = 147,
  sym_constraint = 148,
  sym__quantified_constraint = 149,
  sym__constraint_context = 150,
  sym__constraint = 151,
  sym__context_constraints = 152,
  sym__context = 153,
  sym__type_quantifiers = 154,
  sym__type_context = 155,
  sym_modifier = 156,
  sym__fun_arrow = 157,
  sym__type_fun = 158,
  sym__type = 159,
  sym__type_or_implicit = 160,
  sym__type_annotation = 161,
  sym_kind = 162,
  sym__type_with_kind = 163,
  aux_sym_quasi_quotation_repeat1 = 164,
  aux_sym_entity_body_repeat1 = 165,
  aux_sym__entity_header_repeat1 = 166,
  aux_sym__list_of_fields_repeat1 = 167,
  aux_sym__list_of_attributes_start_with_no_other_repeat1 = 168,
  aux_sym_field_definition_repeat1 = 169,
  aux_sym_foreign_constraint_repeat1 = 170,
  aux_sym_entity_deriving_repeat1 = 171,
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
  [aux_sym__attribute_key_value_key_token1] = "name",
  [aux_sym__attribute_key_value_value_token1] = "integer",
  [aux_sym__attribute_key_value_value_token2] = "float",
  [aux_sym__attribute_key_value_value_token3] = "string",
  [sym_attribute_exclamation_mark] = "attribute_exclamation_mark",
  [sym_attribute_other] = "attribute_other",
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
  [sym_attribute_key_value] = "attribute_key_value",
  [sym__attribute_key_value_key] = "_attribute_key_value_key",
  [sym__attribute_key_value_value] = "_attribute_key_value_value",
  [sym_field_definition] = "field_definition",
  [sym_unique_constraint] = "unique_constraint",
  [sym_foreign_constraint] = "foreign_constraint",
  [sym_entity_deriving] = "entity_deriving",
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
  [aux_sym__entity_header_repeat1] = "_entity_header_repeat1",
  [aux_sym__list_of_fields_repeat1] = "_list_of_fields_repeat1",
  [aux_sym__list_of_attributes_start_with_no_other_repeat1] = "_list_of_attributes_start_with_no_other_repeat1",
  [aux_sym_field_definition_repeat1] = "field_definition_repeat1",
  [aux_sym_foreign_constraint_repeat1] = "foreign_constraint_repeat1",
  [aux_sym_entity_deriving_repeat1] = "entity_deriving_repeat1",
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
  [aux_sym__attribute_key_value_key_token1] = aux_sym__attribute_key_value_key_token1,
  [aux_sym__attribute_key_value_value_token1] = sym_integer,
  [aux_sym__attribute_key_value_value_token2] = sym_float,
  [aux_sym__attribute_key_value_value_token3] = sym_string,
  [sym_attribute_exclamation_mark] = sym_attribute_exclamation_mark,
  [sym_attribute_other] = sym_attribute_other,
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
  [sym_attribute_key_value] = sym_attribute_key_value,
  [sym__attribute_key_value_key] = sym__attribute_key_value_key,
  [sym__attribute_key_value_value] = sym__attribute_key_value_value,
  [sym_field_definition] = sym_field_definition,
  [sym_unique_constraint] = sym_unique_constraint,
  [sym_foreign_constraint] = sym_foreign_constraint,
  [sym_entity_deriving] = sym_entity_deriving,
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
  [aux_sym__entity_header_repeat1] = aux_sym__entity_header_repeat1,
  [aux_sym__list_of_fields_repeat1] = aux_sym__list_of_fields_repeat1,
  [aux_sym__list_of_attributes_start_with_no_other_repeat1] = aux_sym__list_of_attributes_start_with_no_other_repeat1,
  [aux_sym_field_definition_repeat1] = aux_sym_field_definition_repeat1,
  [aux_sym_foreign_constraint_repeat1] = aux_sym_foreign_constraint_repeat1,
  [aux_sym_entity_deriving_repeat1] = aux_sym_entity_deriving_repeat1,
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
  [aux_sym__attribute_key_value_key_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__attribute_key_value_value_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__attribute_key_value_value_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__attribute_key_value_value_token3] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_exclamation_mark] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_other] = {
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
  [sym_attribute_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute_key_value_key] = {
    .visible = false,
    .named = true,
  },
  [sym__attribute_key_value_value] = {
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
  [sym_entity_deriving] = {
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
  [aux_sym_entity_deriving_repeat1] = {
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
  [44] = 43,
  [45] = 45,
  [46] = 45,
  [47] = 47,
  [48] = 48,
  [49] = 48,
  [50] = 50,
  [51] = 41,
  [52] = 40,
  [53] = 42,
  [54] = 50,
  [55] = 42,
  [56] = 40,
  [57] = 50,
  [58] = 41,
  [59] = 42,
  [60] = 60,
  [61] = 41,
  [62] = 62,
  [63] = 40,
  [64] = 42,
  [65] = 41,
  [66] = 40,
  [67] = 50,
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
  [80] = 80,
  [81] = 79,
  [82] = 79,
  [83] = 79,
  [84] = 79,
  [85] = 79,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 87,
  [92] = 92,
  [93] = 89,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 86,
  [108] = 108,
  [109] = 88,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 95,
  [115] = 110,
  [116] = 111,
  [117] = 106,
  [118] = 103,
  [119] = 112,
  [120] = 96,
  [121] = 86,
  [122] = 113,
  [123] = 98,
  [124] = 94,
  [125] = 101,
  [126] = 104,
  [127] = 88,
  [128] = 102,
  [129] = 87,
  [130] = 92,
  [131] = 99,
  [132] = 132,
  [133] = 89,
  [134] = 97,
  [135] = 108,
  [136] = 105,
  [137] = 100,
  [138] = 102,
  [139] = 95,
  [140] = 86,
  [141] = 103,
  [142] = 87,
  [143] = 104,
  [144] = 106,
  [145] = 99,
  [146] = 94,
  [147] = 110,
  [148] = 88,
  [149] = 132,
  [150] = 89,
  [151] = 100,
  [152] = 113,
  [153] = 97,
  [154] = 101,
  [155] = 108,
  [156] = 111,
  [157] = 112,
  [158] = 96,
  [159] = 98,
  [160] = 92,
  [161] = 100,
  [162] = 95,
  [163] = 97,
  [164] = 132,
  [165] = 101,
  [166] = 110,
  [167] = 96,
  [168] = 106,
  [169] = 94,
  [170] = 99,
  [171] = 98,
  [172] = 111,
  [173] = 112,
  [174] = 92,
  [175] = 102,
  [176] = 103,
  [177] = 104,
  [178] = 113,
  [179] = 108,
  [180] = 132,
  [181] = 181,
  [182] = 181,
  [183] = 181,
  [184] = 181,
  [185] = 181,
  [186] = 181,
  [187] = 181,
  [188] = 88,
  [189] = 181,
  [190] = 86,
  [191] = 87,
  [192] = 181,
  [193] = 89,
  [194] = 181,
  [195] = 181,
  [196] = 181,
  [197] = 111,
  [198] = 96,
  [199] = 92,
  [200] = 108,
  [201] = 112,
  [202] = 110,
  [203] = 96,
  [204] = 106,
  [205] = 88,
  [206] = 113,
  [207] = 98,
  [208] = 102,
  [209] = 94,
  [210] = 95,
  [211] = 104,
  [212] = 97,
  [213] = 99,
  [214] = 100,
  [215] = 103,
  [216] = 101,
  [217] = 217,
  [218] = 218,
  [219] = 132,
  [220] = 220,
  [221] = 105,
  [222] = 101,
  [223] = 94,
  [224] = 95,
  [225] = 111,
  [226] = 112,
  [227] = 97,
  [228] = 99,
  [229] = 100,
  [230] = 113,
  [231] = 106,
  [232] = 98,
  [233] = 87,
  [234] = 88,
  [235] = 89,
  [236] = 86,
  [237] = 87,
  [238] = 86,
  [239] = 89,
  [240] = 104,
  [241] = 95,
  [242] = 112,
  [243] = 113,
  [244] = 98,
  [245] = 94,
  [246] = 92,
  [247] = 108,
  [248] = 92,
  [249] = 102,
  [250] = 96,
  [251] = 251,
  [252] = 111,
  [253] = 110,
  [254] = 254,
  [255] = 97,
  [256] = 99,
  [257] = 106,
  [258] = 108,
  [259] = 103,
  [260] = 102,
  [261] = 101,
  [262] = 104,
  [263] = 103,
  [264] = 100,
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
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 281,
  [285] = 283,
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
  [296] = 280,
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
  [312] = 96,
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
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 326,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 89,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 87,
  [341] = 341,
  [342] = 342,
  [343] = 88,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 87,
  [349] = 349,
  [350] = 86,
  [351] = 351,
  [352] = 86,
  [353] = 341,
  [354] = 354,
  [355] = 355,
  [356] = 89,
  [357] = 357,
  [358] = 275,
  [359] = 359,
  [360] = 360,
  [361] = 100,
  [362] = 101,
  [363] = 108,
  [364] = 111,
  [365] = 112,
  [366] = 366,
  [367] = 113,
  [368] = 98,
  [369] = 94,
  [370] = 104,
  [371] = 360,
  [372] = 372,
  [373] = 97,
  [374] = 106,
  [375] = 372,
  [376] = 92,
  [377] = 95,
  [378] = 360,
  [379] = 92,
  [380] = 99,
  [381] = 381,
  [382] = 108,
  [383] = 360,
  [384] = 360,
  [385] = 360,
  [386] = 102,
  [387] = 360,
  [388] = 104,
  [389] = 389,
  [390] = 390,
  [391] = 102,
  [392] = 392,
  [393] = 103,
  [394] = 360,
  [395] = 395,
  [396] = 103,
  [397] = 96,
  [398] = 360,
  [399] = 360,
  [400] = 400,
  [401] = 360,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 404,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 407,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 404,
  [419] = 419,
  [420] = 412,
  [421] = 404,
  [422] = 412,
  [423] = 423,
  [424] = 407,
  [425] = 419,
  [426] = 412,
  [427] = 404,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 419,
  [432] = 88,
  [433] = 419,
  [434] = 434,
  [435] = 407,
  [436] = 407,
  [437] = 419,
  [438] = 412,
  [439] = 404,
  [440] = 412,
  [441] = 441,
  [442] = 407,
  [443] = 419,
  [444] = 444,
  [445] = 445,
  [446] = 419,
  [447] = 407,
  [448] = 412,
  [449] = 449,
  [450] = 88,
  [451] = 419,
  [452] = 412,
  [453] = 404,
  [454] = 404,
  [455] = 407,
  [456] = 89,
  [457] = 457,
  [458] = 458,
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
  [469] = 468,
  [470] = 470,
  [471] = 470,
  [472] = 468,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 475,
  [477] = 470,
  [478] = 473,
  [479] = 468,
  [480] = 470,
  [481] = 475,
  [482] = 473,
  [483] = 470,
  [484] = 468,
  [485] = 473,
  [486] = 486,
  [487] = 468,
  [488] = 475,
  [489] = 470,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 475,
  [494] = 494,
  [495] = 470,
  [496] = 468,
  [497] = 473,
  [498] = 498,
  [499] = 499,
  [500] = 475,
  [501] = 473,
  [502] = 470,
  [503] = 475,
  [504] = 504,
  [505] = 475,
  [506] = 506,
  [507] = 470,
  [508] = 468,
  [509] = 473,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 473,
  [515] = 473,
  [516] = 468,
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
      if (eof) ADVANCE(126);
      if (sym_comment_character_set_1(lookahead)) SKIP(124)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '%') ADVANCE(297);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == '+') ADVANCE(127);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(265);
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(299);
      if (lookahead == '?') ADVANCE(123);
      if (lookahead == '@') ADVANCE(295);
      if (lookahead == 'F') ADVANCE(65);
      if (lookahead == 'I') ADVANCE(35);
      if (lookahead == 'O') ADVANCE(61);
      if (lookahead == 'P') ADVANCE(67);
      if (lookahead == 'R') ADVANCE(38);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead == '{') ADVANCE(289);
      if (lookahead == '|') ADVANCE(292);
      if (lookahead == '}') ADVANCE(290);
      if (lookahead == 8592) ADVANCE(256);
      if (lookahead == 8594) ADVANCE(253);
      if (lookahead == 8658) ADVANCE(250);
      if (lookahead == 8704) ADVANCE(291);
      if (lookahead == 8759) ADVANCE(258);
      if (lookahead == 9733) ADVANCE(294);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (sym__varid_character_set_1(lookahead)) ADVANCE(264);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '"') ADVANCE(231);
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
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(227);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(132);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '>') ADVANCE(254);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(257);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(260);
      if (sym__consym_character_set_1(lookahead)) ADVANCE(211);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(259);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == 'c') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == 'e') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == 'e') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == 'f') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == 's') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(251);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(28);
      if (lookahead == 'R') ADVANCE(48);
      if (lookahead == 'S') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(39);
      if (lookahead == 'U') ADVANCE(66);
      END_STATE();
    case 25:
      if (lookahead == 'D') ADVANCE(45);
      if (lookahead == 'N') ADVANCE(79);
      END_STATE();
    case 26:
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 81:
      if (lookahead == 'y') ADVANCE(135);
      END_STATE();
    case 82:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(142);
      END_STATE();
    case 83:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 84:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(221);
      END_STATE();
    case 85:
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(85)
      if (lookahead == '"') ADVANCE(149);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(155);
      if (lookahead == '-') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t') ADVANCE(162);
      END_STATE();
    case 86:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(240);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(243);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(140);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(142);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(220);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(221);
      END_STATE();
    case 92:
      if (sym_comment_character_set_1(lookahead)) SKIP(92)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '0') ADVANCE(236);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '?') ADVANCE(218);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == 8594) ADVANCE(253);
      if (lookahead == 8704) ADVANCE(291);
      if (lookahead == 9733) ADVANCE(294);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(217);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(264);
      END_STATE();
    case 93:
      if (sym_comment_character_set_1(lookahead)) SKIP(93)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '0') ADVANCE(236);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '?') ADVANCE(218);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == 8704) ADVANCE(291);
      if (lookahead == 9733) ADVANCE(294);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(217);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(264);
      END_STATE();
    case 94:
      if (sym_comment_character_set_1(lookahead)) SKIP(94)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '0') ADVANCE(236);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '=') ADVANCE(215);
      if (lookahead == '@') ADVANCE(296);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead == 8594) ADVANCE(253);
      if (lookahead == 8658) ADVANCE(250);
      if (lookahead == 8759) ADVANCE(258);
      if (lookahead == 9733) ADVANCE(294);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(217);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 95:
      if (sym_comment_character_set_1(lookahead)) SKIP(95)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '0') ADVANCE(236);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '=') ADVANCE(215);
      if (lookahead == '@') ADVANCE(296);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead == '}') ADVANCE(290);
      if (lookahead == 8594) ADVANCE(253);
      if (lookahead == 8658) ADVANCE(250);
      if (lookahead == 9733) ADVANCE(294);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(217);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 96:
      if (sym_comment_character_set_1(lookahead)) SKIP(96)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '0') ADVANCE(236);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '@') ADVANCE(296);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead == 8594) ADVANCE(253);
      if (lookahead == 8759) ADVANCE(258);
      if (lookahead == 9733) ADVANCE(294);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(217);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 97:
      if (sym_comment_character_set_1(lookahead)) SKIP(97)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '0') ADVANCE(236);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '@') ADVANCE(296);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead == '}') ADVANCE(290);
      if (lookahead == 8594) ADVANCE(253);
      if (lookahead == 9733) ADVANCE(294);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(217);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 98:
      if (sym_comment_character_set_1(lookahead)) SKIP(98)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '0') ADVANCE(236);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '=') ADVANCE(215);
      if (lookahead == '@') ADVANCE(296);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead == 8658) ADVANCE(250);
      if (lookahead == 9733) ADVANCE(294);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(217);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 99:
      if (sym_comment_character_set_1(lookahead)) SKIP(99)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '0') ADVANCE(236);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '@') ADVANCE(296);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead == 9733) ADVANCE(294);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '+' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(217);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 100:
      if (sym_comment_character_set_1(lookahead)) SKIP(100)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(132);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == '0') ADVANCE(236);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead == '{') ADVANCE(289);
      if (lookahead == 8594) ADVANCE(253);
      if (lookahead == 8658) ADVANCE(250);
      if (lookahead == 9733) ADVANCE(294);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 101:
      if (sym_comment_character_set_1(lookahead)) SKIP(101)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == '0') ADVANCE(236);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '=') ADVANCE(215);
      if (lookahead == '@') ADVANCE(296);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead == 8594) ADVANCE(253);
      if (lookahead == 8658) ADVANCE(250);
      if (lookahead == 8759) ADVANCE(258);
      if (lookahead == 9733) ADVANCE(294);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(217);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 102:
      if (sym_comment_character_set_1(lookahead)) SKIP(102)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == '0') ADVANCE(236);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '=') ADVANCE(215);
      if (lookahead == '@') ADVANCE(296);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead == '}') ADVANCE(290);
      if (lookahead == 8594) ADVANCE(253);
      if (lookahead == 8658) ADVANCE(250);
      if (lookahead == 9733) ADVANCE(294);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(217);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 103:
      if (sym_comment_character_set_1(lookahead)) SKIP(103)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == '0') ADVANCE(236);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '@') ADVANCE(296);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead == 8594) ADVANCE(253);
      if (lookahead == 8759) ADVANCE(258);
      if (lookahead == 9733) ADVANCE(294);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(217);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 104:
      if (sym_comment_character_set_1(lookahead)) SKIP(104)
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == '=') ADVANCE(215);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead == 8594) ADVANCE(253);
      if (lookahead == 8658) ADVANCE(250);
      if (lookahead == 8759) ADVANCE(258);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(217);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 105:
      if (sym_comment_character_set_1(lookahead)) SKIP(105)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == '0') ADVANCE(236);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '@') ADVANCE(296);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead == '}') ADVANCE(290);
      if (lookahead == 8594) ADVANCE(253);
      if (lookahead == 9733) ADVANCE(294);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(217);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 106:
      if (sym_comment_character_set_1(lookahead)) SKIP(106)
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '=') ADVANCE(215);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead == '}') ADVANCE(290);
      if (lookahead == 8594) ADVANCE(253);
      if (lookahead == 8658) ADVANCE(250);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(217);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 107:
      if (sym_comment_character_set_1(lookahead)) SKIP(107)
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead == 8594) ADVANCE(253);
      if (lookahead == 8759) ADVANCE(258);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(217);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 108:
      if (sym_comment_character_set_1(lookahead)) SKIP(108)
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '%') ADVANCE(298);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead == '}') ADVANCE(290);
      if (lookahead == 8594) ADVANCE(253);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          ('|' <= lookahead && lookahead <= '~') ||
          lookahead == 8902) ADVANCE(217);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 109:
      if (sym_comment_character_set_1(lookahead)) SKIP(109)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == '0') ADVANCE(236);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '=') ADVANCE(215);
      if (lookahead == '@') ADVANCE(296);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead == 8658) ADVANCE(250);
      if (lookahead == 9733) ADVANCE(294);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('!' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(217);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 110:
      if (sym_comment_character_set_1(lookahead)) SKIP(110)
      if (lookahead == '#') ADVANCE(132);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'F') ADVANCE(278);
      if (lookahead == 'I') ADVANCE(271);
      if (lookahead == 'P') ADVANCE(279);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(166);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(264);
      END_STATE();
    case 111:
      if (sym_comment_character_set_1(lookahead)) SKIP(111)
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '=') ADVANCE(215);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead == 8658) ADVANCE(250);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          ('+' <= lookahead && lookahead <= '/') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(217);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 112:
      if (sym_comment_character_set_1(lookahead)) SKIP(112)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == '0') ADVANCE(236);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '@') ADVANCE(296);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead == 9733) ADVANCE(294);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '+' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          lookahead == '^' ||
          lookahead == '|' ||
          lookahead == '~' ||
          lookahead == 8902) ADVANCE(217);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 113:
      if (sym_comment_character_set_1(lookahead)) SKIP(113)
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == 8594) ADVANCE(253);
      if (sym__tyconsym_character_set_1(lookahead)) ADVANCE(217);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      if (sym__varid_character_set_2(lookahead)) ADVANCE(264);
      END_STATE();
    case 114:
      if (sym_comment_character_set_1(lookahead)) SKIP(114)
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '`') ADVANCE(268);
      if (sym__tyconsym_character_set_1(lookahead)) ADVANCE(217);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      END_STATE();
    case 115:
      if (sym_comment_character_set_1(lookahead)) SKIP(115)
      if (lookahead == '!') ADVANCE(122);
      if (lookahead == '#') ADVANCE(132);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == '@') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 116:
      if (sym_comment_character_set_1(lookahead)) SKIP(116)
      if (lookahead == '!') ADVANCE(122);
      if (lookahead == '#') ADVANCE(132);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'R') ADVANCE(13);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(21);
      if (sym__varid_character_set_4(lookahead)) ADVANCE(264);
      END_STATE();
    case 117:
      if (sym_comment_character_set_1(lookahead)) SKIP(117)
      if (lookahead == '#') ADVANCE(132);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 'O') ADVANCE(64);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead == '}') ADVANCE(290);
      if (lookahead == 8594) ADVANCE(253);
      if (lookahead == 8759) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 120:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 122:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 123:
      if (sym_implicit_parid_character_set_1(lookahead)) ADVANCE(269);
      END_STATE();
    case 124:
      if (eof) ADVANCE(126);
      if (sym_comment_character_set_1(lookahead)) SKIP(124)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '%') ADVANCE(297);
      if (lookahead == '\'') ADVANCE(288);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == '*') ADVANCE(293);
      if (lookahead == '+') ADVANCE(127);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(265);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '<') ADVANCE(9);
      if (lookahead == '=') ADVANCE(299);
      if (lookahead == '?') ADVANCE(123);
      if (lookahead == '@') ADVANCE(295);
      if (lookahead == 'F') ADVANCE(65);
      if (lookahead == 'I') ADVANCE(35);
      if (lookahead == 'O') ADVANCE(61);
      if (lookahead == 'P') ADVANCE(67);
      if (lookahead == 'R') ADVANCE(38);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead == '{') ADVANCE(289);
      if (lookahead == '|') ADVANCE(292);
      if (lookahead == '}') ADVANCE(290);
      if (lookahead == 8592) ADVANCE(256);
      if (lookahead == 8594) ADVANCE(253);
      if (lookahead == 8658) ADVANCE(250);
      if (lookahead == 8704) ADVANCE(291);
      if (lookahead == 8759) ADVANCE(258);
      if (lookahead == 9733) ADVANCE(294);
      if (lookahead == '!' ||
          lookahead == '~') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (sym__varid_character_set_1(lookahead)) ADVANCE(264);
      END_STATE();
    case 125:
      if (eof) ADVANCE(126);
      if (sym_comment_character_set_1(lookahead)) SKIP(125)
      if (lookahead == '#') ADVANCE(132);
      if (lookahead == '%') ADVANCE(297);
      if (lookahead == '\'') ADVANCE(287);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == '+') ADVANCE(127);
      if (lookahead == ',') ADVANCE(208);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '`') ADVANCE(268);
      if (lookahead == '{') ADVANCE(289);
      if (lookahead == '}') ADVANCE(290);
      if (lookahead == 8594) ADVANCE(253);
      if (lookahead == 8658) ADVANCE(250);
      if (lookahead == 8759) ADVANCE(258);
      if (sym__conid_character_set_1(lookahead)) ADVANCE(284);
      if (sym__varid_character_set_3(lookahead)) ADVANCE(264);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_is_sum_marker);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_comment);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_comment);
      if (sym_implicit_parid_character_set_1(lookahead)) ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_Id);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_Id);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_Primary);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_Primary);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_key_token1);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token1);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token1);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(162);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(162);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(162);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '"') ADVANCE(148);
      if (lookahead == '\\') ADVANCE(144);
      if (lookahead == '^') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '^') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '"') ADVANCE(149);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(155);
      if (lookahead == '-') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(162);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '#') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '#') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '\\') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '"') ADVANCE(148);
      if (lookahead == '\\') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '#') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(162);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '#') ADVANCE(157);
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(162);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '\'') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '\'') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(162);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(162);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(162);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(162);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__attribute_key_value_value_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_attribute_exclamation_mark);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_attribute_other);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == '@') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_attribute_other);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__field_strictness_prefix);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_cascade_action);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_cascade_action);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'C') ADVANCE(173);
      if (lookahead == 'R') ADVANCE(186);
      if (lookahead == 'S') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'D') ADVANCE(180);
      if (lookahead == 'U') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'D') ADVANCE(183);
      if (lookahead == 'N') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'a') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'a') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'a') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'a') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'c') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'c') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'd') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'd') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'f') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'i') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'l') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'l') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'l') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'l') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'p') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'r') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 's') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 's') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 't') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 't') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 't') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'u') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (lookahead == 'u') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_sql_constraint_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_Foreign);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_Foreign);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_References);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_References);
      if (lookahead == '=') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(217);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__consym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == '>') ADVANCE(255);
      if (sym__tyconsym_character_set_2(lookahead)) ADVANCE(217);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == '-') ADVANCE(129);
      if (sym__tyconsym_character_set_2(lookahead)) ADVANCE(217);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == ':') ADVANCE(260);
      if (sym__consym_character_set_1(lookahead)) ADVANCE(211);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__tyconsym);
      if (lookahead == '>') ADVANCE(252);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(217);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__tyconsym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(211);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__tyconsym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__tyconsym);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(217);
      if (sym_implicit_parid_character_set_1(lookahead)) ADVANCE(269);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(222);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '#') ADVANCE(219);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(223);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(224);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '#') ADVANCE(225);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '\'') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(5);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(229);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '#') ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__integer_literal);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(86);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(87);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '#') ADVANCE(235);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__binary_literal);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__binary_literal);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__binary_literal);
      if (lookahead == '#') ADVANCE(239);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__octal_literal);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '#') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(243);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '#') ADVANCE(242);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__hex_literal);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(249);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__hex_literal);
      if (lookahead == '#') ADVANCE(245);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(217);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(217);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(211);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__immediate_dot);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__varid);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '\'') ADVANCE(264);
      if (lookahead == '=') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__varid);
      if (lookahead == '#') ADVANCE(262);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '>') ADVANCE(254);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_implicit_parid);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__conid);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      if (lookahead == 'g') ADVANCE(277);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      if (lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      if (lookahead == 'm') ADVANCE(283);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      if (lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(284);
      if (lookahead == 'y') ADVANCE(136);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__conid);
      if (lookahead == '#') ADVANCE(270);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(6);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_AT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(217);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (sym_comment_character_set_2(lookahead)) ADVANCE(217);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(251);
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
  [1] = {.lex_state = 125},
  [2] = {.lex_state = 92},
  [3] = {.lex_state = 92},
  [4] = {.lex_state = 92},
  [5] = {.lex_state = 92},
  [6] = {.lex_state = 92},
  [7] = {.lex_state = 92},
  [8] = {.lex_state = 92},
  [9] = {.lex_state = 92},
  [10] = {.lex_state = 92},
  [11] = {.lex_state = 92},
  [12] = {.lex_state = 92},
  [13] = {.lex_state = 92},
  [14] = {.lex_state = 92},
  [15] = {.lex_state = 93},
  [16] = {.lex_state = 93},
  [17] = {.lex_state = 93},
  [18] = {.lex_state = 93},
  [19] = {.lex_state = 93},
  [20] = {.lex_state = 93},
  [21] = {.lex_state = 93},
  [22] = {.lex_state = 93},
  [23] = {.lex_state = 93},
  [24] = {.lex_state = 93},
  [25] = {.lex_state = 93},
  [26] = {.lex_state = 93},
  [27] = {.lex_state = 92},
  [28] = {.lex_state = 92},
  [29] = {.lex_state = 92},
  [30] = {.lex_state = 92},
  [31] = {.lex_state = 92},
  [32] = {.lex_state = 92},
  [33] = {.lex_state = 92},
  [34] = {.lex_state = 92},
  [35] = {.lex_state = 92},
  [36] = {.lex_state = 92},
  [37] = {.lex_state = 92},
  [38] = {.lex_state = 92},
  [39] = {.lex_state = 92},
  [40] = {.lex_state = 94},
  [41] = {.lex_state = 94},
  [42] = {.lex_state = 94},
  [43] = {.lex_state = 92},
  [44] = {.lex_state = 92},
  [45] = {.lex_state = 92},
  [46] = {.lex_state = 92},
  [47] = {.lex_state = 92},
  [48] = {.lex_state = 92},
  [49] = {.lex_state = 92},
  [50] = {.lex_state = 94},
  [51] = {.lex_state = 95},
  [52] = {.lex_state = 95},
  [53] = {.lex_state = 95},
  [54] = {.lex_state = 95},
  [55] = {.lex_state = 96},
  [56] = {.lex_state = 96},
  [57] = {.lex_state = 94},
  [58] = {.lex_state = 96},
  [59] = {.lex_state = 97},
  [60] = {.lex_state = 92},
  [61] = {.lex_state = 97},
  [62] = {.lex_state = 92},
  [63] = {.lex_state = 97},
  [64] = {.lex_state = 98},
  [65] = {.lex_state = 98},
  [66] = {.lex_state = 98},
  [67] = {.lex_state = 98},
  [68] = {.lex_state = 99},
  [69] = {.lex_state = 99},
  [70] = {.lex_state = 99},
  [71] = {.lex_state = 100},
  [72] = {.lex_state = 100},
  [73] = {.lex_state = 92},
  [74] = {.lex_state = 92},
  [75] = {.lex_state = 92},
  [76] = {.lex_state = 92},
  [77] = {.lex_state = 92},
  [78] = {.lex_state = 92},
  [79] = {.lex_state = 92},
  [80] = {.lex_state = 92},
  [81] = {.lex_state = 92},
  [82] = {.lex_state = 92},
  [83] = {.lex_state = 92},
  [84] = {.lex_state = 92},
  [85] = {.lex_state = 92},
  [86] = {.lex_state = 101},
  [87] = {.lex_state = 101},
  [88] = {.lex_state = 101},
  [89] = {.lex_state = 101},
  [90] = {.lex_state = 94},
  [91] = {.lex_state = 102},
  [92] = {.lex_state = 94},
  [93] = {.lex_state = 102},
  [94] = {.lex_state = 94},
  [95] = {.lex_state = 94},
  [96] = {.lex_state = 94},
  [97] = {.lex_state = 94},
  [98] = {.lex_state = 94},
  [99] = {.lex_state = 94},
  [100] = {.lex_state = 94},
  [101] = {.lex_state = 94},
  [102] = {.lex_state = 94},
  [103] = {.lex_state = 94},
  [104] = {.lex_state = 94},
  [105] = {.lex_state = 94},
  [106] = {.lex_state = 94},
  [107] = {.lex_state = 102},
  [108] = {.lex_state = 94},
  [109] = {.lex_state = 102},
  [110] = {.lex_state = 94},
  [111] = {.lex_state = 94},
  [112] = {.lex_state = 94},
  [113] = {.lex_state = 94},
  [114] = {.lex_state = 95},
  [115] = {.lex_state = 95},
  [116] = {.lex_state = 95},
  [117] = {.lex_state = 95},
  [118] = {.lex_state = 95},
  [119] = {.lex_state = 95},
  [120] = {.lex_state = 95},
  [121] = {.lex_state = 103},
  [122] = {.lex_state = 95},
  [123] = {.lex_state = 95},
  [124] = {.lex_state = 95},
  [125] = {.lex_state = 95},
  [126] = {.lex_state = 95},
  [127] = {.lex_state = 103},
  [128] = {.lex_state = 95},
  [129] = {.lex_state = 103},
  [130] = {.lex_state = 95},
  [131] = {.lex_state = 95},
  [132] = {.lex_state = 104},
  [133] = {.lex_state = 103},
  [134] = {.lex_state = 95},
  [135] = {.lex_state = 95},
  [136] = {.lex_state = 95},
  [137] = {.lex_state = 95},
  [138] = {.lex_state = 96},
  [139] = {.lex_state = 96},
  [140] = {.lex_state = 105},
  [141] = {.lex_state = 96},
  [142] = {.lex_state = 105},
  [143] = {.lex_state = 96},
  [144] = {.lex_state = 96},
  [145] = {.lex_state = 96},
  [146] = {.lex_state = 96},
  [147] = {.lex_state = 96},
  [148] = {.lex_state = 105},
  [149] = {.lex_state = 106},
  [150] = {.lex_state = 105},
  [151] = {.lex_state = 96},
  [152] = {.lex_state = 96},
  [153] = {.lex_state = 96},
  [154] = {.lex_state = 96},
  [155] = {.lex_state = 96},
  [156] = {.lex_state = 96},
  [157] = {.lex_state = 96},
  [158] = {.lex_state = 96},
  [159] = {.lex_state = 96},
  [160] = {.lex_state = 96},
  [161] = {.lex_state = 97},
  [162] = {.lex_state = 97},
  [163] = {.lex_state = 97},
  [164] = {.lex_state = 107},
  [165] = {.lex_state = 97},
  [166] = {.lex_state = 97},
  [167] = {.lex_state = 97},
  [168] = {.lex_state = 97},
  [169] = {.lex_state = 97},
  [170] = {.lex_state = 97},
  [171] = {.lex_state = 97},
  [172] = {.lex_state = 97},
  [173] = {.lex_state = 97},
  [174] = {.lex_state = 97},
  [175] = {.lex_state = 97},
  [176] = {.lex_state = 97},
  [177] = {.lex_state = 97},
  [178] = {.lex_state = 97},
  [179] = {.lex_state = 97},
  [180] = {.lex_state = 108},
  [181] = {.lex_state = 92},
  [182] = {.lex_state = 92},
  [183] = {.lex_state = 92},
  [184] = {.lex_state = 92},
  [185] = {.lex_state = 92},
  [186] = {.lex_state = 92},
  [187] = {.lex_state = 92},
  [188] = {.lex_state = 109},
  [189] = {.lex_state = 92},
  [190] = {.lex_state = 109},
  [191] = {.lex_state = 109},
  [192] = {.lex_state = 92},
  [193] = {.lex_state = 109},
  [194] = {.lex_state = 92},
  [195] = {.lex_state = 92},
  [196] = {.lex_state = 92},
  [197] = {.lex_state = 98},
  [198] = {.lex_state = 100},
  [199] = {.lex_state = 98},
  [200] = {.lex_state = 98},
  [201] = {.lex_state = 98},
  [202] = {.lex_state = 98},
  [203] = {.lex_state = 98},
  [204] = {.lex_state = 98},
  [205] = {.lex_state = 100},
  [206] = {.lex_state = 98},
  [207] = {.lex_state = 98},
  [208] = {.lex_state = 98},
  [209] = {.lex_state = 98},
  [210] = {.lex_state = 98},
  [211] = {.lex_state = 98},
  [212] = {.lex_state = 98},
  [213] = {.lex_state = 98},
  [214] = {.lex_state = 98},
  [215] = {.lex_state = 98},
  [216] = {.lex_state = 98},
  [217] = {.lex_state = 110, .external_lex_state = 2},
  [218] = {.lex_state = 110, .external_lex_state = 2},
  [219] = {.lex_state = 111},
  [220] = {.lex_state = 110},
  [221] = {.lex_state = 98},
  [222] = {.lex_state = 100},
  [223] = {.lex_state = 100},
  [224] = {.lex_state = 100},
  [225] = {.lex_state = 100},
  [226] = {.lex_state = 100},
  [227] = {.lex_state = 100},
  [228] = {.lex_state = 100},
  [229] = {.lex_state = 100},
  [230] = {.lex_state = 100},
  [231] = {.lex_state = 100},
  [232] = {.lex_state = 100},
  [233] = {.lex_state = 112},
  [234] = {.lex_state = 112},
  [235] = {.lex_state = 112},
  [236] = {.lex_state = 100},
  [237] = {.lex_state = 100},
  [238] = {.lex_state = 112},
  [239] = {.lex_state = 100},
  [240] = {.lex_state = 99},
  [241] = {.lex_state = 99},
  [242] = {.lex_state = 99},
  [243] = {.lex_state = 99},
  [244] = {.lex_state = 99},
  [245] = {.lex_state = 99},
  [246] = {.lex_state = 99},
  [247] = {.lex_state = 99},
  [248] = {.lex_state = 100},
  [249] = {.lex_state = 99},
  [250] = {.lex_state = 99},
  [251] = {.lex_state = 125},
  [252] = {.lex_state = 99},
  [253] = {.lex_state = 99},
  [254] = {.lex_state = 125},
  [255] = {.lex_state = 99},
  [256] = {.lex_state = 99},
  [257] = {.lex_state = 99},
  [258] = {.lex_state = 100},
  [259] = {.lex_state = 99},
  [260] = {.lex_state = 100},
  [261] = {.lex_state = 99},
  [262] = {.lex_state = 100},
  [263] = {.lex_state = 100},
  [264] = {.lex_state = 99},
  [265] = {.lex_state = 113},
  [266] = {.lex_state = 113},
  [267] = {.lex_state = 114},
  [268] = {.lex_state = 92},
  [269] = {.lex_state = 92},
  [270] = {.lex_state = 92},
  [271] = {.lex_state = 92},
  [272] = {.lex_state = 92},
  [273] = {.lex_state = 92},
  [274] = {.lex_state = 114},
  [275] = {.lex_state = 92},
  [276] = {.lex_state = 92},
  [277] = {.lex_state = 92},
  [278] = {.lex_state = 125},
  [279] = {.lex_state = 125},
  [280] = {.lex_state = 125},
  [281] = {.lex_state = 114},
  [282] = {.lex_state = 125},
  [283] = {.lex_state = 125},
  [284] = {.lex_state = 114},
  [285] = {.lex_state = 125},
  [286] = {.lex_state = 125},
  [287] = {.lex_state = 125},
  [288] = {.lex_state = 115, .external_lex_state = 3},
  [289] = {.lex_state = 115, .external_lex_state = 3},
  [290] = {.lex_state = 115, .external_lex_state = 3},
  [291] = {.lex_state = 115, .external_lex_state = 3},
  [292] = {.lex_state = 115, .external_lex_state = 3},
  [293] = {.lex_state = 115, .external_lex_state = 3},
  [294] = {.lex_state = 115, .external_lex_state = 3},
  [295] = {.lex_state = 115, .external_lex_state = 3},
  [296] = {.lex_state = 125},
  [297] = {.lex_state = 115, .external_lex_state = 3},
  [298] = {.lex_state = 115, .external_lex_state = 3},
  [299] = {.lex_state = 115, .external_lex_state = 3},
  [300] = {.lex_state = 116, .external_lex_state = 3},
  [301] = {.lex_state = 110, .external_lex_state = 2},
  [302] = {.lex_state = 115, .external_lex_state = 3},
  [303] = {.lex_state = 116, .external_lex_state = 3},
  [304] = {.lex_state = 116, .external_lex_state = 3},
  [305] = {.lex_state = 125},
  [306] = {.lex_state = 116, .external_lex_state = 3},
  [307] = {.lex_state = 115, .external_lex_state = 3},
  [308] = {.lex_state = 125, .external_lex_state = 4},
  [309] = {.lex_state = 125},
  [310] = {.lex_state = 115, .external_lex_state = 3},
  [311] = {.lex_state = 115, .external_lex_state = 3},
  [312] = {.lex_state = 117},
  [313] = {.lex_state = 115, .external_lex_state = 3},
  [314] = {.lex_state = 125, .external_lex_state = 4},
  [315] = {.lex_state = 114},
  [316] = {.lex_state = 114},
  [317] = {.lex_state = 125, .external_lex_state = 4},
  [318] = {.lex_state = 125, .external_lex_state = 3},
  [319] = {.lex_state = 125, .external_lex_state = 4},
  [320] = {.lex_state = 125, .external_lex_state = 4},
  [321] = {.lex_state = 115, .external_lex_state = 3},
  [322] = {.lex_state = 125, .external_lex_state = 3},
  [323] = {.lex_state = 115, .external_lex_state = 3},
  [324] = {.lex_state = 125},
  [325] = {.lex_state = 125},
  [326] = {.lex_state = 125},
  [327] = {.lex_state = 125},
  [328] = {.lex_state = 125},
  [329] = {.lex_state = 125},
  [330] = {.lex_state = 125},
  [331] = {.lex_state = 114},
  [332] = {.lex_state = 125},
  [333] = {.lex_state = 125},
  [334] = {.lex_state = 125},
  [335] = {.lex_state = 125},
  [336] = {.lex_state = 117},
  [337] = {.lex_state = 85},
  [338] = {.lex_state = 125},
  [339] = {.lex_state = 125},
  [340] = {.lex_state = 117},
  [341] = {.lex_state = 125},
  [342] = {.lex_state = 125},
  [343] = {.lex_state = 115, .external_lex_state = 3},
  [344] = {.lex_state = 116, .external_lex_state = 3},
  [345] = {.lex_state = 125},
  [346] = {.lex_state = 125},
  [347] = {.lex_state = 125},
  [348] = {.lex_state = 115, .external_lex_state = 3},
  [349] = {.lex_state = 125},
  [350] = {.lex_state = 117},
  [351] = {.lex_state = 125},
  [352] = {.lex_state = 115, .external_lex_state = 3},
  [353] = {.lex_state = 125},
  [354] = {.lex_state = 125},
  [355] = {.lex_state = 125},
  [356] = {.lex_state = 115, .external_lex_state = 3},
  [357] = {.lex_state = 125},
  [358] = {.lex_state = 116, .external_lex_state = 3},
  [359] = {.lex_state = 115, .external_lex_state = 3},
  [360] = {.lex_state = 125},
  [361] = {.lex_state = 115, .external_lex_state = 3},
  [362] = {.lex_state = 115, .external_lex_state = 3},
  [363] = {.lex_state = 117},
  [364] = {.lex_state = 115, .external_lex_state = 3},
  [365] = {.lex_state = 115, .external_lex_state = 3},
  [366] = {.lex_state = 115, .external_lex_state = 3},
  [367] = {.lex_state = 115, .external_lex_state = 3},
  [368] = {.lex_state = 115, .external_lex_state = 3},
  [369] = {.lex_state = 115, .external_lex_state = 3},
  [370] = {.lex_state = 117},
  [371] = {.lex_state = 125},
  [372] = {.lex_state = 125},
  [373] = {.lex_state = 115, .external_lex_state = 3},
  [374] = {.lex_state = 115, .external_lex_state = 3},
  [375] = {.lex_state = 125},
  [376] = {.lex_state = 115, .external_lex_state = 3},
  [377] = {.lex_state = 115, .external_lex_state = 3},
  [378] = {.lex_state = 125},
  [379] = {.lex_state = 117},
  [380] = {.lex_state = 115, .external_lex_state = 3},
  [381] = {.lex_state = 115, .external_lex_state = 3},
  [382] = {.lex_state = 115, .external_lex_state = 3},
  [383] = {.lex_state = 125},
  [384] = {.lex_state = 125},
  [385] = {.lex_state = 125},
  [386] = {.lex_state = 117},
  [387] = {.lex_state = 125},
  [388] = {.lex_state = 115, .external_lex_state = 3},
  [389] = {.lex_state = 125},
  [390] = {.lex_state = 125},
  [391] = {.lex_state = 115, .external_lex_state = 3},
  [392] = {.lex_state = 125},
  [393] = {.lex_state = 115, .external_lex_state = 3},
  [394] = {.lex_state = 125},
  [395] = {.lex_state = 125},
  [396] = {.lex_state = 117},
  [397] = {.lex_state = 115, .external_lex_state = 3},
  [398] = {.lex_state = 125},
  [399] = {.lex_state = 125},
  [400] = {.lex_state = 125},
  [401] = {.lex_state = 125},
  [402] = {.lex_state = 115, .external_lex_state = 3},
  [403] = {.lex_state = 125},
  [404] = {.lex_state = 125},
  [405] = {.lex_state = 125},
  [406] = {.lex_state = 125},
  [407] = {.lex_state = 125},
  [408] = {.lex_state = 125},
  [409] = {.lex_state = 125},
  [410] = {.lex_state = 125},
  [411] = {.lex_state = 125},
  [412] = {.lex_state = 125},
  [413] = {.lex_state = 125},
  [414] = {.lex_state = 125},
  [415] = {.lex_state = 117},
  [416] = {.lex_state = 125, .external_lex_state = 3},
  [417] = {.lex_state = 117},
  [418] = {.lex_state = 125},
  [419] = {.lex_state = 125},
  [420] = {.lex_state = 125},
  [421] = {.lex_state = 125},
  [422] = {.lex_state = 125},
  [423] = {.lex_state = 125},
  [424] = {.lex_state = 125},
  [425] = {.lex_state = 125},
  [426] = {.lex_state = 125},
  [427] = {.lex_state = 125},
  [428] = {.lex_state = 125},
  [429] = {.lex_state = 125},
  [430] = {.lex_state = 125},
  [431] = {.lex_state = 125},
  [432] = {.lex_state = 117},
  [433] = {.lex_state = 125},
  [434] = {.lex_state = 114},
  [435] = {.lex_state = 125},
  [436] = {.lex_state = 125},
  [437] = {.lex_state = 125},
  [438] = {.lex_state = 125},
  [439] = {.lex_state = 125},
  [440] = {.lex_state = 125},
  [441] = {.lex_state = 117},
  [442] = {.lex_state = 125},
  [443] = {.lex_state = 125},
  [444] = {.lex_state = 125},
  [445] = {.lex_state = 125},
  [446] = {.lex_state = 125},
  [447] = {.lex_state = 125},
  [448] = {.lex_state = 125},
  [449] = {.lex_state = 125},
  [450] = {.lex_state = 125, .external_lex_state = 3},
  [451] = {.lex_state = 125},
  [452] = {.lex_state = 125},
  [453] = {.lex_state = 125},
  [454] = {.lex_state = 125},
  [455] = {.lex_state = 125},
  [456] = {.lex_state = 125, .external_lex_state = 3},
  [457] = {.lex_state = 125},
  [458] = {.lex_state = 125},
  [459] = {.lex_state = 125},
  [460] = {.lex_state = 125},
  [461] = {.lex_state = 125},
  [462] = {.lex_state = 125},
  [463] = {.lex_state = 125},
  [464] = {.lex_state = 125},
  [465] = {.lex_state = 125},
  [466] = {.lex_state = 125},
  [467] = {.lex_state = 125, .external_lex_state = 3},
  [468] = {.lex_state = 125},
  [469] = {.lex_state = 125},
  [470] = {.lex_state = 125},
  [471] = {.lex_state = 125},
  [472] = {.lex_state = 125},
  [473] = {.lex_state = 125},
  [474] = {.lex_state = 125},
  [475] = {.lex_state = 125},
  [476] = {.lex_state = 125},
  [477] = {.lex_state = 125},
  [478] = {.lex_state = 125},
  [479] = {.lex_state = 125},
  [480] = {.lex_state = 125},
  [481] = {.lex_state = 125},
  [482] = {.lex_state = 125},
  [483] = {.lex_state = 125},
  [484] = {.lex_state = 125},
  [485] = {.lex_state = 125},
  [486] = {.lex_state = 125},
  [487] = {.lex_state = 125},
  [488] = {.lex_state = 125},
  [489] = {.lex_state = 125},
  [490] = {.lex_state = 125, .external_lex_state = 3},
  [491] = {.lex_state = 125, .external_lex_state = 3},
  [492] = {.lex_state = 125},
  [493] = {.lex_state = 125},
  [494] = {.lex_state = 125, .external_lex_state = 3},
  [495] = {.lex_state = 125},
  [496] = {.lex_state = 125},
  [497] = {.lex_state = 125},
  [498] = {.lex_state = 125},
  [499] = {.lex_state = 125, .external_lex_state = 3},
  [500] = {.lex_state = 125},
  [501] = {.lex_state = 125},
  [502] = {.lex_state = 125},
  [503] = {.lex_state = 125},
  [504] = {.lex_state = 125, .external_lex_state = 3},
  [505] = {.lex_state = 125},
  [506] = {.lex_state = 125, .external_lex_state = 3},
  [507] = {.lex_state = 125},
  [508] = {.lex_state = 125},
  [509] = {.lex_state = 125},
  [510] = {.lex_state = 125},
  [511] = {.lex_state = 125, .external_lex_state = 3},
  [512] = {.lex_state = 125, .external_lex_state = 3},
  [513] = {.lex_state = 125, .external_lex_state = 2},
  [514] = {.lex_state = 125},
  [515] = {.lex_state = 125},
  [516] = {.lex_state = 125},
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
    [aux_sym__attribute_key_value_value_token1] = ACTIONS(1),
    [aux_sym__attribute_key_value_value_token2] = ACTIONS(1),
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
    [sym_quasi_quotation] = STATE(510),
    [sym_entity_definition] = STATE(251),
    [sym__entity_name] = STATE(295),
    [sym__entity_header] = STATE(317),
    [sym_constructor] = STATE(352),
    [sym_qualified_type] = STATE(376),
    [sym_tycon_arrow] = STATE(376),
    [sym__promoted_tycon] = STATE(376),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(378),
    [sym_type_variable] = STATE(376),
    [sym_type_name] = STATE(295),
    [aux_sym_quasi_quotation_repeat1] = STATE(251),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__varid] = ACTIONS(7),
    [sym_is_sum_marker] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym__conid] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
  },
  [2] = {
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym__arrow] = STATE(477),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(516),
    [sym_qualified_constructor_operator] = STATE(516),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(516),
    [sym_qualified_type_operator] = STATE(516),
    [sym__qualified_type_operator] = STATE(516),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(516),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(338),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(503),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(57),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(339),
    [sym_type_infix] = STATE(296),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(390),
    [sym__quantified_constraint] = STATE(423),
    [sym__constraint_context] = STATE(423),
    [sym__constraint] = STATE(423),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(36),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(425),
    [aux_sym_con_tuple_repeat1] = STATE(426),
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
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym__arrow] = STATE(489),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(487),
    [sym_qualified_constructor_operator] = STATE(487),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(487),
    [sym_qualified_type_operator] = STATE(487),
    [sym__qualified_type_operator] = STATE(487),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(487),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(338),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(493),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(57),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(339),
    [sym_type_infix] = STATE(296),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(390),
    [sym__quantified_constraint] = STATE(444),
    [sym__constraint_context] = STATE(444),
    [sym__constraint] = STATE(444),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(36),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(437),
    [aux_sym_con_tuple_repeat1] = STATE(438),
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
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym__arrow] = STATE(489),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(487),
    [sym_qualified_constructor_operator] = STATE(487),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(487),
    [sym_qualified_type_operator] = STATE(487),
    [sym__qualified_type_operator] = STATE(487),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(487),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(338),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(493),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(57),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(339),
    [sym_type_infix] = STATE(296),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(390),
    [sym__quantified_constraint] = STATE(423),
    [sym__constraint_context] = STATE(423),
    [sym__constraint] = STATE(423),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(36),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(437),
    [aux_sym_con_tuple_repeat1] = STATE(438),
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
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym__arrow] = STATE(495),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(496),
    [sym_qualified_constructor_operator] = STATE(496),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(496),
    [sym_qualified_type_operator] = STATE(496),
    [sym__qualified_type_operator] = STATE(496),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(496),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(338),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(488),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(57),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(339),
    [sym_type_infix] = STATE(296),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(390),
    [sym__quantified_constraint] = STATE(444),
    [sym__constraint_context] = STATE(444),
    [sym__constraint] = STATE(444),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(36),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(443),
    [aux_sym_con_tuple_repeat1] = STATE(440),
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
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym__arrow] = STATE(477),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(516),
    [sym_qualified_constructor_operator] = STATE(516),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(516),
    [sym_qualified_type_operator] = STATE(516),
    [sym__qualified_type_operator] = STATE(516),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(516),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(341),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(475),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(50),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(305),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(414),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(44),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(433),
    [aux_sym_con_tuple_repeat1] = STATE(412),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(73),
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
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym__arrow] = STATE(470),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(469),
    [sym_qualified_constructor_operator] = STATE(469),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(469),
    [sym_qualified_type_operator] = STATE(469),
    [sym__qualified_type_operator] = STATE(469),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(469),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(341),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(505),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(50),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(305),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(414),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(44),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(419),
    [aux_sym_con_tuple_repeat1] = STATE(420),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(79),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(81),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(83),
    [anon_sym_DASH_GT] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(87),
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
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym__arrow] = STATE(502),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(468),
    [sym_qualified_constructor_operator] = STATE(468),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(468),
    [sym_qualified_type_operator] = STATE(468),
    [sym__qualified_type_operator] = STATE(468),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(468),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(341),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(481),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(50),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(305),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(414),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(44),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(451),
    [aux_sym_con_tuple_repeat1] = STATE(452),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(89),
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
    [anon_sym_LPAREN] = ACTIONS(75),
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
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym__arrow] = STATE(495),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(496),
    [sym_qualified_constructor_operator] = STATE(496),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(496),
    [sym_qualified_type_operator] = STATE(496),
    [sym__qualified_type_operator] = STATE(496),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(496),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(341),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(500),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(50),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(305),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(414),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(44),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(431),
    [aux_sym_con_tuple_repeat1] = STATE(422),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(99),
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
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym__arrow] = STATE(480),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(479),
    [sym_qualified_constructor_operator] = STATE(479),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(479),
    [sym_qualified_type_operator] = STATE(479),
    [sym__qualified_type_operator] = STATE(479),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(479),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(341),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(481),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(50),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(305),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(414),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(44),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(451),
    [aux_sym_con_tuple_repeat1] = STATE(452),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(89),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(103),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(105),
    [anon_sym_DASH_GT] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(75),
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
  [11] = {
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym__arrow] = STATE(507),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(508),
    [sym_qualified_constructor_operator] = STATE(508),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(508),
    [sym_qualified_type_operator] = STATE(508),
    [sym__qualified_type_operator] = STATE(508),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(508),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(341),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(488),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(50),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(305),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(414),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(44),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(443),
    [aux_sym_con_tuple_repeat1] = STATE(440),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(63),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(109),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(111),
    [anon_sym_DASH_GT] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(115),
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
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym__arrow] = STATE(471),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(472),
    [sym_qualified_constructor_operator] = STATE(472),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(472),
    [sym_qualified_type_operator] = STATE(472),
    [sym__qualified_type_operator] = STATE(472),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(472),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(341),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(503),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(50),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(305),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(414),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(44),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(425),
    [aux_sym_con_tuple_repeat1] = STATE(426),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(19),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(117),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(119),
    [anon_sym_DASH_GT] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(123),
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
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym__arrow] = STATE(483),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(484),
    [sym_qualified_constructor_operator] = STATE(484),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(484),
    [sym_qualified_type_operator] = STATE(484),
    [sym__qualified_type_operator] = STATE(484),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(484),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(341),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(493),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(50),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(305),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(414),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(44),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(437),
    [aux_sym_con_tuple_repeat1] = STATE(438),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(53),
    [sym__consym] = ACTIONS(21),
    [sym__tyconsym] = ACTIONS(125),
    [sym_float] = ACTIONS(25),
    [sym_char] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym__integer_literal] = ACTIONS(27),
    [sym__binary_literal] = ACTIONS(29),
    [sym__octal_literal] = ACTIONS(29),
    [sym__hex_literal] = ACTIONS(29),
    [anon_sym_2] = ACTIONS(127),
    [anon_sym_DASH_GT] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(75),
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
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym__arrow] = STATE(489),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(487),
    [sym_qualified_constructor_operator] = STATE(487),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(487),
    [sym_qualified_type_operator] = STATE(487),
    [sym__qualified_type_operator] = STATE(487),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(90),
    [sym_annotated_type_variable] = STATE(487),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(341),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(476),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(50),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(305),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(414),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(44),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(446),
    [aux_sym_con_tuple_repeat1] = STATE(448),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(133),
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
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(514),
    [sym_qualified_constructor_operator] = STATE(514),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(514),
    [sym_qualified_type_operator] = STATE(514),
    [sym__qualified_type_operator] = STATE(514),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(92),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(341),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(505),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(50),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(305),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(414),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(44),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(460),
    [aux_sym_con_tuple_repeat1] = STATE(420),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(79),
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
    [anon_sym_RPAREN] = ACTIONS(87),
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
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(482),
    [sym_qualified_constructor_operator] = STATE(482),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(482),
    [sym_qualified_type_operator] = STATE(482),
    [sym__qualified_type_operator] = STATE(482),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(92),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(341),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(476),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(50),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(305),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(414),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(44),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(460),
    [aux_sym_con_tuple_repeat1] = STATE(448),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(133),
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
  [17] = {
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(501),
    [sym_qualified_constructor_operator] = STATE(501),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(501),
    [sym_qualified_type_operator] = STATE(501),
    [sym__qualified_type_operator] = STATE(501),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(92),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(341),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(481),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(50),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(305),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(414),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(44),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(460),
    [aux_sym_con_tuple_repeat1] = STATE(452),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(89),
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
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(473),
    [sym_qualified_constructor_operator] = STATE(473),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(473),
    [sym_qualified_type_operator] = STATE(473),
    [sym__qualified_type_operator] = STATE(473),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(92),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(341),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(503),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(50),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(305),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(414),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(44),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(460),
    [aux_sym_con_tuple_repeat1] = STATE(426),
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
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(123),
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
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(515),
    [sym_qualified_constructor_operator] = STATE(515),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(515),
    [sym_qualified_type_operator] = STATE(515),
    [sym__qualified_type_operator] = STATE(515),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(92),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(341),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(475),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(50),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(305),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(414),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(44),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(460),
    [aux_sym_con_tuple_repeat1] = STATE(412),
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
  [20] = {
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(478),
    [sym_qualified_constructor_operator] = STATE(478),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(478),
    [sym_qualified_type_operator] = STATE(478),
    [sym__qualified_type_operator] = STATE(478),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(92),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(341),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(481),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(50),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(305),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(414),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(44),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(460),
    [aux_sym_con_tuple_repeat1] = STATE(452),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(89),
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
  [21] = {
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(497),
    [sym_qualified_constructor_operator] = STATE(497),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(497),
    [sym_qualified_type_operator] = STATE(497),
    [sym__qualified_type_operator] = STATE(497),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(92),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(341),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(500),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(50),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(305),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(414),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(44),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(460),
    [aux_sym_con_tuple_repeat1] = STATE(422),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(99),
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
  [22] = {
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(509),
    [sym_qualified_constructor_operator] = STATE(509),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(509),
    [sym_qualified_type_operator] = STATE(509),
    [sym__qualified_type_operator] = STATE(509),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(92),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(341),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(488),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(50),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(305),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(414),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(44),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(460),
    [aux_sym_con_tuple_repeat1] = STATE(440),
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
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(115),
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
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(482),
    [sym_qualified_constructor_operator] = STATE(482),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(482),
    [sym_qualified_type_operator] = STATE(482),
    [sym__qualified_type_operator] = STATE(482),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(92),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(341),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(493),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(50),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(305),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(414),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(44),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(460),
    [aux_sym_con_tuple_repeat1] = STATE(438),
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
    [anon_sym_LPAREN] = ACTIONS(75),
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
  [24] = {
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(515),
    [sym_qualified_constructor_operator] = STATE(515),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(515),
    [sym_qualified_type_operator] = STATE(515),
    [sym__qualified_type_operator] = STATE(515),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(92),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(341),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(503),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(50),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(305),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(414),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(44),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(460),
    [aux_sym_con_tuple_repeat1] = STATE(426),
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
    [anon_sym_RPAREN] = ACTIONS(123),
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
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(497),
    [sym_qualified_constructor_operator] = STATE(497),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(497),
    [sym_qualified_type_operator] = STATE(497),
    [sym__qualified_type_operator] = STATE(497),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(92),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(341),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(488),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(50),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(305),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(414),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(44),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(460),
    [aux_sym_con_tuple_repeat1] = STATE(440),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(63),
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
    [anon_sym_RPAREN] = ACTIONS(115),
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
    [sym_integer] = STATE(152),
    [sym__literal] = STATE(152),
    [sym_constructor] = STATE(86),
    [sym_constructor_operator] = STATE(485),
    [sym_qualified_constructor_operator] = STATE(485),
    [sym_con_unit] = STATE(152),
    [sym_con_list] = STATE(152),
    [sym_con_tuple] = STATE(152),
    [sym_qualified_type] = STATE(92),
    [sym__type_operator] = STATE(485),
    [sym_qualified_type_operator] = STATE(485),
    [sym__qualified_type_operator] = STATE(485),
    [sym_tycon_arrow] = STATE(92),
    [sym_type_literal] = STATE(56),
    [sym__promoted_tycon] = STATE(92),
    [sym__modid] = STATE(461),
    [aux_sym__qualifying_module] = STATE(316),
    [sym_type_variable] = STATE(92),
    [sym__forall_kw] = STATE(309),
    [sym__forall] = STATE(341),
    [sym_type_parens] = STATE(56),
    [sym_type_list] = STATE(56),
    [sym__type_tuple] = STATE(493),
    [sym_type_tuple] = STATE(56),
    [sym__type_promotable_literal] = STATE(56),
    [sym__type_promoted_literal] = STATE(56),
    [sym__type_literal] = STATE(56),
    [sym_type_name] = STATE(50),
    [sym_type_star] = STATE(56),
    [sym__atype] = STATE(56),
    [sym_type_apply] = STATE(164),
    [sym__btype] = STATE(164),
    [sym_implicit_param] = STATE(305),
    [sym_type_infix] = STATE(280),
    [sym__type_infix] = STATE(283),
    [sym_constraint] = STATE(414),
    [sym__context_constraints] = STATE(414),
    [sym__context] = STATE(44),
    [sym__type_quantifiers] = STATE(305),
    [sym__type_context] = STATE(305),
    [sym__type_fun] = STATE(305),
    [sym__type] = STATE(305),
    [sym__type_or_implicit] = STATE(305),
    [sym__type_with_kind] = STATE(460),
    [aux_sym_con_tuple_repeat1] = STATE(438),
    [sym__varid] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_comma] = ACTIONS(53),
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
    STATE(44), 1,
      sym__context,
    STATE(50), 1,
      sym_type_name,
    STATE(86), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(283), 1,
      sym__type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(341), 1,
      sym__forall,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(454), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(164), 2,
      sym_type_apply,
      sym__btype,
    STATE(414), 2,
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
    STATE(92), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(152), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(305), 6,
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
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      sym__context,
    STATE(50), 1,
      sym_type_name,
    STATE(86), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(283), 1,
      sym__type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(341), 1,
      sym__forall,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(409), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(164), 2,
      sym_type_apply,
      sym__btype,
    STATE(414), 2,
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
    STATE(92), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(152), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(305), 6,
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
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      sym__context,
    STATE(50), 1,
      sym_type_name,
    STATE(86), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(283), 1,
      sym__type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(341), 1,
      sym__forall,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(427), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(164), 2,
      sym_type_apply,
      sym__btype,
    STATE(414), 2,
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
    STATE(92), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(152), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(305), 6,
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
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      sym__context,
    STATE(50), 1,
      sym_type_name,
    STATE(86), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(283), 1,
      sym__type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(341), 1,
      sym__forall,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(453), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(164), 2,
      sym_type_apply,
      sym__btype,
    STATE(414), 2,
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
    STATE(92), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(152), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(305), 6,
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
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      sym__context,
    STATE(50), 1,
      sym_type_name,
    STATE(86), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(283), 1,
      sym__type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(341), 1,
      sym__forall,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(439), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(164), 2,
      sym_type_apply,
      sym__btype,
    STATE(414), 2,
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
    STATE(92), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(152), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(305), 6,
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
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      sym__context,
    STATE(50), 1,
      sym_type_name,
    STATE(86), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(283), 1,
      sym__type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(341), 1,
      sym__forall,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(404), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(164), 2,
      sym_type_apply,
      sym__btype,
    STATE(414), 2,
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
    STATE(92), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(152), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(305), 6,
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
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      sym__context,
    STATE(50), 1,
      sym_type_name,
    STATE(86), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(283), 1,
      sym__type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(341), 1,
      sym__forall,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(418), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(164), 2,
      sym_type_apply,
      sym__btype,
    STATE(414), 2,
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
    STATE(92), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(152), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(305), 6,
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
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      sym__context,
    STATE(50), 1,
      sym_type_name,
    STATE(86), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(283), 1,
      sym__type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(341), 1,
      sym__forall,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(421), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(164), 2,
      sym_type_apply,
      sym__btype,
    STATE(414), 2,
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
    STATE(92), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(152), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(305), 6,
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
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      sym__context,
    STATE(50), 1,
      sym_type_name,
    STATE(86), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(283), 1,
      sym__type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(341), 1,
      sym__forall,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(411), 1,
      sym__type_with_kind,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(164), 2,
      sym_type_apply,
      sym__btype,
    STATE(414), 2,
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
    STATE(92), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(152), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(305), 6,
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
    STATE(57), 1,
      sym_type_name,
    STATE(86), 1,
      sym_constructor,
    STATE(283), 1,
      sym__type_infix,
    STATE(296), 1,
      sym_type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(338), 1,
      sym__forall,
    STATE(390), 1,
      sym_constraint,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(414), 1,
      sym__context_constraints,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(164), 2,
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
    STATE(458), 3,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(92), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(324), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(152), 5,
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
    STATE(57), 1,
      sym_type_name,
    STATE(86), 1,
      sym_constructor,
    STATE(283), 1,
      sym__type_infix,
    STATE(296), 1,
      sym_type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(338), 1,
      sym__forall,
    STATE(390), 1,
      sym_constraint,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(414), 1,
      sym__context_constraints,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(164), 2,
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
    STATE(92), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(325), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(152), 5,
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
    STATE(43), 1,
      sym__context,
    STATE(54), 1,
      sym_type_name,
    STATE(107), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(285), 1,
      sym__type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(353), 1,
      sym__forall,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(414), 2,
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
    STATE(130), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(178), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(328), 6,
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
    STATE(44), 1,
      sym__context,
    STATE(50), 1,
      sym_type_name,
    STATE(86), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(283), 1,
      sym__type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(341), 1,
      sym__forall,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(164), 2,
      sym_type_apply,
      sym__btype,
    STATE(414), 2,
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
    STATE(92), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(152), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(328), 6,
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
    STATE(86), 1,
      sym_constructor,
    STATE(399), 1,
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
    STATE(92), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(113), 5,
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
    ACTIONS(217), 1,
      sym__varid,
    ACTIONS(227), 1,
      sym__integer_literal,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      sym__conid,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 1,
      anon_sym_AT,
    STATE(86), 1,
      sym_constructor,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(245), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(224), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(230), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(92), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(113), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(222), 6,
      sym__consym,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    ACTIONS(220), 7,
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
  [1695] = 19,
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
    ACTIONS(255), 1,
      sym__conid,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    STATE(86), 1,
      sym_constructor,
    STATE(399), 1,
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
    STATE(92), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(113), 5,
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
    STATE(43), 1,
      sym__context,
    STATE(54), 1,
      sym_type_name,
    STATE(107), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(285), 1,
      sym__type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(353), 1,
      sym__forall,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(414), 2,
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
    STATE(130), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(324), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(178), 5,
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
  [1894] = 27,
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
    STATE(44), 1,
      sym__context,
    STATE(50), 1,
      sym_type_name,
    STATE(86), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(283), 1,
      sym__type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(341), 1,
      sym__forall,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(164), 2,
      sym_type_apply,
      sym__btype,
    STATE(414), 2,
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
    STATE(92), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(324), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(152), 5,
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
  [2001] = 27,
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
    STATE(44), 1,
      sym__context,
    STATE(50), 1,
      sym_type_name,
    STATE(86), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(283), 1,
      sym__type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(341), 1,
      sym__forall,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(164), 2,
      sym_type_apply,
      sym__btype,
    STATE(414), 2,
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
    STATE(92), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(329), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(152), 5,
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
  [2108] = 27,
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
    STATE(43), 1,
      sym__context,
    STATE(54), 1,
      sym_type_name,
    STATE(107), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(285), 1,
      sym__type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(353), 1,
      sym__forall,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(414), 2,
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
    STATE(130), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(329), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(178), 5,
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
  [2215] = 28,
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
    STATE(62), 1,
      sym__context,
    STATE(67), 1,
      sym_type_name,
    STATE(190), 1,
      sym_constructor,
    STATE(309), 1,
      sym__forall_kw,
    STATE(346), 1,
      sym__forall,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(390), 1,
      sym_constraint,
    STATE(392), 1,
      sym_type_infix,
    STATE(414), 1,
      sym__context_constraints,
    STATE(461), 1,
      sym__modid,
    ACTIONS(277), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(267), 2,
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
    STATE(465), 4,
      sym_implicit_param,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(243), 5,
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
  [2324] = 27,
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
    STATE(43), 1,
      sym__context,
    STATE(54), 1,
      sym_type_name,
    STATE(107), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(285), 1,
      sym__type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(353), 1,
      sym__forall,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(180), 2,
      sym_type_apply,
      sym__btype,
    STATE(414), 2,
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
    STATE(130), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(325), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(178), 5,
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
  [2431] = 27,
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
    STATE(44), 1,
      sym__context,
    STATE(50), 1,
      sym_type_name,
    STATE(86), 1,
      sym_constructor,
    STATE(280), 1,
      sym_type_infix,
    STATE(283), 1,
      sym__type_infix,
    STATE(309), 1,
      sym__forall_kw,
    STATE(341), 1,
      sym__forall,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(51), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(164), 2,
      sym_type_apply,
      sym__btype,
    STATE(414), 2,
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
    STATE(92), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(325), 4,
      sym__type_quantifiers,
      sym__type_context,
      sym__type_fun,
      sym__type,
    STATE(152), 5,
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
  [2538] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym__varid,
    ACTIONS(289), 1,
      sym__integer_literal,
    ACTIONS(295), 1,
      anon_sym_,
    ACTIONS(297), 1,
      anon_sym_EQ_GT,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      sym__conid,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    STATE(236), 1,
      sym_constructor,
    STATE(360), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(311), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(286), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(292), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(248), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(230), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(282), 6,
      sym_comma,
      anon_sym_2,
      anon_sym_4,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
    ACTIONS(284), 6,
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
  [2631] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      sym__varid,
    ACTIONS(320), 1,
      sym__integer_literal,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(329), 1,
      sym__conid,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    ACTIONS(335), 1,
      anon_sym_SQUOTE,
    ACTIONS(341), 1,
      anon_sym_AT,
    STATE(107), 1,
      sym_constructor,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(338), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(317), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(323), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(222), 4,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(130), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(122), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(220), 8,
      sym_comma,
      sym__consym,
      anon_sym_,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(51), 12,
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
  [2722] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym__varid,
    ACTIONS(348), 1,
      sym__integer_literal,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      sym__conid,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(359), 1,
      anon_sym_SQUOTE,
    ACTIONS(364), 1,
      anon_sym_AT,
    STATE(107), 1,
      sym_constructor,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(362), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(346), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(350), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(195), 4,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(130), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(122), 5,
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
  [2813] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym__varid,
    ACTIONS(348), 1,
      sym__integer_literal,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(364), 1,
      anon_sym_AT,
    ACTIONS(366), 1,
      sym__conid,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    STATE(107), 1,
      sym_constructor,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(362), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(346), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(350), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(253), 4,
      sym__tyconsym,
      anon_sym_EQ_GT,
      anon_sym_DASH_GT,
      anon_sym_PERCENT,
    STATE(130), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(122), 5,
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
    STATE(51), 12,
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
  [2904] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym__varid,
    ACTIONS(289), 1,
      sym__integer_literal,
    ACTIONS(295), 1,
      anon_sym_,
    ACTIONS(297), 1,
      anon_sym_EQ_GT,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      sym__conid,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    STATE(236), 1,
      sym_constructor,
    STATE(360), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(311), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(286), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(292), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(284), 4,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_AT,
      anon_sym_PERCENT,
    STATE(248), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(230), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(282), 7,
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
  [2996] = 19,
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
    STATE(121), 1,
      sym_constructor,
    STATE(385), 1,
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
    STATE(160), 4,
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
    STATE(152), 5,
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
  [3086] = 19,
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
    STATE(121), 1,
      sym_constructor,
    STATE(385), 1,
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
    STATE(160), 4,
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
    STATE(152), 5,
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
    STATE(55), 12,
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
  [3176] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym__varid,
    ACTIONS(289), 1,
      sym__integer_literal,
    ACTIONS(295), 1,
      anon_sym_,
    ACTIONS(297), 1,
      anon_sym_EQ_GT,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      sym__conid,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    STATE(236), 1,
      sym_constructor,
    STATE(360), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(311), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(390), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(282), 3,
      anon_sym_2,
      anon_sym_4,
      anon_sym_BQUOTE,
    ACTIONS(286), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(292), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(248), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(230), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(284), 6,
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
    STATE(121), 1,
      sym_constructor,
    STATE(385), 1,
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
    STATE(160), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(222), 5,
      sym__consym,
      sym__tyconsym,
      anon_sym_DASH_GT,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
    STATE(152), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(220), 6,
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
    STATE(140), 1,
      sym_constructor,
    STATE(401), 1,
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
    STATE(174), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(178), 5,
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
    STATE(61), 12,
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
    STATE(62), 1,
      sym__context,
    STATE(67), 1,
      sym_type_name,
    STATE(190), 1,
      sym_constructor,
    STATE(309), 1,
      sym__forall_kw,
    STATE(346), 1,
      sym__forall,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(390), 1,
      sym_constraint,
    STATE(392), 1,
      sym_type_infix,
    STATE(414), 1,
      sym__context_constraints,
    STATE(461), 1,
      sym__modid,
    ACTIONS(277), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(267), 2,
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
    STATE(466), 3,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(199), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(243), 5,
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
  [3554] = 19,
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
    STATE(140), 1,
      sym_constructor,
    STATE(401), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(459), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(222), 3,
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
    STATE(174), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(178), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    ACTIONS(220), 7,
      sym_comma,
      sym__consym,
      anon_sym_2,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(61), 12,
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
    STATE(62), 1,
      sym__context,
    STATE(67), 1,
      sym_type_name,
    STATE(190), 1,
      sym_constructor,
    STATE(309), 1,
      sym__forall_kw,
    STATE(346), 1,
      sym__forall,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(390), 1,
      sym_constraint,
    STATE(392), 1,
      sym_type_infix,
    STATE(414), 1,
      sym__context_constraints,
    STATE(461), 1,
      sym__modid,
    ACTIONS(277), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(267), 2,
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
    STATE(458), 3,
      sym__quantified_constraint,
      sym__constraint_context,
      sym__constraint,
    STATE(199), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(243), 5,
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
    STATE(140), 1,
      sym_constructor,
    STATE(401), 1,
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
    STATE(174), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(178), 5,
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
    STATE(190), 1,
      sym_constructor,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
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
    STATE(206), 5,
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
    STATE(190), 1,
      sym_constructor,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(222), 2,
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
    STATE(199), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    ACTIONS(220), 5,
      sym_comma,
      sym__consym,
      anon_sym_,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
    STATE(206), 5,
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
    STATE(190), 1,
      sym_constructor,
    STATE(384), 1,
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
    STATE(199), 4,
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
    STATE(206), 5,
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
    ACTIONS(279), 1,
      sym__varid,
    ACTIONS(289), 1,
      sym__integer_literal,
    ACTIONS(297), 1,
      anon_sym_EQ_GT,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      sym__conid,
    ACTIONS(305), 1,
      anon_sym_LBRACK,
    ACTIONS(308), 1,
      anon_sym_SQUOTE,
    STATE(236), 1,
      sym_constructor,
    STATE(360), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(282), 2,
      sym__consym,
      anon_sym_BQUOTE,
    ACTIONS(284), 2,
      sym__tyconsym,
      anon_sym_AT,
    ACTIONS(311), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(286), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(292), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    ACTIONS(295), 3,
      sym_comma,
      anon_sym_,
      anon_sym_RPAREN,
    STATE(248), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(230), 5,
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
    ACTIONS(533), 1,
      sym__conid,
    ACTIONS(536), 1,
      anon_sym_SQUOTE,
    ACTIONS(539), 1,
      anon_sym_AT,
    STATE(238), 1,
      sym_constructor,
    STATE(383), 1,
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
    STATE(246), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(243), 5,
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
  [4264] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym__tyconsym,
    ACTIONS(541), 1,
      sym__varid,
    ACTIONS(547), 1,
      sym__integer_literal,
    ACTIONS(553), 1,
      anon_sym_LPAREN,
    ACTIONS(556), 1,
      sym__conid,
    ACTIONS(559), 1,
      anon_sym_LBRACK,
    ACTIONS(562), 1,
      anon_sym_SQUOTE,
    ACTIONS(568), 1,
      anon_sym_AT,
    STATE(238), 1,
      sym_constructor,
    STATE(383), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(220), 2,
      sym__consym,
      anon_sym_BQUOTE,
    ACTIONS(565), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(544), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(550), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(246), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(243), 5,
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
  [4346] = 19,
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
    ACTIONS(571), 1,
      sym__conid,
    ACTIONS(574), 1,
      anon_sym_SQUOTE,
    STATE(238), 1,
      sym_constructor,
    STATE(383), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
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
    STATE(246), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(243), 5,
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
    STATE(236), 1,
      sym_constructor,
    STATE(360), 1,
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
    STATE(248), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(230), 5,
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
    STATE(236), 1,
      sym_constructor,
    STATE(360), 1,
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
    STATE(248), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(230), 5,
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
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(344), 1,
      sym__varid,
    ACTIONS(348), 1,
      sym__integer_literal,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(626), 1,
      anon_sym_SQUOTE,
    STATE(107), 1,
      sym_constructor,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(362), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(149), 2,
      sym_type_apply,
      sym__btype,
    STATE(282), 2,
      sym_type_infix,
      sym__type_infix,
    ACTIONS(346), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(350), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(130), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(122), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(52), 10,
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
    STATE(190), 1,
      sym_constructor,
    STATE(384), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
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
    STATE(199), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(206), 5,
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
  [4738] = 18,
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
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    STATE(86), 1,
      sym_constructor,
    STATE(399), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(213), 2,
      anon_sym_STAR,
      anon_sym_6,
    STATE(132), 2,
      sym_type_apply,
      sym__btype,
    STATE(282), 2,
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
    STATE(92), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(113), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(40), 10,
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
    STATE(352), 1,
      sym_constructor,
    STATE(378), 1,
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
    STATE(376), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(367), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(311), 11,
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
    STATE(352), 1,
      sym_constructor,
    STATE(378), 1,
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
    STATE(376), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(367), 5,
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
    STATE(352), 1,
      sym_constructor,
    STATE(378), 1,
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
    STATE(376), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(367), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(293), 11,
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
    ACTIONS(344), 1,
      sym__varid,
    ACTIONS(348), 1,
      sym__integer_literal,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(626), 1,
      anon_sym_SQUOTE,
    STATE(107), 1,
      sym_constructor,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(362), 2,
      anon_sym_STAR,
      anon_sym_6,
    ACTIONS(346), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(350), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(130), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(122), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(115), 10,
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
    ACTIONS(612), 1,
      sym__integer_literal,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(620), 1,
      anon_sym_LBRACK,
    ACTIONS(646), 1,
      sym__varid,
    ACTIONS(648), 1,
      anon_sym_LPAREN,
    ACTIONS(650), 1,
      anon_sym_SQUOTE,
    STATE(350), 1,
      sym_constructor,
    STATE(398), 1,
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
    STATE(379), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(230), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(457), 10,
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
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(423), 1,
      sym__varid,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(652), 1,
      sym__conid,
    ACTIONS(654), 1,
      anon_sym_SQUOTE,
    STATE(140), 1,
      sym_constructor,
    STATE(401), 1,
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
    STATE(174), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(178), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(166), 10,
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
    ACTIONS(529), 1,
      sym__varid,
    ACTIONS(531), 1,
      anon_sym_LPAREN,
    ACTIONS(656), 1,
      sym__conid,
    ACTIONS(658), 1,
      anon_sym_SQUOTE,
    STATE(238), 1,
      sym_constructor,
    STATE(383), 1,
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
    STATE(246), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(243), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(253), 10,
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
    ACTIONS(660), 1,
      sym__conid,
    ACTIONS(662), 1,
      anon_sym_SQUOTE,
    STATE(121), 1,
      sym_constructor,
    STATE(385), 1,
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
    STATE(160), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(152), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(147), 10,
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
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    STATE(86), 1,
      sym_constructor,
    STATE(399), 1,
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
    STATE(92), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(113), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(110), 10,
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
    STATE(190), 1,
      sym_constructor,
    STATE(384), 1,
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
    STATE(199), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
    STATE(206), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
    STATE(202), 10,
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
  [5558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
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
  [5597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 10,
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
    ACTIONS(666), 1,
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
    STATE(463), 1,
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
  [5718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
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
  [5756] = 3,
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
  [5792] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
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
  [5830] = 3,
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
  [5866] = 3,
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
  [5902] = 3,
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
  [5938] = 3,
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
  [5974] = 3,
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
  [6010] = 3,
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
  [6046] = 3,
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
  [6082] = 3,
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
  [6118] = 3,
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
  [6154] = 3,
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
  [6190] = 3,
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
  [6226] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_,
    ACTIONS(742), 1,
      anon_sym_EQ_GT,
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
  [6266] = 3,
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
  [6302] = 4,
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
    ACTIONS(676), 8,
      anon_sym_DOT,
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
  [6412] = 3,
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
  [6448] = 3,
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
  [6591] = 3,
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
  [6626] = 3,
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
  [6661] = 3,
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
  [6696] = 3,
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
  [6731] = 3,
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
  [6766] = 3,
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
  [6801] = 4,
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
  [6838] = 3,
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
  [6873] = 3,
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
  [6908] = 3,
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
  [6943] = 3,
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
  [6978] = 3,
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
  [7013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 9,
      anon_sym_DOT,
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
  [7048] = 3,
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
  [7083] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
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
  [7120] = 3,
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
  [7155] = 3,
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
  [7190] = 12,
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
    STATE(474), 1,
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
  [7243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
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
  [7280] = 3,
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
  [7315] = 3,
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
  [7350] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_,
    ACTIONS(742), 1,
      anon_sym_EQ_GT,
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
  [7389] = 3,
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
  [7492] = 4,
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
  [7528] = 3,
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
  [7562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
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
  [7598] = 3,
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
  [7632] = 3,
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
  [7666] = 3,
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
  [7700] = 3,
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
  [7734] = 3,
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
  [7768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 7,
      anon_sym_DOT,
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
  [7802] = 12,
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
    STATE(474), 1,
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
  [7854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
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
  [7890] = 3,
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
  [7924] = 3,
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
  [7958] = 3,
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
  [7992] = 3,
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
  [8094] = 3,
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
  [8128] = 3,
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
  [8162] = 3,
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
  [8196] = 3,
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
  [8230] = 3,
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
  [8329] = 12,
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
    STATE(474), 1,
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
  [8380] = 3,
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
  [8413] = 3,
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
  [8446] = 3,
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
  [8479] = 3,
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
  [8512] = 3,
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
  [8545] = 3,
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
  [8578] = 3,
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
  [8677] = 3,
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
  [8710] = 3,
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
  [8809] = 3,
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
  [8842] = 3,
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
    STATE(474), 1,
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
  [8925] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(199), 1,
      sym__integer_literal,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    ACTIONS(778), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_constructor,
    STATE(102), 1,
      sym_qualified_type,
    STATE(399), 1,
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
    STATE(111), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(113), 5,
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
    ACTIONS(656), 1,
      sym__conid,
    ACTIONS(780), 1,
      anon_sym_LPAREN,
    STATE(233), 1,
      sym_constructor,
    STATE(249), 1,
      sym_qualified_type,
    STATE(383), 1,
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
    STATE(252), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(243), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9027] = 13,
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
    STATE(348), 1,
      sym_constructor,
    STATE(378), 1,
      aux_sym__qualifying_module,
    STATE(391), 1,
      sym_qualified_type,
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
    STATE(364), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(367), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9078] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(784), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_constructor,
    STATE(128), 1,
      sym_qualified_type,
    STATE(371), 1,
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
    STATE(172), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(178), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9129] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      sym__integer_literal,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(786), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_constructor,
    STATE(102), 1,
      sym_qualified_type,
    STATE(399), 1,
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
    STATE(156), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(152), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9180] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      sym__integer_literal,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(620), 1,
      anon_sym_LBRACK,
    ACTIONS(788), 1,
      anon_sym_LPAREN,
    STATE(237), 1,
      sym_constructor,
    STATE(260), 1,
      sym_qualified_type,
    STATE(360), 1,
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
    STATE(225), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(230), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9231] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym__integer_literal,
    ACTIONS(271), 1,
      sym__conid,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    ACTIONS(790), 1,
      anon_sym_LPAREN,
    STATE(191), 1,
      sym_constructor,
    STATE(208), 1,
      sym_qualified_type,
    STATE(384), 1,
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
    STATE(252), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(243), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 6,
      anon_sym_DOT,
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
  [9313] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym__conid,
    ACTIONS(348), 1,
      sym__integer_literal,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_constructor,
    STATE(128), 1,
      sym_qualified_type,
    STATE(371), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    ACTIONS(346), 3,
      sym_float,
      sym_char,
      sym_string,
    ACTIONS(350), 3,
      sym__binary_literal,
      sym__octal_literal,
      sym__hex_literal,
    STATE(116), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(122), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9364] = 4,
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
  [9397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
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
  [9430] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__conid,
    ACTIONS(475), 1,
      sym__integer_literal,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(794), 1,
      anon_sym_LPAREN,
    STATE(191), 1,
      sym_constructor,
    STATE(208), 1,
      sym_qualified_type,
    STATE(384), 1,
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
    STATE(197), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(206), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
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
  [9514] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym__integer_literal,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(652), 1,
      sym__conid,
    ACTIONS(796), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_constructor,
    STATE(175), 1,
      sym_qualified_type,
    STATE(401), 1,
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
    STATE(172), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(178), 5,
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
    ACTIONS(660), 1,
      sym__conid,
    ACTIONS(798), 1,
      anon_sym_LPAREN,
    STATE(129), 1,
      sym_constructor,
    STATE(138), 1,
      sym_qualified_type,
    STATE(385), 1,
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
    STATE(156), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(152), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9616] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      sym__integer_literal,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(620), 1,
      anon_sym_LBRACK,
    ACTIONS(800), 1,
      anon_sym_LPAREN,
    STATE(340), 1,
      sym_constructor,
    STATE(386), 1,
      sym_qualified_type,
    STATE(398), 1,
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
    STATE(225), 4,
      sym_type_literal,
      sym_type_list,
      sym_type_tuple,
      sym__type_promotable_literal,
    STATE(230), 5,
      sym_integer,
      sym__literal,
      sym_con_unit,
      sym_con_list,
      sym_con_tuple,
  [9667] = 3,
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
  [9697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(700), 20,
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
  [9757] = 3,
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
  [9787] = 3,
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
  [9817] = 3,
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
  [9847] = 3,
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
  [9877] = 3,
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
  [9907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(674), 20,
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
  [9937] = 3,
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
  [9967] = 3,
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
  [9997] = 3,
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
  [10027] = 3,
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
  [10057] = 3,
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
  [10087] = 3,
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
  [10117] = 3,
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
  [10147] = 3,
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
  [10177] = 3,
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
  [10207] = 3,
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
  [10237] = 3,
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
  [10267] = 13,
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
    STATE(218), 2,
      sym__entity_line_definition,
      aux_sym_entity_body_repeat1,
    STATE(349), 2,
      sym__haskell_constraint_name,
      sym_constructor,
    STATE(512), 7,
      sym__entity_key,
      sym_surrogate_key,
      sym_natural_key,
      sym_field_definition,
      sym_unique_constraint,
      sym_foreign_constraint,
      sym_entity_deriving,
  [10316] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym__varid,
    ACTIONS(821), 1,
      anon_sym_Id,
    ACTIONS(824), 1,
      anon_sym_Primary,
    ACTIONS(827), 1,
      sym__field_strictness_prefix,
    ACTIONS(830), 1,
      anon_sym_Foreign,
    ACTIONS(833), 1,
      anon_sym_deriving,
    ACTIONS(836), 1,
      sym__conid,
    ACTIONS(839), 1,
      sym__dedent,
    STATE(78), 2,
      sym__field_name,
      sym_variable,
    STATE(218), 2,
      sym__entity_line_definition,
      aux_sym_entity_body_repeat1,
    STATE(349), 2,
      sym__haskell_constraint_name,
      sym_constructor,
    STATE(512), 7,
      sym__entity_key,
      sym_surrogate_key,
      sym_natural_key,
      sym_field_definition,
      sym_unique_constraint,
      sym_foreign_constraint,
      sym_entity_deriving,
  [10365] = 12,
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
    ACTIONS(841), 1,
      sym__tyconsym,
    STATE(315), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(474), 1,
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
  [10412] = 13,
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
    STATE(513), 1,
      sym_entity_body,
    STATE(78), 2,
      sym__field_name,
      sym_variable,
    STATE(217), 2,
      sym__entity_line_definition,
      aux_sym_entity_body_repeat1,
    STATE(349), 2,
      sym__haskell_constraint_name,
      sym_constructor,
    STATE(512), 7,
      sym__entity_key,
      sym_surrogate_key,
      sym_natural_key,
      sym_field_definition,
      sym_unique_constraint,
      sym_foreign_constraint,
      sym_entity_deriving,
  [10461] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_,
    ACTIONS(742), 1,
      anon_sym_EQ_GT,
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
  [10493] = 3,
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
  [10521] = 3,
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
  [10549] = 3,
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
  [10577] = 3,
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
  [10605] = 3,
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
  [10633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(704), 18,
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
  [10661] = 3,
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
  [10689] = 3,
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
  [10717] = 3,
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
  [10745] = 3,
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
  [10773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(708), 18,
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
  [10801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DOT,
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
  [10830] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 5,
      anon_sym_DOT,
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
  [10857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
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
  [10886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
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
  [10915] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DOT,
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
  [10944] = 4,
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
  [10973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
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
  [11002] = 3,
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
  [11028] = 3,
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
  [11054] = 3,
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
  [11080] = 3,
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
  [11106] = 3,
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
  [11132] = 3,
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
  [11158] = 3,
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
  [11184] = 3,
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
  [11210] = 3,
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
  [11236] = 3,
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
  [11262] = 3,
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
  [11288] = 14,
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
    ACTIONS(845), 1,
      ts_builtin_sym_end,
    STATE(317), 1,
      sym__entity_header,
    STATE(352), 1,
      sym_constructor,
    STATE(378), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(254), 2,
      sym_entity_definition,
      aux_sym_quasi_quotation_repeat1,
    STATE(295), 2,
      sym__entity_name,
      sym_type_name,
    STATE(376), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [11336] = 3,
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
  [11362] = 3,
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
  [11388] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      ts_builtin_sym_end,
    ACTIONS(849), 1,
      sym__varid,
    ACTIONS(852), 1,
      sym_is_sum_marker,
    ACTIONS(855), 1,
      anon_sym_LPAREN,
    ACTIONS(858), 1,
      sym__conid,
    ACTIONS(861), 1,
      anon_sym_SQUOTE,
    STATE(317), 1,
      sym__entity_header,
    STATE(352), 1,
      sym_constructor,
    STATE(378), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(254), 2,
      sym_entity_definition,
      aux_sym_quasi_quotation_repeat1,
    STATE(295), 2,
      sym__entity_name,
      sym_type_name,
    STATE(376), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [11436] = 3,
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
  [11462] = 3,
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
  [11488] = 3,
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
  [11514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(744), 16,
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
  [11540] = 3,
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
  [11566] = 3,
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
  [11592] = 3,
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
  [11618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(732), 16,
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
  [11644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(728), 16,
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
  [11670] = 3,
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
  [11696] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(81), 1,
      sym__tyconsym,
    ACTIONS(83), 1,
      anon_sym_2,
    ACTIONS(85), 1,
      anon_sym_DASH_GT,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(646), 1,
      sym__varid,
    STATE(315), 1,
      aux_sym__qualifying_module,
    STATE(400), 1,
      sym_type_variable,
    STATE(461), 1,
      sym__modid,
    STATE(470), 1,
      sym__arrow,
    STATE(474), 1,
      sym_constructor,
    STATE(469), 6,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym_annotated_type_variable,
  [11741] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(91), 1,
      sym__tyconsym,
    ACTIONS(93), 1,
      anon_sym_2,
    ACTIONS(95), 1,
      anon_sym_DASH_GT,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(646), 1,
      sym__varid,
    STATE(315), 1,
      aux_sym__qualifying_module,
    STATE(400), 1,
      sym_type_variable,
    STATE(461), 1,
      sym__modid,
    STATE(474), 1,
      sym_constructor,
    STATE(502), 1,
      sym__arrow,
    STATE(468), 6,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym_annotated_type_variable,
  [11786] = 10,
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
    ACTIONS(841), 1,
      sym__tyconsym,
    STATE(315), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(474), 1,
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
  [11825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 4,
      sym__integer_literal,
      sym__varid,
      anon_sym_SQUOTE,
      anon_sym_forall,
    ACTIONS(866), 12,
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
  [11849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 4,
      sym__integer_literal,
      sym__varid,
      anon_sym_SQUOTE,
      anon_sym_forall,
    ACTIONS(870), 12,
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
  [11873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(872), 13,
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
  [11896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(876), 13,
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
  [11919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(880), 13,
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
  [11942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(884), 12,
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
  [11964] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(772), 1,
      anon_sym_BQUOTE,
    ACTIONS(888), 1,
      sym__tyconsym,
    STATE(315), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(474), 1,
      sym_constructor,
    STATE(273), 7,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
      sym__ticked_qtycon,
      sym__qtyconops,
  [11998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(890), 12,
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
  [12020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(894), 12,
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
  [12042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 2,
      sym__integer_literal,
      anon_sym_SQUOTE,
    ACTIONS(898), 12,
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
  [12064] = 10,
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
    STATE(352), 1,
      sym_constructor,
    STATE(378), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(298), 2,
      sym__entity_name,
      sym_type_name,
    STATE(376), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [12099] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym__varid,
    ACTIONS(902), 1,
      anon_sym_LPAREN,
    ACTIONS(904), 1,
      sym__conid,
    ACTIONS(906), 1,
      anon_sym_SQUOTE,
    STATE(350), 1,
      sym_constructor,
    STATE(394), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(415), 2,
      sym__entity_name,
      sym_type_name,
    STATE(379), 4,
      sym_qualified_type,
      sym_tycon_arrow,
      sym__promoted_tycon,
      sym_type_variable,
  [12134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 2,
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
  [12153] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(137), 1,
      sym__tyconsym,
    ACTIONS(618), 1,
      sym__conid,
    STATE(315), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(474), 1,
      sym_constructor,
    STATE(514), 5,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
  [12182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 11,
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
  [12199] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_PERCENT,
    STATE(430), 1,
      sym_modifier,
    ACTIONS(914), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    STATE(45), 2,
      sym__arrow,
      sym__fun_arrow,
    ACTIONS(912), 5,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [12224] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(141), 1,
      sym__tyconsym,
    ACTIONS(618), 1,
      sym__conid,
    STATE(315), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(474), 1,
      sym_constructor,
    STATE(501), 5,
      sym_constructor_operator,
      sym_qualified_constructor_operator,
      sym__type_operator,
      sym_qualified_type_operator,
      sym__qualified_type_operator,
  [12253] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_PERCENT,
    STATE(430), 1,
      sym_modifier,
    ACTIONS(918), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    STATE(46), 2,
      sym__arrow,
      sym__fun_arrow,
    ACTIONS(912), 4,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [12277] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      sym__varid,
    ACTIONS(925), 1,
      anon_sym_LPAREN,
    ACTIONS(928), 1,
      anon_sym_LBRACE,
    ACTIONS(923), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
    STATE(286), 4,
      sym_type_variable,
      sym_inferred_type_variable,
      sym__quantifier,
      aux_sym__forall_repeat1,
  [12301] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym__varid,
    ACTIONS(933), 1,
      anon_sym_LPAREN,
    ACTIONS(935), 1,
      anon_sym_LBRACE,
    ACTIONS(931), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
    STATE(286), 4,
      sym_type_variable,
      sym_inferred_type_variable,
      sym__quantifier,
      aux_sym__forall_repeat1,
  [12325] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      aux_sym__attribute_key_value_key_token1,
    ACTIONS(939), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(941), 1,
      sym_attribute_other,
    ACTIONS(943), 1,
      sym__newline,
    STATE(297), 1,
      aux_sym_field_definition_repeat1,
    STATE(337), 1,
      sym__attribute_key_value_key,
    STATE(381), 3,
      sym__field_attribute,
      sym__attribute,
      sym_attribute_key_value,
  [12352] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      aux_sym__attribute_key_value_key_token1,
    ACTIONS(948), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(951), 1,
      sym_attribute_other,
    ACTIONS(954), 1,
      sym__newline,
    STATE(289), 1,
      aux_sym_field_definition_repeat1,
    STATE(337), 1,
      sym__attribute_key_value_key,
    STATE(381), 3,
      sym__field_attribute,
      sym__attribute,
      sym_attribute_key_value,
  [12379] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      aux_sym__attribute_key_value_key_token1,
    ACTIONS(959), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(962), 1,
      sym_attribute_other,
    ACTIONS(965), 1,
      sym__newline,
    STATE(337), 1,
      sym__attribute_key_value_key,
    STATE(290), 4,
      sym__entity_attribute,
      sym__attribute,
      sym_attribute_key_value,
      aux_sym__entity_header_repeat1,
  [12404] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      aux_sym__attribute_key_value_key_token1,
    ACTIONS(967), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(969), 1,
      sym_attribute_other,
    ACTIONS(971), 1,
      sym__newline,
    STATE(337), 1,
      sym__attribute_key_value_key,
    STATE(290), 4,
      sym__entity_attribute,
      sym__attribute,
      sym_attribute_key_value,
      aux_sym__entity_header_repeat1,
  [12429] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      aux_sym__attribute_key_value_key_token1,
    ACTIONS(939), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(941), 1,
      sym_attribute_other,
    ACTIONS(973), 1,
      sym__newline,
    STATE(289), 1,
      aux_sym_field_definition_repeat1,
    STATE(337), 1,
      sym__attribute_key_value_key,
    STATE(381), 3,
      sym__field_attribute,
      sym__attribute,
      sym_attribute_key_value,
  [12456] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      aux_sym__attribute_key_value_key_token1,
    ACTIONS(939), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(941), 1,
      sym_attribute_other,
    ACTIONS(975), 1,
      sym__newline,
    STATE(292), 1,
      aux_sym_field_definition_repeat1,
    STATE(337), 1,
      sym__attribute_key_value_key,
    STATE(381), 3,
      sym__field_attribute,
      sym__attribute,
      sym_attribute_key_value,
  [12483] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      aux_sym__attribute_key_value_key_token1,
    ACTIONS(967), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(969), 1,
      sym_attribute_other,
    ACTIONS(977), 1,
      sym__newline,
    STATE(337), 1,
      sym__attribute_key_value_key,
    STATE(290), 4,
      sym__entity_attribute,
      sym__attribute,
      sym_attribute_key_value,
      aux_sym__entity_header_repeat1,
  [12508] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      aux_sym__attribute_key_value_key_token1,
    ACTIONS(979), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(981), 1,
      sym_attribute_other,
    ACTIONS(983), 1,
      sym__newline,
    STATE(337), 1,
      sym__attribute_key_value_key,
    STATE(294), 4,
      sym__entity_attribute,
      sym__attribute,
      sym_attribute_key_value,
      aux_sym__entity_header_repeat1,
  [12533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 2,
      anon_sym_,
      anon_sym_EQ_GT,
    ACTIONS(985), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(764), 5,
      anon_sym_2,
      anon_sym_DASH_GT,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_PERCENT,
  [12552] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      aux_sym__attribute_key_value_key_token1,
    ACTIONS(939), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(941), 1,
      sym_attribute_other,
    ACTIONS(988), 1,
      sym__newline,
    STATE(289), 1,
      aux_sym_field_definition_repeat1,
    STATE(337), 1,
      sym__attribute_key_value_key,
    STATE(381), 3,
      sym__field_attribute,
      sym__attribute,
      sym_attribute_key_value,
  [12579] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      aux_sym__attribute_key_value_key_token1,
    ACTIONS(990), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(992), 1,
      sym_attribute_other,
    ACTIONS(994), 1,
      sym__newline,
    STATE(337), 1,
      sym__attribute_key_value_key,
    STATE(291), 4,
      sym__entity_attribute,
      sym__attribute,
      sym_attribute_key_value,
      aux_sym__entity_header_repeat1,
  [12604] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      aux_sym__attribute_key_value_key_token1,
    ACTIONS(999), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(1002), 1,
      sym_attribute_other,
    ACTIONS(1005), 1,
      sym__newline,
    STATE(299), 1,
      aux_sym__list_of_attributes_start_with_no_other_repeat1,
    STATE(337), 1,
      sym__attribute_key_value_key,
    STATE(402), 2,
      sym__attribute,
      sym_attribute_key_value,
  [12630] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      aux_sym__attribute_key_value_key_token1,
    ACTIONS(1007), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(1009), 1,
      anon_sym_References,
    ACTIONS(1011), 1,
      sym__newline,
    STATE(307), 1,
      sym__attribute_no_other,
    STATE(337), 1,
      sym__attribute_key_value_key,
    STATE(366), 1,
      sym_attribute_key_value,
    STATE(506), 1,
      sym__list_of_attributes_start_with_no_other,
  [12658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 2,
      sym__dedent,
      sym__field_strictness_prefix,
    ACTIONS(1013), 6,
      anon_sym_Id,
      anon_sym_Primary,
      anon_sym_Foreign,
      anon_sym_deriving,
      sym__varid,
      sym__conid,
  [12674] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      aux_sym__attribute_key_value_key_token1,
    ACTIONS(1017), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(1019), 1,
      sym_attribute_other,
    ACTIONS(1021), 1,
      sym__newline,
    STATE(299), 1,
      aux_sym__list_of_attributes_start_with_no_other_repeat1,
    STATE(337), 1,
      sym__attribute_key_value_key,
    STATE(402), 2,
      sym__attribute,
      sym_attribute_key_value,
  [12700] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      sym__varid,
    ACTIONS(1027), 1,
      anon_sym_References,
    STATE(304), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(344), 2,
      sym__field_name,
      sym_variable,
    ACTIONS(1025), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [12722] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      sym__varid,
    ACTIONS(1034), 1,
      anon_sym_References,
    STATE(304), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(344), 2,
      sym__field_name,
      sym_variable,
    ACTIONS(1032), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [12744] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      sym__colon2,
    STATE(403), 1,
      sym__type_annotation,
    STATE(445), 1,
      sym_kind,
    ACTIONS(1038), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
    ACTIONS(1036), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [12766] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      aux_sym__attribute_key_value_key_token1,
    ACTIONS(1007), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(1040), 1,
      anon_sym_References,
    ACTIONS(1042), 1,
      sym__newline,
    STATE(307), 1,
      sym__attribute_no_other,
    STATE(337), 1,
      sym__attribute_key_value_key,
    STATE(366), 1,
      sym_attribute_key_value,
    STATE(511), 1,
      sym__list_of_attributes_start_with_no_other,
  [12794] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      aux_sym__attribute_key_value_key_token1,
    ACTIONS(1017), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(1019), 1,
      sym_attribute_other,
    ACTIONS(1044), 1,
      sym__newline,
    STATE(302), 1,
      aux_sym__list_of_attributes_start_with_no_other_repeat1,
    STATE(337), 1,
      sym__attribute_key_value_key,
    STATE(402), 2,
      sym__attribute,
      sym_attribute_key_value,
  [12820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [12833] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      sym__varid,
    ACTIONS(933), 1,
      anon_sym_LPAREN,
    ACTIONS(935), 1,
      anon_sym_LBRACE,
    STATE(287), 4,
      sym_type_variable,
      sym_inferred_type_variable,
      sym__quantifier,
      aux_sym__forall_repeat1,
  [12852] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      aux_sym__attribute_key_value_key_token1,
    ACTIONS(1007), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(1048), 1,
      sym__newline,
    STATE(307), 1,
      sym__attribute_no_other,
    STATE(337), 1,
      sym__attribute_key_value_key,
    STATE(366), 1,
      sym_attribute_key_value,
    STATE(499), 1,
      sym__list_of_attributes_start_with_no_other,
  [12877] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      aux_sym__attribute_key_value_key_token1,
    ACTIONS(1007), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(1050), 1,
      sym__newline,
    STATE(307), 1,
      sym__attribute_no_other,
    STATE(337), 1,
      sym__attribute_key_value_key,
    STATE(366), 1,
      sym_attribute_key_value,
    STATE(494), 1,
      sym__list_of_attributes_start_with_no_other,
  [12902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
    ACTIONS(700), 5,
      anon_sym_2,
      anon_sym_DASH_GT,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RBRACE,
  [12917] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      aux_sym__attribute_key_value_key_token1,
    ACTIONS(1007), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(1052), 1,
      sym__newline,
    STATE(307), 1,
      sym__attribute_no_other,
    STATE(337), 1,
      sym__attribute_key_value_key,
    STATE(366), 1,
      sym_attribute_key_value,
    STATE(491), 1,
      sym__list_of_attributes_start_with_no_other,
  [12942] = 2,
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
  [12955] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(618), 1,
      sym__conid,
    ACTIONS(1056), 1,
      sym__tyconsym,
    STATE(272), 1,
      sym_constructor_operator,
    STATE(331), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(474), 1,
      sym_constructor,
  [12980] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__consym,
    ACTIONS(41), 1,
      sym__conid,
    ACTIONS(1056), 1,
      sym__tyconsym,
    STATE(89), 1,
      sym_constructor,
    STATE(272), 1,
      sym_constructor_operator,
    STATE(331), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [13005] = 3,
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
  [13020] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      sym__conid,
    ACTIONS(1064), 1,
      sym__newline,
    STATE(322), 1,
      aux_sym_entity_deriving_repeat1,
    STATE(387), 1,
      aux_sym__qualifying_module,
    STATE(416), 1,
      sym_constructor,
    STATE(461), 1,
      sym__modid,
    STATE(467), 1,
      sym_qualified_type,
  [13045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1066), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [13058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1068), 7,
      sym__indent,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [13071] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      aux_sym__attribute_key_value_key_token1,
    ACTIONS(1007), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(1070), 1,
      sym__newline,
    STATE(307), 1,
      sym__attribute_no_other,
    STATE(337), 1,
      sym__attribute_key_value_key,
    STATE(366), 1,
      sym_attribute_key_value,
    STATE(490), 1,
      sym__list_of_attributes_start_with_no_other,
  [13096] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      sym__conid,
    ACTIONS(1075), 1,
      sym__newline,
    STATE(322), 1,
      aux_sym_entity_deriving_repeat1,
    STATE(387), 1,
      aux_sym__qualifying_module,
    STATE(416), 1,
      sym_constructor,
    STATE(461), 1,
      sym__modid,
    STATE(467), 1,
      sym_qualified_type,
  [13121] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      aux_sym__attribute_key_value_key_token1,
    ACTIONS(1007), 1,
      sym_attribute_exclamation_mark,
    ACTIONS(1077), 1,
      sym__newline,
    STATE(307), 1,
      sym__attribute_no_other,
    STATE(337), 1,
      sym__attribute_key_value_key,
    STATE(366), 1,
      sym_attribute_key_value,
    STATE(504), 1,
      sym__list_of_attributes_start_with_no_other,
  [13146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13170] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym__conid,
    ACTIONS(1083), 1,
      anon_sym_LPAREN,
    STATE(340), 1,
      sym_constructor,
    STATE(386), 1,
      sym_qualified_type,
    STATE(394), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [13192] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      sym__conid,
    STATE(318), 1,
      aux_sym_entity_deriving_repeat1,
    STATE(387), 1,
      aux_sym__qualifying_module,
    STATE(416), 1,
      sym_constructor,
    STATE(461), 1,
      sym__modid,
    STATE(467), 1,
      sym_qualified_type,
  [13214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 6,
      sym_comma,
      anon_sym_4,
      anon_sym_COLON_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [13250] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      sym__consym,
    ACTIONS(1093), 1,
      sym__tyconsym,
    ACTIONS(1095), 1,
      sym__conid,
    STATE(331), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(474), 1,
      sym_constructor,
  [13272] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__conid,
    ACTIONS(1098), 1,
      anon_sym_LPAREN,
    STATE(348), 1,
      sym_constructor,
    STATE(378), 1,
      aux_sym__qualifying_module,
    STATE(391), 1,
      sym_qualified_type,
    STATE(461), 1,
      sym__modid,
  [13294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 6,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [13306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 6,
      ts_builtin_sym_end,
      sym_is_sum_marker,
      sym__varid,
      anon_sym_LPAREN,
      sym__conid,
      anon_sym_SQUOTE,
  [13318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 6,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
      sym__varid,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [13330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(680), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
    ACTIONS(678), 3,
      anon_sym_2,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
  [13346] = 3,
    ACTIONS(1106), 1,
      sym_comment,
    STATE(359), 1,
      sym__attribute_key_value_value,
    ACTIONS(1108), 5,
      aux_sym__attribute_key_value_value_token1,
      aux_sym__attribute_key_value_value_token2,
      aux_sym__attribute_key_value_value_token3,
      sym_char,
      sym_string,
  [13360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(37), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1110), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13373] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 1,
      sym_comma,
    ACTIONS(1117), 1,
      anon_sym_RPAREN,
    STATE(449), 1,
      aux_sym__context_constraints_repeat1,
    ACTIONS(1115), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [13390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(670), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(672), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(49), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1120), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13418] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      sym__varid,
    STATE(303), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(323), 1,
      sym__list_of_fields,
    STATE(344), 2,
      sym__field_name,
      sym_variable,
  [13435] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym_attribute_other,
    ACTIONS(674), 4,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
      anon_sym_DOT,
  [13448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1124), 2,
      anon_sym_References,
      sym__varid,
    ACTIONS(1126), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [13461] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      sym__varid,
    STATE(303), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(313), 1,
      sym__list_of_fields,
    STATE(344), 2,
      sym__field_name,
      sym_variable,
  [13478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(60), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1128), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13491] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      sym__varid,
    STATE(303), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(310), 1,
      sym__list_of_fields,
    STATE(344), 2,
      sym__field_name,
      sym_variable,
  [13508] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym_attribute_other,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(670), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [13523] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      sym__varid,
    STATE(303), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(321), 1,
      sym__list_of_fields,
    STATE(344), 2,
      sym__field_name,
      sym_variable,
  [13540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(664), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(668), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13555] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      sym__varid,
    STATE(303), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(306), 1,
      sym__list_of_fields,
    STATE(344), 2,
      sym__field_name,
      sym_variable,
  [13572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(668), 1,
      sym_attribute_other,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(664), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [13587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(48), 2,
      sym__arrow,
      sym__forall_dot,
    ACTIONS(1130), 3,
      anon_sym_DOT,
      anon_sym_2,
      anon_sym_DASH_GT,
  [13600] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym__colon2,
    STATE(463), 1,
      sym__type_annotation,
    ACTIONS(1038), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [13617] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      sym__varid,
    STATE(300), 1,
      sym__list_of_fields,
    STATE(303), 1,
      aux_sym__list_of_fields_repeat1,
    STATE(344), 2,
      sym__field_name,
      sym_variable,
  [13634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      sym_attribute_other,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(678), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [13649] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__conid,
    STATE(398), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
    STATE(462), 1,
      sym_constructor,
    STATE(498), 1,
      sym_qualified_type,
  [13668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 2,
      anon_sym_References,
      sym__varid,
    ACTIONS(890), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [13681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1136), 1,
      sym_attribute_other,
    ACTIONS(1134), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [13693] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__conid,
    STATE(239), 1,
      sym_constructor,
    STATE(331), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [13709] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym_attribute_other,
    ACTIONS(716), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [13721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym_attribute_other,
    ACTIONS(720), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [13733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(746), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      sym_attribute_other,
    ACTIONS(752), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [13757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_attribute_other,
    ACTIONS(756), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [13769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1140), 1,
      sym_attribute_other,
    ACTIONS(1138), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [13781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      sym_attribute_other,
    ACTIONS(760), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [13793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      sym_attribute_other,
    ACTIONS(708), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [13805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym_attribute_other,
    ACTIONS(692), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [13817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(734), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13829] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym__conid,
    STATE(93), 1,
      sym_constructor,
    STATE(331), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [13845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(39), 1,
      sym__colon2,
    STATE(330), 1,
      sym__type_annotation,
    ACTIONS(1142), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [13859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      sym_attribute_other,
    ACTIONS(704), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [13871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_attribute_other,
    ACTIONS(736), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [13883] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      sym__colon2,
    STATE(330), 1,
      sym__type_annotation,
    ACTIONS(1038), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [13897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym_attribute_other,
    ACTIONS(682), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [13909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym_attribute_other,
    ACTIONS(696), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [13921] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__conid,
    STATE(331), 1,
      aux_sym__qualifying_module,
    STATE(356), 1,
      sym_constructor,
    STATE(461), 1,
      sym__modid,
  [13937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(684), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [13949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym_attribute_other,
    ACTIONS(712), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [13961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1146), 1,
      sym_attribute_other,
    ACTIONS(1144), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [13973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      sym_attribute_other,
    ACTIONS(744), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [13985] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      sym__conid,
    STATE(235), 1,
      sym_constructor,
    STATE(331), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [14001] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym__conid,
    STATE(193), 1,
      sym_constructor,
    STATE(331), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [14017] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      sym__conid,
    STATE(133), 1,
      sym_constructor,
    STATE(331), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [14033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(726), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [14045] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      sym__conid,
    STATE(331), 1,
      aux_sym__qualifying_module,
    STATE(456), 1,
      sym_constructor,
    STATE(461), 1,
      sym__modid,
  [14061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      sym_attribute_other,
    ACTIONS(732), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [14073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1148), 1,
      sym_comma,
    STATE(389), 1,
      aux_sym_type_list_repeat1,
    ACTIONS(1151), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [14087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(1155), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [14099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      sym_attribute_other,
    ACTIONS(724), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [14111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 4,
      sym_comma,
      anon_sym_,
      anon_sym_EQ_GT,
      anon_sym_RPAREN,
  [14121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      sym_attribute_other,
    ACTIONS(728), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [14133] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym__conid,
    STATE(331), 1,
      aux_sym__qualifying_module,
    STATE(336), 1,
      sym_constructor,
    STATE(461), 1,
      sym__modid,
  [14149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 2,
      sym_comma,
      anon_sym_RPAREN,
    ACTIONS(1159), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [14161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
    ACTIONS(730), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [14173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym_attribute_other,
    ACTIONS(700), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [14185] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      sym__conid,
    STATE(331), 1,
      aux_sym__qualifying_module,
    STATE(336), 1,
      sym_constructor,
    STATE(461), 1,
      sym__modid,
  [14201] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym__conid,
    STATE(89), 1,
      sym_constructor,
    STATE(331), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [14217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      sym__colon2,
    STATE(463), 1,
      sym__type_annotation,
    ACTIONS(1038), 2,
      anon_sym_4,
      anon_sym_COLON_COLON,
  [14231] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      sym__conid,
    STATE(150), 1,
      sym_constructor,
    STATE(331), 1,
      aux_sym__qualifying_module,
    STATE(461), 1,
      sym__modid,
  [14247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      sym_attribute_other,
    ACTIONS(1161), 3,
      sym__newline,
      aux_sym__attribute_key_value_key_token1,
      sym_attribute_exclamation_mark,
  [14259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [14268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1169), 1,
      anon_sym_RBRACK,
    STATE(435), 1,
      aux_sym_type_list_repeat1,
  [14281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1171), 1,
      sym_comma,
    ACTIONS(1174), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      aux_sym_con_tuple_repeat1,
  [14294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
    STATE(389), 1,
      aux_sym_type_list_repeat1,
  [14307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1178), 1,
      anon_sym_RBRACK,
    STATE(389), 1,
      aux_sym_type_list_repeat1,
  [14320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1180), 1,
      sym__varid,
    STATE(77), 2,
      sym__field_name,
      sym_variable,
  [14331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1182), 1,
      anon_sym_RBRACK,
    STATE(407), 1,
      aux_sym_type_list_repeat1,
  [14344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1184), 1,
      sym_comma,
    ACTIONS(1187), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      aux_sym__context_constraints_repeat1,
  [14357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [14366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      sym_comma,
    ACTIONS(1191), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      aux_sym_con_tuple_repeat1,
  [14379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1193), 1,
      anon_sym_RBRACK,
    STATE(389), 1,
      aux_sym_type_list_repeat1,
  [14392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(268), 1,
      sym__carrow,
    ACTIONS(1195), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [14403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 1,
      sym_cascade_action,
    ACTIONS(1199), 1,
      sym_sql_constraint_name,
    STATE(441), 1,
      aux_sym_foreign_constraint_repeat1,
  [14416] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(1201), 2,
      sym__newline,
      sym__conid,
  [14427] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1203), 1,
      sym_cascade_action,
    ACTIONS(1206), 1,
      sym_sql_constraint_name,
    STATE(417), 1,
      aux_sym_foreign_constraint_repeat1,
  [14440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1208), 1,
      anon_sym_RBRACK,
    STATE(413), 1,
      aux_sym_type_list_repeat1,
  [14453] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1210), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_type_list_repeat1,
  [14466] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      sym_comma,
    ACTIONS(1212), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      aux_sym_con_tuple_repeat1,
  [14479] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1214), 1,
      anon_sym_RBRACK,
    STATE(424), 1,
      aux_sym_type_list_repeat1,
  [14492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      sym_comma,
    ACTIONS(1216), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      aux_sym_con_tuple_repeat1,
  [14505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      sym_comma,
    ACTIONS(1220), 1,
      anon_sym_RPAREN,
    STATE(449), 1,
      aux_sym__context_constraints_repeat1,
  [14518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1222), 1,
      anon_sym_RBRACK,
    STATE(389), 1,
      aux_sym_type_list_repeat1,
  [14531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1224), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_type_list_repeat1,
  [14544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      sym_comma,
    ACTIONS(1226), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      aux_sym_con_tuple_repeat1,
  [14557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1228), 1,
      anon_sym_RBRACK,
    STATE(436), 1,
      aux_sym_type_list_repeat1,
  [14570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym__varid,
    STATE(400), 1,
      sym_type_variable,
    STATE(486), 1,
      sym_annotated_type_variable,
  [14583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym__varid,
    STATE(354), 1,
      sym_type_variable,
    STATE(492), 1,
      sym_annotated_type_variable,
  [14596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(269), 1,
      sym__arrow,
    ACTIONS(1230), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
  [14607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1232), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_type_list_repeat1,
  [14620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_DOT,
    ACTIONS(676), 2,
      sym_cascade_action,
      sym_sql_constraint_name,
  [14631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1234), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_type_list_repeat1,
  [14644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      sym__tyconsym,
    ACTIONS(1091), 2,
      sym__consym,
      sym__conid,
  [14655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1236), 1,
      anon_sym_RBRACK,
    STATE(389), 1,
      aux_sym_type_list_repeat1,
  [14668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1238), 1,
      anon_sym_RBRACK,
    STATE(389), 1,
      aux_sym_type_list_repeat1,
  [14681] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1240), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_type_list_repeat1,
  [14694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      sym_comma,
    ACTIONS(1242), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      aux_sym_con_tuple_repeat1,
  [14707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1244), 1,
      anon_sym_RBRACK,
    STATE(442), 1,
      aux_sym_type_list_repeat1,
  [14720] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      sym_comma,
    ACTIONS(1246), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      aux_sym_con_tuple_repeat1,
  [14733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1248), 1,
      sym_cascade_action,
    ACTIONS(1250), 1,
      sym_sql_constraint_name,
    STATE(417), 1,
      aux_sym_foreign_constraint_repeat1,
  [14746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1252), 1,
      anon_sym_RBRACK,
    STATE(389), 1,
      aux_sym_type_list_repeat1,
  [14759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1254), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_type_list_repeat1,
  [14772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      sym_comma,
    ACTIONS(1256), 1,
      anon_sym_RPAREN,
    STATE(449), 1,
      aux_sym__context_constraints_repeat1,
  [14785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1258), 3,
      sym_comma,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [14794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_type_list_repeat1,
  [14807] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1262), 1,
      anon_sym_RBRACK,
    STATE(389), 1,
      aux_sym_type_list_repeat1,
  [14820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      sym_comma,
    ACTIONS(1264), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      aux_sym_con_tuple_repeat1,
  [14833] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1218), 1,
      sym_comma,
    ACTIONS(1266), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      aux_sym__context_constraints_repeat1,
  [14846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 3,
      sym__newline,
      anon_sym_DOT,
      sym__conid,
  [14855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1268), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_type_list_repeat1,
  [14868] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      sym_comma,
    ACTIONS(1270), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      aux_sym_con_tuple_repeat1,
  [14881] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1272), 1,
      anon_sym_RBRACK,
    STATE(455), 1,
      aux_sym_type_list_repeat1,
  [14894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1274), 1,
      anon_sym_RBRACK,
    STATE(447), 1,
      aux_sym_type_list_repeat1,
  [14907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    ACTIONS(1276), 1,
      anon_sym_RBRACK,
    STATE(389), 1,
      aux_sym_type_list_repeat1,
  [14920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(678), 2,
      sym__newline,
      sym__conid,
  [14931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1278), 2,
      anon_sym_2,
      anon_sym_DASH_GT,
  [14939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1280), 2,
      sym_comma,
      anon_sym_RPAREN,
  [14947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [14955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      sym_comma,
    STATE(406), 1,
      aux_sym_type_list_repeat1,
  [14965] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1282), 1,
      anon_sym_DOT,
    STATE(434), 1,
      sym__dot,
  [14975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DOT,
    ACTIONS(1284), 1,
      anon_sym_BQUOTE,
  [14985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1286), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [14993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1288), 2,
      anon_sym_,
      anon_sym_EQ_GT,
  [15001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1187), 2,
      sym_comma,
      anon_sym_RPAREN,
  [15009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1290), 2,
      sym_comma,
      anon_sym_RPAREN,
  [15017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1292), 2,
      sym__newline,
      sym__conid,
  [15025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
  [15032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1296), 1,
      anon_sym_RPAREN,
  [15039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
  [15046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1300), 1,
      anon_sym_RPAREN,
  [15053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1302), 1,
      anon_sym_RPAREN,
  [15060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1304), 1,
      anon_sym_RPAREN,
  [15067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_DOT,
  [15074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1306), 1,
      anon_sym_RPAREN,
  [15081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1308), 1,
      anon_sym_RPAREN,
  [15088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1310), 1,
      anon_sym_RPAREN,
  [15095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1312), 1,
      anon_sym_RPAREN,
  [15102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1314), 1,
      anon_sym_RPAREN,
  [15109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1316), 1,
      anon_sym_RPAREN,
  [15116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1318), 1,
      anon_sym_RPAREN,
  [15123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1320), 1,
      anon_sym_RPAREN,
  [15130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1322), 1,
      anon_sym_RPAREN,
  [15137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1324), 1,
      anon_sym_RPAREN,
  [15144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1326), 1,
      anon_sym_RPAREN,
  [15151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1328), 1,
      anon_sym_RPAREN,
  [15158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1330), 1,
      anon_sym_RPAREN,
  [15165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1332), 1,
      anon_sym_RPAREN,
  [15172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1334), 1,
      anon_sym_RPAREN,
  [15179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1336), 1,
      sym__newline,
  [15186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1338), 1,
      sym__newline,
  [15193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1132), 1,
      anon_sym_RBRACE,
  [15200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1340), 1,
      anon_sym_RPAREN,
  [15207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1342), 1,
      sym__newline,
  [15214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
  [15221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1346), 1,
      anon_sym_RPAREN,
  [15228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1348), 1,
      anon_sym_RPAREN,
  [15235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1350), 1,
      anon_sym_BQUOTE,
  [15242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1352), 1,
      sym__newline,
  [15249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1354), 1,
      anon_sym_RPAREN,
  [15256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1356), 1,
      anon_sym_RPAREN,
  [15263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1358), 1,
      anon_sym_RPAREN,
  [15270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1360), 1,
      anon_sym_RPAREN,
  [15277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1362), 1,
      sym__newline,
  [15284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1364), 1,
      anon_sym_RPAREN,
  [15291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1366), 1,
      sym__newline,
  [15298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1368), 1,
      anon_sym_RPAREN,
  [15305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1370), 1,
      anon_sym_RPAREN,
  [15312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1372), 1,
      anon_sym_RPAREN,
  [15319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1374), 1,
      ts_builtin_sym_end,
  [15326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      sym__newline,
  [15333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1376), 1,
      sym__newline,
  [15340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1378), 1,
      sym__dedent,
  [15347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1380), 1,
      anon_sym_RPAREN,
  [15354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1382), 1,
      anon_sym_RPAREN,
  [15361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1384), 1,
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
  [SMALL_STATE(45)] = 2001,
  [SMALL_STATE(46)] = 2108,
  [SMALL_STATE(47)] = 2215,
  [SMALL_STATE(48)] = 2324,
  [SMALL_STATE(49)] = 2431,
  [SMALL_STATE(50)] = 2538,
  [SMALL_STATE(51)] = 2631,
  [SMALL_STATE(52)] = 2722,
  [SMALL_STATE(53)] = 2813,
  [SMALL_STATE(54)] = 2904,
  [SMALL_STATE(55)] = 2996,
  [SMALL_STATE(56)] = 3086,
  [SMALL_STATE(57)] = 3176,
  [SMALL_STATE(58)] = 3270,
  [SMALL_STATE(59)] = 3360,
  [SMALL_STATE(60)] = 3449,
  [SMALL_STATE(61)] = 3554,
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
  [SMALL_STATE(87)] = 5558,
  [SMALL_STATE(88)] = 5597,
  [SMALL_STATE(89)] = 5634,
  [SMALL_STATE(90)] = 5673,
  [SMALL_STATE(91)] = 5718,
  [SMALL_STATE(92)] = 5756,
  [SMALL_STATE(93)] = 5792,
  [SMALL_STATE(94)] = 5830,
  [SMALL_STATE(95)] = 5866,
  [SMALL_STATE(96)] = 5902,
  [SMALL_STATE(97)] = 5938,
  [SMALL_STATE(98)] = 5974,
  [SMALL_STATE(99)] = 6010,
  [SMALL_STATE(100)] = 6046,
  [SMALL_STATE(101)] = 6082,
  [SMALL_STATE(102)] = 6118,
  [SMALL_STATE(103)] = 6154,
  [SMALL_STATE(104)] = 6190,
  [SMALL_STATE(105)] = 6226,
  [SMALL_STATE(106)] = 6266,
  [SMALL_STATE(107)] = 6302,
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
  [SMALL_STATE(119)] = 6731,
  [SMALL_STATE(120)] = 6766,
  [SMALL_STATE(121)] = 6801,
  [SMALL_STATE(122)] = 6838,
  [SMALL_STATE(123)] = 6873,
  [SMALL_STATE(124)] = 6908,
  [SMALL_STATE(125)] = 6943,
  [SMALL_STATE(126)] = 6978,
  [SMALL_STATE(127)] = 7013,
  [SMALL_STATE(128)] = 7048,
  [SMALL_STATE(129)] = 7083,
  [SMALL_STATE(130)] = 7120,
  [SMALL_STATE(131)] = 7155,
  [SMALL_STATE(132)] = 7190,
  [SMALL_STATE(133)] = 7243,
  [SMALL_STATE(134)] = 7280,
  [SMALL_STATE(135)] = 7315,
  [SMALL_STATE(136)] = 7350,
  [SMALL_STATE(137)] = 7389,
  [SMALL_STATE(138)] = 7424,
  [SMALL_STATE(139)] = 7458,
  [SMALL_STATE(140)] = 7492,
  [SMALL_STATE(141)] = 7528,
  [SMALL_STATE(142)] = 7562,
  [SMALL_STATE(143)] = 7598,
  [SMALL_STATE(144)] = 7632,
  [SMALL_STATE(145)] = 7666,
  [SMALL_STATE(146)] = 7700,
  [SMALL_STATE(147)] = 7734,
  [SMALL_STATE(148)] = 7768,
  [SMALL_STATE(149)] = 7802,
  [SMALL_STATE(150)] = 7854,
  [SMALL_STATE(151)] = 7890,
  [SMALL_STATE(152)] = 7924,
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
  [SMALL_STATE(165)] = 8380,
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
  [SMALL_STATE(201)] = 9787,
  [SMALL_STATE(202)] = 9817,
  [SMALL_STATE(203)] = 9847,
  [SMALL_STATE(204)] = 9877,
  [SMALL_STATE(205)] = 9907,
  [SMALL_STATE(206)] = 9937,
  [SMALL_STATE(207)] = 9967,
  [SMALL_STATE(208)] = 9997,
  [SMALL_STATE(209)] = 10027,
  [SMALL_STATE(210)] = 10057,
  [SMALL_STATE(211)] = 10087,
  [SMALL_STATE(212)] = 10117,
  [SMALL_STATE(213)] = 10147,
  [SMALL_STATE(214)] = 10177,
  [SMALL_STATE(215)] = 10207,
  [SMALL_STATE(216)] = 10237,
  [SMALL_STATE(217)] = 10267,
  [SMALL_STATE(218)] = 10316,
  [SMALL_STATE(219)] = 10365,
  [SMALL_STATE(220)] = 10412,
  [SMALL_STATE(221)] = 10461,
  [SMALL_STATE(222)] = 10493,
  [SMALL_STATE(223)] = 10521,
  [SMALL_STATE(224)] = 10549,
  [SMALL_STATE(225)] = 10577,
  [SMALL_STATE(226)] = 10605,
  [SMALL_STATE(227)] = 10633,
  [SMALL_STATE(228)] = 10661,
  [SMALL_STATE(229)] = 10689,
  [SMALL_STATE(230)] = 10717,
  [SMALL_STATE(231)] = 10745,
  [SMALL_STATE(232)] = 10773,
  [SMALL_STATE(233)] = 10801,
  [SMALL_STATE(234)] = 10830,
  [SMALL_STATE(235)] = 10857,
  [SMALL_STATE(236)] = 10886,
  [SMALL_STATE(237)] = 10915,
  [SMALL_STATE(238)] = 10944,
  [SMALL_STATE(239)] = 10973,
  [SMALL_STATE(240)] = 11002,
  [SMALL_STATE(241)] = 11028,
  [SMALL_STATE(242)] = 11054,
  [SMALL_STATE(243)] = 11080,
  [SMALL_STATE(244)] = 11106,
  [SMALL_STATE(245)] = 11132,
  [SMALL_STATE(246)] = 11158,
  [SMALL_STATE(247)] = 11184,
  [SMALL_STATE(248)] = 11210,
  [SMALL_STATE(249)] = 11236,
  [SMALL_STATE(250)] = 11262,
  [SMALL_STATE(251)] = 11288,
  [SMALL_STATE(252)] = 11336,
  [SMALL_STATE(253)] = 11362,
  [SMALL_STATE(254)] = 11388,
  [SMALL_STATE(255)] = 11436,
  [SMALL_STATE(256)] = 11462,
  [SMALL_STATE(257)] = 11488,
  [SMALL_STATE(258)] = 11514,
  [SMALL_STATE(259)] = 11540,
  [SMALL_STATE(260)] = 11566,
  [SMALL_STATE(261)] = 11592,
  [SMALL_STATE(262)] = 11618,
  [SMALL_STATE(263)] = 11644,
  [SMALL_STATE(264)] = 11670,
  [SMALL_STATE(265)] = 11696,
  [SMALL_STATE(266)] = 11741,
  [SMALL_STATE(267)] = 11786,
  [SMALL_STATE(268)] = 11825,
  [SMALL_STATE(269)] = 11849,
  [SMALL_STATE(270)] = 11873,
  [SMALL_STATE(271)] = 11896,
  [SMALL_STATE(272)] = 11919,
  [SMALL_STATE(273)] = 11942,
  [SMALL_STATE(274)] = 11964,
  [SMALL_STATE(275)] = 11998,
  [SMALL_STATE(276)] = 12020,
  [SMALL_STATE(277)] = 12042,
  [SMALL_STATE(278)] = 12064,
  [SMALL_STATE(279)] = 12099,
  [SMALL_STATE(280)] = 12134,
  [SMALL_STATE(281)] = 12153,
  [SMALL_STATE(282)] = 12182,
  [SMALL_STATE(283)] = 12199,
  [SMALL_STATE(284)] = 12224,
  [SMALL_STATE(285)] = 12253,
  [SMALL_STATE(286)] = 12277,
  [SMALL_STATE(287)] = 12301,
  [SMALL_STATE(288)] = 12325,
  [SMALL_STATE(289)] = 12352,
  [SMALL_STATE(290)] = 12379,
  [SMALL_STATE(291)] = 12404,
  [SMALL_STATE(292)] = 12429,
  [SMALL_STATE(293)] = 12456,
  [SMALL_STATE(294)] = 12483,
  [SMALL_STATE(295)] = 12508,
  [SMALL_STATE(296)] = 12533,
  [SMALL_STATE(297)] = 12552,
  [SMALL_STATE(298)] = 12579,
  [SMALL_STATE(299)] = 12604,
  [SMALL_STATE(300)] = 12630,
  [SMALL_STATE(301)] = 12658,
  [SMALL_STATE(302)] = 12674,
  [SMALL_STATE(303)] = 12700,
  [SMALL_STATE(304)] = 12722,
  [SMALL_STATE(305)] = 12744,
  [SMALL_STATE(306)] = 12766,
  [SMALL_STATE(307)] = 12794,
  [SMALL_STATE(308)] = 12820,
  [SMALL_STATE(309)] = 12833,
  [SMALL_STATE(310)] = 12852,
  [SMALL_STATE(311)] = 12877,
  [SMALL_STATE(312)] = 12902,
  [SMALL_STATE(313)] = 12917,
  [SMALL_STATE(314)] = 12942,
  [SMALL_STATE(315)] = 12955,
  [SMALL_STATE(316)] = 12980,
  [SMALL_STATE(317)] = 13005,
  [SMALL_STATE(318)] = 13020,
  [SMALL_STATE(319)] = 13045,
  [SMALL_STATE(320)] = 13058,
  [SMALL_STATE(321)] = 13071,
  [SMALL_STATE(322)] = 13096,
  [SMALL_STATE(323)] = 13121,
  [SMALL_STATE(324)] = 13146,
  [SMALL_STATE(325)] = 13158,
  [SMALL_STATE(326)] = 13170,
  [SMALL_STATE(327)] = 13192,
  [SMALL_STATE(328)] = 13214,
  [SMALL_STATE(329)] = 13226,
  [SMALL_STATE(330)] = 13238,
  [SMALL_STATE(331)] = 13250,
  [SMALL_STATE(332)] = 13272,
  [SMALL_STATE(333)] = 13294,
  [SMALL_STATE(334)] = 13306,
  [SMALL_STATE(335)] = 13318,
  [SMALL_STATE(336)] = 13330,
  [SMALL_STATE(337)] = 13346,
  [SMALL_STATE(338)] = 13360,
  [SMALL_STATE(339)] = 13373,
  [SMALL_STATE(340)] = 13390,
  [SMALL_STATE(341)] = 13405,
  [SMALL_STATE(342)] = 13418,
  [SMALL_STATE(343)] = 13435,
  [SMALL_STATE(344)] = 13448,
  [SMALL_STATE(345)] = 13461,
  [SMALL_STATE(346)] = 13478,
  [SMALL_STATE(347)] = 13491,
  [SMALL_STATE(348)] = 13508,
  [SMALL_STATE(349)] = 13523,
  [SMALL_STATE(350)] = 13540,
  [SMALL_STATE(351)] = 13555,
  [SMALL_STATE(352)] = 13572,
  [SMALL_STATE(353)] = 13587,
  [SMALL_STATE(354)] = 13600,
  [SMALL_STATE(355)] = 13617,
  [SMALL_STATE(356)] = 13634,
  [SMALL_STATE(357)] = 13649,
  [SMALL_STATE(358)] = 13668,
  [SMALL_STATE(359)] = 13681,
  [SMALL_STATE(360)] = 13693,
  [SMALL_STATE(361)] = 13709,
  [SMALL_STATE(362)] = 13721,
  [SMALL_STATE(363)] = 13733,
  [SMALL_STATE(364)] = 13745,
  [SMALL_STATE(365)] = 13757,
  [SMALL_STATE(366)] = 13769,
  [SMALL_STATE(367)] = 13781,
  [SMALL_STATE(368)] = 13793,
  [SMALL_STATE(369)] = 13805,
  [SMALL_STATE(370)] = 13817,
  [SMALL_STATE(371)] = 13829,
  [SMALL_STATE(372)] = 13845,
  [SMALL_STATE(373)] = 13859,
  [SMALL_STATE(374)] = 13871,
  [SMALL_STATE(375)] = 13883,
  [SMALL_STATE(376)] = 13897,
  [SMALL_STATE(377)] = 13909,
  [SMALL_STATE(378)] = 13921,
  [SMALL_STATE(379)] = 13937,
  [SMALL_STATE(380)] = 13949,
  [SMALL_STATE(381)] = 13961,
  [SMALL_STATE(382)] = 13973,
  [SMALL_STATE(383)] = 13985,
  [SMALL_STATE(384)] = 14001,
  [SMALL_STATE(385)] = 14017,
  [SMALL_STATE(386)] = 14033,
  [SMALL_STATE(387)] = 14045,
  [SMALL_STATE(388)] = 14061,
  [SMALL_STATE(389)] = 14073,
  [SMALL_STATE(390)] = 14087,
  [SMALL_STATE(391)] = 14099,
  [SMALL_STATE(392)] = 14111,
  [SMALL_STATE(393)] = 14121,
  [SMALL_STATE(394)] = 14133,
  [SMALL_STATE(395)] = 14149,
  [SMALL_STATE(396)] = 14161,
  [SMALL_STATE(397)] = 14173,
  [SMALL_STATE(398)] = 14185,
  [SMALL_STATE(399)] = 14201,
  [SMALL_STATE(400)] = 14217,
  [SMALL_STATE(401)] = 14231,
  [SMALL_STATE(402)] = 14247,
  [SMALL_STATE(403)] = 14259,
  [SMALL_STATE(404)] = 14268,
  [SMALL_STATE(405)] = 14281,
  [SMALL_STATE(406)] = 14294,
  [SMALL_STATE(407)] = 14307,
  [SMALL_STATE(408)] = 14320,
  [SMALL_STATE(409)] = 14331,
  [SMALL_STATE(410)] = 14344,
  [SMALL_STATE(411)] = 14357,
  [SMALL_STATE(412)] = 14366,
  [SMALL_STATE(413)] = 14379,
  [SMALL_STATE(414)] = 14392,
  [SMALL_STATE(415)] = 14403,
  [SMALL_STATE(416)] = 14416,
  [SMALL_STATE(417)] = 14427,
  [SMALL_STATE(418)] = 14440,
  [SMALL_STATE(419)] = 14453,
  [SMALL_STATE(420)] = 14466,
  [SMALL_STATE(421)] = 14479,
  [SMALL_STATE(422)] = 14492,
  [SMALL_STATE(423)] = 14505,
  [SMALL_STATE(424)] = 14518,
  [SMALL_STATE(425)] = 14531,
  [SMALL_STATE(426)] = 14544,
  [SMALL_STATE(427)] = 14557,
  [SMALL_STATE(428)] = 14570,
  [SMALL_STATE(429)] = 14583,
  [SMALL_STATE(430)] = 14596,
  [SMALL_STATE(431)] = 14607,
  [SMALL_STATE(432)] = 14620,
  [SMALL_STATE(433)] = 14631,
  [SMALL_STATE(434)] = 14644,
  [SMALL_STATE(435)] = 14655,
  [SMALL_STATE(436)] = 14668,
  [SMALL_STATE(437)] = 14681,
  [SMALL_STATE(438)] = 14694,
  [SMALL_STATE(439)] = 14707,
  [SMALL_STATE(440)] = 14720,
  [SMALL_STATE(441)] = 14733,
  [SMALL_STATE(442)] = 14746,
  [SMALL_STATE(443)] = 14759,
  [SMALL_STATE(444)] = 14772,
  [SMALL_STATE(445)] = 14785,
  [SMALL_STATE(446)] = 14794,
  [SMALL_STATE(447)] = 14807,
  [SMALL_STATE(448)] = 14820,
  [SMALL_STATE(449)] = 14833,
  [SMALL_STATE(450)] = 14846,
  [SMALL_STATE(451)] = 14855,
  [SMALL_STATE(452)] = 14868,
  [SMALL_STATE(453)] = 14881,
  [SMALL_STATE(454)] = 14894,
  [SMALL_STATE(455)] = 14907,
  [SMALL_STATE(456)] = 14920,
  [SMALL_STATE(457)] = 14931,
  [SMALL_STATE(458)] = 14939,
  [SMALL_STATE(459)] = 14947,
  [SMALL_STATE(460)] = 14955,
  [SMALL_STATE(461)] = 14965,
  [SMALL_STATE(462)] = 14975,
  [SMALL_STATE(463)] = 14985,
  [SMALL_STATE(464)] = 14993,
  [SMALL_STATE(465)] = 15001,
  [SMALL_STATE(466)] = 15009,
  [SMALL_STATE(467)] = 15017,
  [SMALL_STATE(468)] = 15025,
  [SMALL_STATE(469)] = 15032,
  [SMALL_STATE(470)] = 15039,
  [SMALL_STATE(471)] = 15046,
  [SMALL_STATE(472)] = 15053,
  [SMALL_STATE(473)] = 15060,
  [SMALL_STATE(474)] = 15067,
  [SMALL_STATE(475)] = 15074,
  [SMALL_STATE(476)] = 15081,
  [SMALL_STATE(477)] = 15088,
  [SMALL_STATE(478)] = 15095,
  [SMALL_STATE(479)] = 15102,
  [SMALL_STATE(480)] = 15109,
  [SMALL_STATE(481)] = 15116,
  [SMALL_STATE(482)] = 15123,
  [SMALL_STATE(483)] = 15130,
  [SMALL_STATE(484)] = 15137,
  [SMALL_STATE(485)] = 15144,
  [SMALL_STATE(486)] = 15151,
  [SMALL_STATE(487)] = 15158,
  [SMALL_STATE(488)] = 15165,
  [SMALL_STATE(489)] = 15172,
  [SMALL_STATE(490)] = 15179,
  [SMALL_STATE(491)] = 15186,
  [SMALL_STATE(492)] = 15193,
  [SMALL_STATE(493)] = 15200,
  [SMALL_STATE(494)] = 15207,
  [SMALL_STATE(495)] = 15214,
  [SMALL_STATE(496)] = 15221,
  [SMALL_STATE(497)] = 15228,
  [SMALL_STATE(498)] = 15235,
  [SMALL_STATE(499)] = 15242,
  [SMALL_STATE(500)] = 15249,
  [SMALL_STATE(501)] = 15256,
  [SMALL_STATE(502)] = 15263,
  [SMALL_STATE(503)] = 15270,
  [SMALL_STATE(504)] = 15277,
  [SMALL_STATE(505)] = 15284,
  [SMALL_STATE(506)] = 15291,
  [SMALL_STATE(507)] = 15298,
  [SMALL_STATE(508)] = 15305,
  [SMALL_STATE(509)] = 15312,
  [SMALL_STATE(510)] = 15319,
  [SMALL_STATE(511)] = 15326,
  [SMALL_STATE(512)] = 15333,
  [SMALL_STATE(513)] = 15340,
  [SMALL_STATE(514)] = 15347,
  [SMALL_STATE(515)] = 15354,
  [SMALL_STATE(516)] = 15361,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quotation, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(484),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__btype, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__btype, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(88),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(181),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(96),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(113),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(94),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(94),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(14),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(88),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(27),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(181),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(98),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(84),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_apply, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_apply, 2),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(88),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(181),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(198),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atype, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atype, 1),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(230),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__atype, 1), SHIFT(223),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(223),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1, .production_id = 8),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constraint, 1, .production_id = 8),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(10),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(205),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(30),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__atype, 1), SHIFT(186),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), SHIFT(232),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(120),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(122),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(124),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(124),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(6),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(109),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(28),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(189),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(123),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(79),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(109),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(189),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(109),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(189),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(127),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(195),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(127),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(195),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__atype, 1), REDUCE(sym_constraint, 1, .production_id = 8),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(158),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(152),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(146),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(146),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(13),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(127),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(31),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(195),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(159),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(83),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(148),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(194),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(167),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(178),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(169),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(169),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(12),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(148),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(29),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(194),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(171),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(81),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(148),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(194),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(188),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(192),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(203),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(206),
  [499] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(209),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(209),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(9),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(188),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(33),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(192),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(207),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(85),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(188),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(192),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__btype, 1), SHIFT(234),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__btype, 1), SHIFT(182),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(250),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(243),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(245),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(245),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(11),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(234),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(32),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(182),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(244),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_type_apply_repeat1, 2), SHIFT_REPEAT(82),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_apply, 2), SHIFT(234),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_apply, 2), SHIFT(182),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(198),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(230),
  [585] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(223),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(223),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(10),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(205),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(30),
  [600] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(186),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constraint_repeat1, 2), SHIFT_REPEAT(232),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 2, .production_id = 8),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__modid, 1, .production_id = 2),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tycon, 2, .production_id = 4),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tycon, 2, .production_id = 4),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor, 1),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor, 1),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type, 2, .production_id = 4),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type, 2, .production_id = 4),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_name, 1), SHIFT(38),
  [689] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_type_name, 1), SHIFT(38),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 4),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_list, 4),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_variable, 1),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_variable, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_list, 3),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_list, 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_star, 1),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_star, 1),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con_tuple, 3),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con_tuple, 3),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_parens, 3),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_parens, 3),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_tuple, 3),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_tuple, 3),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tycon, 2),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tycon, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tycon_arrow, 3),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tycon_arrow, 3),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 3),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 3),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con_unit, 2),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con_unit, 2),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 2),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__context_constraints, 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tycon, 4),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tycon, 4),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_invisible, 2),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_invisible, 2),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_promoted_literal, 2),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_promoted_literal, 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con_list, 2),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con_list, 2),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_literal, 1),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_literal, 1),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_infix, 1),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_infix, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [802] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [806] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [810] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_body, 1),
  [818] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(275),
  [821] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(76),
  [824] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(345),
  [827] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(408),
  [830] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(279),
  [833] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(327),
  [836] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_entity_body_repeat1, 2), SHIFT_REPEAT(205),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_body_repeat1, 2),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modid, 1, .production_id = 2),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasi_quotation, 1),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(397),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(278),
  [855] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(265),
  [858] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(343),
  [861] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quasi_quotation_repeat1, 2), SHIFT_REPEAT(332),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__context, 2),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context, 2),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fun_arrow, 2),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fun_arrow, 2),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_operator, 1),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor_operator, 1),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_type_operator, 2),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_type_operator, 2),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_constructor_operator, 2),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_constructor_operator, 2),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__promoted_tyconop, 2),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__promoted_tyconop, 2),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ticked_qtycon, 3),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ticked_qtycon, 3),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ticked_qtycon, 3, .production_id = 4),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ticked_qtycon, 3, .production_id = 4),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_infix, 3, .production_id = 19),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [920] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2), SHIFT_REPEAT(198),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2),
  [925] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2), SHIFT_REPEAT(428),
  [928] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__forall_repeat1, 2), SHIFT_REPEAT(429),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__forall, 2),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3, .production_id = 15),
  [945] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(337),
  [948] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(381),
  [951] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_field_definition_repeat1, 2), SHIFT_REPEAT(381),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 2),
  [956] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2), SHIFT_REPEAT(337),
  [959] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2), SHIFT_REPEAT(290),
  [962] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__entity_header_repeat1, 2), SHIFT_REPEAT(290),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__entity_header_repeat1, 2),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [969] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 3, .production_id = 17),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 2, .production_id = 14),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [985] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_infix, 1), REDUCE(sym_constraint, 1),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_definition, 4, .production_id = 21),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [996] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_of_attributes_start_with_no_other_repeat1, 2), SHIFT_REPEAT(337),
  [999] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_of_attributes_start_with_no_other_repeat1, 2), SHIFT_REPEAT(402),
  [1002] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_of_attributes_start_with_no_other_repeat1, 2), SHIFT_REPEAT(402),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_of_attributes_start_with_no_other_repeat1, 2),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 5),
  [1013] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__entity_line_definition, 2),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_line_definition, 2),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1019] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_of_attributes_start_with_no_other, 2, .production_id = 20),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_of_fields, 1, .production_id = 10),
  [1027] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__list_of_fields, 1, .production_id = 10),
  [1029] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__list_of_fields_repeat1, 2), SHIFT_REPEAT(358),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_of_fields_repeat1, 2),
  [1034] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_of_fields_repeat1, 2),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_with_kind, 1),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 4),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_of_attributes_start_with_no_other, 1),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 2, .production_id = 5),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 7, .production_id = 23),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_surrogate_key, 2, .production_id = 9),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_key, 2),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 4, .production_id = 6),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 1, .production_id = 1),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_deriving, 2, .production_id = 13),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 3, .production_id = 5),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entity_header, 3, .production_id = 6),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 2),
  [1072] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_entity_deriving_repeat1, 2, .production_id = 16), SHIFT_REPEAT(450),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_deriving_repeat1, 2, .production_id = 16),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 6, .production_id = 22),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_context, 2),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_quantifiers, 3),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_annotation, 2, .production_id = 9),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_fun, 3),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_implicit_param, 2, .production_id = 7),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__qualifying_module, 2),
  [1093] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__qualifying_module, 2),
  [1095] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__qualifying_module, 2), SHIFT_REPEAT(205),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantifier, 3),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entity_definition, 4, .production_id = 1),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inferred_type_variable, 3),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_or_implicit, 1), SHIFT(47),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_or_implicit, 1),
  [1117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_or_implicit, 1), SHIFT(459),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_of_fields_repeat1, 1),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_of_fields_repeat1, 1),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_key_value, 2),
  [1136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_key_value, 2),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attribute_no_other, 1),
  [1140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attribute_no_other, 1),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_definition_repeat1, 1),
  [1146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_definition_repeat1, 1),
  [1148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2), SHIFT_REPEAT(35),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_list_repeat1, 2),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint, 1),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 1),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint, 3),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 3),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_of_attributes_start_with_no_other_repeat1, 1),
  [1163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__list_of_attributes_start_with_no_other_repeat1, 1),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kind, 1, .production_id = 18),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_con_tuple_repeat1, 2), SHIFT_REPEAT(405),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_con_tuple_repeat1, 2),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_tuple, 2),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__context_constraints_repeat1, 2), SHIFT_REPEAT(47),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__context_constraints_repeat1, 2),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [1199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_deriving_repeat1, 1, .production_id = 11),
  [1203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_foreign_constraint_repeat1, 2), SHIFT_REPEAT(417),
  [1206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_foreign_constraint_repeat1, 2),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [1250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_with_kind, 2),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2),
  [1280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constraint_context, 2),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotated_type_variable, 2, .production_id = 7),
  [1288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context_constraints, 4),
  [1290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quantified_constraint, 3),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_entity_deriving_repeat1, 1, .production_id = 12),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unique_constraint, 3),
  [1338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_natural_key, 3),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_surrogate_key, 3, .production_id = 9),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 8, .production_id = 23),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 7, .production_id = 22),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_constraint, 6),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1374] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
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
