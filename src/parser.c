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
#define STATE_COUNT 488
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 118
#define ALIAS_COUNT 1
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 19

enum {
  sym_identifier = 1,
  sym_line_comment = 2,
  anon_sym_module = 3,
  anon_sym_endModule = 4,
  anon_sym_endClass = 5,
  anon_sym_class = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_uses = 9,
  anon_sym_COMMA = 10,
  anon_sym_const = 11,
  anon_sym_EQ = 12,
  anon_sym_multiLang = 13,
  anon_sym_COLON = 14,
  anon_sym_memory = 15,
  anon_sym_refTo = 16,
  anon_sym_listOf = 17,
  anon_sym_LBRACK = 18,
  aux_sym_reference_modifiers_token1 = 19,
  anon_sym_RBRACK = 20,
  anon_sym_func = 21,
  anon_sym_function = 22,
  anon_sym_proc = 23,
  anon_sym_procedure = 24,
  anon_sym_forward = 25,
  anon_sym_endFunc = 26,
  anon_sym_endProc = 27,
  anon_sym_end = 28,
  anon_sym_external = 29,
  anon_sym_SQUOTE = 30,
  anon_sym_DOT = 31,
  anon_sym_inOut = 32,
  anon_sym_var = 33,
  anon_sym_return = 34,
  anon_sym_inverse = 35,
  anon_sym_final = 36,
  anon_sym_override = 37,
  anon_sym_private = 38,
  anon_sym_protected = 39,
  anon_sym_type = 40,
  anon_sym_PLUS = 41,
  anon_sym_model = 42,
  anon_sym_RBRACK2 = 43,
  aux_sym__string_literal_token1 = 44,
  anon_sym_SQUOTE2 = 45,
  anon_sym_LBRACE = 46,
  anon_sym_RBRACE = 47,
  sym__integer_literal = 48,
  anon_sym_true = 49,
  anon_sym_True = 50,
  anon_sym_false = 51,
  anon_sym_False = 52,
  sym_source_file = 53,
  sym__type_identifier = 54,
  sym_module = 55,
  sym_class = 56,
  sym_class_item = 57,
  sym__class = 58,
  sym__module_item_declaration = 59,
  sym__class_item_declaration = 60,
  sym__item_declaration = 61,
  sym_uses_item = 62,
  sym_const_item = 63,
  sym_const_modifiers = 64,
  sym__type_item = 65,
  sym_variable_item = 66,
  sym_variable_instance_type = 67,
  sym_variable_modifiers = 68,
  sym_memory_modifiers = 69,
  sym_reference = 70,
  sym_reference_modifiers = 71,
  sym_function_item = 72,
  sym_function_modifiers = 73,
  sym_forward_modifiers = 74,
  sym__function_definition = 75,
  sym_function_modifiers_external = 76,
  sym_function_parameters = 77,
  sym_function_parameter_declaration = 78,
  sym_function_parameter_modifiers = 79,
  sym_function_return_type = 80,
  sym_function_body_statements = 81,
  sym_variable_declaration = 82,
  sym_statement = 83,
  sym_declaration_statement = 84,
  sym_inverse_modifiers = 85,
  sym__override_modifiers = 86,
  sym_visibility_modifiers = 87,
  sym_enum_item = 88,
  sym_enum_derived = 89,
  sym_enum_modifiers = 90,
  sym_enum_variant_list = 91,
  sym_enum_variant = 92,
  sym_enum_variant_redefine_value = 93,
  sym_set_item = 94,
  sym_pointer_type_item = 95,
  sym_annotation = 96,
  sym_annotation_attribute_list = 97,
  sym_annotation_attribute = 98,
  sym__inner_annotation = 99,
  sym__literal = 100,
  sym__string_literal = 101,
  sym_string_literal = 102,
  sym_text_literal = 103,
  sym_integer_literal = 104,
  sym_boolean_literal = 105,
  aux_sym_module_repeat1 = 106,
  aux_sym__class_repeat1 = 107,
  aux_sym_uses_item_repeat1 = 108,
  aux_sym_variable_modifiers_repeat1 = 109,
  aux_sym_reference_modifiers_repeat1 = 110,
  aux_sym_function_modifiers_repeat1 = 111,
  aux_sym_function_parameters_repeat1 = 112,
  aux_sym_function_body_statements_repeat1 = 113,
  aux_sym_enum_variant_list_repeat1 = 114,
  aux_sym_annotation_attribute_list_repeat1 = 115,
  aux_sym__string_literal_repeat1 = 116,
  aux_sym_text_literal_repeat1 = 117,
  alias_sym_type_identifier = 118,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_line_comment] = "line_comment",
  [anon_sym_module] = "module",
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
  [anon_sym_forward] = "forward",
  [anon_sym_endFunc] = "endFunc",
  [anon_sym_endProc] = "endProc",
  [anon_sym_end] = "end",
  [anon_sym_external] = "external",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DOT] = ".",
  [anon_sym_inOut] = "inOut",
  [anon_sym_var] = "var",
  [anon_sym_return] = "return",
  [anon_sym_inverse] = "inverse",
  [anon_sym_final] = "final",
  [anon_sym_override] = "override",
  [anon_sym_private] = "private",
  [anon_sym_protected] = "protected",
  [anon_sym_type] = "type",
  [anon_sym_PLUS] = "+",
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
  [sym_variable_item] = "variable_item",
  [sym_variable_instance_type] = "variable_instance_type",
  [sym_variable_modifiers] = "variable_modifiers",
  [sym_memory_modifiers] = "memory_modifiers",
  [sym_reference] = "reference",
  [sym_reference_modifiers] = "reference_modifiers",
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
  [sym__override_modifiers] = "_override_modifiers",
  [sym_visibility_modifiers] = "visibility_modifiers",
  [sym_enum_item] = "enum_item",
  [sym_enum_derived] = "enum_derived",
  [sym_enum_modifiers] = "enum_modifiers",
  [sym_enum_variant_list] = "enum_variant_list",
  [sym_enum_variant] = "enum_variant",
  [sym_enum_variant_redefine_value] = "enum_variant_redefine_value",
  [sym_set_item] = "set_item",
  [sym_pointer_type_item] = "pointer_type_item",
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
  [anon_sym_forward] = anon_sym_forward,
  [anon_sym_endFunc] = anon_sym_endFunc,
  [anon_sym_endProc] = anon_sym_endProc,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_external] = anon_sym_external,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_inOut] = anon_sym_inOut,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_inverse] = anon_sym_inverse,
  [anon_sym_final] = anon_sym_final,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_PLUS] = anon_sym_PLUS,
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
  [sym_variable_item] = sym_variable_item,
  [sym_variable_instance_type] = sym_variable_instance_type,
  [sym_variable_modifiers] = sym_variable_modifiers,
  [sym_memory_modifiers] = sym_memory_modifiers,
  [sym_reference] = sym_reference,
  [sym_reference_modifiers] = sym_reference_modifiers,
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
  [sym__override_modifiers] = sym__override_modifiers,
  [sym_visibility_modifiers] = sym_visibility_modifiers,
  [sym_enum_item] = sym_enum_item,
  [sym_enum_derived] = sym_enum_derived,
  [sym_enum_modifiers] = sym_enum_modifiers,
  [sym_enum_variant_list] = sym_enum_variant_list,
  [sym_enum_variant] = sym_enum_variant,
  [sym_enum_variant_redefine_value] = sym_enum_variant_redefine_value,
  [sym_set_item] = sym_set_item,
  [sym_pointer_type_item] = sym_pointer_type_item,
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
  [anon_sym_end] = {
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
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
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
  [sym_variable_item] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_instance_type] = {
    .visible = true,
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
  [sym__override_modifiers] = {
    .visible = false,
    .named = true,
  },
  [sym_visibility_modifiers] = {
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
  [sym_set_item] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer_type_item] = {
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
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 4},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 1},
  [11] = {.index = 17, .length = 4},
  [12] = {.index = 21, .length = 1},
  [13] = {.index = 22, .length = 2},
  [14] = {.index = 24, .length = 1},
  [15] = {.index = 25, .length = 3},
  [16] = {.index = 28, .length = 2},
  [17] = {.index = 30, .length = 2},
  [18] = {.index = 32, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_derived, 0, .inherited = true},
    {field_name, 0, .inherited = true},
  [2] =
    {field_name, 1},
  [3] =
    {field_name, 2},
  [4] =
    {field_name, 0},
    {field_type, 2},
  [6] =
    {field_derived, 2},
    {field_derived, 3},
    {field_derived, 4},
    {field_name, 1},
  [10] =
    {field_name, 1},
    {field_parameters, 2},
  [12] =
    {field_body, 3},
    {field_name, 1},
  [14] =
    {field_name, 1},
    {field_type, 3},
  [16] =
    {field_name, 0},
  [17] =
    {field_derived, 3},
    {field_derived, 4},
    {field_derived, 5},
    {field_name, 2},
  [21] =
    {field_backref, 1},
  [22] =
    {field_name, 1},
    {field_type, 4},
  [24] =
    {field_type, 0},
  [25] =
    {field_body, 4},
    {field_derived, 3},
    {field_name, 1},
  [28] =
    {field_name, 2},
    {field_type, 4},
  [30] =
    {field_enum_type, 4},
    {field_name, 1},
  [32] =
    {field_dll_function_name, 4},
    {field_dll_name, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
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
  [10] = 8,
  [11] = 8,
  [12] = 9,
  [13] = 9,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 19,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 24,
  [31] = 26,
  [32] = 28,
  [33] = 29,
  [34] = 27,
  [35] = 25,
  [36] = 21,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 38,
  [42] = 40,
  [43] = 43,
  [44] = 37,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 37,
  [51] = 47,
  [52] = 46,
  [53] = 43,
  [54] = 40,
  [55] = 49,
  [56] = 45,
  [57] = 38,
  [58] = 48,
  [59] = 47,
  [60] = 46,
  [61] = 49,
  [62] = 48,
  [63] = 45,
  [64] = 43,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 65,
  [70] = 39,
  [71] = 68,
  [72] = 66,
  [73] = 73,
  [74] = 74,
  [75] = 67,
  [76] = 76,
  [77] = 77,
  [78] = 66,
  [79] = 79,
  [80] = 80,
  [81] = 65,
  [82] = 82,
  [83] = 83,
  [84] = 68,
  [85] = 67,
  [86] = 86,
  [87] = 39,
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
  [101] = 90,
  [102] = 102,
  [103] = 96,
  [104] = 89,
  [105] = 105,
  [106] = 97,
  [107] = 95,
  [108] = 98,
  [109] = 83,
  [110] = 110,
  [111] = 90,
  [112] = 82,
  [113] = 113,
  [114] = 99,
  [115] = 115,
  [116] = 88,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 98,
  [121] = 102,
  [122] = 105,
  [123] = 86,
  [124] = 124,
  [125] = 97,
  [126] = 126,
  [127] = 100,
  [128] = 96,
  [129] = 129,
  [130] = 80,
  [131] = 131,
  [132] = 74,
  [133] = 133,
  [134] = 119,
  [135] = 73,
  [136] = 136,
  [137] = 77,
  [138] = 95,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 79,
  [144] = 144,
  [145] = 145,
  [146] = 39,
  [147] = 119,
  [148] = 148,
  [149] = 149,
  [150] = 89,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 39,
  [156] = 156,
  [157] = 67,
  [158] = 118,
  [159] = 115,
  [160] = 126,
  [161] = 113,
  [162] = 145,
  [163] = 141,
  [164] = 153,
  [165] = 142,
  [166] = 149,
  [167] = 151,
  [168] = 152,
  [169] = 154,
  [170] = 117,
  [171] = 148,
  [172] = 139,
  [173] = 133,
  [174] = 110,
  [175] = 100,
  [176] = 131,
  [177] = 86,
  [178] = 124,
  [179] = 105,
  [180] = 88,
  [181] = 39,
  [182] = 102,
  [183] = 83,
  [184] = 80,
  [185] = 99,
  [186] = 77,
  [187] = 82,
  [188] = 74,
  [189] = 79,
  [190] = 73,
  [191] = 124,
  [192] = 39,
  [193] = 151,
  [194] = 149,
  [195] = 142,
  [196] = 141,
  [197] = 117,
  [198] = 154,
  [199] = 118,
  [200] = 152,
  [201] = 115,
  [202] = 131,
  [203] = 113,
  [204] = 148,
  [205] = 139,
  [206] = 133,
  [207] = 110,
  [208] = 153,
  [209] = 145,
  [210] = 126,
  [211] = 95,
  [212] = 97,
  [213] = 90,
  [214] = 98,
  [215] = 89,
  [216] = 105,
  [217] = 99,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 219,
  [222] = 100,
  [223] = 102,
  [224] = 219,
  [225] = 219,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 154,
  [230] = 117,
  [231] = 133,
  [232] = 232,
  [233] = 110,
  [234] = 228,
  [235] = 152,
  [236] = 228,
  [237] = 227,
  [238] = 238,
  [239] = 226,
  [240] = 240,
  [241] = 226,
  [242] = 227,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 245,
  [248] = 245,
  [249] = 246,
  [250] = 246,
  [251] = 246,
  [252] = 245,
  [253] = 253,
  [254] = 254,
  [255] = 253,
  [256] = 253,
  [257] = 257,
  [258] = 258,
  [259] = 253,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 262,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 277,
  [279] = 279,
  [280] = 280,
  [281] = 261,
  [282] = 272,
  [283] = 283,
  [284] = 275,
  [285] = 263,
  [286] = 286,
  [287] = 263,
  [288] = 288,
  [289] = 277,
  [290] = 261,
  [291] = 272,
  [292] = 292,
  [293] = 263,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 262,
  [298] = 298,
  [299] = 299,
  [300] = 277,
  [301] = 275,
  [302] = 279,
  [303] = 283,
  [304] = 304,
  [305] = 305,
  [306] = 299,
  [307] = 279,
  [308] = 283,
  [309] = 309,
  [310] = 274,
  [311] = 274,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 286,
  [321] = 321,
  [322] = 315,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 286,
  [332] = 332,
  [333] = 317,
  [334] = 334,
  [335] = 317,
  [336] = 336,
  [337] = 273,
  [338] = 325,
  [339] = 339,
  [340] = 328,
  [341] = 315,
  [342] = 314,
  [343] = 343,
  [344] = 330,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 319,
  [349] = 328,
  [350] = 315,
  [351] = 273,
  [352] = 319,
  [353] = 328,
  [354] = 336,
  [355] = 336,
  [356] = 321,
  [357] = 357,
  [358] = 314,
  [359] = 359,
  [360] = 325,
  [361] = 321,
  [362] = 362,
  [363] = 314,
  [364] = 364,
  [365] = 365,
  [366] = 330,
  [367] = 317,
  [368] = 368,
  [369] = 321,
  [370] = 319,
  [371] = 330,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 286,
  [387] = 387,
  [388] = 388,
  [389] = 273,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 379,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 384,
  [398] = 384,
  [399] = 385,
  [400] = 400,
  [401] = 401,
  [402] = 374,
  [403] = 376,
  [404] = 378,
  [405] = 405,
  [406] = 406,
  [407] = 380,
  [408] = 381,
  [409] = 383,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 385,
  [414] = 414,
  [415] = 415,
  [416] = 390,
  [417] = 374,
  [418] = 418,
  [419] = 419,
  [420] = 375,
  [421] = 421,
  [422] = 396,
  [423] = 423,
  [424] = 384,
  [425] = 385,
  [426] = 376,
  [427] = 427,
  [428] = 381,
  [429] = 376,
  [430] = 430,
  [431] = 431,
  [432] = 390,
  [433] = 380,
  [434] = 381,
  [435] = 435,
  [436] = 382,
  [437] = 394,
  [438] = 405,
  [439] = 410,
  [440] = 411,
  [441] = 390,
  [442] = 414,
  [443] = 415,
  [444] = 387,
  [445] = 445,
  [446] = 427,
  [447] = 383,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 394,
  [453] = 405,
  [454] = 410,
  [455] = 414,
  [456] = 415,
  [457] = 387,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 450,
  [463] = 463,
  [464] = 415,
  [465] = 396,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 400,
  [470] = 450,
  [471] = 412,
  [472] = 472,
  [473] = 473,
  [474] = 400,
  [475] = 475,
  [476] = 412,
  [477] = 472,
  [478] = 472,
  [479] = 479,
  [480] = 412,
  [481] = 388,
  [482] = 458,
  [483] = 388,
  [484] = 458,
  [485] = 388,
  [486] = 430,
  [487] = 430,
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
      if (eof) ADVANCE(190);
      if (lookahead == '\'') ADVANCE(372);
      if (lookahead == '(') ADVANCE(313);
      if (lookahead == ')') ADVANCE(314);
      if (lookahead == '+') ADVANCE(367);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == ':') ADVANCE(323);
      if (lookahead == ';') ADVANCE(306);
      if (lookahead == '=') ADVANCE(320);
      if (lookahead == 'A' ||
          lookahead == 'I' ||
          lookahead == 'O' ||
          lookahead == 'P') ADVANCE(331);
      if (lookahead == 'F') ADVANCE(18);
      if (lookahead == 'T') ADVANCE(333);
      if (lookahead == 'V') ADVANCE(332);
      if (lookahead == '[') ADVANCE(330);
      if (lookahead == ']') ADVANCE(369);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'l') ADVANCE(79);
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == 'p') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead == 'v') ADVANCE(20);
      if (lookahead == '{') ADVANCE(373);
      if (lookahead == '}') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(181)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(371);
      if (lookahead == '\'') ADVANCE(372);
      if (lookahead == ';') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('!' <= lookahead && lookahead <= '~') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(370);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(371);
      if (lookahead == ';') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('!' <= lookahead && lookahead <= '~') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(370);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(348);
      if (lookahead == '(') ADVANCE(313);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == ';') ADVANCE(306);
      if (lookahead == 'F') ADVANCE(200);
      if (lookahead == 'T') ADVANCE(272);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 't') ADVANCE(276);
      if (lookahead == '{') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(305);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(313);
      if (lookahead == ')') ADVANCE(314);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == ';') ADVANCE(306);
      if (lookahead == '[') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(305);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(314);
      if (lookahead == ';') ADVANCE(306);
      if (lookahead == 'c') ADVANCE(261);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead == 'v') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(305);
      END_STATE();
    case 6:
      if (lookahead == ';') ADVANCE(306);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead == 'm') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(305);
      END_STATE();
    case 7:
      if (lookahead == ';') ADVANCE(306);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(305);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(306);
      if (lookahead == 'm') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(305);
      END_STATE();
    case 9:
      if (lookahead == ';') ADVANCE(306);
      if (lookahead == 'A' ||
          lookahead == 'I' ||
          lookahead == 'O' ||
          lookahead == 'P' ||
          lookahead == 'T') ADVANCE(331);
      if (lookahead == 'V') ADVANCE(332);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead == 'C') ADVANCE(171);
      if (lookahead == 'I') ADVANCE(110);
      if (lookahead == 'O') ADVANCE(177);
      if (lookahead == 'V') ADVANCE(62);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(95);
      END_STATE();
    case 12:
      if (lookahead == 'L') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'O') ADVANCE(74);
      END_STATE();
    case 14:
      if (lookahead == 'O') ADVANCE(168);
      if (lookahead == 'T') ADVANCE(130);
      if (lookahead == 'v') ADVANCE(70);
      END_STATE();
    case 15:
      if (lookahead == 'P') ADVANCE(134);
      END_STATE();
    case 16:
      if (lookahead == 'T') ADVANCE(114);
      END_STATE();
    case 17:
      if (lookahead == 'T') ADVANCE(130);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(336);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(339);
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(344);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(345);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(331);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(346);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(343);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(328);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(321);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 85:
      if (lookahead == 'j') ADVANCE(72);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(331);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(357);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(347);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(119);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(331);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(165);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(326);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(169);
      if (lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 140:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(318);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 168:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 169:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 170:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 171:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 172:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 173:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 174:
      if (lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 175:
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 176:
      if (lookahead == 'v') ADVANCE(48);
      END_STATE();
    case 177:
      if (lookahead == 'w') ADVANCE(113);
      END_STATE();
    case 178:
      if (lookahead == 'w') ADVANCE(25);
      END_STATE();
    case 179:
      if (lookahead == 'y') ADVANCE(324);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 181:
      if (eof) ADVANCE(190);
      if (lookahead == '\'') ADVANCE(348);
      if (lookahead == '(') ADVANCE(313);
      if (lookahead == ')') ADVANCE(314);
      if (lookahead == '+') ADVANCE(367);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '.') ADVANCE(349);
      if (lookahead == ':') ADVANCE(323);
      if (lookahead == ';') ADVANCE(306);
      if (lookahead == '=') ADVANCE(320);
      if (lookahead == 'A' ||
          lookahead == 'I' ||
          lookahead == 'O' ||
          lookahead == 'P') ADVANCE(331);
      if (lookahead == 'F') ADVANCE(18);
      if (lookahead == 'T') ADVANCE(333);
      if (lookahead == 'V') ADVANCE(332);
      if (lookahead == '[') ADVANCE(330);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'l') ADVANCE(79);
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == 'p') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(148);
      if (lookahead == 'v') ADVANCE(20);
      if (lookahead == '{') ADVANCE(373);
      if (lookahead == '}') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(181)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 182:
      if (eof) ADVANCE(190);
      if (lookahead == '\'') ADVANCE(348);
      if (lookahead == ')') ADVANCE(314);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == ';') ADVANCE(306);
      if (lookahead == '[') ADVANCE(330);
      if (lookahead == ']') ADVANCE(369);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == 'f') ADVANCE(295);
      if (lookahead == 'm') ADVANCE(216);
      if (lookahead == 'p') ADVANCE(267);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == 'u') ADVANCE(281);
      if (lookahead == '}') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(183)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(305);
      END_STATE();
    case 183:
      if (eof) ADVANCE(190);
      if (lookahead == '\'') ADVANCE(348);
      if (lookahead == ')') ADVANCE(314);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == ';') ADVANCE(306);
      if (lookahead == '[') ADVANCE(330);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == 'f') ADVANCE(295);
      if (lookahead == 'm') ADVANCE(216);
      if (lookahead == 'p') ADVANCE(267);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == 'u') ADVANCE(281);
      if (lookahead == '}') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(183)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(305);
      END_STATE();
    case 184:
      if (eof) ADVANCE(190);
      if (lookahead == '\'') ADVANCE(348);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == ';') ADVANCE(306);
      if (lookahead == 'F') ADVANCE(18);
      if (lookahead == 'T') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '{') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(184)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 185:
      if (eof) ADVANCE(190);
      if (lookahead == '(') ADVANCE(313);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == ';') ADVANCE(306);
      if (lookahead == '[') ADVANCE(330);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead == 'c') ADVANCE(261);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 'f') ADVANCE(295);
      if (lookahead == 'm') ADVANCE(216);
      if (lookahead == 'p') ADVANCE(267);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == 'u') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(185)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(305);
      END_STATE();
    case 186:
      if (eof) ADVANCE(190);
      if (lookahead == ')') ADVANCE(314);
      if (lookahead == '+') ADVANCE(367);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == ':') ADVANCE(323);
      if (lookahead == ';') ADVANCE(306);
      if (lookahead == '[') ADVANCE(330);
      if (lookahead == ']') ADVANCE(334);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == 'f') ADVANCE(240);
      if (lookahead == 'i') ADVANCE(259);
      if (lookahead == 'm') ADVANCE(216);
      if (lookahead == 'o') ADVANCE(301);
      if (lookahead == 'p') ADVANCE(268);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == 'u') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(186)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(305);
      END_STATE();
    case 187:
      if (eof) ADVANCE(190);
      if (lookahead == ')') ADVANCE(314);
      if (lookahead == ',') ADVANCE(317);
      if (lookahead == ';') ADVANCE(306);
      if (lookahead == '[') ADVANCE(330);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == 'f') ADVANCE(295);
      if (lookahead == 'm') ADVANCE(215);
      if (lookahead == 'p') ADVANCE(267);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == 'u') ADVANCE(281);
      if (lookahead == '}') ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(187)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(305);
      END_STATE();
    case 188:
      if (eof) ADVANCE(190);
      if (lookahead == ';') ADVANCE(306);
      if (lookahead == '[') ADVANCE(330);
      if (lookahead == 'c') ADVANCE(261);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 'f') ADVANCE(295);
      if (lookahead == 'm') ADVANCE(215);
      if (lookahead == 'p') ADVANCE(267);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == 'u') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(188)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(305);
      END_STATE();
    case 189:
      if (eof) ADVANCE(190);
      if (lookahead == ';') ADVANCE(306);
      if (lookahead == '[') ADVANCE(330);
      if (lookahead == 'c') ADVANCE(261);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 'f') ADVANCE(240);
      if (lookahead == 'i') ADVANCE(259);
      if (lookahead == 'm') ADVANCE(216);
      if (lookahead == 'o') ADVANCE(301);
      if (lookahead == 'p') ADVANCE(268);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == 'u') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(189)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(305);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(249);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(201);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(263);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(234);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(297);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(260);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(282);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(305);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(292);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(305);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(244);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(305);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(247);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(305);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(254);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(305);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(269);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(305);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(284);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(305);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(248);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(305);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(335);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(340);
      if (lookahead == 't') ADVANCE(228);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(340);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(293);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(193);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(191);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(364);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(294);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(296);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(222);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'u') ADVANCE(245);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(250);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(366);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(308);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(342);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(356);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(362);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(360);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(379);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(377);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(383);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(381);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(233);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(208);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(278);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(274);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(275);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(211);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(196);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(329);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(322);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(192);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(300);
      if (lookahead == 'o') ADVANCE(206);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(265);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(214);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == 'u') ADVANCE(252);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(283);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == 'o') ADVANCE(257);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(197);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(358);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(291);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(218);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(286);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(287);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(203);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(262);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(209);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(205);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(338);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(235);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(195);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(199);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(277);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(210);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(302);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(327);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(257);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(270);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(212);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(207);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(253);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(217);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(264);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(237);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(353);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(304);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(239);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(298);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(219);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(271);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(285);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(299);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(288);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(316);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(312);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(310);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(229);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(279);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(290);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(280);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(220);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(225);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(226);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(319);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(351);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(194);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(236);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(221);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(232);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(246);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(252);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(273);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(289);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(223);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(224);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(198);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(230);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(231);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(266);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(325);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_endModule);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_endClass);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_endClass);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_class);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_uses);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_const);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_multiLang);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_multiLang);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_memory);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_memory);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_refTo);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_refTo);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_listOf);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_listOf);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_reference_modifiers_token1);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_reference_modifiers_token1);
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_reference_modifiers_token1);
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_func);
      if (lookahead == 't') ADVANCE(238);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_func);
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_function);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == 'e') ADVANCE(213);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_procedure);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_procedure);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_forward);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_endFunc);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_endProc);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'F') ADVANCE(170);
      if (lookahead == 'P') ADVANCE(132);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_inOut);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_inOut);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_inverse);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_inverse);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_final);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_override);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_private);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_protected);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_type);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == ' ') ADVANCE(371);
      if (lookahead == ';') ADVANCE(306);
      if (('!' <= lookahead && lookahead <= '~') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(370);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_True);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_False);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(305);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 182},
  [15] = {.lex_state = 182},
  [16] = {.lex_state = 182},
  [17] = {.lex_state = 182},
  [18] = {.lex_state = 182},
  [19] = {.lex_state = 185},
  [20] = {.lex_state = 185},
  [21] = {.lex_state = 185},
  [22] = {.lex_state = 185},
  [23] = {.lex_state = 185},
  [24] = {.lex_state = 185},
  [25] = {.lex_state = 185},
  [26] = {.lex_state = 185},
  [27] = {.lex_state = 185},
  [28] = {.lex_state = 185},
  [29] = {.lex_state = 185},
  [30] = {.lex_state = 185},
  [31] = {.lex_state = 185},
  [32] = {.lex_state = 185},
  [33] = {.lex_state = 185},
  [34] = {.lex_state = 185},
  [35] = {.lex_state = 185},
  [36] = {.lex_state = 185},
  [37] = {.lex_state = 186},
  [38] = {.lex_state = 186},
  [39] = {.lex_state = 186},
  [40] = {.lex_state = 186},
  [41] = {.lex_state = 189},
  [42] = {.lex_state = 189},
  [43] = {.lex_state = 186},
  [44] = {.lex_state = 189},
  [45] = {.lex_state = 186},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 189},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 189},
  [54] = {.lex_state = 189},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 189},
  [57] = {.lex_state = 189},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 189},
  [64] = {.lex_state = 189},
  [65] = {.lex_state = 186},
  [66] = {.lex_state = 186},
  [67] = {.lex_state = 186},
  [68] = {.lex_state = 186},
  [69] = {.lex_state = 189},
  [70] = {.lex_state = 189},
  [71] = {.lex_state = 189},
  [72] = {.lex_state = 189},
  [73] = {.lex_state = 187},
  [74] = {.lex_state = 187},
  [75] = {.lex_state = 189},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 187},
  [78] = {.lex_state = 189},
  [79] = {.lex_state = 187},
  [80] = {.lex_state = 187},
  [81] = {.lex_state = 189},
  [82] = {.lex_state = 187},
  [83] = {.lex_state = 187},
  [84] = {.lex_state = 189},
  [85] = {.lex_state = 189},
  [86] = {.lex_state = 187},
  [87] = {.lex_state = 189},
  [88] = {.lex_state = 187},
  [89] = {.lex_state = 182},
  [90] = {.lex_state = 187},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 182},
  [96] = {.lex_state = 187},
  [97] = {.lex_state = 187},
  [98] = {.lex_state = 182},
  [99] = {.lex_state = 187},
  [100] = {.lex_state = 187},
  [101] = {.lex_state = 188},
  [102] = {.lex_state = 182},
  [103] = {.lex_state = 188},
  [104] = {.lex_state = 185},
  [105] = {.lex_state = 187},
  [106] = {.lex_state = 188},
  [107] = {.lex_state = 185},
  [108] = {.lex_state = 185},
  [109] = {.lex_state = 188},
  [110] = {.lex_state = 182},
  [111] = {.lex_state = 188},
  [112] = {.lex_state = 188},
  [113] = {.lex_state = 182},
  [114] = {.lex_state = 188},
  [115] = {.lex_state = 182},
  [116] = {.lex_state = 188},
  [117] = {.lex_state = 182},
  [118] = {.lex_state = 182},
  [119] = {.lex_state = 184},
  [120] = {.lex_state = 185},
  [121] = {.lex_state = 185},
  [122] = {.lex_state = 188},
  [123] = {.lex_state = 188},
  [124] = {.lex_state = 182},
  [125] = {.lex_state = 188},
  [126] = {.lex_state = 182},
  [127] = {.lex_state = 188},
  [128] = {.lex_state = 188},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 188},
  [131] = {.lex_state = 182},
  [132] = {.lex_state = 188},
  [133] = {.lex_state = 182},
  [134] = {.lex_state = 184},
  [135] = {.lex_state = 188},
  [136] = {.lex_state = 182},
  [137] = {.lex_state = 188},
  [138] = {.lex_state = 185},
  [139] = {.lex_state = 182},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 182},
  [142] = {.lex_state = 182},
  [143] = {.lex_state = 188},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 182},
  [146] = {.lex_state = 182},
  [147] = {.lex_state = 184},
  [148] = {.lex_state = 182},
  [149] = {.lex_state = 182},
  [150] = {.lex_state = 185},
  [151] = {.lex_state = 182},
  [152] = {.lex_state = 182},
  [153] = {.lex_state = 182},
  [154] = {.lex_state = 182},
  [155] = {.lex_state = 185},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 185},
  [159] = {.lex_state = 185},
  [160] = {.lex_state = 185},
  [161] = {.lex_state = 185},
  [162] = {.lex_state = 185},
  [163] = {.lex_state = 185},
  [164] = {.lex_state = 185},
  [165] = {.lex_state = 185},
  [166] = {.lex_state = 185},
  [167] = {.lex_state = 185},
  [168] = {.lex_state = 185},
  [169] = {.lex_state = 185},
  [170] = {.lex_state = 185},
  [171] = {.lex_state = 185},
  [172] = {.lex_state = 185},
  [173] = {.lex_state = 185},
  [174] = {.lex_state = 185},
  [175] = {.lex_state = 188},
  [176] = {.lex_state = 185},
  [177] = {.lex_state = 188},
  [178] = {.lex_state = 185},
  [179] = {.lex_state = 188},
  [180] = {.lex_state = 188},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 185},
  [183] = {.lex_state = 188},
  [184] = {.lex_state = 188},
  [185] = {.lex_state = 188},
  [186] = {.lex_state = 188},
  [187] = {.lex_state = 188},
  [188] = {.lex_state = 188},
  [189] = {.lex_state = 188},
  [190] = {.lex_state = 188},
  [191] = {.lex_state = 185},
  [192] = {.lex_state = 185},
  [193] = {.lex_state = 185},
  [194] = {.lex_state = 185},
  [195] = {.lex_state = 185},
  [196] = {.lex_state = 185},
  [197] = {.lex_state = 185},
  [198] = {.lex_state = 185},
  [199] = {.lex_state = 185},
  [200] = {.lex_state = 185},
  [201] = {.lex_state = 185},
  [202] = {.lex_state = 185},
  [203] = {.lex_state = 185},
  [204] = {.lex_state = 185},
  [205] = {.lex_state = 185},
  [206] = {.lex_state = 185},
  [207] = {.lex_state = 185},
  [208] = {.lex_state = 185},
  [209] = {.lex_state = 185},
  [210] = {.lex_state = 185},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 5},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 7},
  [227] = {.lex_state = 7},
  [228] = {.lex_state = 7},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 7},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 7},
  [237] = {.lex_state = 7},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 7},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 7},
  [242] = {.lex_state = 7},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 4},
  [254] = {.lex_state = 6},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 4},
  [259] = {.lex_state = 4},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 182},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 182},
  [265] = {.lex_state = 182},
  [266] = {.lex_state = 185},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 182},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 6},
  [274] = {.lex_state = 182},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 1},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 6},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 182},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 4},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 185},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 4},
  [297] = {.lex_state = 182},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 8},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 1},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 185},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 8},
  [307] = {.lex_state = 1},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 182},
  [311] = {.lex_state = 182},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 8},
  [321] = {.lex_state = 4},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 182},
  [326] = {.lex_state = 9},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 4},
  [329] = {.lex_state = 185},
  [330] = {.lex_state = 4},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 4},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 182},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 4},
  [337] = {.lex_state = 8},
  [338] = {.lex_state = 182},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 4},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 4},
  [344] = {.lex_state = 4},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 4},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 4},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 4},
  [354] = {.lex_state = 4},
  [355] = {.lex_state = 4},
  [356] = {.lex_state = 4},
  [357] = {.lex_state = 9},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 4},
  [360] = {.lex_state = 182},
  [361] = {.lex_state = 4},
  [362] = {.lex_state = 4},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 184},
  [366] = {.lex_state = 4},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 4},
  [369] = {.lex_state = 4},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 4},
  [372] = {.lex_state = 9},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 4},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 4},
  [379] = {.lex_state = 4},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 182},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 4},
  [384] = {.lex_state = 4},
  [385] = {.lex_state = 182},
  [386] = {.lex_state = 4},
  [387] = {.lex_state = 4},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 4},
  [390] = {.lex_state = 185},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 4},
  [393] = {.lex_state = 4},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 182},
  [397] = {.lex_state = 4},
  [398] = {.lex_state = 4},
  [399] = {.lex_state = 182},
  [400] = {.lex_state = 4},
  [401] = {.lex_state = 4},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 4},
  [404] = {.lex_state = 4},
  [405] = {.lex_state = 4},
  [406] = {.lex_state = 184},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 182},
  [409] = {.lex_state = 4},
  [410] = {.lex_state = 4},
  [411] = {.lex_state = 4},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 182},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 185},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 4},
  [422] = {.lex_state = 182},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 4},
  [425] = {.lex_state = 182},
  [426] = {.lex_state = 4},
  [427] = {.lex_state = 4},
  [428] = {.lex_state = 182},
  [429] = {.lex_state = 4},
  [430] = {.lex_state = 182},
  [431] = {.lex_state = 4},
  [432] = {.lex_state = 185},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 182},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 4},
  [439] = {.lex_state = 4},
  [440] = {.lex_state = 4},
  [441] = {.lex_state = 185},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 4},
  [445] = {.lex_state = 4},
  [446] = {.lex_state = 4},
  [447] = {.lex_state = 4},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 4},
  [450] = {.lex_state = 4},
  [451] = {.lex_state = 4},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 4},
  [454] = {.lex_state = 4},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 4},
  [458] = {.lex_state = 4},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 9},
  [462] = {.lex_state = 4},
  [463] = {.lex_state = 4},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 182},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 4},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 4},
  [470] = {.lex_state = 4},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 4},
  [474] = {.lex_state = 4},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 4},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 4},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 4},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 182},
  [487] = {.lex_state = 182},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(1),
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
    [anon_sym_forward] = ACTIONS(1),
    [anon_sym_endFunc] = ACTIONS(1),
    [anon_sym_endProc] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_external] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_inOut] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_inverse] = ACTIONS(1),
    [anon_sym_final] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
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
    [sym_source_file] = STATE(377),
    [sym_module] = STATE(373),
    [sym_class] = STATE(373),
    [sym__class] = STATE(365),
    [sym_annotation] = STATE(364),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_class] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(15), 1,
      anon_sym_forward,
    ACTIONS(19), 1,
      anon_sym_end,
    ACTIONS(21), 1,
      anon_sym_external,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_type,
    STATE(7), 1,
      sym_function_parameters,
    STATE(10), 1,
      sym_function_return_type,
    STATE(59), 1,
      sym_function_modifiers,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(308), 1,
      sym_function_body_statements,
    ACTIONS(17), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    ACTIONS(27), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(29), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(93), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(209), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [77] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(33), 1,
      anon_sym_forward,
    ACTIONS(37), 1,
      anon_sym_end,
    ACTIONS(39), 1,
      anon_sym_external,
    STATE(5), 1,
      sym_function_parameters,
    STATE(11), 1,
      sym_function_return_type,
    STATE(47), 1,
      sym_function_modifiers,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(303), 1,
      sym_function_body_statements,
    ACTIONS(27), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(29), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(35), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(93), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(162), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [154] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(41), 1,
      anon_sym_forward,
    ACTIONS(45), 1,
      anon_sym_end,
    ACTIONS(47), 1,
      anon_sym_external,
    STATE(6), 1,
      sym_function_parameters,
    STATE(8), 1,
      sym_function_return_type,
    STATE(51), 1,
      sym_function_modifiers,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(283), 1,
      sym_function_body_statements,
    ACTIONS(27), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(29), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(43), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(93), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(145), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [231] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(33), 1,
      anon_sym_forward,
    ACTIONS(39), 1,
      anon_sym_external,
    ACTIONS(51), 1,
      anon_sym_end,
    STATE(9), 1,
      sym_function_return_type,
    STATE(48), 1,
      sym_function_modifiers,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(303), 1,
      sym_function_body_statements,
    ACTIONS(27), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(29), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(49), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(93), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(159), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [302] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(41), 1,
      anon_sym_forward,
    ACTIONS(47), 1,
      anon_sym_external,
    ACTIONS(55), 1,
      anon_sym_end,
    STATE(13), 1,
      sym_function_return_type,
    STATE(58), 1,
      sym_function_modifiers,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(283), 1,
      sym_function_body_statements,
    ACTIONS(27), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(29), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(53), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(93), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(115), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [373] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(15), 1,
      anon_sym_forward,
    ACTIONS(21), 1,
      anon_sym_external,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(59), 1,
      anon_sym_end,
    STATE(12), 1,
      sym_function_return_type,
    STATE(62), 1,
      sym_function_modifiers,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(308), 1,
      sym_function_body_statements,
    ACTIONS(27), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(29), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(57), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(93), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(201), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [444] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(41), 1,
      anon_sym_forward,
    ACTIONS(47), 1,
      anon_sym_external,
    ACTIONS(63), 1,
      anon_sym_end,
    STATE(46), 1,
      sym_function_modifiers,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(283), 1,
      sym_function_body_statements,
    ACTIONS(27), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(29), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(61), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(93), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(113), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [509] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(33), 1,
      anon_sym_forward,
    ACTIONS(39), 1,
      anon_sym_external,
    ACTIONS(67), 1,
      anon_sym_end,
    STATE(61), 1,
      sym_function_modifiers,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(303), 1,
      sym_function_body_statements,
    ACTIONS(27), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(29), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(65), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(93), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(166), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [574] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(15), 1,
      anon_sym_forward,
    ACTIONS(21), 1,
      anon_sym_external,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(71), 1,
      anon_sym_end,
    STATE(60), 1,
      sym_function_modifiers,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(308), 1,
      sym_function_body_statements,
    ACTIONS(27), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(29), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(69), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(93), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(203), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [639] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(33), 1,
      anon_sym_forward,
    ACTIONS(39), 1,
      anon_sym_external,
    ACTIONS(75), 1,
      anon_sym_end,
    STATE(52), 1,
      sym_function_modifiers,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(303), 1,
      sym_function_body_statements,
    ACTIONS(27), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(29), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(73), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(93), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(161), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [704] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(15), 1,
      anon_sym_forward,
    ACTIONS(21), 1,
      anon_sym_external,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(79), 1,
      anon_sym_end,
    STATE(55), 1,
      sym_function_modifiers,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(308), 1,
      sym_function_body_statements,
    ACTIONS(27), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(29), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(77), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(93), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(194), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [769] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(41), 1,
      anon_sym_forward,
    ACTIONS(47), 1,
      anon_sym_external,
    ACTIONS(83), 1,
      anon_sym_end,
    STATE(49), 1,
      sym_function_modifiers,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(283), 1,
      sym_function_body_statements,
    ACTIONS(27), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(29), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(81), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(93), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(149), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [834] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_endModule,
    ACTIONS(91), 1,
      anon_sym_class,
    ACTIONS(93), 1,
      anon_sym_uses,
    ACTIONS(95), 1,
      anon_sym_const,
    ACTIONS(97), 1,
      anon_sym_memory,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      anon_sym_type,
    STATE(254), 1,
      sym_annotation,
    STATE(406), 1,
      sym__class,
    STATE(410), 1,
      sym_memory_modifiers,
    ACTIONS(101), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(16), 12,
      sym_class_item,
      sym__module_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      aux_sym_module_repeat1,
  [894] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_endModule,
    ACTIONS(112), 1,
      anon_sym_class,
    ACTIONS(115), 1,
      anon_sym_uses,
    ACTIONS(118), 1,
      anon_sym_const,
    ACTIONS(121), 1,
      anon_sym_memory,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    ACTIONS(130), 1,
      anon_sym_type,
    STATE(254), 1,
      sym_annotation,
    STATE(406), 1,
      sym__class,
    STATE(410), 1,
      sym_memory_modifiers,
    ACTIONS(127), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(15), 12,
      sym_class_item,
      sym__module_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      aux_sym_module_repeat1,
  [954] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_class,
    ACTIONS(93), 1,
      anon_sym_uses,
    ACTIONS(95), 1,
      anon_sym_const,
    ACTIONS(97), 1,
      anon_sym_memory,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      anon_sym_type,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      anon_sym_endModule,
    STATE(254), 1,
      sym_annotation,
    STATE(406), 1,
      sym__class,
    STATE(410), 1,
      sym_memory_modifiers,
    ACTIONS(101), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(15), 12,
      sym_class_item,
      sym__module_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      aux_sym_module_repeat1,
  [1014] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_class,
    ACTIONS(93), 1,
      anon_sym_uses,
    ACTIONS(95), 1,
      anon_sym_const,
    ACTIONS(97), 1,
      anon_sym_memory,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      anon_sym_type,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      anon_sym_endModule,
    STATE(254), 1,
      sym_annotation,
    STATE(406), 1,
      sym__class,
    STATE(410), 1,
      sym_memory_modifiers,
    ACTIONS(101), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(18), 12,
      sym_class_item,
      sym__module_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      aux_sym_module_repeat1,
  [1074] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_class,
    ACTIONS(93), 1,
      anon_sym_uses,
    ACTIONS(95), 1,
      anon_sym_const,
    ACTIONS(97), 1,
      anon_sym_memory,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      anon_sym_type,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      anon_sym_endModule,
    STATE(254), 1,
      sym_annotation,
    STATE(406), 1,
      sym__class,
    STATE(410), 1,
      sym_memory_modifiers,
    ACTIONS(101), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(15), 12,
      sym_class_item,
      sym__module_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      aux_sym_module_repeat1,
  [1134] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_memory,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_endClass,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_uses,
    ACTIONS(155), 1,
      anon_sym_const,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_type,
    STATE(299), 1,
      sym_annotation,
    STATE(439), 1,
      sym_memory_modifiers,
    ACTIONS(159), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(25), 11,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      aux_sym__class_repeat1,
  [1190] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_memory,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_uses,
    ACTIONS(155), 1,
      anon_sym_const,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 1,
      anon_sym_endClass,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(299), 1,
      sym_annotation,
    STATE(439), 1,
      sym_memory_modifiers,
    ACTIONS(159), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(29), 11,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      aux_sym__class_repeat1,
  [1246] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(174), 1,
      anon_sym_endClass,
    ACTIONS(176), 1,
      anon_sym_uses,
    ACTIONS(179), 1,
      anon_sym_const,
    ACTIONS(182), 1,
      anon_sym_memory,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(191), 1,
      anon_sym_type,
    STATE(299), 1,
      sym_annotation,
    STATE(439), 1,
      sym_memory_modifiers,
    ACTIONS(188), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(21), 11,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      aux_sym__class_repeat1,
  [1299] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_memory,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      anon_sym_endClass,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_uses,
    ACTIONS(200), 1,
      anon_sym_const,
    ACTIONS(204), 1,
      anon_sym_type,
    STATE(306), 1,
      sym_annotation,
    STATE(454), 1,
      sym_memory_modifiers,
    ACTIONS(202), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(33), 11,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      aux_sym__class_repeat1,
  [1352] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_memory,
    ACTIONS(149), 1,
      anon_sym_endClass,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_uses,
    ACTIONS(200), 1,
      anon_sym_const,
    ACTIONS(204), 1,
      anon_sym_type,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    STATE(306), 1,
      sym_annotation,
    STATE(454), 1,
      sym_memory_modifiers,
    ACTIONS(202), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(35), 11,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      aux_sym__class_repeat1,
  [1405] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_memory,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_uses,
    ACTIONS(155), 1,
      anon_sym_const,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(210), 1,
      anon_sym_endClass,
    STATE(299), 1,
      sym_annotation,
    STATE(439), 1,
      sym_memory_modifiers,
    ACTIONS(159), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(21), 11,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      aux_sym__class_repeat1,
  [1458] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_memory,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_uses,
    ACTIONS(155), 1,
      anon_sym_const,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 1,
      anon_sym_endClass,
    STATE(299), 1,
      sym_annotation,
    STATE(439), 1,
      sym_memory_modifiers,
    ACTIONS(159), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(21), 11,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      aux_sym__class_repeat1,
  [1511] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_memory,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_uses,
    ACTIONS(155), 1,
      anon_sym_const,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 1,
      anon_sym_endClass,
    STATE(299), 1,
      sym_annotation,
    STATE(439), 1,
      sym_memory_modifiers,
    ACTIONS(159), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(24), 11,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      aux_sym__class_repeat1,
  [1564] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_memory,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_uses,
    ACTIONS(155), 1,
      anon_sym_const,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 1,
      anon_sym_endClass,
    STATE(299), 1,
      sym_annotation,
    STATE(439), 1,
      sym_memory_modifiers,
    ACTIONS(159), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(28), 11,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      aux_sym__class_repeat1,
  [1617] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_memory,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_uses,
    ACTIONS(155), 1,
      anon_sym_const,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    ACTIONS(226), 1,
      anon_sym_endClass,
    STATE(299), 1,
      sym_annotation,
    STATE(439), 1,
      sym_memory_modifiers,
    ACTIONS(159), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(21), 11,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      aux_sym__class_repeat1,
  [1670] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_memory,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_uses,
    ACTIONS(155), 1,
      anon_sym_const,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(230), 1,
      anon_sym_endClass,
    STATE(299), 1,
      sym_annotation,
    STATE(439), 1,
      sym_memory_modifiers,
    ACTIONS(159), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(21), 11,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      aux_sym__class_repeat1,
  [1723] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_memory,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_uses,
    ACTIONS(200), 1,
      anon_sym_const,
    ACTIONS(204), 1,
      anon_sym_type,
    ACTIONS(210), 1,
      anon_sym_endClass,
    STATE(306), 1,
      sym_annotation,
    STATE(454), 1,
      sym_memory_modifiers,
    ACTIONS(202), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(36), 11,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      aux_sym__class_repeat1,
  [1773] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_memory,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_uses,
    ACTIONS(200), 1,
      anon_sym_const,
    ACTIONS(204), 1,
      anon_sym_type,
    ACTIONS(218), 1,
      anon_sym_endClass,
    STATE(306), 1,
      sym_annotation,
    STATE(454), 1,
      sym_memory_modifiers,
    ACTIONS(202), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(30), 11,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      aux_sym__class_repeat1,
  [1823] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_memory,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_uses,
    ACTIONS(200), 1,
      anon_sym_const,
    ACTIONS(204), 1,
      anon_sym_type,
    ACTIONS(226), 1,
      anon_sym_endClass,
    STATE(306), 1,
      sym_annotation,
    STATE(454), 1,
      sym_memory_modifiers,
    ACTIONS(202), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(36), 11,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      aux_sym__class_repeat1,
  [1873] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_memory,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_uses,
    ACTIONS(200), 1,
      anon_sym_const,
    ACTIONS(204), 1,
      anon_sym_type,
    ACTIONS(230), 1,
      anon_sym_endClass,
    STATE(306), 1,
      sym_annotation,
    STATE(454), 1,
      sym_memory_modifiers,
    ACTIONS(202), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(36), 11,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      aux_sym__class_repeat1,
  [1923] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_memory,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_uses,
    ACTIONS(200), 1,
      anon_sym_const,
    ACTIONS(204), 1,
      anon_sym_type,
    ACTIONS(222), 1,
      anon_sym_endClass,
    STATE(306), 1,
      sym_annotation,
    STATE(454), 1,
      sym_memory_modifiers,
    ACTIONS(202), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(32), 11,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      aux_sym__class_repeat1,
  [1973] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_memory,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(198), 1,
      anon_sym_uses,
    ACTIONS(200), 1,
      anon_sym_const,
    ACTIONS(204), 1,
      anon_sym_type,
    ACTIONS(214), 1,
      anon_sym_endClass,
    STATE(306), 1,
      sym_annotation,
    STATE(454), 1,
      sym_memory_modifiers,
    ACTIONS(202), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(36), 11,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      aux_sym__class_repeat1,
  [2023] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(174), 1,
      anon_sym_endClass,
    ACTIONS(182), 1,
      anon_sym_memory,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(235), 1,
      anon_sym_uses,
    ACTIONS(238), 1,
      anon_sym_const,
    ACTIONS(244), 1,
      anon_sym_type,
    STATE(306), 1,
      sym_annotation,
    STATE(454), 1,
      sym_memory_modifiers,
    ACTIONS(241), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(36), 11,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_variable_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      aux_sym__class_repeat1,
  [2073] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(251), 1,
      anon_sym_inverse,
    STATE(126), 1,
      sym_variable_modifiers,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(253), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(255), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(43), 4,
      sym_inverse_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(249), 11,
      sym_identifier,
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
  [2114] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(251), 1,
      anon_sym_inverse,
    STATE(148), 1,
      sym_variable_modifiers,
    ACTIONS(253), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(255), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(43), 4,
      sym_inverse_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(259), 11,
      sym_identifier,
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
  [2155] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(261), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
    ACTIONS(263), 16,
      sym_identifier,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_type,
  [2186] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(251), 1,
      anon_sym_inverse,
    STATE(131), 1,
      sym_variable_modifiers,
    ACTIONS(253), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(255), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(265), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(43), 4,
      sym_inverse_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(267), 11,
      sym_identifier,
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
  [2227] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(269), 1,
      anon_sym_inverse,
    STATE(171), 1,
      sym_variable_modifiers,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(271), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(273), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(53), 4,
      sym_inverse_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(259), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [2267] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(269), 1,
      anon_sym_inverse,
    STATE(176), 1,
      sym_variable_modifiers,
    ACTIONS(265), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(271), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(273), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(53), 4,
      sym_inverse_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(267), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [2307] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(251), 1,
      anon_sym_inverse,
    ACTIONS(255), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(279), 2,
      anon_sym_final,
      anon_sym_override,
    STATE(45), 4,
      sym_inverse_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(277), 11,
      sym_identifier,
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
  [2345] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(269), 1,
      anon_sym_inverse,
    STATE(160), 1,
      sym_variable_modifiers,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(271), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(273), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(53), 4,
      sym_inverse_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(249), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [2385] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(285), 1,
      anon_sym_inverse,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(288), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(291), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(45), 4,
      sym_inverse_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(283), 11,
      sym_identifier,
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
  [2423] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(41), 1,
      anon_sym_forward,
    ACTIONS(47), 1,
      anon_sym_external,
    ACTIONS(296), 1,
      anon_sym_end,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(283), 1,
      sym_function_body_statements,
    ACTIONS(294), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(151), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [2472] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(33), 1,
      anon_sym_forward,
    ACTIONS(39), 1,
      anon_sym_external,
    ACTIONS(75), 1,
      anon_sym_end,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(303), 1,
      sym_function_body_statements,
    ACTIONS(73), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(161), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [2521] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(33), 1,
      anon_sym_forward,
    ACTIONS(39), 1,
      anon_sym_external,
    ACTIONS(67), 1,
      anon_sym_end,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(303), 1,
      sym_function_body_statements,
    ACTIONS(65), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(166), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [2570] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(41), 1,
      anon_sym_forward,
    ACTIONS(47), 1,
      anon_sym_external,
    ACTIONS(300), 1,
      anon_sym_end,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(283), 1,
      sym_function_body_statements,
    ACTIONS(298), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(139), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [2619] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(247), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_inverse,
    STATE(210), 1,
      sym_variable_modifiers,
    ACTIONS(304), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(306), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(64), 4,
      sym_inverse_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(249), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [2658] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(41), 1,
      anon_sym_forward,
    ACTIONS(47), 1,
      anon_sym_external,
    ACTIONS(63), 1,
      anon_sym_end,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(283), 1,
      sym_function_body_statements,
    ACTIONS(61), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(113), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [2707] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(33), 1,
      anon_sym_forward,
    ACTIONS(39), 1,
      anon_sym_external,
    ACTIONS(310), 1,
      anon_sym_end,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(303), 1,
      sym_function_body_statements,
    ACTIONS(308), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(167), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [2756] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(269), 1,
      anon_sym_inverse,
    ACTIONS(273), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(312), 2,
      anon_sym_final,
      anon_sym_override,
    STATE(56), 4,
      sym_inverse_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(277), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [2793] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_inverse,
    STATE(202), 1,
      sym_variable_modifiers,
    ACTIONS(304), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(306), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(64), 4,
      sym_inverse_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(267), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [2832] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(15), 1,
      anon_sym_forward,
    ACTIONS(21), 1,
      anon_sym_external,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(316), 1,
      anon_sym_end,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(308), 1,
      sym_function_body_statements,
    ACTIONS(314), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(205), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [2881] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(318), 1,
      anon_sym_inverse,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(321), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(324), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(56), 4,
      sym_inverse_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(283), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [2918] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_inverse,
    STATE(204), 1,
      sym_variable_modifiers,
    ACTIONS(304), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(306), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(64), 4,
      sym_inverse_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(259), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [2957] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(41), 1,
      anon_sym_forward,
    ACTIONS(47), 1,
      anon_sym_external,
    ACTIONS(83), 1,
      anon_sym_end,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(283), 1,
      sym_function_body_statements,
    ACTIONS(81), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(149), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [3006] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(15), 1,
      anon_sym_forward,
    ACTIONS(21), 1,
      anon_sym_external,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(71), 1,
      anon_sym_end,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(308), 1,
      sym_function_body_statements,
    ACTIONS(69), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(203), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [3055] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(15), 1,
      anon_sym_forward,
    ACTIONS(21), 1,
      anon_sym_external,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(329), 1,
      anon_sym_end,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(308), 1,
      sym_function_body_statements,
    ACTIONS(327), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(193), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [3104] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(33), 1,
      anon_sym_forward,
    ACTIONS(39), 1,
      anon_sym_external,
    ACTIONS(333), 1,
      anon_sym_end,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(303), 1,
      sym_function_body_statements,
    ACTIONS(331), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(172), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [3153] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(15), 1,
      anon_sym_forward,
    ACTIONS(21), 1,
      anon_sym_external,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(79), 1,
      anon_sym_end,
    STATE(240), 1,
      sym_declaration_statement,
    STATE(308), 1,
      sym_function_body_statements,
    ACTIONS(77), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(91), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(194), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [3202] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(335), 1,
      anon_sym_inverse,
    ACTIONS(338), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(341), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(63), 4,
      sym_inverse_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(283), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [3238] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(275), 1,
      anon_sym_LBRACK,
    ACTIONS(302), 1,
      anon_sym_inverse,
    ACTIONS(306), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(344), 2,
      anon_sym_final,
      anon_sym_override,
    STATE(63), 4,
      sym_inverse_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(277), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [3274] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(346), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(348), 16,
      sym_identifier,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_type,
  [3300] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(350), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(352), 16,
      sym_identifier,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_type,
  [3326] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(356), 16,
      sym_identifier,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_type,
  [3352] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(358), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(360), 16,
      sym_identifier,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_type,
  [3378] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(346), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(348), 15,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_type,
  [3403] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(261), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(263), 15,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_type,
  [3428] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(358), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(360), 15,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_type,
  [3453] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(350), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(352), 15,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_type,
  [3478] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
    ACTIONS(364), 12,
      sym_identifier,
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
  [3503] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(366), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
    ACTIONS(368), 12,
      sym_identifier,
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
  [3528] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(356), 15,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_type,
  [3553] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(370), 1,
      sym_identifier,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    ACTIONS(374), 1,
      anon_sym_SQUOTE,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
    ACTIONS(378), 1,
      sym__integer_literal,
    STATE(77), 1,
      sym__string_literal,
    STATE(316), 3,
      sym_annotation_attribute_list,
      sym__inner_annotation,
      sym__literal,
    ACTIONS(380), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [3592] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(384), 12,
      sym_identifier,
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
  [3616] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(350), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 15,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_type,
  [3640] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(386), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(388), 12,
      sym_identifier,
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
  [3664] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(390), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(392), 12,
      sym_identifier,
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
  [3688] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    ACTIONS(348), 15,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_type,
  [3712] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(394), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(396), 12,
      sym_identifier,
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
  [3736] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(398), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(400), 12,
      sym_identifier,
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
  [3760] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(358), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 15,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_type,
  [3784] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 15,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_type,
  [3808] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(402), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(404), 12,
      sym_identifier,
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
  [3832] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(261), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 15,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_type,
  [3856] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(406), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(408), 12,
      sym_identifier,
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
  [3880] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(410), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(412), 11,
      sym_identifier,
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
  [3907] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(420), 1,
      anon_sym_multiLang,
    STATE(117), 1,
      sym_enum_modifiers,
    ACTIONS(416), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(418), 11,
      sym_identifier,
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
  [3934] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_uses,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(31), 1,
      anon_sym_type,
    ACTIONS(424), 1,
      anon_sym_end,
    STATE(240), 1,
      sym_declaration_statement,
    ACTIONS(422), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(92), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [3969] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(426), 1,
      anon_sym_uses,
    ACTIONS(431), 1,
      anon_sym_end,
    ACTIONS(433), 1,
      anon_sym_var,
    ACTIONS(436), 1,
      anon_sym_type,
    STATE(240), 1,
      sym_declaration_statement,
    ACTIONS(429), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(92), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(243), 6,
      sym_uses_item,
      sym__type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
  [4004] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(441), 1,
      anon_sym_end,
    ACTIONS(29), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(443), 2,
      anon_sym_final,
      anon_sym_override,
    STATE(94), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    ACTIONS(439), 7,
      anon_sym_uses,
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
      anon_sym_type,
  [4033] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(447), 1,
      anon_sym_end,
    ACTIONS(449), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(452), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(94), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    ACTIONS(445), 7,
      anon_sym_uses,
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
      anon_sym_type,
  [4062] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(455), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(457), 11,
      sym_identifier,
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
  [4089] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(463), 1,
      anon_sym_multiLang,
    STATE(142), 1,
      sym_const_modifiers,
    ACTIONS(459), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(461), 11,
      sym_identifier,
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
  [4116] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(420), 1,
      anon_sym_multiLang,
    STATE(110), 1,
      sym_enum_modifiers,
    ACTIONS(465), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(467), 11,
      sym_identifier,
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
  [4143] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(469), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(471), 11,
      sym_identifier,
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
  [4170] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(478), 12,
      sym_identifier,
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
  [4192] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(480), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(482), 12,
      sym_identifier,
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
  [4214] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_multiLang,
    STATE(170), 1,
      sym_enum_modifiers,
    ACTIONS(416), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(418), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [4240] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(469), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(471), 11,
      sym_identifier,
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
  [4262] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(486), 1,
      anon_sym_multiLang,
    STATE(165), 1,
      sym_const_modifiers,
    ACTIONS(459), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(461), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [4288] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(410), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(412), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [4314] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(490), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(492), 12,
      sym_identifier,
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
  [4336] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(484), 1,
      anon_sym_multiLang,
    STATE(174), 1,
      sym_enum_modifiers,
    ACTIONS(465), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(467), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [4362] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(455), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(457), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [4388] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(469), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(471), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [4414] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(398), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(400), 11,
      sym_identifier,
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
  [4435] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(497), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(499), 11,
      sym_identifier,
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
  [4456] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(416), 1,
      anon_sym_LBRACK,
    ACTIONS(501), 1,
      anon_sym_multiLang,
    STATE(197), 1,
      sym_enum_modifiers,
    ACTIONS(418), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [4481] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(394), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(396), 11,
      sym_identifier,
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
  [4502] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(503), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(505), 11,
      sym_identifier,
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
  [4523] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(478), 11,
      sym_identifier,
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
  [4544] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(507), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(509), 11,
      sym_identifier,
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
  [4565] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(406), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(408), 11,
      sym_identifier,
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
  [4586] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(511), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(513), 11,
      sym_identifier,
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
  [4607] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(515), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(517), 11,
      sym_identifier,
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
  [4628] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(374), 1,
      anon_sym_SQUOTE,
    ACTIONS(376), 1,
      anon_sym_LBRACE,
    ACTIONS(378), 1,
      sym__integer_literal,
    STATE(77), 1,
      sym__string_literal,
    STATE(96), 1,
      sym__literal,
    ACTIONS(519), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(79), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [4659] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(469), 1,
      anon_sym_LBRACK,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(471), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [4684] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(469), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(471), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [4705] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(490), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(492), 11,
      sym_identifier,
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
  [4726] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(402), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(404), 11,
      sym_identifier,
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
  [4747] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(524), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(526), 11,
      sym_identifier,
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
  [4768] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(465), 1,
      anon_sym_LBRACK,
    ACTIONS(501), 1,
      anon_sym_multiLang,
    STATE(207), 1,
      sym_enum_modifiers,
    ACTIONS(467), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [4793] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(528), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(530), 11,
      sym_identifier,
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
  [4814] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(480), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(482), 11,
      sym_identifier,
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
  [4835] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(459), 1,
      anon_sym_LBRACK,
    ACTIONS(532), 1,
      anon_sym_multiLang,
    STATE(195), 1,
      sym_const_modifiers,
    ACTIONS(461), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [4860] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(536), 1,
      anon_sym_end,
    ACTIONS(534), 12,
      anon_sym_uses,
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
      anon_sym_type,
  [4881] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(390), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(392), 11,
      sym_identifier,
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
  [4902] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(538), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(540), 11,
      sym_identifier,
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
  [4923] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(366), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(368), 11,
      sym_identifier,
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
  [4944] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(542), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(544), 11,
      sym_identifier,
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
  [4965] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(546), 1,
      anon_sym_SQUOTE,
    ACTIONS(548), 1,
      anon_sym_LBRACE,
    ACTIONS(550), 1,
      sym__integer_literal,
    STATE(128), 1,
      sym__literal,
    STATE(186), 1,
      sym__string_literal,
    ACTIONS(552), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(189), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [4996] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(364), 11,
      sym_identifier,
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
  [5017] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(554), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(556), 11,
      sym_identifier,
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
  [5038] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(384), 11,
      sym_identifier,
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
  [5059] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(455), 1,
      anon_sym_LBRACK,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(457), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5084] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(560), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(562), 11,
      sym_identifier,
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
  [5105] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(566), 1,
      anon_sym_end,
    ACTIONS(564), 12,
      anon_sym_uses,
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
      anon_sym_type,
  [5126] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(568), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(570), 11,
      sym_identifier,
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
  [5147] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(572), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(574), 11,
      sym_identifier,
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
  [5168] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(386), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(388), 11,
      sym_identifier,
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
  [5189] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(578), 1,
      anon_sym_end,
    ACTIONS(576), 12,
      anon_sym_uses,
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
      anon_sym_type,
  [5210] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(580), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(582), 11,
      sym_identifier,
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
  [5231] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(261), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(263), 11,
      sym_identifier,
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
  [5252] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(584), 1,
      anon_sym_SQUOTE,
    ACTIONS(586), 1,
      anon_sym_LBRACE,
    ACTIONS(588), 1,
      sym__integer_literal,
    STATE(103), 1,
      sym__literal,
    STATE(137), 1,
      sym__string_literal,
    ACTIONS(590), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(143), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [5283] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(592), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(594), 11,
      sym_identifier,
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
  [5304] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(596), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(598), 11,
      sym_identifier,
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
  [5325] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(410), 1,
      anon_sym_LBRACK,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(412), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5350] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(600), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(602), 11,
      sym_identifier,
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
  [5371] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(604), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(606), 11,
      sym_identifier,
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
  [5392] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(608), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(610), 11,
      sym_identifier,
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
  [5413] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(612), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(614), 11,
      sym_identifier,
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
  [5434] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(261), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(263), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5454] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(618), 1,
      anon_sym_end,
    ACTIONS(616), 11,
      anon_sym_uses,
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_type,
  [5474] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_end,
    ACTIONS(354), 11,
      anon_sym_uses,
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_type,
  [5494] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(515), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(517), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5514] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(507), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(509), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5534] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(528), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(530), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5554] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(503), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(505), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5574] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(580), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(582), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5594] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(568), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(570), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5614] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(608), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(610), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5634] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(572), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(574), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5654] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(596), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(598), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5674] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(600), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(602), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5694] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(604), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(606), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5714] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(612), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(614), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5734] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(511), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(513), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5754] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(592), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(594), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5774] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(560), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(562), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5794] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(542), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(544), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5814] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(497), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(499), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5834] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(480), 1,
      anon_sym_LBRACK,
    ACTIONS(482), 11,
      sym_identifier,
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
  [5854] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(538), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(540), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5874] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(404), 11,
      sym_identifier,
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
  [5894] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(524), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(526), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5914] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(490), 1,
      anon_sym_LBRACK,
    ACTIONS(492), 11,
      sym_identifier,
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
  [5934] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 11,
      sym_identifier,
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
  [5954] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(263), 1,
      anon_sym_end,
    ACTIONS(261), 11,
      anon_sym_uses,
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
      anon_sym_type,
  [5974] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(469), 2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(471), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [5994] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(398), 1,
      anon_sym_LBRACK,
    ACTIONS(400), 11,
      sym_identifier,
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
  [6014] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(390), 1,
      anon_sym_LBRACK,
    ACTIONS(392), 11,
      sym_identifier,
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
  [6034] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(476), 1,
      anon_sym_LBRACK,
    ACTIONS(478), 11,
      sym_identifier,
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
  [6054] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 11,
      sym_identifier,
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
  [6074] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(394), 1,
      anon_sym_LBRACK,
    ACTIONS(396), 11,
      sym_identifier,
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
  [6094] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(366), 1,
      anon_sym_LBRACK,
    ACTIONS(368), 11,
      sym_identifier,
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
  [6114] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(386), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 11,
      sym_identifier,
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
  [6134] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      anon_sym_LBRACK,
    ACTIONS(364), 11,
      sym_identifier,
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
  [6154] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(524), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [6173] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(261), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [6192] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(600), 1,
      anon_sym_LBRACK,
    ACTIONS(602), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [6211] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(596), 1,
      anon_sym_LBRACK,
    ACTIONS(598), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [6230] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(572), 1,
      anon_sym_LBRACK,
    ACTIONS(574), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [6249] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(568), 1,
      anon_sym_LBRACK,
    ACTIONS(570), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [6268] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(511), 1,
      anon_sym_LBRACK,
    ACTIONS(513), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [6287] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(612), 1,
      anon_sym_LBRACK,
    ACTIONS(614), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [6306] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(515), 1,
      anon_sym_LBRACK,
    ACTIONS(517), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [6325] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(604), 1,
      anon_sym_LBRACK,
    ACTIONS(606), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [6344] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(507), 1,
      anon_sym_LBRACK,
    ACTIONS(509), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [6363] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(538), 1,
      anon_sym_LBRACK,
    ACTIONS(540), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [6382] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(503), 1,
      anon_sym_LBRACK,
    ACTIONS(505), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [6401] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(594), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [6420] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(560), 1,
      anon_sym_LBRACK,
    ACTIONS(562), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [6439] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(542), 1,
      anon_sym_LBRACK,
    ACTIONS(544), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [6458] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(497), 1,
      anon_sym_LBRACK,
    ACTIONS(499), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [6477] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    ACTIONS(610), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [6496] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(580), 1,
      anon_sym_LBRACK,
    ACTIONS(582), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [6515] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(528), 1,
      anon_sym_LBRACK,
    ACTIONS(530), 10,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_type,
  [6534] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(457), 1,
      anon_sym_end,
    ACTIONS(620), 1,
      anon_sym_COMMA,
    STATE(215), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(455), 5,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [6554] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(467), 1,
      anon_sym_end,
    ACTIONS(622), 1,
      anon_sym_multiLang,
    STATE(233), 1,
      sym_enum_modifiers,
    ACTIONS(465), 5,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [6574] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(418), 1,
      anon_sym_end,
    ACTIONS(622), 1,
      anon_sym_multiLang,
    STATE(230), 1,
      sym_enum_modifiers,
    ACTIONS(416), 5,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [6594] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(471), 1,
      anon_sym_end,
    ACTIONS(624), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(469), 5,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [6614] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(412), 1,
      anon_sym_end,
    ACTIONS(620), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(410), 5,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [6634] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(492), 1,
      anon_sym_end,
    ACTIONS(490), 6,
      anon_sym_uses,
      anon_sym_multiLang,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [6649] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(478), 1,
      anon_sym_end,
    ACTIONS(476), 6,
      anon_sym_uses,
      anon_sym_multiLang,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [6664] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(627), 1,
      sym_identifier,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      sym_function_parameter_declaration,
    STATE(451), 1,
      sym_function_parameter_modifiers,
    ACTIONS(631), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [6685] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 1,
      sym_identifier,
    ACTIONS(635), 1,
      anon_sym_LPAREN,
    ACTIONS(637), 1,
      anon_sym_LBRACK,
    ACTIONS(639), 1,
      anon_sym_DOT,
    STATE(101), 1,
      sym_enum_variant_list,
    STATE(317), 1,
      sym_enum_derived,
    STATE(460), 1,
      sym__type_identifier,
  [6710] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(627), 1,
      sym_identifier,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    STATE(345), 1,
      sym_function_parameter_declaration,
    STATE(451), 1,
      sym_function_parameter_modifiers,
    ACTIONS(631), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [6731] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 1,
      sym_identifier,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    ACTIONS(645), 1,
      anon_sym_LBRACK,
    ACTIONS(647), 1,
      anon_sym_DOT,
    STATE(213), 1,
      sym_enum_variant_list,
    STATE(367), 1,
      sym_enum_derived,
    STATE(460), 1,
      sym__type_identifier,
  [6756] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(482), 1,
      anon_sym_end,
    ACTIONS(480), 6,
      anon_sym_uses,
      anon_sym_multiLang,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [6771] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(471), 1,
      anon_sym_end,
    ACTIONS(469), 6,
      anon_sym_uses,
      anon_sym_COMMA,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [6786] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 1,
      sym_identifier,
    ACTIONS(649), 1,
      anon_sym_LPAREN,
    ACTIONS(651), 1,
      anon_sym_LBRACK,
    ACTIONS(653), 1,
      anon_sym_DOT,
    STATE(90), 1,
      sym_enum_variant_list,
    STATE(335), 1,
      sym_enum_derived,
    STATE(460), 1,
      sym__type_identifier,
  [6811] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 1,
      sym_identifier,
    ACTIONS(655), 1,
      anon_sym_LPAREN,
    ACTIONS(657), 1,
      anon_sym_LBRACK,
    ACTIONS(659), 1,
      anon_sym_DOT,
    STATE(111), 1,
      sym_enum_variant_list,
    STATE(333), 1,
      sym_enum_derived,
    STATE(460), 1,
      sym__type_identifier,
  [6836] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(661), 1,
      sym_identifier,
    STATE(40), 1,
      sym_variable_instance_type,
    STATE(65), 1,
      sym__type_identifier,
    STATE(355), 1,
      sym_reference,
    ACTIONS(663), 2,
      anon_sym_refTo,
      anon_sym_listOf,
  [6856] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(661), 1,
      sym_identifier,
    STATE(37), 1,
      sym_variable_instance_type,
    STATE(65), 1,
      sym__type_identifier,
    STATE(355), 1,
      sym_reference,
    ACTIONS(663), 2,
      anon_sym_refTo,
      anon_sym_listOf,
  [6876] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(665), 1,
      sym_identifier,
    STATE(57), 1,
      sym_variable_instance_type,
    STATE(81), 1,
      sym__type_identifier,
    STATE(336), 1,
      sym_reference,
    ACTIONS(663), 2,
      anon_sym_refTo,
      anon_sym_listOf,
  [6896] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(614), 1,
      anon_sym_end,
    ACTIONS(612), 5,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [6910] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(513), 1,
      anon_sym_end,
    ACTIONS(511), 5,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [6924] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(544), 1,
      anon_sym_end,
    ACTIONS(542), 5,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [6938] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(627), 1,
      sym_identifier,
    STATE(269), 1,
      sym_function_parameter_declaration,
    STATE(451), 1,
      sym_function_parameter_modifiers,
    ACTIONS(631), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [6956] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(499), 1,
      anon_sym_end,
    ACTIONS(497), 5,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [6970] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(661), 1,
      sym_identifier,
    STATE(38), 1,
      sym_variable_instance_type,
    STATE(65), 1,
      sym__type_identifier,
    STATE(355), 1,
      sym_reference,
    ACTIONS(663), 2,
      anon_sym_refTo,
      anon_sym_listOf,
  [6990] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(606), 1,
      anon_sym_end,
    ACTIONS(604), 5,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [7004] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(667), 1,
      sym_identifier,
    STATE(41), 1,
      sym_variable_instance_type,
    STATE(69), 1,
      sym__type_identifier,
    STATE(354), 1,
      sym_reference,
    ACTIONS(663), 2,
      anon_sym_refTo,
      anon_sym_listOf,
  [7024] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(665), 1,
      sym_identifier,
    STATE(50), 1,
      sym_variable_instance_type,
    STATE(81), 1,
      sym__type_identifier,
    STATE(336), 1,
      sym_reference,
    ACTIONS(663), 2,
      anon_sym_refTo,
      anon_sym_listOf,
  [7044] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(627), 1,
      sym_identifier,
    STATE(345), 1,
      sym_function_parameter_declaration,
    STATE(451), 1,
      sym_function_parameter_modifiers,
    ACTIONS(631), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [7062] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(665), 1,
      sym_identifier,
    STATE(54), 1,
      sym_variable_instance_type,
    STATE(81), 1,
      sym__type_identifier,
    STATE(336), 1,
      sym_reference,
    ACTIONS(663), 2,
      anon_sym_refTo,
      anon_sym_listOf,
  [7082] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_end,
    ACTIONS(669), 5,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [7096] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(667), 1,
      sym_identifier,
    STATE(42), 1,
      sym_variable_instance_type,
    STATE(69), 1,
      sym__type_identifier,
    STATE(354), 1,
      sym_reference,
    ACTIONS(663), 2,
      anon_sym_refTo,
      anon_sym_listOf,
  [7116] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(667), 1,
      sym_identifier,
    STATE(44), 1,
      sym_variable_instance_type,
    STATE(69), 1,
      sym__type_identifier,
    STATE(354), 1,
      sym_reference,
    ACTIONS(663), 2,
      anon_sym_refTo,
      anon_sym_listOf,
  [7136] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(675), 1,
      anon_sym_end,
    ACTIONS(673), 5,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [7150] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(679), 1,
      anon_sym_end,
    ACTIONS(677), 5,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [7164] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
    ACTIONS(685), 1,
      anon_sym_LBRACK,
    STATE(312), 1,
      sym_enum_variant,
    STATE(479), 1,
      sym_annotation,
  [7183] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(685), 1,
      anon_sym_LBRACK,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
    STATE(312), 1,
      sym_enum_variant,
    STATE(479), 1,
      sym_annotation,
  [7202] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(685), 1,
      anon_sym_LBRACK,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    STATE(312), 1,
      sym_enum_variant,
    STATE(479), 1,
      sym_annotation,
  [7221] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(685), 1,
      anon_sym_LBRACK,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    STATE(312), 1,
      sym_enum_variant,
    STATE(479), 1,
      sym_annotation,
  [7240] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(685), 1,
      anon_sym_LBRACK,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    STATE(312), 1,
      sym_enum_variant,
    STATE(479), 1,
      sym_annotation,
  [7259] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(685), 1,
      anon_sym_LBRACK,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    STATE(312), 1,
      sym_enum_variant,
    STATE(479), 1,
      sym_annotation,
  [7278] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(685), 1,
      anon_sym_LBRACK,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
    STATE(312), 1,
      sym_enum_variant,
    STATE(479), 1,
      sym_annotation,
  [7297] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(685), 1,
      anon_sym_LBRACK,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
    STATE(312), 1,
      sym_enum_variant,
    STATE(479), 1,
      sym_annotation,
  [7316] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(685), 1,
      anon_sym_LBRACK,
    STATE(293), 1,
      sym_enum_variant,
    STATE(479), 1,
      sym_annotation,
  [7332] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_memory,
    ACTIONS(701), 1,
      sym_identifier,
    ACTIONS(703), 1,
      anon_sym_class,
    STATE(387), 1,
      sym_memory_modifiers,
  [7348] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(685), 1,
      anon_sym_LBRACK,
    STATE(287), 1,
      sym_enum_variant,
    STATE(479), 1,
      sym_annotation,
  [7364] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(685), 1,
      anon_sym_LBRACK,
    STATE(285), 1,
      sym_enum_variant,
    STATE(479), 1,
      sym_annotation,
  [7380] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(707), 1,
      anon_sym_EQ,
    STATE(327), 1,
      sym_enum_variant_redefine_value,
    ACTIONS(705), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7394] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(685), 1,
      anon_sym_LBRACK,
    STATE(312), 1,
      sym_enum_variant,
    STATE(479), 1,
      sym_annotation,
  [7410] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(685), 1,
      anon_sym_LBRACK,
    STATE(263), 1,
      sym_enum_variant,
    STATE(479), 1,
      sym_annotation,
  [7426] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(707), 1,
      anon_sym_EQ,
    STATE(339), 1,
      sym_enum_variant_redefine_value,
    ACTIONS(709), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7440] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(711), 1,
      anon_sym_COMMA,
    ACTIONS(713), 1,
      anon_sym_RBRACE,
    STATE(301), 1,
      aux_sym_text_literal_repeat1,
  [7453] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(374), 1,
      anon_sym_SQUOTE,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
    STATE(323), 1,
      sym__string_literal,
  [7466] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
    ACTIONS(719), 1,
      anon_sym_COMMA,
    STATE(289), 1,
      aux_sym_enum_variant_list_repeat1,
  [7479] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(721), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK2,
  [7488] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(723), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK2,
  [7497] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(725), 1,
      anon_sym_COMMA,
    ACTIONS(727), 1,
      anon_sym_RBRACK,
    STATE(304), 1,
      aux_sym_reference_modifiers_repeat1,
  [7510] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    STATE(280), 1,
      aux_sym_function_parameters_repeat1,
  [7523] = 4,
    ACTIONS(731), 1,
      sym_line_comment,
    ACTIONS(733), 1,
      aux_sym__string_literal_token1,
    ACTIONS(736), 1,
      anon_sym_SQUOTE2,
    STATE(268), 1,
      aux_sym__string_literal_repeat1,
  [7536] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
    ACTIONS(740), 1,
      anon_sym_COMMA,
    STATE(267), 1,
      aux_sym_function_parameters_repeat1,
  [7549] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(742), 1,
      sym_identifier,
    ACTIONS(744), 1,
      anon_sym_LBRACK,
    STATE(445), 1,
      sym_reference_modifiers,
  [7562] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(374), 1,
      anon_sym_SQUOTE,
    ACTIONS(746), 1,
      anon_sym_RBRACE,
    STATE(323), 1,
      sym__string_literal,
  [7575] = 4,
    ACTIONS(731), 1,
      sym_line_comment,
    ACTIONS(748), 1,
      aux_sym__string_literal_token1,
    ACTIONS(750), 1,
      anon_sym_SQUOTE2,
    STATE(268), 1,
      aux_sym__string_literal_repeat1,
  [7588] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(752), 3,
      sym_identifier,
      anon_sym_class,
      anon_sym_memory,
  [7597] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(374), 1,
      anon_sym_SQUOTE,
    ACTIONS(754), 1,
      anon_sym_RBRACE,
    STATE(323), 1,
      sym__string_literal,
  [7610] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(746), 1,
      anon_sym_RBRACE,
    ACTIONS(756), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      aux_sym_text_literal_repeat1,
  [7623] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(758), 1,
      anon_sym_RPAREN,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    STATE(298), 1,
      aux_sym_annotation_attribute_list_repeat1,
  [7636] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(687), 1,
      anon_sym_RPAREN,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym_enum_variant_list_repeat1,
  [7649] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym_enum_variant_list_repeat1,
  [7662] = 4,
    ACTIONS(731), 1,
      sym_line_comment,
    ACTIONS(766), 1,
      aux_sym__string_literal_token1,
    ACTIONS(768), 1,
      anon_sym_SQUOTE2,
    STATE(282), 1,
      aux_sym__string_literal_repeat1,
  [7675] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(770), 1,
      anon_sym_RPAREN,
    ACTIONS(772), 1,
      anon_sym_COMMA,
    STATE(280), 1,
      aux_sym_function_parameters_repeat1,
  [7688] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(775), 1,
      anon_sym_COMMA,
    ACTIONS(777), 1,
      anon_sym_RBRACE,
    STATE(275), 1,
      aux_sym_text_literal_repeat1,
  [7701] = 4,
    ACTIONS(731), 1,
      sym_line_comment,
    ACTIONS(748), 1,
      aux_sym__string_literal_token1,
    ACTIONS(779), 1,
      anon_sym_SQUOTE2,
    STATE(268), 1,
      aux_sym__string_literal_repeat1,
  [7714] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(783), 1,
      anon_sym_end,
    ACTIONS(781), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
  [7725] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      aux_sym_text_literal_repeat1,
  [7738] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    ACTIONS(789), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym_enum_variant_list_repeat1,
  [7751] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(791), 3,
      sym_identifier,
      anon_sym_class,
      anon_sym_memory,
  [7760] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
    ACTIONS(795), 1,
      anon_sym_COMMA,
    STATE(278), 1,
      aux_sym_enum_variant_list_repeat1,
  [7773] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(797), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK2,
  [7782] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(693), 1,
      anon_sym_RPAREN,
    ACTIONS(799), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym_enum_variant_list_repeat1,
  [7795] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    ACTIONS(803), 1,
      anon_sym_RBRACE,
    STATE(284), 1,
      aux_sym_text_literal_repeat1,
  [7808] = 4,
    ACTIONS(731), 1,
      sym_line_comment,
    ACTIONS(748), 1,
      aux_sym__string_literal_token1,
    ACTIONS(805), 1,
      anon_sym_SQUOTE2,
    STATE(268), 1,
      aux_sym__string_literal_repeat1,
  [7821] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(807), 1,
      sym_identifier,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      sym_annotation_attribute,
  [7834] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
    ACTIONS(813), 1,
      anon_sym_COMMA,
    STATE(277), 1,
      aux_sym_enum_variant_list_repeat1,
  [7847] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(815), 1,
      anon_sym_COMMA,
    ACTIONS(817), 1,
      anon_sym_RBRACK,
    STATE(266), 1,
      aux_sym_reference_modifiers_repeat1,
  [7860] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(819), 1,
      anon_sym_RPAREN,
    ACTIONS(821), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym_annotation_attribute_list_repeat1,
  [7873] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(807), 1,
      sym_identifier,
    ACTIONS(824), 1,
      anon_sym_RPAREN,
    STATE(324), 1,
      sym_annotation_attribute,
  [7886] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(374), 1,
      anon_sym_SQUOTE,
    ACTIONS(826), 1,
      anon_sym_RBRACE,
    STATE(323), 1,
      sym__string_literal,
  [7899] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    STATE(295), 1,
      aux_sym_annotation_attribute_list_repeat1,
  [7912] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_memory,
    ACTIONS(830), 1,
      sym_identifier,
    STATE(444), 1,
      sym_memory_modifiers,
  [7925] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    ACTIONS(832), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym_enum_variant_list_repeat1,
  [7938] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(826), 1,
      anon_sym_RBRACE,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    STATE(309), 1,
      aux_sym_text_literal_repeat1,
  [7951] = 4,
    ACTIONS(731), 1,
      sym_line_comment,
    ACTIONS(836), 1,
      aux_sym__string_literal_token1,
    ACTIONS(838), 1,
      anon_sym_SQUOTE2,
    STATE(291), 1,
      aux_sym__string_literal_repeat1,
  [7964] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(842), 1,
      anon_sym_end,
    ACTIONS(840), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
  [7975] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    ACTIONS(847), 1,
      anon_sym_RBRACK,
    STATE(304), 1,
      aux_sym_reference_modifiers_repeat1,
  [7988] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(849), 1,
      anon_sym_RPAREN,
    ACTIONS(851), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym_enum_variant_list_repeat1,
  [8001] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      anon_sym_memory,
    ACTIONS(854), 1,
      sym_identifier,
    STATE(457), 1,
      sym_memory_modifiers,
  [8014] = 4,
    ACTIONS(731), 1,
      sym_line_comment,
    ACTIONS(856), 1,
      aux_sym__string_literal_token1,
    ACTIONS(858), 1,
      anon_sym_SQUOTE2,
    STATE(272), 1,
      aux_sym__string_literal_repeat1,
  [8027] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(862), 1,
      anon_sym_end,
    ACTIONS(860), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
  [8038] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(864), 1,
      anon_sym_COMMA,
    ACTIONS(867), 1,
      anon_sym_RBRACE,
    STATE(309), 1,
      aux_sym_text_literal_repeat1,
  [8051] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(374), 1,
      anon_sym_SQUOTE,
    ACTIONS(869), 1,
      anon_sym_RBRACE,
    STATE(323), 1,
      sym__string_literal,
  [8064] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(374), 1,
      anon_sym_SQUOTE,
    ACTIONS(871), 1,
      anon_sym_RBRACE,
    STATE(323), 1,
      sym__string_literal,
  [8077] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(849), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8085] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(873), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8093] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(875), 1,
      anon_sym_type,
    ACTIONS(877), 1,
      anon_sym_model,
  [8103] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(428), 1,
      sym_annotation_attribute_list,
  [8113] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(879), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8121] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(635), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_enum_variant_list,
  [8131] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(881), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8139] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(425), 1,
      sym_annotation_attribute_list,
  [8149] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(791), 2,
      sym_identifier,
      anon_sym_memory,
  [8157] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 1,
      sym_identifier,
    STATE(415), 1,
      sym__type_identifier,
  [8167] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(381), 1,
      sym_annotation_attribute_list,
  [8177] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(867), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8185] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(819), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8193] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(374), 1,
      anon_sym_SQUOTE,
    STATE(281), 1,
      sym__string_literal,
  [8203] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(883), 1,
      aux_sym_reference_modifiers_token1,
    ACTIONS(885), 1,
      anon_sym_RBRACK,
  [8213] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(887), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8221] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 1,
      sym_identifier,
    STATE(416), 1,
      sym__type_identifier,
  [8231] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(847), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8239] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(889), 1,
      sym_identifier,
    STATE(200), 1,
      sym__type_identifier,
  [8249] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(891), 2,
      anon_sym_module,
      anon_sym_class,
  [8257] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(807), 1,
      sym_identifier,
    STATE(276), 1,
      sym_annotation_attribute,
  [8267] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(655), 1,
      anon_sym_LPAREN,
    STATE(125), 1,
      sym_enum_variant_list,
  [8277] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(374), 1,
      anon_sym_SQUOTE,
    STATE(323), 1,
      sym__string_literal,
  [8287] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(649), 1,
      anon_sym_LPAREN,
    STATE(97), 1,
      sym_enum_variant_list,
  [8297] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(893), 1,
      sym_identifier,
    STATE(78), 1,
      sym__type_identifier,
  [8307] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(752), 2,
      sym_identifier,
      anon_sym_memory,
  [8315] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(374), 1,
      anon_sym_SQUOTE,
    STATE(290), 1,
      sym__string_literal,
  [8325] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(895), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8333] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 1,
      sym_identifier,
    STATE(432), 1,
      sym__type_identifier,
  [8343] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(434), 1,
      sym_annotation_attribute_list,
  [8353] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(897), 1,
      anon_sym_type,
    ACTIONS(899), 1,
      anon_sym_model,
  [8363] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 1,
      sym_identifier,
    STATE(313), 1,
      sym__type_identifier,
  [8373] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(901), 1,
      sym_identifier,
    STATE(152), 1,
      sym__type_identifier,
  [8383] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(770), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8391] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 1,
      sym_identifier,
    STATE(347), 1,
      sym__type_identifier,
  [8401] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(903), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [8409] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(413), 1,
      sym_annotation_attribute_list,
  [8419] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 1,
      sym_identifier,
    STATE(441), 1,
      sym__type_identifier,
  [8429] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(408), 1,
      sym_annotation_attribute_list,
  [8439] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(905), 2,
      anon_sym_module,
      anon_sym_class,
  [8447] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(399), 1,
      sym_annotation_attribute_list,
  [8457] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 1,
      sym_identifier,
    STATE(390), 1,
      sym__type_identifier,
  [8467] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(907), 1,
      sym_identifier,
    STATE(72), 1,
      sym__type_identifier,
  [8477] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 1,
      sym_identifier,
    STATE(66), 1,
      sym__type_identifier,
  [8487] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 1,
      sym_identifier,
    STATE(443), 1,
      sym__type_identifier,
  [8497] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(727), 1,
      anon_sym_RBRACK,
    ACTIONS(883), 1,
      aux_sym_reference_modifiers_token1,
  [8507] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(909), 1,
      anon_sym_type,
    ACTIONS(911), 1,
      anon_sym_model,
  [8517] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(807), 1,
      sym_identifier,
    STATE(324), 1,
      sym_annotation_attribute,
  [8527] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(374), 1,
      anon_sym_SQUOTE,
    STATE(261), 1,
      sym__string_literal,
  [8537] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 1,
      sym_identifier,
    STATE(456), 1,
      sym__type_identifier,
  [8547] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(913), 1,
      sym_identifier,
    STATE(244), 1,
      sym__type_identifier,
  [8557] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(915), 1,
      anon_sym_type,
    ACTIONS(917), 1,
      anon_sym_model,
  [8567] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(919), 1,
      anon_sym_module,
    ACTIONS(921), 1,
      anon_sym_class,
  [8577] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(923), 1,
      ts_builtin_sym_end,
    ACTIONS(925), 1,
      anon_sym_endClass,
  [8587] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(913), 1,
      sym_identifier,
    STATE(235), 1,
      sym__type_identifier,
  [8597] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    STATE(212), 1,
      sym_enum_variant_list,
  [8607] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(913), 1,
      sym_identifier,
    STATE(156), 1,
      sym__type_identifier,
  [8617] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 1,
      sym_identifier,
    STATE(464), 1,
      sym__type_identifier,
  [8627] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
    STATE(385), 1,
      sym_annotation_attribute_list,
  [8637] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(927), 1,
      sym_identifier,
    STATE(168), 1,
      sym__type_identifier,
  [8647] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(929), 1,
      aux_sym_reference_modifiers_token1,
  [8654] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(931), 1,
      ts_builtin_sym_end,
  [8661] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(933), 1,
      anon_sym_COLON,
  [8668] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(935), 1,
      anon_sym_RPAREN,
  [8675] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(937), 1,
      sym_identifier,
  [8682] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(939), 1,
      ts_builtin_sym_end,
  [8689] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(941), 1,
      sym_identifier,
  [8696] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(943), 1,
      sym_identifier,
  [8703] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(945), 1,
      anon_sym_COLON,
  [8710] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(947), 1,
      anon_sym_RBRACK2,
  [8717] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(949), 1,
      anon_sym_RPAREN,
  [8724] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(951), 1,
      sym_identifier,
  [8731] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(953), 1,
      sym_identifier,
  [8738] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(955), 1,
      anon_sym_RBRACK2,
  [8745] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(891), 1,
      sym_identifier,
  [8752] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(957), 1,
      sym_identifier,
  [8759] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(959), 1,
      anon_sym_COLON,
  [8766] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(905), 1,
      sym_identifier,
  [8773] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(961), 1,
      anon_sym_RBRACK,
  [8780] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(963), 1,
      ts_builtin_sym_end,
  [8787] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(965), 1,
      sym_identifier,
  [8794] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(967), 1,
      sym_identifier,
  [8801] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(969), 1,
      anon_sym_COLON,
  [8808] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
  [8815] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(971), 1,
      anon_sym_SQUOTE,
  [8822] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(973), 1,
      sym_identifier,
  [8829] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(975), 1,
      sym_identifier,
  [8836] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(977), 1,
      anon_sym_RBRACK2,
  [8843] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(979), 1,
      sym_identifier,
  [8850] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(981), 1,
      sym_identifier,
  [8857] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(983), 1,
      anon_sym_COLON,
  [8864] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(985), 1,
      sym_identifier,
  [8871] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(987), 1,
      sym_identifier,
  [8878] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(989), 1,
      sym_identifier,
  [8885] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(991), 1,
      anon_sym_endClass,
  [8892] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(993), 1,
      anon_sym_COLON,
  [8899] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(995), 1,
      anon_sym_RBRACK2,
  [8906] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(997), 1,
      sym_identifier,
  [8913] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(999), 1,
      sym_identifier,
  [8920] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1001), 1,
      sym_identifier,
  [8927] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1003), 1,
      anon_sym_model,
  [8934] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1005), 1,
      anon_sym_RBRACK2,
  [8941] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1007), 1,
      anon_sym_EQ,
  [8948] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1009), 1,
      anon_sym_COLON,
  [8955] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1011), 1,
      anon_sym_RBRACK,
  [8962] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1013), 1,
      anon_sym_COLON,
  [8969] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1015), 1,
      anon_sym_LPAREN,
  [8976] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1017), 1,
      ts_builtin_sym_end,
  [8983] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
  [8990] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1021), 1,
      sym_identifier,
  [8997] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1023), 1,
      anon_sym_SQUOTE,
  [9004] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
  [9011] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1025), 1,
      sym_identifier,
  [9018] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1027), 1,
      anon_sym_RBRACK2,
  [9025] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1029), 1,
      sym_identifier,
  [9032] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1031), 1,
      sym_identifier,
  [9039] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1033), 1,
      anon_sym_RBRACK2,
  [9046] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1035), 1,
      sym_identifier,
  [9053] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1037), 1,
      anon_sym_SQUOTE,
  [9060] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1039), 1,
      sym_identifier,
  [9067] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1041), 1,
      anon_sym_RBRACK,
  [9074] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1043), 1,
      anon_sym_COLON,
  [9081] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1045), 1,
      anon_sym_RBRACK2,
  [9088] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1047), 1,
      ts_builtin_sym_end,
  [9095] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1049), 1,
      anon_sym_RPAREN,
  [9102] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1051), 1,
      anon_sym_COLON,
  [9109] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1053), 1,
      sym_identifier,
  [9116] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1055), 1,
      sym_identifier,
  [9123] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1057), 1,
      sym_identifier,
  [9130] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1059), 1,
      anon_sym_RBRACK,
  [9137] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1061), 1,
      anon_sym_EQ,
  [9144] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1063), 1,
      anon_sym_COLON,
  [9151] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1065), 1,
      sym_identifier,
  [9158] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1067), 1,
      sym_identifier,
  [9165] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1069), 1,
      sym_identifier,
  [9172] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1071), 1,
      sym_identifier,
  [9179] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1073), 1,
      anon_sym_COLON,
  [9186] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1075), 1,
      sym_identifier,
  [9193] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1077), 1,
      sym_identifier,
  [9200] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1079), 1,
      sym_identifier,
  [9207] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1081), 1,
      anon_sym_COLON,
  [9214] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1083), 1,
      sym_identifier,
  [9221] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1085), 1,
      sym_identifier,
  [9228] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1087), 1,
      anon_sym_EQ,
  [9235] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1089), 1,
      anon_sym_COLON,
  [9242] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1091), 1,
      sym_identifier,
  [9249] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1093), 1,
      sym_identifier,
  [9256] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1095), 1,
      anon_sym_COLON,
  [9263] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1097), 1,
      anon_sym_PLUS,
  [9270] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(883), 1,
      aux_sym_reference_modifiers_token1,
  [9277] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1099), 1,
      sym_identifier,
  [9284] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1101), 1,
      sym_identifier,
  [9291] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1103), 1,
      anon_sym_COLON,
  [9298] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1105), 1,
      anon_sym_SQUOTE,
  [9305] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1107), 1,
      anon_sym_COLON,
  [9312] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1109), 1,
      sym_identifier,
  [9319] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1111), 1,
      sym__integer_literal,
  [9326] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1113), 1,
      sym_identifier,
  [9333] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1115), 1,
      sym_identifier,
  [9340] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1117), 1,
      anon_sym_model,
  [9347] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1119), 1,
      anon_sym_DOT,
  [9354] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1121), 1,
      sym_identifier,
  [9361] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1123), 1,
      sym_identifier,
  [9368] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1125), 1,
      anon_sym_COLON,
  [9375] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1127), 1,
      anon_sym_model,
  [9382] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1129), 1,
      anon_sym_DOT,
  [9389] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1131), 1,
      anon_sym_DOT,
  [9396] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1133), 1,
      sym_identifier,
  [9403] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1135), 1,
      anon_sym_model,
  [9410] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1137), 1,
      anon_sym_COLON,
  [9417] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1139), 1,
      sym_identifier,
  [9424] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1141), 1,
      anon_sym_COLON,
  [9431] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1143), 1,
      sym_identifier,
  [9438] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1145), 1,
      anon_sym_COLON,
  [9445] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1147), 1,
      anon_sym_SQUOTE,
  [9452] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1149), 1,
      anon_sym_SQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 231,
  [SMALL_STATE(6)] = 302,
  [SMALL_STATE(7)] = 373,
  [SMALL_STATE(8)] = 444,
  [SMALL_STATE(9)] = 509,
  [SMALL_STATE(10)] = 574,
  [SMALL_STATE(11)] = 639,
  [SMALL_STATE(12)] = 704,
  [SMALL_STATE(13)] = 769,
  [SMALL_STATE(14)] = 834,
  [SMALL_STATE(15)] = 894,
  [SMALL_STATE(16)] = 954,
  [SMALL_STATE(17)] = 1014,
  [SMALL_STATE(18)] = 1074,
  [SMALL_STATE(19)] = 1134,
  [SMALL_STATE(20)] = 1190,
  [SMALL_STATE(21)] = 1246,
  [SMALL_STATE(22)] = 1299,
  [SMALL_STATE(23)] = 1352,
  [SMALL_STATE(24)] = 1405,
  [SMALL_STATE(25)] = 1458,
  [SMALL_STATE(26)] = 1511,
  [SMALL_STATE(27)] = 1564,
  [SMALL_STATE(28)] = 1617,
  [SMALL_STATE(29)] = 1670,
  [SMALL_STATE(30)] = 1723,
  [SMALL_STATE(31)] = 1773,
  [SMALL_STATE(32)] = 1823,
  [SMALL_STATE(33)] = 1873,
  [SMALL_STATE(34)] = 1923,
  [SMALL_STATE(35)] = 1973,
  [SMALL_STATE(36)] = 2023,
  [SMALL_STATE(37)] = 2073,
  [SMALL_STATE(38)] = 2114,
  [SMALL_STATE(39)] = 2155,
  [SMALL_STATE(40)] = 2186,
  [SMALL_STATE(41)] = 2227,
  [SMALL_STATE(42)] = 2267,
  [SMALL_STATE(43)] = 2307,
  [SMALL_STATE(44)] = 2345,
  [SMALL_STATE(45)] = 2385,
  [SMALL_STATE(46)] = 2423,
  [SMALL_STATE(47)] = 2472,
  [SMALL_STATE(48)] = 2521,
  [SMALL_STATE(49)] = 2570,
  [SMALL_STATE(50)] = 2619,
  [SMALL_STATE(51)] = 2658,
  [SMALL_STATE(52)] = 2707,
  [SMALL_STATE(53)] = 2756,
  [SMALL_STATE(54)] = 2793,
  [SMALL_STATE(55)] = 2832,
  [SMALL_STATE(56)] = 2881,
  [SMALL_STATE(57)] = 2918,
  [SMALL_STATE(58)] = 2957,
  [SMALL_STATE(59)] = 3006,
  [SMALL_STATE(60)] = 3055,
  [SMALL_STATE(61)] = 3104,
  [SMALL_STATE(62)] = 3153,
  [SMALL_STATE(63)] = 3202,
  [SMALL_STATE(64)] = 3238,
  [SMALL_STATE(65)] = 3274,
  [SMALL_STATE(66)] = 3300,
  [SMALL_STATE(67)] = 3326,
  [SMALL_STATE(68)] = 3352,
  [SMALL_STATE(69)] = 3378,
  [SMALL_STATE(70)] = 3403,
  [SMALL_STATE(71)] = 3428,
  [SMALL_STATE(72)] = 3453,
  [SMALL_STATE(73)] = 3478,
  [SMALL_STATE(74)] = 3503,
  [SMALL_STATE(75)] = 3528,
  [SMALL_STATE(76)] = 3553,
  [SMALL_STATE(77)] = 3592,
  [SMALL_STATE(78)] = 3616,
  [SMALL_STATE(79)] = 3640,
  [SMALL_STATE(80)] = 3664,
  [SMALL_STATE(81)] = 3688,
  [SMALL_STATE(82)] = 3712,
  [SMALL_STATE(83)] = 3736,
  [SMALL_STATE(84)] = 3760,
  [SMALL_STATE(85)] = 3784,
  [SMALL_STATE(86)] = 3808,
  [SMALL_STATE(87)] = 3832,
  [SMALL_STATE(88)] = 3856,
  [SMALL_STATE(89)] = 3880,
  [SMALL_STATE(90)] = 3907,
  [SMALL_STATE(91)] = 3934,
  [SMALL_STATE(92)] = 3969,
  [SMALL_STATE(93)] = 4004,
  [SMALL_STATE(94)] = 4033,
  [SMALL_STATE(95)] = 4062,
  [SMALL_STATE(96)] = 4089,
  [SMALL_STATE(97)] = 4116,
  [SMALL_STATE(98)] = 4143,
  [SMALL_STATE(99)] = 4170,
  [SMALL_STATE(100)] = 4192,
  [SMALL_STATE(101)] = 4214,
  [SMALL_STATE(102)] = 4240,
  [SMALL_STATE(103)] = 4262,
  [SMALL_STATE(104)] = 4288,
  [SMALL_STATE(105)] = 4314,
  [SMALL_STATE(106)] = 4336,
  [SMALL_STATE(107)] = 4362,
  [SMALL_STATE(108)] = 4388,
  [SMALL_STATE(109)] = 4414,
  [SMALL_STATE(110)] = 4435,
  [SMALL_STATE(111)] = 4456,
  [SMALL_STATE(112)] = 4481,
  [SMALL_STATE(113)] = 4502,
  [SMALL_STATE(114)] = 4523,
  [SMALL_STATE(115)] = 4544,
  [SMALL_STATE(116)] = 4565,
  [SMALL_STATE(117)] = 4586,
  [SMALL_STATE(118)] = 4607,
  [SMALL_STATE(119)] = 4628,
  [SMALL_STATE(120)] = 4659,
  [SMALL_STATE(121)] = 4684,
  [SMALL_STATE(122)] = 4705,
  [SMALL_STATE(123)] = 4726,
  [SMALL_STATE(124)] = 4747,
  [SMALL_STATE(125)] = 4768,
  [SMALL_STATE(126)] = 4793,
  [SMALL_STATE(127)] = 4814,
  [SMALL_STATE(128)] = 4835,
  [SMALL_STATE(129)] = 4860,
  [SMALL_STATE(130)] = 4881,
  [SMALL_STATE(131)] = 4902,
  [SMALL_STATE(132)] = 4923,
  [SMALL_STATE(133)] = 4944,
  [SMALL_STATE(134)] = 4965,
  [SMALL_STATE(135)] = 4996,
  [SMALL_STATE(136)] = 5017,
  [SMALL_STATE(137)] = 5038,
  [SMALL_STATE(138)] = 5059,
  [SMALL_STATE(139)] = 5084,
  [SMALL_STATE(140)] = 5105,
  [SMALL_STATE(141)] = 5126,
  [SMALL_STATE(142)] = 5147,
  [SMALL_STATE(143)] = 5168,
  [SMALL_STATE(144)] = 5189,
  [SMALL_STATE(145)] = 5210,
  [SMALL_STATE(146)] = 5231,
  [SMALL_STATE(147)] = 5252,
  [SMALL_STATE(148)] = 5283,
  [SMALL_STATE(149)] = 5304,
  [SMALL_STATE(150)] = 5325,
  [SMALL_STATE(151)] = 5350,
  [SMALL_STATE(152)] = 5371,
  [SMALL_STATE(153)] = 5392,
  [SMALL_STATE(154)] = 5413,
  [SMALL_STATE(155)] = 5434,
  [SMALL_STATE(156)] = 5454,
  [SMALL_STATE(157)] = 5474,
  [SMALL_STATE(158)] = 5494,
  [SMALL_STATE(159)] = 5514,
  [SMALL_STATE(160)] = 5534,
  [SMALL_STATE(161)] = 5554,
  [SMALL_STATE(162)] = 5574,
  [SMALL_STATE(163)] = 5594,
  [SMALL_STATE(164)] = 5614,
  [SMALL_STATE(165)] = 5634,
  [SMALL_STATE(166)] = 5654,
  [SMALL_STATE(167)] = 5674,
  [SMALL_STATE(168)] = 5694,
  [SMALL_STATE(169)] = 5714,
  [SMALL_STATE(170)] = 5734,
  [SMALL_STATE(171)] = 5754,
  [SMALL_STATE(172)] = 5774,
  [SMALL_STATE(173)] = 5794,
  [SMALL_STATE(174)] = 5814,
  [SMALL_STATE(175)] = 5834,
  [SMALL_STATE(176)] = 5854,
  [SMALL_STATE(177)] = 5874,
  [SMALL_STATE(178)] = 5894,
  [SMALL_STATE(179)] = 5914,
  [SMALL_STATE(180)] = 5934,
  [SMALL_STATE(181)] = 5954,
  [SMALL_STATE(182)] = 5974,
  [SMALL_STATE(183)] = 5994,
  [SMALL_STATE(184)] = 6014,
  [SMALL_STATE(185)] = 6034,
  [SMALL_STATE(186)] = 6054,
  [SMALL_STATE(187)] = 6074,
  [SMALL_STATE(188)] = 6094,
  [SMALL_STATE(189)] = 6114,
  [SMALL_STATE(190)] = 6134,
  [SMALL_STATE(191)] = 6154,
  [SMALL_STATE(192)] = 6173,
  [SMALL_STATE(193)] = 6192,
  [SMALL_STATE(194)] = 6211,
  [SMALL_STATE(195)] = 6230,
  [SMALL_STATE(196)] = 6249,
  [SMALL_STATE(197)] = 6268,
  [SMALL_STATE(198)] = 6287,
  [SMALL_STATE(199)] = 6306,
  [SMALL_STATE(200)] = 6325,
  [SMALL_STATE(201)] = 6344,
  [SMALL_STATE(202)] = 6363,
  [SMALL_STATE(203)] = 6382,
  [SMALL_STATE(204)] = 6401,
  [SMALL_STATE(205)] = 6420,
  [SMALL_STATE(206)] = 6439,
  [SMALL_STATE(207)] = 6458,
  [SMALL_STATE(208)] = 6477,
  [SMALL_STATE(209)] = 6496,
  [SMALL_STATE(210)] = 6515,
  [SMALL_STATE(211)] = 6534,
  [SMALL_STATE(212)] = 6554,
  [SMALL_STATE(213)] = 6574,
  [SMALL_STATE(214)] = 6594,
  [SMALL_STATE(215)] = 6614,
  [SMALL_STATE(216)] = 6634,
  [SMALL_STATE(217)] = 6649,
  [SMALL_STATE(218)] = 6664,
  [SMALL_STATE(219)] = 6685,
  [SMALL_STATE(220)] = 6710,
  [SMALL_STATE(221)] = 6731,
  [SMALL_STATE(222)] = 6756,
  [SMALL_STATE(223)] = 6771,
  [SMALL_STATE(224)] = 6786,
  [SMALL_STATE(225)] = 6811,
  [SMALL_STATE(226)] = 6836,
  [SMALL_STATE(227)] = 6856,
  [SMALL_STATE(228)] = 6876,
  [SMALL_STATE(229)] = 6896,
  [SMALL_STATE(230)] = 6910,
  [SMALL_STATE(231)] = 6924,
  [SMALL_STATE(232)] = 6938,
  [SMALL_STATE(233)] = 6956,
  [SMALL_STATE(234)] = 6970,
  [SMALL_STATE(235)] = 6990,
  [SMALL_STATE(236)] = 7004,
  [SMALL_STATE(237)] = 7024,
  [SMALL_STATE(238)] = 7044,
  [SMALL_STATE(239)] = 7062,
  [SMALL_STATE(240)] = 7082,
  [SMALL_STATE(241)] = 7096,
  [SMALL_STATE(242)] = 7116,
  [SMALL_STATE(243)] = 7136,
  [SMALL_STATE(244)] = 7150,
  [SMALL_STATE(245)] = 7164,
  [SMALL_STATE(246)] = 7183,
  [SMALL_STATE(247)] = 7202,
  [SMALL_STATE(248)] = 7221,
  [SMALL_STATE(249)] = 7240,
  [SMALL_STATE(250)] = 7259,
  [SMALL_STATE(251)] = 7278,
  [SMALL_STATE(252)] = 7297,
  [SMALL_STATE(253)] = 7316,
  [SMALL_STATE(254)] = 7332,
  [SMALL_STATE(255)] = 7348,
  [SMALL_STATE(256)] = 7364,
  [SMALL_STATE(257)] = 7380,
  [SMALL_STATE(258)] = 7394,
  [SMALL_STATE(259)] = 7410,
  [SMALL_STATE(260)] = 7426,
  [SMALL_STATE(261)] = 7440,
  [SMALL_STATE(262)] = 7453,
  [SMALL_STATE(263)] = 7466,
  [SMALL_STATE(264)] = 7479,
  [SMALL_STATE(265)] = 7488,
  [SMALL_STATE(266)] = 7497,
  [SMALL_STATE(267)] = 7510,
  [SMALL_STATE(268)] = 7523,
  [SMALL_STATE(269)] = 7536,
  [SMALL_STATE(270)] = 7549,
  [SMALL_STATE(271)] = 7562,
  [SMALL_STATE(272)] = 7575,
  [SMALL_STATE(273)] = 7588,
  [SMALL_STATE(274)] = 7597,
  [SMALL_STATE(275)] = 7610,
  [SMALL_STATE(276)] = 7623,
  [SMALL_STATE(277)] = 7636,
  [SMALL_STATE(278)] = 7649,
  [SMALL_STATE(279)] = 7662,
  [SMALL_STATE(280)] = 7675,
  [SMALL_STATE(281)] = 7688,
  [SMALL_STATE(282)] = 7701,
  [SMALL_STATE(283)] = 7714,
  [SMALL_STATE(284)] = 7725,
  [SMALL_STATE(285)] = 7738,
  [SMALL_STATE(286)] = 7751,
  [SMALL_STATE(287)] = 7760,
  [SMALL_STATE(288)] = 7773,
  [SMALL_STATE(289)] = 7782,
  [SMALL_STATE(290)] = 7795,
  [SMALL_STATE(291)] = 7808,
  [SMALL_STATE(292)] = 7821,
  [SMALL_STATE(293)] = 7834,
  [SMALL_STATE(294)] = 7847,
  [SMALL_STATE(295)] = 7860,
  [SMALL_STATE(296)] = 7873,
  [SMALL_STATE(297)] = 7886,
  [SMALL_STATE(298)] = 7899,
  [SMALL_STATE(299)] = 7912,
  [SMALL_STATE(300)] = 7925,
  [SMALL_STATE(301)] = 7938,
  [SMALL_STATE(302)] = 7951,
  [SMALL_STATE(303)] = 7964,
  [SMALL_STATE(304)] = 7975,
  [SMALL_STATE(305)] = 7988,
  [SMALL_STATE(306)] = 8001,
  [SMALL_STATE(307)] = 8014,
  [SMALL_STATE(308)] = 8027,
  [SMALL_STATE(309)] = 8038,
  [SMALL_STATE(310)] = 8051,
  [SMALL_STATE(311)] = 8064,
  [SMALL_STATE(312)] = 8077,
  [SMALL_STATE(313)] = 8085,
  [SMALL_STATE(314)] = 8093,
  [SMALL_STATE(315)] = 8103,
  [SMALL_STATE(316)] = 8113,
  [SMALL_STATE(317)] = 8121,
  [SMALL_STATE(318)] = 8131,
  [SMALL_STATE(319)] = 8139,
  [SMALL_STATE(320)] = 8149,
  [SMALL_STATE(321)] = 8157,
  [SMALL_STATE(322)] = 8167,
  [SMALL_STATE(323)] = 8177,
  [SMALL_STATE(324)] = 8185,
  [SMALL_STATE(325)] = 8193,
  [SMALL_STATE(326)] = 8203,
  [SMALL_STATE(327)] = 8213,
  [SMALL_STATE(328)] = 8221,
  [SMALL_STATE(329)] = 8231,
  [SMALL_STATE(330)] = 8239,
  [SMALL_STATE(331)] = 8249,
  [SMALL_STATE(332)] = 8257,
  [SMALL_STATE(333)] = 8267,
  [SMALL_STATE(334)] = 8277,
  [SMALL_STATE(335)] = 8287,
  [SMALL_STATE(336)] = 8297,
  [SMALL_STATE(337)] = 8307,
  [SMALL_STATE(338)] = 8315,
  [SMALL_STATE(339)] = 8325,
  [SMALL_STATE(340)] = 8333,
  [SMALL_STATE(341)] = 8343,
  [SMALL_STATE(342)] = 8353,
  [SMALL_STATE(343)] = 8363,
  [SMALL_STATE(344)] = 8373,
  [SMALL_STATE(345)] = 8383,
  [SMALL_STATE(346)] = 8391,
  [SMALL_STATE(347)] = 8401,
  [SMALL_STATE(348)] = 8409,
  [SMALL_STATE(349)] = 8419,
  [SMALL_STATE(350)] = 8429,
  [SMALL_STATE(351)] = 8439,
  [SMALL_STATE(352)] = 8447,
  [SMALL_STATE(353)] = 8457,
  [SMALL_STATE(354)] = 8467,
  [SMALL_STATE(355)] = 8477,
  [SMALL_STATE(356)] = 8487,
  [SMALL_STATE(357)] = 8497,
  [SMALL_STATE(358)] = 8507,
  [SMALL_STATE(359)] = 8517,
  [SMALL_STATE(360)] = 8527,
  [SMALL_STATE(361)] = 8537,
  [SMALL_STATE(362)] = 8547,
  [SMALL_STATE(363)] = 8557,
  [SMALL_STATE(364)] = 8567,
  [SMALL_STATE(365)] = 8577,
  [SMALL_STATE(366)] = 8587,
  [SMALL_STATE(367)] = 8597,
  [SMALL_STATE(368)] = 8607,
  [SMALL_STATE(369)] = 8617,
  [SMALL_STATE(370)] = 8627,
  [SMALL_STATE(371)] = 8637,
  [SMALL_STATE(372)] = 8647,
  [SMALL_STATE(373)] = 8654,
  [SMALL_STATE(374)] = 8661,
  [SMALL_STATE(375)] = 8668,
  [SMALL_STATE(376)] = 8675,
  [SMALL_STATE(377)] = 8682,
  [SMALL_STATE(378)] = 8689,
  [SMALL_STATE(379)] = 8696,
  [SMALL_STATE(380)] = 8703,
  [SMALL_STATE(381)] = 8710,
  [SMALL_STATE(382)] = 8717,
  [SMALL_STATE(383)] = 8724,
  [SMALL_STATE(384)] = 8731,
  [SMALL_STATE(385)] = 8738,
  [SMALL_STATE(386)] = 8745,
  [SMALL_STATE(387)] = 8752,
  [SMALL_STATE(388)] = 8759,
  [SMALL_STATE(389)] = 8766,
  [SMALL_STATE(390)] = 8773,
  [SMALL_STATE(391)] = 8780,
  [SMALL_STATE(392)] = 8787,
  [SMALL_STATE(393)] = 8794,
  [SMALL_STATE(394)] = 8801,
  [SMALL_STATE(395)] = 8808,
  [SMALL_STATE(396)] = 8815,
  [SMALL_STATE(397)] = 8822,
  [SMALL_STATE(398)] = 8829,
  [SMALL_STATE(399)] = 8836,
  [SMALL_STATE(400)] = 8843,
  [SMALL_STATE(401)] = 8850,
  [SMALL_STATE(402)] = 8857,
  [SMALL_STATE(403)] = 8864,
  [SMALL_STATE(404)] = 8871,
  [SMALL_STATE(405)] = 8878,
  [SMALL_STATE(406)] = 8885,
  [SMALL_STATE(407)] = 8892,
  [SMALL_STATE(408)] = 8899,
  [SMALL_STATE(409)] = 8906,
  [SMALL_STATE(410)] = 8913,
  [SMALL_STATE(411)] = 8920,
  [SMALL_STATE(412)] = 8927,
  [SMALL_STATE(413)] = 8934,
  [SMALL_STATE(414)] = 8941,
  [SMALL_STATE(415)] = 8948,
  [SMALL_STATE(416)] = 8955,
  [SMALL_STATE(417)] = 8962,
  [SMALL_STATE(418)] = 8969,
  [SMALL_STATE(419)] = 8976,
  [SMALL_STATE(420)] = 8983,
  [SMALL_STATE(421)] = 8990,
  [SMALL_STATE(422)] = 8997,
  [SMALL_STATE(423)] = 9004,
  [SMALL_STATE(424)] = 9011,
  [SMALL_STATE(425)] = 9018,
  [SMALL_STATE(426)] = 9025,
  [SMALL_STATE(427)] = 9032,
  [SMALL_STATE(428)] = 9039,
  [SMALL_STATE(429)] = 9046,
  [SMALL_STATE(430)] = 9053,
  [SMALL_STATE(431)] = 9060,
  [SMALL_STATE(432)] = 9067,
  [SMALL_STATE(433)] = 9074,
  [SMALL_STATE(434)] = 9081,
  [SMALL_STATE(435)] = 9088,
  [SMALL_STATE(436)] = 9095,
  [SMALL_STATE(437)] = 9102,
  [SMALL_STATE(438)] = 9109,
  [SMALL_STATE(439)] = 9116,
  [SMALL_STATE(440)] = 9123,
  [SMALL_STATE(441)] = 9130,
  [SMALL_STATE(442)] = 9137,
  [SMALL_STATE(443)] = 9144,
  [SMALL_STATE(444)] = 9151,
  [SMALL_STATE(445)] = 9158,
  [SMALL_STATE(446)] = 9165,
  [SMALL_STATE(447)] = 9172,
  [SMALL_STATE(448)] = 9179,
  [SMALL_STATE(449)] = 9186,
  [SMALL_STATE(450)] = 9193,
  [SMALL_STATE(451)] = 9200,
  [SMALL_STATE(452)] = 9207,
  [SMALL_STATE(453)] = 9214,
  [SMALL_STATE(454)] = 9221,
  [SMALL_STATE(455)] = 9228,
  [SMALL_STATE(456)] = 9235,
  [SMALL_STATE(457)] = 9242,
  [SMALL_STATE(458)] = 9249,
  [SMALL_STATE(459)] = 9256,
  [SMALL_STATE(460)] = 9263,
  [SMALL_STATE(461)] = 9270,
  [SMALL_STATE(462)] = 9277,
  [SMALL_STATE(463)] = 9284,
  [SMALL_STATE(464)] = 9291,
  [SMALL_STATE(465)] = 9298,
  [SMALL_STATE(466)] = 9305,
  [SMALL_STATE(467)] = 9312,
  [SMALL_STATE(468)] = 9319,
  [SMALL_STATE(469)] = 9326,
  [SMALL_STATE(470)] = 9333,
  [SMALL_STATE(471)] = 9340,
  [SMALL_STATE(472)] = 9347,
  [SMALL_STATE(473)] = 9354,
  [SMALL_STATE(474)] = 9361,
  [SMALL_STATE(475)] = 9368,
  [SMALL_STATE(476)] = 9375,
  [SMALL_STATE(477)] = 9382,
  [SMALL_STATE(478)] = 9389,
  [SMALL_STATE(479)] = 9396,
  [SMALL_STATE(480)] = 9403,
  [SMALL_STATE(481)] = 9410,
  [SMALL_STATE(482)] = 9417,
  [SMALL_STATE(483)] = 9424,
  [SMALL_STATE(484)] = 9431,
  [SMALL_STATE(485)] = 9438,
  [SMALL_STATE(486)] = 9445,
  [SMALL_STATE(487)] = 9452,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(394),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(378),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(397),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(400),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(401),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(342),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(405),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(321),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, .production_id = 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2, .production_id = 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 3, .production_id = 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 3, .production_id = 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 2, .production_id = 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 2, .production_id = 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__class_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(437),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(384),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(469),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(401),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(358),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(438),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(356),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 7, .production_id = 11),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 7, .production_id = 11),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 4, .production_id = 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 4, .production_id = 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 6, .production_id = 11),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 6, .production_id = 11),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 5, .production_id = 6),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 5, .production_id = 6),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 6, .production_id = 6),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 6, .production_id = 6),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 3, .production_id = 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 3, .production_id = 2),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(452),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(398),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(474),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(453),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(361),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_item, 3, .production_id = 5),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_item, 3, .production_id = 5),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_item, 4, .production_id = 9),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_item, 4, .production_id = 9),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_identifier, 1, .production_id = 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_item, 5, .production_id = 16),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_item, 5, .production_id = 16),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_modifiers, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_modifiers, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(447),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(45),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(67),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(383),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(56),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(75),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(409),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(63),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(85),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_instance_type, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_instance_type, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_instance_type, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_instance_type, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifiers, 1),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility_modifiers, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inverse_modifiers, 2, .production_id = 12),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inverse_modifiers, 2, .production_id = 12),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 3),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 5),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 5),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 4),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 4),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_item, 3),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uses_item, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_item, 4, .production_id = 8),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_item, 4, .production_id = 8),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body_statements, 1),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body_statements, 1),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_statements_repeat1, 2), SHIFT_REPEAT(424),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_body_statements_repeat1, 2),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_body_statements_repeat1, 2),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_statements_repeat1, 2), SHIFT_REPEAT(431),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_statements_repeat1, 2), SHIFT_REPEAT(369),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_modifiers, 1),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_modifiers, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_modifiers_repeat1, 2),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_modifiers_repeat1, 2),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_modifiers_repeat1, 2), SHIFT_REPEAT(94),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_modifiers_repeat1, 2), SHIFT_REPEAT(157),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_item, 2),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uses_item, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_item, 4, .production_id = 2),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_item, 4, .production_id = 2),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_item, 5, .production_id = 15),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_item, 5, .production_id = 15),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uses_item_repeat1, 2),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uses_item_repeat1, 2),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uses_item_repeat1, 2), SHIFT_REPEAT(429),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 3),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 5),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 5),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 4),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 4),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uses_item_repeat1, 2), SHIFT_REPEAT(376),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_item, 6, .production_id = 15),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_item, 6, .production_id = 15),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 4, .production_id = 2),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 4, .production_id = 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 4, .production_id = 7),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 4, .production_id = 7),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_item, 5, .production_id = 8),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_item, 5, .production_id = 8),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_definition, 2),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_definition, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uses_item_repeat1, 2), SHIFT_REPEAT(403),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_modifiers_external, 6, .production_id = 18),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_modifiers_external, 6, .production_id = 18),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_item, 4, .production_id = 5),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_item, 4, .production_id = 5),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 5),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 5),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_item, 6, .production_id = 16),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_item, 6, .production_id = 16),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_item, 6, .production_id = 17),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_item, 6, .production_id = 17),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_item, 2, .production_id = 1),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_item, 2, .production_id = 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 6, .production_id = 7),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 6, .production_id = 7),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 4),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_modifiers, 1),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_modifiers, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_item, 5, .production_id = 2),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_item, 5, .production_id = 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 3),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 3, .production_id = 2),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 3, .production_id = 2),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_item, 5, .production_id = 9),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_item, 5, .production_id = 9),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 5, .production_id = 7),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 5, .production_id = 7),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 5, .production_id = 2),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 5, .production_id = 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type_item, 5, .production_id = 13),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_type_item, 5, .production_id = 13),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_modifiers, 1),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forward_modifiers, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_modifiers, 1),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_modifiers, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_return_type, 2),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_return_type, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uses_item_repeat1, 2), SHIFT_REPEAT(426),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(448),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(449),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_statement, 1),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_statement, 1),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 9),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 9),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 2, .production_id = 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 1, .production_id = 10),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_attribute_list, 4),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_attribute_list, 5),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [733] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(268),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2),
  [772] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2), SHIFT_REPEAT(238),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 6),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_attribute_list, 3),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_attribute_list_repeat1, 2),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_attribute_list_repeat1, 2), SHIFT_REPEAT(359),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [844] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reference_modifiers_repeat1, 2), SHIFT_REPEAT(461),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reference_modifiers_repeat1, 2),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2),
  [851] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2), SHIFT_REPEAT(258),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [864] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_literal_repeat1, 2), SHIFT_REPEAT(334),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_literal_repeat1, 2),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter_declaration, 4, .production_id = 9),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_attribute, 3, .production_id = 10),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_redefine_value, 2),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 6),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 2, .production_id = 10),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter_declaration, 3, .production_id = 5),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1, .production_id = 1),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [939] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 2, .production_id = 1),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_modifiers, 1),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_derived, 2, .production_id = 14),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, .production_id = 2),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 3),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter_modifiers, 1),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_modifiers, 5),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_modifiers, 4),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_modifiers, 3),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
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
