#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 909
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 142
#define ALIAS_COUNT 1
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 35

enum {
  sym_identifier = 1,
  sym_line_comment = 2,
  anon_sym_module = 3,
  anon_sym_end = 4,
  anon_sym_endModule = 5,
  anon_sym_endClass = 6,
  anon_sym_class = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_uses = 10,
  anon_sym_COMMA = 11,
  anon_sym_const = 12,
  anon_sym_EQ = 13,
  anon_sym_multiLang = 14,
  anon_sym_COLON = 15,
  anon_sym_memory = 16,
  anon_sym_refTo = 17,
  anon_sym_listOf = 18,
  anon_sym_LBRACK = 19,
  aux_sym_reference_modifiers_token1 = 20,
  anon_sym_RBRACK = 21,
  anon_sym_func = 22,
  anon_sym_function = 23,
  anon_sym_proc = 24,
  anon_sym_procedure = 25,
  anon_sym_type = 26,
  anon_sym_forward = 27,
  anon_sym_endFunc = 28,
  anon_sym_endProc = 29,
  anon_sym_external = 30,
  anon_sym_SQUOTE = 31,
  anon_sym_DOT = 32,
  anon_sym_inOut = 33,
  anon_sym_var = 34,
  anon_sym_return = 35,
  anon_sym_inverse = 36,
  anon_sym_absolute = 37,
  anon_sym_final = 38,
  anon_sym_override = 39,
  anon_sym_private = 40,
  anon_sym_protected = 41,
  anon_sym_PLUS = 42,
  anon_sym_record = 43,
  anon_sym_nativeRecord = 44,
  anon_sym_endRecord = 45,
  anon_sym_endNativeRecord = 46,
  anon_sym_model = 47,
  anon_sym_RBRACK2 = 48,
  aux_sym__string_literal_token1 = 49,
  anon_sym_SQUOTE2 = 50,
  anon_sym_LBRACE = 51,
  anon_sym_RBRACE = 52,
  sym__integer_literal = 53,
  anon_sym_true = 54,
  anon_sym_True = 55,
  anon_sym_false = 56,
  anon_sym_False = 57,
  sym_source_file = 58,
  sym__type_identifier = 59,
  sym_module = 60,
  sym_class = 61,
  sym_class_item = 62,
  sym__class = 63,
  sym__module_item_declaration = 64,
  sym__class_item_declaration = 65,
  sym__item_declaration = 66,
  sym_uses_item = 67,
  sym_const_item = 68,
  sym_const_modifiers = 69,
  sym__type_item = 70,
  sym__type = 71,
  sym__variable_item = 72,
  sym_variable_item = 73,
  sym__variable_type = 74,
  sym_variable_modifiers = 75,
  sym_memory_modifiers = 76,
  sym_reference = 77,
  sym_reference_modifiers = 78,
  sym__function_type = 79,
  sym_function_type = 80,
  sym_function_type_item = 81,
  sym_function_item = 82,
  sym_function_modifiers = 83,
  sym_forward_modifiers = 84,
  sym__function_definition = 85,
  sym_function_modifiers_external = 86,
  sym_function_parameters = 87,
  sym_function_parameter_declaration = 88,
  sym_function_parameter_modifiers = 89,
  sym_function_return_type = 90,
  sym_function_body_statements = 91,
  sym_variable_declaration = 92,
  sym_statement = 93,
  sym_declaration_statement = 94,
  sym_inverse_modifiers = 95,
  sym_absolute_modifiers = 96,
  sym__override_modifiers = 97,
  sym_visibility_modifiers = 98,
  sym__enum_type = 99,
  sym_enum_type = 100,
  sym_enum_item = 101,
  sym_enum_derived = 102,
  sym_enum_modifiers = 103,
  sym_enum_variant_list = 104,
  sym_enum_variant = 105,
  sym_enum_variant_redefine_value = 106,
  sym__set_type = 107,
  sym_set_type = 108,
  sym_set_item = 109,
  sym__pointer_type = 110,
  sym_pointer_type = 111,
  sym_pointer_type_item = 112,
  sym__record_type = 113,
  sym_record_type = 114,
  sym_record_item = 115,
  sym_record_derived = 116,
  sym_record_variable_list = 117,
  sym_record_variable = 118,
  sym_annotation = 119,
  sym_annotation_attribute_list = 120,
  sym_annotation_attribute = 121,
  sym__inner_annotation = 122,
  sym__literal = 123,
  sym__string_literal = 124,
  sym_string_literal = 125,
  sym_text_literal = 126,
  sym_integer_literal = 127,
  sym_boolean_literal = 128,
  aux_sym_module_repeat1 = 129,
  aux_sym__class_repeat1 = 130,
  aux_sym_uses_item_repeat1 = 131,
  aux_sym_variable_modifiers_repeat1 = 132,
  aux_sym_reference_modifiers_repeat1 = 133,
  aux_sym_function_modifiers_repeat1 = 134,
  aux_sym_function_parameters_repeat1 = 135,
  aux_sym_function_body_statements_repeat1 = 136,
  aux_sym_enum_variant_list_repeat1 = 137,
  aux_sym_record_variable_list_repeat1 = 138,
  aux_sym_annotation_attribute_list_repeat1 = 139,
  aux_sym__string_literal_repeat1 = 140,
  aux_sym_text_literal_repeat1 = 141,
  alias_sym_type_identifier = 142,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_line_comment] = "line_comment",
  [anon_sym_module] = "module",
  [anon_sym_end] = "end",
  [anon_sym_endModule] = "endModule",
  [anon_sym_endClass] = "endClass",
  [anon_sym_class] = "class",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_uses] = "uses",
  [anon_sym_COMMA] = ",",
  [anon_sym_const] = "const",
  [anon_sym_EQ] = "=",
  [anon_sym_multiLang] = "multiLang",
  [anon_sym_COLON] = ":",
  [anon_sym_memory] = "memory",
  [anon_sym_refTo] = "refTo",
  [anon_sym_listOf] = "listOf",
  [anon_sym_LBRACK] = "[",
  [aux_sym_reference_modifiers_token1] = "reference_modifiers_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_func] = "func",
  [anon_sym_function] = "function",
  [anon_sym_proc] = "proc",
  [anon_sym_procedure] = "procedure",
  [anon_sym_type] = "type",
  [anon_sym_forward] = "forward",
  [anon_sym_endFunc] = "endFunc",
  [anon_sym_endProc] = "endProc",
  [anon_sym_external] = "external",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DOT] = ".",
  [anon_sym_inOut] = "inOut",
  [anon_sym_var] = "var",
  [anon_sym_return] = "return",
  [anon_sym_inverse] = "inverse",
  [anon_sym_absolute] = "absolute",
  [anon_sym_final] = "final",
  [anon_sym_override] = "override",
  [anon_sym_private] = "private",
  [anon_sym_protected] = "protected",
  [anon_sym_PLUS] = "+",
  [anon_sym_record] = "record",
  [anon_sym_nativeRecord] = "nativeRecord",
  [anon_sym_endRecord] = "endRecord",
  [anon_sym_endNativeRecord] = "endNativeRecord",
  [anon_sym_model] = "model",
  [anon_sym_RBRACK2] = "]",
  [aux_sym__string_literal_token1] = "_string_literal_token1",
  [anon_sym_SQUOTE2] = "'",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__integer_literal] = "_integer_literal",
  [anon_sym_true] = "true",
  [anon_sym_True] = "True",
  [anon_sym_false] = "false",
  [anon_sym_False] = "False",
  [sym_source_file] = "source_file",
  [sym__type_identifier] = "_type_identifier",
  [sym_module] = "module",
  [sym_class] = "class",
  [sym_class_item] = "class_item",
  [sym__class] = "_class",
  [sym__module_item_declaration] = "_module_item_declaration",
  [sym__class_item_declaration] = "_class_item_declaration",
  [sym__item_declaration] = "_item_declaration",
  [sym_uses_item] = "uses_item",
  [sym_const_item] = "const_item",
  [sym_const_modifiers] = "const_modifiers",
  [sym__type_item] = "_type_item",
  [sym__type] = "_type",
  [sym__variable_item] = "_variable_item",
  [sym_variable_item] = "variable_item",
  [sym__variable_type] = "_variable_type",
  [sym_variable_modifiers] = "variable_modifiers",
  [sym_memory_modifiers] = "memory_modifiers",
  [sym_reference] = "reference",
  [sym_reference_modifiers] = "reference_modifiers",
  [sym__function_type] = "_function_type",
  [sym_function_type] = "function_type",
  [sym_function_type_item] = "function_type_item",
  [sym_function_item] = "function_item",
  [sym_function_modifiers] = "function_modifiers",
  [sym_forward_modifiers] = "forward_modifiers",
  [sym__function_definition] = "_function_definition",
  [sym_function_modifiers_external] = "function_modifiers_external",
  [sym_function_parameters] = "function_parameters",
  [sym_function_parameter_declaration] = "function_parameter_declaration",
  [sym_function_parameter_modifiers] = "function_parameter_modifiers",
  [sym_function_return_type] = "function_return_type",
  [sym_function_body_statements] = "function_body_statements",
  [sym_variable_declaration] = "variable_declaration",
  [sym_statement] = "statement",
  [sym_declaration_statement] = "declaration_statement",
  [sym_inverse_modifiers] = "inverse_modifiers",
  [sym_absolute_modifiers] = "absolute_modifiers",
  [sym__override_modifiers] = "_override_modifiers",
  [sym_visibility_modifiers] = "visibility_modifiers",
  [sym__enum_type] = "_enum_type",
  [sym_enum_type] = "enum_type",
  [sym_enum_item] = "enum_item",
  [sym_enum_derived] = "enum_derived",
  [sym_enum_modifiers] = "enum_modifiers",
  [sym_enum_variant_list] = "enum_variant_list",
  [sym_enum_variant] = "enum_variant",
  [sym_enum_variant_redefine_value] = "enum_variant_redefine_value",
  [sym__set_type] = "_set_type",
  [sym_set_type] = "set_type",
  [sym_set_item] = "set_item",
  [sym__pointer_type] = "_pointer_type",
  [sym_pointer_type] = "pointer_type",
  [sym_pointer_type_item] = "pointer_type_item",
  [sym__record_type] = "_record_type",
  [sym_record_type] = "record_type",
  [sym_record_item] = "record_item",
  [sym_record_derived] = "record_derived",
  [sym_record_variable_list] = "record_variable_list",
  [sym_record_variable] = "record_variable",
  [sym_annotation] = "annotation",
  [sym_annotation_attribute_list] = "annotation_attribute_list",
  [sym_annotation_attribute] = "annotation_attribute",
  [sym__inner_annotation] = "_inner_annotation",
  [sym__literal] = "_literal",
  [sym__string_literal] = "_string_literal",
  [sym_string_literal] = "string_literal",
  [sym_text_literal] = "text_literal",
  [sym_integer_literal] = "integer_literal",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym__class_repeat1] = "_class_repeat1",
  [aux_sym_uses_item_repeat1] = "uses_item_repeat1",
  [aux_sym_variable_modifiers_repeat1] = "variable_modifiers_repeat1",
  [aux_sym_reference_modifiers_repeat1] = "reference_modifiers_repeat1",
  [aux_sym_function_modifiers_repeat1] = "function_modifiers_repeat1",
  [aux_sym_function_parameters_repeat1] = "function_parameters_repeat1",
  [aux_sym_function_body_statements_repeat1] = "function_body_statements_repeat1",
  [aux_sym_enum_variant_list_repeat1] = "enum_variant_list_repeat1",
  [aux_sym_record_variable_list_repeat1] = "record_variable_list_repeat1",
  [aux_sym_annotation_attribute_list_repeat1] = "annotation_attribute_list_repeat1",
  [aux_sym__string_literal_repeat1] = "_string_literal_repeat1",
  [aux_sym_text_literal_repeat1] = "text_literal_repeat1",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_line_comment] = sym_line_comment,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_endModule] = anon_sym_endModule,
  [anon_sym_endClass] = anon_sym_endClass,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_uses] = anon_sym_uses,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_multiLang] = anon_sym_multiLang,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_memory] = anon_sym_memory,
  [anon_sym_refTo] = anon_sym_refTo,
  [anon_sym_listOf] = anon_sym_listOf,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_reference_modifiers_token1] = aux_sym_reference_modifiers_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_proc] = anon_sym_proc,
  [anon_sym_procedure] = anon_sym_procedure,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_forward] = anon_sym_forward,
  [anon_sym_endFunc] = anon_sym_endFunc,
  [anon_sym_endProc] = anon_sym_endProc,
  [anon_sym_external] = anon_sym_external,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_inOut] = anon_sym_inOut,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_inverse] = anon_sym_inverse,
  [anon_sym_absolute] = anon_sym_absolute,
  [anon_sym_final] = anon_sym_final,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_nativeRecord] = anon_sym_nativeRecord,
  [anon_sym_endRecord] = anon_sym_endRecord,
  [anon_sym_endNativeRecord] = anon_sym_endNativeRecord,
  [anon_sym_model] = anon_sym_model,
  [anon_sym_RBRACK2] = anon_sym_RBRACK,
  [aux_sym__string_literal_token1] = aux_sym__string_literal_token1,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__integer_literal] = sym__integer_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_False] = anon_sym_False,
  [sym_source_file] = sym_source_file,
  [sym__type_identifier] = sym__type_identifier,
  [sym_module] = sym_module,
  [sym_class] = sym_class,
  [sym_class_item] = sym_class_item,
  [sym__class] = sym__class,
  [sym__module_item_declaration] = sym__module_item_declaration,
  [sym__class_item_declaration] = sym__class_item_declaration,
  [sym__item_declaration] = sym__item_declaration,
  [sym_uses_item] = sym_uses_item,
  [sym_const_item] = sym_const_item,
  [sym_const_modifiers] = sym_const_modifiers,
  [sym__type_item] = sym__type_item,
  [sym__type] = sym__type,
  [sym__variable_item] = sym__variable_item,
  [sym_variable_item] = sym_variable_item,
  [sym__variable_type] = sym__variable_type,
  [sym_variable_modifiers] = sym_variable_modifiers,
  [sym_memory_modifiers] = sym_memory_modifiers,
  [sym_reference] = sym_reference,
  [sym_reference_modifiers] = sym_reference_modifiers,
  [sym__function_type] = sym__function_type,
  [sym_function_type] = sym_function_type,
  [sym_function_type_item] = sym_function_type_item,
  [sym_function_item] = sym_function_item,
  [sym_function_modifiers] = sym_function_modifiers,
  [sym_forward_modifiers] = sym_forward_modifiers,
  [sym__function_definition] = sym__function_definition,
  [sym_function_modifiers_external] = sym_function_modifiers_external,
  [sym_function_parameters] = sym_function_parameters,
  [sym_function_parameter_declaration] = sym_function_parameter_declaration,
  [sym_function_parameter_modifiers] = sym_function_parameter_modifiers,
  [sym_function_return_type] = sym_function_return_type,
  [sym_function_body_statements] = sym_function_body_statements,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_statement] = sym_statement,
  [sym_declaration_statement] = sym_declaration_statement,
  [sym_inverse_modifiers] = sym_inverse_modifiers,
  [sym_absolute_modifiers] = sym_absolute_modifiers,
  [sym__override_modifiers] = sym__override_modifiers,
  [sym_visibility_modifiers] = sym_visibility_modifiers,
  [sym__enum_type] = sym__enum_type,
  [sym_enum_type] = sym_enum_type,
  [sym_enum_item] = sym_enum_item,
  [sym_enum_derived] = sym_enum_derived,
  [sym_enum_modifiers] = sym_enum_modifiers,
  [sym_enum_variant_list] = sym_enum_variant_list,
  [sym_enum_variant] = sym_enum_variant,
  [sym_enum_variant_redefine_value] = sym_enum_variant_redefine_value,
  [sym__set_type] = sym__set_type,
  [sym_set_type] = sym_set_type,
  [sym_set_item] = sym_set_item,
  [sym__pointer_type] = sym__pointer_type,
  [sym_pointer_type] = sym_pointer_type,
  [sym_pointer_type_item] = sym_pointer_type_item,
  [sym__record_type] = sym__record_type,
  [sym_record_type] = sym_record_type,
  [sym_record_item] = sym_record_item,
  [sym_record_derived] = sym_record_derived,
  [sym_record_variable_list] = sym_record_variable_list,
  [sym_record_variable] = sym_record_variable,
  [sym_annotation] = sym_annotation,
  [sym_annotation_attribute_list] = sym_annotation_attribute_list,
  [sym_annotation_attribute] = sym_annotation_attribute,
  [sym__inner_annotation] = sym__inner_annotation,
  [sym__literal] = sym__literal,
  [sym__string_literal] = sym__string_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_text_literal] = sym_text_literal,
  [sym_integer_literal] = sym_integer_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
  [aux_sym__class_repeat1] = aux_sym__class_repeat1,
  [aux_sym_uses_item_repeat1] = aux_sym_uses_item_repeat1,
  [aux_sym_variable_modifiers_repeat1] = aux_sym_variable_modifiers_repeat1,
  [aux_sym_reference_modifiers_repeat1] = aux_sym_reference_modifiers_repeat1,
  [aux_sym_function_modifiers_repeat1] = aux_sym_function_modifiers_repeat1,
  [aux_sym_function_parameters_repeat1] = aux_sym_function_parameters_repeat1,
  [aux_sym_function_body_statements_repeat1] = aux_sym_function_body_statements_repeat1,
  [aux_sym_enum_variant_list_repeat1] = aux_sym_enum_variant_list_repeat1,
  [aux_sym_record_variable_list_repeat1] = aux_sym_record_variable_list_repeat1,
  [aux_sym_annotation_attribute_list_repeat1] = aux_sym_annotation_attribute_list_repeat1,
  [aux_sym__string_literal_repeat1] = aux_sym__string_literal_repeat1,
  [aux_sym_text_literal_repeat1] = aux_sym_text_literal_repeat1,
  [alias_sym_type_identifier] = alias_sym_type_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endModule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endClass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
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
  [anon_sym_uses] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multiLang] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_memory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_refTo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_listOf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_reference_modifiers_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_proc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_procedure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forward] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endFunc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endProc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_external] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inOut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inverse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_absolute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_final] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nativeRecord] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endRecord] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endNativeRecord] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_model] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
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
  [sym__integer_literal] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__type_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym_class_item] = {
    .visible = true,
    .named = true,
  },
  [sym__class] = {
    .visible = false,
    .named = true,
  },
  [sym__module_item_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__class_item_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__item_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_uses_item] = {
    .visible = true,
    .named = true,
  },
  [sym_const_item] = {
    .visible = true,
    .named = true,
  },
  [sym_const_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym__type_item] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym__variable_item] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_item] = {
    .visible = true,
    .named = true,
  },
  [sym__variable_type] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_memory_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym__function_type] = {
    .visible = false,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type_item] = {
    .visible = true,
    .named = true,
  },
  [sym_function_item] = {
    .visible = true,
    .named = true,
  },
  [sym_function_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_forward_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym__function_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_modifiers_external] = {
    .visible = true,
    .named = true,
  },
  [sym_function_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_function_parameter_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_parameter_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_function_return_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_body_statements] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_inverse_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_absolute_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym__override_modifiers] = {
    .visible = false,
    .named = true,
  },
  [sym_visibility_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym__enum_type] = {
    .visible = false,
    .named = true,
  },
  [sym_enum_type] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_item] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_derived] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_variant_list] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_variant_redefine_value] = {
    .visible = true,
    .named = true,
  },
  [sym__set_type] = {
    .visible = false,
    .named = true,
  },
  [sym_set_type] = {
    .visible = true,
    .named = true,
  },
  [sym_set_item] = {
    .visible = true,
    .named = true,
  },
  [sym__pointer_type] = {
    .visible = false,
    .named = true,
  },
  [sym_pointer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer_type_item] = {
    .visible = true,
    .named = true,
  },
  [sym__record_type] = {
    .visible = false,
    .named = true,
  },
  [sym_record_type] = {
    .visible = true,
    .named = true,
  },
  [sym_record_item] = {
    .visible = true,
    .named = true,
  },
  [sym_record_derived] = {
    .visible = true,
    .named = true,
  },
  [sym_record_variable_list] = {
    .visible = true,
    .named = true,
  },
  [sym_record_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_attribute_list] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__inner_annotation] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_text_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_module_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__class_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_uses_item_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_modifiers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_reference_modifiers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_modifiers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_body_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_variant_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_variable_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_annotation_attribute_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_backref = 1,
  field_body = 2,
  field_derived = 3,
  field_dll_function_name = 4,
  field_dll_name = 5,
  field_enum_type = 6,
  field_name = 7,
  field_parameters = 8,
  field_type = 9,
  field_variable = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_backref] = "backref",
  [field_body] = "body",
  [field_derived] = "derived",
  [field_dll_function_name] = "dll_function_name",
  [field_dll_name] = "dll_name",
  [field_enum_type] = "enum_type",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_type] = "type",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 1},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 1},
  [12] = {.index = 14, .length = 4},
  [13] = {.index = 18, .length = 1},
  [14] = {.index = 19, .length = 1},
  [15] = {.index = 20, .length = 1},
  [16] = {.index = 21, .length = 1},
  [17] = {.index = 22, .length = 2},
  [18] = {.index = 24, .length = 2},
  [19] = {.index = 26, .length = 2},
  [20] = {.index = 28, .length = 3},
  [21] = {.index = 31, .length = 2},
  [22] = {.index = 33, .length = 2},
  [23] = {.index = 35, .length = 2},
  [24] = {.index = 37, .length = 4},
  [25] = {.index = 41, .length = 1},
  [26] = {.index = 42, .length = 1},
  [27] = {.index = 43, .length = 1},
  [28] = {.index = 44, .length = 2},
  [29] = {.index = 46, .length = 2},
  [30] = {.index = 48, .length = 3},
  [31] = {.index = 51, .length = 2},
  [32] = {.index = 53, .length = 2},
  [33] = {.index = 55, .length = 2},
  [34] = {.index = 57, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_derived, 0, .inherited = true},
    {field_name, 0, .inherited = true},
  [2] =
    {field_name, 1},
  [3] =
    {field_name, 0, .inherited = true},
    {field_type, 0, .inherited = true},
  [5] =
    {field_name, 2},
  [6] =
    {field_name, 0},
    {field_type, 2},
  [8] =
    {field_parameters, 0, .inherited = true},
  [9] =
    {field_body, 0, .inherited = true},
    {field_derived, 0, .inherited = true},
  [11] =
    {field_body, 0},
  [12] =
    {field_enum_type, 0, .inherited = true},
  [13] =
    {field_type, 0, .inherited = true},
  [14] =
    {field_derived, 2},
    {field_derived, 3},
    {field_derived, 4},
    {field_name, 1},
  [18] =
    {field_name, 0},
  [19] =
    {field_parameters, 1},
  [20] =
    {field_type, 1},
  [21] =
    {field_type, 0},
  [22] =
    {field_body, 1},
    {field_derived, 0},
  [24] =
    {field_name, 1},
    {field_parameters, 2},
  [26] =
    {field_name, 1},
    {field_parameters, 3, .inherited = true},
  [28] =
    {field_body, 3, .inherited = true},
    {field_derived, 3, .inherited = true},
    {field_name, 1},
  [31] =
    {field_enum_type, 3, .inherited = true},
    {field_name, 1},
  [33] =
    {field_name, 1},
    {field_type, 3, .inherited = true},
  [35] =
    {field_name, 1},
    {field_type, 3},
  [37] =
    {field_derived, 3},
    {field_derived, 4},
    {field_derived, 5},
    {field_name, 2},
  [41] =
    {field_enum_type, 1},
  [42] =
    {field_backref, 1},
  [43] =
    {field_variable, 1},
  [44] =
    {field_name, 2},
    {field_parameters, 3},
  [46] =
    {field_name, 2},
    {field_parameters, 4, .inherited = true},
  [48] =
    {field_body, 4, .inherited = true},
    {field_derived, 4, .inherited = true},
    {field_name, 2},
  [51] =
    {field_enum_type, 4, .inherited = true},
    {field_name, 2},
  [53] =
    {field_name, 2},
    {field_type, 4, .inherited = true},
  [55] =
    {field_name, 2},
    {field_type, 4},
  [57] =
    {field_dll_function_name, 4},
    {field_dll_name, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [0] = alias_sym_type_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 2,
  [5] = 5,
  [6] = 5,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 9,
  [12] = 8,
  [13] = 8,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 17,
  [20] = 15,
  [21] = 15,
  [22] = 16,
  [23] = 14,
  [24] = 14,
  [25] = 16,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 32,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 31,
  [42] = 37,
  [43] = 35,
  [44] = 44,
  [45] = 45,
  [46] = 38,
  [47] = 47,
  [48] = 45,
  [49] = 47,
  [50] = 44,
  [51] = 34,
  [52] = 40,
  [53] = 44,
  [54] = 39,
  [55] = 47,
  [56] = 36,
  [57] = 45,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 58,
  [67] = 67,
  [68] = 60,
  [69] = 59,
  [70] = 64,
  [71] = 62,
  [72] = 62,
  [73] = 67,
  [74] = 74,
  [75] = 67,
  [76] = 64,
  [77] = 61,
  [78] = 65,
  [79] = 63,
  [80] = 80,
  [81] = 63,
  [82] = 74,
  [83] = 61,
  [84] = 84,
  [85] = 65,
  [86] = 86,
  [87] = 80,
  [88] = 74,
  [89] = 80,
  [90] = 58,
  [91] = 86,
  [92] = 84,
  [93] = 59,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 60,
  [99] = 94,
  [100] = 84,
  [101] = 86,
  [102] = 94,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 103,
  [110] = 104,
  [111] = 105,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 107,
  [117] = 117,
  [118] = 118,
  [119] = 97,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 103,
  [124] = 124,
  [125] = 112,
  [126] = 126,
  [127] = 108,
  [128] = 128,
  [129] = 105,
  [130] = 130,
  [131] = 131,
  [132] = 104,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 114,
  [140] = 140,
  [141] = 113,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 115,
  [146] = 106,
  [147] = 147,
  [148] = 143,
  [149] = 122,
  [150] = 150,
  [151] = 115,
  [152] = 114,
  [153] = 113,
  [154] = 107,
  [155] = 108,
  [156] = 106,
  [157] = 128,
  [158] = 118,
  [159] = 130,
  [160] = 131,
  [161] = 133,
  [162] = 134,
  [163] = 135,
  [164] = 138,
  [165] = 117,
  [166] = 140,
  [167] = 147,
  [168] = 144,
  [169] = 142,
  [170] = 170,
  [171] = 126,
  [172] = 137,
  [173] = 136,
  [174] = 120,
  [175] = 121,
  [176] = 97,
  [177] = 112,
  [178] = 124,
  [179] = 136,
  [180] = 133,
  [181] = 130,
  [182] = 94,
  [183] = 183,
  [184] = 140,
  [185] = 118,
  [186] = 128,
  [187] = 131,
  [188] = 126,
  [189] = 134,
  [190] = 135,
  [191] = 137,
  [192] = 147,
  [193] = 124,
  [194] = 120,
  [195] = 122,
  [196] = 117,
  [197] = 138,
  [198] = 121,
  [199] = 199,
  [200] = 144,
  [201] = 143,
  [202] = 142,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 94,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 86,
  [215] = 215,
  [216] = 103,
  [217] = 84,
  [218] = 218,
  [219] = 94,
  [220] = 104,
  [221] = 221,
  [222] = 105,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 218,
  [228] = 104,
  [229] = 215,
  [230] = 106,
  [231] = 113,
  [232] = 94,
  [233] = 105,
  [234] = 224,
  [235] = 221,
  [236] = 236,
  [237] = 226,
  [238] = 103,
  [239] = 107,
  [240] = 114,
  [241] = 115,
  [242] = 108,
  [243] = 243,
  [244] = 244,
  [245] = 204,
  [246] = 183,
  [247] = 210,
  [248] = 248,
  [249] = 211,
  [250] = 224,
  [251] = 199,
  [252] = 226,
  [253] = 121,
  [254] = 103,
  [255] = 114,
  [256] = 105,
  [257] = 104,
  [258] = 122,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 124,
  [269] = 115,
  [270] = 114,
  [271] = 113,
  [272] = 136,
  [273] = 273,
  [274] = 274,
  [275] = 97,
  [276] = 107,
  [277] = 277,
  [278] = 108,
  [279] = 279,
  [280] = 115,
  [281] = 281,
  [282] = 137,
  [283] = 213,
  [284] = 284,
  [285] = 106,
  [286] = 140,
  [287] = 212,
  [288] = 218,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 207,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 206,
  [301] = 301,
  [302] = 236,
  [303] = 303,
  [304] = 215,
  [305] = 305,
  [306] = 306,
  [307] = 135,
  [308] = 134,
  [309] = 113,
  [310] = 133,
  [311] = 311,
  [312] = 128,
  [313] = 221,
  [314] = 314,
  [315] = 118,
  [316] = 305,
  [317] = 183,
  [318] = 199,
  [319] = 306,
  [320] = 204,
  [321] = 321,
  [322] = 210,
  [323] = 323,
  [324] = 211,
  [325] = 325,
  [326] = 126,
  [327] = 327,
  [328] = 248,
  [329] = 213,
  [330] = 212,
  [331] = 121,
  [332] = 207,
  [333] = 122,
  [334] = 206,
  [335] = 124,
  [336] = 274,
  [337] = 136,
  [338] = 137,
  [339] = 135,
  [340] = 236,
  [341] = 259,
  [342] = 321,
  [343] = 260,
  [344] = 134,
  [345] = 133,
  [346] = 261,
  [347] = 265,
  [348] = 244,
  [349] = 273,
  [350] = 277,
  [351] = 279,
  [352] = 325,
  [353] = 325,
  [354] = 128,
  [355] = 281,
  [356] = 118,
  [357] = 140,
  [358] = 264,
  [359] = 321,
  [360] = 97,
  [361] = 327,
  [362] = 104,
  [363] = 105,
  [364] = 103,
  [365] = 140,
  [366] = 323,
  [367] = 106,
  [368] = 327,
  [369] = 108,
  [370] = 97,
  [371] = 107,
  [372] = 314,
  [373] = 311,
  [374] = 113,
  [375] = 303,
  [376] = 290,
  [377] = 301,
  [378] = 299,
  [379] = 114,
  [380] = 298,
  [381] = 115,
  [382] = 296,
  [383] = 284,
  [384] = 323,
  [385] = 243,
  [386] = 295,
  [387] = 294,
  [388] = 293,
  [389] = 291,
  [390] = 267,
  [391] = 266,
  [392] = 327,
  [393] = 321,
  [394] = 262,
  [395] = 263,
  [396] = 273,
  [397] = 243,
  [398] = 140,
  [399] = 97,
  [400] = 115,
  [401] = 114,
  [402] = 118,
  [403] = 113,
  [404] = 128,
  [405] = 133,
  [406] = 134,
  [407] = 135,
  [408] = 137,
  [409] = 274,
  [410] = 136,
  [411] = 124,
  [412] = 122,
  [413] = 121,
  [414] = 97,
  [415] = 107,
  [416] = 108,
  [417] = 106,
  [418] = 112,
  [419] = 295,
  [420] = 294,
  [421] = 293,
  [422] = 259,
  [423] = 291,
  [424] = 260,
  [425] = 306,
  [426] = 263,
  [427] = 314,
  [428] = 305,
  [429] = 261,
  [430] = 265,
  [431] = 244,
  [432] = 311,
  [433] = 277,
  [434] = 279,
  [435] = 264,
  [436] = 303,
  [437] = 284,
  [438] = 281,
  [439] = 248,
  [440] = 301,
  [441] = 299,
  [442] = 266,
  [443] = 298,
  [444] = 267,
  [445] = 296,
  [446] = 290,
  [447] = 262,
  [448] = 118,
  [449] = 128,
  [450] = 450,
  [451] = 450,
  [452] = 450,
  [453] = 135,
  [454] = 94,
  [455] = 137,
  [456] = 136,
  [457] = 124,
  [458] = 450,
  [459] = 122,
  [460] = 450,
  [461] = 121,
  [462] = 450,
  [463] = 130,
  [464] = 134,
  [465] = 131,
  [466] = 450,
  [467] = 450,
  [468] = 142,
  [469] = 133,
  [470] = 126,
  [471] = 143,
  [472] = 144,
  [473] = 147,
  [474] = 117,
  [475] = 140,
  [476] = 476,
  [477] = 477,
  [478] = 477,
  [479] = 224,
  [480] = 480,
  [481] = 477,
  [482] = 477,
  [483] = 477,
  [484] = 218,
  [485] = 477,
  [486] = 486,
  [487] = 480,
  [488] = 477,
  [489] = 477,
  [490] = 226,
  [491] = 104,
  [492] = 105,
  [493] = 493,
  [494] = 103,
  [495] = 107,
  [496] = 486,
  [497] = 236,
  [498] = 493,
  [499] = 108,
  [500] = 500,
  [501] = 106,
  [502] = 502,
  [503] = 503,
  [504] = 503,
  [505] = 243,
  [506] = 122,
  [507] = 121,
  [508] = 508,
  [509] = 503,
  [510] = 293,
  [511] = 503,
  [512] = 291,
  [513] = 137,
  [514] = 508,
  [515] = 503,
  [516] = 135,
  [517] = 517,
  [518] = 136,
  [519] = 508,
  [520] = 134,
  [521] = 133,
  [522] = 295,
  [523] = 128,
  [524] = 508,
  [525] = 118,
  [526] = 508,
  [527] = 508,
  [528] = 528,
  [529] = 529,
  [530] = 294,
  [531] = 508,
  [532] = 503,
  [533] = 124,
  [534] = 508,
  [535] = 503,
  [536] = 265,
  [537] = 244,
  [538] = 273,
  [539] = 277,
  [540] = 279,
  [541] = 503,
  [542] = 542,
  [543] = 543,
  [544] = 543,
  [545] = 543,
  [546] = 543,
  [547] = 543,
  [548] = 543,
  [549] = 543,
  [550] = 543,
  [551] = 551,
  [552] = 552,
  [553] = 552,
  [554] = 554,
  [555] = 554,
  [556] = 556,
  [557] = 554,
  [558] = 558,
  [559] = 552,
  [560] = 560,
  [561] = 552,
  [562] = 552,
  [563] = 556,
  [564] = 552,
  [565] = 554,
  [566] = 554,
  [567] = 558,
  [568] = 556,
  [569] = 554,
  [570] = 554,
  [571] = 552,
  [572] = 558,
  [573] = 573,
  [574] = 554,
  [575] = 556,
  [576] = 552,
  [577] = 558,
  [578] = 578,
  [579] = 578,
  [580] = 580,
  [581] = 578,
  [582] = 578,
  [583] = 583,
  [584] = 578,
  [585] = 578,
  [586] = 586,
  [587] = 583,
  [588] = 583,
  [589] = 578,
  [590] = 590,
  [591] = 578,
  [592] = 493,
  [593] = 593,
  [594] = 594,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 600,
  [601] = 598,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 598,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 597,
  [612] = 595,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 603,
  [617] = 617,
  [618] = 599,
  [619] = 596,
  [620] = 603,
  [621] = 605,
  [622] = 595,
  [623] = 595,
  [624] = 593,
  [625] = 598,
  [626] = 597,
  [627] = 595,
  [628] = 606,
  [629] = 610,
  [630] = 596,
  [631] = 597,
  [632] = 609,
  [633] = 603,
  [634] = 599,
  [635] = 598,
  [636] = 602,
  [637] = 594,
  [638] = 638,
  [639] = 596,
  [640] = 599,
  [641] = 599,
  [642] = 597,
  [643] = 643,
  [644] = 596,
  [645] = 598,
  [646] = 605,
  [647] = 597,
  [648] = 595,
  [649] = 649,
  [650] = 650,
  [651] = 651,
  [652] = 599,
  [653] = 653,
  [654] = 596,
  [655] = 655,
  [656] = 486,
  [657] = 603,
  [658] = 606,
  [659] = 603,
  [660] = 595,
  [661] = 598,
  [662] = 603,
  [663] = 595,
  [664] = 593,
  [665] = 603,
  [666] = 596,
  [667] = 599,
  [668] = 597,
  [669] = 596,
  [670] = 599,
  [671] = 594,
  [672] = 602,
  [673] = 673,
  [674] = 597,
  [675] = 598,
  [676] = 609,
  [677] = 610,
  [678] = 678,
  [679] = 679,
  [680] = 680,
  [681] = 681,
  [682] = 682,
  [683] = 683,
  [684] = 681,
  [685] = 685,
  [686] = 682,
  [687] = 683,
  [688] = 680,
  [689] = 681,
  [690] = 682,
  [691] = 683,
  [692] = 692,
  [693] = 693,
  [694] = 694,
  [695] = 693,
  [696] = 696,
  [697] = 697,
  [698] = 693,
  [699] = 693,
  [700] = 700,
  [701] = 701,
  [702] = 702,
  [703] = 683,
  [704] = 693,
  [705] = 705,
  [706] = 706,
  [707] = 707,
  [708] = 685,
  [709] = 709,
  [710] = 710,
  [711] = 680,
  [712] = 693,
  [713] = 706,
  [714] = 714,
  [715] = 705,
  [716] = 706,
  [717] = 707,
  [718] = 718,
  [719] = 693,
  [720] = 720,
  [721] = 705,
  [722] = 722,
  [723] = 706,
  [724] = 724,
  [725] = 700,
  [726] = 726,
  [727] = 727,
  [728] = 680,
  [729] = 685,
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 735,
  [736] = 680,
  [737] = 685,
  [738] = 707,
  [739] = 739,
  [740] = 730,
  [741] = 700,
  [742] = 700,
  [743] = 705,
  [744] = 685,
  [745] = 685,
  [746] = 680,
  [747] = 680,
  [748] = 682,
  [749] = 693,
  [750] = 700,
  [751] = 700,
  [752] = 685,
  [753] = 681,
  [754] = 700,
  [755] = 700,
  [756] = 685,
  [757] = 680,
  [758] = 730,
  [759] = 759,
  [760] = 760,
  [761] = 761,
  [762] = 762,
  [763] = 763,
  [764] = 764,
  [765] = 765,
  [766] = 759,
  [767] = 767,
  [768] = 768,
  [769] = 769,
  [770] = 493,
  [771] = 771,
  [772] = 772,
  [773] = 773,
  [774] = 774,
  [775] = 775,
  [776] = 762,
  [777] = 777,
  [778] = 759,
  [779] = 779,
  [780] = 780,
  [781] = 781,
  [782] = 782,
  [783] = 783,
  [784] = 784,
  [785] = 765,
  [786] = 786,
  [787] = 787,
  [788] = 759,
  [789] = 789,
  [790] = 790,
  [791] = 768,
  [792] = 792,
  [793] = 764,
  [794] = 794,
  [795] = 795,
  [796] = 796,
  [797] = 768,
  [798] = 769,
  [799] = 486,
  [800] = 800,
  [801] = 801,
  [802] = 760,
  [803] = 759,
  [804] = 804,
  [805] = 805,
  [806] = 806,
  [807] = 807,
  [808] = 808,
  [809] = 809,
  [810] = 810,
  [811] = 811,
  [812] = 812,
  [813] = 813,
  [814] = 814,
  [815] = 815,
  [816] = 816,
  [817] = 759,
  [818] = 818,
  [819] = 819,
  [820] = 820,
  [821] = 821,
  [822] = 822,
  [823] = 792,
  [824] = 824,
  [825] = 825,
  [826] = 826,
  [827] = 795,
  [828] = 828,
  [829] = 828,
  [830] = 818,
  [831] = 813,
  [832] = 812,
  [833] = 769,
  [834] = 809,
  [835] = 801,
  [836] = 800,
  [837] = 763,
  [838] = 767,
  [839] = 768,
  [840] = 775,
  [841] = 841,
  [842] = 842,
  [843] = 759,
  [844] = 782,
  [845] = 783,
  [846] = 846,
  [847] = 847,
  [848] = 765,
  [849] = 828,
  [850] = 818,
  [851] = 813,
  [852] = 760,
  [853] = 801,
  [854] = 800,
  [855] = 763,
  [856] = 767,
  [857] = 784,
  [858] = 781,
  [859] = 859,
  [860] = 860,
  [861] = 782,
  [862] = 783,
  [863] = 762,
  [864] = 847,
  [865] = 865,
  [866] = 801,
  [867] = 800,
  [868] = 764,
  [869] = 869,
  [870] = 761,
  [871] = 871,
  [872] = 782,
  [873] = 783,
  [874] = 809,
  [875] = 792,
  [876] = 876,
  [877] = 847,
  [878] = 795,
  [879] = 761,
  [880] = 759,
  [881] = 881,
  [882] = 787,
  [883] = 883,
  [884] = 765,
  [885] = 784,
  [886] = 781,
  [887] = 822,
  [888] = 888,
  [889] = 810,
  [890] = 809,
  [891] = 821,
  [892] = 792,
  [893] = 822,
  [894] = 841,
  [895] = 810,
  [896] = 762,
  [897] = 821,
  [898] = 871,
  [899] = 772,
  [900] = 810,
  [901] = 769,
  [902] = 860,
  [903] = 806,
  [904] = 860,
  [905] = 806,
  [906] = 860,
  [907] = 777,
  [908] = 777,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'b'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'b' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(253);
      if (lookahead == '\'') ADVANCE(501);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == ')') ADVANCE(433);
      if (lookahead == '+') ADVANCE(488);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == ':') ADVANCE(442);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '=') ADVANCE(439);
      if (lookahead == 'A' ||
          lookahead == 'I' ||
          lookahead == 'O' ||
          lookahead == 'P') ADVANCE(450);
      if (lookahead == 'F') ADVANCE(26);
      if (lookahead == 'T') ADVANCE(452);
      if (lookahead == 'V') ADVANCE(451);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == ']') ADVANCE(498);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(194);
      if (lookahead == 'v') ADVANCE(28);
      if (lookahead == '{') ADVANCE(502);
      if (lookahead == '}') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(238)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(500);
      if (lookahead == '\'') ADVANCE(501);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('!' <= lookahead && lookahead <= '~') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(499);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(500);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('!' <= lookahead && lookahead <= '~') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(499);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(468);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == 'F') ADVANCE(26);
      if (lookahead == 'T') ADVANCE(165);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == ']') ADVANCE(453);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(171);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(194);
      if (lookahead == 'v') ADVANCE(28);
      if (lookahead == '{') ADVANCE(502);
      if (lookahead == '}') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(468);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == 'F') ADVANCE(264);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == 'f') ADVANCE(268);
      if (lookahead == 't') ADVANCE(376);
      if (lookahead == '{') ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(416);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == 'f') ADVANCE(401);
      if (lookahead == 'l') ADVANCE(326);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead == 'r') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(416);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == 'f') ADVANCE(401);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead == 'r') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(416);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(416);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'f') ADVANCE(325);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == 'p') ADVANCE(365);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(416);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(433);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(416);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(433);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == 'c') ADVANCE(350);
      if (lookahead == 'i') ADVANCE(343);
      if (lookahead == 'v') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(416);
      END_STATE();
    case 12:
      if (lookahead == '+') ADVANCE(488);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'f') ADVANCE(325);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == 'p') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 13:
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'f') ADVANCE(325);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == 'm') ADVANCE(403);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == 'p') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 14:
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == 'f') ADVANCE(401);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(416);
      END_STATE();
    case 15:
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == 'c') ADVANCE(350);
      if (lookahead == 'f') ADVANCE(401);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(416);
      END_STATE();
    case 16:
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == 'A' ||
          lookahead == 'I' ||
          lookahead == 'O' ||
          lookahead == 'P' ||
          lookahead == 'T') ADVANCE(450);
      if (lookahead == 'V') ADVANCE(451);
      if (lookahead == ']') ADVANCE(453);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(224);
      if (lookahead == 'I') ADVANCE(146);
      if (lookahead == 'O') ADVANCE(234);
      if (lookahead == 'V') ADVANCE(87);
      END_STATE();
    case 18:
      if (lookahead == 'L') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(103);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(223);
      if (lookahead == 'T') ADVANCE(173);
      if (lookahead == 'v') ADVANCE(96);
      END_STATE();
    case 21:
      if (lookahead == 'P') ADVANCE(179);
      END_STATE();
    case 22:
      if (lookahead == 'R') ADVANCE(100);
      END_STATE();
    case 23:
      if (lookahead == 'R') ADVANCE(101);
      END_STATE();
    case 24:
      if (lookahead == 'T') ADVANCE(150);
      END_STATE();
    case 25:
      if (lookahead == 'T') ADVANCE(173);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(189);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(455);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(459);
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(465);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(466);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(217);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(213);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(450);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(421);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(489);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(464);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(493);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(486);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(491);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(495);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(422);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(424);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(420);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(227);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(478);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 103:
      if (lookahead == 'f') ADVANCE(447);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(440);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(186);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 117:
      if (lookahead == 'j') ADVANCE(95);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(450);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(497);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(467);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(157);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(450);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 'x') ADVANCE(214);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(474);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(456);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'x') ADVANCE(214);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(445);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 163:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == 'y') ADVANCE(163);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(430);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(428);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(450);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(470);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 224:
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 229:
      if (lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 230:
      if (lookahead == 'v') ADVANCE(38);
      END_STATE();
    case 231:
      if (lookahead == 'v') ADVANCE(80);
      END_STATE();
    case 232:
      if (lookahead == 'v') ADVANCE(70);
      END_STATE();
    case 233:
      if (lookahead == 'v') ADVANCE(102);
      END_STATE();
    case 234:
      if (lookahead == 'w') ADVANCE(149);
      END_STATE();
    case 235:
      if (lookahead == 'w') ADVANCE(35);
      END_STATE();
    case 236:
      if (lookahead == 'y') ADVANCE(443);
      END_STATE();
    case 237:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      END_STATE();
    case 238:
      if (eof) ADVANCE(253);
      if (lookahead == '\'') ADVANCE(468);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == ')') ADVANCE(433);
      if (lookahead == '+') ADVANCE(488);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '.') ADVANCE(469);
      if (lookahead == ':') ADVANCE(442);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '=') ADVANCE(439);
      if (lookahead == 'A' ||
          lookahead == 'I' ||
          lookahead == 'O' ||
          lookahead == 'P') ADVANCE(450);
      if (lookahead == 'F') ADVANCE(26);
      if (lookahead == 'T') ADVANCE(452);
      if (lookahead == 'V') ADVANCE(451);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == ']') ADVANCE(453);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(194);
      if (lookahead == 'v') ADVANCE(28);
      if (lookahead == '{') ADVANCE(502);
      if (lookahead == '}') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(238)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      END_STATE();
    case 239:
      if (eof) ADVANCE(253);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == 'c') ADVANCE(350);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == 'f') ADVANCE(401);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == 'u') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(239)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(416);
      END_STATE();
    case 240:
      if (eof) ADVANCE(253);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == 'f') ADVANCE(324);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == 'p') ADVANCE(362);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == 'u') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(240)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 241:
      if (eof) ADVANCE(253);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(350);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == 'f') ADVANCE(324);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == 'p') ADVANCE(362);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == 'u') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(241)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 242:
      if (eof) ADVANCE(253);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == 'f') ADVANCE(401);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == 'u') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(242)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(416);
      END_STATE();
    case 243:
      if (eof) ADVANCE(253);
      if (lookahead == '(') ADVANCE(432);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == 'c') ADVANCE(350);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == 'f') ADVANCE(401);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead == 'r') ADVANCE(309);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == 'u') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(243)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(416);
      END_STATE();
    case 244:
      if (eof) ADVANCE(253);
      if (lookahead == ')') ADVANCE(433);
      if (lookahead == '+') ADVANCE(488);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == ']') ADVANCE(453);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == 'f') ADVANCE(324);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == 'p') ADVANCE(362);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == 'u') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(244)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 245:
      if (eof) ADVANCE(253);
      if (lookahead == ')') ADVANCE(433);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == ']') ADVANCE(498);
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == 'f') ADVANCE(401);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == 'u') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(246)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(416);
      END_STATE();
    case 246:
      if (eof) ADVANCE(253);
      if (lookahead == ')') ADVANCE(433);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == 'f') ADVANCE(401);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == 'u') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(246)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(416);
      END_STATE();
    case 247:
      if (eof) ADVANCE(253);
      if (lookahead == ')') ADVANCE(433);
      if (lookahead == ',') ADVANCE(436);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == 'f') ADVANCE(401);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == 'u') ADVANCE(381);
      if (lookahead == '}') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(247)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(416);
      END_STATE();
    case 248:
      if (eof) ADVANCE(253);
      if (lookahead == '+') ADVANCE(488);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(350);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == 'f') ADVANCE(324);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == 'p') ADVANCE(362);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == 'u') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(248)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 249:
      if (eof) ADVANCE(253);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(329);
      if (lookahead == 'e') ADVANCE(338);
      if (lookahead == 'f') ADVANCE(324);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == 'p') ADVANCE(362);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == 'u') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(249)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 250:
      if (eof) ADVANCE(253);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'c') ADVANCE(350);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == 'f') ADVANCE(324);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == 'p') ADVANCE(362);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == 'u') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(250)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(416);
      END_STATE();
    case 251:
      if (eof) ADVANCE(253);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == '[') ADVANCE(449);
      if (lookahead == 'c') ADVANCE(350);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == 'f') ADVANCE(401);
      if (lookahead == 'm') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead == 'u') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(251)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(416);
      END_STATE();
    case 252:
      if (eof) ADVANCE(253);
      if (lookahead == ';') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(252)
      END_STATE();
    case 253:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(265);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(317);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(404);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(306);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(315);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(349);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(383);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(416);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(392);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(416);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(395);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(416);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(330);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(416);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(334);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(416);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(342);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(416);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(363);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(416);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(384);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(416);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(335);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(416);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(399);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(416);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(385);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(454);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(458);
      if (lookahead == 't') ADVANCE(308);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(458);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(356);
      if (lookahead == 'f') ADVANCE(259);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(356);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(357);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(397);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(358);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(359);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(423);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(419);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(490);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(492);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(487);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(425);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(494);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(496);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(400);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(402);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(301);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == 'u') ADVANCE(333);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(337);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(463);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(427);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(461);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(274);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(257);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(477);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(485);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(479);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(483);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(508);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(506);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(512);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(510);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(276);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(378);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(277);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(398);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(372);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(375);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(284);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(275);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(278);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(279);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(258);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(448);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(441);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(409);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(254);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(412);
      if (lookahead == 'o') ADVANCE(272);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(412);
      if (lookahead == 'o') ADVANCE(394);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(355);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == 'u') ADVANCE(339);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(345);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(382);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(290);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(413);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead == 'o') ADVANCE(344);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(481);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(408);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(294);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(393);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(387);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(388);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(267);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(351);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(280);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(271);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(457);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(475);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(318);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(256);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(377);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(263);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(281);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(285);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(411);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(446);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(344);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(364);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(288);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(273);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(331);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(340);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(369);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(370);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(373);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(374);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(293);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(353);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(321);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(473);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(415);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(322);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(327);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(406);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(295);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(282);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(283);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(341);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(366);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(286);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(287);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(386);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(407);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(389);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(435);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(431);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(429);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(307);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(390);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(379);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(380);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(354);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(298);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(304);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(305);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(438);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(255);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(471);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(319);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(320);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(308);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(299);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(300);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(312);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(405);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(328);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(332);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(339);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(368);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(333);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(391);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(371);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(302);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(303);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(396);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(297);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(310);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(311);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(262);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(316);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(360);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(444);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'C') ADVANCE(336);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'C') ADVANCE(129);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'C') ADVANCE(129);
      if (lookahead == 'F') ADVANCE(222);
      if (lookahead == 'M') ADVANCE(153);
      if (lookahead == 'N') ADVANCE(41);
      if (lookahead == 'P') ADVANCE(177);
      if (lookahead == 'R') ADVANCE(88);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'F') ADVANCE(222);
      if (lookahead == 'P') ADVANCE(177);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'M') ADVANCE(352);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'N') ADVANCE(41);
      if (lookahead == 'R') ADVANCE(88);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'N') ADVANCE(269);
      if (lookahead == 'R') ADVANCE(314);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_endModule);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_endModule);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_endClass);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_endClass);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_class);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_uses);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_const);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_multiLang);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_multiLang);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_memory);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_memory);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_refTo);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_refTo);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_listOf);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_listOf);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_reference_modifiers_token1);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_reference_modifiers_token1);
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_reference_modifiers_token1);
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_func);
      if (lookahead == 't') ADVANCE(323);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_func);
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_function);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == 'e') ADVANCE(289);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_procedure);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_procedure);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_type);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_forward);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_endFunc);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_endProc);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_inOut);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_inOut);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_inverse);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_inverse);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_absolute);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_absolute);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_final);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_override);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_private);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_protected);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_record);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_nativeRecord);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_nativeRecord);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_endRecord);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_endRecord);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_endNativeRecord);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_endNativeRecord);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == ' ') ADVANCE(500);
      if (lookahead == ';') ADVANCE(417);
      if (('!' <= lookahead && lookahead <= '~') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(499);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_True);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_False);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(416);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 245},
  [27] = {.lex_state = 245},
  [28] = {.lex_state = 245},
  [29] = {.lex_state = 245},
  [30] = {.lex_state = 245},
  [31] = {.lex_state = 239},
  [32] = {.lex_state = 239},
  [33] = {.lex_state = 239},
  [34] = {.lex_state = 239},
  [35] = {.lex_state = 239},
  [36] = {.lex_state = 239},
  [37] = {.lex_state = 239},
  [38] = {.lex_state = 239},
  [39] = {.lex_state = 239},
  [40] = {.lex_state = 239},
  [41] = {.lex_state = 239},
  [42] = {.lex_state = 239},
  [43] = {.lex_state = 239},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 239},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 239},
  [52] = {.lex_state = 239},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 239},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 239},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 244},
  [59] = {.lex_state = 244},
  [60] = {.lex_state = 244},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 248},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 248},
  [69] = {.lex_state = 248},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 244},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 244},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 248},
  [91] = {.lex_state = 248},
  [92] = {.lex_state = 248},
  [93] = {.lex_state = 248},
  [94] = {.lex_state = 240},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 244},
  [98] = {.lex_state = 248},
  [99] = {.lex_state = 241},
  [100] = {.lex_state = 248},
  [101] = {.lex_state = 248},
  [102] = {.lex_state = 241},
  [103] = {.lex_state = 249},
  [104] = {.lex_state = 249},
  [105] = {.lex_state = 240},
  [106] = {.lex_state = 249},
  [107] = {.lex_state = 249},
  [108] = {.lex_state = 249},
  [109] = {.lex_state = 250},
  [110] = {.lex_state = 250},
  [111] = {.lex_state = 241},
  [112] = {.lex_state = 244},
  [113] = {.lex_state = 240},
  [114] = {.lex_state = 240},
  [115] = {.lex_state = 240},
  [116] = {.lex_state = 250},
  [117] = {.lex_state = 244},
  [118] = {.lex_state = 244},
  [119] = {.lex_state = 248},
  [120] = {.lex_state = 244},
  [121] = {.lex_state = 244},
  [122] = {.lex_state = 244},
  [123] = {.lex_state = 250},
  [124] = {.lex_state = 244},
  [125] = {.lex_state = 248},
  [126] = {.lex_state = 244},
  [127] = {.lex_state = 250},
  [128] = {.lex_state = 244},
  [129] = {.lex_state = 241},
  [130] = {.lex_state = 244},
  [131] = {.lex_state = 244},
  [132] = {.lex_state = 250},
  [133] = {.lex_state = 244},
  [134] = {.lex_state = 244},
  [135] = {.lex_state = 244},
  [136] = {.lex_state = 244},
  [137] = {.lex_state = 244},
  [138] = {.lex_state = 244},
  [139] = {.lex_state = 241},
  [140] = {.lex_state = 244},
  [141] = {.lex_state = 241},
  [142] = {.lex_state = 244},
  [143] = {.lex_state = 244},
  [144] = {.lex_state = 244},
  [145] = {.lex_state = 241},
  [146] = {.lex_state = 250},
  [147] = {.lex_state = 244},
  [148] = {.lex_state = 248},
  [149] = {.lex_state = 248},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 241},
  [152] = {.lex_state = 241},
  [153] = {.lex_state = 241},
  [154] = {.lex_state = 250},
  [155] = {.lex_state = 250},
  [156] = {.lex_state = 250},
  [157] = {.lex_state = 248},
  [158] = {.lex_state = 248},
  [159] = {.lex_state = 248},
  [160] = {.lex_state = 248},
  [161] = {.lex_state = 248},
  [162] = {.lex_state = 248},
  [163] = {.lex_state = 248},
  [164] = {.lex_state = 248},
  [165] = {.lex_state = 248},
  [166] = {.lex_state = 248},
  [167] = {.lex_state = 248},
  [168] = {.lex_state = 248},
  [169] = {.lex_state = 248},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 248},
  [172] = {.lex_state = 248},
  [173] = {.lex_state = 248},
  [174] = {.lex_state = 248},
  [175] = {.lex_state = 248},
  [176] = {.lex_state = 248},
  [177] = {.lex_state = 248},
  [178] = {.lex_state = 248},
  [179] = {.lex_state = 248},
  [180] = {.lex_state = 248},
  [181] = {.lex_state = 248},
  [182] = {.lex_state = 242},
  [183] = {.lex_state = 247},
  [184] = {.lex_state = 248},
  [185] = {.lex_state = 248},
  [186] = {.lex_state = 248},
  [187] = {.lex_state = 248},
  [188] = {.lex_state = 248},
  [189] = {.lex_state = 248},
  [190] = {.lex_state = 248},
  [191] = {.lex_state = 248},
  [192] = {.lex_state = 248},
  [193] = {.lex_state = 248},
  [194] = {.lex_state = 248},
  [195] = {.lex_state = 248},
  [196] = {.lex_state = 248},
  [197] = {.lex_state = 248},
  [198] = {.lex_state = 248},
  [199] = {.lex_state = 247},
  [200] = {.lex_state = 248},
  [201] = {.lex_state = 248},
  [202] = {.lex_state = 248},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 247},
  [205] = {.lex_state = 12},
  [206] = {.lex_state = 247},
  [207] = {.lex_state = 247},
  [208] = {.lex_state = 243},
  [209] = {.lex_state = 12},
  [210] = {.lex_state = 247},
  [211] = {.lex_state = 247},
  [212] = {.lex_state = 247},
  [213] = {.lex_state = 247},
  [214] = {.lex_state = 12},
  [215] = {.lex_state = 247},
  [216] = {.lex_state = 247},
  [217] = {.lex_state = 12},
  [218] = {.lex_state = 245},
  [219] = {.lex_state = 243},
  [220] = {.lex_state = 247},
  [221] = {.lex_state = 247},
  [222] = {.lex_state = 242},
  [223] = {.lex_state = 3},
  [224] = {.lex_state = 245},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 245},
  [227] = {.lex_state = 239},
  [228] = {.lex_state = 251},
  [229] = {.lex_state = 251},
  [230] = {.lex_state = 247},
  [231] = {.lex_state = 242},
  [232] = {.lex_state = 8},
  [233] = {.lex_state = 243},
  [234] = {.lex_state = 239},
  [235] = {.lex_state = 251},
  [236] = {.lex_state = 245},
  [237] = {.lex_state = 239},
  [238] = {.lex_state = 251},
  [239] = {.lex_state = 247},
  [240] = {.lex_state = 242},
  [241] = {.lex_state = 242},
  [242] = {.lex_state = 247},
  [243] = {.lex_state = 245},
  [244] = {.lex_state = 245},
  [245] = {.lex_state = 251},
  [246] = {.lex_state = 251},
  [247] = {.lex_state = 251},
  [248] = {.lex_state = 245},
  [249] = {.lex_state = 251},
  [250] = {.lex_state = 239},
  [251] = {.lex_state = 251},
  [252] = {.lex_state = 239},
  [253] = {.lex_state = 245},
  [254] = {.lex_state = 251},
  [255] = {.lex_state = 3},
  [256] = {.lex_state = 243},
  [257] = {.lex_state = 251},
  [258] = {.lex_state = 245},
  [259] = {.lex_state = 245},
  [260] = {.lex_state = 245},
  [261] = {.lex_state = 245},
  [262] = {.lex_state = 245},
  [263] = {.lex_state = 245},
  [264] = {.lex_state = 245},
  [265] = {.lex_state = 245},
  [266] = {.lex_state = 245},
  [267] = {.lex_state = 245},
  [268] = {.lex_state = 245},
  [269] = {.lex_state = 243},
  [270] = {.lex_state = 243},
  [271] = {.lex_state = 243},
  [272] = {.lex_state = 245},
  [273] = {.lex_state = 245},
  [274] = {.lex_state = 245},
  [275] = {.lex_state = 245},
  [276] = {.lex_state = 251},
  [277] = {.lex_state = 245},
  [278] = {.lex_state = 251},
  [279] = {.lex_state = 245},
  [280] = {.lex_state = 3},
  [281] = {.lex_state = 245},
  [282] = {.lex_state = 245},
  [283] = {.lex_state = 251},
  [284] = {.lex_state = 245},
  [285] = {.lex_state = 251},
  [286] = {.lex_state = 245},
  [287] = {.lex_state = 251},
  [288] = {.lex_state = 239},
  [289] = {.lex_state = 245},
  [290] = {.lex_state = 245},
  [291] = {.lex_state = 245},
  [292] = {.lex_state = 251},
  [293] = {.lex_state = 245},
  [294] = {.lex_state = 245},
  [295] = {.lex_state = 245},
  [296] = {.lex_state = 245},
  [297] = {.lex_state = 245},
  [298] = {.lex_state = 245},
  [299] = {.lex_state = 245},
  [300] = {.lex_state = 251},
  [301] = {.lex_state = 245},
  [302] = {.lex_state = 239},
  [303] = {.lex_state = 245},
  [304] = {.lex_state = 251},
  [305] = {.lex_state = 245},
  [306] = {.lex_state = 245},
  [307] = {.lex_state = 245},
  [308] = {.lex_state = 245},
  [309] = {.lex_state = 3},
  [310] = {.lex_state = 245},
  [311] = {.lex_state = 245},
  [312] = {.lex_state = 245},
  [313] = {.lex_state = 251},
  [314] = {.lex_state = 245},
  [315] = {.lex_state = 245},
  [316] = {.lex_state = 239},
  [317] = {.lex_state = 251},
  [318] = {.lex_state = 251},
  [319] = {.lex_state = 239},
  [320] = {.lex_state = 251},
  [321] = {.lex_state = 7},
  [322] = {.lex_state = 251},
  [323] = {.lex_state = 3},
  [324] = {.lex_state = 251},
  [325] = {.lex_state = 3},
  [326] = {.lex_state = 3},
  [327] = {.lex_state = 7},
  [328] = {.lex_state = 239},
  [329] = {.lex_state = 251},
  [330] = {.lex_state = 251},
  [331] = {.lex_state = 239},
  [332] = {.lex_state = 251},
  [333] = {.lex_state = 239},
  [334] = {.lex_state = 251},
  [335] = {.lex_state = 239},
  [336] = {.lex_state = 239},
  [337] = {.lex_state = 239},
  [338] = {.lex_state = 239},
  [339] = {.lex_state = 239},
  [340] = {.lex_state = 239},
  [341] = {.lex_state = 239},
  [342] = {.lex_state = 7},
  [343] = {.lex_state = 239},
  [344] = {.lex_state = 239},
  [345] = {.lex_state = 239},
  [346] = {.lex_state = 239},
  [347] = {.lex_state = 239},
  [348] = {.lex_state = 239},
  [349] = {.lex_state = 239},
  [350] = {.lex_state = 239},
  [351] = {.lex_state = 239},
  [352] = {.lex_state = 3},
  [353] = {.lex_state = 3},
  [354] = {.lex_state = 239},
  [355] = {.lex_state = 239},
  [356] = {.lex_state = 239},
  [357] = {.lex_state = 239},
  [358] = {.lex_state = 239},
  [359] = {.lex_state = 7},
  [360] = {.lex_state = 239},
  [361] = {.lex_state = 7},
  [362] = {.lex_state = 13},
  [363] = {.lex_state = 8},
  [364] = {.lex_state = 13},
  [365] = {.lex_state = 3},
  [366] = {.lex_state = 3},
  [367] = {.lex_state = 251},
  [368] = {.lex_state = 7},
  [369] = {.lex_state = 251},
  [370] = {.lex_state = 3},
  [371] = {.lex_state = 251},
  [372] = {.lex_state = 239},
  [373] = {.lex_state = 239},
  [374] = {.lex_state = 243},
  [375] = {.lex_state = 239},
  [376] = {.lex_state = 239},
  [377] = {.lex_state = 239},
  [378] = {.lex_state = 239},
  [379] = {.lex_state = 243},
  [380] = {.lex_state = 239},
  [381] = {.lex_state = 243},
  [382] = {.lex_state = 239},
  [383] = {.lex_state = 239},
  [384] = {.lex_state = 3},
  [385] = {.lex_state = 239},
  [386] = {.lex_state = 239},
  [387] = {.lex_state = 239},
  [388] = {.lex_state = 239},
  [389] = {.lex_state = 239},
  [390] = {.lex_state = 239},
  [391] = {.lex_state = 239},
  [392] = {.lex_state = 7},
  [393] = {.lex_state = 7},
  [394] = {.lex_state = 239},
  [395] = {.lex_state = 239},
  [396] = {.lex_state = 239},
  [397] = {.lex_state = 239},
  [398] = {.lex_state = 239},
  [399] = {.lex_state = 239},
  [400] = {.lex_state = 8},
  [401] = {.lex_state = 8},
  [402] = {.lex_state = 239},
  [403] = {.lex_state = 8},
  [404] = {.lex_state = 239},
  [405] = {.lex_state = 239},
  [406] = {.lex_state = 239},
  [407] = {.lex_state = 239},
  [408] = {.lex_state = 239},
  [409] = {.lex_state = 239},
  [410] = {.lex_state = 239},
  [411] = {.lex_state = 239},
  [412] = {.lex_state = 239},
  [413] = {.lex_state = 239},
  [414] = {.lex_state = 12},
  [415] = {.lex_state = 13},
  [416] = {.lex_state = 13},
  [417] = {.lex_state = 13},
  [418] = {.lex_state = 12},
  [419] = {.lex_state = 239},
  [420] = {.lex_state = 239},
  [421] = {.lex_state = 239},
  [422] = {.lex_state = 239},
  [423] = {.lex_state = 239},
  [424] = {.lex_state = 239},
  [425] = {.lex_state = 239},
  [426] = {.lex_state = 239},
  [427] = {.lex_state = 239},
  [428] = {.lex_state = 239},
  [429] = {.lex_state = 239},
  [430] = {.lex_state = 239},
  [431] = {.lex_state = 239},
  [432] = {.lex_state = 239},
  [433] = {.lex_state = 239},
  [434] = {.lex_state = 239},
  [435] = {.lex_state = 239},
  [436] = {.lex_state = 239},
  [437] = {.lex_state = 239},
  [438] = {.lex_state = 239},
  [439] = {.lex_state = 239},
  [440] = {.lex_state = 239},
  [441] = {.lex_state = 239},
  [442] = {.lex_state = 239},
  [443] = {.lex_state = 239},
  [444] = {.lex_state = 239},
  [445] = {.lex_state = 239},
  [446] = {.lex_state = 239},
  [447] = {.lex_state = 239},
  [448] = {.lex_state = 12},
  [449] = {.lex_state = 12},
  [450] = {.lex_state = 9},
  [451] = {.lex_state = 9},
  [452] = {.lex_state = 9},
  [453] = {.lex_state = 12},
  [454] = {.lex_state = 3},
  [455] = {.lex_state = 12},
  [456] = {.lex_state = 12},
  [457] = {.lex_state = 12},
  [458] = {.lex_state = 9},
  [459] = {.lex_state = 12},
  [460] = {.lex_state = 9},
  [461] = {.lex_state = 12},
  [462] = {.lex_state = 9},
  [463] = {.lex_state = 12},
  [464] = {.lex_state = 12},
  [465] = {.lex_state = 12},
  [466] = {.lex_state = 9},
  [467] = {.lex_state = 9},
  [468] = {.lex_state = 12},
  [469] = {.lex_state = 12},
  [470] = {.lex_state = 12},
  [471] = {.lex_state = 12},
  [472] = {.lex_state = 12},
  [473] = {.lex_state = 12},
  [474] = {.lex_state = 12},
  [475] = {.lex_state = 12},
  [476] = {.lex_state = 14},
  [477] = {.lex_state = 9},
  [478] = {.lex_state = 9},
  [479] = {.lex_state = 3},
  [480] = {.lex_state = 15},
  [481] = {.lex_state = 9},
  [482] = {.lex_state = 9},
  [483] = {.lex_state = 9},
  [484] = {.lex_state = 3},
  [485] = {.lex_state = 9},
  [486] = {.lex_state = 14},
  [487] = {.lex_state = 15},
  [488] = {.lex_state = 9},
  [489] = {.lex_state = 9},
  [490] = {.lex_state = 3},
  [491] = {.lex_state = 3},
  [492] = {.lex_state = 3},
  [493] = {.lex_state = 14},
  [494] = {.lex_state = 3},
  [495] = {.lex_state = 3},
  [496] = {.lex_state = 15},
  [497] = {.lex_state = 3},
  [498] = {.lex_state = 15},
  [499] = {.lex_state = 3},
  [500] = {.lex_state = 9},
  [501] = {.lex_state = 3},
  [502] = {.lex_state = 9},
  [503] = {.lex_state = 11},
  [504] = {.lex_state = 11},
  [505] = {.lex_state = 3},
  [506] = {.lex_state = 3},
  [507] = {.lex_state = 3},
  [508] = {.lex_state = 11},
  [509] = {.lex_state = 11},
  [510] = {.lex_state = 3},
  [511] = {.lex_state = 11},
  [512] = {.lex_state = 3},
  [513] = {.lex_state = 3},
  [514] = {.lex_state = 11},
  [515] = {.lex_state = 11},
  [516] = {.lex_state = 3},
  [517] = {.lex_state = 3},
  [518] = {.lex_state = 3},
  [519] = {.lex_state = 11},
  [520] = {.lex_state = 3},
  [521] = {.lex_state = 3},
  [522] = {.lex_state = 3},
  [523] = {.lex_state = 3},
  [524] = {.lex_state = 11},
  [525] = {.lex_state = 3},
  [526] = {.lex_state = 11},
  [527] = {.lex_state = 11},
  [528] = {.lex_state = 3},
  [529] = {.lex_state = 3},
  [530] = {.lex_state = 3},
  [531] = {.lex_state = 11},
  [532] = {.lex_state = 11},
  [533] = {.lex_state = 3},
  [534] = {.lex_state = 11},
  [535] = {.lex_state = 11},
  [536] = {.lex_state = 3},
  [537] = {.lex_state = 3},
  [538] = {.lex_state = 3},
  [539] = {.lex_state = 3},
  [540] = {.lex_state = 3},
  [541] = {.lex_state = 11},
  [542] = {.lex_state = 11},
  [543] = {.lex_state = 11},
  [544] = {.lex_state = 11},
  [545] = {.lex_state = 11},
  [546] = {.lex_state = 11},
  [547] = {.lex_state = 11},
  [548] = {.lex_state = 11},
  [549] = {.lex_state = 11},
  [550] = {.lex_state = 11},
  [551] = {.lex_state = 9},
  [552] = {.lex_state = 10},
  [553] = {.lex_state = 10},
  [554] = {.lex_state = 10},
  [555] = {.lex_state = 10},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 10},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 10},
  [560] = {.lex_state = 9},
  [561] = {.lex_state = 10},
  [562] = {.lex_state = 10},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 10},
  [565] = {.lex_state = 10},
  [566] = {.lex_state = 10},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 10},
  [570] = {.lex_state = 10},
  [571] = {.lex_state = 10},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 9},
  [574] = {.lex_state = 10},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 10},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 10},
  [579] = {.lex_state = 10},
  [580] = {.lex_state = 10},
  [581] = {.lex_state = 10},
  [582] = {.lex_state = 10},
  [583] = {.lex_state = 10},
  [584] = {.lex_state = 10},
  [585] = {.lex_state = 10},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 10},
  [588] = {.lex_state = 10},
  [589] = {.lex_state = 10},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 10},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 1},
  [594] = {.lex_state = 1},
  [595] = {.lex_state = 16},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 0},
  [599] = {.lex_state = 16},
  [600] = {.lex_state = 3},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 3},
  [606] = {.lex_state = 3},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 3},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 16},
  [613] = {.lex_state = 252},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 245},
  [618] = {.lex_state = 16},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 3},
  [622] = {.lex_state = 16},
  [623] = {.lex_state = 16},
  [624] = {.lex_state = 1},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 16},
  [628] = {.lex_state = 3},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 3},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 16},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 1},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 16},
  [641] = {.lex_state = 16},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 3},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 3},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 16},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 1},
  [651] = {.lex_state = 10},
  [652] = {.lex_state = 16},
  [653] = {.lex_state = 245},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 3},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 0},
  [658] = {.lex_state = 3},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 16},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 16},
  [664] = {.lex_state = 1},
  [665] = {.lex_state = 0},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 16},
  [668] = {.lex_state = 0},
  [669] = {.lex_state = 0},
  [670] = {.lex_state = 16},
  [671] = {.lex_state = 1},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 245},
  [674] = {.lex_state = 0},
  [675] = {.lex_state = 0},
  [676] = {.lex_state = 3},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 10},
  [679] = {.lex_state = 252},
  [680] = {.lex_state = 10},
  [681] = {.lex_state = 10},
  [682] = {.lex_state = 10},
  [683] = {.lex_state = 0},
  [684] = {.lex_state = 10},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 10},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 10},
  [689] = {.lex_state = 10},
  [690] = {.lex_state = 10},
  [691] = {.lex_state = 0},
  [692] = {.lex_state = 16},
  [693] = {.lex_state = 10},
  [694] = {.lex_state = 0},
  [695] = {.lex_state = 10},
  [696] = {.lex_state = 0},
  [697] = {.lex_state = 10},
  [698] = {.lex_state = 10},
  [699] = {.lex_state = 10},
  [700] = {.lex_state = 10},
  [701] = {.lex_state = 0},
  [702] = {.lex_state = 3},
  [703] = {.lex_state = 0},
  [704] = {.lex_state = 10},
  [705] = {.lex_state = 0},
  [706] = {.lex_state = 0},
  [707] = {.lex_state = 3},
  [708] = {.lex_state = 0},
  [709] = {.lex_state = 16},
  [710] = {.lex_state = 0},
  [711] = {.lex_state = 10},
  [712] = {.lex_state = 10},
  [713] = {.lex_state = 0},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 0},
  [716] = {.lex_state = 0},
  [717] = {.lex_state = 3},
  [718] = {.lex_state = 10},
  [719] = {.lex_state = 10},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 0},
  [722] = {.lex_state = 0},
  [723] = {.lex_state = 0},
  [724] = {.lex_state = 3},
  [725] = {.lex_state = 10},
  [726] = {.lex_state = 10},
  [727] = {.lex_state = 10},
  [728] = {.lex_state = 10},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 10},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 10},
  [735] = {.lex_state = 0},
  [736] = {.lex_state = 10},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 3},
  [739] = {.lex_state = 10},
  [740] = {.lex_state = 10},
  [741] = {.lex_state = 10},
  [742] = {.lex_state = 10},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 0},
  [746] = {.lex_state = 10},
  [747] = {.lex_state = 10},
  [748] = {.lex_state = 10},
  [749] = {.lex_state = 10},
  [750] = {.lex_state = 10},
  [751] = {.lex_state = 10},
  [752] = {.lex_state = 0},
  [753] = {.lex_state = 10},
  [754] = {.lex_state = 10},
  [755] = {.lex_state = 10},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 10},
  [758] = {.lex_state = 10},
  [759] = {.lex_state = 3},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 10},
  [763] = {.lex_state = 10},
  [764] = {.lex_state = 10},
  [765] = {.lex_state = 245},
  [766] = {.lex_state = 3},
  [767] = {.lex_state = 10},
  [768] = {.lex_state = 10},
  [769] = {.lex_state = 10},
  [770] = {.lex_state = 10},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 0},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 10},
  [776] = {.lex_state = 10},
  [777] = {.lex_state = 3},
  [778] = {.lex_state = 3},
  [779] = {.lex_state = 10},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 0},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 245},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 3},
  [789] = {.lex_state = 10},
  [790] = {.lex_state = 16},
  [791] = {.lex_state = 10},
  [792] = {.lex_state = 10},
  [793] = {.lex_state = 10},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 3},
  [796] = {.lex_state = 10},
  [797] = {.lex_state = 10},
  [798] = {.lex_state = 10},
  [799] = {.lex_state = 10},
  [800] = {.lex_state = 0},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 3},
  [804] = {.lex_state = 10},
  [805] = {.lex_state = 10},
  [806] = {.lex_state = 10},
  [807] = {.lex_state = 0},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 245},
  [810] = {.lex_state = 0},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 10},
  [813] = {.lex_state = 10},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 10},
  [816] = {.lex_state = 0},
  [817] = {.lex_state = 3},
  [818] = {.lex_state = 10},
  [819] = {.lex_state = 10},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 10},
  [823] = {.lex_state = 10},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 16},
  [826] = {.lex_state = 10},
  [827] = {.lex_state = 3},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 10},
  [831] = {.lex_state = 10},
  [832] = {.lex_state = 10},
  [833] = {.lex_state = 10},
  [834] = {.lex_state = 245},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 10},
  [838] = {.lex_state = 10},
  [839] = {.lex_state = 10},
  [840] = {.lex_state = 10},
  [841] = {.lex_state = 10},
  [842] = {.lex_state = 10},
  [843] = {.lex_state = 3},
  [844] = {.lex_state = 0},
  [845] = {.lex_state = 0},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 10},
  [848] = {.lex_state = 245},
  [849] = {.lex_state = 0},
  [850] = {.lex_state = 10},
  [851] = {.lex_state = 10},
  [852] = {.lex_state = 0},
  [853] = {.lex_state = 0},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 10},
  [856] = {.lex_state = 10},
  [857] = {.lex_state = 0},
  [858] = {.lex_state = 0},
  [859] = {.lex_state = 0},
  [860] = {.lex_state = 0},
  [861] = {.lex_state = 0},
  [862] = {.lex_state = 0},
  [863] = {.lex_state = 10},
  [864] = {.lex_state = 10},
  [865] = {.lex_state = 0},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 10},
  [869] = {.lex_state = 10},
  [870] = {.lex_state = 0},
  [871] = {.lex_state = 10},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 245},
  [875] = {.lex_state = 10},
  [876] = {.lex_state = 0},
  [877] = {.lex_state = 10},
  [878] = {.lex_state = 3},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 3},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 10},
  [884] = {.lex_state = 245},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 0},
  [887] = {.lex_state = 10},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 245},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 10},
  [893] = {.lex_state = 10},
  [894] = {.lex_state = 10},
  [895] = {.lex_state = 0},
  [896] = {.lex_state = 10},
  [897] = {.lex_state = 0},
  [898] = {.lex_state = 10},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 0},
  [901] = {.lex_state = 10},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 10},
  [904] = {.lex_state = 0},
  [905] = {.lex_state = 10},
  [906] = {.lex_state = 0},
  [907] = {.lex_state = 3},
  [908] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_endModule] = ACTIONS(1),
    [anon_sym_endClass] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_uses] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_multiLang] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_memory] = ACTIONS(1),
    [anon_sym_refTo] = ACTIONS(1),
    [anon_sym_listOf] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [aux_sym_reference_modifiers_token1] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_proc] = ACTIONS(1),
    [anon_sym_procedure] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_forward] = ACTIONS(1),
    [anon_sym_endFunc] = ACTIONS(1),
    [anon_sym_endProc] = ACTIONS(1),
    [anon_sym_external] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_inOut] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_inverse] = ACTIONS(1),
    [anon_sym_absolute] = ACTIONS(1),
    [anon_sym_final] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_nativeRecord] = ACTIONS(1),
    [anon_sym_endRecord] = ACTIONS(1),
    [anon_sym_endNativeRecord] = ACTIONS(1),
    [anon_sym_model] = ACTIONS(1),
    [anon_sym_RBRACK2] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__integer_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(881),
    [sym_module] = STATE(888),
    [sym_class] = STATE(888),
    [sym__class] = STATE(613),
    [sym_annotation] = STATE(710),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_class] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_end,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(23), 1,
      anon_sym_external,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_return,
    STATE(9), 1,
      sym_function_parameters,
    STATE(14), 1,
      sym_function_return_type,
    STATE(74), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(606), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(21), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(428), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [85] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_end,
    ACTIONS(35), 1,
      anon_sym_forward,
    ACTIONS(39), 1,
      anon_sym_external,
    STATE(10), 1,
      sym_function_parameters,
    STATE(23), 1,
      sym_function_return_type,
    STATE(82), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(658), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(37), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(316), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [170] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(41), 1,
      anon_sym_end,
    ACTIONS(43), 1,
      anon_sym_forward,
    ACTIONS(47), 1,
      anon_sym_external,
    STATE(11), 1,
      sym_function_parameters,
    STATE(24), 1,
      sym_function_return_type,
    STATE(88), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(628), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(45), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(305), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [255] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      anon_sym_forward,
    ACTIONS(47), 1,
      anon_sym_external,
    ACTIONS(49), 1,
      anon_sym_end,
    STATE(8), 1,
      sym_function_parameters,
    STATE(21), 1,
      sym_function_return_type,
    STATE(77), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(628), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(51), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(281), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [340] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(23), 1,
      anon_sym_external,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(53), 1,
      anon_sym_end,
    STATE(12), 1,
      sym_function_parameters,
    STATE(20), 1,
      sym_function_return_type,
    STATE(83), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(606), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(55), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(438), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [425] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_forward,
    ACTIONS(39), 1,
      anon_sym_external,
    ACTIONS(57), 1,
      anon_sym_end,
    STATE(13), 1,
      sym_function_parameters,
    STATE(15), 1,
      sym_function_return_type,
    STATE(61), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(658), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(59), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(355), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [510] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      anon_sym_forward,
    ACTIONS(47), 1,
      anon_sym_external,
    ACTIONS(61), 1,
      anon_sym_end,
    STATE(18), 1,
      sym_function_return_type,
    STATE(72), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(628), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(63), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(296), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [589] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(23), 1,
      anon_sym_external,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(65), 1,
      anon_sym_end,
    STATE(22), 1,
      sym_function_return_type,
    STATE(87), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(606), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(67), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(424), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [668] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_forward,
    ACTIONS(39), 1,
      anon_sym_external,
    ACTIONS(69), 1,
      anon_sym_end,
    STATE(25), 1,
      sym_function_return_type,
    STATE(80), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(658), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(71), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(343), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [747] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      anon_sym_forward,
    ACTIONS(47), 1,
      anon_sym_external,
    ACTIONS(73), 1,
      anon_sym_end,
    STATE(16), 1,
      sym_function_return_type,
    STATE(89), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(628), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(75), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(260), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [826] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(23), 1,
      anon_sym_external,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(77), 1,
      anon_sym_end,
    STATE(19), 1,
      sym_function_return_type,
    STATE(62), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(606), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(79), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(445), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [905] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      anon_sym_forward,
    ACTIONS(39), 1,
      anon_sym_external,
    ACTIONS(81), 1,
      anon_sym_end,
    STATE(17), 1,
      sym_function_return_type,
    STATE(71), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(658), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(83), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(382), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [984] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(23), 1,
      anon_sym_external,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(85), 1,
      anon_sym_end,
    STATE(85), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(606), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(87), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(422), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [1057] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_forward,
    ACTIONS(39), 1,
      anon_sym_external,
    ACTIONS(89), 1,
      anon_sym_end,
    STATE(67), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(658), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(91), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(380), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [1130] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(43), 1,
      anon_sym_forward,
    ACTIONS(47), 1,
      anon_sym_external,
    ACTIONS(93), 1,
      anon_sym_end,
    STATE(70), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(628), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(95), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(303), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [1203] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_forward,
    ACTIONS(39), 1,
      anon_sym_external,
    ACTIONS(97), 1,
      anon_sym_end,
    STATE(63), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(658), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(99), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(358), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [1276] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(43), 1,
      anon_sym_forward,
    ACTIONS(47), 1,
      anon_sym_external,
    ACTIONS(101), 1,
      anon_sym_end,
    STATE(81), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(628), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(103), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(264), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [1349] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(23), 1,
      anon_sym_external,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(105), 1,
      anon_sym_end,
    STATE(79), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(606), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(107), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(435), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [1422] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(23), 1,
      anon_sym_external,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(109), 1,
      anon_sym_end,
    STATE(75), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(606), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(111), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(443), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [1495] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(43), 1,
      anon_sym_forward,
    ACTIONS(47), 1,
      anon_sym_external,
    ACTIONS(113), 1,
      anon_sym_end,
    STATE(73), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(628), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(115), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(298), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [1568] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(23), 1,
      anon_sym_external,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(117), 1,
      anon_sym_end,
    STATE(64), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(606), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(119), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(436), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [1641] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_forward,
    ACTIONS(39), 1,
      anon_sym_external,
    ACTIONS(121), 1,
      anon_sym_end,
    STATE(65), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(658), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(123), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(341), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [1714] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(43), 1,
      anon_sym_forward,
    ACTIONS(47), 1,
      anon_sym_external,
    ACTIONS(125), 1,
      anon_sym_end,
    STATE(78), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(628), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(127), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(259), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [1787] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_forward,
    ACTIONS(39), 1,
      anon_sym_external,
    ACTIONS(129), 1,
      anon_sym_end,
    STATE(76), 1,
      sym_function_modifiers,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(658), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(29), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(131), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(223), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(375), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [1860] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_class,
    ACTIONS(141), 1,
      anon_sym_uses,
    ACTIONS(143), 1,
      anon_sym_const,
    ACTIONS(145), 1,
      anon_sym_memory,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_type,
    STATE(274), 1,
      sym__variable_item,
    STATE(476), 1,
      sym_annotation,
    STATE(679), 1,
      sym__class,
    STATE(813), 1,
      sym_memory_modifiers,
    ACTIONS(137), 2,
      anon_sym_end,
      anon_sym_endModule,
    ACTIONS(149), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(27), 14,
      sym_class_item,
      sym__module_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      aux_sym_module_repeat1,
  [1926] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(160), 1,
      anon_sym_class,
    ACTIONS(163), 1,
      anon_sym_uses,
    ACTIONS(166), 1,
      anon_sym_const,
    ACTIONS(169), 1,
      anon_sym_memory,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_type,
    STATE(274), 1,
      sym__variable_item,
    STATE(476), 1,
      sym_annotation,
    STATE(679), 1,
      sym__class,
    STATE(813), 1,
      sym_memory_modifiers,
    ACTIONS(158), 2,
      anon_sym_end,
      anon_sym_endModule,
    ACTIONS(175), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(27), 14,
      sym_class_item,
      sym__module_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      aux_sym_module_repeat1,
  [1992] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_class,
    ACTIONS(141), 1,
      anon_sym_uses,
    ACTIONS(143), 1,
      anon_sym_const,
    ACTIONS(145), 1,
      anon_sym_memory,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_type,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    STATE(274), 1,
      sym__variable_item,
    STATE(476), 1,
      sym_annotation,
    STATE(679), 1,
      sym__class,
    STATE(813), 1,
      sym_memory_modifiers,
    ACTIONS(183), 2,
      anon_sym_end,
      anon_sym_endModule,
    ACTIONS(149), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(29), 14,
      sym_class_item,
      sym__module_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      aux_sym_module_repeat1,
  [2058] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_class,
    ACTIONS(141), 1,
      anon_sym_uses,
    ACTIONS(143), 1,
      anon_sym_const,
    ACTIONS(145), 1,
      anon_sym_memory,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_type,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    STATE(274), 1,
      sym__variable_item,
    STATE(476), 1,
      sym_annotation,
    STATE(679), 1,
      sym__class,
    STATE(813), 1,
      sym_memory_modifiers,
    ACTIONS(187), 2,
      anon_sym_end,
      anon_sym_endModule,
    ACTIONS(149), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(27), 14,
      sym_class_item,
      sym__module_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      aux_sym_module_repeat1,
  [2124] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_class,
    ACTIONS(141), 1,
      anon_sym_uses,
    ACTIONS(143), 1,
      anon_sym_const,
    ACTIONS(145), 1,
      anon_sym_memory,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      anon_sym_type,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(274), 1,
      sym__variable_item,
    STATE(476), 1,
      sym_annotation,
    STATE(679), 1,
      sym__class,
    STATE(813), 1,
      sym_memory_modifiers,
    ACTIONS(191), 2,
      anon_sym_end,
      anon_sym_endModule,
    ACTIONS(149), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(26), 14,
      sym_class_item,
      sym__module_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      aux_sym_module_repeat1,
  [2190] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_memory,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_uses,
    ACTIONS(203), 1,
      anon_sym_const,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_type,
    STATE(336), 1,
      sym__variable_item,
    STATE(487), 1,
      sym_annotation,
    STATE(831), 1,
      sym_memory_modifiers,
    ACTIONS(197), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(207), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(38), 13,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      aux_sym__class_repeat1,
  [2252] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_memory,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_uses,
    ACTIONS(203), 1,
      anon_sym_const,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_type,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(336), 1,
      sym__variable_item,
    STATE(487), 1,
      sym_annotation,
    STATE(831), 1,
      sym_memory_modifiers,
    ACTIONS(213), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(207), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(37), 13,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      aux_sym__class_repeat1,
  [2314] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_memory,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(217), 1,
      sym_identifier,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_uses,
    ACTIONS(223), 1,
      anon_sym_const,
    ACTIONS(227), 1,
      anon_sym_type,
    STATE(409), 1,
      sym__variable_item,
    STATE(480), 1,
      sym_annotation,
    STATE(851), 1,
      sym_memory_modifiers,
    ACTIONS(213), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(225), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(42), 13,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      aux_sym__class_repeat1,
  [2373] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_memory,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_uses,
    ACTIONS(203), 1,
      anon_sym_const,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_type,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    STATE(336), 1,
      sym__variable_item,
    STATE(487), 1,
      sym_annotation,
    STATE(831), 1,
      sym_memory_modifiers,
    ACTIONS(231), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(207), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(36), 13,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      aux_sym__class_repeat1,
  [2432] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_memory,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_uses,
    ACTIONS(203), 1,
      anon_sym_const,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_type,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    STATE(336), 1,
      sym__variable_item,
    STATE(487), 1,
      sym_annotation,
    STATE(831), 1,
      sym_memory_modifiers,
    ACTIONS(235), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(207), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(39), 13,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      aux_sym__class_repeat1,
  [2491] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_uses,
    ACTIONS(247), 1,
      anon_sym_const,
    ACTIONS(250), 1,
      anon_sym_memory,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(259), 1,
      anon_sym_type,
    STATE(336), 1,
      sym__variable_item,
    STATE(487), 1,
      sym_annotation,
    STATE(831), 1,
      sym_memory_modifiers,
    ACTIONS(242), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(256), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(36), 13,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      aux_sym__class_repeat1,
  [2550] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_memory,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_uses,
    ACTIONS(203), 1,
      anon_sym_const,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_type,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
    STATE(336), 1,
      sym__variable_item,
    STATE(487), 1,
      sym_annotation,
    STATE(831), 1,
      sym_memory_modifiers,
    ACTIONS(264), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(207), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(36), 13,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      aux_sym__class_repeat1,
  [2609] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_memory,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_uses,
    ACTIONS(203), 1,
      anon_sym_const,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_type,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    STATE(336), 1,
      sym__variable_item,
    STATE(487), 1,
      sym_annotation,
    STATE(831), 1,
      sym_memory_modifiers,
    ACTIONS(268), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(207), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(36), 13,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      aux_sym__class_repeat1,
  [2668] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_memory,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_uses,
    ACTIONS(203), 1,
      anon_sym_const,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_type,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    STATE(336), 1,
      sym__variable_item,
    STATE(487), 1,
      sym_annotation,
    STATE(831), 1,
      sym_memory_modifiers,
    ACTIONS(272), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(207), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(36), 13,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      aux_sym__class_repeat1,
  [2727] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_memory,
    ACTIONS(195), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_uses,
    ACTIONS(203), 1,
      anon_sym_const,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_type,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    STATE(336), 1,
      sym__variable_item,
    STATE(487), 1,
      sym_annotation,
    STATE(831), 1,
      sym_memory_modifiers,
    ACTIONS(276), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(207), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(34), 13,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      aux_sym__class_repeat1,
  [2786] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_memory,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(217), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_uses,
    ACTIONS(223), 1,
      anon_sym_const,
    ACTIONS(227), 1,
      anon_sym_type,
    ACTIONS(278), 1,
      anon_sym_LPAREN,
    STATE(409), 1,
      sym__variable_item,
    STATE(480), 1,
      sym_annotation,
    STATE(851), 1,
      sym_memory_modifiers,
    ACTIONS(197), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(225), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(46), 13,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      aux_sym__class_repeat1,
  [2845] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_memory,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(217), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_uses,
    ACTIONS(223), 1,
      anon_sym_const,
    ACTIONS(227), 1,
      anon_sym_type,
    STATE(409), 1,
      sym__variable_item,
    STATE(480), 1,
      sym_annotation,
    STATE(851), 1,
      sym_memory_modifiers,
    ACTIONS(264), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(225), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(56), 13,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      aux_sym__class_repeat1,
  [2901] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_memory,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(217), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_uses,
    ACTIONS(223), 1,
      anon_sym_const,
    ACTIONS(227), 1,
      anon_sym_type,
    STATE(409), 1,
      sym__variable_item,
    STATE(480), 1,
      sym_annotation,
    STATE(851), 1,
      sym_memory_modifiers,
    ACTIONS(235), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(225), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(54), 13,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      aux_sym__class_repeat1,
  [2957] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_DOT,
    STATE(132), 1,
      sym_enum_variant_list,
    STATE(177), 1,
      sym__type_identifier,
    STATE(192), 1,
      sym__enum_type,
    STATE(196), 1,
      sym__function_type,
    STATE(200), 1,
      sym__set_type,
    STATE(201), 1,
      sym__pointer_type,
    STATE(202), 1,
      sym__record_type,
    STATE(756), 1,
      sym_enum_derived,
    ACTIONS(284), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(292), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    ACTIONS(288), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(98), 8,
      sym__type,
      sym__variable_type,
      sym_reference,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
  [3021] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      anon_sym_DOT,
    STATE(104), 1,
      sym_enum_variant_list,
    STATE(112), 1,
      sym__type_identifier,
    STATE(117), 1,
      sym__function_type,
    STATE(142), 1,
      sym__record_type,
    STATE(143), 1,
      sym__pointer_type,
    STATE(144), 1,
      sym__set_type,
    STATE(147), 1,
      sym__enum_type,
    STATE(752), 1,
      sym_enum_derived,
    ACTIONS(298), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(306), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    ACTIONS(302), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(59), 8,
      sym__type,
      sym__variable_type,
      sym_reference,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
  [3085] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_memory,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(217), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_uses,
    ACTIONS(223), 1,
      anon_sym_const,
    ACTIONS(227), 1,
      anon_sym_type,
    STATE(409), 1,
      sym__variable_item,
    STATE(480), 1,
      sym_annotation,
    STATE(851), 1,
      sym_memory_modifiers,
    ACTIONS(268), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(225), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(56), 13,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      aux_sym__class_repeat1,
  [3141] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_DOT,
    STATE(132), 1,
      sym_enum_variant_list,
    STATE(177), 1,
      sym__type_identifier,
    STATE(192), 1,
      sym__enum_type,
    STATE(196), 1,
      sym__function_type,
    STATE(200), 1,
      sym__set_type,
    STATE(201), 1,
      sym__pointer_type,
    STATE(202), 1,
      sym__record_type,
    STATE(756), 1,
      sym_enum_derived,
    ACTIONS(284), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(292), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    ACTIONS(288), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(90), 8,
      sym__type,
      sym__variable_type,
      sym_reference,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
  [3205] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(308), 1,
      sym_identifier,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DOT,
    STATE(110), 1,
      sym_enum_variant_list,
    STATE(125), 1,
      sym__type_identifier,
    STATE(148), 1,
      sym__pointer_type,
    STATE(165), 1,
      sym__function_type,
    STATE(167), 1,
      sym__enum_type,
    STATE(168), 1,
      sym__set_type,
    STATE(169), 1,
      sym__record_type,
    STATE(685), 1,
      sym_enum_derived,
    ACTIONS(312), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(320), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    ACTIONS(316), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(69), 8,
      sym__type,
      sym__variable_type,
      sym_reference,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
  [3269] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      anon_sym_DOT,
    STATE(104), 1,
      sym_enum_variant_list,
    STATE(112), 1,
      sym__type_identifier,
    STATE(117), 1,
      sym__function_type,
    STATE(142), 1,
      sym__record_type,
    STATE(143), 1,
      sym__pointer_type,
    STATE(144), 1,
      sym__set_type,
    STATE(147), 1,
      sym__enum_type,
    STATE(752), 1,
      sym_enum_derived,
    ACTIONS(298), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(306), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    ACTIONS(302), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(58), 8,
      sym__type,
      sym__variable_type,
      sym_reference,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
  [3333] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(308), 1,
      sym_identifier,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DOT,
    STATE(110), 1,
      sym_enum_variant_list,
    STATE(125), 1,
      sym__type_identifier,
    STATE(148), 1,
      sym__pointer_type,
    STATE(165), 1,
      sym__function_type,
    STATE(167), 1,
      sym__enum_type,
    STATE(168), 1,
      sym__set_type,
    STATE(169), 1,
      sym__record_type,
    STATE(685), 1,
      sym_enum_derived,
    ACTIONS(312), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(320), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    ACTIONS(316), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(68), 8,
      sym__type,
      sym__variable_type,
      sym_reference,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
  [3397] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_memory,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(217), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_uses,
    ACTIONS(223), 1,
      anon_sym_const,
    ACTIONS(227), 1,
      anon_sym_type,
    STATE(409), 1,
      sym__variable_item,
    STATE(480), 1,
      sym_annotation,
    STATE(851), 1,
      sym_memory_modifiers,
    ACTIONS(231), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(225), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(56), 13,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      aux_sym__class_repeat1,
  [3453] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_memory,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(217), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_uses,
    ACTIONS(223), 1,
      anon_sym_const,
    ACTIONS(227), 1,
      anon_sym_type,
    STATE(409), 1,
      sym__variable_item,
    STATE(480), 1,
      sym_annotation,
    STATE(851), 1,
      sym_memory_modifiers,
    ACTIONS(276), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(225), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(51), 13,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      aux_sym__class_repeat1,
  [3509] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_LBRACK,
    ACTIONS(304), 1,
      anon_sym_DOT,
    STATE(104), 1,
      sym_enum_variant_list,
    STATE(112), 1,
      sym__type_identifier,
    STATE(117), 1,
      sym__function_type,
    STATE(142), 1,
      sym__record_type,
    STATE(143), 1,
      sym__pointer_type,
    STATE(144), 1,
      sym__set_type,
    STATE(147), 1,
      sym__enum_type,
    STATE(752), 1,
      sym_enum_derived,
    ACTIONS(298), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(306), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    ACTIONS(302), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(60), 8,
      sym__type,
      sym__variable_type,
      sym_reference,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
  [3573] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_memory,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(217), 1,
      sym_identifier,
    ACTIONS(221), 1,
      anon_sym_uses,
    ACTIONS(223), 1,
      anon_sym_const,
    ACTIONS(227), 1,
      anon_sym_type,
    STATE(409), 1,
      sym__variable_item,
    STATE(480), 1,
      sym_annotation,
    STATE(851), 1,
      sym_memory_modifiers,
    ACTIONS(272), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(225), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(56), 13,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      aux_sym__class_repeat1,
  [3629] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(308), 1,
      sym_identifier,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_DOT,
    STATE(110), 1,
      sym_enum_variant_list,
    STATE(125), 1,
      sym__type_identifier,
    STATE(148), 1,
      sym__pointer_type,
    STATE(165), 1,
      sym__function_type,
    STATE(167), 1,
      sym__enum_type,
    STATE(168), 1,
      sym__set_type,
    STATE(169), 1,
      sym__record_type,
    STATE(685), 1,
      sym_enum_derived,
    ACTIONS(312), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(320), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    ACTIONS(316), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(66), 8,
      sym__type,
      sym__variable_type,
      sym_reference,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
  [3693] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(250), 1,
      anon_sym_memory,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(325), 1,
      anon_sym_uses,
    ACTIONS(328), 1,
      anon_sym_const,
    ACTIONS(334), 1,
      anon_sym_type,
    STATE(409), 1,
      sym__variable_item,
    STATE(480), 1,
      sym_annotation,
    STATE(851), 1,
      sym_memory_modifiers,
    ACTIONS(242), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(331), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(56), 13,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      aux_sym__class_repeat1,
  [3749] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(280), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      anon_sym_LBRACK,
    ACTIONS(290), 1,
      anon_sym_DOT,
    STATE(132), 1,
      sym_enum_variant_list,
    STATE(177), 1,
      sym__type_identifier,
    STATE(192), 1,
      sym__enum_type,
    STATE(196), 1,
      sym__function_type,
    STATE(200), 1,
      sym__set_type,
    STATE(201), 1,
      sym__pointer_type,
    STATE(202), 1,
      sym__record_type,
    STATE(756), 1,
      sym_enum_derived,
    ACTIONS(284), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(292), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    ACTIONS(288), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(93), 8,
      sym__type,
      sym__variable_type,
      sym_reference,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
  [3813] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(341), 1,
      anon_sym_inverse,
    ACTIONS(343), 1,
      anon_sym_absolute,
    STATE(267), 1,
      sym_variable_modifiers,
    ACTIONS(337), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(345), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(347), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(86), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(339), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [3859] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(341), 1,
      anon_sym_inverse,
    ACTIONS(343), 1,
      anon_sym_absolute,
    STATE(248), 1,
      sym_variable_modifiers,
    ACTIONS(345), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(347), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(349), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(86), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(351), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [3905] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(341), 1,
      anon_sym_inverse,
    ACTIONS(343), 1,
      anon_sym_absolute,
    STATE(299), 1,
      sym_variable_modifiers,
    ACTIONS(345), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(347), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(353), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(86), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(355), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [3951] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_forward,
    ACTIONS(39), 1,
      anon_sym_external,
    ACTIONS(89), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(658), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(91), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(380), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [4008] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(23), 1,
      anon_sym_external,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(105), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(606), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(107), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(435), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [4065] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_forward,
    ACTIONS(39), 1,
      anon_sym_external,
    ACTIONS(357), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(658), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(359), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(383), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [4122] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(23), 1,
      anon_sym_external,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(361), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(606), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(363), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(447), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [4179] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_forward,
    ACTIONS(39), 1,
      anon_sym_external,
    ACTIONS(365), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(658), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(367), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(377), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [4236] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(369), 1,
      anon_sym_inverse,
    ACTIONS(371), 1,
      anon_sym_absolute,
    STATE(390), 1,
      sym_variable_modifiers,
    ACTIONS(337), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(373), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(375), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(91), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(339), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [4281] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_forward,
    ACTIONS(39), 1,
      anon_sym_external,
    ACTIONS(377), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(658), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(379), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(391), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [4338] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(369), 1,
      anon_sym_inverse,
    ACTIONS(371), 1,
      anon_sym_absolute,
    STATE(378), 1,
      sym_variable_modifiers,
    ACTIONS(353), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(373), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(375), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(91), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(355), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [4383] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(369), 1,
      anon_sym_inverse,
    ACTIONS(371), 1,
      anon_sym_absolute,
    STATE(328), 1,
      sym_variable_modifiers,
    ACTIONS(349), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(373), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(375), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(91), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(351), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [4428] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(43), 1,
      anon_sym_forward,
    ACTIONS(47), 1,
      anon_sym_external,
    ACTIONS(381), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(628), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(383), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(262), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [4485] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_forward,
    ACTIONS(39), 1,
      anon_sym_external,
    ACTIONS(97), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(658), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(99), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(358), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [4542] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(43), 1,
      anon_sym_forward,
    ACTIONS(47), 1,
      anon_sym_external,
    ACTIONS(101), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(628), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(264), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [4599] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(43), 1,
      anon_sym_forward,
    ACTIONS(47), 1,
      anon_sym_external,
    ACTIONS(385), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(628), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(387), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(266), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [4656] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(23), 1,
      anon_sym_external,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(85), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(606), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(87), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(422), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [4713] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(23), 1,
      anon_sym_external,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(389), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(606), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(391), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(442), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [4770] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_forward,
    ACTIONS(39), 1,
      anon_sym_external,
    ACTIONS(393), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(658), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(395), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(394), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [4827] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(43), 1,
      anon_sym_forward,
    ACTIONS(47), 1,
      anon_sym_external,
    ACTIONS(113), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(628), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(115), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(298), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [4884] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(43), 1,
      anon_sym_forward,
    ACTIONS(47), 1,
      anon_sym_external,
    ACTIONS(397), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(628), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(399), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(301), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [4941] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(23), 1,
      anon_sym_external,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(401), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(606), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(403), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(437), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [4998] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_forward,
    ACTIONS(39), 1,
      anon_sym_external,
    ACTIONS(129), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(658), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(131), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(375), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [5055] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(43), 1,
      anon_sym_forward,
    ACTIONS(47), 1,
      anon_sym_external,
    ACTIONS(405), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(628), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(407), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(284), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [5112] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_forward,
    ACTIONS(39), 1,
      anon_sym_external,
    ACTIONS(121), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(658), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(123), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(341), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [5169] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(23), 1,
      anon_sym_external,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(109), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(606), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(111), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(443), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [5226] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(413), 1,
      anon_sym_inverse,
    ACTIONS(416), 1,
      anon_sym_absolute,
    ACTIONS(409), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(419), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(422), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(84), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(411), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5269] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(23), 1,
      anon_sym_external,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(425), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(606), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(427), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(440), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [5326] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(341), 1,
      anon_sym_inverse,
    ACTIONS(343), 1,
      anon_sym_absolute,
    ACTIONS(347), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(429), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(433), 2,
      anon_sym_final,
      anon_sym_override,
    STATE(84), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(431), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5369] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(19), 1,
      anon_sym_forward,
    ACTIONS(23), 1,
      anon_sym_external,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(117), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(606), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(119), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(436), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [5426] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(43), 1,
      anon_sym_forward,
    ACTIONS(47), 1,
      anon_sym_external,
    ACTIONS(125), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(628), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(127), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(259), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [5483] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(43), 1,
      anon_sym_forward,
    ACTIONS(47), 1,
      anon_sym_external,
    ACTIONS(93), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(628), 1,
      sym_function_body_statements,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(95), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(150), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(303), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [5540] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(337), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      anon_sym_inverse,
    ACTIONS(437), 1,
      anon_sym_absolute,
    STATE(444), 1,
      sym_variable_modifiers,
    ACTIONS(439), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(441), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(101), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(339), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5584] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(369), 1,
      anon_sym_inverse,
    ACTIONS(371), 1,
      anon_sym_absolute,
    ACTIONS(375), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(429), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(443), 2,
      anon_sym_final,
      anon_sym_override,
    STATE(92), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(431), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5626] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(445), 1,
      anon_sym_inverse,
    ACTIONS(448), 1,
      anon_sym_absolute,
    ACTIONS(409), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(451), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(454), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(92), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(411), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5668] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      anon_sym_inverse,
    ACTIONS(437), 1,
      anon_sym_absolute,
    STATE(439), 1,
      sym_variable_modifiers,
    ACTIONS(439), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(441), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(101), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(351), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5712] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      anon_sym_return,
    STATE(105), 1,
      sym_function_parameters,
    STATE(121), 1,
      sym_function_return_type,
    ACTIONS(457), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(459), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [5752] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(465), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_LPAREN,
    ACTIONS(469), 1,
      anon_sym_LBRACK,
    ACTIONS(473), 1,
      anon_sym_DOT,
    STATE(362), 1,
      sym_enum_variant_list,
    STATE(418), 1,
      sym__type_identifier,
    STATE(468), 1,
      sym__record_type,
    STATE(471), 1,
      sym__pointer_type,
    STATE(472), 1,
      sym__set_type,
    STATE(473), 1,
      sym__enum_type,
    STATE(474), 1,
      sym__function_type,
    STATE(744), 1,
      sym_enum_derived,
    ACTIONS(475), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    ACTIONS(471), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(209), 6,
      sym__type,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
  [5810] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(465), 1,
      sym_identifier,
    ACTIONS(467), 1,
      anon_sym_LPAREN,
    ACTIONS(469), 1,
      anon_sym_LBRACK,
    ACTIONS(473), 1,
      anon_sym_DOT,
    STATE(362), 1,
      sym_enum_variant_list,
    STATE(418), 1,
      sym__type_identifier,
    STATE(468), 1,
      sym__record_type,
    STATE(471), 1,
      sym__pointer_type,
    STATE(472), 1,
      sym__set_type,
    STATE(473), 1,
      sym__enum_type,
    STATE(474), 1,
      sym__function_type,
    STATE(744), 1,
      sym_enum_derived,
    ACTIONS(475), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    ACTIONS(471), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(205), 6,
      sym__type,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
  [5868] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(477), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
    ACTIONS(479), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [5900] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(353), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      anon_sym_inverse,
    ACTIONS(437), 1,
      anon_sym_absolute,
    STATE(441), 1,
      sym_variable_modifiers,
    ACTIONS(439), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(441), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(101), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(355), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5944] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    ACTIONS(483), 1,
      anon_sym_return,
    STATE(111), 1,
      sym_function_parameters,
    STATE(175), 1,
      sym_function_return_type,
    ACTIONS(457), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(459), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [5983] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(409), 1,
      anon_sym_LBRACK,
    ACTIONS(485), 1,
      anon_sym_inverse,
    ACTIONS(488), 1,
      anon_sym_absolute,
    ACTIONS(491), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(494), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(100), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(411), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [6024] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(429), 1,
      anon_sym_LBRACK,
    ACTIONS(435), 1,
      anon_sym_inverse,
    ACTIONS(437), 1,
      anon_sym_absolute,
    ACTIONS(441), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(497), 2,
      anon_sym_final,
      anon_sym_override,
    STATE(100), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(431), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [6065] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(457), 1,
      anon_sym_LBRACK,
    ACTIONS(499), 1,
      anon_sym_LPAREN,
    ACTIONS(501), 1,
      anon_sym_return,
    STATE(129), 1,
      sym_function_parameters,
    STATE(198), 1,
      sym_function_return_type,
    ACTIONS(459), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6103] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(507), 1,
      anon_sym_multiLang,
    STATE(128), 1,
      sym_enum_modifiers,
    ACTIONS(503), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(505), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6137] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(507), 1,
      anon_sym_multiLang,
    STATE(137), 1,
      sym_enum_modifiers,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(511), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6171] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(463), 1,
      anon_sym_return,
    STATE(134), 1,
      sym_function_return_type,
    ACTIONS(513), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(515), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6205] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(517), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(519), 19,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6234] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(521), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(523), 19,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6263] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(525), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(527), 19,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6292] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(529), 1,
      anon_sym_multiLang,
    STATE(157), 1,
      sym_enum_modifiers,
    ACTIONS(503), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(505), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6325] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(529), 1,
      anon_sym_multiLang,
    STATE(172), 1,
      sym_enum_modifiers,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(511), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6358] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(483), 1,
      anon_sym_return,
    STATE(162), 1,
      sym_function_return_type,
    ACTIONS(513), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(515), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6391] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(535), 1,
      anon_sym_PLUS,
    ACTIONS(531), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(533), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6422] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(537), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(539), 19,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_return,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6451] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(541), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(543), 19,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_return,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6480] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(545), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(547), 19,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_return,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6509] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(521), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(523), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6537] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(549), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(551), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6565] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(553), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(555), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6593] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(477), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_PLUS,
    ACTIONS(479), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6621] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(557), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(559), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6649] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(561), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(563), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6677] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(565), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(567), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6705] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(503), 1,
      anon_sym_LBRACK,
    ACTIONS(569), 1,
      anon_sym_multiLang,
    STATE(186), 1,
      sym_enum_modifiers,
    ACTIONS(505), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6737] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(571), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(573), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6765] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(535), 1,
      anon_sym_PLUS,
    ACTIONS(531), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(533), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6795] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(575), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(577), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6823] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(525), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(527), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6851] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(579), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(581), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6879] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(501), 1,
      anon_sym_return,
    ACTIONS(513), 1,
      anon_sym_LBRACK,
    STATE(189), 1,
      sym_function_return_type,
    ACTIONS(515), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6911] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(583), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(585), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6939] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(587), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(589), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6967] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(509), 1,
      anon_sym_LBRACK,
    ACTIONS(569), 1,
      anon_sym_multiLang,
    STATE(191), 1,
      sym_enum_modifiers,
    ACTIONS(511), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6999] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(591), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(593), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7027] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(595), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(597), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7055] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(599), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(601), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7083] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(603), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(605), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7111] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(607), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(609), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7139] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(611), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(613), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7167] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(541), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(543), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_return,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7195] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(617), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7223] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(537), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(539), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_return,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7251] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(619), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(621), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7279] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(623), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(625), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7307] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(627), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(629), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7335] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(545), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(547), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_return,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7363] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(517), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(519), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7391] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(631), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(633), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7419] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(623), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(625), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7446] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(565), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(567), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7473] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_uses,
    ACTIONS(17), 1,
      anon_sym_type,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(635), 1,
      anon_sym_end,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(637), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(170), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [7516] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(545), 1,
      anon_sym_LBRACK,
    ACTIONS(547), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_return,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7543] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(541), 1,
      anon_sym_LBRACK,
    ACTIONS(543), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_return,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7570] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(537), 1,
      anon_sym_LBRACK,
    ACTIONS(539), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_return,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7597] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(521), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7624] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(525), 1,
      anon_sym_LBRACK,
    ACTIONS(527), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7651] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(517), 1,
      anon_sym_LBRACK,
    ACTIONS(519), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7678] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(579), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(581), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7705] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(553), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(555), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7732] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(583), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(585), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7759] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(587), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(589), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7786] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(591), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(593), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7813] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(595), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(597), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7840] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(599), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(601), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7867] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(611), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(613), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7894] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(549), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(551), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7921] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(617), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7948] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(631), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(633), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7975] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(627), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(629), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8002] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(619), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(621), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8029] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(639), 1,
      anon_sym_end,
    ACTIONS(641), 1,
      anon_sym_uses,
    ACTIONS(644), 1,
      anon_sym_LBRACK,
    ACTIONS(647), 1,
      anon_sym_type,
    ACTIONS(652), 1,
      anon_sym_var,
    STATE(528), 1,
      sym_declaration_statement,
    STATE(780), 1,
      sym_annotation,
    ACTIONS(650), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(170), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(517), 8,
      sym_uses_item,
      sym__type_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
  [8072] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(575), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(577), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8099] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(607), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(609), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8126] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(603), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(605), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8153] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(557), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(559), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8180] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(561), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(563), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8207] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(477), 2,
      anon_sym_LBRACK,
      anon_sym_PLUS,
    ACTIONS(479), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8234] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(531), 1,
      anon_sym_LBRACK,
    ACTIONS(535), 1,
      anon_sym_PLUS,
    ACTIONS(533), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8263] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(571), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(573), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8290] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(603), 1,
      anon_sym_LBRACK,
    ACTIONS(605), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8316] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    ACTIONS(593), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8342] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(583), 1,
      anon_sym_LBRACK,
    ACTIONS(585), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8368] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(655), 1,
      anon_sym_LPAREN,
    ACTIONS(657), 1,
      anon_sym_return,
    STATE(222), 1,
      sym_function_parameters,
    STATE(253), 1,
      sym_function_return_type,
    ACTIONS(457), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(459), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [8402] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(659), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
    ACTIONS(661), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [8428] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACK,
    ACTIONS(617), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8454] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(553), 1,
      anon_sym_LBRACK,
    ACTIONS(555), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8480] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    ACTIONS(581), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8506] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(587), 1,
      anon_sym_LBRACK,
    ACTIONS(589), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8532] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(575), 1,
      anon_sym_LBRACK,
    ACTIONS(577), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8558] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(597), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8584] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(599), 1,
      anon_sym_LBRACK,
    ACTIONS(601), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8610] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACK,
    ACTIONS(609), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8636] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(631), 1,
      anon_sym_LBRACK,
    ACTIONS(633), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8662] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(571), 1,
      anon_sym_LBRACK,
    ACTIONS(573), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8688] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(557), 1,
      anon_sym_LBRACK,
    ACTIONS(559), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8714] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(565), 1,
      anon_sym_LBRACK,
    ACTIONS(567), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8740] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(549), 1,
      anon_sym_LBRACK,
    ACTIONS(551), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8766] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(611), 1,
      anon_sym_LBRACK,
    ACTIONS(613), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8792] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(561), 1,
      anon_sym_LBRACK,
    ACTIONS(563), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8818] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(663), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
    ACTIONS(665), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [8844] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(627), 1,
      anon_sym_LBRACK,
    ACTIONS(629), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8870] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(623), 1,
      anon_sym_LBRACK,
    ACTIONS(625), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8896] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(619), 1,
      anon_sym_LBRACK,
    ACTIONS(621), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8922] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(667), 1,
      sym_identifier,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    ACTIONS(671), 1,
      anon_sym_SQUOTE,
    ACTIONS(673), 1,
      anon_sym_LBRACE,
    ACTIONS(675), 1,
      sym__integer_literal,
    STATE(212), 1,
      sym__string_literal,
    STATE(733), 3,
      sym_annotation_attribute_list,
      sym__inner_annotation,
      sym__literal,
    ACTIONS(677), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(213), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [8961] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(679), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(681), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [8986] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(685), 1,
      anon_sym_LBRACK,
    ACTIONS(687), 1,
      anon_sym_inverse,
    ACTIONS(689), 1,
      anon_sym_absolute,
    STATE(573), 1,
      sym_variable_modifiers,
    ACTIONS(691), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(693), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(683), 4,
      sym_identifier,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
    STATE(214), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
  [9023] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(695), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(697), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9048] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(699), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(701), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9073] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(703), 1,
      anon_sym_LPAREN,
    ACTIONS(705), 1,
      anon_sym_return,
    STATE(233), 1,
      sym_function_parameters,
    STATE(331), 1,
      sym_function_return_type,
    ACTIONS(457), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(459), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9106] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(687), 1,
      anon_sym_inverse,
    ACTIONS(689), 1,
      anon_sym_absolute,
    ACTIONS(709), 1,
      anon_sym_LBRACK,
    STATE(560), 1,
      sym_variable_modifiers,
    ACTIONS(691), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(693), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(707), 4,
      sym_identifier,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
    STATE(214), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
  [9143] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(711), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(713), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9168] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(715), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(717), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9193] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(719), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(721), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9218] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(723), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(725), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9243] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(429), 1,
      anon_sym_LBRACK,
    ACTIONS(687), 1,
      anon_sym_inverse,
    ACTIONS(689), 1,
      anon_sym_absolute,
    ACTIONS(693), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(727), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(431), 4,
      sym_identifier,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
    STATE(217), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
  [9277] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(733), 1,
      anon_sym_multiLang,
    STATE(311), 1,
      sym_const_modifiers,
    ACTIONS(729), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(731), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9305] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(735), 1,
      anon_sym_multiLang,
    STATE(312), 1,
      sym_enum_modifiers,
    ACTIONS(503), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(505), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9333] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(409), 1,
      anon_sym_LBRACK,
    ACTIONS(737), 1,
      anon_sym_inverse,
    ACTIONS(740), 1,
      anon_sym_absolute,
    ACTIONS(743), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(746), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(411), 4,
      sym_identifier,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
    STATE(217), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
  [9367] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(753), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(749), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(751), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9395] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(457), 1,
      anon_sym_LBRACK,
    ACTIONS(756), 1,
      anon_sym_LPAREN,
    ACTIONS(758), 1,
      anon_sym_return,
    STATE(256), 1,
      sym_function_parameters,
    STATE(413), 1,
      sym_function_return_type,
    ACTIONS(459), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9427] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(735), 1,
      anon_sym_multiLang,
    STATE(282), 1,
      sym_enum_modifiers,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(511), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9455] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(733), 1,
      anon_sym_multiLang,
    STATE(263), 1,
      sym_const_modifiers,
    ACTIONS(760), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(762), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9483] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(657), 1,
      anon_sym_return,
    STATE(308), 1,
      sym_function_return_type,
    ACTIONS(513), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(515), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9511] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(764), 1,
      anon_sym_end,
    ACTIONS(31), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(768), 2,
      anon_sym_final,
      anon_sym_override,
    STATE(225), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    ACTIONS(766), 8,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
  [9541] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(770), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(772), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9569] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(776), 1,
      anon_sym_end,
    ACTIONS(780), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(783), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(225), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    ACTIONS(778), 8,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
  [9599] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(786), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(788), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9627] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(790), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(749), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(751), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9654] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(793), 1,
      anon_sym_multiLang,
    STATE(338), 1,
      sym_enum_modifiers,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(511), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9681] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(795), 1,
      anon_sym_multiLang,
    STATE(373), 1,
      sym_const_modifiers,
    ACTIONS(729), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(731), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9708] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(517), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(519), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9731] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(537), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(539), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_return,
  [9754] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(457), 1,
      anon_sym_LBRACK,
    ACTIONS(797), 1,
      anon_sym_LPAREN,
    ACTIONS(799), 1,
      anon_sym_return,
    STATE(363), 1,
      sym_function_parameters,
    STATE(461), 1,
      sym_function_return_type,
    ACTIONS(459), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [9785] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(705), 1,
      anon_sym_return,
    STATE(344), 1,
      sym_function_return_type,
    ACTIONS(513), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(515), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9812] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(770), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(772), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9839] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(795), 1,
      anon_sym_multiLang,
    STATE(395), 1,
      sym_const_modifiers,
    ACTIONS(760), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(762), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9866] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(749), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(751), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9889] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(786), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(788), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9916] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(793), 1,
      anon_sym_multiLang,
    STATE(354), 1,
      sym_enum_modifiers,
    ACTIONS(503), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(505), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9943] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(521), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(523), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [9966] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(541), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(543), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_return,
  [9989] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(545), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(547), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_return,
  [10012] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(525), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(527), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10035] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(803), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(805), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10057] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(807), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(809), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10079] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(679), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(681), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10101] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(659), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(661), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10123] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(711), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(713), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10145] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(811), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(813), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10167] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(715), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(717), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10189] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(770), 1,
      anon_sym_LBRACK,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    STATE(252), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(772), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10215] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(663), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(665), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10237] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(786), 1,
      anon_sym_LBRACK,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    STATE(288), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(788), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10263] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(561), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(563), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10285] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(503), 1,
      anon_sym_LBRACK,
    ACTIONS(817), 1,
      anon_sym_multiLang,
    STATE(404), 1,
      sym_enum_modifiers,
    ACTIONS(505), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10311] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(543), 1,
      anon_sym_end,
    ACTIONS(541), 13,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
      anon_sym_return,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10333] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(513), 1,
      anon_sym_LBRACK,
    ACTIONS(758), 1,
      anon_sym_return,
    STATE(406), 1,
      sym_function_return_type,
    ACTIONS(515), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10359] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(509), 1,
      anon_sym_LBRACK,
    ACTIONS(817), 1,
      anon_sym_multiLang,
    STATE(408), 1,
      sym_enum_modifiers,
    ACTIONS(511), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10385] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(565), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(567), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10407] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(819), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(821), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10429] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(823), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(825), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10451] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(827), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(829), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10473] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(831), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(833), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10495] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(835), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(837), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10517] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(839), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(841), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10539] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(843), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(845), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10561] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(847), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(849), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10583] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(851), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(853), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10605] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(571), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(573), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10627] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(545), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(547), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_return,
  [10649] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(541), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(543), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_return,
  [10671] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(537), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(539), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_return,
  [10693] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(603), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(605), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10715] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(855), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(857), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10737] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(859), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(861), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10759] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(477), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(479), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10781] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(521), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(523), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10803] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(863), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(865), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10825] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(525), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(527), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10847] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(867), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(869), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10869] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(547), 1,
      anon_sym_end,
    ACTIONS(545), 13,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
      anon_sym_return,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10891] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(871), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(873), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10913] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(607), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(609), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10935] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(723), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(725), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10957] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(875), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(877), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [10979] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(517), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(519), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11001] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(617), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11023] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(719), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(721), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11045] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(749), 1,
      anon_sym_LBRACK,
    ACTIONS(879), 1,
      anon_sym_COMMA,
    STATE(288), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(751), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11071] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(882), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(884), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11093] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(886), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(888), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11115] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(890), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(892), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11137] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(699), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(701), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11159] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(894), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(896), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11181] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(898), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(900), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11203] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(902), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(904), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11225] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(906), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(908), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11247] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(882), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(884), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11269] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(910), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(912), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11291] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(914), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(916), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11313] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(695), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(697), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11335] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(918), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(920), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11357] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(749), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(751), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11379] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(922), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(924), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11401] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(729), 1,
      anon_sym_LBRACK,
    ACTIONS(926), 1,
      anon_sym_multiLang,
    STATE(432), 1,
      sym_const_modifiers,
    ACTIONS(731), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11427] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(928), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(930), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11449] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(932), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(934), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11471] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(599), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(601), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11493] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(595), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(597), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11515] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(539), 1,
      anon_sym_end,
    ACTIONS(537), 13,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
      anon_sym_return,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [11537] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(591), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(593), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11559] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(936), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(938), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11581] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(579), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(581), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11603] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(760), 1,
      anon_sym_LBRACK,
    ACTIONS(926), 1,
      anon_sym_multiLang,
    STATE(426), 1,
      sym_const_modifiers,
    ACTIONS(762), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11629] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(940), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(942), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11651] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(553), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(555), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11673] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(928), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(930), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11694] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(659), 1,
      anon_sym_LBRACK,
    ACTIONS(661), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11715] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(663), 1,
      anon_sym_LBRACK,
    ACTIONS(665), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11736] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(932), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(934), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11757] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(679), 1,
      anon_sym_LBRACK,
    ACTIONS(681), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11778] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(944), 1,
      anon_sym_LPAREN,
    ACTIONS(946), 1,
      anon_sym_LBRACK,
    ACTIONS(948), 1,
      anon_sym_DOT,
    STATE(491), 1,
      sym_enum_variant_list,
    STATE(510), 1,
      sym__pointer_type,
    STATE(512), 1,
      sym__record_type,
    STATE(522), 1,
      sym__enum_type,
    STATE(530), 1,
      sym__set_type,
    STATE(729), 1,
      sym_enum_derived,
    STATE(808), 1,
      sym__type_identifier,
    ACTIONS(950), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
  [11819] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(711), 1,
      anon_sym_LBRACK,
    ACTIONS(713), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11840] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_SQUOTE,
    ACTIONS(673), 1,
      anon_sym_LBRACE,
    ACTIONS(675), 1,
      sym__integer_literal,
    STATE(212), 1,
      sym__string_literal,
    STATE(215), 1,
      sym__literal,
    ACTIONS(952), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(213), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [11871] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(715), 1,
      anon_sym_LBRACK,
    ACTIONS(717), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [11892] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(954), 1,
      anon_sym_SQUOTE,
    ACTIONS(956), 1,
      anon_sym_LBRACE,
    ACTIONS(958), 1,
      sym__integer_literal,
    STATE(313), 1,
      sym__literal,
    STATE(330), 1,
      sym__string_literal,
    ACTIONS(960), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(329), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [11923] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(577), 1,
      anon_sym_end,
    ACTIONS(575), 12,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [11944] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(944), 1,
      anon_sym_LPAREN,
    ACTIONS(946), 1,
      anon_sym_LBRACK,
    ACTIONS(948), 1,
      anon_sym_DOT,
    STATE(491), 1,
      sym_enum_variant_list,
    STATE(537), 1,
      sym__enum_type,
    STATE(538), 1,
      sym__set_type,
    STATE(539), 1,
      sym__pointer_type,
    STATE(540), 1,
      sym__record_type,
    STATE(729), 1,
      sym_enum_derived,
    STATE(808), 1,
      sym__type_identifier,
    ACTIONS(950), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
  [11985] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(811), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(813), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12006] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(723), 1,
      anon_sym_LBRACK,
    ACTIONS(725), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12027] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(719), 1,
      anon_sym_LBRACK,
    ACTIONS(721), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12048] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(561), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(563), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12069] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(699), 1,
      anon_sym_LBRACK,
    ACTIONS(701), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12090] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(565), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(567), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12111] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(695), 1,
      anon_sym_LBRACK,
    ACTIONS(697), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12132] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(571), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(573), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12153] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(859), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(861), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12174] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(603), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(605), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12195] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(607), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(609), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12216] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(599), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(601), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12237] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(749), 2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(751), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12258] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(819), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(821), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12279] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(962), 1,
      anon_sym_LPAREN,
    ACTIONS(964), 1,
      anon_sym_LBRACK,
    ACTIONS(966), 1,
      anon_sym_DOT,
    STATE(220), 1,
      sym_enum_variant_list,
    STATE(291), 1,
      sym__record_type,
    STATE(293), 1,
      sym__pointer_type,
    STATE(294), 1,
      sym__set_type,
    STATE(295), 1,
      sym__enum_type,
    STATE(708), 1,
      sym_enum_derived,
    STATE(808), 1,
      sym__type_identifier,
    ACTIONS(968), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
  [12320] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(823), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(825), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12341] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(595), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(597), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12362] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(591), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(593), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12383] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(827), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(829), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12404] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(843), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(845), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12425] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(807), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(809), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12446] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(855), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(857), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12467] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(863), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(865), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12488] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(867), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(869), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12509] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_SQUOTE,
    ACTIONS(673), 1,
      anon_sym_LBRACE,
    ACTIONS(675), 1,
      sym__integer_literal,
    STATE(212), 1,
      sym__string_literal,
    STATE(221), 1,
      sym__literal,
    ACTIONS(952), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(213), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [12540] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(970), 1,
      anon_sym_SQUOTE,
    ACTIONS(972), 1,
      anon_sym_LBRACE,
    ACTIONS(974), 1,
      sym__integer_literal,
    STATE(235), 1,
      sym__literal,
    STATE(287), 1,
      sym__string_literal,
    ACTIONS(976), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(283), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [12571] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(579), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(581), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12592] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(871), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(873), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12613] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(553), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(555), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12634] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(617), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12655] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(839), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(841), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12676] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(978), 1,
      anon_sym_LPAREN,
    ACTIONS(980), 1,
      anon_sym_LBRACK,
    ACTIONS(982), 1,
      anon_sym_DOT,
    STATE(257), 1,
      sym_enum_variant_list,
    STATE(419), 1,
      sym__enum_type,
    STATE(420), 1,
      sym__set_type,
    STATE(421), 1,
      sym__pointer_type,
    STATE(423), 1,
      sym__record_type,
    STATE(737), 1,
      sym_enum_derived,
    STATE(808), 1,
      sym__type_identifier,
    ACTIONS(984), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
  [12717] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(477), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(479), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12738] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(978), 1,
      anon_sym_LPAREN,
    ACTIONS(980), 1,
      anon_sym_LBRACK,
    ACTIONS(982), 1,
      anon_sym_DOT,
    STATE(257), 1,
      sym_enum_variant_list,
    STATE(396), 1,
      sym__set_type,
    STATE(431), 1,
      sym__enum_type,
    STATE(433), 1,
      sym__pointer_type,
    STATE(434), 1,
      sym__record_type,
    STATE(737), 1,
      sym_enum_derived,
    STATE(808), 1,
      sym__type_identifier,
    ACTIONS(984), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
  [12779] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(509), 1,
      anon_sym_LBRACK,
    ACTIONS(986), 1,
      anon_sym_multiLang,
    STATE(455), 1,
      sym_enum_modifiers,
    ACTIONS(511), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [12804] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(513), 1,
      anon_sym_LBRACK,
    ACTIONS(799), 1,
      anon_sym_return,
    STATE(464), 1,
      sym_function_return_type,
    ACTIONS(515), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [12829] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(503), 1,
      anon_sym_LBRACK,
    ACTIONS(986), 1,
      anon_sym_multiLang,
    STATE(449), 1,
      sym_enum_modifiers,
    ACTIONS(505), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [12854] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(617), 1,
      anon_sym_end,
    ACTIONS(615), 12,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [12875] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(954), 1,
      anon_sym_SQUOTE,
    ACTIONS(956), 1,
      anon_sym_LBRACE,
    ACTIONS(958), 1,
      sym__integer_literal,
    STATE(304), 1,
      sym__literal,
    STATE(330), 1,
      sym__string_literal,
    ACTIONS(960), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(329), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [12906] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(517), 1,
      anon_sym_LBRACK,
    ACTIONS(519), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12927] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(962), 1,
      anon_sym_LPAREN,
    ACTIONS(964), 1,
      anon_sym_LBRACK,
    ACTIONS(966), 1,
      anon_sym_DOT,
    STATE(220), 1,
      sym_enum_variant_list,
    STATE(244), 1,
      sym__enum_type,
    STATE(273), 1,
      sym__set_type,
    STATE(277), 1,
      sym__pointer_type,
    STATE(279), 1,
      sym__record_type,
    STATE(708), 1,
      sym_enum_derived,
    STATE(808), 1,
      sym__type_identifier,
    ACTIONS(968), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
  [12968] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(525), 1,
      anon_sym_LBRACK,
    ACTIONS(527), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [12989] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(479), 1,
      anon_sym_end,
    ACTIONS(477), 12,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [13010] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(521), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13031] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(940), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(942), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13052] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(936), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(938), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13073] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(537), 1,
      anon_sym_LBRACK,
    ACTIONS(539), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_return,
  [13094] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(922), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(924), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13115] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(886), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(888), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13136] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(918), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(920), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13157] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(914), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(916), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13178] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(541), 1,
      anon_sym_LBRACK,
    ACTIONS(543), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_return,
  [13199] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(910), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(912), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13220] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(545), 1,
      anon_sym_LBRACK,
    ACTIONS(547), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
      anon_sym_return,
  [13241] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(906), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(908), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13262] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(875), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(877), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13283] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(970), 1,
      anon_sym_SQUOTE,
    ACTIONS(972), 1,
      anon_sym_LBRACE,
    ACTIONS(974), 1,
      sym__integer_literal,
    STATE(229), 1,
      sym__literal,
    STATE(287), 1,
      sym__string_literal,
    ACTIONS(976), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(283), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [13314] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(803), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(805), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13335] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(902), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(904), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13356] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(898), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(900), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13377] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(894), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(896), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13398] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(890), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(892), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13419] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(851), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(853), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13440] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(847), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(849), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13461] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(988), 1,
      anon_sym_LPAREN,
    ACTIONS(990), 1,
      anon_sym_LBRACK,
    ACTIONS(992), 1,
      anon_sym_DOT,
    STATE(228), 1,
      sym_enum_variant_list,
    STATE(348), 1,
      sym__enum_type,
    STATE(349), 1,
      sym__set_type,
    STATE(350), 1,
      sym__pointer_type,
    STATE(351), 1,
      sym__record_type,
    STATE(745), 1,
      sym_enum_derived,
    STATE(808), 1,
      sym__type_identifier,
    ACTIONS(994), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
  [13502] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(988), 1,
      anon_sym_LPAREN,
    ACTIONS(990), 1,
      anon_sym_LBRACK,
    ACTIONS(992), 1,
      anon_sym_DOT,
    STATE(228), 1,
      sym_enum_variant_list,
    STATE(386), 1,
      sym__enum_type,
    STATE(387), 1,
      sym__set_type,
    STATE(388), 1,
      sym__pointer_type,
    STATE(389), 1,
      sym__record_type,
    STATE(745), 1,
      sym_enum_derived,
    STATE(808), 1,
      sym__type_identifier,
    ACTIONS(994), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
  [13543] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(831), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(833), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13564] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(835), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(837), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13585] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(855), 1,
      anon_sym_LBRACK,
    ACTIONS(857), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13605] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(803), 1,
      anon_sym_LBRACK,
    ACTIONS(805), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13625] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACK,
    ACTIONS(617), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13645] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    ACTIONS(479), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13665] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(545), 1,
      anon_sym_LBRACK,
    ACTIONS(547), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [13685] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(541), 1,
      anon_sym_LBRACK,
    ACTIONS(543), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [13705] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(553), 1,
      anon_sym_LBRACK,
    ACTIONS(555), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13725] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(537), 1,
      anon_sym_LBRACK,
    ACTIONS(539), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [13745] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    ACTIONS(581), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13765] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    ACTIONS(593), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13785] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(597), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13805] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(599), 1,
      anon_sym_LBRACK,
    ACTIONS(601), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13825] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACK,
    ACTIONS(609), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13845] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(859), 1,
      anon_sym_LBRACK,
    ACTIONS(861), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13865] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(603), 1,
      anon_sym_LBRACK,
    ACTIONS(605), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13885] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(571), 1,
      anon_sym_LBRACK,
    ACTIONS(573), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13905] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(565), 1,
      anon_sym_LBRACK,
    ACTIONS(567), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13925] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(561), 1,
      anon_sym_LBRACK,
    ACTIONS(563), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [13945] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(477), 2,
      anon_sym_LBRACK,
      anon_sym_PLUS,
    ACTIONS(479), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [13965] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(521), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_multiLang,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [13985] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(525), 1,
      anon_sym_LBRACK,
    ACTIONS(527), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_multiLang,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [14005] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(517), 1,
      anon_sym_LBRACK,
    ACTIONS(519), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_multiLang,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [14025] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(531), 1,
      anon_sym_LBRACK,
    ACTIONS(535), 1,
      anon_sym_PLUS,
    ACTIONS(533), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [14047] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(902), 1,
      anon_sym_LBRACK,
    ACTIONS(904), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14067] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(898), 1,
      anon_sym_LBRACK,
    ACTIONS(900), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14087] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(894), 1,
      anon_sym_LBRACK,
    ACTIONS(896), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14107] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(819), 1,
      anon_sym_LBRACK,
    ACTIONS(821), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14127] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(890), 1,
      anon_sym_LBRACK,
    ACTIONS(892), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14147] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(823), 1,
      anon_sym_LBRACK,
    ACTIONS(825), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14167] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(932), 1,
      anon_sym_LBRACK,
    ACTIONS(934), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14187] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(835), 1,
      anon_sym_LBRACK,
    ACTIONS(837), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14207] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(940), 1,
      anon_sym_LBRACK,
    ACTIONS(942), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14227] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(928), 1,
      anon_sym_LBRACK,
    ACTIONS(930), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14247] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(827), 1,
      anon_sym_LBRACK,
    ACTIONS(829), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14267] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(843), 1,
      anon_sym_LBRACK,
    ACTIONS(845), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14287] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(807), 1,
      anon_sym_LBRACK,
    ACTIONS(809), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14307] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(936), 1,
      anon_sym_LBRACK,
    ACTIONS(938), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14327] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(863), 1,
      anon_sym_LBRACK,
    ACTIONS(865), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14347] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(867), 1,
      anon_sym_LBRACK,
    ACTIONS(869), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14367] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(839), 1,
      anon_sym_LBRACK,
    ACTIONS(841), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14387] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(922), 1,
      anon_sym_LBRACK,
    ACTIONS(924), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14407] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(875), 1,
      anon_sym_LBRACK,
    ACTIONS(877), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14427] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(871), 1,
      anon_sym_LBRACK,
    ACTIONS(873), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14447] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(811), 1,
      anon_sym_LBRACK,
    ACTIONS(813), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14467] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(918), 1,
      anon_sym_LBRACK,
    ACTIONS(920), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14487] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(914), 1,
      anon_sym_LBRACK,
    ACTIONS(916), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14507] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(847), 1,
      anon_sym_LBRACK,
    ACTIONS(849), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14527] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(910), 1,
      anon_sym_LBRACK,
    ACTIONS(912), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14547] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(851), 1,
      anon_sym_LBRACK,
    ACTIONS(853), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14567] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(906), 1,
      anon_sym_LBRACK,
    ACTIONS(908), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14587] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(886), 1,
      anon_sym_LBRACK,
    ACTIONS(888), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14607] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(831), 1,
      anon_sym_LBRACK,
    ACTIONS(833), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [14627] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(553), 1,
      anon_sym_LBRACK,
    ACTIONS(555), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [14646] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    ACTIONS(581), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [14665] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      sym_identifier,
    ACTIONS(1000), 1,
      anon_sym_LPAREN,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    STATE(481), 1,
      sym_record_derived,
    STATE(612), 1,
      sym_record_variable_list,
    STATE(796), 1,
      sym_annotation,
    STATE(500), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(998), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [14696] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      sym_identifier,
    ACTIONS(1000), 1,
      anon_sym_LPAREN,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    STATE(489), 1,
      sym_record_derived,
    STATE(595), 1,
      sym_record_variable_list,
    STATE(796), 1,
      sym_annotation,
    STATE(500), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1004), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [14727] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      sym_identifier,
    ACTIONS(1000), 1,
      anon_sym_LPAREN,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    STATE(485), 1,
      sym_record_derived,
    STATE(622), 1,
      sym_record_variable_list,
    STATE(796), 1,
      sym_annotation,
    STATE(500), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1006), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [14758] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(599), 1,
      anon_sym_LBRACK,
    ACTIONS(601), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [14777] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(459), 1,
      anon_sym_end,
    STATE(492), 1,
      sym_function_parameters,
    STATE(507), 1,
      sym_function_return_type,
    ACTIONS(457), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [14804] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(607), 1,
      anon_sym_LBRACK,
    ACTIONS(609), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [14823] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(603), 1,
      anon_sym_LBRACK,
    ACTIONS(605), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [14842] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(571), 1,
      anon_sym_LBRACK,
    ACTIONS(573), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [14861] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      sym_identifier,
    ACTIONS(1000), 1,
      anon_sym_LPAREN,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    STATE(478), 1,
      sym_record_derived,
    STATE(627), 1,
      sym_record_variable_list,
    STATE(796), 1,
      sym_annotation,
    STATE(500), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1008), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [14892] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(565), 1,
      anon_sym_LBRACK,
    ACTIONS(567), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [14911] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      sym_identifier,
    ACTIONS(1000), 1,
      anon_sym_LPAREN,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    STATE(482), 1,
      sym_record_derived,
    STATE(623), 1,
      sym_record_variable_list,
    STATE(796), 1,
      sym_annotation,
    STATE(500), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1010), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [14942] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(561), 1,
      anon_sym_LBRACK,
    ACTIONS(563), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [14961] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      sym_identifier,
    ACTIONS(1000), 1,
      anon_sym_LPAREN,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    STATE(488), 1,
      sym_record_derived,
    STATE(660), 1,
      sym_record_variable_list,
    STATE(796), 1,
      sym_annotation,
    STATE(500), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1012), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [14992] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(583), 1,
      anon_sym_LBRACK,
    ACTIONS(585), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [15011] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(595), 1,
      anon_sym_LBRACK,
    ACTIONS(597), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [15030] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(587), 1,
      anon_sym_LBRACK,
    ACTIONS(589), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [15049] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      sym_identifier,
    ACTIONS(1000), 1,
      anon_sym_LPAREN,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    STATE(483), 1,
      sym_record_derived,
    STATE(648), 1,
      sym_record_variable_list,
    STATE(796), 1,
      sym_annotation,
    STATE(500), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1014), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [15080] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      sym_identifier,
    ACTIONS(1000), 1,
      anon_sym_LPAREN,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    STATE(477), 1,
      sym_record_derived,
    STATE(663), 1,
      sym_record_variable_list,
    STATE(796), 1,
      sym_annotation,
    STATE(500), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1016), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [15111] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(619), 1,
      anon_sym_LBRACK,
    ACTIONS(621), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [15130] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(591), 1,
      anon_sym_LBRACK,
    ACTIONS(593), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [15149] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(575), 1,
      anon_sym_LBRACK,
    ACTIONS(577), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [15168] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(623), 1,
      anon_sym_LBRACK,
    ACTIONS(625), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [15187] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(627), 1,
      anon_sym_LBRACK,
    ACTIONS(629), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [15206] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(631), 1,
      anon_sym_LBRACK,
    ACTIONS(633), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [15225] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(549), 1,
      anon_sym_LBRACK,
    ACTIONS(551), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [15244] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_LBRACK,
    ACTIONS(617), 10,
      sym_identifier,
      anon_sym_end,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [15263] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_memory,
    ACTIONS(1018), 1,
      sym_identifier,
    ACTIONS(1020), 1,
      anon_sym_class,
    ACTIONS(1022), 1,
      anon_sym_const,
    ACTIONS(1026), 1,
      anon_sym_type,
    STATE(767), 1,
      sym_memory_modifiers,
    ACTIONS(1024), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15291] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      sym_identifier,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    STATE(670), 1,
      sym_record_variable_list,
    STATE(796), 1,
      sym_annotation,
    STATE(500), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1028), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [15316] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      sym_identifier,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    STATE(640), 1,
      sym_record_variable_list,
    STATE(796), 1,
      sym_annotation,
    STATE(500), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1030), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [15341] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(772), 1,
      anon_sym_end,
    ACTIONS(1032), 1,
      anon_sym_COMMA,
    STATE(490), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(770), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [15362] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_memory,
    ACTIONS(1034), 1,
      sym_identifier,
    ACTIONS(1036), 1,
      anon_sym_const,
    ACTIONS(1040), 1,
      anon_sym_type,
    STATE(856), 1,
      sym_memory_modifiers,
    ACTIONS(1038), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15387] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      sym_identifier,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    STATE(634), 1,
      sym_record_variable_list,
    STATE(796), 1,
      sym_annotation,
    STATE(500), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1042), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [15412] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      sym_identifier,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    STATE(618), 1,
      sym_record_variable_list,
    STATE(796), 1,
      sym_annotation,
    STATE(500), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1044), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [15437] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      sym_identifier,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    STATE(667), 1,
      sym_record_variable_list,
    STATE(796), 1,
      sym_annotation,
    STATE(500), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1046), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [15462] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(751), 1,
      anon_sym_end,
    ACTIONS(1048), 1,
      anon_sym_COMMA,
    STATE(484), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(749), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [15483] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      sym_identifier,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    STATE(641), 1,
      sym_record_variable_list,
    STATE(796), 1,
      sym_annotation,
    STATE(500), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1051), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [15508] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1053), 9,
      sym_identifier,
      anon_sym_class,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [15523] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 1,
      anon_sym_memory,
    ACTIONS(1055), 1,
      sym_identifier,
    ACTIONS(1057), 1,
      anon_sym_const,
    ACTIONS(1061), 1,
      anon_sym_type,
    STATE(838), 1,
      sym_memory_modifiers,
    ACTIONS(1059), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15548] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      sym_identifier,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    STATE(652), 1,
      sym_record_variable_list,
    STATE(796), 1,
      sym_annotation,
    STATE(500), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1063), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [15573] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      sym_identifier,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    STATE(599), 1,
      sym_record_variable_list,
    STATE(796), 1,
      sym_annotation,
    STATE(500), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1065), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [15598] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(788), 1,
      anon_sym_end,
    ACTIONS(1032), 1,
      anon_sym_COMMA,
    STATE(484), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(786), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [15619] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(511), 1,
      anon_sym_end,
    ACTIONS(1067), 1,
      anon_sym_multiLang,
    STATE(513), 1,
      sym_enum_modifiers,
    ACTIONS(509), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [15640] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(515), 1,
      anon_sym_end,
    STATE(520), 1,
      sym_function_return_type,
    ACTIONS(513), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [15661] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1069), 9,
      sym_identifier,
      anon_sym_class,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [15676] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(505), 1,
      anon_sym_end,
    ACTIONS(1067), 1,
      anon_sym_multiLang,
    STATE(523), 1,
      sym_enum_modifiers,
    ACTIONS(503), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [15697] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(523), 1,
      anon_sym_end,
    ACTIONS(521), 7,
      anon_sym_uses,
      anon_sym_multiLang,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [15713] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1053), 8,
      sym_identifier,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [15727] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(751), 1,
      anon_sym_end,
    ACTIONS(749), 7,
      anon_sym_uses,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [15743] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1069), 8,
      sym_identifier,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [15757] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(527), 1,
      anon_sym_end,
    ACTIONS(525), 7,
      anon_sym_uses,
      anon_sym_multiLang,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [15773] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(996), 1,
      sym_identifier,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    STATE(796), 1,
      sym_annotation,
    STATE(502), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1071), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [15795] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(519), 1,
      anon_sym_end,
    ACTIONS(517), 7,
      anon_sym_uses,
      anon_sym_multiLang,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [15811] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1073), 1,
      sym_identifier,
    ACTIONS(1078), 1,
      anon_sym_LBRACK,
    STATE(796), 1,
      sym_annotation,
    STATE(502), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1076), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [15833] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [15854] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    ACTIONS(1087), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [15875] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(805), 1,
      anon_sym_end,
    ACTIONS(803), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [15890] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(567), 1,
      anon_sym_end,
    ACTIONS(565), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [15905] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(563), 1,
      anon_sym_end,
    ACTIONS(561), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [15920] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [15941] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    ACTIONS(1091), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [15962] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(896), 1,
      anon_sym_end,
    ACTIONS(894), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [15977] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    ACTIONS(1093), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [15998] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(892), 1,
      anon_sym_end,
    ACTIONS(890), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [16013] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(609), 1,
      anon_sym_end,
    ACTIONS(607), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [16028] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [16049] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    ACTIONS(1097), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [16070] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(601), 1,
      anon_sym_end,
    ACTIONS(599), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [16085] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1099), 1,
      anon_sym_end,
    ACTIONS(1101), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [16100] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(605), 1,
      anon_sym_end,
    ACTIONS(603), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [16115] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [16136] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(597), 1,
      anon_sym_end,
    ACTIONS(595), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [16151] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(593), 1,
      anon_sym_end,
    ACTIONS(591), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [16166] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(904), 1,
      anon_sym_end,
    ACTIONS(902), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [16181] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(581), 1,
      anon_sym_end,
    ACTIONS(579), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [16196] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [16217] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(555), 1,
      anon_sym_end,
    ACTIONS(553), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [16232] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    ACTIONS(1107), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [16253] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    ACTIONS(1109), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [16274] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1111), 1,
      anon_sym_end,
    ACTIONS(1113), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [16289] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1115), 1,
      anon_sym_end,
    ACTIONS(1117), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [16304] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(900), 1,
      anon_sym_end,
    ACTIONS(898), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [16319] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    ACTIONS(1119), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [16340] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    ACTIONS(1121), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [16361] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(573), 1,
      anon_sym_end,
    ACTIONS(571), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [16376] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    ACTIONS(1123), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [16397] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    ACTIONS(1125), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [16418] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(845), 1,
      anon_sym_end,
    ACTIONS(843), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [16433] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(809), 1,
      anon_sym_end,
    ACTIONS(807), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [16448] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(857), 1,
      anon_sym_end,
    ACTIONS(855), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [16463] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(865), 1,
      anon_sym_end,
    ACTIONS(863), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [16478] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(869), 1,
      anon_sym_end,
    ACTIONS(867), 6,
      anon_sym_uses,
      anon_sym_LBRACK,
      anon_sym_type,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [16493] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    ACTIONS(1127), 1,
      anon_sym_RPAREN,
    STATE(696), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [16514] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    STATE(696), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [16532] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    STATE(662), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [16550] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    STATE(616), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [16568] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    STATE(620), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [16586] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    STATE(657), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [16604] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    STATE(633), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [16622] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    STATE(603), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [16640] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    STATE(665), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [16658] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      sym_identifier,
    STATE(659), 1,
      sym_function_parameter_declaration,
    STATE(805), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1085), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [16676] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1131), 1,
      anon_sym_LBRACK,
    ACTIONS(1129), 4,
      sym_identifier,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [16689] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    ACTIONS(1135), 1,
      anon_sym_RPAREN,
    STATE(701), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [16708] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    ACTIONS(1137), 1,
      anon_sym_RPAREN,
    STATE(701), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [16727] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    ACTIONS(1139), 1,
      anon_sym_RPAREN,
    STATE(701), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [16746] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    ACTIONS(1141), 1,
      anon_sym_RPAREN,
    STATE(701), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [16765] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(505), 1,
      sym__function_type,
    ACTIONS(1143), 2,
      anon_sym_func,
      anon_sym_proc,
    ACTIONS(1145), 2,
      anon_sym_function,
      anon_sym_procedure,
  [16780] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    ACTIONS(1147), 1,
      anon_sym_RPAREN,
    STATE(701), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [16799] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(430), 1,
      sym__function_type,
    ACTIONS(1149), 2,
      anon_sym_func,
      anon_sym_proc,
    ACTIONS(1151), 2,
      anon_sym_function,
      anon_sym_procedure,
  [16814] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    ACTIONS(1153), 1,
      anon_sym_RPAREN,
    STATE(701), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [16833] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1157), 1,
      anon_sym_LBRACK,
    ACTIONS(1155), 4,
      sym_identifier,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [16846] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    ACTIONS(1159), 1,
      anon_sym_RPAREN,
    STATE(701), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [16865] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    ACTIONS(1161), 1,
      anon_sym_RPAREN,
    STATE(701), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [16884] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(385), 1,
      sym__function_type,
    ACTIONS(1163), 2,
      anon_sym_func,
      anon_sym_proc,
    ACTIONS(1165), 2,
      anon_sym_function,
      anon_sym_procedure,
  [16899] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    ACTIONS(1167), 1,
      anon_sym_RPAREN,
    STATE(701), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [16918] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    ACTIONS(1169), 1,
      anon_sym_RPAREN,
    STATE(701), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [16937] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    ACTIONS(1171), 1,
      anon_sym_RPAREN,
    STATE(701), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [16956] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(265), 1,
      sym__function_type,
    ACTIONS(1173), 2,
      anon_sym_func,
      anon_sym_proc,
    ACTIONS(1175), 2,
      anon_sym_function,
      anon_sym_procedure,
  [16971] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(243), 1,
      sym__function_type,
    ACTIONS(1173), 2,
      anon_sym_func,
      anon_sym_proc,
    ACTIONS(1175), 2,
      anon_sym_function,
      anon_sym_procedure,
  [16986] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    ACTIONS(1177), 1,
      anon_sym_RPAREN,
    STATE(701), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [17005] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    ACTIONS(1179), 1,
      anon_sym_RPAREN,
    STATE(701), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [17024] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    ACTIONS(1181), 1,
      anon_sym_RPAREN,
    STATE(701), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [17043] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(536), 1,
      sym__function_type,
    ACTIONS(1143), 2,
      anon_sym_func,
      anon_sym_proc,
    ACTIONS(1145), 2,
      anon_sym_function,
      anon_sym_procedure,
  [17058] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1185), 1,
      anon_sym_LBRACK,
    ACTIONS(1183), 4,
      sym_identifier,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [17071] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    ACTIONS(1187), 1,
      anon_sym_RPAREN,
    STATE(701), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [17090] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(397), 1,
      sym__function_type,
    ACTIONS(1149), 2,
      anon_sym_func,
      anon_sym_proc,
    ACTIONS(1151), 2,
      anon_sym_function,
      anon_sym_procedure,
  [17105] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    ACTIONS(1189), 1,
      anon_sym_RPAREN,
    STATE(701), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [17124] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    STATE(347), 1,
      sym__function_type,
    ACTIONS(1163), 2,
      anon_sym_func,
      anon_sym_proc,
    ACTIONS(1165), 2,
      anon_sym_function,
      anon_sym_procedure,
  [17139] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    STATE(598), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [17155] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    STATE(625), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [17171] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    STATE(701), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [17187] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    STATE(675), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [17203] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    STATE(645), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [17219] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1191), 1,
      sym_identifier,
    ACTIONS(1193), 1,
      anon_sym_LBRACK,
    STATE(194), 1,
      sym__type_identifier,
    STATE(758), 1,
      sym_reference_modifiers,
  [17235] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    STATE(661), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [17251] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    STATE(635), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [17267] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1197), 1,
      anon_sym_EQ,
    STATE(735), 1,
      sym_enum_variant_redefine_value,
    ACTIONS(1195), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [17281] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1193), 1,
      anon_sym_LBRACK,
    ACTIONS(1199), 1,
      sym_identifier,
    STATE(174), 1,
      sym__type_identifier,
    STATE(730), 1,
      sym_reference_modifiers,
  [17297] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1193), 1,
      anon_sym_LBRACK,
    ACTIONS(1201), 1,
      sym_identifier,
    STATE(120), 1,
      sym__type_identifier,
    STATE(740), 1,
      sym_reference_modifiers,
  [17313] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    STATE(601), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [17329] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1197), 1,
      anon_sym_EQ,
    STATE(731), 1,
      sym_enum_variant_redefine_value,
    ACTIONS(1203), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [17343] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1133), 1,
      sym_identifier,
    STATE(607), 1,
      sym_enum_variant,
    STATE(789), 1,
      sym_annotation,
  [17359] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1205), 3,
      anon_sym_module,
      anon_sym_class,
      anon_sym_type,
  [17368] = 4,
    ACTIONS(1207), 1,
      sym_line_comment,
    ACTIONS(1209), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1211), 1,
      anon_sym_SQUOTE2,
    STATE(594), 1,
      aux_sym__string_literal_repeat1,
  [17381] = 4,
    ACTIONS(1207), 1,
      sym_line_comment,
    ACTIONS(1213), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1215), 1,
      anon_sym_SQUOTE2,
    STATE(650), 1,
      aux_sym__string_literal_repeat1,
  [17394] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1065), 1,
      anon_sym_end,
    ACTIONS(1217), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [17405] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1187), 1,
      anon_sym_RPAREN,
    ACTIONS(1219), 1,
      anon_sym_COMMA,
    STATE(615), 1,
      aux_sym_enum_variant_list_repeat1,
  [17418] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1109), 1,
      anon_sym_RPAREN,
    ACTIONS(1221), 1,
      anon_sym_COMMA,
    STATE(614), 1,
      aux_sym_function_parameters_repeat1,
  [17431] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1223), 1,
      anon_sym_RPAREN,
    ACTIONS(1225), 1,
      anon_sym_COMMA,
    STATE(596), 1,
      aux_sym_enum_variant_list_repeat1,
  [17444] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1227), 1,
      anon_sym_end,
    ACTIONS(1229), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [17455] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1231), 1,
      anon_sym_COMMA,
    ACTIONS(1234), 1,
      anon_sym_RBRACK,
    STATE(600), 1,
      aux_sym_reference_modifiers_repeat1,
  [17468] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1236), 1,
      anon_sym_RPAREN,
    ACTIONS(1238), 1,
      anon_sym_COMMA,
    STATE(644), 1,
      aux_sym_enum_variant_list_repeat1,
  [17481] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1240), 1,
      anon_sym_COMMA,
    ACTIONS(1242), 1,
      anon_sym_RBRACE,
    STATE(610), 1,
      aux_sym_text_literal_repeat1,
  [17494] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1244), 1,
      anon_sym_RPAREN,
    ACTIONS(1246), 1,
      anon_sym_COMMA,
    STATE(597), 1,
      aux_sym_function_parameters_repeat1,
  [17507] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1248), 1,
      anon_sym_RPAREN,
    ACTIONS(1250), 1,
      anon_sym_COMMA,
    STATE(649), 1,
      aux_sym_annotation_attribute_list_repeat1,
  [17520] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_SQUOTE,
    ACTIONS(1252), 1,
      anon_sym_RBRACE,
    STATE(720), 1,
      sym__string_literal,
  [17533] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1254), 1,
      anon_sym_end,
    ACTIONS(1256), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
  [17544] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1258), 1,
      anon_sym_RPAREN,
    ACTIONS(1260), 1,
      anon_sym_COMMA,
    STATE(630), 1,
      aux_sym_enum_variant_list_repeat1,
  [17557] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1262), 1,
      anon_sym_COMMA,
    ACTIONS(1265), 1,
      anon_sym_RBRACE,
    STATE(608), 1,
      aux_sym_text_literal_repeat1,
  [17570] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_SQUOTE,
    ACTIONS(1267), 1,
      anon_sym_RBRACE,
    STATE(720), 1,
      sym__string_literal,
  [17583] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1267), 1,
      anon_sym_RBRACE,
    ACTIONS(1269), 1,
      anon_sym_COMMA,
    STATE(608), 1,
      aux_sym_text_literal_repeat1,
  [17596] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1107), 1,
      anon_sym_RPAREN,
    ACTIONS(1271), 1,
      anon_sym_COMMA,
    STATE(614), 1,
      aux_sym_function_parameters_repeat1,
  [17609] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1042), 1,
      anon_sym_end,
    ACTIONS(1273), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [17620] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1275), 1,
      ts_builtin_sym_end,
    ACTIONS(1277), 1,
      anon_sym_end,
    ACTIONS(1279), 1,
      anon_sym_endClass,
  [17633] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1281), 1,
      anon_sym_RPAREN,
    ACTIONS(1283), 1,
      anon_sym_COMMA,
    STATE(614), 1,
      aux_sym_function_parameters_repeat1,
  [17646] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1286), 1,
      anon_sym_RPAREN,
    ACTIONS(1288), 1,
      anon_sym_COMMA,
    STATE(615), 1,
      aux_sym_enum_variant_list_repeat1,
  [17659] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1291), 1,
      anon_sym_RPAREN,
    ACTIONS(1293), 1,
      anon_sym_COMMA,
    STATE(626), 1,
      aux_sym_function_parameters_repeat1,
  [17672] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1295), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK2,
  [17681] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1297), 1,
      anon_sym_end,
    ACTIONS(1299), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [17692] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1179), 1,
      anon_sym_RPAREN,
    ACTIONS(1301), 1,
      anon_sym_COMMA,
    STATE(615), 1,
      aux_sym_enum_variant_list_repeat1,
  [17705] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1303), 1,
      anon_sym_RPAREN,
    ACTIONS(1305), 1,
      anon_sym_COMMA,
    STATE(611), 1,
      aux_sym_function_parameters_repeat1,
  [17718] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_SQUOTE,
    ACTIONS(1307), 1,
      anon_sym_RBRACE,
    STATE(720), 1,
      sym__string_literal,
  [17731] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1051), 1,
      anon_sym_end,
    ACTIONS(1309), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [17742] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1044), 1,
      anon_sym_end,
    ACTIONS(1311), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [17753] = 4,
    ACTIONS(1207), 1,
      sym_line_comment,
    ACTIONS(1313), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1315), 1,
      anon_sym_SQUOTE2,
    STATE(637), 1,
      aux_sym__string_literal_repeat1,
  [17766] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
    ACTIONS(1319), 1,
      anon_sym_COMMA,
    STATE(639), 1,
      aux_sym_enum_variant_list_repeat1,
  [17779] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1089), 1,
      anon_sym_RPAREN,
    ACTIONS(1321), 1,
      anon_sym_COMMA,
    STATE(614), 1,
      aux_sym_function_parameters_repeat1,
  [17792] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1030), 1,
      anon_sym_end,
    ACTIONS(1323), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [17803] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1325), 1,
      anon_sym_end,
    ACTIONS(1327), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
  [17814] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1329), 1,
      anon_sym_COMMA,
    ACTIONS(1331), 1,
      anon_sym_RBRACE,
    STATE(608), 1,
      aux_sym_text_literal_repeat1,
  [17827] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1139), 1,
      anon_sym_RPAREN,
    ACTIONS(1333), 1,
      anon_sym_COMMA,
    STATE(615), 1,
      aux_sym_enum_variant_list_repeat1,
  [17840] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
    ACTIONS(1335), 1,
      anon_sym_COMMA,
    STATE(614), 1,
      aux_sym_function_parameters_repeat1,
  [17853] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_SQUOTE,
    ACTIONS(1331), 1,
      anon_sym_RBRACE,
    STATE(720), 1,
      sym__string_literal,
  [17866] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
    ACTIONS(1339), 1,
      anon_sym_COMMA,
    STATE(642), 1,
      aux_sym_function_parameters_repeat1,
  [17879] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1341), 1,
      anon_sym_end,
    ACTIONS(1343), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [17890] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1345), 1,
      anon_sym_RPAREN,
    ACTIONS(1347), 1,
      anon_sym_COMMA,
    STATE(619), 1,
      aux_sym_enum_variant_list_repeat1,
  [17903] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      anon_sym_COMMA,
    ACTIONS(1351), 1,
      anon_sym_RBRACE,
    STATE(629), 1,
      aux_sym_text_literal_repeat1,
  [17916] = 4,
    ACTIONS(1207), 1,
      sym_line_comment,
    ACTIONS(1213), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1353), 1,
      anon_sym_SQUOTE2,
    STATE(650), 1,
      aux_sym__string_literal_repeat1,
  [17929] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1355), 1,
      anon_sym_RPAREN,
    ACTIONS(1357), 1,
      anon_sym_COMMA,
    STATE(604), 1,
      aux_sym_annotation_attribute_list_repeat1,
  [17942] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1147), 1,
      anon_sym_RPAREN,
    ACTIONS(1359), 1,
      anon_sym_COMMA,
    STATE(615), 1,
      aux_sym_enum_variant_list_repeat1,
  [17955] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1361), 1,
      anon_sym_end,
    ACTIONS(1363), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [17966] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1365), 1,
      anon_sym_end,
    ACTIONS(1367), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [17977] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1105), 1,
      anon_sym_RPAREN,
    ACTIONS(1369), 1,
      anon_sym_COMMA,
    STATE(614), 1,
      aux_sym_function_parameters_repeat1,
  [17990] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1371), 1,
      anon_sym_COMMA,
    ACTIONS(1373), 1,
      anon_sym_RBRACK,
    STATE(655), 1,
      aux_sym_reference_modifiers_repeat1,
  [18003] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1169), 1,
      anon_sym_RPAREN,
    ACTIONS(1375), 1,
      anon_sym_COMMA,
    STATE(615), 1,
      aux_sym_enum_variant_list_repeat1,
  [18016] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1377), 1,
      anon_sym_RPAREN,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    STATE(666), 1,
      aux_sym_enum_variant_list_repeat1,
  [18029] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_SQUOTE,
    ACTIONS(1381), 1,
      anon_sym_RBRACE,
    STATE(720), 1,
      sym__string_literal,
  [18042] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1103), 1,
      anon_sym_RPAREN,
    ACTIONS(1383), 1,
      anon_sym_COMMA,
    STATE(614), 1,
      aux_sym_function_parameters_repeat1,
  [18055] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1046), 1,
      anon_sym_end,
    ACTIONS(1385), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [18066] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1387), 1,
      anon_sym_RPAREN,
    ACTIONS(1389), 1,
      anon_sym_COMMA,
    STATE(649), 1,
      aux_sym_annotation_attribute_list_repeat1,
  [18079] = 4,
    ACTIONS(1207), 1,
      sym_line_comment,
    ACTIONS(1392), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1395), 1,
      anon_sym_SQUOTE2,
    STATE(650), 1,
      aux_sym__string_literal_repeat1,
  [18092] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1397), 1,
      sym_identifier,
    ACTIONS(1399), 1,
      anon_sym_RPAREN,
    STATE(732), 1,
      sym_annotation_attribute,
  [18105] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1401), 1,
      anon_sym_end,
    ACTIONS(1403), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [18116] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1405), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK2,
  [18125] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1177), 1,
      anon_sym_RPAREN,
    ACTIONS(1407), 1,
      anon_sym_COMMA,
    STATE(615), 1,
      aux_sym_enum_variant_list_repeat1,
  [18138] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1409), 1,
      anon_sym_COMMA,
    ACTIONS(1411), 1,
      anon_sym_RBRACK,
    STATE(600), 1,
      aux_sym_reference_modifiers_repeat1,
  [18151] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1413), 3,
      anon_sym_module,
      anon_sym_class,
      anon_sym_type,
  [18160] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1415), 1,
      anon_sym_RPAREN,
    ACTIONS(1417), 1,
      anon_sym_COMMA,
    STATE(668), 1,
      aux_sym_function_parameters_repeat1,
  [18173] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1419), 1,
      anon_sym_end,
    ACTIONS(1421), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
  [18184] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1423), 1,
      anon_sym_RPAREN,
    ACTIONS(1425), 1,
      anon_sym_COMMA,
    STATE(647), 1,
      aux_sym_function_parameters_repeat1,
  [18197] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1063), 1,
      anon_sym_end,
    ACTIONS(1427), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [18208] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1429), 1,
      anon_sym_RPAREN,
    ACTIONS(1431), 1,
      anon_sym_COMMA,
    STATE(669), 1,
      aux_sym_enum_variant_list_repeat1,
  [18221] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1433), 1,
      anon_sym_RPAREN,
    ACTIONS(1435), 1,
      anon_sym_COMMA,
    STATE(631), 1,
      aux_sym_function_parameters_repeat1,
  [18234] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1028), 1,
      anon_sym_end,
    ACTIONS(1437), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [18245] = 4,
    ACTIONS(1207), 1,
      sym_line_comment,
    ACTIONS(1439), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1441), 1,
      anon_sym_SQUOTE2,
    STATE(671), 1,
      aux_sym__string_literal_repeat1,
  [18258] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1443), 1,
      anon_sym_RPAREN,
    ACTIONS(1445), 1,
      anon_sym_COMMA,
    STATE(674), 1,
      aux_sym_function_parameters_repeat1,
  [18271] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1171), 1,
      anon_sym_RPAREN,
    ACTIONS(1447), 1,
      anon_sym_COMMA,
    STATE(615), 1,
      aux_sym_enum_variant_list_repeat1,
  [18284] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1449), 1,
      anon_sym_end,
    ACTIONS(1451), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [18295] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1119), 1,
      anon_sym_RPAREN,
    ACTIONS(1453), 1,
      anon_sym_COMMA,
    STATE(614), 1,
      aux_sym_function_parameters_repeat1,
  [18308] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1141), 1,
      anon_sym_RPAREN,
    ACTIONS(1455), 1,
      anon_sym_COMMA,
    STATE(615), 1,
      aux_sym_enum_variant_list_repeat1,
  [18321] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1457), 1,
      anon_sym_end,
    ACTIONS(1459), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [18332] = 4,
    ACTIONS(1207), 1,
      sym_line_comment,
    ACTIONS(1213), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1461), 1,
      anon_sym_SQUOTE2,
    STATE(650), 1,
      aux_sym__string_literal_repeat1,
  [18345] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1463), 1,
      anon_sym_COMMA,
    ACTIONS(1465), 1,
      anon_sym_RBRACE,
    STATE(677), 1,
      aux_sym_text_literal_repeat1,
  [18358] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK2,
  [18367] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1123), 1,
      anon_sym_RPAREN,
    ACTIONS(1469), 1,
      anon_sym_COMMA,
    STATE(614), 1,
      aux_sym_function_parameters_repeat1,
  [18380] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1471), 1,
      anon_sym_RPAREN,
    ACTIONS(1473), 1,
      anon_sym_COMMA,
    STATE(654), 1,
      aux_sym_enum_variant_list_repeat1,
  [18393] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_SQUOTE,
    ACTIONS(1475), 1,
      anon_sym_RBRACE,
    STATE(720), 1,
      sym__string_literal,
  [18406] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1475), 1,
      anon_sym_RBRACE,
    ACTIONS(1477), 1,
      anon_sym_COMMA,
    STATE(608), 1,
      aux_sym_text_literal_repeat1,
  [18419] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1248), 1,
      anon_sym_RPAREN,
    ACTIONS(1397), 1,
      sym_identifier,
    STATE(732), 1,
      sym_annotation_attribute,
  [18432] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1479), 1,
      anon_sym_end,
    ACTIONS(1481), 1,
      anon_sym_endClass,
  [18442] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1483), 1,
      sym_identifier,
    STATE(475), 1,
      sym__type_identifier,
  [18452] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1485), 1,
      sym_identifier,
    STATE(873), 1,
      sym__type_identifier,
  [18462] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1487), 1,
      sym_identifier,
    STATE(867), 1,
      sym__type_identifier,
  [18472] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1489), 1,
      anon_sym_type,
    ACTIONS(1491), 1,
      anon_sym_model,
  [18482] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1493), 1,
      sym_identifier,
    STATE(862), 1,
      sym__type_identifier,
  [18492] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_enum_variant_list,
  [18502] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1495), 1,
      sym_identifier,
    STATE(854), 1,
      sym__type_identifier,
  [18512] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1497), 1,
      anon_sym_type,
    ACTIONS(1499), 1,
      anon_sym_model,
  [18522] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1199), 1,
      sym_identifier,
    STATE(166), 1,
      sym__type_identifier,
  [18532] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1501), 1,
      sym_identifier,
    STATE(845), 1,
      sym__type_identifier,
  [18542] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1503), 1,
      sym_identifier,
    STATE(836), 1,
      sym__type_identifier,
  [18552] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1505), 1,
      anon_sym_type,
    ACTIONS(1507), 1,
      anon_sym_model,
  [18562] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1411), 1,
      anon_sym_RBRACK,
    ACTIONS(1509), 1,
      aux_sym_reference_modifiers_token1,
  [18572] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1201), 1,
      sym_identifier,
    STATE(817), 1,
      sym__type_identifier,
  [18582] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1511), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18590] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1201), 1,
      sym_identifier,
    STATE(803), 1,
      sym__type_identifier,
  [18600] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1281), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18608] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1201), 1,
      sym_identifier,
    STATE(722), 1,
      sym__type_identifier,
  [18618] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1201), 1,
      sym_identifier,
    STATE(788), 1,
      sym__type_identifier,
  [18628] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1201), 1,
      sym_identifier,
    STATE(778), 1,
      sym__type_identifier,
  [18638] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1513), 1,
      sym_identifier,
    STATE(333), 1,
      sym__type_identifier,
  [18648] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1286), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18656] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1234), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18664] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1515), 1,
      anon_sym_type,
    ACTIONS(1517), 1,
      anon_sym_model,
  [18674] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1201), 1,
      sym_identifier,
    STATE(766), 1,
      sym__type_identifier,
  [18684] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    STATE(765), 1,
      sym_annotation_attribute_list,
  [18694] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    STATE(834), 1,
      sym_annotation_attribute_list,
  [18704] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_SQUOTE,
    STATE(602), 1,
      sym__string_literal,
  [18714] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(962), 1,
      anon_sym_LPAREN,
    STATE(216), 1,
      sym_enum_variant_list,
  [18724] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1509), 1,
      aux_sym_reference_modifiers_token1,
    ACTIONS(1519), 1,
      anon_sym_RBRACK,
  [18734] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1521), 1,
      anon_sym_module,
    ACTIONS(1523), 1,
      anon_sym_class,
  [18744] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1525), 1,
      sym_identifier,
    STATE(286), 1,
      sym__type_identifier,
  [18754] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1201), 1,
      sym_identifier,
    STATE(843), 1,
      sym__type_identifier,
  [18764] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    STATE(809), 1,
      sym_annotation_attribute_list,
  [18774] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1527), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18782] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    STATE(848), 1,
      sym_annotation_attribute_list,
  [18792] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    STATE(874), 1,
      sym_annotation_attribute_list,
  [18802] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_SQUOTE,
    STATE(672), 1,
      sym__string_literal,
  [18812] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1397), 1,
      sym_identifier,
    STATE(732), 1,
      sym_annotation_attribute,
  [18822] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1201), 1,
      sym_identifier,
    STATE(880), 1,
      sym__type_identifier,
  [18832] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1265), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [18840] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    STATE(884), 1,
      sym_annotation_attribute_list,
  [18850] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1529), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18858] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    STATE(890), 1,
      sym_annotation_attribute_list,
  [18868] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_SQUOTE,
    STATE(720), 1,
      sym__string_literal,
  [18878] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1199), 1,
      sym_identifier,
    STATE(149), 1,
      sym__type_identifier,
  [18888] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1531), 1,
      sym_identifier,
    STATE(529), 1,
      sym__type_identifier,
  [18898] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1201), 1,
      sym_identifier,
    STATE(694), 1,
      sym__type_identifier,
  [18908] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1201), 1,
      sym_identifier,
    STATE(140), 1,
      sym__type_identifier,
  [18918] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(944), 1,
      anon_sym_LPAREN,
    STATE(494), 1,
      sym_enum_variant_list,
  [18928] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1199), 1,
      sym_identifier,
    STATE(164), 1,
      sym__type_identifier,
  [18938] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1533), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18946] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1387), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18954] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1535), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18962] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1397), 1,
      sym_identifier,
    STATE(638), 1,
      sym_annotation_attribute,
  [18972] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1537), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [18980] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1539), 1,
      sym_identifier,
    STATE(398), 1,
      sym__type_identifier,
  [18990] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(978), 1,
      anon_sym_LPAREN,
    STATE(254), 1,
      sym_enum_variant_list,
  [19000] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_SQUOTE,
    STATE(636), 1,
      sym__string_literal,
  [19010] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1201), 1,
      sym_identifier,
    STATE(876), 1,
      sym__type_identifier,
  [19020] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1201), 1,
      sym_identifier,
    STATE(138), 1,
      sym__type_identifier,
  [19030] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1191), 1,
      sym_identifier,
    STATE(195), 1,
      sym__type_identifier,
  [19040] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1525), 1,
      sym_identifier,
    STATE(258), 1,
      sym__type_identifier,
  [19050] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    STATE(785), 1,
      sym_annotation_attribute_list,
  [19060] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(467), 1,
      anon_sym_LPAREN,
    STATE(364), 1,
      sym_enum_variant_list,
  [19070] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(988), 1,
      anon_sym_LPAREN,
    STATE(238), 1,
      sym_enum_variant_list,
  [19080] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1531), 1,
      sym_identifier,
    STATE(365), 1,
      sym__type_identifier,
  [19090] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1513), 1,
      sym_identifier,
    STATE(357), 1,
      sym__type_identifier,
  [19100] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1541), 1,
      sym_identifier,
    STATE(800), 1,
      sym__type_identifier,
  [19110] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1201), 1,
      sym_identifier,
    STATE(759), 1,
      sym__type_identifier,
  [19120] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1201), 1,
      sym_identifier,
    STATE(122), 1,
      sym__type_identifier,
  [19130] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1531), 1,
      sym_identifier,
    STATE(506), 1,
      sym__type_identifier,
  [19140] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(296), 1,
      anon_sym_LPAREN,
    STATE(103), 1,
      sym_enum_variant_list,
  [19150] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1543), 1,
      sym_identifier,
    STATE(783), 1,
      sym__type_identifier,
  [19160] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1483), 1,
      sym_identifier,
    STATE(459), 1,
      sym__type_identifier,
  [19170] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1539), 1,
      sym_identifier,
    STATE(412), 1,
      sym__type_identifier,
  [19180] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_enum_variant_list,
  [19190] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1191), 1,
      sym_identifier,
    STATE(184), 1,
      sym__type_identifier,
  [19200] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1191), 1,
      sym_identifier,
    STATE(197), 1,
      sym__type_identifier,
  [19210] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1545), 1,
      anon_sym_RBRACK,
  [19217] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1547), 1,
      anon_sym_EQ,
  [19224] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1549), 1,
      anon_sym_COLON,
  [19231] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1551), 1,
      sym_identifier,
  [19238] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1553), 1,
      sym_identifier,
  [19245] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1555), 1,
      sym_identifier,
  [19252] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1557), 1,
      anon_sym_RBRACK2,
  [19259] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1559), 1,
      anon_sym_RBRACK,
  [19266] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1561), 1,
      sym_identifier,
  [19273] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1563), 1,
      sym_identifier,
  [19280] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1565), 1,
      sym_identifier,
  [19287] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1205), 1,
      sym_identifier,
  [19294] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1567), 1,
      anon_sym_COLON,
  [19301] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1569), 1,
      anon_sym_RPAREN,
  [19308] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1571), 1,
      anon_sym_COLON,
  [19315] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
  [19322] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1573), 1,
      sym_identifier,
  [19329] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1575), 1,
      sym_identifier,
  [19336] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1577), 1,
      anon_sym_SQUOTE,
  [19343] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1579), 1,
      anon_sym_RBRACK,
  [19350] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1581), 1,
      sym_identifier,
  [19357] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1583), 1,
      anon_sym_type,
  [19364] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1585), 1,
      anon_sym_EQ,
  [19371] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1587), 1,
      anon_sym_COLON,
  [19378] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1590), 1,
      anon_sym_COLON,
  [19385] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1592), 1,
      anon_sym_COLON,
  [19392] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1594), 1,
      anon_sym_RBRACK2,
  [19399] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1596), 1,
      ts_builtin_sym_end,
  [19406] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1598), 1,
      anon_sym_RPAREN,
  [19413] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1600), 1,
      anon_sym_RBRACK,
  [19420] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1602), 1,
      sym_identifier,
  [19427] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1604), 1,
      aux_sym_reference_modifiers_token1,
  [19434] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1606), 1,
      sym_identifier,
  [19441] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1608), 1,
      sym_identifier,
  [19448] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1610), 1,
      sym_identifier,
  [19455] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1612), 1,
      anon_sym_COLON,
  [19462] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1614), 1,
      anon_sym_SQUOTE,
  [19469] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1616), 1,
      sym_identifier,
  [19476] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1618), 1,
      sym_identifier,
  [19483] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1620), 1,
      sym_identifier,
  [19490] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1413), 1,
      sym_identifier,
  [19497] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1622), 1,
      anon_sym_COLON,
  [19504] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1624), 1,
      anon_sym_COLON,
  [19511] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1627), 1,
      anon_sym_EQ,
  [19518] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1629), 1,
      anon_sym_RBRACK,
  [19525] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1631), 1,
      sym_identifier,
  [19532] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1633), 1,
      sym_identifier,
  [19539] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1635), 1,
      sym_identifier,
  [19546] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1637), 1,
      anon_sym_COLON,
  [19553] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(535), 1,
      anon_sym_PLUS,
  [19560] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1639), 1,
      anon_sym_RBRACK2,
  [19567] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1641), 1,
      anon_sym_model,
  [19574] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1643), 1,
      sym__integer_literal,
  [19581] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1645), 1,
      sym_identifier,
  [19588] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1647), 1,
      sym_identifier,
  [19595] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1649), 1,
      anon_sym_LPAREN,
  [19602] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1651), 1,
      sym_identifier,
  [19609] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1653), 1,
      anon_sym_COLON,
  [19616] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1655), 1,
      anon_sym_RBRACK,
  [19623] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1657), 1,
      sym_identifier,
  [19630] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1659), 1,
      sym_identifier,
  [19637] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1661), 1,
      anon_sym_COLON,
  [19644] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1663), 1,
      anon_sym_DOT,
  [19651] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1665), 1,
      sym_identifier,
  [19658] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1667), 1,
      sym_identifier,
  [19665] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
  [19672] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1509), 1,
      aux_sym_reference_modifiers_token1,
  [19679] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1669), 1,
      sym_identifier,
  [19686] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1671), 1,
      anon_sym_SQUOTE,
  [19693] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1673), 1,
      anon_sym_COLON,
  [19700] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1675), 1,
      anon_sym_COLON,
  [19707] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1677), 1,
      sym_identifier,
  [19714] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1679), 1,
      sym_identifier,
  [19721] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1681), 1,
      sym_identifier,
  [19728] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1683), 1,
      sym_identifier,
  [19735] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1685), 1,
      anon_sym_RBRACK2,
  [19742] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1687), 1,
      anon_sym_COLON,
  [19749] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1690), 1,
      anon_sym_COLON,
  [19756] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1692), 1,
      sym_identifier,
  [19763] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1694), 1,
      sym_identifier,
  [19770] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1696), 1,
      sym_identifier,
  [19777] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1698), 1,
      sym_identifier,
  [19784] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1700), 1,
      sym_identifier,
  [19791] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1702), 1,
      sym_identifier,
  [19798] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1704), 1,
      anon_sym_RBRACK,
  [19805] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1706), 1,
      anon_sym_COLON,
  [19812] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1709), 1,
      anon_sym_COLON,
  [19819] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1711), 1,
      ts_builtin_sym_end,
  [19826] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1713), 1,
      sym_identifier,
  [19833] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1715), 1,
      anon_sym_RBRACK2,
  [19840] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1717), 1,
      anon_sym_COLON,
  [19847] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1719), 1,
      sym_identifier,
  [19854] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1721), 1,
      sym_identifier,
  [19861] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1723), 1,
      anon_sym_EQ,
  [19868] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1725), 1,
      anon_sym_COLON,
  [19875] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1728), 1,
      anon_sym_COLON,
  [19882] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1730), 1,
      sym_identifier,
  [19889] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1732), 1,
      sym_identifier,
  [19896] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1734), 1,
      anon_sym_COLON,
  [19903] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1736), 1,
      anon_sym_EQ,
  [19910] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1711), 1,
      ts_builtin_sym_end,
  [19917] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1738), 1,
      anon_sym_COLON,
  [19924] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1740), 1,
      anon_sym_COLON,
  [19931] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1743), 1,
      anon_sym_COLON,
  [19938] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1745), 1,
      sym_identifier,
  [19945] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1747), 1,
      sym_identifier,
  [19952] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1749), 1,
      ts_builtin_sym_end,
  [19959] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1751), 1,
      anon_sym_COLON,
  [19966] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1754), 1,
      anon_sym_COLON,
  [19973] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1756), 1,
      sym_identifier,
  [19980] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1758), 1,
      sym_identifier,
  [19987] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1760), 1,
      anon_sym_COLON,
  [19994] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1762), 1,
      sym_identifier,
  [20001] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1764), 1,
      anon_sym_COLON,
  [20008] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1767), 1,
      anon_sym_COLON,
  [20015] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1769), 1,
      anon_sym_RBRACK2,
  [20022] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1771), 1,
      sym_identifier,
  [20029] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1773), 1,
      anon_sym_RPAREN,
  [20036] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1775), 1,
      sym_identifier,
  [20043] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1777), 1,
      anon_sym_SQUOTE,
  [20050] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1779), 1,
      anon_sym_COLON,
  [20057] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1781), 1,
      anon_sym_RBRACK,
  [20064] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1783), 1,
      ts_builtin_sym_end,
  [20071] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1785), 1,
      anon_sym_RPAREN,
  [20078] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1787), 1,
      sym_identifier,
  [20085] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1789), 1,
      anon_sym_RBRACK2,
  [20092] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1791), 1,
      anon_sym_COLON,
  [20099] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1793), 1,
      anon_sym_EQ,
  [20106] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1795), 1,
      sym_identifier,
  [20113] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1797), 1,
      ts_builtin_sym_end,
  [20120] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1799), 1,
      anon_sym_model,
  [20127] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1801), 1,
      anon_sym_RBRACK2,
  [20134] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1803), 1,
      anon_sym_DOT,
  [20141] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1805), 1,
      sym_identifier,
  [20148] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1807), 1,
      sym_identifier,
  [20155] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1809), 1,
      sym_identifier,
  [20162] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1811), 1,
      anon_sym_model,
  [20169] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1813), 1,
      sym_identifier,
  [20176] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1815), 1,
      anon_sym_DOT,
  [20183] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1817), 1,
      sym_identifier,
  [20190] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1819), 1,
      anon_sym_RPAREN,
  [20197] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1821), 1,
      anon_sym_model,
  [20204] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1823), 1,
      sym_identifier,
  [20211] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1825), 1,
      anon_sym_COLON,
  [20218] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1827), 1,
      sym_identifier,
  [20225] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1829), 1,
      anon_sym_COLON,
  [20232] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1831), 1,
      sym_identifier,
  [20239] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1833), 1,
      anon_sym_COLON,
  [20246] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1835), 1,
      anon_sym_SQUOTE,
  [20253] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1837), 1,
      anon_sym_SQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 85,
  [SMALL_STATE(4)] = 170,
  [SMALL_STATE(5)] = 255,
  [SMALL_STATE(6)] = 340,
  [SMALL_STATE(7)] = 425,
  [SMALL_STATE(8)] = 510,
  [SMALL_STATE(9)] = 589,
  [SMALL_STATE(10)] = 668,
  [SMALL_STATE(11)] = 747,
  [SMALL_STATE(12)] = 826,
  [SMALL_STATE(13)] = 905,
  [SMALL_STATE(14)] = 984,
  [SMALL_STATE(15)] = 1057,
  [SMALL_STATE(16)] = 1130,
  [SMALL_STATE(17)] = 1203,
  [SMALL_STATE(18)] = 1276,
  [SMALL_STATE(19)] = 1349,
  [SMALL_STATE(20)] = 1422,
  [SMALL_STATE(21)] = 1495,
  [SMALL_STATE(22)] = 1568,
  [SMALL_STATE(23)] = 1641,
  [SMALL_STATE(24)] = 1714,
  [SMALL_STATE(25)] = 1787,
  [SMALL_STATE(26)] = 1860,
  [SMALL_STATE(27)] = 1926,
  [SMALL_STATE(28)] = 1992,
  [SMALL_STATE(29)] = 2058,
  [SMALL_STATE(30)] = 2124,
  [SMALL_STATE(31)] = 2190,
  [SMALL_STATE(32)] = 2252,
  [SMALL_STATE(33)] = 2314,
  [SMALL_STATE(34)] = 2373,
  [SMALL_STATE(35)] = 2432,
  [SMALL_STATE(36)] = 2491,
  [SMALL_STATE(37)] = 2550,
  [SMALL_STATE(38)] = 2609,
  [SMALL_STATE(39)] = 2668,
  [SMALL_STATE(40)] = 2727,
  [SMALL_STATE(41)] = 2786,
  [SMALL_STATE(42)] = 2845,
  [SMALL_STATE(43)] = 2901,
  [SMALL_STATE(44)] = 2957,
  [SMALL_STATE(45)] = 3021,
  [SMALL_STATE(46)] = 3085,
  [SMALL_STATE(47)] = 3141,
  [SMALL_STATE(48)] = 3205,
  [SMALL_STATE(49)] = 3269,
  [SMALL_STATE(50)] = 3333,
  [SMALL_STATE(51)] = 3397,
  [SMALL_STATE(52)] = 3453,
  [SMALL_STATE(53)] = 3509,
  [SMALL_STATE(54)] = 3573,
  [SMALL_STATE(55)] = 3629,
  [SMALL_STATE(56)] = 3693,
  [SMALL_STATE(57)] = 3749,
  [SMALL_STATE(58)] = 3813,
  [SMALL_STATE(59)] = 3859,
  [SMALL_STATE(60)] = 3905,
  [SMALL_STATE(61)] = 3951,
  [SMALL_STATE(62)] = 4008,
  [SMALL_STATE(63)] = 4065,
  [SMALL_STATE(64)] = 4122,
  [SMALL_STATE(65)] = 4179,
  [SMALL_STATE(66)] = 4236,
  [SMALL_STATE(67)] = 4281,
  [SMALL_STATE(68)] = 4338,
  [SMALL_STATE(69)] = 4383,
  [SMALL_STATE(70)] = 4428,
  [SMALL_STATE(71)] = 4485,
  [SMALL_STATE(72)] = 4542,
  [SMALL_STATE(73)] = 4599,
  [SMALL_STATE(74)] = 4656,
  [SMALL_STATE(75)] = 4713,
  [SMALL_STATE(76)] = 4770,
  [SMALL_STATE(77)] = 4827,
  [SMALL_STATE(78)] = 4884,
  [SMALL_STATE(79)] = 4941,
  [SMALL_STATE(80)] = 4998,
  [SMALL_STATE(81)] = 5055,
  [SMALL_STATE(82)] = 5112,
  [SMALL_STATE(83)] = 5169,
  [SMALL_STATE(84)] = 5226,
  [SMALL_STATE(85)] = 5269,
  [SMALL_STATE(86)] = 5326,
  [SMALL_STATE(87)] = 5369,
  [SMALL_STATE(88)] = 5426,
  [SMALL_STATE(89)] = 5483,
  [SMALL_STATE(90)] = 5540,
  [SMALL_STATE(91)] = 5584,
  [SMALL_STATE(92)] = 5626,
  [SMALL_STATE(93)] = 5668,
  [SMALL_STATE(94)] = 5712,
  [SMALL_STATE(95)] = 5752,
  [SMALL_STATE(96)] = 5810,
  [SMALL_STATE(97)] = 5868,
  [SMALL_STATE(98)] = 5900,
  [SMALL_STATE(99)] = 5944,
  [SMALL_STATE(100)] = 5983,
  [SMALL_STATE(101)] = 6024,
  [SMALL_STATE(102)] = 6065,
  [SMALL_STATE(103)] = 6103,
  [SMALL_STATE(104)] = 6137,
  [SMALL_STATE(105)] = 6171,
  [SMALL_STATE(106)] = 6205,
  [SMALL_STATE(107)] = 6234,
  [SMALL_STATE(108)] = 6263,
  [SMALL_STATE(109)] = 6292,
  [SMALL_STATE(110)] = 6325,
  [SMALL_STATE(111)] = 6358,
  [SMALL_STATE(112)] = 6391,
  [SMALL_STATE(113)] = 6422,
  [SMALL_STATE(114)] = 6451,
  [SMALL_STATE(115)] = 6480,
  [SMALL_STATE(116)] = 6509,
  [SMALL_STATE(117)] = 6537,
  [SMALL_STATE(118)] = 6565,
  [SMALL_STATE(119)] = 6593,
  [SMALL_STATE(120)] = 6621,
  [SMALL_STATE(121)] = 6649,
  [SMALL_STATE(122)] = 6677,
  [SMALL_STATE(123)] = 6705,
  [SMALL_STATE(124)] = 6737,
  [SMALL_STATE(125)] = 6765,
  [SMALL_STATE(126)] = 6795,
  [SMALL_STATE(127)] = 6823,
  [SMALL_STATE(128)] = 6851,
  [SMALL_STATE(129)] = 6879,
  [SMALL_STATE(130)] = 6911,
  [SMALL_STATE(131)] = 6939,
  [SMALL_STATE(132)] = 6967,
  [SMALL_STATE(133)] = 6999,
  [SMALL_STATE(134)] = 7027,
  [SMALL_STATE(135)] = 7055,
  [SMALL_STATE(136)] = 7083,
  [SMALL_STATE(137)] = 7111,
  [SMALL_STATE(138)] = 7139,
  [SMALL_STATE(139)] = 7167,
  [SMALL_STATE(140)] = 7195,
  [SMALL_STATE(141)] = 7223,
  [SMALL_STATE(142)] = 7251,
  [SMALL_STATE(143)] = 7279,
  [SMALL_STATE(144)] = 7307,
  [SMALL_STATE(145)] = 7335,
  [SMALL_STATE(146)] = 7363,
  [SMALL_STATE(147)] = 7391,
  [SMALL_STATE(148)] = 7419,
  [SMALL_STATE(149)] = 7446,
  [SMALL_STATE(150)] = 7473,
  [SMALL_STATE(151)] = 7516,
  [SMALL_STATE(152)] = 7543,
  [SMALL_STATE(153)] = 7570,
  [SMALL_STATE(154)] = 7597,
  [SMALL_STATE(155)] = 7624,
  [SMALL_STATE(156)] = 7651,
  [SMALL_STATE(157)] = 7678,
  [SMALL_STATE(158)] = 7705,
  [SMALL_STATE(159)] = 7732,
  [SMALL_STATE(160)] = 7759,
  [SMALL_STATE(161)] = 7786,
  [SMALL_STATE(162)] = 7813,
  [SMALL_STATE(163)] = 7840,
  [SMALL_STATE(164)] = 7867,
  [SMALL_STATE(165)] = 7894,
  [SMALL_STATE(166)] = 7921,
  [SMALL_STATE(167)] = 7948,
  [SMALL_STATE(168)] = 7975,
  [SMALL_STATE(169)] = 8002,
  [SMALL_STATE(170)] = 8029,
  [SMALL_STATE(171)] = 8072,
  [SMALL_STATE(172)] = 8099,
  [SMALL_STATE(173)] = 8126,
  [SMALL_STATE(174)] = 8153,
  [SMALL_STATE(175)] = 8180,
  [SMALL_STATE(176)] = 8207,
  [SMALL_STATE(177)] = 8234,
  [SMALL_STATE(178)] = 8263,
  [SMALL_STATE(179)] = 8290,
  [SMALL_STATE(180)] = 8316,
  [SMALL_STATE(181)] = 8342,
  [SMALL_STATE(182)] = 8368,
  [SMALL_STATE(183)] = 8402,
  [SMALL_STATE(184)] = 8428,
  [SMALL_STATE(185)] = 8454,
  [SMALL_STATE(186)] = 8480,
  [SMALL_STATE(187)] = 8506,
  [SMALL_STATE(188)] = 8532,
  [SMALL_STATE(189)] = 8558,
  [SMALL_STATE(190)] = 8584,
  [SMALL_STATE(191)] = 8610,
  [SMALL_STATE(192)] = 8636,
  [SMALL_STATE(193)] = 8662,
  [SMALL_STATE(194)] = 8688,
  [SMALL_STATE(195)] = 8714,
  [SMALL_STATE(196)] = 8740,
  [SMALL_STATE(197)] = 8766,
  [SMALL_STATE(198)] = 8792,
  [SMALL_STATE(199)] = 8818,
  [SMALL_STATE(200)] = 8844,
  [SMALL_STATE(201)] = 8870,
  [SMALL_STATE(202)] = 8896,
  [SMALL_STATE(203)] = 8922,
  [SMALL_STATE(204)] = 8961,
  [SMALL_STATE(205)] = 8986,
  [SMALL_STATE(206)] = 9023,
  [SMALL_STATE(207)] = 9048,
  [SMALL_STATE(208)] = 9073,
  [SMALL_STATE(209)] = 9106,
  [SMALL_STATE(210)] = 9143,
  [SMALL_STATE(211)] = 9168,
  [SMALL_STATE(212)] = 9193,
  [SMALL_STATE(213)] = 9218,
  [SMALL_STATE(214)] = 9243,
  [SMALL_STATE(215)] = 9277,
  [SMALL_STATE(216)] = 9305,
  [SMALL_STATE(217)] = 9333,
  [SMALL_STATE(218)] = 9367,
  [SMALL_STATE(219)] = 9395,
  [SMALL_STATE(220)] = 9427,
  [SMALL_STATE(221)] = 9455,
  [SMALL_STATE(222)] = 9483,
  [SMALL_STATE(223)] = 9511,
  [SMALL_STATE(224)] = 9541,
  [SMALL_STATE(225)] = 9569,
  [SMALL_STATE(226)] = 9599,
  [SMALL_STATE(227)] = 9627,
  [SMALL_STATE(228)] = 9654,
  [SMALL_STATE(229)] = 9681,
  [SMALL_STATE(230)] = 9708,
  [SMALL_STATE(231)] = 9731,
  [SMALL_STATE(232)] = 9754,
  [SMALL_STATE(233)] = 9785,
  [SMALL_STATE(234)] = 9812,
  [SMALL_STATE(235)] = 9839,
  [SMALL_STATE(236)] = 9866,
  [SMALL_STATE(237)] = 9889,
  [SMALL_STATE(238)] = 9916,
  [SMALL_STATE(239)] = 9943,
  [SMALL_STATE(240)] = 9966,
  [SMALL_STATE(241)] = 9989,
  [SMALL_STATE(242)] = 10012,
  [SMALL_STATE(243)] = 10035,
  [SMALL_STATE(244)] = 10057,
  [SMALL_STATE(245)] = 10079,
  [SMALL_STATE(246)] = 10101,
  [SMALL_STATE(247)] = 10123,
  [SMALL_STATE(248)] = 10145,
  [SMALL_STATE(249)] = 10167,
  [SMALL_STATE(250)] = 10189,
  [SMALL_STATE(251)] = 10215,
  [SMALL_STATE(252)] = 10237,
  [SMALL_STATE(253)] = 10263,
  [SMALL_STATE(254)] = 10285,
  [SMALL_STATE(255)] = 10311,
  [SMALL_STATE(256)] = 10333,
  [SMALL_STATE(257)] = 10359,
  [SMALL_STATE(258)] = 10385,
  [SMALL_STATE(259)] = 10407,
  [SMALL_STATE(260)] = 10429,
  [SMALL_STATE(261)] = 10451,
  [SMALL_STATE(262)] = 10473,
  [SMALL_STATE(263)] = 10495,
  [SMALL_STATE(264)] = 10517,
  [SMALL_STATE(265)] = 10539,
  [SMALL_STATE(266)] = 10561,
  [SMALL_STATE(267)] = 10583,
  [SMALL_STATE(268)] = 10605,
  [SMALL_STATE(269)] = 10627,
  [SMALL_STATE(270)] = 10649,
  [SMALL_STATE(271)] = 10671,
  [SMALL_STATE(272)] = 10693,
  [SMALL_STATE(273)] = 10715,
  [SMALL_STATE(274)] = 10737,
  [SMALL_STATE(275)] = 10759,
  [SMALL_STATE(276)] = 10781,
  [SMALL_STATE(277)] = 10803,
  [SMALL_STATE(278)] = 10825,
  [SMALL_STATE(279)] = 10847,
  [SMALL_STATE(280)] = 10869,
  [SMALL_STATE(281)] = 10891,
  [SMALL_STATE(282)] = 10913,
  [SMALL_STATE(283)] = 10935,
  [SMALL_STATE(284)] = 10957,
  [SMALL_STATE(285)] = 10979,
  [SMALL_STATE(286)] = 11001,
  [SMALL_STATE(287)] = 11023,
  [SMALL_STATE(288)] = 11045,
  [SMALL_STATE(289)] = 11071,
  [SMALL_STATE(290)] = 11093,
  [SMALL_STATE(291)] = 11115,
  [SMALL_STATE(292)] = 11137,
  [SMALL_STATE(293)] = 11159,
  [SMALL_STATE(294)] = 11181,
  [SMALL_STATE(295)] = 11203,
  [SMALL_STATE(296)] = 11225,
  [SMALL_STATE(297)] = 11247,
  [SMALL_STATE(298)] = 11269,
  [SMALL_STATE(299)] = 11291,
  [SMALL_STATE(300)] = 11313,
  [SMALL_STATE(301)] = 11335,
  [SMALL_STATE(302)] = 11357,
  [SMALL_STATE(303)] = 11379,
  [SMALL_STATE(304)] = 11401,
  [SMALL_STATE(305)] = 11427,
  [SMALL_STATE(306)] = 11449,
  [SMALL_STATE(307)] = 11471,
  [SMALL_STATE(308)] = 11493,
  [SMALL_STATE(309)] = 11515,
  [SMALL_STATE(310)] = 11537,
  [SMALL_STATE(311)] = 11559,
  [SMALL_STATE(312)] = 11581,
  [SMALL_STATE(313)] = 11603,
  [SMALL_STATE(314)] = 11629,
  [SMALL_STATE(315)] = 11651,
  [SMALL_STATE(316)] = 11673,
  [SMALL_STATE(317)] = 11694,
  [SMALL_STATE(318)] = 11715,
  [SMALL_STATE(319)] = 11736,
  [SMALL_STATE(320)] = 11757,
  [SMALL_STATE(321)] = 11778,
  [SMALL_STATE(322)] = 11819,
  [SMALL_STATE(323)] = 11840,
  [SMALL_STATE(324)] = 11871,
  [SMALL_STATE(325)] = 11892,
  [SMALL_STATE(326)] = 11923,
  [SMALL_STATE(327)] = 11944,
  [SMALL_STATE(328)] = 11985,
  [SMALL_STATE(329)] = 12006,
  [SMALL_STATE(330)] = 12027,
  [SMALL_STATE(331)] = 12048,
  [SMALL_STATE(332)] = 12069,
  [SMALL_STATE(333)] = 12090,
  [SMALL_STATE(334)] = 12111,
  [SMALL_STATE(335)] = 12132,
  [SMALL_STATE(336)] = 12153,
  [SMALL_STATE(337)] = 12174,
  [SMALL_STATE(338)] = 12195,
  [SMALL_STATE(339)] = 12216,
  [SMALL_STATE(340)] = 12237,
  [SMALL_STATE(341)] = 12258,
  [SMALL_STATE(342)] = 12279,
  [SMALL_STATE(343)] = 12320,
  [SMALL_STATE(344)] = 12341,
  [SMALL_STATE(345)] = 12362,
  [SMALL_STATE(346)] = 12383,
  [SMALL_STATE(347)] = 12404,
  [SMALL_STATE(348)] = 12425,
  [SMALL_STATE(349)] = 12446,
  [SMALL_STATE(350)] = 12467,
  [SMALL_STATE(351)] = 12488,
  [SMALL_STATE(352)] = 12509,
  [SMALL_STATE(353)] = 12540,
  [SMALL_STATE(354)] = 12571,
  [SMALL_STATE(355)] = 12592,
  [SMALL_STATE(356)] = 12613,
  [SMALL_STATE(357)] = 12634,
  [SMALL_STATE(358)] = 12655,
  [SMALL_STATE(359)] = 12676,
  [SMALL_STATE(360)] = 12717,
  [SMALL_STATE(361)] = 12738,
  [SMALL_STATE(362)] = 12779,
  [SMALL_STATE(363)] = 12804,
  [SMALL_STATE(364)] = 12829,
  [SMALL_STATE(365)] = 12854,
  [SMALL_STATE(366)] = 12875,
  [SMALL_STATE(367)] = 12906,
  [SMALL_STATE(368)] = 12927,
  [SMALL_STATE(369)] = 12968,
  [SMALL_STATE(370)] = 12989,
  [SMALL_STATE(371)] = 13010,
  [SMALL_STATE(372)] = 13031,
  [SMALL_STATE(373)] = 13052,
  [SMALL_STATE(374)] = 13073,
  [SMALL_STATE(375)] = 13094,
  [SMALL_STATE(376)] = 13115,
  [SMALL_STATE(377)] = 13136,
  [SMALL_STATE(378)] = 13157,
  [SMALL_STATE(379)] = 13178,
  [SMALL_STATE(380)] = 13199,
  [SMALL_STATE(381)] = 13220,
  [SMALL_STATE(382)] = 13241,
  [SMALL_STATE(383)] = 13262,
  [SMALL_STATE(384)] = 13283,
  [SMALL_STATE(385)] = 13314,
  [SMALL_STATE(386)] = 13335,
  [SMALL_STATE(387)] = 13356,
  [SMALL_STATE(388)] = 13377,
  [SMALL_STATE(389)] = 13398,
  [SMALL_STATE(390)] = 13419,
  [SMALL_STATE(391)] = 13440,
  [SMALL_STATE(392)] = 13461,
  [SMALL_STATE(393)] = 13502,
  [SMALL_STATE(394)] = 13543,
  [SMALL_STATE(395)] = 13564,
  [SMALL_STATE(396)] = 13585,
  [SMALL_STATE(397)] = 13605,
  [SMALL_STATE(398)] = 13625,
  [SMALL_STATE(399)] = 13645,
  [SMALL_STATE(400)] = 13665,
  [SMALL_STATE(401)] = 13685,
  [SMALL_STATE(402)] = 13705,
  [SMALL_STATE(403)] = 13725,
  [SMALL_STATE(404)] = 13745,
  [SMALL_STATE(405)] = 13765,
  [SMALL_STATE(406)] = 13785,
  [SMALL_STATE(407)] = 13805,
  [SMALL_STATE(408)] = 13825,
  [SMALL_STATE(409)] = 13845,
  [SMALL_STATE(410)] = 13865,
  [SMALL_STATE(411)] = 13885,
  [SMALL_STATE(412)] = 13905,
  [SMALL_STATE(413)] = 13925,
  [SMALL_STATE(414)] = 13945,
  [SMALL_STATE(415)] = 13965,
  [SMALL_STATE(416)] = 13985,
  [SMALL_STATE(417)] = 14005,
  [SMALL_STATE(418)] = 14025,
  [SMALL_STATE(419)] = 14047,
  [SMALL_STATE(420)] = 14067,
  [SMALL_STATE(421)] = 14087,
  [SMALL_STATE(422)] = 14107,
  [SMALL_STATE(423)] = 14127,
  [SMALL_STATE(424)] = 14147,
  [SMALL_STATE(425)] = 14167,
  [SMALL_STATE(426)] = 14187,
  [SMALL_STATE(427)] = 14207,
  [SMALL_STATE(428)] = 14227,
  [SMALL_STATE(429)] = 14247,
  [SMALL_STATE(430)] = 14267,
  [SMALL_STATE(431)] = 14287,
  [SMALL_STATE(432)] = 14307,
  [SMALL_STATE(433)] = 14327,
  [SMALL_STATE(434)] = 14347,
  [SMALL_STATE(435)] = 14367,
  [SMALL_STATE(436)] = 14387,
  [SMALL_STATE(437)] = 14407,
  [SMALL_STATE(438)] = 14427,
  [SMALL_STATE(439)] = 14447,
  [SMALL_STATE(440)] = 14467,
  [SMALL_STATE(441)] = 14487,
  [SMALL_STATE(442)] = 14507,
  [SMALL_STATE(443)] = 14527,
  [SMALL_STATE(444)] = 14547,
  [SMALL_STATE(445)] = 14567,
  [SMALL_STATE(446)] = 14587,
  [SMALL_STATE(447)] = 14607,
  [SMALL_STATE(448)] = 14627,
  [SMALL_STATE(449)] = 14646,
  [SMALL_STATE(450)] = 14665,
  [SMALL_STATE(451)] = 14696,
  [SMALL_STATE(452)] = 14727,
  [SMALL_STATE(453)] = 14758,
  [SMALL_STATE(454)] = 14777,
  [SMALL_STATE(455)] = 14804,
  [SMALL_STATE(456)] = 14823,
  [SMALL_STATE(457)] = 14842,
  [SMALL_STATE(458)] = 14861,
  [SMALL_STATE(459)] = 14892,
  [SMALL_STATE(460)] = 14911,
  [SMALL_STATE(461)] = 14942,
  [SMALL_STATE(462)] = 14961,
  [SMALL_STATE(463)] = 14992,
  [SMALL_STATE(464)] = 15011,
  [SMALL_STATE(465)] = 15030,
  [SMALL_STATE(466)] = 15049,
  [SMALL_STATE(467)] = 15080,
  [SMALL_STATE(468)] = 15111,
  [SMALL_STATE(469)] = 15130,
  [SMALL_STATE(470)] = 15149,
  [SMALL_STATE(471)] = 15168,
  [SMALL_STATE(472)] = 15187,
  [SMALL_STATE(473)] = 15206,
  [SMALL_STATE(474)] = 15225,
  [SMALL_STATE(475)] = 15244,
  [SMALL_STATE(476)] = 15263,
  [SMALL_STATE(477)] = 15291,
  [SMALL_STATE(478)] = 15316,
  [SMALL_STATE(479)] = 15341,
  [SMALL_STATE(480)] = 15362,
  [SMALL_STATE(481)] = 15387,
  [SMALL_STATE(482)] = 15412,
  [SMALL_STATE(483)] = 15437,
  [SMALL_STATE(484)] = 15462,
  [SMALL_STATE(485)] = 15483,
  [SMALL_STATE(486)] = 15508,
  [SMALL_STATE(487)] = 15523,
  [SMALL_STATE(488)] = 15548,
  [SMALL_STATE(489)] = 15573,
  [SMALL_STATE(490)] = 15598,
  [SMALL_STATE(491)] = 15619,
  [SMALL_STATE(492)] = 15640,
  [SMALL_STATE(493)] = 15661,
  [SMALL_STATE(494)] = 15676,
  [SMALL_STATE(495)] = 15697,
  [SMALL_STATE(496)] = 15713,
  [SMALL_STATE(497)] = 15727,
  [SMALL_STATE(498)] = 15743,
  [SMALL_STATE(499)] = 15757,
  [SMALL_STATE(500)] = 15773,
  [SMALL_STATE(501)] = 15795,
  [SMALL_STATE(502)] = 15811,
  [SMALL_STATE(503)] = 15833,
  [SMALL_STATE(504)] = 15854,
  [SMALL_STATE(505)] = 15875,
  [SMALL_STATE(506)] = 15890,
  [SMALL_STATE(507)] = 15905,
  [SMALL_STATE(508)] = 15920,
  [SMALL_STATE(509)] = 15941,
  [SMALL_STATE(510)] = 15962,
  [SMALL_STATE(511)] = 15977,
  [SMALL_STATE(512)] = 15998,
  [SMALL_STATE(513)] = 16013,
  [SMALL_STATE(514)] = 16028,
  [SMALL_STATE(515)] = 16049,
  [SMALL_STATE(516)] = 16070,
  [SMALL_STATE(517)] = 16085,
  [SMALL_STATE(518)] = 16100,
  [SMALL_STATE(519)] = 16115,
  [SMALL_STATE(520)] = 16136,
  [SMALL_STATE(521)] = 16151,
  [SMALL_STATE(522)] = 16166,
  [SMALL_STATE(523)] = 16181,
  [SMALL_STATE(524)] = 16196,
  [SMALL_STATE(525)] = 16217,
  [SMALL_STATE(526)] = 16232,
  [SMALL_STATE(527)] = 16253,
  [SMALL_STATE(528)] = 16274,
  [SMALL_STATE(529)] = 16289,
  [SMALL_STATE(530)] = 16304,
  [SMALL_STATE(531)] = 16319,
  [SMALL_STATE(532)] = 16340,
  [SMALL_STATE(533)] = 16361,
  [SMALL_STATE(534)] = 16376,
  [SMALL_STATE(535)] = 16397,
  [SMALL_STATE(536)] = 16418,
  [SMALL_STATE(537)] = 16433,
  [SMALL_STATE(538)] = 16448,
  [SMALL_STATE(539)] = 16463,
  [SMALL_STATE(540)] = 16478,
  [SMALL_STATE(541)] = 16493,
  [SMALL_STATE(542)] = 16514,
  [SMALL_STATE(543)] = 16532,
  [SMALL_STATE(544)] = 16550,
  [SMALL_STATE(545)] = 16568,
  [SMALL_STATE(546)] = 16586,
  [SMALL_STATE(547)] = 16604,
  [SMALL_STATE(548)] = 16622,
  [SMALL_STATE(549)] = 16640,
  [SMALL_STATE(550)] = 16658,
  [SMALL_STATE(551)] = 16676,
  [SMALL_STATE(552)] = 16689,
  [SMALL_STATE(553)] = 16708,
  [SMALL_STATE(554)] = 16727,
  [SMALL_STATE(555)] = 16746,
  [SMALL_STATE(556)] = 16765,
  [SMALL_STATE(557)] = 16780,
  [SMALL_STATE(558)] = 16799,
  [SMALL_STATE(559)] = 16814,
  [SMALL_STATE(560)] = 16833,
  [SMALL_STATE(561)] = 16846,
  [SMALL_STATE(562)] = 16865,
  [SMALL_STATE(563)] = 16884,
  [SMALL_STATE(564)] = 16899,
  [SMALL_STATE(565)] = 16918,
  [SMALL_STATE(566)] = 16937,
  [SMALL_STATE(567)] = 16956,
  [SMALL_STATE(568)] = 16971,
  [SMALL_STATE(569)] = 16986,
  [SMALL_STATE(570)] = 17005,
  [SMALL_STATE(571)] = 17024,
  [SMALL_STATE(572)] = 17043,
  [SMALL_STATE(573)] = 17058,
  [SMALL_STATE(574)] = 17071,
  [SMALL_STATE(575)] = 17090,
  [SMALL_STATE(576)] = 17105,
  [SMALL_STATE(577)] = 17124,
  [SMALL_STATE(578)] = 17139,
  [SMALL_STATE(579)] = 17155,
  [SMALL_STATE(580)] = 17171,
  [SMALL_STATE(581)] = 17187,
  [SMALL_STATE(582)] = 17203,
  [SMALL_STATE(583)] = 17219,
  [SMALL_STATE(584)] = 17235,
  [SMALL_STATE(585)] = 17251,
  [SMALL_STATE(586)] = 17267,
  [SMALL_STATE(587)] = 17281,
  [SMALL_STATE(588)] = 17297,
  [SMALL_STATE(589)] = 17313,
  [SMALL_STATE(590)] = 17329,
  [SMALL_STATE(591)] = 17343,
  [SMALL_STATE(592)] = 17359,
  [SMALL_STATE(593)] = 17368,
  [SMALL_STATE(594)] = 17381,
  [SMALL_STATE(595)] = 17394,
  [SMALL_STATE(596)] = 17405,
  [SMALL_STATE(597)] = 17418,
  [SMALL_STATE(598)] = 17431,
  [SMALL_STATE(599)] = 17444,
  [SMALL_STATE(600)] = 17455,
  [SMALL_STATE(601)] = 17468,
  [SMALL_STATE(602)] = 17481,
  [SMALL_STATE(603)] = 17494,
  [SMALL_STATE(604)] = 17507,
  [SMALL_STATE(605)] = 17520,
  [SMALL_STATE(606)] = 17533,
  [SMALL_STATE(607)] = 17544,
  [SMALL_STATE(608)] = 17557,
  [SMALL_STATE(609)] = 17570,
  [SMALL_STATE(610)] = 17583,
  [SMALL_STATE(611)] = 17596,
  [SMALL_STATE(612)] = 17609,
  [SMALL_STATE(613)] = 17620,
  [SMALL_STATE(614)] = 17633,
  [SMALL_STATE(615)] = 17646,
  [SMALL_STATE(616)] = 17659,
  [SMALL_STATE(617)] = 17672,
  [SMALL_STATE(618)] = 17681,
  [SMALL_STATE(619)] = 17692,
  [SMALL_STATE(620)] = 17705,
  [SMALL_STATE(621)] = 17718,
  [SMALL_STATE(622)] = 17731,
  [SMALL_STATE(623)] = 17742,
  [SMALL_STATE(624)] = 17753,
  [SMALL_STATE(625)] = 17766,
  [SMALL_STATE(626)] = 17779,
  [SMALL_STATE(627)] = 17792,
  [SMALL_STATE(628)] = 17803,
  [SMALL_STATE(629)] = 17814,
  [SMALL_STATE(630)] = 17827,
  [SMALL_STATE(631)] = 17840,
  [SMALL_STATE(632)] = 17853,
  [SMALL_STATE(633)] = 17866,
  [SMALL_STATE(634)] = 17879,
  [SMALL_STATE(635)] = 17890,
  [SMALL_STATE(636)] = 17903,
  [SMALL_STATE(637)] = 17916,
  [SMALL_STATE(638)] = 17929,
  [SMALL_STATE(639)] = 17942,
  [SMALL_STATE(640)] = 17955,
  [SMALL_STATE(641)] = 17966,
  [SMALL_STATE(642)] = 17977,
  [SMALL_STATE(643)] = 17990,
  [SMALL_STATE(644)] = 18003,
  [SMALL_STATE(645)] = 18016,
  [SMALL_STATE(646)] = 18029,
  [SMALL_STATE(647)] = 18042,
  [SMALL_STATE(648)] = 18055,
  [SMALL_STATE(649)] = 18066,
  [SMALL_STATE(650)] = 18079,
  [SMALL_STATE(651)] = 18092,
  [SMALL_STATE(652)] = 18105,
  [SMALL_STATE(653)] = 18116,
  [SMALL_STATE(654)] = 18125,
  [SMALL_STATE(655)] = 18138,
  [SMALL_STATE(656)] = 18151,
  [SMALL_STATE(657)] = 18160,
  [SMALL_STATE(658)] = 18173,
  [SMALL_STATE(659)] = 18184,
  [SMALL_STATE(660)] = 18197,
  [SMALL_STATE(661)] = 18208,
  [SMALL_STATE(662)] = 18221,
  [SMALL_STATE(663)] = 18234,
  [SMALL_STATE(664)] = 18245,
  [SMALL_STATE(665)] = 18258,
  [SMALL_STATE(666)] = 18271,
  [SMALL_STATE(667)] = 18284,
  [SMALL_STATE(668)] = 18295,
  [SMALL_STATE(669)] = 18308,
  [SMALL_STATE(670)] = 18321,
  [SMALL_STATE(671)] = 18332,
  [SMALL_STATE(672)] = 18345,
  [SMALL_STATE(673)] = 18358,
  [SMALL_STATE(674)] = 18367,
  [SMALL_STATE(675)] = 18380,
  [SMALL_STATE(676)] = 18393,
  [SMALL_STATE(677)] = 18406,
  [SMALL_STATE(678)] = 18419,
  [SMALL_STATE(679)] = 18432,
  [SMALL_STATE(680)] = 18442,
  [SMALL_STATE(681)] = 18452,
  [SMALL_STATE(682)] = 18462,
  [SMALL_STATE(683)] = 18472,
  [SMALL_STATE(684)] = 18482,
  [SMALL_STATE(685)] = 18492,
  [SMALL_STATE(686)] = 18502,
  [SMALL_STATE(687)] = 18512,
  [SMALL_STATE(688)] = 18522,
  [SMALL_STATE(689)] = 18532,
  [SMALL_STATE(690)] = 18542,
  [SMALL_STATE(691)] = 18552,
  [SMALL_STATE(692)] = 18562,
  [SMALL_STATE(693)] = 18572,
  [SMALL_STATE(694)] = 18582,
  [SMALL_STATE(695)] = 18590,
  [SMALL_STATE(696)] = 18600,
  [SMALL_STATE(697)] = 18608,
  [SMALL_STATE(698)] = 18618,
  [SMALL_STATE(699)] = 18628,
  [SMALL_STATE(700)] = 18638,
  [SMALL_STATE(701)] = 18648,
  [SMALL_STATE(702)] = 18656,
  [SMALL_STATE(703)] = 18664,
  [SMALL_STATE(704)] = 18674,
  [SMALL_STATE(705)] = 18684,
  [SMALL_STATE(706)] = 18694,
  [SMALL_STATE(707)] = 18704,
  [SMALL_STATE(708)] = 18714,
  [SMALL_STATE(709)] = 18724,
  [SMALL_STATE(710)] = 18734,
  [SMALL_STATE(711)] = 18744,
  [SMALL_STATE(712)] = 18754,
  [SMALL_STATE(713)] = 18764,
  [SMALL_STATE(714)] = 18774,
  [SMALL_STATE(715)] = 18782,
  [SMALL_STATE(716)] = 18792,
  [SMALL_STATE(717)] = 18802,
  [SMALL_STATE(718)] = 18812,
  [SMALL_STATE(719)] = 18822,
  [SMALL_STATE(720)] = 18832,
  [SMALL_STATE(721)] = 18840,
  [SMALL_STATE(722)] = 18850,
  [SMALL_STATE(723)] = 18858,
  [SMALL_STATE(724)] = 18868,
  [SMALL_STATE(725)] = 18878,
  [SMALL_STATE(726)] = 18888,
  [SMALL_STATE(727)] = 18898,
  [SMALL_STATE(728)] = 18908,
  [SMALL_STATE(729)] = 18918,
  [SMALL_STATE(730)] = 18928,
  [SMALL_STATE(731)] = 18938,
  [SMALL_STATE(732)] = 18946,
  [SMALL_STATE(733)] = 18954,
  [SMALL_STATE(734)] = 18962,
  [SMALL_STATE(735)] = 18972,
  [SMALL_STATE(736)] = 18980,
  [SMALL_STATE(737)] = 18990,
  [SMALL_STATE(738)] = 19000,
  [SMALL_STATE(739)] = 19010,
  [SMALL_STATE(740)] = 19020,
  [SMALL_STATE(741)] = 19030,
  [SMALL_STATE(742)] = 19040,
  [SMALL_STATE(743)] = 19050,
  [SMALL_STATE(744)] = 19060,
  [SMALL_STATE(745)] = 19070,
  [SMALL_STATE(746)] = 19080,
  [SMALL_STATE(747)] = 19090,
  [SMALL_STATE(748)] = 19100,
  [SMALL_STATE(749)] = 19110,
  [SMALL_STATE(750)] = 19120,
  [SMALL_STATE(751)] = 19130,
  [SMALL_STATE(752)] = 19140,
  [SMALL_STATE(753)] = 19150,
  [SMALL_STATE(754)] = 19160,
  [SMALL_STATE(755)] = 19170,
  [SMALL_STATE(756)] = 19180,
  [SMALL_STATE(757)] = 19190,
  [SMALL_STATE(758)] = 19200,
  [SMALL_STATE(759)] = 19210,
  [SMALL_STATE(760)] = 19217,
  [SMALL_STATE(761)] = 19224,
  [SMALL_STATE(762)] = 19231,
  [SMALL_STATE(763)] = 19238,
  [SMALL_STATE(764)] = 19245,
  [SMALL_STATE(765)] = 19252,
  [SMALL_STATE(766)] = 19259,
  [SMALL_STATE(767)] = 19266,
  [SMALL_STATE(768)] = 19273,
  [SMALL_STATE(769)] = 19280,
  [SMALL_STATE(770)] = 19287,
  [SMALL_STATE(771)] = 19294,
  [SMALL_STATE(772)] = 19301,
  [SMALL_STATE(773)] = 19308,
  [SMALL_STATE(774)] = 19315,
  [SMALL_STATE(775)] = 19322,
  [SMALL_STATE(776)] = 19329,
  [SMALL_STATE(777)] = 19336,
  [SMALL_STATE(778)] = 19343,
  [SMALL_STATE(779)] = 19350,
  [SMALL_STATE(780)] = 19357,
  [SMALL_STATE(781)] = 19364,
  [SMALL_STATE(782)] = 19371,
  [SMALL_STATE(783)] = 19378,
  [SMALL_STATE(784)] = 19385,
  [SMALL_STATE(785)] = 19392,
  [SMALL_STATE(786)] = 19399,
  [SMALL_STATE(787)] = 19406,
  [SMALL_STATE(788)] = 19413,
  [SMALL_STATE(789)] = 19420,
  [SMALL_STATE(790)] = 19427,
  [SMALL_STATE(791)] = 19434,
  [SMALL_STATE(792)] = 19441,
  [SMALL_STATE(793)] = 19448,
  [SMALL_STATE(794)] = 19455,
  [SMALL_STATE(795)] = 19462,
  [SMALL_STATE(796)] = 19469,
  [SMALL_STATE(797)] = 19476,
  [SMALL_STATE(798)] = 19483,
  [SMALL_STATE(799)] = 19490,
  [SMALL_STATE(800)] = 19497,
  [SMALL_STATE(801)] = 19504,
  [SMALL_STATE(802)] = 19511,
  [SMALL_STATE(803)] = 19518,
  [SMALL_STATE(804)] = 19525,
  [SMALL_STATE(805)] = 19532,
  [SMALL_STATE(806)] = 19539,
  [SMALL_STATE(807)] = 19546,
  [SMALL_STATE(808)] = 19553,
  [SMALL_STATE(809)] = 19560,
  [SMALL_STATE(810)] = 19567,
  [SMALL_STATE(811)] = 19574,
  [SMALL_STATE(812)] = 19581,
  [SMALL_STATE(813)] = 19588,
  [SMALL_STATE(814)] = 19595,
  [SMALL_STATE(815)] = 19602,
  [SMALL_STATE(816)] = 19609,
  [SMALL_STATE(817)] = 19616,
  [SMALL_STATE(818)] = 19623,
  [SMALL_STATE(819)] = 19630,
  [SMALL_STATE(820)] = 19637,
  [SMALL_STATE(821)] = 19644,
  [SMALL_STATE(822)] = 19651,
  [SMALL_STATE(823)] = 19658,
  [SMALL_STATE(824)] = 19665,
  [SMALL_STATE(825)] = 19672,
  [SMALL_STATE(826)] = 19679,
  [SMALL_STATE(827)] = 19686,
  [SMALL_STATE(828)] = 19693,
  [SMALL_STATE(829)] = 19700,
  [SMALL_STATE(830)] = 19707,
  [SMALL_STATE(831)] = 19714,
  [SMALL_STATE(832)] = 19721,
  [SMALL_STATE(833)] = 19728,
  [SMALL_STATE(834)] = 19735,
  [SMALL_STATE(835)] = 19742,
  [SMALL_STATE(836)] = 19749,
  [SMALL_STATE(837)] = 19756,
  [SMALL_STATE(838)] = 19763,
  [SMALL_STATE(839)] = 19770,
  [SMALL_STATE(840)] = 19777,
  [SMALL_STATE(841)] = 19784,
  [SMALL_STATE(842)] = 19791,
  [SMALL_STATE(843)] = 19798,
  [SMALL_STATE(844)] = 19805,
  [SMALL_STATE(845)] = 19812,
  [SMALL_STATE(846)] = 19819,
  [SMALL_STATE(847)] = 19826,
  [SMALL_STATE(848)] = 19833,
  [SMALL_STATE(849)] = 19840,
  [SMALL_STATE(850)] = 19847,
  [SMALL_STATE(851)] = 19854,
  [SMALL_STATE(852)] = 19861,
  [SMALL_STATE(853)] = 19868,
  [SMALL_STATE(854)] = 19875,
  [SMALL_STATE(855)] = 19882,
  [SMALL_STATE(856)] = 19889,
  [SMALL_STATE(857)] = 19896,
  [SMALL_STATE(858)] = 19903,
  [SMALL_STATE(859)] = 19910,
  [SMALL_STATE(860)] = 19917,
  [SMALL_STATE(861)] = 19924,
  [SMALL_STATE(862)] = 19931,
  [SMALL_STATE(863)] = 19938,
  [SMALL_STATE(864)] = 19945,
  [SMALL_STATE(865)] = 19952,
  [SMALL_STATE(866)] = 19959,
  [SMALL_STATE(867)] = 19966,
  [SMALL_STATE(868)] = 19973,
  [SMALL_STATE(869)] = 19980,
  [SMALL_STATE(870)] = 19987,
  [SMALL_STATE(871)] = 19994,
  [SMALL_STATE(872)] = 20001,
  [SMALL_STATE(873)] = 20008,
  [SMALL_STATE(874)] = 20015,
  [SMALL_STATE(875)] = 20022,
  [SMALL_STATE(876)] = 20029,
  [SMALL_STATE(877)] = 20036,
  [SMALL_STATE(878)] = 20043,
  [SMALL_STATE(879)] = 20050,
  [SMALL_STATE(880)] = 20057,
  [SMALL_STATE(881)] = 20064,
  [SMALL_STATE(882)] = 20071,
  [SMALL_STATE(883)] = 20078,
  [SMALL_STATE(884)] = 20085,
  [SMALL_STATE(885)] = 20092,
  [SMALL_STATE(886)] = 20099,
  [SMALL_STATE(887)] = 20106,
  [SMALL_STATE(888)] = 20113,
  [SMALL_STATE(889)] = 20120,
  [SMALL_STATE(890)] = 20127,
  [SMALL_STATE(891)] = 20134,
  [SMALL_STATE(892)] = 20141,
  [SMALL_STATE(893)] = 20148,
  [SMALL_STATE(894)] = 20155,
  [SMALL_STATE(895)] = 20162,
  [SMALL_STATE(896)] = 20169,
  [SMALL_STATE(897)] = 20176,
  [SMALL_STATE(898)] = 20183,
  [SMALL_STATE(899)] = 20190,
  [SMALL_STATE(900)] = 20197,
  [SMALL_STATE(901)] = 20204,
  [SMALL_STATE(902)] = 20211,
  [SMALL_STATE(903)] = 20218,
  [SMALL_STATE(904)] = 20225,
  [SMALL_STATE(905)] = 20232,
  [SMALL_STATE(906)] = 20239,
  [SMALL_STATE(907)] = 20246,
  [SMALL_STATE(908)] = 20253,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(815),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(792),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(777),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, .production_id = 4),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(828),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(786),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(898),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(823),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(822),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(819),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(818),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(748),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(828),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(898),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(823),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(822),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(819),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(691),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(818),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(748),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2, .production_id = 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(824),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(865),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 4),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(774),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 2, .production_id = 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(829),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 2, .production_id = 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(892),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(887),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(830),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(690),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 3, .production_id = 4),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 3, .production_id = 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(849),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(875),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(893),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(850),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(686),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 7, .production_id = 24),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 7, .production_id = 24),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 5, .production_id = 12),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 5, .production_id = 12),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__class_repeat1, 2),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(829),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(892),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(887),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(819),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(687),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(830),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(690),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 4, .production_id = 4),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 4, .production_id = 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 3, .production_id = 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 3, .production_id = 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 6, .production_id = 12),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 6, .production_id = 12),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 6, .production_id = 24),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 6, .production_id = 24),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(832),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(741),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(749),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(719),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(849),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(875),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(893),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(850),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(686),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_item, 5, .production_id = 33),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_item, 5, .production_id = 33),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(797),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(798),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_item, 3, .production_id = 6),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_item, 3, .production_id = 6),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_item, 4, .production_id = 23),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_item, 4, .production_id = 23),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(791),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(901),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(797),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(798),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(84),
  [422] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(126),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_modifiers, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_modifiers, 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(839),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(833),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(791),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(901),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(92),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(171),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_type, 1),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_type, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(728),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 5),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_identifier, 1, .production_id = 5),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(688),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(839),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(833),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(100),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(188),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(757),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enum_type, 2, .production_id = 17),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__enum_type, 2, .production_id = 17),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enum_type, 1, .production_id = 9),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__enum_type, 1, .production_id = 9),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_type, 2, .production_id = 14),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_type, 2, .production_id = 14),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 3),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 5),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 5),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 4),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 4),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(814),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 4),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 4),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 5),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 5),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 1, .production_id = 7),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 1, .production_id = 7),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_type, 4),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__record_type, 4),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_type, 2),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_type, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pointer_type, 2, .production_id = 15),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pointer_type, 2, .production_id = 15),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_type, 2),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__record_type, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifiers, 1),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility_modifiers, 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enum_type, 3, .production_id = 17),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__enum_type, 3, .production_id = 17),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute_modifiers, 2, .production_id = 27),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute_modifiers, 2, .production_id = 27),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inverse_modifiers, 2, .production_id = 26),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inverse_modifiers, 2, .production_id = 26),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_type, 3),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__record_type, 3),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_type, 3, .production_id = 14),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_type, 3, .production_id = 14),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_type, 3, .production_id = 25),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__set_type, 3, .production_id = 25),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_modifiers, 1),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_modifiers, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enum_type, 2, .production_id = 9),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__enum_type, 2, .production_id = 9),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 3),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 3),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_return_type, 2),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_return_type, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 1),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 1, .production_id = 11),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_type, 1, .production_id = 11),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_type, 1, .production_id = 10),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_type, 1, .production_id = 10),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_type, 1, .production_id = 8),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_type, 1, .production_id = 8),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body_statements, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body_statements, 1),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_body_statements_repeat1, 2),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_statements_repeat1, 2), SHIFT_REPEAT(792),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_statements_repeat1, 2), SHIFT_REPEAT(703),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_statements_repeat1, 2), SHIFT_REPEAT(682),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_body_statements_repeat1, 2),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_statements_repeat1, 2), SHIFT_REPEAT(779),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(711),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 2),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 2),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(733),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(738),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 3),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 3),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_variable, 3, .production_id = 6),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_variable, 3, .production_id = 6),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(768),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(769),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(747),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_variable, 4, .production_id = 23),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_variable, 4, .production_id = 23),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 4),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 4),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 5),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 5),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_item, 4, .production_id = 2),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_item, 4, .production_id = 2),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [737] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(768),
  [740] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(769),
  [743] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(217),
  [746] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(470),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uses_item_repeat1, 2),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uses_item_repeat1, 2),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uses_item_repeat1, 2), SHIFT_REPEAT(776),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(736),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_item, 5, .production_id = 4),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_item, 5, .production_id = 4),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_modifiers, 1),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_modifiers, 1),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_item, 2),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uses_item, 2),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_modifiers_repeat1, 2),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_modifiers_repeat1, 2),
  [780] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_modifiers_repeat1, 2), SHIFT_REPEAT(225),
  [783] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_modifiers_repeat1, 2), SHIFT_REPEAT(326),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_item, 3),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uses_item, 3),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uses_item_repeat1, 2), SHIFT_REPEAT(896),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type_item, 5, .production_id = 29),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type_item, 5, .production_id = 29),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_item, 4, .production_id = 20),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_item, 4, .production_id = 20),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_item, 4, .production_id = 6),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_item, 4, .production_id = 6),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 4, .production_id = 2),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 4, .production_id = 2),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 4, .production_id = 18),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 4, .production_id = 18),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_definition, 2),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_definition, 2),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 6, .production_id = 18),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 6, .production_id = 18),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_item, 6, .production_id = 4),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_item, 6, .production_id = 4),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 6, .production_id = 28),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 6, .production_id = 28),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type_item, 4, .production_id = 19),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type_item, 4, .production_id = 19),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 6, .production_id = 4),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 6, .production_id = 4),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_item, 6, .production_id = 33),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_item, 6, .production_id = 33),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_item, 4, .production_id = 21),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_item, 4, .production_id = 21),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_item, 1, .production_id = 3),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_item, 1, .production_id = 3),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type_item, 4, .production_id = 22),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_type_item, 4, .production_id = 22),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_item, 4, .production_id = 2),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_item, 4, .production_id = 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 4, .production_id = 4),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 4, .production_id = 4),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 7, .production_id = 28),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 7, .production_id = 28),
  [879] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uses_item_repeat1, 2), SHIFT_REPEAT(863),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_item, 2, .production_id = 1),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_item, 2, .production_id = 1),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_modifiers_external, 6, .production_id = 34),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_modifiers_external, 6, .production_id = 34),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_item, 5, .production_id = 4),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_item, 5, .production_id = 4),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type_item, 5, .production_id = 32),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_type_item, 5, .production_id = 32),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_item, 5, .production_id = 31),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_item, 5, .production_id = 31),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_item, 5, .production_id = 30),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_item, 5, .production_id = 30),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 5, .production_id = 28),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 5, .production_id = 28),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 5, .production_id = 4),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 5, .production_id = 4),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_item, 5, .production_id = 23),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_item, 5, .production_id = 23),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 5, .production_id = 2),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 5, .production_id = 2),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 5, .production_id = 18),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 5, .production_id = 18),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 3, .production_id = 2),
  [930] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 3, .production_id = 2),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_modifiers, 1),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forward_modifiers, 1),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_item, 5, .production_id = 2),
  [938] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_item, 5, .production_id = 2),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_modifiers, 1),
  [942] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_modifiers, 1),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(751),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(742),
  [968] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [984] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [994] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [996] = {.entry = {.count = 1, .reusable = false}}, SHIFT(794),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [1004] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [1006] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [1010] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [1012] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [1014] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [1016] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(761),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(894),
  [1022] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [1024] = {.entry = {.count = 1, .reusable = false}}, SHIFT(764),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(753),
  [1028] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(870),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(855),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(868),
  [1040] = {.entry = {.count = 1, .reusable = false}}, SHIFT(684),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [1044] = {.entry = {.count = 1, .reusable = false}}, SHIFT(521),
  [1046] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [1048] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uses_item_repeat1, 2), SHIFT_REPEAT(762),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [1053] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 6),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(879),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(837),
  [1059] = {.entry = {.count = 1, .reusable = false}}, SHIFT(793),
  [1061] = {.entry = {.count = 1, .reusable = false}}, SHIFT(689),
  [1063] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1069] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4),
  [1071] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_variable_list, 1),
  [1073] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_variable_list_repeat1, 2), SHIFT_REPEAT(794),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_record_variable_list_repeat1, 2),
  [1078] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_variable_list_repeat1, 2), SHIFT_REPEAT(683),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(773),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(804),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1099] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_statement, 1),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_statement, 1),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [1115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 23),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 23),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_derived, 3, .production_id = 15),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_derived, 3, .production_id = 15),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_variable, 5, .production_id = 23),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_variable, 5, .production_id = 23),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_variable, 4, .production_id = 6),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_variable, 4, .production_id = 6),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 2, .production_id = 2),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(811),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 1, .production_id = 13),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reference_modifiers_repeat1, 2), SHIFT_REPEAT(825),
  [1234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reference_modifiers_repeat1, 2),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_literal_repeat1, 2), SHIFT_REPEAT(724),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_literal_repeat1, 2),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1, .production_id = 1),
  [1277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(859),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2),
  [1283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2), SHIFT_REPEAT(542),
  [1286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2),
  [1288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2), SHIFT_REPEAT(580),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_attribute_list, 5),
  [1297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(637),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(883),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_attribute_list_repeat1, 2),
  [1389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_attribute_list_repeat1, 2), SHIFT_REPEAT(718),
  [1392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(650),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(771),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_attribute_list, 4),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 6),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(671),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_attribute_list, 3),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(853),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(716),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(844),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(835),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(902),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter_declaration, 3, .production_id = 6),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(860),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_redefine_value, 2),
  [1529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter_declaration, 4, .production_id = 23),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 2, .production_id = 13),
  [1535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_attribute, 3, .production_id = 13),
  [1537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 2),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(784),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(727),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(806),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(807),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 5), SHIFT(568),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 4),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(816),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 5), SHIFT(567),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter_modifiers, 1),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(743),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(772),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(761),
  [1649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_derived, 2, .production_id = 16),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_modifiers, 1),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(802),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_modifiers, 5),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(879),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(770),
  [1687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 5), SHIFT(577),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(885),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1706] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 5), SHIFT(563),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 2, .production_id = 1),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1725] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 5), SHIFT(558),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(810),
  [1740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 5), SHIFT(575),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(795),
  [1749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, .production_id = 2),
  [1751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 5), SHIFT(572),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_modifiers, 4),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 5), SHIFT(556),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1783] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_modifiers, 3),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [1797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(705),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(903),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gold(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
