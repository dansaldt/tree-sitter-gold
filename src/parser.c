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
#define STATE_COUNT 1098
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 163
#define ALIAS_COUNT 1
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 43

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
  anon_sym_int = 15,
  anon_sym_num = 16,
  anon_sym_Decimal = 17,
  anon_sym_boolean = 18,
  anon_sym_string = 19,
  anon_sym_cstring = 20,
  anon_sym_char = 21,
  anon_sym_type = 22,
  anon_sym_COLON = 23,
  anon_sym_memory = 24,
  anon_sym_refTo = 25,
  anon_sym_listOf = 26,
  anon_sym_LBRACK = 27,
  aux_sym_reference_modifiers_token1 = 28,
  anon_sym_RBRACK = 29,
  anon_sym_func = 30,
  anon_sym_function = 31,
  anon_sym_proc = 32,
  anon_sym_procedure = 33,
  anon_sym_forward = 34,
  anon_sym_endFunc = 35,
  anon_sym_endProc = 36,
  anon_sym_external = 37,
  anon_sym_SQUOTE = 38,
  anon_sym_DOT = 39,
  anon_sym_inOut = 40,
  anon_sym_var = 41,
  anon_sym_return = 42,
  anon_sym_inverse = 43,
  anon_sym_absolute = 44,
  anon_sym_final = 45,
  anon_sym_override = 46,
  anon_sym_private = 47,
  anon_sym_protected = 48,
  anon_sym_PLUS = 49,
  anon_sym_record = 50,
  anon_sym_nativeRecord = 51,
  anon_sym_endRecord = 52,
  anon_sym_endNativeRecord = 53,
  anon_sym_to = 54,
  anon_sym_array = 55,
  anon_sym_of = 56,
  anon_sym_model = 57,
  anon_sym_RBRACK2 = 58,
  aux_sym__string_literal_token1 = 59,
  anon_sym_SQUOTE2 = 60,
  anon_sym_LBRACE = 61,
  anon_sym_RBRACE = 62,
  sym__integer_literal = 63,
  anon_sym_true = 64,
  anon_sym_True = 65,
  anon_sym_false = 66,
  anon_sym_False = 67,
  sym_nil_literal = 68,
  sym_source_file = 69,
  sym__type_identifier = 70,
  sym_module = 71,
  sym_class = 72,
  sym_class_item = 73,
  sym__class = 74,
  sym__module_item_declaration = 75,
  sym__class_item_declaration = 76,
  sym__item_declaration = 77,
  sym_uses_item = 78,
  sym_const_item = 79,
  sym_const_modifiers = 80,
  sym__type_item = 81,
  sym__type = 82,
  sym__type_identifier_or_primitive = 83,
  sym_sized = 84,
  sym_retyped_item = 85,
  sym__variable_item = 86,
  sym_variable_item = 87,
  sym__variable_type = 88,
  sym_variable_modifiers = 89,
  sym_memory_modifiers = 90,
  sym_reference = 91,
  sym_reference_modifiers = 92,
  sym__function_type = 93,
  sym_function_type = 94,
  sym_function_type_item = 95,
  sym_function_item = 96,
  sym_function_modifiers = 97,
  sym_forward_modifiers = 98,
  sym__function_definition = 99,
  sym_function_modifiers_external = 100,
  sym_function_parameters = 101,
  sym_function_parameter_declaration = 102,
  sym_function_parameter_modifiers = 103,
  sym_function_return_type = 104,
  sym_function_body_statements = 105,
  sym_variable_declaration = 106,
  sym_statement = 107,
  sym_declaration_statement = 108,
  sym_inverse_modifiers = 109,
  sym_absolute_modifiers = 110,
  sym__override_modifiers = 111,
  sym_visibility_modifiers = 112,
  sym__enum_type = 113,
  sym_enum_type = 114,
  sym_enum_item = 115,
  sym_enum_derived = 116,
  sym_enum_modifiers = 117,
  sym_enum_variant_list = 118,
  sym_enum_variant = 119,
  sym_enum_variant_redefine_value = 120,
  sym__set_type = 121,
  sym_set_type = 122,
  sym_set_item = 123,
  sym__pointer_type = 124,
  sym_pointer_type = 125,
  sym_pointer_type_item = 126,
  sym__record_type = 127,
  sym_record_type = 128,
  sym_record_item = 129,
  sym_record_derived = 130,
  sym_record_variable_list = 131,
  sym_record_variable = 132,
  sym__range_type = 133,
  sym_range_type = 134,
  sym__range_value = 135,
  sym_range_item = 136,
  sym__array_type = 137,
  sym_array_type = 138,
  sym_array_item = 139,
  sym_annotation = 140,
  sym_annotation_attribute_list = 141,
  sym_annotation_attribute = 142,
  sym__inner_annotation = 143,
  sym__literal = 144,
  sym__string_literal = 145,
  sym_string_literal = 146,
  sym_text_literal = 147,
  sym_integer_literal = 148,
  sym_boolean_literal = 149,
  aux_sym_module_repeat1 = 150,
  aux_sym__class_repeat1 = 151,
  aux_sym_uses_item_repeat1 = 152,
  aux_sym_variable_modifiers_repeat1 = 153,
  aux_sym_reference_modifiers_repeat1 = 154,
  aux_sym_function_modifiers_repeat1 = 155,
  aux_sym_function_parameters_repeat1 = 156,
  aux_sym_function_body_statements_repeat1 = 157,
  aux_sym_enum_variant_list_repeat1 = 158,
  aux_sym_record_variable_list_repeat1 = 159,
  aux_sym_annotation_attribute_list_repeat1 = 160,
  aux_sym__string_literal_repeat1 = 161,
  aux_sym_text_literal_repeat1 = 162,
  alias_sym_type_identifier = 163,
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
  [anon_sym_int] = "type_primitive",
  [anon_sym_num] = "type_primitive",
  [anon_sym_Decimal] = "type_primitive",
  [anon_sym_boolean] = "type_primitive",
  [anon_sym_string] = "type_primitive",
  [anon_sym_cstring] = "type_primitive",
  [anon_sym_char] = "type_primitive",
  [anon_sym_type] = "type",
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
  [anon_sym_to] = "to",
  [anon_sym_array] = "array",
  [anon_sym_of] = "of",
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
  [sym_nil_literal] = "nil_literal",
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
  [sym__type_identifier_or_primitive] = "_type_identifier_or_primitive",
  [sym_sized] = "sized",
  [sym_retyped_item] = "retyped_item",
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
  [sym__range_type] = "_range_type",
  [sym_range_type] = "range_type",
  [sym__range_value] = "_range_value",
  [sym_range_item] = "range_item",
  [sym__array_type] = "_array_type",
  [sym_array_type] = "array_type",
  [sym_array_item] = "array_item",
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
  [anon_sym_int] = anon_sym_int,
  [anon_sym_num] = anon_sym_int,
  [anon_sym_Decimal] = anon_sym_int,
  [anon_sym_boolean] = anon_sym_int,
  [anon_sym_string] = anon_sym_int,
  [anon_sym_cstring] = anon_sym_int,
  [anon_sym_char] = anon_sym_int,
  [anon_sym_type] = anon_sym_type,
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
  [anon_sym_to] = anon_sym_to,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_of] = anon_sym_of,
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
  [sym_nil_literal] = sym_nil_literal,
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
  [sym__type_identifier_or_primitive] = sym__type_identifier_or_primitive,
  [sym_sized] = sym_sized,
  [sym_retyped_item] = sym_retyped_item,
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
  [sym__range_type] = sym__range_type,
  [sym_range_type] = sym_range_type,
  [sym__range_value] = sym__range_value,
  [sym_range_item] = sym_range_item,
  [sym__array_type] = sym__array_type,
  [sym_array_type] = sym_array_type,
  [sym_array_item] = sym_array_item,
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
  [anon_sym_int] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_num] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Decimal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cstring] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_type] = {
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
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
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
  [sym_nil_literal] = {
    .visible = true,
    .named = true,
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
  [sym__type_identifier_or_primitive] = {
    .visible = false,
    .named = true,
  },
  [sym_sized] = {
    .visible = true,
    .named = true,
  },
  [sym_retyped_item] = {
    .visible = true,
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
  [sym__range_type] = {
    .visible = false,
    .named = true,
  },
  [sym_range_type] = {
    .visible = true,
    .named = true,
  },
  [sym__range_value] = {
    .visible = false,
    .named = true,
  },
  [sym_range_item] = {
    .visible = true,
    .named = true,
  },
  [sym__array_type] = {
    .visible = false,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_item] = {
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
  field_begin = 2,
  field_body = 3,
  field_derived = 4,
  field_dll_function_name = 5,
  field_dll_name = 6,
  field_end = 7,
  field_enum_type = 8,
  field_name = 9,
  field_parameters = 10,
  field_size = 11,
  field_type = 12,
  field_variable = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_backref] = "backref",
  [field_begin] = "begin",
  [field_body] = "body",
  [field_derived] = "derived",
  [field_dll_function_name] = "dll_function_name",
  [field_dll_name] = "dll_name",
  [field_end] = "end",
  [field_enum_type] = "enum_type",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_size] = "size",
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
  [12] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 2},
  [14] = {.index = 18, .length = 4},
  [15] = {.index = 22, .length = 1},
  [16] = {.index = 23, .length = 1},
  [17] = {.index = 24, .length = 1},
  [18] = {.index = 25, .length = 1},
  [19] = {.index = 26, .length = 2},
  [20] = {.index = 28, .length = 2},
  [21] = {.index = 30, .length = 3},
  [22] = {.index = 33, .length = 2},
  [23] = {.index = 35, .length = 2},
  [24] = {.index = 37, .length = 3},
  [25] = {.index = 40, .length = 3},
  [26] = {.index = 43, .length = 2},
  [27] = {.index = 45, .length = 2},
  [28] = {.index = 47, .length = 4},
  [29] = {.index = 51, .length = 1},
  [30] = {.index = 52, .length = 1},
  [31] = {.index = 53, .length = 1},
  [32] = {.index = 54, .length = 2},
  [33] = {.index = 56, .length = 2},
  [34] = {.index = 58, .length = 3},
  [35] = {.index = 61, .length = 2},
  [36] = {.index = 63, .length = 2},
  [37] = {.index = 65, .length = 3},
  [38] = {.index = 68, .length = 3},
  [39] = {.index = 71, .length = 2},
  [40] = {.index = 73, .length = 2},
  [41] = {.index = 75, .length = 2},
  [42] = {.index = 77, .length = 2},
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
    {field_begin, 0, .inherited = true},
    {field_end, 0, .inherited = true},
  [16] =
    {field_size, 0, .inherited = true},
    {field_type, 0, .inherited = true},
  [18] =
    {field_derived, 2},
    {field_derived, 3},
    {field_derived, 4},
    {field_name, 1},
  [22] =
    {field_name, 0},
  [23] =
    {field_parameters, 1},
  [24] =
    {field_type, 1},
  [25] =
    {field_type, 0},
  [26] =
    {field_body, 1},
    {field_derived, 0},
  [28] =
    {field_name, 1},
    {field_parameters, 3, .inherited = true},
  [30] =
    {field_body, 3, .inherited = true},
    {field_derived, 3, .inherited = true},
    {field_name, 1},
  [33] =
    {field_enum_type, 3, .inherited = true},
    {field_name, 1},
  [35] =
    {field_name, 1},
    {field_type, 3, .inherited = true},
  [37] =
    {field_begin, 3, .inherited = true},
    {field_end, 3, .inherited = true},
    {field_name, 1},
  [40] =
    {field_name, 1},
    {field_size, 3, .inherited = true},
    {field_type, 3, .inherited = true},
  [43] =
    {field_name, 1},
    {field_parameters, 2},
  [45] =
    {field_name, 1},
    {field_type, 3},
  [47] =
    {field_derived, 3},
    {field_derived, 4},
    {field_derived, 5},
    {field_name, 2},
  [51] =
    {field_enum_type, 1},
  [52] =
    {field_backref, 1},
  [53] =
    {field_variable, 1},
  [54] =
    {field_begin, 0},
    {field_end, 2},
  [56] =
    {field_name, 2},
    {field_parameters, 4, .inherited = true},
  [58] =
    {field_body, 4, .inherited = true},
    {field_derived, 4, .inherited = true},
    {field_name, 2},
  [61] =
    {field_enum_type, 4, .inherited = true},
    {field_name, 2},
  [63] =
    {field_name, 2},
    {field_type, 4, .inherited = true},
  [65] =
    {field_begin, 4, .inherited = true},
    {field_end, 4, .inherited = true},
    {field_name, 2},
  [68] =
    {field_name, 2},
    {field_size, 4, .inherited = true},
    {field_type, 4, .inherited = true},
  [71] =
    {field_name, 2},
    {field_parameters, 3},
  [73] =
    {field_name, 2},
    {field_type, 4},
  [75] =
    {field_size, 2},
    {field_type, 5},
  [77] =
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
  [3] = 3,
  [4] = 3,
  [5] = 5,
  [6] = 5,
  [7] = 2,
  [8] = 2,
  [9] = 3,
  [10] = 5,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 13,
  [17] = 14,
  [18] = 14,
  [19] = 19,
  [20] = 20,
  [21] = 19,
  [22] = 19,
  [23] = 20,
  [24] = 20,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 27,
  [29] = 27,
  [30] = 30,
  [31] = 31,
  [32] = 30,
  [33] = 30,
  [34] = 25,
  [35] = 31,
  [36] = 31,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 38,
  [41] = 39,
  [42] = 39,
  [43] = 43,
  [44] = 38,
  [45] = 38,
  [46] = 46,
  [47] = 39,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 50,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 51,
  [60] = 60,
  [61] = 52,
  [62] = 55,
  [63] = 53,
  [64] = 58,
  [65] = 56,
  [66] = 60,
  [67] = 57,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 68,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 70,
  [77] = 69,
  [78] = 70,
  [79] = 74,
  [80] = 80,
  [81] = 68,
  [82] = 72,
  [83] = 69,
  [84] = 74,
  [85] = 80,
  [86] = 75,
  [87] = 72,
  [88] = 73,
  [89] = 73,
  [90] = 75,
  [91] = 80,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 93,
  [97] = 94,
  [98] = 98,
  [99] = 92,
  [100] = 100,
  [101] = 94,
  [102] = 98,
  [103] = 93,
  [104] = 95,
  [105] = 92,
  [106] = 106,
  [107] = 98,
  [108] = 95,
  [109] = 109,
  [110] = 110,
  [111] = 100,
  [112] = 112,
  [113] = 113,
  [114] = 109,
  [115] = 115,
  [116] = 100,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 110,
  [121] = 121,
  [122] = 122,
  [123] = 119,
  [124] = 124,
  [125] = 118,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 110,
  [130] = 130,
  [131] = 109,
  [132] = 113,
  [133] = 115,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 128,
  [138] = 138,
  [139] = 121,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 127,
  [145] = 145,
  [146] = 126,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 124,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 119,
  [165] = 165,
  [166] = 166,
  [167] = 118,
  [168] = 113,
  [169] = 115,
  [170] = 122,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 135,
  [175] = 143,
  [176] = 121,
  [177] = 165,
  [178] = 163,
  [179] = 161,
  [180] = 160,
  [181] = 159,
  [182] = 130,
  [183] = 150,
  [184] = 126,
  [185] = 157,
  [186] = 166,
  [187] = 138,
  [188] = 140,
  [189] = 122,
  [190] = 141,
  [191] = 148,
  [192] = 127,
  [193] = 124,
  [194] = 162,
  [195] = 128,
  [196] = 147,
  [197] = 171,
  [198] = 172,
  [199] = 173,
  [200] = 136,
  [201] = 153,
  [202] = 151,
  [203] = 145,
  [204] = 149,
  [205] = 134,
  [206] = 156,
  [207] = 158,
  [208] = 106,
  [209] = 154,
  [210] = 155,
  [211] = 142,
  [212] = 130,
  [213] = 147,
  [214] = 156,
  [215] = 160,
  [216] = 155,
  [217] = 161,
  [218] = 106,
  [219] = 163,
  [220] = 165,
  [221] = 154,
  [222] = 222,
  [223] = 145,
  [224] = 142,
  [225] = 159,
  [226] = 100,
  [227] = 143,
  [228] = 134,
  [229] = 157,
  [230] = 138,
  [231] = 149,
  [232] = 140,
  [233] = 141,
  [234] = 151,
  [235] = 153,
  [236] = 171,
  [237] = 150,
  [238] = 158,
  [239] = 162,
  [240] = 136,
  [241] = 166,
  [242] = 173,
  [243] = 172,
  [244] = 135,
  [245] = 148,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 110,
  [251] = 251,
  [252] = 252,
  [253] = 100,
  [254] = 109,
  [255] = 255,
  [256] = 256,
  [257] = 119,
  [258] = 115,
  [259] = 118,
  [260] = 113,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 95,
  [265] = 265,
  [266] = 110,
  [267] = 98,
  [268] = 100,
  [269] = 109,
  [270] = 270,
  [271] = 271,
  [272] = 261,
  [273] = 158,
  [274] = 274,
  [275] = 127,
  [276] = 156,
  [277] = 270,
  [278] = 119,
  [279] = 126,
  [280] = 265,
  [281] = 118,
  [282] = 110,
  [283] = 121,
  [284] = 113,
  [285] = 109,
  [286] = 155,
  [287] = 128,
  [288] = 162,
  [289] = 271,
  [290] = 263,
  [291] = 115,
  [292] = 100,
  [293] = 124,
  [294] = 122,
  [295] = 295,
  [296] = 296,
  [297] = 124,
  [298] = 298,
  [299] = 299,
  [300] = 295,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 147,
  [306] = 306,
  [307] = 162,
  [308] = 308,
  [309] = 110,
  [310] = 106,
  [311] = 154,
  [312] = 128,
  [313] = 313,
  [314] = 142,
  [315] = 143,
  [316] = 265,
  [317] = 134,
  [318] = 149,
  [319] = 319,
  [320] = 124,
  [321] = 136,
  [322] = 162,
  [323] = 173,
  [324] = 172,
  [325] = 127,
  [326] = 326,
  [327] = 126,
  [328] = 328,
  [329] = 329,
  [330] = 295,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 121,
  [336] = 270,
  [337] = 271,
  [338] = 135,
  [339] = 313,
  [340] = 148,
  [341] = 141,
  [342] = 342,
  [343] = 122,
  [344] = 140,
  [345] = 127,
  [346] = 158,
  [347] = 138,
  [348] = 348,
  [349] = 157,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 261,
  [354] = 156,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 115,
  [359] = 158,
  [360] = 274,
  [361] = 155,
  [362] = 252,
  [363] = 251,
  [364] = 364,
  [365] = 365,
  [366] = 263,
  [367] = 247,
  [368] = 122,
  [369] = 113,
  [370] = 248,
  [371] = 255,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 313,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 109,
  [383] = 383,
  [384] = 119,
  [385] = 156,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 155,
  [390] = 118,
  [391] = 298,
  [392] = 162,
  [393] = 141,
  [394] = 348,
  [395] = 355,
  [396] = 140,
  [397] = 162,
  [398] = 352,
  [399] = 148,
  [400] = 138,
  [401] = 306,
  [402] = 157,
  [403] = 147,
  [404] = 121,
  [405] = 135,
  [406] = 156,
  [407] = 118,
  [408] = 364,
  [409] = 365,
  [410] = 379,
  [411] = 383,
  [412] = 388,
  [413] = 386,
  [414] = 381,
  [415] = 380,
  [416] = 378,
  [417] = 377,
  [418] = 376,
  [419] = 374,
  [420] = 373,
  [421] = 372,
  [422] = 296,
  [423] = 115,
  [424] = 128,
  [425] = 122,
  [426] = 319,
  [427] = 155,
  [428] = 247,
  [429] = 333,
  [430] = 332,
  [431] = 331,
  [432] = 113,
  [433] = 329,
  [434] = 328,
  [435] = 248,
  [436] = 106,
  [437] = 303,
  [438] = 299,
  [439] = 301,
  [440] = 172,
  [441] = 302,
  [442] = 308,
  [443] = 173,
  [444] = 357,
  [445] = 255,
  [446] = 119,
  [447] = 334,
  [448] = 326,
  [449] = 127,
  [450] = 136,
  [451] = 149,
  [452] = 155,
  [453] = 158,
  [454] = 156,
  [455] = 134,
  [456] = 124,
  [457] = 143,
  [458] = 142,
  [459] = 356,
  [460] = 147,
  [461] = 251,
  [462] = 126,
  [463] = 387,
  [464] = 342,
  [465] = 274,
  [466] = 106,
  [467] = 158,
  [468] = 154,
  [469] = 145,
  [470] = 304,
  [471] = 252,
  [472] = 334,
  [473] = 381,
  [474] = 154,
  [475] = 356,
  [476] = 124,
  [477] = 342,
  [478] = 127,
  [479] = 142,
  [480] = 157,
  [481] = 173,
  [482] = 148,
  [483] = 122,
  [484] = 308,
  [485] = 387,
  [486] = 301,
  [487] = 135,
  [488] = 128,
  [489] = 134,
  [490] = 326,
  [491] = 357,
  [492] = 302,
  [493] = 298,
  [494] = 299,
  [495] = 303,
  [496] = 304,
  [497] = 121,
  [498] = 348,
  [499] = 136,
  [500] = 355,
  [501] = 162,
  [502] = 106,
  [503] = 352,
  [504] = 172,
  [505] = 328,
  [506] = 158,
  [507] = 306,
  [508] = 329,
  [509] = 319,
  [510] = 331,
  [511] = 147,
  [512] = 332,
  [513] = 155,
  [514] = 333,
  [515] = 141,
  [516] = 140,
  [517] = 143,
  [518] = 156,
  [519] = 158,
  [520] = 138,
  [521] = 149,
  [522] = 296,
  [523] = 364,
  [524] = 365,
  [525] = 372,
  [526] = 379,
  [527] = 162,
  [528] = 383,
  [529] = 388,
  [530] = 373,
  [531] = 386,
  [532] = 126,
  [533] = 380,
  [534] = 378,
  [535] = 377,
  [536] = 376,
  [537] = 374,
  [538] = 173,
  [539] = 149,
  [540] = 157,
  [541] = 109,
  [542] = 151,
  [543] = 153,
  [544] = 142,
  [545] = 545,
  [546] = 154,
  [547] = 545,
  [548] = 156,
  [549] = 106,
  [550] = 138,
  [551] = 162,
  [552] = 141,
  [553] = 155,
  [554] = 545,
  [555] = 148,
  [556] = 158,
  [557] = 156,
  [558] = 135,
  [559] = 100,
  [560] = 155,
  [561] = 134,
  [562] = 143,
  [563] = 545,
  [564] = 140,
  [565] = 545,
  [566] = 545,
  [567] = 147,
  [568] = 545,
  [569] = 136,
  [570] = 145,
  [571] = 172,
  [572] = 165,
  [573] = 163,
  [574] = 545,
  [575] = 161,
  [576] = 160,
  [577] = 159,
  [578] = 130,
  [579] = 150,
  [580] = 580,
  [581] = 580,
  [582] = 580,
  [583] = 580,
  [584] = 580,
  [585] = 585,
  [586] = 110,
  [587] = 580,
  [588] = 580,
  [589] = 580,
  [590] = 261,
  [591] = 591,
  [592] = 592,
  [593] = 592,
  [594] = 271,
  [595] = 592,
  [596] = 596,
  [597] = 592,
  [598] = 596,
  [599] = 592,
  [600] = 592,
  [601] = 115,
  [602] = 113,
  [603] = 592,
  [604] = 604,
  [605] = 263,
  [606] = 118,
  [607] = 119,
  [608] = 592,
  [609] = 591,
  [610] = 128,
  [611] = 611,
  [612] = 126,
  [613] = 121,
  [614] = 614,
  [615] = 604,
  [616] = 274,
  [617] = 617,
  [618] = 148,
  [619] = 326,
  [620] = 154,
  [621] = 334,
  [622] = 386,
  [623] = 381,
  [624] = 380,
  [625] = 378,
  [626] = 377,
  [627] = 376,
  [628] = 374,
  [629] = 373,
  [630] = 630,
  [631] = 357,
  [632] = 632,
  [633] = 617,
  [634] = 630,
  [635] = 142,
  [636] = 632,
  [637] = 632,
  [638] = 143,
  [639] = 302,
  [640] = 617,
  [641] = 630,
  [642] = 134,
  [643] = 632,
  [644] = 632,
  [645] = 617,
  [646] = 149,
  [647] = 136,
  [648] = 298,
  [649] = 630,
  [650] = 630,
  [651] = 632,
  [652] = 173,
  [653] = 172,
  [654] = 299,
  [655] = 617,
  [656] = 630,
  [657] = 135,
  [658] = 658,
  [659] = 632,
  [660] = 660,
  [661] = 303,
  [662] = 617,
  [663] = 617,
  [664] = 304,
  [665] = 630,
  [666] = 141,
  [667] = 140,
  [668] = 632,
  [669] = 617,
  [670] = 138,
  [671] = 617,
  [672] = 630,
  [673] = 157,
  [674] = 674,
  [675] = 675,
  [676] = 675,
  [677] = 675,
  [678] = 675,
  [679] = 675,
  [680] = 680,
  [681] = 675,
  [682] = 675,
  [683] = 675,
  [684] = 684,
  [685] = 684,
  [686] = 686,
  [687] = 684,
  [688] = 684,
  [689] = 686,
  [690] = 686,
  [691] = 691,
  [692] = 692,
  [693] = 684,
  [694] = 686,
  [695] = 695,
  [696] = 686,
  [697] = 686,
  [698] = 684,
  [699] = 684,
  [700] = 686,
  [701] = 686,
  [702] = 684,
  [703] = 703,
  [704] = 703,
  [705] = 705,
  [706] = 703,
  [707] = 705,
  [708] = 703,
  [709] = 703,
  [710] = 705,
  [711] = 711,
  [712] = 703,
  [713] = 703,
  [714] = 714,
  [715] = 703,
  [716] = 716,
  [717] = 717,
  [718] = 718,
  [719] = 719,
  [720] = 720,
  [721] = 721,
  [722] = 720,
  [723] = 721,
  [724] = 720,
  [725] = 721,
  [726] = 726,
  [727] = 727,
  [728] = 728,
  [729] = 729,
  [730] = 718,
  [731] = 720,
  [732] = 732,
  [733] = 733,
  [734] = 734,
  [735] = 721,
  [736] = 736,
  [737] = 726,
  [738] = 727,
  [739] = 728,
  [740] = 729,
  [741] = 718,
  [742] = 720,
  [743] = 734,
  [744] = 744,
  [745] = 745,
  [746] = 721,
  [747] = 747,
  [748] = 748,
  [749] = 726,
  [750] = 591,
  [751] = 751,
  [752] = 727,
  [753] = 728,
  [754] = 729,
  [755] = 755,
  [756] = 718,
  [757] = 720,
  [758] = 734,
  [759] = 726,
  [760] = 721,
  [761] = 761,
  [762] = 721,
  [763] = 726,
  [764] = 727,
  [765] = 727,
  [766] = 766,
  [767] = 767,
  [768] = 728,
  [769] = 728,
  [770] = 729,
  [771] = 720,
  [772] = 772,
  [773] = 773,
  [774] = 734,
  [775] = 775,
  [776] = 721,
  [777] = 777,
  [778] = 726,
  [779] = 727,
  [780] = 728,
  [781] = 604,
  [782] = 729,
  [783] = 718,
  [784] = 720,
  [785] = 721,
  [786] = 734,
  [787] = 787,
  [788] = 788,
  [789] = 721,
  [790] = 733,
  [791] = 791,
  [792] = 744,
  [793] = 777,
  [794] = 745,
  [795] = 726,
  [796] = 761,
  [797] = 727,
  [798] = 734,
  [799] = 728,
  [800] = 720,
  [801] = 729,
  [802] = 718,
  [803] = 734,
  [804] = 729,
  [805] = 718,
  [806] = 729,
  [807] = 720,
  [808] = 734,
  [809] = 728,
  [810] = 777,
  [811] = 727,
  [812] = 761,
  [813] = 721,
  [814] = 726,
  [815] = 720,
  [816] = 718,
  [817] = 745,
  [818] = 744,
  [819] = 733,
  [820] = 820,
  [821] = 821,
  [822] = 822,
  [823] = 823,
  [824] = 824,
  [825] = 825,
  [826] = 826,
  [827] = 821,
  [828] = 828,
  [829] = 822,
  [830] = 825,
  [831] = 821,
  [832] = 822,
  [833] = 825,
  [834] = 821,
  [835] = 835,
  [836] = 836,
  [837] = 837,
  [838] = 837,
  [839] = 824,
  [840] = 840,
  [841] = 837,
  [842] = 837,
  [843] = 837,
  [844] = 825,
  [845] = 845,
  [846] = 820,
  [847] = 836,
  [848] = 845,
  [849] = 837,
  [850] = 820,
  [851] = 836,
  [852] = 845,
  [853] = 853,
  [854] = 837,
  [855] = 820,
  [856] = 836,
  [857] = 826,
  [858] = 823,
  [859] = 859,
  [860] = 824,
  [861] = 840,
  [862] = 862,
  [863] = 823,
  [864] = 864,
  [865] = 840,
  [866] = 866,
  [867] = 867,
  [868] = 835,
  [869] = 823,
  [870] = 826,
  [871] = 826,
  [872] = 822,
  [873] = 873,
  [874] = 874,
  [875] = 835,
  [876] = 876,
  [877] = 835,
  [878] = 840,
  [879] = 879,
  [880] = 880,
  [881] = 826,
  [882] = 837,
  [883] = 883,
  [884] = 884,
  [885] = 835,
  [886] = 886,
  [887] = 823,
  [888] = 835,
  [889] = 889,
  [890] = 826,
  [891] = 891,
  [892] = 892,
  [893] = 823,
  [894] = 823,
  [895] = 826,
  [896] = 896,
  [897] = 897,
  [898] = 840,
  [899] = 823,
  [900] = 826,
  [901] = 835,
  [902] = 840,
  [903] = 835,
  [904] = 840,
  [905] = 905,
  [906] = 906,
  [907] = 840,
  [908] = 908,
  [909] = 909,
  [910] = 910,
  [911] = 911,
  [912] = 912,
  [913] = 913,
  [914] = 914,
  [915] = 915,
  [916] = 916,
  [917] = 917,
  [918] = 918,
  [919] = 908,
  [920] = 920,
  [921] = 921,
  [922] = 922,
  [923] = 923,
  [924] = 924,
  [925] = 925,
  [926] = 926,
  [927] = 927,
  [928] = 928,
  [929] = 929,
  [930] = 930,
  [931] = 909,
  [932] = 908,
  [933] = 908,
  [934] = 934,
  [935] = 935,
  [936] = 936,
  [937] = 924,
  [938] = 938,
  [939] = 939,
  [940] = 927,
  [941] = 941,
  [942] = 942,
  [943] = 943,
  [944] = 908,
  [945] = 945,
  [946] = 924,
  [947] = 947,
  [948] = 924,
  [949] = 930,
  [950] = 927,
  [951] = 951,
  [952] = 910,
  [953] = 911,
  [954] = 954,
  [955] = 955,
  [956] = 956,
  [957] = 957,
  [958] = 958,
  [959] = 959,
  [960] = 912,
  [961] = 909,
  [962] = 930,
  [963] = 924,
  [964] = 964,
  [965] = 920,
  [966] = 916,
  [967] = 922,
  [968] = 957,
  [969] = 927,
  [970] = 970,
  [971] = 971,
  [972] = 957,
  [973] = 973,
  [974] = 974,
  [975] = 975,
  [976] = 908,
  [977] = 977,
  [978] = 920,
  [979] = 918,
  [980] = 924,
  [981] = 924,
  [982] = 982,
  [983] = 983,
  [984] = 915,
  [985] = 985,
  [986] = 911,
  [987] = 985,
  [988] = 591,
  [989] = 908,
  [990] = 990,
  [991] = 991,
  [992] = 992,
  [993] = 993,
  [994] = 993,
  [995] = 974,
  [996] = 971,
  [997] = 964,
  [998] = 998,
  [999] = 927,
  [1000] = 942,
  [1001] = 992,
  [1002] = 913,
  [1003] = 927,
  [1004] = 1004,
  [1005] = 917,
  [1006] = 1006,
  [1007] = 914,
  [1008] = 938,
  [1009] = 955,
  [1010] = 1006,
  [1011] = 990,
  [1012] = 991,
  [1013] = 992,
  [1014] = 974,
  [1015] = 971,
  [1016] = 964,
  [1017] = 998,
  [1018] = 914,
  [1019] = 991,
  [1020] = 913,
  [1021] = 909,
  [1022] = 1022,
  [1023] = 917,
  [1024] = 1006,
  [1025] = 1025,
  [1026] = 938,
  [1027] = 955,
  [1028] = 1028,
  [1029] = 971,
  [1030] = 1030,
  [1031] = 927,
  [1032] = 911,
  [1033] = 909,
  [1034] = 1034,
  [1035] = 917,
  [1036] = 1006,
  [1037] = 938,
  [1038] = 922,
  [1039] = 915,
  [1040] = 909,
  [1041] = 1041,
  [1042] = 1006,
  [1043] = 938,
  [1044] = 990,
  [1045] = 918,
  [1046] = 909,
  [1047] = 923,
  [1048] = 1006,
  [1049] = 938,
  [1050] = 1050,
  [1051] = 908,
  [1052] = 909,
  [1053] = 1053,
  [1054] = 1006,
  [1055] = 938,
  [1056] = 1056,
  [1057] = 927,
  [1058] = 930,
  [1059] = 1006,
  [1060] = 938,
  [1061] = 909,
  [1062] = 1034,
  [1063] = 998,
  [1064] = 982,
  [1065] = 914,
  [1066] = 1066,
  [1067] = 941,
  [1068] = 912,
  [1069] = 1034,
  [1070] = 916,
  [1071] = 982,
  [1072] = 1072,
  [1073] = 913,
  [1074] = 941,
  [1075] = 920,
  [1076] = 922,
  [1077] = 982,
  [1078] = 924,
  [1079] = 604,
  [1080] = 1080,
  [1081] = 1081,
  [1082] = 1082,
  [1083] = 925,
  [1084] = 1066,
  [1085] = 936,
  [1086] = 970,
  [1087] = 1066,
  [1088] = 936,
  [1089] = 970,
  [1090] = 1066,
  [1091] = 936,
  [1092] = 936,
  [1093] = 936,
  [1094] = 936,
  [1095] = 936,
  [1096] = 929,
  [1097] = 929,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'd'
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

static inline bool sym_identifier_character_set_3(int32_t c) {
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

static inline bool sym_identifier_character_set_5(int32_t c) {
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
      if (eof) ADVANCE(288);
      if (lookahead == '\'') ADVANCE(591);
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == ')') ADVANCE(504);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == ',') ADVANCE(507);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(554);
      if (lookahead == ':') ADVANCE(529);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '=') ADVANCE(510);
      if (lookahead == 'A' ||
          lookahead == 'I' ||
          lookahead == 'O' ||
          lookahead == 'P') ADVANCE(537);
      if (lookahead == 'D') ADVANCE(77);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'T') ADVANCE(539);
      if (lookahead == 'V') ADVANCE(538);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == ']') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(192);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == 'u') ADVANCE(221);
      if (lookahead == 'v') ADVANCE(31);
      if (lookahead == '{') ADVANCE(592);
      if (lookahead == '}') ADVANCE(593);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(270)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(590);
      if (lookahead == '\'') ADVANCE(591);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('!' <= lookahead && lookahead <= '~') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(589);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(590);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('!' <= lookahead && lookahead <= '~') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(589);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(553);
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == ')') ADVANCE(504);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == ',') ADVANCE(507);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'T') ADVANCE(191);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'm') ADVANCE(250);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(260);
      if (lookahead == 'p') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == 'u') ADVANCE(221);
      if (lookahead == 'v') ADVANCE(31);
      if (lookahead == '{') ADVANCE(592);
      if (lookahead == '}') ADVANCE(593);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(553);
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == ')') ADVANCE(504);
      if (lookahead == ',') ADVANCE(507);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(554);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == 'D') ADVANCE(331);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == ']') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(429);
      if (lookahead == 'b') ADVANCE(411);
      if (lookahead == 'c') ADVANCE(363);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(396);
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead == 'p') ADVANCE(430);
      if (lookahead == 'r') ADVANCE(355);
      if (lookahead == 's') ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(487);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(553);
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == ')') ADVANCE(504);
      if (lookahead == ',') ADVANCE(507);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(554);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == 'D') ADVANCE(331);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == 'a') ADVANCE(429);
      if (lookahead == 'b') ADVANCE(411);
      if (lookahead == 'c') ADVANCE(363);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(396);
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead == 'p') ADVANCE(430);
      if (lookahead == 'r') ADVANCE(355);
      if (lookahead == 's') ADVANCE(461);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(487);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(553);
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == ',') ADVANCE(507);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(554);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == 'D') ADVANCE(331);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead == 'a') ADVANCE(429);
      if (lookahead == 'b') ADVANCE(411);
      if (lookahead == 'c') ADVANCE(363);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(396);
      if (lookahead == 'l') ADVANCE(364);
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead == 'p') ADVANCE(430);
      if (lookahead == 'r') ADVANCE(332);
      if (lookahead == 's') ADVANCE(461);
      if (lookahead == '}') ADVANCE(593);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(487);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(553);
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == 'F') ADVANCE(303);
      if (lookahead == 'T') ADVANCE(435);
      if (lookahead == 'f') ADVANCE(307);
      if (lookahead == 'n') ADVANCE(374);
      if (lookahead == 't') ADVANCE(442);
      if (lookahead == '{') ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(487);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(553);
      if (lookahead == ')') ADVANCE(504);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(487);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead == 'f') ADVANCE(376);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(428);
      if (lookahead == 't') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(487);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead == 'f') ADVANCE(376);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(487);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead == 'f') ADVANCE(376);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(428);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(487);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(487);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(504);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == 'i') ADVANCE(398);
      if (lookahead == 'v') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(487);
      END_STATE();
    case 14:
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead == 'f') ADVANCE(376);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == 'm') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(487);
      END_STATE();
    case 15:
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == 'm') ADVANCE(346);
      if (lookahead == 'p') ADVANCE(430);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(487);
      END_STATE();
    case 16:
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == 'm') ADVANCE(346);
      if (lookahead == 'p') ADVANCE(430);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(487);
      END_STATE();
    case 17:
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == 'A' ||
          lookahead == 'I' ||
          lookahead == 'O' ||
          lookahead == 'P' ||
          lookahead == 'T') ADVANCE(537);
      if (lookahead == 'V') ADVANCE(538);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(56);
      if (lookahead == 'C') ADVANCE(255);
      if (lookahead == 'I') ADVANCE(169);
      if (lookahead == 'O') ADVANCE(265);
      if (lookahead == 'V') ADVANCE(93);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(112);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(253);
      if (lookahead == 'T') ADVANCE(203);
      if (lookahead == 't') ADVANCE(513);
      if (lookahead == 'v') ADVANCE(106);
      END_STATE();
    case 22:
      if (lookahead == 'P') ADVANCE(207);
      END_STATE();
    case 23:
      if (lookahead == 'R') ADVANCE(108);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(109);
      END_STATE();
    case 25:
      if (lookahead == 'T') ADVANCE(174);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(203);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(148);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(249);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(542);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(546);
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(550);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(551);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(248);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(537);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(492);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(574);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(549);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(578);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(571);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(576);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(580);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(493);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(495);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(491);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(258);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(596);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(527);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(561);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(567);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(586);
      if (lookahead == 'v') ADVANCE(99);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(534);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(521);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(523);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(511);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(216);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(262);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(264);
      END_STATE();
    case 133:
      if (lookahead == 'j') ADVANCE(102);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(537);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(604);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(565);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(587);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(517);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(552);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(515);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(537);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'x') ADVANCE(243);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(21);
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(559);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(519);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(543);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'x') ADVANCE(243);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(582);
      if (lookahead == 'r') ADVANCE(252);
      if (lookahead == 'y') ADVANCE(189);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(532);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(537);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(557);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(525);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(505);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(501);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(499);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(537);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(508);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(555);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 250:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 251:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 252:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 253:
      if (lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 254:
      if (lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 255:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 256:
      if (lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 257:
      if (lookahead == 'u') ADVANCE(213);
      END_STATE();
    case 258:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 259:
      if (lookahead == 'u') ADVANCE(241);
      END_STATE();
    case 260:
      if (lookahead == 'v') ADVANCE(99);
      END_STATE();
    case 261:
      if (lookahead == 'v') ADVANCE(43);
      END_STATE();
    case 262:
      if (lookahead == 'v') ADVANCE(86);
      END_STATE();
    case 263:
      if (lookahead == 'v') ADVANCE(76);
      END_STATE();
    case 264:
      if (lookahead == 'v') ADVANCE(110);
      END_STATE();
    case 265:
      if (lookahead == 'w') ADVANCE(172);
      END_STATE();
    case 266:
      if (lookahead == 'w') ADVANCE(40);
      END_STATE();
    case 267:
      if (lookahead == 'y') ADVANCE(584);
      END_STATE();
    case 268:
      if (lookahead == 'y') ADVANCE(530);
      END_STATE();
    case 269:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      END_STATE();
    case 270:
      if (eof) ADVANCE(288);
      if (lookahead == '\'') ADVANCE(553);
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == ')') ADVANCE(504);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == ',') ADVANCE(507);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(554);
      if (lookahead == ':') ADVANCE(529);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '=') ADVANCE(510);
      if (lookahead == 'A' ||
          lookahead == 'I' ||
          lookahead == 'O' ||
          lookahead == 'P') ADVANCE(537);
      if (lookahead == 'D') ADVANCE(77);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'T') ADVANCE(539);
      if (lookahead == 'V') ADVANCE(538);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(192);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == 'u') ADVANCE(221);
      if (lookahead == 'v') ADVANCE(31);
      if (lookahead == '{') ADVANCE(592);
      if (lookahead == '}') ADVANCE(593);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(270)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      END_STATE();
    case 271:
      if (eof) ADVANCE(288);
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == ')') ADVANCE(504);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == ',') ADVANCE(507);
      if (lookahead == ':') ADVANCE(529);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead == 'f') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == 'm') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(424);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(271)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(487);
      END_STATE();
    case 272:
      if (eof) ADVANCE(288);
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == ',') ADVANCE(507);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == 'm') ADVANCE(346);
      if (lookahead == 'p') ADVANCE(430);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(272)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(487);
      END_STATE();
    case 273:
      if (eof) ADVANCE(288);
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == ',') ADVANCE(507);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == 'm') ADVANCE(346);
      if (lookahead == 'p') ADVANCE(430);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(273)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(487);
      END_STATE();
    case 274:
      if (eof) ADVANCE(288);
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead == 'f') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == 'm') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(424);
      if (lookahead == 't') ADVANCE(409);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(274)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(487);
      END_STATE();
    case 275:
      if (eof) ADVANCE(288);
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == 'f') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == 'm') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(424);
      if (lookahead == 't') ADVANCE(409);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(275)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(487);
      END_STATE();
    case 276:
      if (eof) ADVANCE(288);
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == 'f') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == 'm') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(424);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(276)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(487);
      END_STATE();
    case 277:
      if (eof) ADVANCE(288);
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == 'm') ADVANCE(346);
      if (lookahead == 'p') ADVANCE(430);
      if (lookahead == 't') ADVANCE(409);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(277)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(487);
      END_STATE();
    case 278:
      if (eof) ADVANCE(288);
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == '+') ADVANCE(573);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == 'm') ADVANCE(346);
      if (lookahead == 'p') ADVANCE(430);
      if (lookahead == 't') ADVANCE(409);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(278)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(487);
      END_STATE();
    case 279:
      if (eof) ADVANCE(288);
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead == 'f') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == 'm') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(424);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(279)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(487);
      END_STATE();
    case 280:
      if (eof) ADVANCE(288);
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == 'f') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == 'm') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(424);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(280)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(487);
      END_STATE();
    case 281:
      if (eof) ADVANCE(288);
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == 'm') ADVANCE(346);
      if (lookahead == 'p') ADVANCE(430);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(281)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(487);
      END_STATE();
    case 282:
      if (eof) ADVANCE(288);
      if (lookahead == '(') ADVANCE(503);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == 'm') ADVANCE(346);
      if (lookahead == 'p') ADVANCE(430);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(282)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(487);
      END_STATE();
    case 283:
      if (eof) ADVANCE(288);
      if (lookahead == ')') ADVANCE(504);
      if (lookahead == ',') ADVANCE(507);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == 'm') ADVANCE(345);
      if (lookahead == 'p') ADVANCE(430);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(283)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(487);
      END_STATE();
    case 284:
      if (eof) ADVANCE(288);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'c') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead == 'f') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == 'm') ADVANCE(345);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(424);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(284)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(487);
      END_STATE();
    case 285:
      if (eof) ADVANCE(288);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == 'f') ADVANCE(375);
      if (lookahead == 'i') ADVANCE(406);
      if (lookahead == 'm') ADVANCE(345);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(424);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(285)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(487);
      END_STATE();
    case 286:
      if (eof) ADVANCE(288);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == '[') ADVANCE(536);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead == 'e') ADVANCE(402);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead == 'm') ADVANCE(345);
      if (lookahead == 'p') ADVANCE(430);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(286)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(487);
      END_STATE();
    case 287:
      if (eof) ADVANCE(288);
      if (lookahead == ';') ADVANCE(488);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(287)
      END_STATE();
    case 288:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(304);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(359);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(473);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(347);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(357);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(408);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(484);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(487);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(378);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(487);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(460);
      if (lookahead == 'u') ADVANCE(389);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(487);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(449);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(487);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(423);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(487);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(393);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(487);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(379);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(487);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(463);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(487);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(387);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(487);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(400);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(487);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(425);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(487);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(450);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(487);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(388);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(487);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(469);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(487);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(452);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(541);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(545);
      if (lookahead == 't') ADVANCE(350);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(545);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(367);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(414);
      if (lookahead == 'f') ADVANCE(294);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(414);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(416);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(465);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(419);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(420);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(575);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(577);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(494);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(490);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(572);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(496);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(579);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(581);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(472);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(477);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(340);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(313);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(314);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(292);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(548);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(528);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(498);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(562);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(570);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(564);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(568);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(599);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(597);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(603);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(601);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == 'u') ADVANCE(384);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(391);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(316);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(300);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(444);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(317);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(466);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(324);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(441);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(443);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(315);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(318);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(319);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(293);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(535);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(522);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(524);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(512);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(299);
      if (lookahead == 's') ADVANCE(467);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(447);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(479);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(289);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(390);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(480);
      if (lookahead == 'o') ADVANCE(311);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(480);
      if (lookahead == 'o') ADVANCE(468);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(392);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(399);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(415);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(330);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(380);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(403);
      if (lookahead == 'u') ADVANCE(397);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(403);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(483);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(518);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(566);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(605);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(348);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(478);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 'o') ADVANCE(405);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(462);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(336);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(306);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(454);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(455);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(516);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(296);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(418);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(360);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(520);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(544);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(560);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(456);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(310);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(291);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(361);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(362);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(322);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(323);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(301);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(325);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(448);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(482);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(381);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(533);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(583);
      if (lookahead == 'y') ADVANCE(422);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(583);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(407);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(312);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(382);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(427);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(394);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(432);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(405);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(431);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(438);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(439);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(329);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(335);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(526);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(368);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(558);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(295);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(320);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(369);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(426);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(412);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(486);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(321);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(370);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(334);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(475);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(371);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(373);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(326);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(327);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(395);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(453);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(476);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(437);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(506);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(502);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(500);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(457);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(458);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(445);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(446);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(349);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(413);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(337);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(343);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(344);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(514);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(290);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(509);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(556);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(365);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(433);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(366);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(338);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(339);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(352);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(474);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(436);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(350);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(377);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(397);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(384);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(434);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(459);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(440);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(341);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(342);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(385);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(464);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(333);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(302);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(354);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(353);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(358);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(585);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(422);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(531);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(488);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'C') ADVANCE(386);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'C') ADVANCE(147);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'C') ADVANCE(147);
      if (lookahead == 'F') ADVANCE(254);
      if (lookahead == 'M') ADVANCE(177);
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == 'P') ADVANCE(205);
      if (lookahead == 'R') ADVANCE(95);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'F') ADVANCE(254);
      if (lookahead == 'P') ADVANCE(205);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'M') ADVANCE(421);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == 'R') ADVANCE(95);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'N') ADVANCE(308);
      if (lookahead == 'R') ADVANCE(356);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_endModule);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_endModule);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_endClass);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_endClass);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_class);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_uses);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_const);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_multiLang);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_multiLang);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_int);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_num);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_num);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_Decimal);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_Decimal);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_string);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_cstring);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_cstring);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_char);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_type);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_memory);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_memory);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_refTo);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_refTo);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_listOf);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_listOf);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_reference_modifiers_token1);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_reference_modifiers_token1);
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_reference_modifiers_token1);
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_func);
      if (lookahead == 't') ADVANCE(372);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_func);
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_function);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == 'e') ADVANCE(328);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_procedure);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_procedure);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_forward);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_endFunc);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_endProc);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_inOut);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_inOut);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_inverse);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_inverse);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_absolute);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_absolute);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_final);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_override);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_private);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_protected);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_record);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_nativeRecord);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_nativeRecord);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_endRecord);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_endRecord);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_endNativeRecord);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_endNativeRecord);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_to);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_array);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == ' ') ADVANCE(590);
      if (lookahead == ';') ADVANCE(488);
      if (('!' <= lookahead && lookahead <= '~') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(589);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__integer_literal);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'L') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(595);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_True);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_False);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_nil_literal);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_nil_literal);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(487);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
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
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 272},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 272},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 272},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 272},
  [49] = {.lex_state = 272},
  [50] = {.lex_state = 273},
  [51] = {.lex_state = 273},
  [52] = {.lex_state = 273},
  [53] = {.lex_state = 273},
  [54] = {.lex_state = 273},
  [55] = {.lex_state = 273},
  [56] = {.lex_state = 273},
  [57] = {.lex_state = 273},
  [58] = {.lex_state = 273},
  [59] = {.lex_state = 273},
  [60] = {.lex_state = 273},
  [61] = {.lex_state = 273},
  [62] = {.lex_state = 273},
  [63] = {.lex_state = 273},
  [64] = {.lex_state = 273},
  [65] = {.lex_state = 273},
  [66] = {.lex_state = 273},
  [67] = {.lex_state = 273},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
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
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 271},
  [93] = {.lex_state = 271},
  [94] = {.lex_state = 271},
  [95] = {.lex_state = 271},
  [96] = {.lex_state = 276},
  [97] = {.lex_state = 276},
  [98] = {.lex_state = 271},
  [99] = {.lex_state = 276},
  [100] = {.lex_state = 279},
  [101] = {.lex_state = 276},
  [102] = {.lex_state = 276},
  [103] = {.lex_state = 276},
  [104] = {.lex_state = 276},
  [105] = {.lex_state = 276},
  [106] = {.lex_state = 271},
  [107] = {.lex_state = 276},
  [108] = {.lex_state = 276},
  [109] = {.lex_state = 274},
  [110] = {.lex_state = 271},
  [111] = {.lex_state = 280},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 279},
  [114] = {.lex_state = 275},
  [115] = {.lex_state = 284},
  [116] = {.lex_state = 280},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 284},
  [119] = {.lex_state = 271},
  [120] = {.lex_state = 276},
  [121] = {.lex_state = 284},
  [122] = {.lex_state = 279},
  [123] = {.lex_state = 276},
  [124] = {.lex_state = 279},
  [125] = {.lex_state = 285},
  [126] = {.lex_state = 284},
  [127] = {.lex_state = 279},
  [128] = {.lex_state = 284},
  [129] = {.lex_state = 276},
  [130] = {.lex_state = 271},
  [131] = {.lex_state = 275},
  [132] = {.lex_state = 280},
  [133] = {.lex_state = 285},
  [134] = {.lex_state = 271},
  [135] = {.lex_state = 271},
  [136] = {.lex_state = 271},
  [137] = {.lex_state = 285},
  [138] = {.lex_state = 271},
  [139] = {.lex_state = 285},
  [140] = {.lex_state = 271},
  [141] = {.lex_state = 271},
  [142] = {.lex_state = 271},
  [143] = {.lex_state = 271},
  [144] = {.lex_state = 280},
  [145] = {.lex_state = 271},
  [146] = {.lex_state = 285},
  [147] = {.lex_state = 271},
  [148] = {.lex_state = 271},
  [149] = {.lex_state = 271},
  [150] = {.lex_state = 271},
  [151] = {.lex_state = 271},
  [152] = {.lex_state = 280},
  [153] = {.lex_state = 271},
  [154] = {.lex_state = 271},
  [155] = {.lex_state = 271},
  [156] = {.lex_state = 271},
  [157] = {.lex_state = 271},
  [158] = {.lex_state = 271},
  [159] = {.lex_state = 271},
  [160] = {.lex_state = 271},
  [161] = {.lex_state = 271},
  [162] = {.lex_state = 271},
  [163] = {.lex_state = 271},
  [164] = {.lex_state = 276},
  [165] = {.lex_state = 271},
  [166] = {.lex_state = 271},
  [167] = {.lex_state = 285},
  [168] = {.lex_state = 280},
  [169] = {.lex_state = 285},
  [170] = {.lex_state = 280},
  [171] = {.lex_state = 271},
  [172] = {.lex_state = 271},
  [173] = {.lex_state = 271},
  [174] = {.lex_state = 276},
  [175] = {.lex_state = 276},
  [176] = {.lex_state = 285},
  [177] = {.lex_state = 276},
  [178] = {.lex_state = 276},
  [179] = {.lex_state = 276},
  [180] = {.lex_state = 276},
  [181] = {.lex_state = 276},
  [182] = {.lex_state = 276},
  [183] = {.lex_state = 276},
  [184] = {.lex_state = 285},
  [185] = {.lex_state = 276},
  [186] = {.lex_state = 276},
  [187] = {.lex_state = 276},
  [188] = {.lex_state = 276},
  [189] = {.lex_state = 280},
  [190] = {.lex_state = 276},
  [191] = {.lex_state = 276},
  [192] = {.lex_state = 280},
  [193] = {.lex_state = 280},
  [194] = {.lex_state = 276},
  [195] = {.lex_state = 285},
  [196] = {.lex_state = 276},
  [197] = {.lex_state = 276},
  [198] = {.lex_state = 276},
  [199] = {.lex_state = 276},
  [200] = {.lex_state = 276},
  [201] = {.lex_state = 276},
  [202] = {.lex_state = 276},
  [203] = {.lex_state = 276},
  [204] = {.lex_state = 276},
  [205] = {.lex_state = 276},
  [206] = {.lex_state = 276},
  [207] = {.lex_state = 276},
  [208] = {.lex_state = 276},
  [209] = {.lex_state = 276},
  [210] = {.lex_state = 276},
  [211] = {.lex_state = 276},
  [212] = {.lex_state = 276},
  [213] = {.lex_state = 276},
  [214] = {.lex_state = 276},
  [215] = {.lex_state = 276},
  [216] = {.lex_state = 276},
  [217] = {.lex_state = 276},
  [218] = {.lex_state = 276},
  [219] = {.lex_state = 276},
  [220] = {.lex_state = 276},
  [221] = {.lex_state = 276},
  [222] = {.lex_state = 7},
  [223] = {.lex_state = 276},
  [224] = {.lex_state = 276},
  [225] = {.lex_state = 276},
  [226] = {.lex_state = 281},
  [227] = {.lex_state = 276},
  [228] = {.lex_state = 276},
  [229] = {.lex_state = 276},
  [230] = {.lex_state = 276},
  [231] = {.lex_state = 276},
  [232] = {.lex_state = 276},
  [233] = {.lex_state = 276},
  [234] = {.lex_state = 276},
  [235] = {.lex_state = 276},
  [236] = {.lex_state = 276},
  [237] = {.lex_state = 276},
  [238] = {.lex_state = 276},
  [239] = {.lex_state = 276},
  [240] = {.lex_state = 276},
  [241] = {.lex_state = 276},
  [242] = {.lex_state = 276},
  [243] = {.lex_state = 276},
  [244] = {.lex_state = 276},
  [245] = {.lex_state = 276},
  [246] = {.lex_state = 10},
  [247] = {.lex_state = 283},
  [248] = {.lex_state = 283},
  [249] = {.lex_state = 10},
  [250] = {.lex_state = 272},
  [251] = {.lex_state = 283},
  [252] = {.lex_state = 283},
  [253] = {.lex_state = 282},
  [254] = {.lex_state = 277},
  [255] = {.lex_state = 283},
  [256] = {.lex_state = 3},
  [257] = {.lex_state = 272},
  [258] = {.lex_state = 283},
  [259] = {.lex_state = 283},
  [260] = {.lex_state = 281},
  [261] = {.lex_state = 272},
  [262] = {.lex_state = 3},
  [263] = {.lex_state = 272},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 283},
  [266] = {.lex_state = 273},
  [267] = {.lex_state = 10},
  [268] = {.lex_state = 282},
  [269] = {.lex_state = 278},
  [270] = {.lex_state = 283},
  [271] = {.lex_state = 272},
  [272] = {.lex_state = 273},
  [273] = {.lex_state = 283},
  [274] = {.lex_state = 272},
  [275] = {.lex_state = 281},
  [276] = {.lex_state = 283},
  [277] = {.lex_state = 286},
  [278] = {.lex_state = 273},
  [279] = {.lex_state = 283},
  [280] = {.lex_state = 286},
  [281] = {.lex_state = 286},
  [282] = {.lex_state = 273},
  [283] = {.lex_state = 283},
  [284] = {.lex_state = 282},
  [285] = {.lex_state = 278},
  [286] = {.lex_state = 283},
  [287] = {.lex_state = 283},
  [288] = {.lex_state = 283},
  [289] = {.lex_state = 273},
  [290] = {.lex_state = 273},
  [291] = {.lex_state = 286},
  [292] = {.lex_state = 11},
  [293] = {.lex_state = 281},
  [294] = {.lex_state = 281},
  [295] = {.lex_state = 3},
  [296] = {.lex_state = 272},
  [297] = {.lex_state = 3},
  [298] = {.lex_state = 272},
  [299] = {.lex_state = 272},
  [300] = {.lex_state = 3},
  [301] = {.lex_state = 272},
  [302] = {.lex_state = 272},
  [303] = {.lex_state = 272},
  [304] = {.lex_state = 272},
  [305] = {.lex_state = 272},
  [306] = {.lex_state = 272},
  [307] = {.lex_state = 272},
  [308] = {.lex_state = 272},
  [309] = {.lex_state = 10},
  [310] = {.lex_state = 272},
  [311] = {.lex_state = 272},
  [312] = {.lex_state = 286},
  [313] = {.lex_state = 3},
  [314] = {.lex_state = 272},
  [315] = {.lex_state = 272},
  [316] = {.lex_state = 286},
  [317] = {.lex_state = 272},
  [318] = {.lex_state = 272},
  [319] = {.lex_state = 272},
  [320] = {.lex_state = 282},
  [321] = {.lex_state = 272},
  [322] = {.lex_state = 286},
  [323] = {.lex_state = 272},
  [324] = {.lex_state = 272},
  [325] = {.lex_state = 282},
  [326] = {.lex_state = 272},
  [327] = {.lex_state = 286},
  [328] = {.lex_state = 272},
  [329] = {.lex_state = 272},
  [330] = {.lex_state = 3},
  [331] = {.lex_state = 272},
  [332] = {.lex_state = 272},
  [333] = {.lex_state = 272},
  [334] = {.lex_state = 272},
  [335] = {.lex_state = 286},
  [336] = {.lex_state = 286},
  [337] = {.lex_state = 273},
  [338] = {.lex_state = 272},
  [339] = {.lex_state = 3},
  [340] = {.lex_state = 272},
  [341] = {.lex_state = 272},
  [342] = {.lex_state = 272},
  [343] = {.lex_state = 282},
  [344] = {.lex_state = 272},
  [345] = {.lex_state = 3},
  [346] = {.lex_state = 286},
  [347] = {.lex_state = 272},
  [348] = {.lex_state = 272},
  [349] = {.lex_state = 272},
  [350] = {.lex_state = 272},
  [351] = {.lex_state = 272},
  [352] = {.lex_state = 272},
  [353] = {.lex_state = 273},
  [354] = {.lex_state = 286},
  [355] = {.lex_state = 272},
  [356] = {.lex_state = 272},
  [357] = {.lex_state = 272},
  [358] = {.lex_state = 286},
  [359] = {.lex_state = 272},
  [360] = {.lex_state = 273},
  [361] = {.lex_state = 286},
  [362] = {.lex_state = 286},
  [363] = {.lex_state = 286},
  [364] = {.lex_state = 272},
  [365] = {.lex_state = 272},
  [366] = {.lex_state = 273},
  [367] = {.lex_state = 286},
  [368] = {.lex_state = 3},
  [369] = {.lex_state = 282},
  [370] = {.lex_state = 286},
  [371] = {.lex_state = 286},
  [372] = {.lex_state = 272},
  [373] = {.lex_state = 272},
  [374] = {.lex_state = 272},
  [375] = {.lex_state = 3},
  [376] = {.lex_state = 272},
  [377] = {.lex_state = 272},
  [378] = {.lex_state = 272},
  [379] = {.lex_state = 272},
  [380] = {.lex_state = 272},
  [381] = {.lex_state = 272},
  [382] = {.lex_state = 9},
  [383] = {.lex_state = 272},
  [384] = {.lex_state = 273},
  [385] = {.lex_state = 272},
  [386] = {.lex_state = 272},
  [387] = {.lex_state = 272},
  [388] = {.lex_state = 272},
  [389] = {.lex_state = 272},
  [390] = {.lex_state = 286},
  [391] = {.lex_state = 273},
  [392] = {.lex_state = 286},
  [393] = {.lex_state = 273},
  [394] = {.lex_state = 273},
  [395] = {.lex_state = 273},
  [396] = {.lex_state = 273},
  [397] = {.lex_state = 273},
  [398] = {.lex_state = 273},
  [399] = {.lex_state = 273},
  [400] = {.lex_state = 273},
  [401] = {.lex_state = 273},
  [402] = {.lex_state = 273},
  [403] = {.lex_state = 273},
  [404] = {.lex_state = 286},
  [405] = {.lex_state = 273},
  [406] = {.lex_state = 286},
  [407] = {.lex_state = 14},
  [408] = {.lex_state = 273},
  [409] = {.lex_state = 273},
  [410] = {.lex_state = 273},
  [411] = {.lex_state = 273},
  [412] = {.lex_state = 273},
  [413] = {.lex_state = 273},
  [414] = {.lex_state = 273},
  [415] = {.lex_state = 273},
  [416] = {.lex_state = 273},
  [417] = {.lex_state = 273},
  [418] = {.lex_state = 273},
  [419] = {.lex_state = 273},
  [420] = {.lex_state = 273},
  [421] = {.lex_state = 273},
  [422] = {.lex_state = 273},
  [423] = {.lex_state = 14},
  [424] = {.lex_state = 286},
  [425] = {.lex_state = 282},
  [426] = {.lex_state = 273},
  [427] = {.lex_state = 286},
  [428] = {.lex_state = 286},
  [429] = {.lex_state = 273},
  [430] = {.lex_state = 273},
  [431] = {.lex_state = 273},
  [432] = {.lex_state = 11},
  [433] = {.lex_state = 273},
  [434] = {.lex_state = 273},
  [435] = {.lex_state = 286},
  [436] = {.lex_state = 3},
  [437] = {.lex_state = 273},
  [438] = {.lex_state = 273},
  [439] = {.lex_state = 273},
  [440] = {.lex_state = 273},
  [441] = {.lex_state = 273},
  [442] = {.lex_state = 273},
  [443] = {.lex_state = 273},
  [444] = {.lex_state = 273},
  [445] = {.lex_state = 286},
  [446] = {.lex_state = 10},
  [447] = {.lex_state = 273},
  [448] = {.lex_state = 273},
  [449] = {.lex_state = 282},
  [450] = {.lex_state = 273},
  [451] = {.lex_state = 273},
  [452] = {.lex_state = 273},
  [453] = {.lex_state = 286},
  [454] = {.lex_state = 273},
  [455] = {.lex_state = 273},
  [456] = {.lex_state = 282},
  [457] = {.lex_state = 273},
  [458] = {.lex_state = 273},
  [459] = {.lex_state = 273},
  [460] = {.lex_state = 3},
  [461] = {.lex_state = 286},
  [462] = {.lex_state = 286},
  [463] = {.lex_state = 273},
  [464] = {.lex_state = 273},
  [465] = {.lex_state = 273},
  [466] = {.lex_state = 273},
  [467] = {.lex_state = 273},
  [468] = {.lex_state = 273},
  [469] = {.lex_state = 3},
  [470] = {.lex_state = 273},
  [471] = {.lex_state = 286},
  [472] = {.lex_state = 273},
  [473] = {.lex_state = 273},
  [474] = {.lex_state = 273},
  [475] = {.lex_state = 273},
  [476] = {.lex_state = 11},
  [477] = {.lex_state = 273},
  [478] = {.lex_state = 11},
  [479] = {.lex_state = 273},
  [480] = {.lex_state = 273},
  [481] = {.lex_state = 273},
  [482] = {.lex_state = 273},
  [483] = {.lex_state = 11},
  [484] = {.lex_state = 273},
  [485] = {.lex_state = 273},
  [486] = {.lex_state = 273},
  [487] = {.lex_state = 273},
  [488] = {.lex_state = 14},
  [489] = {.lex_state = 273},
  [490] = {.lex_state = 273},
  [491] = {.lex_state = 273},
  [492] = {.lex_state = 273},
  [493] = {.lex_state = 273},
  [494] = {.lex_state = 273},
  [495] = {.lex_state = 273},
  [496] = {.lex_state = 273},
  [497] = {.lex_state = 14},
  [498] = {.lex_state = 273},
  [499] = {.lex_state = 273},
  [500] = {.lex_state = 273},
  [501] = {.lex_state = 3},
  [502] = {.lex_state = 273},
  [503] = {.lex_state = 273},
  [504] = {.lex_state = 273},
  [505] = {.lex_state = 273},
  [506] = {.lex_state = 3},
  [507] = {.lex_state = 273},
  [508] = {.lex_state = 273},
  [509] = {.lex_state = 273},
  [510] = {.lex_state = 273},
  [511] = {.lex_state = 273},
  [512] = {.lex_state = 273},
  [513] = {.lex_state = 273},
  [514] = {.lex_state = 273},
  [515] = {.lex_state = 273},
  [516] = {.lex_state = 273},
  [517] = {.lex_state = 273},
  [518] = {.lex_state = 273},
  [519] = {.lex_state = 273},
  [520] = {.lex_state = 273},
  [521] = {.lex_state = 273},
  [522] = {.lex_state = 273},
  [523] = {.lex_state = 273},
  [524] = {.lex_state = 273},
  [525] = {.lex_state = 273},
  [526] = {.lex_state = 273},
  [527] = {.lex_state = 273},
  [528] = {.lex_state = 273},
  [529] = {.lex_state = 273},
  [530] = {.lex_state = 273},
  [531] = {.lex_state = 273},
  [532] = {.lex_state = 14},
  [533] = {.lex_state = 273},
  [534] = {.lex_state = 273},
  [535] = {.lex_state = 273},
  [536] = {.lex_state = 273},
  [537] = {.lex_state = 273},
  [538] = {.lex_state = 10},
  [539] = {.lex_state = 10},
  [540] = {.lex_state = 10},
  [541] = {.lex_state = 3},
  [542] = {.lex_state = 10},
  [543] = {.lex_state = 10},
  [544] = {.lex_state = 10},
  [545] = {.lex_state = 12},
  [546] = {.lex_state = 10},
  [547] = {.lex_state = 12},
  [548] = {.lex_state = 3},
  [549] = {.lex_state = 10},
  [550] = {.lex_state = 10},
  [551] = {.lex_state = 10},
  [552] = {.lex_state = 10},
  [553] = {.lex_state = 3},
  [554] = {.lex_state = 12},
  [555] = {.lex_state = 10},
  [556] = {.lex_state = 10},
  [557] = {.lex_state = 10},
  [558] = {.lex_state = 10},
  [559] = {.lex_state = 3},
  [560] = {.lex_state = 10},
  [561] = {.lex_state = 10},
  [562] = {.lex_state = 10},
  [563] = {.lex_state = 12},
  [564] = {.lex_state = 10},
  [565] = {.lex_state = 12},
  [566] = {.lex_state = 12},
  [567] = {.lex_state = 10},
  [568] = {.lex_state = 12},
  [569] = {.lex_state = 10},
  [570] = {.lex_state = 10},
  [571] = {.lex_state = 10},
  [572] = {.lex_state = 10},
  [573] = {.lex_state = 10},
  [574] = {.lex_state = 12},
  [575] = {.lex_state = 10},
  [576] = {.lex_state = 10},
  [577] = {.lex_state = 10},
  [578] = {.lex_state = 10},
  [579] = {.lex_state = 10},
  [580] = {.lex_state = 8},
  [581] = {.lex_state = 8},
  [582] = {.lex_state = 8},
  [583] = {.lex_state = 8},
  [584] = {.lex_state = 8},
  [585] = {.lex_state = 15},
  [586] = {.lex_state = 3},
  [587] = {.lex_state = 8},
  [588] = {.lex_state = 8},
  [589] = {.lex_state = 8},
  [590] = {.lex_state = 3},
  [591] = {.lex_state = 15},
  [592] = {.lex_state = 12},
  [593] = {.lex_state = 12},
  [594] = {.lex_state = 3},
  [595] = {.lex_state = 12},
  [596] = {.lex_state = 16},
  [597] = {.lex_state = 12},
  [598] = {.lex_state = 16},
  [599] = {.lex_state = 12},
  [600] = {.lex_state = 12},
  [601] = {.lex_state = 3},
  [602] = {.lex_state = 3},
  [603] = {.lex_state = 12},
  [604] = {.lex_state = 15},
  [605] = {.lex_state = 3},
  [606] = {.lex_state = 3},
  [607] = {.lex_state = 3},
  [608] = {.lex_state = 12},
  [609] = {.lex_state = 16},
  [610] = {.lex_state = 3},
  [611] = {.lex_state = 12},
  [612] = {.lex_state = 3},
  [613] = {.lex_state = 3},
  [614] = {.lex_state = 12},
  [615] = {.lex_state = 16},
  [616] = {.lex_state = 3},
  [617] = {.lex_state = 8},
  [618] = {.lex_state = 3},
  [619] = {.lex_state = 3},
  [620] = {.lex_state = 3},
  [621] = {.lex_state = 3},
  [622] = {.lex_state = 3},
  [623] = {.lex_state = 3},
  [624] = {.lex_state = 3},
  [625] = {.lex_state = 3},
  [626] = {.lex_state = 3},
  [627] = {.lex_state = 3},
  [628] = {.lex_state = 3},
  [629] = {.lex_state = 3},
  [630] = {.lex_state = 13},
  [631] = {.lex_state = 3},
  [632] = {.lex_state = 13},
  [633] = {.lex_state = 8},
  [634] = {.lex_state = 13},
  [635] = {.lex_state = 3},
  [636] = {.lex_state = 13},
  [637] = {.lex_state = 13},
  [638] = {.lex_state = 3},
  [639] = {.lex_state = 3},
  [640] = {.lex_state = 8},
  [641] = {.lex_state = 13},
  [642] = {.lex_state = 3},
  [643] = {.lex_state = 13},
  [644] = {.lex_state = 13},
  [645] = {.lex_state = 8},
  [646] = {.lex_state = 3},
  [647] = {.lex_state = 3},
  [648] = {.lex_state = 3},
  [649] = {.lex_state = 13},
  [650] = {.lex_state = 13},
  [651] = {.lex_state = 13},
  [652] = {.lex_state = 3},
  [653] = {.lex_state = 3},
  [654] = {.lex_state = 3},
  [655] = {.lex_state = 8},
  [656] = {.lex_state = 13},
  [657] = {.lex_state = 3},
  [658] = {.lex_state = 3},
  [659] = {.lex_state = 13},
  [660] = {.lex_state = 3},
  [661] = {.lex_state = 3},
  [662] = {.lex_state = 8},
  [663] = {.lex_state = 8},
  [664] = {.lex_state = 3},
  [665] = {.lex_state = 13},
  [666] = {.lex_state = 3},
  [667] = {.lex_state = 3},
  [668] = {.lex_state = 13},
  [669] = {.lex_state = 8},
  [670] = {.lex_state = 3},
  [671] = {.lex_state = 8},
  [672] = {.lex_state = 13},
  [673] = {.lex_state = 3},
  [674] = {.lex_state = 3},
  [675] = {.lex_state = 13},
  [676] = {.lex_state = 13},
  [677] = {.lex_state = 13},
  [678] = {.lex_state = 13},
  [679] = {.lex_state = 13},
  [680] = {.lex_state = 13},
  [681] = {.lex_state = 13},
  [682] = {.lex_state = 13},
  [683] = {.lex_state = 13},
  [684] = {.lex_state = 8},
  [685] = {.lex_state = 8},
  [686] = {.lex_state = 8},
  [687] = {.lex_state = 8},
  [688] = {.lex_state = 8},
  [689] = {.lex_state = 8},
  [690] = {.lex_state = 8},
  [691] = {.lex_state = 12},
  [692] = {.lex_state = 12},
  [693] = {.lex_state = 8},
  [694] = {.lex_state = 8},
  [695] = {.lex_state = 12},
  [696] = {.lex_state = 8},
  [697] = {.lex_state = 8},
  [698] = {.lex_state = 8},
  [699] = {.lex_state = 8},
  [700] = {.lex_state = 8},
  [701] = {.lex_state = 8},
  [702] = {.lex_state = 8},
  [703] = {.lex_state = 8},
  [704] = {.lex_state = 8},
  [705] = {.lex_state = 8},
  [706] = {.lex_state = 8},
  [707] = {.lex_state = 8},
  [708] = {.lex_state = 8},
  [709] = {.lex_state = 8},
  [710] = {.lex_state = 8},
  [711] = {.lex_state = 0},
  [712] = {.lex_state = 8},
  [713] = {.lex_state = 8},
  [714] = {.lex_state = 0},
  [715] = {.lex_state = 8},
  [716] = {.lex_state = 8},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 17},
  [719] = {.lex_state = 287},
  [720] = {.lex_state = 1},
  [721] = {.lex_state = 1},
  [722] = {.lex_state = 1},
  [723] = {.lex_state = 1},
  [724] = {.lex_state = 1},
  [725] = {.lex_state = 1},
  [726] = {.lex_state = 0},
  [727] = {.lex_state = 17},
  [728] = {.lex_state = 0},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 17},
  [731] = {.lex_state = 1},
  [732] = {.lex_state = 0},
  [733] = {.lex_state = 6},
  [734] = {.lex_state = 0},
  [735] = {.lex_state = 1},
  [736] = {.lex_state = 6},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 17},
  [739] = {.lex_state = 0},
  [740] = {.lex_state = 0},
  [741] = {.lex_state = 17},
  [742] = {.lex_state = 1},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 0},
  [745] = {.lex_state = 6},
  [746] = {.lex_state = 1},
  [747] = {.lex_state = 6},
  [748] = {.lex_state = 0},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 0},
  [752] = {.lex_state = 17},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 0},
  [755] = {.lex_state = 4},
  [756] = {.lex_state = 17},
  [757] = {.lex_state = 1},
  [758] = {.lex_state = 0},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 1},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 1},
  [763] = {.lex_state = 0},
  [764] = {.lex_state = 17},
  [765] = {.lex_state = 17},
  [766] = {.lex_state = 1},
  [767] = {.lex_state = 6},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 0},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 1},
  [772] = {.lex_state = 0},
  [773] = {.lex_state = 8},
  [774] = {.lex_state = 0},
  [775] = {.lex_state = 4},
  [776] = {.lex_state = 1},
  [777] = {.lex_state = 3},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 17},
  [780] = {.lex_state = 0},
  [781] = {.lex_state = 0},
  [782] = {.lex_state = 0},
  [783] = {.lex_state = 17},
  [784] = {.lex_state = 1},
  [785] = {.lex_state = 1},
  [786] = {.lex_state = 0},
  [787] = {.lex_state = 4},
  [788] = {.lex_state = 8},
  [789] = {.lex_state = 1},
  [790] = {.lex_state = 6},
  [791] = {.lex_state = 0},
  [792] = {.lex_state = 0},
  [793] = {.lex_state = 3},
  [794] = {.lex_state = 6},
  [795] = {.lex_state = 0},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 17},
  [798] = {.lex_state = 0},
  [799] = {.lex_state = 0},
  [800] = {.lex_state = 1},
  [801] = {.lex_state = 0},
  [802] = {.lex_state = 17},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 0},
  [805] = {.lex_state = 17},
  [806] = {.lex_state = 0},
  [807] = {.lex_state = 1},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 3},
  [811] = {.lex_state = 17},
  [812] = {.lex_state = 0},
  [813] = {.lex_state = 1},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 1},
  [816] = {.lex_state = 17},
  [817] = {.lex_state = 6},
  [818] = {.lex_state = 0},
  [819] = {.lex_state = 6},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 0},
  [822] = {.lex_state = 8},
  [823] = {.lex_state = 8},
  [824] = {.lex_state = 8},
  [825] = {.lex_state = 8},
  [826] = {.lex_state = 8},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 0},
  [829] = {.lex_state = 8},
  [830] = {.lex_state = 8},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 8},
  [833] = {.lex_state = 8},
  [834] = {.lex_state = 0},
  [835] = {.lex_state = 0},
  [836] = {.lex_state = 0},
  [837] = {.lex_state = 8},
  [838] = {.lex_state = 8},
  [839] = {.lex_state = 8},
  [840] = {.lex_state = 8},
  [841] = {.lex_state = 8},
  [842] = {.lex_state = 8},
  [843] = {.lex_state = 8},
  [844] = {.lex_state = 8},
  [845] = {.lex_state = 6},
  [846] = {.lex_state = 0},
  [847] = {.lex_state = 0},
  [848] = {.lex_state = 6},
  [849] = {.lex_state = 8},
  [850] = {.lex_state = 0},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 6},
  [853] = {.lex_state = 287},
  [854] = {.lex_state = 8},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 8},
  [858] = {.lex_state = 8},
  [859] = {.lex_state = 17},
  [860] = {.lex_state = 8},
  [861] = {.lex_state = 8},
  [862] = {.lex_state = 8},
  [863] = {.lex_state = 8},
  [864] = {.lex_state = 6},
  [865] = {.lex_state = 8},
  [866] = {.lex_state = 0},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 8},
  [870] = {.lex_state = 8},
  [871] = {.lex_state = 8},
  [872] = {.lex_state = 8},
  [873] = {.lex_state = 17},
  [874] = {.lex_state = 6},
  [875] = {.lex_state = 0},
  [876] = {.lex_state = 8},
  [877] = {.lex_state = 0},
  [878] = {.lex_state = 8},
  [879] = {.lex_state = 0},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 8},
  [882] = {.lex_state = 8},
  [883] = {.lex_state = 0},
  [884] = {.lex_state = 8},
  [885] = {.lex_state = 0},
  [886] = {.lex_state = 8},
  [887] = {.lex_state = 8},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 0},
  [890] = {.lex_state = 8},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 8},
  [894] = {.lex_state = 8},
  [895] = {.lex_state = 8},
  [896] = {.lex_state = 0},
  [897] = {.lex_state = 8},
  [898] = {.lex_state = 8},
  [899] = {.lex_state = 8},
  [900] = {.lex_state = 8},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 8},
  [903] = {.lex_state = 0},
  [904] = {.lex_state = 8},
  [905] = {.lex_state = 0},
  [906] = {.lex_state = 8},
  [907] = {.lex_state = 8},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 0},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 4},
  [912] = {.lex_state = 8},
  [913] = {.lex_state = 8},
  [914] = {.lex_state = 8},
  [915] = {.lex_state = 0},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 0},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 0},
  [920] = {.lex_state = 4},
  [921] = {.lex_state = 0},
  [922] = {.lex_state = 8},
  [923] = {.lex_state = 8},
  [924] = {.lex_state = 0},
  [925] = {.lex_state = 8},
  [926] = {.lex_state = 8},
  [927] = {.lex_state = 6},
  [928] = {.lex_state = 0},
  [929] = {.lex_state = 6},
  [930] = {.lex_state = 8},
  [931] = {.lex_state = 0},
  [932] = {.lex_state = 0},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 0},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 0},
  [937] = {.lex_state = 0},
  [938] = {.lex_state = 6},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 6},
  [941] = {.lex_state = 0},
  [942] = {.lex_state = 8},
  [943] = {.lex_state = 0},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 8},
  [946] = {.lex_state = 0},
  [947] = {.lex_state = 0},
  [948] = {.lex_state = 0},
  [949] = {.lex_state = 8},
  [950] = {.lex_state = 6},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 4},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 8},
  [956] = {.lex_state = 8},
  [957] = {.lex_state = 6},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 8},
  [960] = {.lex_state = 8},
  [961] = {.lex_state = 0},
  [962] = {.lex_state = 8},
  [963] = {.lex_state = 0},
  [964] = {.lex_state = 8},
  [965] = {.lex_state = 4},
  [966] = {.lex_state = 0},
  [967] = {.lex_state = 8},
  [968] = {.lex_state = 6},
  [969] = {.lex_state = 6},
  [970] = {.lex_state = 8},
  [971] = {.lex_state = 0},
  [972] = {.lex_state = 6},
  [973] = {.lex_state = 8},
  [974] = {.lex_state = 0},
  [975] = {.lex_state = 17},
  [976] = {.lex_state = 0},
  [977] = {.lex_state = 8},
  [978] = {.lex_state = 4},
  [979] = {.lex_state = 0},
  [980] = {.lex_state = 0},
  [981] = {.lex_state = 0},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 0},
  [984] = {.lex_state = 0},
  [985] = {.lex_state = 0},
  [986] = {.lex_state = 4},
  [987] = {.lex_state = 0},
  [988] = {.lex_state = 8},
  [989] = {.lex_state = 0},
  [990] = {.lex_state = 0},
  [991] = {.lex_state = 8},
  [992] = {.lex_state = 8},
  [993] = {.lex_state = 8},
  [994] = {.lex_state = 8},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 0},
  [997] = {.lex_state = 8},
  [998] = {.lex_state = 8},
  [999] = {.lex_state = 6},
  [1000] = {.lex_state = 8},
  [1001] = {.lex_state = 8},
  [1002] = {.lex_state = 8},
  [1003] = {.lex_state = 6},
  [1004] = {.lex_state = 8},
  [1005] = {.lex_state = 0},
  [1006] = {.lex_state = 0},
  [1007] = {.lex_state = 8},
  [1008] = {.lex_state = 6},
  [1009] = {.lex_state = 8},
  [1010] = {.lex_state = 0},
  [1011] = {.lex_state = 0},
  [1012] = {.lex_state = 8},
  [1013] = {.lex_state = 8},
  [1014] = {.lex_state = 0},
  [1015] = {.lex_state = 0},
  [1016] = {.lex_state = 8},
  [1017] = {.lex_state = 8},
  [1018] = {.lex_state = 8},
  [1019] = {.lex_state = 8},
  [1020] = {.lex_state = 8},
  [1021] = {.lex_state = 0},
  [1022] = {.lex_state = 8},
  [1023] = {.lex_state = 0},
  [1024] = {.lex_state = 0},
  [1025] = {.lex_state = 8},
  [1026] = {.lex_state = 6},
  [1027] = {.lex_state = 8},
  [1028] = {.lex_state = 17},
  [1029] = {.lex_state = 0},
  [1030] = {.lex_state = 0},
  [1031] = {.lex_state = 6},
  [1032] = {.lex_state = 4},
  [1033] = {.lex_state = 0},
  [1034] = {.lex_state = 8},
  [1035] = {.lex_state = 0},
  [1036] = {.lex_state = 0},
  [1037] = {.lex_state = 6},
  [1038] = {.lex_state = 8},
  [1039] = {.lex_state = 0},
  [1040] = {.lex_state = 0},
  [1041] = {.lex_state = 0},
  [1042] = {.lex_state = 0},
  [1043] = {.lex_state = 6},
  [1044] = {.lex_state = 0},
  [1045] = {.lex_state = 0},
  [1046] = {.lex_state = 0},
  [1047] = {.lex_state = 8},
  [1048] = {.lex_state = 0},
  [1049] = {.lex_state = 6},
  [1050] = {.lex_state = 8},
  [1051] = {.lex_state = 0},
  [1052] = {.lex_state = 0},
  [1053] = {.lex_state = 0},
  [1054] = {.lex_state = 0},
  [1055] = {.lex_state = 6},
  [1056] = {.lex_state = 0},
  [1057] = {.lex_state = 6},
  [1058] = {.lex_state = 8},
  [1059] = {.lex_state = 0},
  [1060] = {.lex_state = 6},
  [1061] = {.lex_state = 0},
  [1062] = {.lex_state = 8},
  [1063] = {.lex_state = 8},
  [1064] = {.lex_state = 0},
  [1065] = {.lex_state = 8},
  [1066] = {.lex_state = 0},
  [1067] = {.lex_state = 0},
  [1068] = {.lex_state = 8},
  [1069] = {.lex_state = 8},
  [1070] = {.lex_state = 0},
  [1071] = {.lex_state = 0},
  [1072] = {.lex_state = 0},
  [1073] = {.lex_state = 8},
  [1074] = {.lex_state = 0},
  [1075] = {.lex_state = 4},
  [1076] = {.lex_state = 8},
  [1077] = {.lex_state = 0},
  [1078] = {.lex_state = 0},
  [1079] = {.lex_state = 8},
  [1080] = {.lex_state = 0},
  [1081] = {.lex_state = 0},
  [1082] = {.lex_state = 8},
  [1083] = {.lex_state = 8},
  [1084] = {.lex_state = 0},
  [1085] = {.lex_state = 0},
  [1086] = {.lex_state = 8},
  [1087] = {.lex_state = 0},
  [1088] = {.lex_state = 0},
  [1089] = {.lex_state = 8},
  [1090] = {.lex_state = 0},
  [1091] = {.lex_state = 0},
  [1092] = {.lex_state = 0},
  [1093] = {.lex_state = 0},
  [1094] = {.lex_state = 0},
  [1095] = {.lex_state = 0},
  [1096] = {.lex_state = 6},
  [1097] = {.lex_state = 6},
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
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_num] = ACTIONS(1),
    [anon_sym_Decimal] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_cstring] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
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
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
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
    [sym_nil_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(1081),
    [sym_module] = STATE(1080),
    [sym_class] = STATE(1080),
    [sym__class] = STATE(719),
    [sym_annotation] = STATE(828),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_class] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_array,
    ACTIONS(31), 1,
      sym__integer_literal,
    STATE(110), 1,
      sym__type_identifier,
    STATE(118), 1,
      sym_enum_variant_list,
    STATE(130), 1,
      sym__range_type,
    STATE(150), 1,
      sym__array_type,
    STATE(159), 1,
      sym__record_type,
    STATE(160), 1,
      sym__pointer_type,
    STATE(161), 1,
      sym__set_type,
    STATE(163), 1,
      sym__enum_type,
    STATE(165), 1,
      sym__function_type,
    STATE(548), 1,
      sym__string_literal,
    STATE(888), 1,
      sym_enum_derived,
    ACTIONS(17), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(27), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(931), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(21), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(15), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
    STATE(94), 11,
      sym__type,
      sym__type_identifier_or_primitive,
      sym__variable_type,
      sym_reference,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
      sym_range_type,
      sym_array_type,
  [99] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_array,
    STATE(120), 1,
      sym__type_identifier,
    STATE(125), 1,
      sym_enum_variant_list,
    STATE(177), 1,
      sym__function_type,
    STATE(178), 1,
      sym__enum_type,
    STATE(179), 1,
      sym__set_type,
    STATE(180), 1,
      sym__pointer_type,
    STATE(181), 1,
      sym__record_type,
    STATE(182), 1,
      sym__range_type,
    STATE(183), 1,
      sym__array_type,
    STATE(548), 1,
      sym__string_literal,
    STATE(877), 1,
      sym_enum_derived,
    ACTIONS(39), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(47), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(909), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(43), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(37), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
    STATE(99), 11,
      sym__type,
      sym__type_identifier_or_primitive,
      sym__variable_type,
      sym_reference,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
      sym_range_type,
      sym_array_type,
  [198] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_array,
    ACTIONS(31), 1,
      sym__integer_literal,
    STATE(110), 1,
      sym__type_identifier,
    STATE(118), 1,
      sym_enum_variant_list,
    STATE(130), 1,
      sym__range_type,
    STATE(150), 1,
      sym__array_type,
    STATE(159), 1,
      sym__record_type,
    STATE(160), 1,
      sym__pointer_type,
    STATE(161), 1,
      sym__set_type,
    STATE(163), 1,
      sym__enum_type,
    STATE(165), 1,
      sym__function_type,
    STATE(548), 1,
      sym__string_literal,
    STATE(888), 1,
      sym_enum_derived,
    ACTIONS(17), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(27), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(931), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(21), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(15), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
    STATE(92), 11,
      sym__type,
      sym__type_identifier_or_primitive,
      sym__variable_type,
      sym_reference,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
      sym_range_type,
      sym_array_type,
  [297] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DOT,
    ACTIONS(29), 1,
      anon_sym_array,
    ACTIONS(31), 1,
      sym__integer_literal,
    STATE(110), 1,
      sym__type_identifier,
    STATE(118), 1,
      sym_enum_variant_list,
    STATE(130), 1,
      sym__range_type,
    STATE(150), 1,
      sym__array_type,
    STATE(159), 1,
      sym__record_type,
    STATE(160), 1,
      sym__pointer_type,
    STATE(161), 1,
      sym__set_type,
    STATE(163), 1,
      sym__enum_type,
    STATE(165), 1,
      sym__function_type,
    STATE(548), 1,
      sym__string_literal,
    STATE(888), 1,
      sym_enum_derived,
    ACTIONS(17), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(27), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(931), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(21), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(15), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
    STATE(93), 11,
      sym__type,
      sym__type_identifier_or_primitive,
      sym__variable_type,
      sym_reference,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
      sym_range_type,
      sym_array_type,
  [396] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_array,
    STATE(120), 1,
      sym__type_identifier,
    STATE(125), 1,
      sym_enum_variant_list,
    STATE(177), 1,
      sym__function_type,
    STATE(178), 1,
      sym__enum_type,
    STATE(179), 1,
      sym__set_type,
    STATE(180), 1,
      sym__pointer_type,
    STATE(181), 1,
      sym__record_type,
    STATE(182), 1,
      sym__range_type,
    STATE(183), 1,
      sym__array_type,
    STATE(548), 1,
      sym__string_literal,
    STATE(877), 1,
      sym_enum_derived,
    ACTIONS(39), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(47), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(909), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(43), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(37), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
    STATE(96), 11,
      sym__type,
      sym__type_identifier_or_primitive,
      sym__variable_type,
      sym_reference,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
      sym_range_type,
      sym_array_type,
  [495] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_DOT,
    ACTIONS(67), 1,
      anon_sym_array,
    STATE(129), 1,
      sym__type_identifier,
    STATE(167), 1,
      sym_enum_variant_list,
    STATE(212), 1,
      sym__range_type,
    STATE(215), 1,
      sym__pointer_type,
    STATE(217), 1,
      sym__set_type,
    STATE(219), 1,
      sym__enum_type,
    STATE(220), 1,
      sym__function_type,
    STATE(225), 1,
      sym__record_type,
    STATE(237), 1,
      sym__array_type,
    STATE(548), 1,
      sym__string_literal,
    STATE(903), 1,
      sym_enum_derived,
    ACTIONS(57), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(65), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1040), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(61), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(55), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
    STATE(101), 11,
      sym__type,
      sym__type_identifier_or_primitive,
      sym__variable_type,
      sym_reference,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
      sym_range_type,
      sym_array_type,
  [594] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_array,
    STATE(120), 1,
      sym__type_identifier,
    STATE(125), 1,
      sym_enum_variant_list,
    STATE(177), 1,
      sym__function_type,
    STATE(178), 1,
      sym__enum_type,
    STATE(179), 1,
      sym__set_type,
    STATE(180), 1,
      sym__pointer_type,
    STATE(181), 1,
      sym__record_type,
    STATE(182), 1,
      sym__range_type,
    STATE(183), 1,
      sym__array_type,
    STATE(548), 1,
      sym__string_literal,
    STATE(877), 1,
      sym_enum_derived,
    ACTIONS(39), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(47), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(909), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(43), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(37), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
    STATE(97), 11,
      sym__type,
      sym__type_identifier_or_primitive,
      sym__variable_type,
      sym_reference,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
      sym_range_type,
      sym_array_type,
  [693] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_DOT,
    ACTIONS(67), 1,
      anon_sym_array,
    STATE(129), 1,
      sym__type_identifier,
    STATE(167), 1,
      sym_enum_variant_list,
    STATE(212), 1,
      sym__range_type,
    STATE(215), 1,
      sym__pointer_type,
    STATE(217), 1,
      sym__set_type,
    STATE(219), 1,
      sym__enum_type,
    STATE(220), 1,
      sym__function_type,
    STATE(225), 1,
      sym__record_type,
    STATE(237), 1,
      sym__array_type,
    STATE(548), 1,
      sym__string_literal,
    STATE(903), 1,
      sym_enum_derived,
    ACTIONS(57), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(65), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1040), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(61), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(55), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
    STATE(105), 11,
      sym__type,
      sym__type_identifier_or_primitive,
      sym__variable_type,
      sym_reference,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
      sym_range_type,
      sym_array_type,
  [792] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_DOT,
    ACTIONS(67), 1,
      anon_sym_array,
    STATE(129), 1,
      sym__type_identifier,
    STATE(167), 1,
      sym_enum_variant_list,
    STATE(212), 1,
      sym__range_type,
    STATE(215), 1,
      sym__pointer_type,
    STATE(217), 1,
      sym__set_type,
    STATE(219), 1,
      sym__enum_type,
    STATE(220), 1,
      sym__function_type,
    STATE(225), 1,
      sym__record_type,
    STATE(237), 1,
      sym__array_type,
    STATE(548), 1,
      sym__string_literal,
    STATE(903), 1,
      sym_enum_derived,
    ACTIONS(57), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(65), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1040), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(61), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(55), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
    STATE(103), 11,
      sym__type,
      sym__type_identifier_or_primitive,
      sym__variable_type,
      sym_reference,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
      sym_range_type,
      sym_array_type,
  [891] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(83), 1,
      anon_sym_array,
    STATE(309), 1,
      sym__type_identifier,
    STATE(407), 1,
      sym_enum_variant_list,
    STATE(548), 1,
      sym__string_literal,
    STATE(572), 1,
      sym__function_type,
    STATE(573), 1,
      sym__enum_type,
    STATE(575), 1,
      sym__set_type,
    STATE(576), 1,
      sym__pointer_type,
    STATE(577), 1,
      sym__record_type,
    STATE(578), 1,
      sym__range_type,
    STATE(579), 1,
      sym__array_type,
    STATE(901), 1,
      sym_enum_derived,
    ACTIONS(81), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1046), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(77), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(73), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
    STATE(246), 9,
      sym__type,
      sym__type_identifier_or_primitive,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
      sym_range_type,
      sym_array_type,
  [984] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      anon_sym_DOT,
    ACTIONS(83), 1,
      anon_sym_array,
    STATE(309), 1,
      sym__type_identifier,
    STATE(407), 1,
      sym_enum_variant_list,
    STATE(548), 1,
      sym__string_literal,
    STATE(572), 1,
      sym__function_type,
    STATE(573), 1,
      sym__enum_type,
    STATE(575), 1,
      sym__set_type,
    STATE(576), 1,
      sym__pointer_type,
    STATE(577), 1,
      sym__record_type,
    STATE(578), 1,
      sym__range_type,
    STATE(579), 1,
      sym__array_type,
    STATE(901), 1,
      sym_enum_derived,
    ACTIONS(81), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1046), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(77), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(73), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
    STATE(249), 9,
      sym__type,
      sym__type_identifier_or_primitive,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
      sym_range_type,
      sym_array_type,
  [1077] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 1,
      anon_sym_end,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(93), 1,
      anon_sym_forward,
    ACTIONS(97), 1,
      anon_sym_external,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(101), 1,
      anon_sym_return,
    STATE(22), 1,
      sym_function_parameters,
    STATE(25), 1,
      sym_function_return_type,
    STATE(79), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(793), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(95), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(464), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [1165] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(101), 1,
      anon_sym_return,
    ACTIONS(107), 1,
      anon_sym_end,
    ACTIONS(109), 1,
      anon_sym_forward,
    ACTIONS(113), 1,
      anon_sym_external,
    STATE(23), 1,
      sym_function_parameters,
    STATE(28), 1,
      sym_function_return_type,
    STATE(76), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(777), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(111), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(306), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [1253] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(101), 1,
      anon_sym_return,
    ACTIONS(109), 1,
      anon_sym_forward,
    ACTIONS(113), 1,
      anon_sym_external,
    ACTIONS(115), 1,
      anon_sym_end,
    STATE(21), 1,
      sym_function_parameters,
    STATE(34), 1,
      sym_function_return_type,
    STATE(84), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(777), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(117), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(342), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [1341] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(101), 1,
      anon_sym_return,
    ACTIONS(119), 1,
      anon_sym_end,
    ACTIONS(121), 1,
      anon_sym_forward,
    ACTIONS(125), 1,
      anon_sym_external,
    STATE(19), 1,
      sym_function_parameters,
    STATE(26), 1,
      sym_function_return_type,
    STATE(74), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(810), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(123), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(477), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [1429] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(93), 1,
      anon_sym_forward,
    ACTIONS(97), 1,
      anon_sym_external,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(101), 1,
      anon_sym_return,
    ACTIONS(127), 1,
      anon_sym_end,
    STATE(20), 1,
      sym_function_parameters,
    STATE(29), 1,
      sym_function_return_type,
    STATE(78), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(793), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(129), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(401), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [1517] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(101), 1,
      anon_sym_return,
    ACTIONS(121), 1,
      anon_sym_forward,
    ACTIONS(125), 1,
      anon_sym_external,
    ACTIONS(131), 1,
      anon_sym_end,
    STATE(24), 1,
      sym_function_parameters,
    STATE(27), 1,
      sym_function_return_type,
    STATE(70), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(810), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(133), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(507), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [1605] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(101), 1,
      anon_sym_return,
    ACTIONS(121), 1,
      anon_sym_forward,
    ACTIONS(125), 1,
      anon_sym_external,
    ACTIONS(135), 1,
      anon_sym_end,
    STATE(33), 1,
      sym_function_return_type,
    STATE(72), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(810), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(137), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(500), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [1687] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(93), 1,
      anon_sym_forward,
    ACTIONS(97), 1,
      anon_sym_external,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(101), 1,
      anon_sym_return,
    ACTIONS(139), 1,
      anon_sym_end,
    STATE(31), 1,
      sym_function_return_type,
    STATE(86), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(793), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(141), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(422), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [1769] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(101), 1,
      anon_sym_return,
    ACTIONS(109), 1,
      anon_sym_forward,
    ACTIONS(113), 1,
      anon_sym_external,
    ACTIONS(143), 1,
      anon_sym_end,
    STATE(32), 1,
      sym_function_return_type,
    STATE(82), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(777), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(145), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(355), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [1851] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(93), 1,
      anon_sym_forward,
    ACTIONS(97), 1,
      anon_sym_external,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(101), 1,
      anon_sym_return,
    ACTIONS(147), 1,
      anon_sym_end,
    STATE(30), 1,
      sym_function_return_type,
    STATE(87), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(793), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(149), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(395), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [1933] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(101), 1,
      anon_sym_return,
    ACTIONS(109), 1,
      anon_sym_forward,
    ACTIONS(113), 1,
      anon_sym_external,
    ACTIONS(151), 1,
      anon_sym_end,
    STATE(35), 1,
      sym_function_return_type,
    STATE(90), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(777), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(153), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(296), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [2015] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(101), 1,
      anon_sym_return,
    ACTIONS(121), 1,
      anon_sym_forward,
    ACTIONS(125), 1,
      anon_sym_external,
    ACTIONS(155), 1,
      anon_sym_end,
    STATE(36), 1,
      sym_function_return_type,
    STATE(75), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(810), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(157), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(522), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [2097] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(93), 1,
      anon_sym_forward,
    ACTIONS(97), 1,
      anon_sym_external,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(159), 1,
      anon_sym_end,
    STATE(68), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(793), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(161), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(394), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [2173] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(121), 1,
      anon_sym_forward,
    ACTIONS(125), 1,
      anon_sym_external,
    ACTIONS(163), 1,
      anon_sym_end,
    STATE(71), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(810), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(165), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(498), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [2249] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(121), 1,
      anon_sym_forward,
    ACTIONS(125), 1,
      anon_sym_external,
    ACTIONS(167), 1,
      anon_sym_end,
    STATE(77), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(810), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(169), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(525), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [2325] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(109), 1,
      anon_sym_forward,
    ACTIONS(113), 1,
      anon_sym_external,
    ACTIONS(171), 1,
      anon_sym_end,
    STATE(83), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(777), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(173), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(372), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [2401] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(93), 1,
      anon_sym_forward,
    ACTIONS(97), 1,
      anon_sym_external,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(175), 1,
      anon_sym_end,
    STATE(69), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(793), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(177), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(421), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [2477] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(93), 1,
      anon_sym_forward,
    ACTIONS(97), 1,
      anon_sym_external,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(179), 1,
      anon_sym_end,
    STATE(89), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(793), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(181), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(410), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [2553] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(93), 1,
      anon_sym_forward,
    ACTIONS(97), 1,
      anon_sym_external,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(183), 1,
      anon_sym_end,
    STATE(80), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(793), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(185), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(431), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [2629] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(109), 1,
      anon_sym_forward,
    ACTIONS(113), 1,
      anon_sym_external,
    ACTIONS(187), 1,
      anon_sym_end,
    STATE(88), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(777), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(189), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(379), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [2705] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(121), 1,
      anon_sym_forward,
    ACTIONS(125), 1,
      anon_sym_external,
    ACTIONS(191), 1,
      anon_sym_end,
    STATE(73), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(810), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(193), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(526), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [2781] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(109), 1,
      anon_sym_forward,
    ACTIONS(113), 1,
      anon_sym_external,
    ACTIONS(195), 1,
      anon_sym_end,
    STATE(81), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(777), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(197), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(348), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [2857] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(109), 1,
      anon_sym_forward,
    ACTIONS(113), 1,
      anon_sym_external,
    ACTIONS(199), 1,
      anon_sym_end,
    STATE(85), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(777), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(201), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(331), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [2933] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(121), 1,
      anon_sym_forward,
    ACTIONS(125), 1,
      anon_sym_external,
    ACTIONS(203), 1,
      anon_sym_end,
    STATE(91), 1,
      sym_function_modifiers,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(810), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(103), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(205), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(256), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(510), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [3009] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_class,
    ACTIONS(215), 1,
      anon_sym_uses,
    ACTIONS(217), 1,
      anon_sym_const,
    ACTIONS(219), 1,
      anon_sym_type,
    ACTIONS(221), 1,
      anon_sym_memory,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    STATE(319), 1,
      sym__variable_item,
    STATE(585), 1,
      sym_annotation,
    STATE(853), 1,
      sym__class,
    STATE(1001), 1,
      sym_memory_modifiers,
    ACTIONS(211), 2,
      anon_sym_end,
      anon_sym_endModule,
    ACTIONS(225), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(46), 17,
      sym_class_item,
      sym__module_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym_module_repeat1,
  [3078] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(241), 1,
      anon_sym_array,
    STATE(250), 1,
      sym__type_identifier,
    STATE(259), 1,
      sym_enum_variant_list,
    STATE(373), 1,
      sym__array_type,
    STATE(374), 1,
      sym__range_type,
    STATE(376), 1,
      sym__record_type,
    STATE(377), 1,
      sym__pointer_type,
    STATE(378), 1,
      sym__set_type,
    STATE(380), 1,
      sym__enum_type,
    STATE(381), 1,
      sym__function_type,
    STATE(386), 1,
      sym__type_identifier_or_primitive,
    STATE(548), 1,
      sym__string_literal,
    STATE(835), 1,
      sym_enum_derived,
    ACTIONS(239), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1021), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(235), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(231), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
  [3163] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(257), 1,
      anon_sym_array,
    STATE(548), 1,
      sym__string_literal,
    STATE(586), 1,
      sym__type_identifier,
    STATE(606), 1,
      sym_enum_variant_list,
    STATE(619), 1,
      sym__type_identifier_or_primitive,
    STATE(621), 1,
      sym__function_type,
    STATE(631), 1,
      sym__enum_type,
    STATE(639), 1,
      sym__set_type,
    STATE(648), 1,
      sym__pointer_type,
    STATE(654), 1,
      sym__record_type,
    STATE(661), 1,
      sym__range_type,
    STATE(664), 1,
      sym__array_type,
    STATE(868), 1,
      sym_enum_derived,
    ACTIONS(255), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1061), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(251), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(247), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
  [3248] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(259), 1,
      sym_identifier,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(269), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      anon_sym_array,
    STATE(282), 1,
      sym__type_identifier,
    STATE(390), 1,
      sym_enum_variant_list,
    STATE(473), 1,
      sym__function_type,
    STATE(530), 1,
      sym__array_type,
    STATE(531), 1,
      sym__type_identifier_or_primitive,
    STATE(533), 1,
      sym__enum_type,
    STATE(534), 1,
      sym__set_type,
    STATE(535), 1,
      sym__pointer_type,
    STATE(536), 1,
      sym__record_type,
    STATE(537), 1,
      sym__range_type,
    STATE(548), 1,
      sym__string_literal,
    STATE(885), 1,
      sym_enum_derived,
    ACTIONS(271), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1052), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(267), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(263), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
  [3333] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_LBRACK,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(241), 1,
      anon_sym_array,
    STATE(250), 1,
      sym__type_identifier,
    STATE(259), 1,
      sym_enum_variant_list,
    STATE(298), 1,
      sym__pointer_type,
    STATE(299), 1,
      sym__record_type,
    STATE(302), 1,
      sym__set_type,
    STATE(303), 1,
      sym__range_type,
    STATE(304), 1,
      sym__array_type,
    STATE(326), 1,
      sym__type_identifier_or_primitive,
    STATE(334), 1,
      sym__function_type,
    STATE(357), 1,
      sym__enum_type,
    STATE(548), 1,
      sym__string_literal,
    STATE(835), 1,
      sym_enum_derived,
    ACTIONS(239), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1021), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(235), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(231), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
  [3418] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(259), 1,
      sym_identifier,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(269), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      anon_sym_array,
    STATE(282), 1,
      sym__type_identifier,
    STATE(390), 1,
      sym_enum_variant_list,
    STATE(472), 1,
      sym__function_type,
    STATE(490), 1,
      sym__type_identifier_or_primitive,
    STATE(491), 1,
      sym__enum_type,
    STATE(492), 1,
      sym__set_type,
    STATE(493), 1,
      sym__pointer_type,
    STATE(494), 1,
      sym__record_type,
    STATE(495), 1,
      sym__range_type,
    STATE(496), 1,
      sym__array_type,
    STATE(548), 1,
      sym__string_literal,
    STATE(885), 1,
      sym_enum_derived,
    ACTIONS(271), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1052), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(267), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(263), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
  [3503] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_class,
    ACTIONS(215), 1,
      anon_sym_uses,
    ACTIONS(217), 1,
      anon_sym_const,
    ACTIONS(219), 1,
      anon_sym_type,
    ACTIONS(221), 1,
      anon_sym_memory,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    STATE(319), 1,
      sym__variable_item,
    STATE(585), 1,
      sym_annotation,
    STATE(853), 1,
      sym__class,
    STATE(1001), 1,
      sym_memory_modifiers,
    ACTIONS(277), 2,
      anon_sym_end,
      anon_sym_endModule,
    ACTIONS(225), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(48), 17,
      sym_class_item,
      sym__module_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym_module_repeat1,
  [3572] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(243), 1,
      sym_identifier,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(249), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(257), 1,
      anon_sym_array,
    STATE(548), 1,
      sym__string_literal,
    STATE(586), 1,
      sym__type_identifier,
    STATE(606), 1,
      sym_enum_variant_list,
    STATE(622), 1,
      sym__type_identifier_or_primitive,
    STATE(623), 1,
      sym__function_type,
    STATE(624), 1,
      sym__enum_type,
    STATE(625), 1,
      sym__set_type,
    STATE(626), 1,
      sym__pointer_type,
    STATE(627), 1,
      sym__record_type,
    STATE(628), 1,
      sym__range_type,
    STATE(629), 1,
      sym__array_type,
    STATE(868), 1,
      sym_enum_derived,
    ACTIONS(255), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1061), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(251), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(247), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
  [3657] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(289), 1,
      anon_sym_DOT,
    ACTIONS(293), 1,
      anon_sym_array,
    STATE(266), 1,
      sym__type_identifier,
    STATE(281), 1,
      sym_enum_variant_list,
    STATE(413), 1,
      sym__type_identifier_or_primitive,
    STATE(414), 1,
      sym__function_type,
    STATE(415), 1,
      sym__enum_type,
    STATE(416), 1,
      sym__set_type,
    STATE(417), 1,
      sym__pointer_type,
    STATE(418), 1,
      sym__record_type,
    STATE(419), 1,
      sym__range_type,
    STATE(420), 1,
      sym__array_type,
    STATE(548), 1,
      sym__string_literal,
    STATE(875), 1,
      sym_enum_derived,
    ACTIONS(291), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1033), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(287), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(283), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
  [3742] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_class,
    ACTIONS(215), 1,
      anon_sym_uses,
    ACTIONS(217), 1,
      anon_sym_const,
    ACTIONS(219), 1,
      anon_sym_type,
    ACTIONS(221), 1,
      anon_sym_memory,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    STATE(319), 1,
      sym__variable_item,
    STATE(585), 1,
      sym_annotation,
    STATE(853), 1,
      sym__class,
    STATE(1001), 1,
      sym_memory_modifiers,
    ACTIONS(297), 2,
      anon_sym_end,
      anon_sym_endModule,
    ACTIONS(225), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(49), 17,
      sym_class_item,
      sym__module_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym_module_repeat1,
  [3811] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(279), 1,
      sym_identifier,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(289), 1,
      anon_sym_DOT,
    ACTIONS(293), 1,
      anon_sym_array,
    STATE(266), 1,
      sym__type_identifier,
    STATE(281), 1,
      sym_enum_variant_list,
    STATE(391), 1,
      sym__pointer_type,
    STATE(437), 1,
      sym__range_type,
    STATE(438), 1,
      sym__record_type,
    STATE(441), 1,
      sym__set_type,
    STATE(444), 1,
      sym__enum_type,
    STATE(447), 1,
      sym__function_type,
    STATE(448), 1,
      sym__type_identifier_or_primitive,
    STATE(470), 1,
      sym__array_type,
    STATE(548), 1,
      sym__string_literal,
    STATE(875), 1,
      sym_enum_derived,
    ACTIONS(291), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1033), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(287), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(283), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
  [3896] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(209), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_class,
    ACTIONS(215), 1,
      anon_sym_uses,
    ACTIONS(217), 1,
      anon_sym_const,
    ACTIONS(219), 1,
      anon_sym_type,
    ACTIONS(221), 1,
      anon_sym_memory,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    STATE(319), 1,
      sym__variable_item,
    STATE(585), 1,
      sym_annotation,
    STATE(853), 1,
      sym__class,
    STATE(1001), 1,
      sym_memory_modifiers,
    ACTIONS(301), 2,
      anon_sym_end,
      anon_sym_endModule,
    ACTIONS(225), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(49), 17,
      sym_class_item,
      sym__module_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym_module_repeat1,
  [3965] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(305), 1,
      sym_identifier,
    ACTIONS(310), 1,
      anon_sym_class,
    ACTIONS(313), 1,
      anon_sym_uses,
    ACTIONS(316), 1,
      anon_sym_const,
    ACTIONS(319), 1,
      anon_sym_type,
    ACTIONS(322), 1,
      anon_sym_memory,
    ACTIONS(325), 1,
      anon_sym_LBRACK,
    STATE(319), 1,
      sym__variable_item,
    STATE(585), 1,
      sym_annotation,
    STATE(853), 1,
      sym__class,
    STATE(1001), 1,
      sym_memory_modifiers,
    ACTIONS(308), 2,
      anon_sym_end,
      anon_sym_endModule,
    ACTIONS(328), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(49), 17,
      sym_class_item,
      sym__module_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym_module_repeat1,
  [4034] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      anon_sym_memory,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(337), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_uses,
    ACTIONS(341), 1,
      anon_sym_const,
    ACTIONS(343), 1,
      anon_sym_type,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    STATE(426), 1,
      sym__variable_item,
    STATE(596), 1,
      sym_annotation,
    STATE(992), 1,
      sym_memory_modifiers,
    ACTIONS(335), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(347), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(57), 16,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [4099] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      anon_sym_memory,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(339), 1,
      anon_sym_uses,
    ACTIONS(341), 1,
      anon_sym_const,
    ACTIONS(343), 1,
      anon_sym_type,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    STATE(426), 1,
      sym__variable_item,
    STATE(596), 1,
      sym_annotation,
    STATE(992), 1,
      sym_memory_modifiers,
    ACTIONS(351), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(347), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(56), 16,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [4164] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      anon_sym_memory,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(339), 1,
      anon_sym_uses,
    ACTIONS(341), 1,
      anon_sym_const,
    ACTIONS(343), 1,
      anon_sym_type,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
    STATE(426), 1,
      sym__variable_item,
    STATE(596), 1,
      sym_annotation,
    STATE(992), 1,
      sym_memory_modifiers,
    ACTIONS(357), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(347), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(53), 16,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [4226] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
    ACTIONS(361), 1,
      sym_identifier,
    ACTIONS(366), 1,
      anon_sym_uses,
    ACTIONS(369), 1,
      anon_sym_const,
    ACTIONS(372), 1,
      anon_sym_type,
    ACTIONS(375), 1,
      anon_sym_memory,
    ACTIONS(378), 1,
      anon_sym_LBRACK,
    STATE(426), 1,
      sym__variable_item,
    STATE(596), 1,
      sym_annotation,
    STATE(992), 1,
      sym_memory_modifiers,
    ACTIONS(364), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(381), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(53), 16,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [4288] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      anon_sym_memory,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      sym_identifier,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_uses,
    ACTIONS(390), 1,
      anon_sym_const,
    ACTIONS(392), 1,
      anon_sym_type,
    STATE(509), 1,
      sym__variable_item,
    STATE(598), 1,
      sym_annotation,
    STATE(1013), 1,
      sym_memory_modifiers,
    ACTIONS(335), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(394), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(67), 16,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [4350] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      anon_sym_memory,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(339), 1,
      anon_sym_uses,
    ACTIONS(341), 1,
      anon_sym_const,
    ACTIONS(343), 1,
      anon_sym_type,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
    STATE(426), 1,
      sym__variable_item,
    STATE(596), 1,
      sym_annotation,
    STATE(992), 1,
      sym_memory_modifiers,
    ACTIONS(398), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(347), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(52), 16,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [4412] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      anon_sym_memory,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(339), 1,
      anon_sym_uses,
    ACTIONS(341), 1,
      anon_sym_const,
    ACTIONS(343), 1,
      anon_sym_type,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    ACTIONS(400), 1,
      ts_builtin_sym_end,
    STATE(426), 1,
      sym__variable_item,
    STATE(596), 1,
      sym_annotation,
    STATE(992), 1,
      sym_memory_modifiers,
    ACTIONS(402), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(347), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(53), 16,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [4474] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      anon_sym_memory,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(339), 1,
      anon_sym_uses,
    ACTIONS(341), 1,
      anon_sym_const,
    ACTIONS(343), 1,
      anon_sym_type,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
    STATE(426), 1,
      sym__variable_item,
    STATE(596), 1,
      sym_annotation,
    STATE(992), 1,
      sym_memory_modifiers,
    ACTIONS(406), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(347), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(53), 16,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [4536] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      anon_sym_memory,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(339), 1,
      anon_sym_uses,
    ACTIONS(341), 1,
      anon_sym_const,
    ACTIONS(343), 1,
      anon_sym_type,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
    STATE(426), 1,
      sym__variable_item,
    STATE(596), 1,
      sym_annotation,
    STATE(992), 1,
      sym_memory_modifiers,
    ACTIONS(410), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(347), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(60), 16,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [4598] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      anon_sym_memory,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      sym_identifier,
    ACTIONS(388), 1,
      anon_sym_uses,
    ACTIONS(390), 1,
      anon_sym_const,
    ACTIONS(392), 1,
      anon_sym_type,
    ACTIONS(412), 1,
      anon_sym_LPAREN,
    STATE(509), 1,
      sym__variable_item,
    STATE(598), 1,
      sym_annotation,
    STATE(1013), 1,
      sym_memory_modifiers,
    ACTIONS(351), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(394), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(65), 16,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [4660] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      anon_sym_memory,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(339), 1,
      anon_sym_uses,
    ACTIONS(341), 1,
      anon_sym_const,
    ACTIONS(343), 1,
      anon_sym_type,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
    STATE(426), 1,
      sym__variable_item,
    STATE(596), 1,
      sym_annotation,
    STATE(992), 1,
      sym_memory_modifiers,
    ACTIONS(416), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(347), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(53), 16,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [4722] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      anon_sym_memory,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      sym_identifier,
    ACTIONS(388), 1,
      anon_sym_uses,
    ACTIONS(390), 1,
      anon_sym_const,
    ACTIONS(392), 1,
      anon_sym_type,
    STATE(509), 1,
      sym__variable_item,
    STATE(598), 1,
      sym_annotation,
    STATE(1013), 1,
      sym_memory_modifiers,
    ACTIONS(357), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(394), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(63), 16,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [4781] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      anon_sym_memory,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      sym_identifier,
    ACTIONS(388), 1,
      anon_sym_uses,
    ACTIONS(390), 1,
      anon_sym_const,
    ACTIONS(392), 1,
      anon_sym_type,
    STATE(509), 1,
      sym__variable_item,
    STATE(598), 1,
      sym_annotation,
    STATE(1013), 1,
      sym_memory_modifiers,
    ACTIONS(398), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(394), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(61), 16,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [4840] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(375), 1,
      anon_sym_memory,
    ACTIONS(378), 1,
      anon_sym_LBRACK,
    ACTIONS(418), 1,
      sym_identifier,
    ACTIONS(421), 1,
      anon_sym_uses,
    ACTIONS(424), 1,
      anon_sym_const,
    ACTIONS(427), 1,
      anon_sym_type,
    STATE(509), 1,
      sym__variable_item,
    STATE(598), 1,
      sym_annotation,
    STATE(1013), 1,
      sym_memory_modifiers,
    ACTIONS(364), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(430), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(63), 16,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [4899] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      anon_sym_memory,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      sym_identifier,
    ACTIONS(388), 1,
      anon_sym_uses,
    ACTIONS(390), 1,
      anon_sym_const,
    ACTIONS(392), 1,
      anon_sym_type,
    STATE(509), 1,
      sym__variable_item,
    STATE(598), 1,
      sym_annotation,
    STATE(1013), 1,
      sym_memory_modifiers,
    ACTIONS(410), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(394), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(66), 16,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [4958] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      anon_sym_memory,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      sym_identifier,
    ACTIONS(388), 1,
      anon_sym_uses,
    ACTIONS(390), 1,
      anon_sym_const,
    ACTIONS(392), 1,
      anon_sym_type,
    STATE(509), 1,
      sym__variable_item,
    STATE(598), 1,
      sym_annotation,
    STATE(1013), 1,
      sym_memory_modifiers,
    ACTIONS(402), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(394), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(63), 16,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [5017] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      anon_sym_memory,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      sym_identifier,
    ACTIONS(388), 1,
      anon_sym_uses,
    ACTIONS(390), 1,
      anon_sym_const,
    ACTIONS(392), 1,
      anon_sym_type,
    STATE(509), 1,
      sym__variable_item,
    STATE(598), 1,
      sym_annotation,
    STATE(1013), 1,
      sym_memory_modifiers,
    ACTIONS(416), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(394), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(63), 16,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [5076] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      anon_sym_memory,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    ACTIONS(384), 1,
      sym_identifier,
    ACTIONS(388), 1,
      anon_sym_uses,
    ACTIONS(390), 1,
      anon_sym_const,
    ACTIONS(392), 1,
      anon_sym_type,
    STATE(509), 1,
      sym__variable_item,
    STATE(598), 1,
      sym_annotation,
    STATE(1013), 1,
      sym_memory_modifiers,
    ACTIONS(406), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(394), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(63), 16,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [5135] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(93), 1,
      anon_sym_forward,
    ACTIONS(97), 1,
      anon_sym_external,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(433), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(793), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(435), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(411), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [5195] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(93), 1,
      anon_sym_forward,
    ACTIONS(97), 1,
      anon_sym_external,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(437), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(793), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(439), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(433), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [5255] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(121), 1,
      anon_sym_forward,
    ACTIONS(125), 1,
      anon_sym_external,
    ACTIONS(167), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(810), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(169), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(525), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [5315] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(121), 1,
      anon_sym_forward,
    ACTIONS(125), 1,
      anon_sym_external,
    ACTIONS(441), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(810), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(443), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(528), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [5375] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(121), 1,
      anon_sym_forward,
    ACTIONS(125), 1,
      anon_sym_external,
    ACTIONS(191), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(810), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(193), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(526), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [5435] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(121), 1,
      anon_sym_forward,
    ACTIONS(125), 1,
      anon_sym_external,
    ACTIONS(445), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(810), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(447), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(514), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [5495] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(121), 1,
      anon_sym_forward,
    ACTIONS(125), 1,
      anon_sym_external,
    ACTIONS(163), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(810), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(165), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(498), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [5555] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(121), 1,
      anon_sym_forward,
    ACTIONS(125), 1,
      anon_sym_external,
    ACTIONS(203), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(810), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(205), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(510), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [5615] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(109), 1,
      anon_sym_forward,
    ACTIONS(113), 1,
      anon_sym_external,
    ACTIONS(171), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(777), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(173), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(372), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [5675] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(121), 1,
      anon_sym_forward,
    ACTIONS(125), 1,
      anon_sym_external,
    ACTIONS(449), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(810), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(451), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(508), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [5735] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(93), 1,
      anon_sym_forward,
    ACTIONS(97), 1,
      anon_sym_external,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(175), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(793), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(177), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(421), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [5795] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(93), 1,
      anon_sym_forward,
    ACTIONS(97), 1,
      anon_sym_external,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(159), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(793), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(161), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(394), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [5855] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(93), 1,
      anon_sym_forward,
    ACTIONS(97), 1,
      anon_sym_external,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(453), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(793), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(455), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(439), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [5915] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(109), 1,
      anon_sym_forward,
    ACTIONS(113), 1,
      anon_sym_external,
    ACTIONS(457), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(777), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(459), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(383), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [5975] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(109), 1,
      anon_sym_forward,
    ACTIONS(113), 1,
      anon_sym_external,
    ACTIONS(187), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(777), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(189), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(379), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [6035] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(109), 1,
      anon_sym_forward,
    ACTIONS(113), 1,
      anon_sym_external,
    ACTIONS(461), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(777), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(463), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(329), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [6095] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(109), 1,
      anon_sym_forward,
    ACTIONS(113), 1,
      anon_sym_external,
    ACTIONS(195), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(777), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(197), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(348), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [6155] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(109), 1,
      anon_sym_forward,
    ACTIONS(113), 1,
      anon_sym_external,
    ACTIONS(465), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(777), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(467), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(301), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [6215] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(93), 1,
      anon_sym_forward,
    ACTIONS(97), 1,
      anon_sym_external,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(183), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(793), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(185), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(431), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [6275] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(93), 1,
      anon_sym_forward,
    ACTIONS(97), 1,
      anon_sym_external,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(179), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(793), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(181), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(410), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [6335] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(109), 1,
      anon_sym_forward,
    ACTIONS(113), 1,
      anon_sym_external,
    ACTIONS(469), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(777), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(471), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(333), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [6395] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(93), 1,
      anon_sym_forward,
    ACTIONS(97), 1,
      anon_sym_external,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(473), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(793), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(475), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(429), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [6455] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(109), 1,
      anon_sym_forward,
    ACTIONS(113), 1,
      anon_sym_external,
    ACTIONS(199), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(777), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(201), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(331), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [6515] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(121), 1,
      anon_sym_forward,
    ACTIONS(125), 1,
      anon_sym_external,
    ACTIONS(477), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(810), 1,
      sym_function_body_statements,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(479), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(117), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(486), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [6575] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(485), 1,
      anon_sym_inverse,
    ACTIONS(487), 1,
      anon_sym_absolute,
    STATE(387), 1,
      sym_variable_modifiers,
    ACTIONS(481), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(489), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(491), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(95), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(483), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [6621] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(485), 1,
      anon_sym_inverse,
    ACTIONS(487), 1,
      anon_sym_absolute,
    STATE(328), 1,
      sym_variable_modifiers,
    ACTIONS(489), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(491), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(493), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(95), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(495), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [6667] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(485), 1,
      anon_sym_inverse,
    ACTIONS(487), 1,
      anon_sym_absolute,
    STATE(388), 1,
      sym_variable_modifiers,
    ACTIONS(489), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(491), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(497), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(95), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(499), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [6713] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(485), 1,
      anon_sym_inverse,
    ACTIONS(487), 1,
      anon_sym_absolute,
    ACTIONS(491), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(501), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(505), 2,
      anon_sym_final,
      anon_sym_override,
    STATE(98), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(503), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [6756] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(507), 1,
      anon_sym_inverse,
    ACTIONS(509), 1,
      anon_sym_absolute,
    STATE(434), 1,
      sym_variable_modifiers,
    ACTIONS(493), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(511), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(513), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(104), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(495), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [6801] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(507), 1,
      anon_sym_inverse,
    ACTIONS(509), 1,
      anon_sym_absolute,
    STATE(412), 1,
      sym_variable_modifiers,
    ACTIONS(497), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(511), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(513), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(104), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(499), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [6846] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(519), 1,
      anon_sym_inverse,
    ACTIONS(522), 1,
      anon_sym_absolute,
    ACTIONS(515), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(525), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(528), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(98), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(517), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [6889] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(507), 1,
      anon_sym_inverse,
    ACTIONS(509), 1,
      anon_sym_absolute,
    STATE(463), 1,
      sym_variable_modifiers,
    ACTIONS(481), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(511), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(513), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(104), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(483), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [6934] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
    ACTIONS(537), 1,
      anon_sym_return,
    STATE(113), 1,
      sym_function_parameters,
    STATE(138), 1,
      sym_function_return_type,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [6974] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(497), 1,
      anon_sym_LBRACK,
    ACTIONS(539), 1,
      anon_sym_inverse,
    ACTIONS(541), 1,
      anon_sym_absolute,
    STATE(529), 1,
      sym_variable_modifiers,
    ACTIONS(543), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(545), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(108), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(499), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [7018] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(547), 1,
      anon_sym_inverse,
    ACTIONS(550), 1,
      anon_sym_absolute,
    ACTIONS(515), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(553), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(556), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(102), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(517), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [7060] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    ACTIONS(539), 1,
      anon_sym_inverse,
    ACTIONS(541), 1,
      anon_sym_absolute,
    STATE(505), 1,
      sym_variable_modifiers,
    ACTIONS(543), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(545), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(108), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(495), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [7104] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(507), 1,
      anon_sym_inverse,
    ACTIONS(509), 1,
      anon_sym_absolute,
    ACTIONS(501), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(513), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(559), 2,
      anon_sym_final,
      anon_sym_override,
    STATE(102), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(503), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [7146] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(481), 1,
      anon_sym_LBRACK,
    ACTIONS(539), 1,
      anon_sym_inverse,
    ACTIONS(541), 1,
      anon_sym_absolute,
    STATE(485), 1,
      sym_variable_modifiers,
    ACTIONS(543), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(545), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(108), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(483), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [7190] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(561), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(563), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7222] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(515), 1,
      anon_sym_LBRACK,
    ACTIONS(565), 1,
      anon_sym_inverse,
    ACTIONS(568), 1,
      anon_sym_absolute,
    ACTIONS(571), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(574), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(107), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(517), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [7263] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(501), 1,
      anon_sym_LBRACK,
    ACTIONS(539), 1,
      anon_sym_inverse,
    ACTIONS(541), 1,
      anon_sym_absolute,
    ACTIONS(545), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(577), 2,
      anon_sym_final,
      anon_sym_override,
    STATE(107), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(503), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [7304] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(579), 1,
      anon_sym_to,
    ACTIONS(561), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PLUS,
    ACTIONS(563), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7337] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(587), 1,
      anon_sym_PLUS,
    STATE(157), 1,
      sym_sized,
    ACTIONS(581), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(583), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7374] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(589), 1,
      anon_sym_LPAREN,
    ACTIONS(591), 1,
      anon_sym_return,
    STATE(132), 1,
      sym_function_parameters,
    STATE(187), 1,
      sym_function_return_type,
    ACTIONS(531), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(533), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7413] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(593), 1,
      anon_sym_end,
    ACTIONS(595), 1,
      anon_sym_uses,
    ACTIONS(598), 1,
      anon_sym_type,
    ACTIONS(601), 1,
      anon_sym_LBRACK,
    ACTIONS(606), 1,
      anon_sym_var,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(604), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(112), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [7459] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(537), 1,
      anon_sym_return,
    STATE(173), 1,
      sym_function_return_type,
    ACTIONS(609), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(611), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7493] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(579), 1,
      anon_sym_to,
    ACTIONS(561), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PLUS,
    ACTIONS(563), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7525] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(617), 1,
      anon_sym_multiLang,
    STATE(149), 1,
      sym_enum_modifiers,
    ACTIONS(613), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(615), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7559] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(531), 1,
      anon_sym_LBRACK,
    ACTIONS(619), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_return,
    STATE(168), 1,
      sym_function_parameters,
    STATE(230), 1,
      sym_function_return_type,
    ACTIONS(533), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7597] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      anon_sym_uses,
    ACTIONS(91), 1,
      anon_sym_type,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(623), 1,
      anon_sym_end,
    STATE(660), 1,
      sym_declaration_statement,
    STATE(921), 1,
      sym_annotation,
    ACTIONS(625), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(112), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(658), 11,
      sym_uses_item,
      sym__type_item,
      sym_retyped_item,
      sym_function_type_item,
      sym_variable_declaration,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
  [7643] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(617), 1,
      anon_sym_multiLang,
    STATE(135), 1,
      sym_enum_modifiers,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7677] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym_sized,
    ACTIONS(581), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(583), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7711] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(587), 1,
      anon_sym_PLUS,
    ACTIONS(631), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_sized,
    ACTIONS(581), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(583), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7747] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(635), 19,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7776] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(637), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(639), 19,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_return,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7805] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(631), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_sized,
    ACTIONS(581), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(583), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7838] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(641), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(643), 19,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_return,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7867] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(645), 1,
      anon_sym_multiLang,
    STATE(174), 1,
      sym_enum_modifiers,
    ACTIONS(627), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(629), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7900] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(647), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(649), 19,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7929] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(651), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(653), 19,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_return,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7958] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(655), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(657), 19,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7987] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(581), 1,
      anon_sym_LBRACK,
    ACTIONS(587), 1,
      anon_sym_PLUS,
    ACTIONS(659), 1,
      anon_sym_LPAREN,
    STATE(229), 1,
      sym_sized,
    ACTIONS(583), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8022] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(661), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(663), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8051] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(579), 1,
      anon_sym_to,
    ACTIONS(561), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PLUS,
    ACTIONS(563), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8082] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(591), 1,
      anon_sym_return,
    STATE(199), 1,
      sym_function_return_type,
    ACTIONS(609), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(611), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8115] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(645), 1,
      anon_sym_multiLang,
    STATE(204), 1,
      sym_enum_modifiers,
    ACTIONS(613), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(615), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8148] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(665), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(667), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8177] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(671), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8205] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(673), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(675), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8233] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(655), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(657), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8261] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(677), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(679), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8289] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(635), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8317] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(683), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8345] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(685), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(687), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8373] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(689), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(691), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8401] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(693), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(695), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8429] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(651), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(653), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_return,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8457] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(697), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(699), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8485] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(647), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(649), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8513] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(701), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(703), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8541] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(705), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(707), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8569] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(709), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(711), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8597] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(713), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(715), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8625] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(717), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(719), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8653] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(641), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(643), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_return,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8681] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(721), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(723), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8709] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(725), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(727), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8737] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(729), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(731), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8765] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(733), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(735), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8793] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(739), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8821] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(741), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(743), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8849] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(745), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(747), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8877] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(749), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(751), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8905] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(753), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(755), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8933] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(757), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(759), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8961] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(761), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(763), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8989] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(581), 1,
      anon_sym_LBRACK,
    ACTIONS(659), 1,
      anon_sym_LPAREN,
    STATE(229), 1,
      sym_sized,
    ACTIONS(583), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9021] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(765), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(767), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9049] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(769), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(771), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9077] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(627), 1,
      anon_sym_LBRACK,
    ACTIONS(773), 1,
      anon_sym_multiLang,
    STATE(244), 1,
      sym_enum_modifiers,
    ACTIONS(629), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9109] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(609), 1,
      anon_sym_LBRACK,
    ACTIONS(621), 1,
      anon_sym_return,
    STATE(242), 1,
      sym_function_return_type,
    ACTIONS(611), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9141] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACK,
    ACTIONS(773), 1,
      anon_sym_multiLang,
    STATE(231), 1,
      sym_enum_modifiers,
    ACTIONS(615), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9173] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(637), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(639), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_return,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9201] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(775), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(777), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9229] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(779), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(781), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9257] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(783), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(785), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9285] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(671), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9312] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(693), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(695), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9339] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 1,
      anon_sym_LBRACK,
    ACTIONS(635), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9366] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(765), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(767), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9393] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(761), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(763), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9420] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(753), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(755), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9447] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(749), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(751), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9474] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(745), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(747), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9501] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(661), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(663), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9528] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(713), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(715), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9555] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(647), 1,
      anon_sym_LBRACK,
    ACTIONS(649), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9582] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(739), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9609] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(769), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(771), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9636] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(677), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(679), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9663] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(683), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9690] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(637), 1,
      anon_sym_LBRACK,
    ACTIONS(639), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_return,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9717] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(685), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(687), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9744] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(705), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(707), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9771] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(651), 1,
      anon_sym_LBRACK,
    ACTIONS(653), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_return,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9798] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(641), 1,
      anon_sym_LBRACK,
    ACTIONS(643), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_return,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9825] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(757), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(759), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9852] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(655), 1,
      anon_sym_LBRACK,
    ACTIONS(657), 18,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9879] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(701), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(703), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9906] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(775), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(777), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9933] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(779), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(781), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9960] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(783), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(785), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9987] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(673), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(675), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10014] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(721), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(723), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10041] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(717), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(719), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10068] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(697), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(699), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10095] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(709), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(711), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10122] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(665), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(667), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10149] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(733), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(735), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10176] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(741), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(743), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10203] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10230] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(725), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(727), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10257] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(729), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(731), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10284] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(689), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(691), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10311] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(661), 1,
      anon_sym_LBRACK,
    ACTIONS(663), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10337] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_LBRACK,
    ACTIONS(703), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10363] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(733), 1,
      anon_sym_LBRACK,
    ACTIONS(735), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10389] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(749), 1,
      anon_sym_LBRACK,
    ACTIONS(751), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10415] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(729), 1,
      anon_sym_LBRACK,
    ACTIONS(731), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10441] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(753), 1,
      anon_sym_LBRACK,
    ACTIONS(755), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10467] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10493] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(761), 1,
      anon_sym_LBRACK,
    ACTIONS(763), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10519] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(765), 1,
      anon_sym_LBRACK,
    ACTIONS(767), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10545] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(725), 1,
      anon_sym_LBRACK,
    ACTIONS(727), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10571] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(787), 1,
      sym_identifier,
    ACTIONS(789), 1,
      anon_sym_LPAREN,
    ACTIONS(791), 1,
      anon_sym_LBRACE,
    ACTIONS(795), 1,
      sym_nil_literal,
    STATE(548), 1,
      sym__string_literal,
    STATE(891), 3,
      sym_annotation_attribute_list,
      sym__inner_annotation,
      sym__literal,
    ACTIONS(793), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(251), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [10613] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(697), 1,
      anon_sym_LBRACK,
    ACTIONS(699), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10639] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(689), 1,
      anon_sym_LBRACK,
    ACTIONS(691), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10665] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(745), 1,
      anon_sym_LBRACK,
    ACTIONS(747), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10691] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(797), 1,
      anon_sym_LPAREN,
    ACTIONS(799), 1,
      anon_sym_return,
    STATE(260), 1,
      sym_function_parameters,
    STATE(347), 1,
      sym_function_return_type,
    ACTIONS(531), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(533), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [10725] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(693), 1,
      anon_sym_LBRACK,
    ACTIONS(695), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10751] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(665), 1,
      anon_sym_LBRACK,
    ACTIONS(667), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10777] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 1,
      anon_sym_LBRACK,
    ACTIONS(739), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10803] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(677), 1,
      anon_sym_LBRACK,
    ACTIONS(679), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10829] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(709), 1,
      anon_sym_LBRACK,
    ACTIONS(711), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10855] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 1,
      anon_sym_LBRACK,
    ACTIONS(683), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10881] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(685), 1,
      anon_sym_LBRACK,
    ACTIONS(687), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10907] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(717), 1,
      anon_sym_LBRACK,
    ACTIONS(719), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10933] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(721), 1,
      anon_sym_LBRACK,
    ACTIONS(723), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10959] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(775), 1,
      anon_sym_LBRACK,
    ACTIONS(777), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [10985] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(713), 1,
      anon_sym_LBRACK,
    ACTIONS(715), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [11011] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(741), 1,
      anon_sym_LBRACK,
    ACTIONS(743), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [11037] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(757), 1,
      anon_sym_LBRACK,
    ACTIONS(759), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [11063] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(673), 1,
      anon_sym_LBRACK,
    ACTIONS(675), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [11089] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(769), 1,
      anon_sym_LBRACK,
    ACTIONS(771), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [11115] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(783), 1,
      anon_sym_LBRACK,
    ACTIONS(785), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [11141] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(779), 1,
      anon_sym_LBRACK,
    ACTIONS(781), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [11167] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      anon_sym_LBRACK,
    ACTIONS(671), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [11193] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(705), 1,
      anon_sym_LBRACK,
    ACTIONS(707), 17,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_inverse,
      anon_sym_absolute,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [11219] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(803), 1,
      anon_sym_LBRACK,
    ACTIONS(805), 1,
      anon_sym_inverse,
    ACTIONS(807), 1,
      anon_sym_absolute,
    STATE(695), 1,
      sym_variable_modifiers,
    ACTIONS(809), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(811), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(801), 4,
      sym_identifier,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
    STATE(264), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
  [11256] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(813), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(815), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [11281] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(817), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(819), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [11306] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(805), 1,
      anon_sym_inverse,
    ACTIONS(807), 1,
      anon_sym_absolute,
    ACTIONS(823), 1,
      anon_sym_LBRACK,
    STATE(692), 1,
      sym_variable_modifiers,
    ACTIONS(809), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(811), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(821), 4,
      sym_identifier,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
    STATE(264), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
  [11343] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(587), 1,
      anon_sym_PLUS,
    ACTIONS(825), 1,
      anon_sym_LPAREN,
    STATE(349), 1,
      sym_sized,
    ACTIONS(581), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(583), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [11374] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(827), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(829), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [11399] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(831), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(833), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [11424] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(835), 1,
      anon_sym_LPAREN,
    ACTIONS(837), 1,
      anon_sym_return,
    STATE(284), 1,
      sym_function_parameters,
    STATE(400), 1,
      sym_function_return_type,
    ACTIONS(531), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(533), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [11457] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(579), 1,
      anon_sym_to,
    ACTIONS(561), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PLUS,
    ACTIONS(563), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [11484] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(839), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(841), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [11509] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(843), 1,
      anon_sym_end,
    ACTIONS(105), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(847), 2,
      anon_sym_final,
      anon_sym_override,
    STATE(262), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    ACTIONS(845), 8,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
  [11539] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(825), 1,
      anon_sym_LPAREN,
    STATE(349), 1,
      sym_sized,
    ACTIONS(581), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(583), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [11567] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(849), 1,
      anon_sym_multiLang,
    STATE(318), 1,
      sym_enum_modifiers,
    ACTIONS(613), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(615), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [11595] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(849), 1,
      anon_sym_multiLang,
    STATE(338), 1,
      sym_enum_modifiers,
    ACTIONS(627), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(629), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [11623] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(799), 1,
      anon_sym_return,
    STATE(323), 1,
      sym_function_return_type,
    ACTIONS(609), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(611), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [11651] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_uses_item_repeat1,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [11679] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(857), 1,
      anon_sym_end,
    ACTIONS(861), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(864), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(262), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    ACTIONS(859), 8,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
  [11709] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(855), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      aux_sym_uses_item_repeat1,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [11737] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(501), 1,
      anon_sym_LBRACK,
    ACTIONS(805), 1,
      anon_sym_inverse,
    ACTIONS(807), 1,
      anon_sym_absolute,
    ACTIONS(811), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(871), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(503), 4,
      sym_identifier,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
    STATE(267), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
  [11771] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(877), 1,
      anon_sym_multiLang,
    STATE(332), 1,
      sym_const_modifiers,
    ACTIONS(873), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(875), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [11799] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(587), 1,
      anon_sym_PLUS,
    ACTIONS(879), 1,
      anon_sym_LPAREN,
    STATE(402), 1,
      sym_sized,
    ACTIONS(581), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(583), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [11829] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(515), 1,
      anon_sym_LBRACK,
    ACTIONS(881), 1,
      anon_sym_inverse,
    ACTIONS(884), 1,
      anon_sym_absolute,
    ACTIONS(887), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(890), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(517), 4,
      sym_identifier,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
    STATE(267), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
  [11863] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(531), 1,
      anon_sym_LBRACK,
    ACTIONS(893), 1,
      anon_sym_LPAREN,
    ACTIONS(895), 1,
      anon_sym_return,
    STATE(369), 1,
      sym_function_parameters,
    STATE(520), 1,
      sym_function_return_type,
    ACTIONS(533), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [11895] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(579), 1,
      anon_sym_to,
    ACTIONS(561), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PLUS,
    ACTIONS(563), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [11921] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(877), 1,
      anon_sym_multiLang,
    STATE(365), 1,
      sym_const_modifiers,
    ACTIONS(897), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(899), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [11949] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(905), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(901), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(903), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [11977] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    STATE(289), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(851), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(853), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12004] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(741), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(743), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12027] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(901), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(903), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12050] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(651), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(653), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_return,
  [12073] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(733), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(735), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12096] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(910), 1,
      anon_sym_multiLang,
    STATE(409), 1,
      sym_const_modifiers,
    ACTIONS(897), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(899), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12123] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(879), 1,
      anon_sym_LPAREN,
    STATE(402), 1,
      sym_sized,
    ACTIONS(581), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(583), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12150] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(647), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(649), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12173] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(910), 1,
      anon_sym_multiLang,
    STATE(430), 1,
      sym_const_modifiers,
    ACTIONS(873), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(875), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12200] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(912), 1,
      anon_sym_multiLang,
    STATE(405), 1,
      sym_enum_modifiers,
    ACTIONS(627), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(629), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12227] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(581), 1,
      anon_sym_LBRACK,
    ACTIONS(587), 1,
      anon_sym_PLUS,
    ACTIONS(914), 1,
      anon_sym_LPAREN,
    STATE(480), 1,
      sym_sized,
    ACTIONS(583), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12256] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(635), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12279] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(837), 1,
      anon_sym_return,
    STATE(443), 1,
      sym_function_return_type,
    ACTIONS(609), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(611), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12306] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(579), 1,
      anon_sym_to,
    ACTIONS(561), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PLUS,
    ACTIONS(563), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12331] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(729), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(731), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12354] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(655), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(657), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12377] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(757), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(759), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12400] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(916), 1,
      anon_sym_COMMA,
    STATE(289), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(901), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(903), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12427] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(908), 1,
      anon_sym_COMMA,
    STATE(272), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(867), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(869), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12454] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(912), 1,
      anon_sym_multiLang,
    STATE(451), 1,
      sym_enum_modifiers,
    ACTIONS(613), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(615), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12481] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(531), 1,
      anon_sym_LBRACK,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
    ACTIONS(921), 1,
      anon_sym_return,
    STATE(432), 1,
      sym_function_parameters,
    STATE(550), 1,
      sym_function_return_type,
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
  [12512] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(641), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(643), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_return,
  [12535] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(637), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(639), 13,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_return,
  [12558] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(923), 1,
      anon_sym_SQUOTE,
    ACTIONS(925), 1,
      anon_sym_LBRACE,
    ACTIONS(927), 1,
      sym__integer_literal,
    ACTIONS(931), 1,
      sym_nil_literal,
    STATE(280), 1,
      sym__literal,
    STATE(354), 1,
      sym__string_literal,
    ACTIONS(929), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(363), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [12592] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(933), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(935), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12614] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(643), 1,
      anon_sym_end,
    ACTIONS(641), 13,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
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
  [12636] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(937), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(939), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12658] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(941), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(943), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12680] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(791), 1,
      anon_sym_LBRACE,
    ACTIONS(945), 1,
      anon_sym_SQUOTE,
    ACTIONS(947), 1,
      sym__integer_literal,
    ACTIONS(951), 1,
      sym_nil_literal,
    STATE(265), 1,
      sym__literal,
    STATE(276), 1,
      sym__string_literal,
    ACTIONS(949), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(251), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [12714] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(953), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(955), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12736] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(957), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(959), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12758] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(961), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(963), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12780] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(965), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(967), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12802] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(701), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(703), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12824] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(969), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(971), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12846] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(757), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(759), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12868] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(973), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(975), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12890] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(581), 1,
      anon_sym_LBRACK,
    ACTIONS(587), 1,
      anon_sym_PLUS,
    ACTIONS(977), 1,
      anon_sym_LPAREN,
    STATE(540), 1,
      sym_sized,
    ACTIONS(583), 10,
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
  [12918] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12940] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(725), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(727), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12962] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(655), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(657), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [12984] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(923), 1,
      anon_sym_SQUOTE,
    ACTIONS(925), 1,
      anon_sym_LBRACE,
    ACTIONS(927), 1,
      sym__integer_literal,
    ACTIONS(931), 1,
      sym_nil_literal,
    STATE(277), 1,
      sym__literal,
    STATE(354), 1,
      sym__string_literal,
    ACTIONS(929), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(363), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [13018] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(689), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(691), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13040] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(693), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(695), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13062] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(873), 1,
      anon_sym_LBRACK,
    ACTIONS(979), 1,
      anon_sym_multiLang,
    STATE(512), 1,
      sym_const_modifiers,
    ACTIONS(875), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13088] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(665), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(667), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13110] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(709), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(711), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13132] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(981), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(983), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13154] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(641), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(643), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_return,
  [13176] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(673), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(675), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13198] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(757), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(759), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13220] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(783), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(785), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13242] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(779), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(781), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13264] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(651), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(653), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_return,
  [13286] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(985), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(987), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13308] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(647), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(649), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13330] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(989), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(991), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13352] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(993), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(995), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13374] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(997), 1,
      anon_sym_SQUOTE,
    ACTIONS(999), 1,
      anon_sym_LBRACE,
    ACTIONS(1001), 1,
      sym__integer_literal,
    ACTIONS(1005), 1,
      sym_nil_literal,
    STATE(316), 1,
      sym__literal,
    STATE(406), 1,
      sym__string_literal,
    ACTIONS(1003), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(461), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [13408] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1007), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1009), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13430] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1011), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1013), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13452] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1015), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1017), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13474] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1019), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1021), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13496] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(635), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13518] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(897), 1,
      anon_sym_LBRACK,
    ACTIONS(979), 1,
      anon_sym_multiLang,
    STATE(524), 1,
      sym_const_modifiers,
    ACTIONS(899), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13544] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(901), 1,
      anon_sym_LBRACK,
    ACTIONS(1023), 1,
      anon_sym_COMMA,
    STATE(337), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(903), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13570] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(671), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13592] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(997), 1,
      anon_sym_SQUOTE,
    ACTIONS(999), 1,
      anon_sym_LBRACE,
    ACTIONS(1001), 1,
      sym__integer_literal,
    ACTIONS(1005), 1,
      sym_nil_literal,
    STATE(336), 1,
      sym__literal,
    STATE(406), 1,
      sym__string_literal,
    ACTIONS(1003), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(461), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [13626] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(705), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(707), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13648] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(685), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(687), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13670] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1026), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1028), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13692] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(637), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(639), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_return,
  [13714] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(683), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13736] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(653), 1,
      anon_sym_end,
    ACTIONS(651), 13,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
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
  [13758] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(741), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(743), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13780] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(677), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(679), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13802] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1030), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1032), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13824] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(739), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13846] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1034), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1036), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13868] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1034), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1036), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13890] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1038), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1040), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13912] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(851), 1,
      anon_sym_LBRACK,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    STATE(337), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(853), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13938] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(733), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(735), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13960] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1044), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1046), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13982] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1048), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1050), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14004] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1052), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1054), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14026] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACK,
    ACTIONS(1056), 1,
      anon_sym_multiLang,
    STATE(521), 1,
      sym_enum_modifiers,
    ACTIONS(615), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14052] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(741), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(743), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14074] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(901), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(903), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14096] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(729), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(731), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14118] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(831), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(833), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14140] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(827), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(829), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14162] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1058), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1060), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14184] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1062), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1064), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14206] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(867), 1,
      anon_sym_LBRACK,
    ACTIONS(1042), 1,
      anon_sym_COMMA,
    STATE(353), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(869), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14232] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(813), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(815), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14254] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(639), 1,
      anon_sym_end,
    ACTIONS(637), 13,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
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
  [14276] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(609), 1,
      anon_sym_LBRACK,
    ACTIONS(895), 1,
      anon_sym_return,
    STATE(481), 1,
      sym_function_return_type,
    ACTIONS(611), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14302] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(817), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(819), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14324] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(839), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(841), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14346] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1066), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1068), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14368] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1070), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1072), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14390] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1074), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1076), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14412] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(791), 1,
      anon_sym_LBRACE,
    ACTIONS(945), 1,
      anon_sym_SQUOTE,
    ACTIONS(947), 1,
      sym__integer_literal,
    ACTIONS(951), 1,
      sym_nil_literal,
    STATE(270), 1,
      sym__literal,
    STATE(276), 1,
      sym__string_literal,
    ACTIONS(949), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(251), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [14446] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1078), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1080), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14468] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1082), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1084), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14490] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1086), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1088), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14512] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1090), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1092), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14534] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1094), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1096), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14556] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1098), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1100), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14578] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(579), 1,
      anon_sym_to,
    ACTIONS(561), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PLUS,
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
  [14602] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1102), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1104), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14624] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(581), 1,
      anon_sym_LBRACK,
    ACTIONS(914), 1,
      anon_sym_LPAREN,
    STATE(480), 1,
      sym_sized,
    ACTIONS(583), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14650] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(733), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(735), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14672] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1106), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1108), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14694] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1110), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1112), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14716] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1114), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1116), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14738] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14760] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(627), 1,
      anon_sym_LBRACK,
    ACTIONS(1056), 1,
      anon_sym_multiLang,
    STATE(487), 1,
      sym_enum_modifiers,
    ACTIONS(629), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14786] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(937), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(939), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14807] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(757), 1,
      anon_sym_LBRACK,
    ACTIONS(759), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14828] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(685), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(687), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14849] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1030), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1032), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14870] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1044), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1046), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14891] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(683), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14912] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(757), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(759), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14933] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1038), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1040), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14954] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(705), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(707), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14975] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(677), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(679), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14996] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(969), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(971), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15017] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(739), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15038] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(701), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(703), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15059] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 1,
      anon_sym_LBRACK,
    ACTIONS(635), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15080] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(671), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15101] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(733), 1,
      anon_sym_LBRACK,
    ACTIONS(735), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15122] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(627), 1,
      anon_sym_LBRACK,
    ACTIONS(1118), 1,
      anon_sym_multiLang,
    STATE(558), 1,
      sym_enum_modifiers,
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
  [15147] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1058), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1060), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15168] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1062), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1064), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15189] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1090), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1092), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15210] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1102), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1104), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15231] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1114), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1116), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15252] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1106), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1108), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15273] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1098), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1100), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15294] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1094), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1096), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15315] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1086), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1088), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15336] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1082), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1084), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15357] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1078), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1080), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15378] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1074), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1076), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15399] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1070), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1072), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15420] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1066), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1068), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15441] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(933), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(935), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15462] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(613), 1,
      anon_sym_LBRACK,
    ACTIONS(1118), 1,
      anon_sym_multiLang,
    STATE(539), 1,
      sym_enum_modifiers,
    ACTIONS(615), 10,
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
  [15487] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(655), 1,
      anon_sym_LBRACK,
    ACTIONS(657), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15508] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(637), 1,
      anon_sym_LBRACK,
    ACTIONS(639), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_return,
  [15529] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(981), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(983), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15550] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(729), 1,
      anon_sym_LBRACK,
    ACTIONS(731), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15571] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(813), 1,
      anon_sym_LBRACK,
    ACTIONS(815), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15592] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1015), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1017), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15613] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1011), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1013), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15634] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1007), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1009), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15655] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(609), 1,
      anon_sym_LBRACK,
    ACTIONS(921), 1,
      anon_sym_return,
    STATE(538), 1,
      sym_function_return_type,
    ACTIONS(611), 10,
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
  [15680] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(993), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(995), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15701] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(989), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(991), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15722] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(817), 1,
      anon_sym_LBRACK,
    ACTIONS(819), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15743] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(563), 1,
      anon_sym_end,
    ACTIONS(561), 12,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [15764] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(961), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(963), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15785] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(941), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(943), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15806] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(953), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(955), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15827] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(779), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(781), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15848] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(957), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(959), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15869] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(973), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(975), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15890] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(783), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(785), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15911] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1052), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1054), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15932] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(839), 1,
      anon_sym_LBRACK,
    ACTIONS(841), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15953] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(581), 1,
      anon_sym_LBRACK,
    ACTIONS(977), 1,
      anon_sym_LPAREN,
    STATE(540), 1,
      sym_sized,
    ACTIONS(583), 10,
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
  [15978] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1019), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1021), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15999] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(985), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(987), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16020] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(651), 1,
      anon_sym_LBRACK,
    ACTIONS(653), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_return,
  [16041] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(673), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(675), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16062] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(709), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(711), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16083] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(729), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(731), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16104] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(741), 1,
      anon_sym_LBRACK,
    ACTIONS(743), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16125] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(733), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(735), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16146] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(665), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(667), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16167] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(641), 1,
      anon_sym_LBRACK,
    ACTIONS(643), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
      anon_sym_return,
  [16188] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(693), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(695), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16209] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(689), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(691), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16230] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1048), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1050), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16251] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(703), 1,
      anon_sym_end,
    ACTIONS(701), 12,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [16272] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(827), 1,
      anon_sym_LBRACK,
    ACTIONS(829), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16293] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(647), 1,
      anon_sym_LBRACK,
    ACTIONS(649), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16314] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1110), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1112), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16335] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1026), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1028), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16356] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(901), 2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(903), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16377] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16398] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(741), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(743), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16419] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(725), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(727), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16440] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(699), 1,
      anon_sym_end,
    ACTIONS(697), 12,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [16461] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(965), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(967), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16482] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(831), 1,
      anon_sym_LBRACK,
    ACTIONS(833), 12,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16503] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1019), 1,
      anon_sym_LBRACK,
    ACTIONS(1021), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16523] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1098), 1,
      anon_sym_LBRACK,
    ACTIONS(1100), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16543] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(725), 1,
      anon_sym_LBRACK,
    ACTIONS(727), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16563] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1048), 1,
      anon_sym_LBRACK,
    ACTIONS(1050), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16583] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(641), 1,
      anon_sym_LBRACK,
    ACTIONS(643), 11,
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
  [16603] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1026), 1,
      anon_sym_LBRACK,
    ACTIONS(1028), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16623] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(651), 1,
      anon_sym_LBRACK,
    ACTIONS(653), 11,
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
  [16643] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(689), 1,
      anon_sym_LBRACK,
    ACTIONS(691), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16663] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 1,
      anon_sym_LBRACK,
    ACTIONS(739), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16683] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(783), 1,
      anon_sym_LBRACK,
    ACTIONS(785), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16703] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(705), 1,
      anon_sym_LBRACK,
    ACTIONS(707), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16723] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(637), 1,
      anon_sym_LBRACK,
    ACTIONS(639), 11,
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
  [16743] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(973), 1,
      anon_sym_LBRACK,
    ACTIONS(975), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16763] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1110), 1,
      anon_sym_LBRACK,
    ACTIONS(1112), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16783] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(953), 1,
      anon_sym_LBRACK,
    ACTIONS(955), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16803] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      anon_sym_LBRACK,
    ACTIONS(671), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16823] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(655), 1,
      anon_sym_LBRACK,
    ACTIONS(657), 11,
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
  [16843] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(665), 1,
      anon_sym_LBRACK,
    ACTIONS(667), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16863] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(985), 1,
      anon_sym_LBRACK,
    ACTIONS(987), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16883] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1052), 1,
      anon_sym_LBRACK,
    ACTIONS(1054), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16903] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(957), 1,
      anon_sym_LBRACK,
    ACTIONS(959), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16923] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(937), 1,
      anon_sym_LBRACK,
    ACTIONS(939), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16943] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(941), 1,
      anon_sym_LBRACK,
    ACTIONS(943), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16963] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(961), 1,
      anon_sym_LBRACK,
    ACTIONS(963), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16983] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(965), 1,
      anon_sym_LBRACK,
    ACTIONS(967), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17003] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(633), 1,
      anon_sym_LBRACK,
    ACTIONS(635), 11,
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
  [17023] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1030), 1,
      anon_sym_LBRACK,
    ACTIONS(1032), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17043] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(673), 1,
      anon_sym_LBRACK,
    ACTIONS(675), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17063] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1044), 1,
      anon_sym_LBRACK,
    ACTIONS(1046), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17083] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(759), 1,
      anon_sym_end,
    ACTIONS(757), 11,
      anon_sym_RPAREN,
      anon_sym_uses,
      anon_sym_COMMA,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_to,
      anon_sym_RBRACE,
  [17103] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17123] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1038), 1,
      anon_sym_LBRACK,
    ACTIONS(1040), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17143] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(779), 1,
      anon_sym_LBRACK,
    ACTIONS(781), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17163] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(989), 1,
      anon_sym_LBRACK,
    ACTIONS(991), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17183] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(743), 1,
      anon_sym_end,
    ACTIONS(741), 11,
      anon_sym_RPAREN,
      anon_sym_uses,
      anon_sym_COMMA,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_to,
      anon_sym_RBRACE,
  [17203] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(969), 1,
      anon_sym_LBRACK,
    ACTIONS(971), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17223] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(993), 1,
      anon_sym_LBRACK,
    ACTIONS(995), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17243] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(981), 1,
      anon_sym_LBRACK,
    ACTIONS(983), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17263] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1007), 1,
      anon_sym_LBRACK,
    ACTIONS(1009), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17283] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_LBRACK,
    ACTIONS(703), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17303] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1011), 1,
      anon_sym_LBRACK,
    ACTIONS(1013), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17323] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(729), 1,
      anon_sym_LBRACK,
    ACTIONS(731), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17343] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1015), 1,
      anon_sym_LBRACK,
    ACTIONS(1017), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17363] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(685), 1,
      anon_sym_LBRACK,
    ACTIONS(687), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17383] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 1,
      anon_sym_LBRACK,
    ACTIONS(683), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17403] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(693), 1,
      anon_sym_LBRACK,
    ACTIONS(695), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17423] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(733), 1,
      anon_sym_LBRACK,
    ACTIONS(735), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17443] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(741), 1,
      anon_sym_LBRACK,
    ACTIONS(743), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17463] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(677), 1,
      anon_sym_LBRACK,
    ACTIONS(679), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17483] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(709), 1,
      anon_sym_LBRACK,
    ACTIONS(711), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17503] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(933), 1,
      anon_sym_LBRACK,
    ACTIONS(935), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17523] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1058), 1,
      anon_sym_LBRACK,
    ACTIONS(1060), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17543] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1062), 1,
      anon_sym_LBRACK,
    ACTIONS(1064), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17563] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1066), 1,
      anon_sym_LBRACK,
    ACTIONS(1068), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17583] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1090), 1,
      anon_sym_LBRACK,
    ACTIONS(1092), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17603] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(757), 1,
      anon_sym_LBRACK,
    ACTIONS(759), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17623] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1102), 1,
      anon_sym_LBRACK,
    ACTIONS(1104), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17643] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1114), 1,
      anon_sym_LBRACK,
    ACTIONS(1116), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17663] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1070), 1,
      anon_sym_LBRACK,
    ACTIONS(1072), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17683] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1106), 1,
      anon_sym_LBRACK,
    ACTIONS(1108), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17703] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(647), 1,
      anon_sym_LBRACK,
    ACTIONS(649), 11,
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
  [17723] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1094), 1,
      anon_sym_LBRACK,
    ACTIONS(1096), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17743] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1086), 1,
      anon_sym_LBRACK,
    ACTIONS(1088), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17763] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1082), 1,
      anon_sym_LBRACK,
    ACTIONS(1084), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17783] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1078), 1,
      anon_sym_LBRACK,
    ACTIONS(1080), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17803] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1074), 1,
      anon_sym_LBRACK,
    ACTIONS(1076), 11,
      sym_identifier,
      anon_sym_end,
      anon_sym_endClass,
      anon_sym_uses,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17823] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(783), 1,
      anon_sym_LBRACK,
    ACTIONS(785), 10,
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
  [17842] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(709), 1,
      anon_sym_LBRACK,
    ACTIONS(711), 10,
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
  [17861] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(737), 1,
      anon_sym_LBRACK,
    ACTIONS(739), 10,
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
  [17880] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(563), 1,
      anon_sym_end,
    ACTIONS(1120), 1,
      anon_sym_to,
    ACTIONS(561), 9,
      anon_sym_LPAREN,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_PLUS,
  [17901] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(717), 1,
      anon_sym_LBRACK,
    ACTIONS(719), 10,
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
  [17920] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(721), 1,
      anon_sym_LBRACK,
    ACTIONS(723), 10,
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
  [17939] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(689), 1,
      anon_sym_LBRACK,
    ACTIONS(691), 10,
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
  [17958] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1122), 1,
      sym_identifier,
    ACTIONS(1126), 1,
      anon_sym_LPAREN,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    STATE(592), 1,
      sym_record_derived,
    STATE(802), 1,
      sym_record_variable_list,
    STATE(1082), 1,
      sym_annotation,
    STATE(611), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1124), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [17989] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(725), 1,
      anon_sym_LBRACK,
    ACTIONS(727), 10,
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
  [18008] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1122), 1,
      sym_identifier,
    ACTIONS(1126), 1,
      anon_sym_LPAREN,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    STATE(599), 1,
      sym_record_derived,
    STATE(783), 1,
      sym_record_variable_list,
    STATE(1082), 1,
      sym_annotation,
    STATE(611), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1130), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [18039] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(735), 1,
      anon_sym_end,
    ACTIONS(733), 10,
      anon_sym_RPAREN,
      anon_sym_uses,
      anon_sym_COMMA,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_to,
  [18058] = 3,
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
  [18077] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(677), 1,
      anon_sym_LBRACK,
    ACTIONS(679), 10,
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
  [18096] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(757), 1,
      anon_sym_LBRACK,
    ACTIONS(759), 10,
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
  [18115] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(685), 1,
      anon_sym_LBRACK,
    ACTIONS(687), 10,
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
  [18134] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(731), 1,
      anon_sym_end,
    ACTIONS(729), 10,
      anon_sym_RPAREN,
      anon_sym_uses,
      anon_sym_COMMA,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_to,
  [18153] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1122), 1,
      sym_identifier,
    ACTIONS(1126), 1,
      anon_sym_LPAREN,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    STATE(608), 1,
      sym_record_derived,
    STATE(805), 1,
      sym_record_variable_list,
    STATE(1082), 1,
      sym_annotation,
    STATE(611), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1132), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [18184] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(705), 1,
      anon_sym_LBRACK,
    ACTIONS(707), 10,
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
  [18203] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(741), 1,
      anon_sym_LBRACK,
    ACTIONS(743), 10,
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
  [18222] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(733), 1,
      anon_sym_LBRACK,
    ACTIONS(735), 10,
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
  [18241] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      anon_sym_LBRACK,
    ACTIONS(671), 10,
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
  [18260] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_return,
    ACTIONS(533), 1,
      anon_sym_end,
    STATE(602), 1,
      sym_function_parameters,
    STATE(670), 1,
      sym_function_return_type,
    ACTIONS(531), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [18287] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(729), 1,
      anon_sym_LBRACK,
    ACTIONS(731), 10,
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
  [18306] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(665), 1,
      anon_sym_LBRACK,
    ACTIONS(667), 10,
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
  [18325] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(693), 1,
      anon_sym_LBRACK,
    ACTIONS(695), 10,
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
  [18344] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1122), 1,
      sym_identifier,
    ACTIONS(1126), 1,
      anon_sym_LPAREN,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    STATE(600), 1,
      sym_record_derived,
    STATE(816), 1,
      sym_record_variable_list,
    STATE(1082), 1,
      sym_annotation,
    STATE(611), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1134), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [18375] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(681), 1,
      anon_sym_LBRACK,
    ACTIONS(683), 10,
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
  [18394] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1122), 1,
      sym_identifier,
    ACTIONS(1126), 1,
      anon_sym_LPAREN,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    STATE(593), 1,
      sym_record_derived,
    STATE(741), 1,
      sym_record_variable_list,
    STATE(1082), 1,
      sym_annotation,
    STATE(611), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1136), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [18425] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1122), 1,
      sym_identifier,
    ACTIONS(1126), 1,
      anon_sym_LPAREN,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    STATE(595), 1,
      sym_record_derived,
    STATE(718), 1,
      sym_record_variable_list,
    STATE(1082), 1,
      sym_annotation,
    STATE(611), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1138), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [18456] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_LBRACK,
    ACTIONS(703), 10,
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
  [18475] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1122), 1,
      sym_identifier,
    ACTIONS(1126), 1,
      anon_sym_LPAREN,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    STATE(597), 1,
      sym_record_derived,
    STATE(730), 1,
      sym_record_variable_list,
    STATE(1082), 1,
      sym_annotation,
    STATE(611), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1140), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [18506] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(673), 1,
      anon_sym_LBRACK,
    ACTIONS(675), 10,
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
  [18525] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(697), 1,
      anon_sym_LBRACK,
    ACTIONS(699), 10,
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
  [18544] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(779), 1,
      anon_sym_LBRACK,
    ACTIONS(781), 10,
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
  [18563] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(765), 1,
      anon_sym_LBRACK,
    ACTIONS(767), 10,
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
  [18582] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(761), 1,
      anon_sym_LBRACK,
    ACTIONS(763), 10,
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
  [18601] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1122), 1,
      sym_identifier,
    ACTIONS(1126), 1,
      anon_sym_LPAREN,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    STATE(603), 1,
      sym_record_derived,
    STATE(756), 1,
      sym_record_variable_list,
    STATE(1082), 1,
      sym_annotation,
    STATE(611), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1142), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [18632] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(753), 1,
      anon_sym_LBRACK,
    ACTIONS(755), 10,
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
  [18651] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(749), 1,
      anon_sym_LBRACK,
    ACTIONS(751), 10,
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
  [18670] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(745), 1,
      anon_sym_LBRACK,
    ACTIONS(747), 10,
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
  [18689] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(661), 1,
      anon_sym_LBRACK,
    ACTIONS(663), 10,
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
  [18708] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(713), 1,
      anon_sym_LBRACK,
    ACTIONS(715), 10,
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
  [18727] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(1144), 1,
      sym_identifier,
    STATE(130), 1,
      sym__range_type,
    STATE(548), 1,
      sym__string_literal,
    STATE(1049), 2,
      sym__type_identifier,
      sym_range_type,
    STATE(961), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [18755] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(1144), 1,
      sym_identifier,
    STATE(130), 1,
      sym__range_type,
    STATE(548), 1,
      sym__string_literal,
    STATE(1043), 2,
      sym__type_identifier,
      sym_range_type,
    STATE(961), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [18783] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(1144), 1,
      sym_identifier,
    STATE(130), 1,
      sym__range_type,
    STATE(548), 1,
      sym__string_literal,
    STATE(938), 2,
      sym__type_identifier,
      sym_range_type,
    STATE(961), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [18811] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(1144), 1,
      sym_identifier,
    STATE(130), 1,
      sym__range_type,
    STATE(548), 1,
      sym__string_literal,
    STATE(1037), 2,
      sym__type_identifier,
      sym_range_type,
    STATE(961), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [18839] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(1144), 1,
      sym_identifier,
    STATE(130), 1,
      sym__range_type,
    STATE(548), 1,
      sym__string_literal,
    STATE(1026), 2,
      sym__type_identifier,
      sym_range_type,
    STATE(961), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [18867] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      anon_sym_memory,
    ACTIONS(1146), 1,
      sym_identifier,
    ACTIONS(1148), 1,
      anon_sym_class,
    ACTIONS(1150), 1,
      anon_sym_const,
    ACTIONS(1152), 1,
      anon_sym_type,
    STATE(1063), 1,
      sym_memory_modifiers,
    ACTIONS(1154), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [18895] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(583), 1,
      anon_sym_end,
    ACTIONS(587), 1,
      anon_sym_PLUS,
    ACTIONS(1156), 1,
      anon_sym_LPAREN,
    STATE(673), 1,
      sym_sized,
    ACTIONS(581), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [18919] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(1144), 1,
      sym_identifier,
    STATE(130), 1,
      sym__range_type,
    STATE(548), 1,
      sym__string_literal,
    STATE(1008), 2,
      sym__type_identifier,
      sym_range_type,
    STATE(961), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [18947] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(1144), 1,
      sym_identifier,
    STATE(130), 1,
      sym__range_type,
    STATE(548), 1,
      sym__string_literal,
    STATE(1055), 2,
      sym__type_identifier,
      sym_range_type,
    STATE(961), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [18975] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(1144), 1,
      sym_identifier,
    STATE(130), 1,
      sym__range_type,
    STATE(548), 1,
      sym__string_literal,
    STATE(1060), 2,
      sym__type_identifier,
      sym_range_type,
    STATE(961), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [19003] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(853), 1,
      anon_sym_end,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    STATE(594), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(851), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19024] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1160), 9,
      sym_identifier,
      anon_sym_class,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [19039] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1122), 1,
      sym_identifier,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    STATE(811), 1,
      sym_record_variable_list,
    STATE(1082), 1,
      sym_annotation,
    STATE(611), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1162), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [19064] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1122), 1,
      sym_identifier,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    STATE(738), 1,
      sym_record_variable_list,
    STATE(1082), 1,
      sym_annotation,
    STATE(611), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1164), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [19089] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(903), 1,
      anon_sym_end,
    ACTIONS(1166), 1,
      anon_sym_COMMA,
    STATE(594), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(901), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19110] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1122), 1,
      sym_identifier,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    STATE(765), 1,
      sym_record_variable_list,
    STATE(1082), 1,
      sym_annotation,
    STATE(611), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1169), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [19135] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      anon_sym_memory,
    ACTIONS(1171), 1,
      sym_identifier,
    ACTIONS(1173), 1,
      anon_sym_const,
    ACTIONS(1175), 1,
      anon_sym_type,
    STATE(998), 1,
      sym_memory_modifiers,
    ACTIONS(1177), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [19160] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1122), 1,
      sym_identifier,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    STATE(727), 1,
      sym_record_variable_list,
    STATE(1082), 1,
      sym_annotation,
    STATE(611), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1179), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [19185] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 1,
      anon_sym_memory,
    ACTIONS(1181), 1,
      sym_identifier,
    ACTIONS(1183), 1,
      anon_sym_const,
    ACTIONS(1185), 1,
      anon_sym_type,
    STATE(1017), 1,
      sym_memory_modifiers,
    ACTIONS(1187), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [19210] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1122), 1,
      sym_identifier,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    STATE(779), 1,
      sym_record_variable_list,
    STATE(1082), 1,
      sym_annotation,
    STATE(611), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1189), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [19235] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1122), 1,
      sym_identifier,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    STATE(764), 1,
      sym_record_variable_list,
    STATE(1082), 1,
      sym_annotation,
    STATE(611), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1191), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [19260] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(615), 1,
      anon_sym_end,
    ACTIONS(1193), 1,
      anon_sym_multiLang,
    STATE(646), 1,
      sym_enum_modifiers,
    ACTIONS(613), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19281] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(101), 1,
      anon_sym_return,
    ACTIONS(611), 1,
      anon_sym_end,
    STATE(652), 1,
      sym_function_return_type,
    ACTIONS(609), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19302] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1122), 1,
      sym_identifier,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    STATE(752), 1,
      sym_record_variable_list,
    STATE(1082), 1,
      sym_annotation,
    STATE(611), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1195), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [19327] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1197), 9,
      sym_identifier,
      anon_sym_class,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [19342] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(869), 1,
      anon_sym_end,
    ACTIONS(1158), 1,
      anon_sym_COMMA,
    STATE(590), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(867), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19363] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(629), 1,
      anon_sym_end,
    ACTIONS(1193), 1,
      anon_sym_multiLang,
    STATE(657), 1,
      sym_enum_modifiers,
    ACTIONS(627), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19384] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(583), 1,
      anon_sym_end,
    ACTIONS(1156), 1,
      anon_sym_LPAREN,
    STATE(673), 1,
      sym_sized,
    ACTIONS(581), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19405] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1122), 1,
      sym_identifier,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    STATE(797), 1,
      sym_record_variable_list,
    STATE(1082), 1,
      sym_annotation,
    STATE(611), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1199), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [19430] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1160), 8,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [19444] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(657), 1,
      anon_sym_end,
    ACTIONS(655), 7,
      anon_sym_uses,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19460] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1122), 1,
      sym_identifier,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    STATE(1082), 1,
      sym_annotation,
    STATE(614), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1201), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [19482] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(649), 1,
      anon_sym_end,
    ACTIONS(647), 7,
      anon_sym_uses,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19498] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(635), 1,
      anon_sym_end,
    ACTIONS(633), 7,
      anon_sym_uses,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19514] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1203), 1,
      sym_identifier,
    ACTIONS(1208), 1,
      anon_sym_LBRACK,
    STATE(1082), 1,
      sym_annotation,
    STATE(614), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1206), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [19536] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1197), 8,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [19550] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(903), 1,
      anon_sym_end,
    ACTIONS(901), 7,
      anon_sym_uses,
      anon_sym_COMMA,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19566] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1211), 1,
      sym_identifier,
    ACTIONS(1213), 1,
      anon_sym_SQUOTE,
    ACTIONS(1215), 1,
      sym__integer_literal,
    STATE(214), 1,
      sym__string_literal,
    STATE(228), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [19587] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(707), 1,
      anon_sym_end,
    ACTIONS(705), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19602] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(987), 1,
      anon_sym_end,
    ACTIONS(985), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19617] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(727), 1,
      anon_sym_end,
    ACTIONS(725), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19632] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1021), 1,
      anon_sym_end,
    ACTIONS(1019), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19647] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1108), 1,
      anon_sym_end,
    ACTIONS(1106), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19662] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1100), 1,
      anon_sym_end,
    ACTIONS(1098), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19677] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1096), 1,
      anon_sym_end,
    ACTIONS(1094), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19692] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1088), 1,
      anon_sym_end,
    ACTIONS(1086), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19707] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1084), 1,
      anon_sym_end,
    ACTIONS(1082), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19722] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1080), 1,
      anon_sym_end,
    ACTIONS(1078), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19737] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1076), 1,
      anon_sym_end,
    ACTIONS(1074), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19752] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1072), 1,
      anon_sym_end,
    ACTIONS(1070), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19767] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    ACTIONS(1219), 1,
      anon_sym_RPAREN,
    STATE(879), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [19788] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1054), 1,
      anon_sym_end,
    ACTIONS(1052), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19803] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    ACTIONS(1223), 1,
      anon_sym_RPAREN,
    STATE(879), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [19824] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1225), 1,
      sym_identifier,
    ACTIONS(1227), 1,
      anon_sym_SQUOTE,
    ACTIONS(1229), 1,
      sym__integer_literal,
    STATE(156), 1,
      sym__string_literal,
    STATE(134), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [19845] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    ACTIONS(1231), 1,
      anon_sym_RPAREN,
    STATE(879), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [19866] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(691), 1,
      anon_sym_end,
    ACTIONS(689), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19881] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    ACTIONS(1233), 1,
      anon_sym_RPAREN,
    STATE(879), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [19902] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    ACTIONS(1235), 1,
      anon_sym_RPAREN,
    STATE(879), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [19923] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(695), 1,
      anon_sym_end,
    ACTIONS(693), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19938] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(959), 1,
      anon_sym_end,
    ACTIONS(957), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19953] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1237), 1,
      sym_identifier,
    ACTIONS(1239), 1,
      anon_sym_SQUOTE,
    ACTIONS(1241), 1,
      sym__integer_literal,
    STATE(518), 1,
      sym__string_literal,
    STATE(489), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [19974] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    ACTIONS(1243), 1,
      anon_sym_RPAREN,
    STATE(879), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [19995] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(667), 1,
      anon_sym_end,
    ACTIONS(665), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [20010] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
    STATE(879), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20031] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    ACTIONS(1247), 1,
      anon_sym_RPAREN,
    STATE(879), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20052] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1249), 1,
      sym_identifier,
    ACTIONS(1251), 1,
      anon_sym_SQUOTE,
    ACTIONS(1253), 1,
      sym__integer_literal,
    STATE(557), 1,
      sym__string_literal,
    STATE(561), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [20073] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(711), 1,
      anon_sym_end,
    ACTIONS(709), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [20088] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(675), 1,
      anon_sym_end,
    ACTIONS(673), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [20103] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(939), 1,
      anon_sym_end,
    ACTIONS(937), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [20118] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    ACTIONS(1255), 1,
      anon_sym_RPAREN,
    STATE(879), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20139] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    ACTIONS(1257), 1,
      anon_sym_RPAREN,
    STATE(879), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20160] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    ACTIONS(1259), 1,
      anon_sym_RPAREN,
    STATE(879), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20181] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(785), 1,
      anon_sym_end,
    ACTIONS(783), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [20196] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(781), 1,
      anon_sym_end,
    ACTIONS(779), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [20211] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(943), 1,
      anon_sym_end,
    ACTIONS(941), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [20226] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(1225), 1,
      sym_identifier,
    STATE(548), 1,
      sym__string_literal,
    STATE(134), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [20247] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    ACTIONS(1261), 1,
      anon_sym_RPAREN,
    STATE(879), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20268] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_end,
    ACTIONS(669), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [20283] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1263), 1,
      anon_sym_end,
    ACTIONS(1265), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [20298] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    ACTIONS(1267), 1,
      anon_sym_RPAREN,
    STATE(879), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20319] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1269), 1,
      anon_sym_end,
    ACTIONS(1271), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [20334] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(963), 1,
      anon_sym_end,
    ACTIONS(961), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [20349] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1273), 1,
      sym_identifier,
    ACTIONS(1275), 1,
      anon_sym_SQUOTE,
    ACTIONS(1277), 1,
      sym__integer_literal,
    STATE(454), 1,
      sym__string_literal,
    STATE(455), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [20370] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      sym__integer_literal,
    ACTIONS(1279), 1,
      sym_identifier,
    STATE(548), 1,
      sym__string_literal,
    STATE(642), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [20391] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(967), 1,
      anon_sym_end,
    ACTIONS(965), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [20406] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    ACTIONS(1281), 1,
      anon_sym_RPAREN,
    STATE(879), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20427] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(687), 1,
      anon_sym_end,
    ACTIONS(685), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [20442] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(683), 1,
      anon_sym_end,
    ACTIONS(681), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [20457] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    ACTIONS(1283), 1,
      anon_sym_RPAREN,
    STATE(879), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20478] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1285), 1,
      sym_identifier,
    ACTIONS(1287), 1,
      anon_sym_SQUOTE,
    ACTIONS(1289), 1,
      sym__integer_literal,
    STATE(206), 1,
      sym__string_literal,
    STATE(205), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [20499] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(679), 1,
      anon_sym_end,
    ACTIONS(677), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [20514] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1291), 1,
      sym_identifier,
    ACTIONS(1293), 1,
      anon_sym_SQUOTE,
    ACTIONS(1295), 1,
      sym__integer_literal,
    STATE(385), 1,
      sym__string_literal,
    STATE(317), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [20535] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    ACTIONS(1297), 1,
      anon_sym_RPAREN,
    STATE(879), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20556] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(739), 1,
      anon_sym_end,
    ACTIONS(737), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [20571] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1299), 1,
      anon_sym_end,
    ACTIONS(1301), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [20586] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    STATE(754), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20604] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    STATE(801), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20622] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    STATE(804), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20640] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    STATE(806), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20658] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    STATE(729), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20676] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    STATE(879), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20694] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    STATE(770), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20712] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    STATE(782), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20730] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1217), 1,
      sym_identifier,
    STATE(740), 1,
      sym_function_parameter_declaration,
    STATE(977), 1,
      sym_function_parameter_modifiers,
    ACTIONS(1221), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20748] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    ACTIONS(1305), 1,
      anon_sym_RPAREN,
    STATE(892), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [20767] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    ACTIONS(1307), 1,
      anon_sym_RPAREN,
    STATE(892), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [20786] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    ACTIONS(1309), 1,
      anon_sym_RPAREN,
    STATE(892), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [20805] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    ACTIONS(1311), 1,
      anon_sym_RPAREN,
    STATE(892), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [20824] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    ACTIONS(1313), 1,
      anon_sym_RPAREN,
    STATE(892), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [20843] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    ACTIONS(1315), 1,
      anon_sym_RPAREN,
    STATE(892), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [20862] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
    STATE(892), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [20881] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1321), 1,
      anon_sym_LBRACK,
    ACTIONS(1319), 4,
      sym_identifier,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [20894] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1325), 1,
      anon_sym_LBRACK,
    ACTIONS(1323), 4,
      sym_identifier,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [20907] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    ACTIONS(1327), 1,
      anon_sym_RPAREN,
    STATE(892), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [20926] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    ACTIONS(1329), 1,
      anon_sym_RPAREN,
    STATE(892), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [20945] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1333), 1,
      anon_sym_LBRACK,
    ACTIONS(1331), 4,
      sym_identifier,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [20958] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
    STATE(892), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [20977] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
    STATE(892), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [20996] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    ACTIONS(1339), 1,
      anon_sym_RPAREN,
    STATE(892), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [21015] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
    STATE(892), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [21034] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    ACTIONS(1343), 1,
      anon_sym_RPAREN,
    STATE(892), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [21053] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    ACTIONS(1345), 1,
      anon_sym_RPAREN,
    STATE(892), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [21072] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    ACTIONS(1347), 1,
      anon_sym_RPAREN,
    STATE(892), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [21091] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    STATE(808), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [21107] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    STATE(803), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [21123] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    ACTIONS(1351), 1,
      anon_sym_LBRACK,
    STATE(166), 1,
      sym__type_identifier,
    STATE(839), 1,
      sym_reference_modifiers,
  [21139] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    STATE(734), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [21155] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1351), 1,
      anon_sym_LBRACK,
    ACTIONS(1353), 1,
      sym_identifier,
    STATE(241), 1,
      sym__type_identifier,
    STATE(824), 1,
      sym_reference_modifiers,
  [21171] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    STATE(786), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [21187] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    STATE(743), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [21203] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1351), 1,
      anon_sym_LBRACK,
    ACTIONS(1355), 1,
      sym_identifier,
    STATE(186), 1,
      sym__type_identifier,
    STATE(860), 1,
      sym_reference_modifiers,
  [21219] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1359), 1,
      anon_sym_EQ,
    STATE(883), 1,
      sym_enum_variant_redefine_value,
    ACTIONS(1357), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21233] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    STATE(798), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [21249] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    STATE(758), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [21265] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1359), 1,
      anon_sym_EQ,
    STATE(896), 1,
      sym_enum_variant_redefine_value,
    ACTIONS(1361), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [21279] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    STATE(774), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [21295] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1128), 1,
      anon_sym_LBRACK,
    ACTIONS(1303), 1,
      sym_identifier,
    STATE(892), 1,
      sym_enum_variant,
    STATE(1004), 1,
      sym_annotation,
  [21311] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1363), 1,
      anon_sym_RPAREN,
    ACTIONS(1365), 1,
      anon_sym_COMMA,
    STATE(717), 1,
      aux_sym_function_parameters_repeat1,
  [21324] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1169), 1,
      anon_sym_end,
    ACTIONS(1368), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [21335] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1370), 1,
      ts_builtin_sym_end,
    ACTIONS(1372), 1,
      anon_sym_end,
    ACTIONS(1374), 1,
      anon_sym_endClass,
  [21348] = 4,
    ACTIONS(1376), 1,
      sym_line_comment,
    ACTIONS(1378), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1380), 1,
      anon_sym_SQUOTE2,
    STATE(766), 1,
      aux_sym__string_literal_repeat1,
  [21361] = 4,
    ACTIONS(1376), 1,
      sym_line_comment,
    ACTIONS(1382), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1384), 1,
      anon_sym_SQUOTE2,
    STATE(720), 1,
      aux_sym__string_literal_repeat1,
  [21374] = 4,
    ACTIONS(1376), 1,
      sym_line_comment,
    ACTIONS(1378), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1386), 1,
      anon_sym_SQUOTE2,
    STATE(766), 1,
      aux_sym__string_literal_repeat1,
  [21387] = 4,
    ACTIONS(1376), 1,
      sym_line_comment,
    ACTIONS(1388), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1390), 1,
      anon_sym_SQUOTE2,
    STATE(722), 1,
      aux_sym__string_literal_repeat1,
  [21400] = 4,
    ACTIONS(1376), 1,
      sym_line_comment,
    ACTIONS(1378), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1392), 1,
      anon_sym_SQUOTE2,
    STATE(766), 1,
      aux_sym__string_literal_repeat1,
  [21413] = 4,
    ACTIONS(1376), 1,
      sym_line_comment,
    ACTIONS(1394), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1396), 1,
      anon_sym_SQUOTE2,
    STATE(724), 1,
      aux_sym__string_literal_repeat1,
  [21426] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1223), 1,
      anon_sym_RPAREN,
    ACTIONS(1398), 1,
      anon_sym_COMMA,
    STATE(717), 1,
      aux_sym_function_parameters_repeat1,
  [21439] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1400), 1,
      anon_sym_end,
    ACTIONS(1402), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [21450] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1315), 1,
      anon_sym_RPAREN,
    ACTIONS(1404), 1,
      anon_sym_COMMA,
    STATE(751), 1,
      aux_sym_enum_variant_list_repeat1,
  [21463] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1406), 1,
      anon_sym_RPAREN,
    ACTIONS(1408), 1,
      anon_sym_COMMA,
    STATE(726), 1,
      aux_sym_function_parameters_repeat1,
  [21476] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1179), 1,
      anon_sym_end,
    ACTIONS(1410), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [21487] = 4,
    ACTIONS(1376), 1,
      sym_line_comment,
    ACTIONS(1378), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1412), 1,
      anon_sym_SQUOTE2,
    STATE(766), 1,
      aux_sym__string_literal_repeat1,
  [21500] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1414), 1,
      anon_sym_COMMA,
    ACTIONS(1417), 1,
      anon_sym_RBRACE,
    STATE(732), 1,
      aux_sym_text_literal_repeat1,
  [21513] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(1419), 1,
      anon_sym_RBRACE,
    STATE(867), 1,
      sym__string_literal,
  [21526] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1421), 1,
      anon_sym_RPAREN,
    ACTIONS(1423), 1,
      anon_sym_COMMA,
    STATE(728), 1,
      aux_sym_enum_variant_list_repeat1,
  [21539] = 4,
    ACTIONS(1376), 1,
      sym_line_comment,
    ACTIONS(1425), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1427), 1,
      anon_sym_SQUOTE2,
    STATE(731), 1,
      aux_sym__string_literal_repeat1,
  [21552] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1429), 1,
      anon_sym_COMMA,
    ACTIONS(1432), 1,
      anon_sym_RBRACK,
    STATE(736), 1,
      aux_sym_reference_modifiers_repeat1,
  [21565] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1235), 1,
      anon_sym_RPAREN,
    ACTIONS(1434), 1,
      anon_sym_COMMA,
    STATE(717), 1,
      aux_sym_function_parameters_repeat1,
  [21578] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1436), 1,
      anon_sym_end,
    ACTIONS(1438), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [21589] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
    ACTIONS(1440), 1,
      anon_sym_COMMA,
    STATE(751), 1,
      aux_sym_enum_variant_list_repeat1,
  [21602] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1442), 1,
      anon_sym_RPAREN,
    ACTIONS(1444), 1,
      anon_sym_COMMA,
    STATE(737), 1,
      aux_sym_function_parameters_repeat1,
  [21615] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1164), 1,
      anon_sym_end,
    ACTIONS(1446), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [21626] = 4,
    ACTIONS(1376), 1,
      sym_line_comment,
    ACTIONS(1378), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1448), 1,
      anon_sym_SQUOTE2,
    STATE(766), 1,
      aux_sym__string_literal_repeat1,
  [21639] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1450), 1,
      anon_sym_RPAREN,
    ACTIONS(1452), 1,
      anon_sym_COMMA,
    STATE(739), 1,
      aux_sym_enum_variant_list_repeat1,
  [21652] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1454), 1,
      anon_sym_COMMA,
    ACTIONS(1456), 1,
      anon_sym_RBRACE,
    STATE(732), 1,
      aux_sym_text_literal_repeat1,
  [21665] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(1456), 1,
      anon_sym_RBRACE,
    STATE(867), 1,
      sym__string_literal,
  [21678] = 4,
    ACTIONS(1376), 1,
      sym_line_comment,
    ACTIONS(1458), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1460), 1,
      anon_sym_SQUOTE2,
    STATE(742), 1,
      aux_sym__string_literal_repeat1,
  [21691] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1462), 1,
      anon_sym_COMMA,
    ACTIONS(1464), 1,
      anon_sym_RBRACK,
    STATE(736), 1,
      aux_sym_reference_modifiers_repeat1,
  [21704] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1466), 1,
      anon_sym_RPAREN,
    ACTIONS(1468), 1,
      anon_sym_COMMA,
    STATE(791), 1,
      aux_sym_annotation_attribute_list_repeat1,
  [21717] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
    ACTIONS(1470), 1,
      anon_sym_COMMA,
    STATE(717), 1,
      aux_sym_function_parameters_repeat1,
  [21730] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1472), 3,
      anon_sym_module,
      anon_sym_class,
      anon_sym_type,
  [21739] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1474), 1,
      anon_sym_RPAREN,
    ACTIONS(1476), 1,
      anon_sym_COMMA,
    STATE(751), 1,
      aux_sym_enum_variant_list_repeat1,
  [21752] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1479), 1,
      anon_sym_end,
    ACTIONS(1481), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [21763] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1345), 1,
      anon_sym_RPAREN,
    ACTIONS(1483), 1,
      anon_sym_COMMA,
    STATE(751), 1,
      aux_sym_enum_variant_list_repeat1,
  [21776] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1485), 1,
      anon_sym_RPAREN,
    ACTIONS(1487), 1,
      anon_sym_COMMA,
    STATE(749), 1,
      aux_sym_function_parameters_repeat1,
  [21789] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1489), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK2,
  [21798] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1195), 1,
      anon_sym_end,
    ACTIONS(1491), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [21809] = 4,
    ACTIONS(1376), 1,
      sym_line_comment,
    ACTIONS(1378), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1493), 1,
      anon_sym_SQUOTE2,
    STATE(766), 1,
      aux_sym__string_literal_repeat1,
  [21822] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1495), 1,
      anon_sym_RPAREN,
    ACTIONS(1497), 1,
      anon_sym_COMMA,
    STATE(753), 1,
      aux_sym_enum_variant_list_repeat1,
  [21835] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1233), 1,
      anon_sym_RPAREN,
    ACTIONS(1499), 1,
      anon_sym_COMMA,
    STATE(717), 1,
      aux_sym_function_parameters_repeat1,
  [21848] = 4,
    ACTIONS(1376), 1,
      sym_line_comment,
    ACTIONS(1501), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1503), 1,
      anon_sym_SQUOTE2,
    STATE(815), 1,
      aux_sym__string_literal_repeat1,
  [21861] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1505), 1,
      anon_sym_COMMA,
    ACTIONS(1507), 1,
      anon_sym_RBRACE,
    STATE(744), 1,
      aux_sym_text_literal_repeat1,
  [21874] = 4,
    ACTIONS(1376), 1,
      sym_line_comment,
    ACTIONS(1509), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1511), 1,
      anon_sym_SQUOTE2,
    STATE(757), 1,
      aux_sym__string_literal_repeat1,
  [21887] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1259), 1,
      anon_sym_RPAREN,
    ACTIONS(1513), 1,
      anon_sym_COMMA,
    STATE(717), 1,
      aux_sym_function_parameters_repeat1,
  [21900] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1515), 1,
      anon_sym_end,
    ACTIONS(1517), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [21911] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1519), 1,
      anon_sym_end,
    ACTIONS(1521), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [21922] = 4,
    ACTIONS(1376), 1,
      sym_line_comment,
    ACTIONS(1523), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1526), 1,
      anon_sym_SQUOTE2,
    STATE(766), 1,
      aux_sym__string_literal_repeat1,
  [21935] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1528), 1,
      anon_sym_COMMA,
    ACTIONS(1530), 1,
      anon_sym_RBRACK,
    STATE(747), 1,
      aux_sym_reference_modifiers_repeat1,
  [21948] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
    ACTIONS(1532), 1,
      anon_sym_COMMA,
    STATE(751), 1,
      aux_sym_enum_variant_list_repeat1,
  [21961] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1309), 1,
      anon_sym_RPAREN,
    ACTIONS(1534), 1,
      anon_sym_COMMA,
    STATE(751), 1,
      aux_sym_enum_variant_list_repeat1,
  [21974] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1536), 1,
      anon_sym_RPAREN,
    ACTIONS(1538), 1,
      anon_sym_COMMA,
    STATE(763), 1,
      aux_sym_function_parameters_repeat1,
  [21987] = 4,
    ACTIONS(1376), 1,
      sym_line_comment,
    ACTIONS(1378), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1540), 1,
      anon_sym_SQUOTE2,
    STATE(766), 1,
      aux_sym__string_literal_repeat1,
  [22000] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1542), 1,
      anon_sym_RPAREN,
    ACTIONS(1544), 1,
      anon_sym_COMMA,
    STATE(772), 1,
      aux_sym_annotation_attribute_list_repeat1,
  [22013] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1547), 1,
      sym_identifier,
    ACTIONS(1549), 1,
      anon_sym_RPAREN,
    STATE(905), 1,
      sym_annotation_attribute,
  [22026] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1551), 1,
      anon_sym_RPAREN,
    ACTIONS(1553), 1,
      anon_sym_COMMA,
    STATE(768), 1,
      aux_sym_enum_variant_list_repeat1,
  [22039] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1555), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK2,
  [22048] = 4,
    ACTIONS(1376), 1,
      sym_line_comment,
    ACTIONS(1557), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1559), 1,
      anon_sym_SQUOTE2,
    STATE(771), 1,
      aux_sym__string_literal_repeat1,
  [22061] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1561), 1,
      anon_sym_end,
    ACTIONS(1563), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
  [22072] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1267), 1,
      anon_sym_RPAREN,
    ACTIONS(1565), 1,
      anon_sym_COMMA,
    STATE(717), 1,
      aux_sym_function_parameters_repeat1,
  [22085] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1567), 1,
      anon_sym_end,
    ACTIONS(1569), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [22096] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
    ACTIONS(1571), 1,
      anon_sym_COMMA,
    STATE(751), 1,
      aux_sym_enum_variant_list_repeat1,
  [22109] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1573), 3,
      anon_sym_module,
      anon_sym_class,
      anon_sym_type,
  [22118] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1575), 1,
      anon_sym_RPAREN,
    ACTIONS(1577), 1,
      anon_sym_COMMA,
    STATE(778), 1,
      aux_sym_function_parameters_repeat1,
  [22131] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1189), 1,
      anon_sym_end,
    ACTIONS(1579), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [22142] = 4,
    ACTIONS(1376), 1,
      sym_line_comment,
    ACTIONS(1378), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1581), 1,
      anon_sym_SQUOTE2,
    STATE(766), 1,
      aux_sym__string_literal_repeat1,
  [22155] = 4,
    ACTIONS(1376), 1,
      sym_line_comment,
    ACTIONS(1583), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1585), 1,
      anon_sym_SQUOTE2,
    STATE(800), 1,
      aux_sym__string_literal_repeat1,
  [22168] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1587), 1,
      anon_sym_RPAREN,
    ACTIONS(1589), 1,
      anon_sym_COMMA,
    STATE(780), 1,
      aux_sym_enum_variant_list_repeat1,
  [22181] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1591), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK2,
  [22190] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1547), 1,
      sym_identifier,
    ACTIONS(1593), 1,
      anon_sym_RPAREN,
    STATE(905), 1,
      sym_annotation_attribute,
  [22203] = 4,
    ACTIONS(1376), 1,
      sym_line_comment,
    ACTIONS(1595), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1597), 1,
      anon_sym_SQUOTE2,
    STATE(784), 1,
      aux_sym__string_literal_repeat1,
  [22216] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(1599), 1,
      anon_sym_RBRACE,
    STATE(867), 1,
      sym__string_literal,
  [22229] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1593), 1,
      anon_sym_RPAREN,
    ACTIONS(1601), 1,
      anon_sym_COMMA,
    STATE(772), 1,
      aux_sym_annotation_attribute_list_repeat1,
  [22242] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1603), 1,
      anon_sym_COMMA,
    ACTIONS(1605), 1,
      anon_sym_RBRACE,
    STATE(732), 1,
      aux_sym_text_literal_repeat1,
  [22255] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1607), 1,
      anon_sym_end,
    ACTIONS(1609), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
  [22266] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(1605), 1,
      anon_sym_RBRACE,
    STATE(867), 1,
      sym__string_literal,
  [22279] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1283), 1,
      anon_sym_RPAREN,
    ACTIONS(1611), 1,
      anon_sym_COMMA,
    STATE(717), 1,
      aux_sym_function_parameters_repeat1,
  [22292] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1613), 1,
      anon_sym_COMMA,
    ACTIONS(1615), 1,
      anon_sym_RBRACE,
    STATE(792), 1,
      aux_sym_text_literal_repeat1,
  [22305] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1617), 1,
      anon_sym_end,
    ACTIONS(1619), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [22316] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1621), 1,
      anon_sym_RPAREN,
    ACTIONS(1623), 1,
      anon_sym_COMMA,
    STATE(809), 1,
      aux_sym_enum_variant_list_repeat1,
  [22329] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1329), 1,
      anon_sym_RPAREN,
    ACTIONS(1625), 1,
      anon_sym_COMMA,
    STATE(751), 1,
      aux_sym_enum_variant_list_repeat1,
  [22342] = 4,
    ACTIONS(1376), 1,
      sym_line_comment,
    ACTIONS(1378), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1627), 1,
      anon_sym_SQUOTE2,
    STATE(766), 1,
      aux_sym__string_literal_repeat1,
  [22355] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1629), 1,
      anon_sym_RPAREN,
    ACTIONS(1631), 1,
      anon_sym_COMMA,
    STATE(759), 1,
      aux_sym_function_parameters_repeat1,
  [22368] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1162), 1,
      anon_sym_end,
    ACTIONS(1633), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [22379] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1635), 1,
      anon_sym_RPAREN,
    ACTIONS(1637), 1,
      anon_sym_COMMA,
    STATE(769), 1,
      aux_sym_enum_variant_list_repeat1,
  [22392] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1639), 1,
      anon_sym_RPAREN,
    ACTIONS(1641), 1,
      anon_sym_COMMA,
    STATE(795), 1,
      aux_sym_function_parameters_repeat1,
  [22405] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1199), 1,
      anon_sym_end,
    ACTIONS(1643), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [22416] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1645), 1,
      anon_sym_RPAREN,
    ACTIONS(1647), 1,
      anon_sym_COMMA,
    STATE(814), 1,
      aux_sym_function_parameters_repeat1,
  [22429] = 4,
    ACTIONS(1376), 1,
      sym_line_comment,
    ACTIONS(1378), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1649), 1,
      anon_sym_SQUOTE2,
    STATE(766), 1,
      aux_sym__string_literal_repeat1,
  [22442] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1651), 1,
      anon_sym_RPAREN,
    ACTIONS(1653), 1,
      anon_sym_COMMA,
    STATE(799), 1,
      aux_sym_enum_variant_list_repeat1,
  [22455] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1343), 1,
      anon_sym_RPAREN,
    ACTIONS(1655), 1,
      anon_sym_COMMA,
    STATE(751), 1,
      aux_sym_enum_variant_list_repeat1,
  [22468] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1657), 1,
      anon_sym_end,
    ACTIONS(1659), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
  [22479] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1661), 1,
      anon_sym_end,
    ACTIONS(1663), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [22490] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1665), 1,
      anon_sym_COMMA,
    ACTIONS(1667), 1,
      anon_sym_RBRACE,
    STATE(818), 1,
      aux_sym_text_literal_repeat1,
  [22503] = 4,
    ACTIONS(1376), 1,
      sym_line_comment,
    ACTIONS(1669), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1671), 1,
      anon_sym_SQUOTE2,
    STATE(807), 1,
      aux_sym__string_literal_repeat1,
  [22516] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1247), 1,
      anon_sym_RPAREN,
    ACTIONS(1673), 1,
      anon_sym_COMMA,
    STATE(717), 1,
      aux_sym_function_parameters_repeat1,
  [22529] = 4,
    ACTIONS(1376), 1,
      sym_line_comment,
    ACTIONS(1378), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1675), 1,
      anon_sym_SQUOTE2,
    STATE(766), 1,
      aux_sym__string_literal_repeat1,
  [22542] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1191), 1,
      anon_sym_end,
    ACTIONS(1677), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [22553] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(1679), 1,
      anon_sym_RBRACE,
    STATE(867), 1,
      sym__string_literal,
  [22566] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1679), 1,
      anon_sym_RBRACE,
    ACTIONS(1681), 1,
      anon_sym_COMMA,
    STATE(732), 1,
      aux_sym_text_literal_repeat1,
  [22579] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(1683), 1,
      anon_sym_RBRACE,
    STATE(867), 1,
      sym__string_literal,
  [22592] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(789), 1,
      anon_sym_LPAREN,
    STATE(911), 1,
      sym_annotation_attribute_list,
  [22602] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1685), 1,
      anon_sym_type,
    ACTIONS(1687), 1,
      anon_sym_model,
  [22612] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    STATE(1035), 1,
      sym__type_identifier,
  [22622] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1689), 1,
      sym_identifier,
    STATE(344), 1,
      sym__type_identifier,
  [22632] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1353), 1,
      sym_identifier,
    STATE(236), 1,
      sym__type_identifier,
  [22642] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    STATE(1029), 1,
      sym__type_identifier,
  [22652] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1689), 1,
      sym_identifier,
    STATE(311), 1,
      sym__type_identifier,
  [22662] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1691), 1,
      anon_sym_type,
    ACTIONS(1693), 1,
      anon_sym_model,
  [22672] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1695), 1,
      anon_sym_module,
    ACTIONS(1697), 1,
      anon_sym_class,
  [22682] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    STATE(1023), 1,
      sym__type_identifier,
  [22692] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    STATE(1015), 1,
      sym__type_identifier,
  [22702] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1699), 1,
      anon_sym_type,
    ACTIONS(1701), 1,
      anon_sym_model,
  [22712] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    STATE(1005), 1,
      sym__type_identifier,
  [22722] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    STATE(996), 1,
      sym__type_identifier,
  [22732] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1703), 1,
      anon_sym_type,
    ACTIONS(1705), 1,
      anon_sym_model,
  [22742] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    STATE(258), 1,
      sym_enum_variant_list,
  [22752] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(789), 1,
      anon_sym_LPAREN,
    STATE(978), 1,
      sym_annotation_attribute_list,
  [22762] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    STATE(969), 1,
      sym__type_identifier,
  [22772] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    STATE(950), 1,
      sym__type_identifier,
  [22782] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    STATE(171), 1,
      sym__type_identifier,
  [22792] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1689), 1,
      sym_identifier,
    STATE(305), 1,
      sym__type_identifier,
  [22802] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    STATE(940), 1,
      sym__type_identifier,
  [22812] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    STATE(927), 1,
      sym__type_identifier,
  [22822] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    STATE(1003), 1,
      sym__type_identifier,
  [22832] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    STATE(971), 1,
      sym__type_identifier,
  [22842] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(761), 1,
      sym__string_literal,
  [22852] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(789), 1,
      anon_sym_LPAREN,
    STATE(953), 1,
      sym_annotation_attribute_list,
  [22862] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(789), 1,
      anon_sym_LPAREN,
    STATE(965), 1,
      sym_annotation_attribute_list,
  [22872] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(796), 1,
      sym__string_literal,
  [22882] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    STATE(1031), 1,
      sym__type_identifier,
  [22892] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(789), 1,
      anon_sym_LPAREN,
    STATE(1032), 1,
      sym_annotation_attribute_list,
  [22902] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(789), 1,
      anon_sym_LPAREN,
    STATE(1075), 1,
      sym_annotation_attribute_list,
  [22912] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(812), 1,
      sym__string_literal,
  [22922] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1707), 1,
      anon_sym_end,
    ACTIONS(1709), 1,
      anon_sym_endClass,
  [22932] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    STATE(999), 1,
      sym__type_identifier,
  [22942] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(789), 1,
      anon_sym_LPAREN,
    STATE(986), 1,
      sym_annotation_attribute_list,
  [22952] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(789), 1,
      anon_sym_LPAREN,
    STATE(920), 1,
      sym_annotation_attribute_list,
  [22962] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1355), 1,
      sym_identifier,
    STATE(209), 1,
      sym__type_identifier,
  [22972] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1711), 1,
      sym_identifier,
    STATE(667), 1,
      sym__type_identifier,
  [22982] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1464), 1,
      anon_sym_RBRACK,
    ACTIONS(1713), 1,
      aux_sym_reference_modifiers_token1,
  [22992] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1355), 1,
      sym_identifier,
    STATE(197), 1,
      sym__type_identifier,
  [23002] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    STATE(147), 1,
      sym__type_identifier,
  [23012] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1547), 1,
      sym_identifier,
    STATE(748), 1,
      sym_annotation_attribute,
  [23022] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1355), 1,
      sym_identifier,
    STATE(188), 1,
      sym__type_identifier,
  [23032] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(867), 1,
      sym__string_literal,
  [23042] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1355), 1,
      sym_identifier,
    STATE(196), 1,
      sym__type_identifier,
  [23052] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1715), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23060] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1417), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [23068] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    STATE(601), 1,
      sym_enum_variant_list,
  [23078] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1717), 1,
      sym_identifier,
    STATE(396), 1,
      sym__type_identifier,
  [23088] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1717), 1,
      sym_identifier,
    STATE(468), 1,
      sym__type_identifier,
  [23098] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    STATE(154), 1,
      sym__type_identifier,
  [23108] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    STATE(917), 1,
      sym__type_identifier,
  [23118] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1713), 1,
      aux_sym_reference_modifiers_token1,
    ACTIONS(1719), 1,
      anon_sym_RBRACK,
  [23128] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1432), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [23136] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    STATE(291), 1,
      sym_enum_variant_list,
  [23146] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    STATE(866), 1,
      sym__type_identifier,
  [23156] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    STATE(133), 1,
      sym_enum_variant_list,
  [23166] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1717), 1,
      sym_identifier,
    STATE(403), 1,
      sym__type_identifier,
  [23176] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1363), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23184] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1721), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23192] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1711), 1,
      sym_identifier,
    STATE(620), 1,
      sym__type_identifier,
  [23202] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    STATE(1057), 1,
      sym__type_identifier,
  [23212] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1723), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23220] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1711), 1,
      sym_identifier,
    STATE(674), 1,
      sym__type_identifier,
  [23230] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    STATE(358), 1,
      sym_enum_variant_list,
  [23240] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1547), 1,
      sym_identifier,
    STATE(905), 1,
      sym_annotation_attribute,
  [23250] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1725), 1,
      sym_identifier,
    STATE(516), 1,
      sym__type_identifier,
  [23260] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_enum_variant_list,
  [23270] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1727), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23278] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1725), 1,
      sym_identifier,
    STATE(474), 1,
      sym__type_identifier,
  [23288] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1729), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23296] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1474), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23304] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    STATE(140), 1,
      sym__type_identifier,
  [23314] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1731), 1,
      sym_identifier,
    STATE(564), 1,
      sym__type_identifier,
  [23324] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1731), 1,
      sym_identifier,
    STATE(546), 1,
      sym__type_identifier,
  [23334] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1733), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23342] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    STATE(880), 1,
      sym__type_identifier,
  [23352] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1711), 1,
      sym_identifier,
    STATE(460), 1,
      sym__type_identifier,
  [23362] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1353), 1,
      sym_identifier,
    STATE(232), 1,
      sym__type_identifier,
  [23372] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1353), 1,
      sym_identifier,
    STATE(221), 1,
      sym__type_identifier,
  [23382] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    STATE(423), 1,
      sym_enum_variant_list,
  [23392] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1731), 1,
      sym_identifier,
    STATE(567), 1,
      sym__type_identifier,
  [23402] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    STATE(169), 1,
      sym_enum_variant_list,
  [23412] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1353), 1,
      sym_identifier,
    STATE(213), 1,
      sym__type_identifier,
  [23422] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1542), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23430] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1349), 1,
      sym_identifier,
    STATE(934), 1,
      sym__type_identifier,
  [23440] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1725), 1,
      sym_identifier,
    STATE(511), 1,
      sym__type_identifier,
  [23450] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1735), 1,
      anon_sym_RPAREN,
  [23457] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1737), 1,
      anon_sym_to,
  [23464] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1739), 1,
      anon_sym_RPAREN,
  [23471] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1741), 1,
      anon_sym_RBRACK2,
  [23478] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1743), 1,
      sym_identifier,
  [23485] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1745), 1,
      sym_identifier,
  [23492] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1747), 1,
      sym_identifier,
  [23499] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1749), 1,
      anon_sym_COLON,
  [23506] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1751), 1,
      anon_sym_COLON,
  [23513] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1753), 1,
      anon_sym_COLON,
  [23520] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1755), 1,
      anon_sym_EQ,
  [23527] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1757), 1,
      anon_sym_RPAREN,
  [23534] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1759), 1,
      anon_sym_RBRACK2,
  [23541] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1761), 1,
      anon_sym_type,
  [23548] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1763), 1,
      sym_identifier,
  [23555] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1765), 1,
      sym_identifier,
  [23562] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1767), 1,
      anon_sym_of,
  [23569] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1769), 1,
      sym_identifier,
  [23576] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1771), 1,
      sym_identifier,
  [23583] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1773), 1,
      anon_sym_RBRACK,
  [23590] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1775), 1,
      sym__integer_literal,
  [23597] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1777), 1,
      anon_sym_SQUOTE,
  [23604] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1779), 1,
      sym_identifier,
  [23611] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1781), 1,
      anon_sym_to,
  [23618] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1783), 1,
      anon_sym_RPAREN,
  [23625] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1785), 1,
      anon_sym_RPAREN,
  [23632] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1787), 1,
      anon_sym_RPAREN,
  [23639] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1789), 1,
      anon_sym_COLON,
  [23646] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1791), 1,
      anon_sym_LBRACK,
  [23653] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1793), 1,
      anon_sym_of,
  [23660] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1795), 1,
      anon_sym_RBRACK,
  [23667] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1797), 1,
      anon_sym_COLON,
  [23674] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1799), 1,
      anon_sym_RBRACK,
  [23681] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1801), 1,
      anon_sym_DOT,
  [23688] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1803), 1,
      sym_identifier,
  [23695] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
  [23702] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1805), 1,
      anon_sym_RPAREN,
  [23709] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1807), 1,
      sym_identifier,
  [23716] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1809), 1,
      anon_sym_of,
  [23723] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1811), 1,
      anon_sym_COLON,
  [23730] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1813), 1,
      anon_sym_of,
  [23737] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1815), 1,
      sym_identifier,
  [23744] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1817), 1,
      anon_sym_RBRACK,
  [23751] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1819), 1,
      anon_sym_COLON,
  [23758] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1821), 1,
      anon_sym_RPAREN,
  [23765] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1823), 1,
      anon_sym_RBRACK2,
  [23772] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1825), 1,
      ts_builtin_sym_end,
  [23779] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1827), 1,
      sym_identifier,
  [23786] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1829), 1,
      sym_identifier,
  [23793] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1831), 1,
      anon_sym_SQUOTE,
  [23800] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1833), 1,
      anon_sym_LPAREN,
  [23807] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1835), 1,
      sym_identifier,
  [23814] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1837), 1,
      sym_identifier,
  [23821] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1839), 1,
      anon_sym_to,
  [23828] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1841), 1,
      sym_identifier,
  [23835] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1843), 1,
      anon_sym_of,
  [23842] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1845), 1,
      sym_identifier,
  [23849] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1847), 1,
      anon_sym_RBRACK2,
  [23856] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1849), 1,
      anon_sym_COLON,
  [23863] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1851), 1,
      sym_identifier,
  [23870] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1853), 1,
      anon_sym_SQUOTE,
  [23877] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1855), 1,
      anon_sym_RBRACK,
  [23884] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1857), 1,
      sym_identifier,
  [23891] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1859), 1,
      anon_sym_COLON,
  [23898] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1861), 1,
      anon_sym_SQUOTE,
  [23905] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1863), 1,
      sym_identifier,
  [23912] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1865), 1,
      anon_sym_EQ,
  [23919] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1713), 1,
      aux_sym_reference_modifiers_token1,
  [23926] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1867), 1,
      anon_sym_RPAREN,
  [23933] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1869), 1,
      sym_identifier,
  [23940] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1871), 1,
      anon_sym_RBRACK2,
  [23947] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1873), 1,
      anon_sym_EQ,
  [23954] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1875), 1,
      anon_sym_of,
  [23961] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1877), 1,
      anon_sym_of,
  [23968] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1879), 1,
      anon_sym_model,
  [23975] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1881), 1,
      ts_builtin_sym_end,
  [23982] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1883), 1,
      anon_sym_COLON,
  [23989] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1885), 1,
      anon_sym_RPAREN,
  [23996] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1887), 1,
      anon_sym_RBRACK2,
  [24003] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1889), 1,
      anon_sym_RPAREN,
  [24010] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1472), 1,
      sym_identifier,
  [24017] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1891), 1,
      anon_sym_RPAREN,
  [24024] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1893), 1,
      anon_sym_COLON,
  [24031] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1895), 1,
      sym_identifier,
  [24038] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1897), 1,
      sym_identifier,
  [24045] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1899), 1,
      sym_identifier,
  [24052] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1901), 1,
      sym_identifier,
  [24059] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1903), 1,
      anon_sym_EQ,
  [24066] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1905), 1,
      anon_sym_COLON,
  [24073] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1907), 1,
      sym_identifier,
  [24080] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1909), 1,
      sym_identifier,
  [24087] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1911), 1,
      anon_sym_RBRACK,
  [24094] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1913), 1,
      sym_identifier,
  [24101] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1915), 1,
      sym_identifier,
  [24108] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1917), 1,
      sym_identifier,
  [24115] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1919), 1,
      anon_sym_RBRACK,
  [24122] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1921), 1,
      sym_identifier,
  [24129] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1923), 1,
      anon_sym_COLON,
  [24136] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1925), 1,
      sym__integer_literal,
  [24143] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1927), 1,
      sym_identifier,
  [24150] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1929), 1,
      anon_sym_RBRACK,
  [24157] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1931), 1,
      sym_identifier,
  [24164] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1933), 1,
      sym__integer_literal,
  [24171] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1935), 1,
      anon_sym_COLON,
  [24178] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1937), 1,
      sym_identifier,
  [24185] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1939), 1,
      sym_identifier,
  [24192] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1941), 1,
      anon_sym_EQ,
  [24199] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1943), 1,
      anon_sym_COLON,
  [24206] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1945), 1,
      sym_identifier,
  [24213] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1947), 1,
      sym_identifier,
  [24220] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1949), 1,
      sym_identifier,
  [24227] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1951), 1,
      sym_identifier,
  [24234] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1953), 1,
      sym_identifier,
  [24241] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1955), 1,
      anon_sym_to,
  [24248] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1957), 1,
      sym_identifier,
  [24255] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1959), 1,
      anon_sym_COLON,
  [24262] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1961), 1,
      sym__integer_literal,
  [24269] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1963), 1,
      sym_identifier,
  [24276] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1965), 1,
      anon_sym_RBRACK,
  [24283] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1967), 1,
      sym_identifier,
  [24290] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1969), 1,
      aux_sym_reference_modifiers_token1,
  [24297] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1971), 1,
      anon_sym_COLON,
  [24304] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1973), 1,
      anon_sym_COLON,
  [24311] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1975), 1,
      anon_sym_RBRACK,
  [24318] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1977), 1,
      anon_sym_RBRACK2,
  [24325] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1979), 1,
      anon_sym_to,
  [24332] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1981), 1,
      sym_identifier,
  [24339] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1983), 1,
      anon_sym_COLON,
  [24346] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1985), 1,
      sym__integer_literal,
  [24353] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1987), 1,
      anon_sym_RBRACK,
  [24360] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1989), 1,
      sym_identifier,
  [24367] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1991), 1,
      anon_sym_COLON,
  [24374] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1993), 1,
      anon_sym_to,
  [24381] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
  [24388] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1995), 1,
      sym__integer_literal,
  [24395] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1997), 1,
      anon_sym_RBRACK,
  [24402] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1999), 1,
      anon_sym_COLON,
  [24409] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2001), 1,
      anon_sym_EQ,
  [24416] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2003), 1,
      anon_sym_to,
  [24423] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2005), 1,
      sym_identifier,
  [24430] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2007), 1,
      sym__integer_literal,
  [24437] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2009), 1,
      anon_sym_RBRACK,
  [24444] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2011), 1,
      sym_identifier,
  [24451] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2013), 1,
      anon_sym_RPAREN,
  [24458] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2015), 1,
      anon_sym_to,
  [24465] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2017), 1,
      ts_builtin_sym_end,
  [24472] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2019), 1,
      sym__integer_literal,
  [24479] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2021), 1,
      anon_sym_RBRACK,
  [24486] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2017), 1,
      ts_builtin_sym_end,
  [24493] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2023), 1,
      anon_sym_RBRACK,
  [24500] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2025), 1,
      sym_identifier,
  [24507] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2027), 1,
      sym__integer_literal,
  [24514] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2029), 1,
      anon_sym_RBRACK,
  [24521] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2031), 1,
      anon_sym_to,
  [24528] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2033), 1,
      sym_identifier,
  [24535] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2035), 1,
      sym_identifier,
  [24542] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2037), 1,
      anon_sym_model,
  [24549] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2039), 1,
      sym_identifier,
  [24556] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2041), 1,
      anon_sym_COLON,
  [24563] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2043), 1,
      anon_sym_DOT,
  [24570] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2045), 1,
      sym_identifier,
  [24577] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2047), 1,
      sym_identifier,
  [24584] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2049), 1,
      anon_sym_COLON,
  [24591] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2051), 1,
      anon_sym_model,
  [24598] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2053), 1,
      anon_sym_COLON,
  [24605] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2055), 1,
      sym_identifier,
  [24612] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2057), 1,
      anon_sym_DOT,
  [24619] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2059), 1,
      anon_sym_RBRACK2,
  [24626] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2061), 1,
      sym_identifier,
  [24633] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2063), 1,
      anon_sym_model,
  [24640] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2065), 1,
      anon_sym_of,
  [24647] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1573), 1,
      sym_identifier,
  [24654] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2067), 1,
      ts_builtin_sym_end,
  [24661] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2069), 1,
      ts_builtin_sym_end,
  [24668] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2071), 1,
      sym_identifier,
  [24675] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2073), 1,
      sym_identifier,
  [24682] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2075), 1,
      anon_sym_COLON,
  [24689] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2077), 1,
      anon_sym_LBRACK,
  [24696] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2079), 1,
      sym_identifier,
  [24703] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2081), 1,
      anon_sym_COLON,
  [24710] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2083), 1,
      anon_sym_LBRACK,
  [24717] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2085), 1,
      sym_identifier,
  [24724] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2087), 1,
      anon_sym_COLON,
  [24731] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2089), 1,
      anon_sym_LBRACK,
  [24738] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2091), 1,
      anon_sym_LBRACK,
  [24745] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2093), 1,
      anon_sym_LBRACK,
  [24752] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2095), 1,
      anon_sym_LBRACK,
  [24759] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2097), 1,
      anon_sym_LBRACK,
  [24766] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2099), 1,
      anon_sym_SQUOTE,
  [24773] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2101), 1,
      anon_sym_SQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 99,
  [SMALL_STATE(4)] = 198,
  [SMALL_STATE(5)] = 297,
  [SMALL_STATE(6)] = 396,
  [SMALL_STATE(7)] = 495,
  [SMALL_STATE(8)] = 594,
  [SMALL_STATE(9)] = 693,
  [SMALL_STATE(10)] = 792,
  [SMALL_STATE(11)] = 891,
  [SMALL_STATE(12)] = 984,
  [SMALL_STATE(13)] = 1077,
  [SMALL_STATE(14)] = 1165,
  [SMALL_STATE(15)] = 1253,
  [SMALL_STATE(16)] = 1341,
  [SMALL_STATE(17)] = 1429,
  [SMALL_STATE(18)] = 1517,
  [SMALL_STATE(19)] = 1605,
  [SMALL_STATE(20)] = 1687,
  [SMALL_STATE(21)] = 1769,
  [SMALL_STATE(22)] = 1851,
  [SMALL_STATE(23)] = 1933,
  [SMALL_STATE(24)] = 2015,
  [SMALL_STATE(25)] = 2097,
  [SMALL_STATE(26)] = 2173,
  [SMALL_STATE(27)] = 2249,
  [SMALL_STATE(28)] = 2325,
  [SMALL_STATE(29)] = 2401,
  [SMALL_STATE(30)] = 2477,
  [SMALL_STATE(31)] = 2553,
  [SMALL_STATE(32)] = 2629,
  [SMALL_STATE(33)] = 2705,
  [SMALL_STATE(34)] = 2781,
  [SMALL_STATE(35)] = 2857,
  [SMALL_STATE(36)] = 2933,
  [SMALL_STATE(37)] = 3009,
  [SMALL_STATE(38)] = 3078,
  [SMALL_STATE(39)] = 3163,
  [SMALL_STATE(40)] = 3248,
  [SMALL_STATE(41)] = 3333,
  [SMALL_STATE(42)] = 3418,
  [SMALL_STATE(43)] = 3503,
  [SMALL_STATE(44)] = 3572,
  [SMALL_STATE(45)] = 3657,
  [SMALL_STATE(46)] = 3742,
  [SMALL_STATE(47)] = 3811,
  [SMALL_STATE(48)] = 3896,
  [SMALL_STATE(49)] = 3965,
  [SMALL_STATE(50)] = 4034,
  [SMALL_STATE(51)] = 4099,
  [SMALL_STATE(52)] = 4164,
  [SMALL_STATE(53)] = 4226,
  [SMALL_STATE(54)] = 4288,
  [SMALL_STATE(55)] = 4350,
  [SMALL_STATE(56)] = 4412,
  [SMALL_STATE(57)] = 4474,
  [SMALL_STATE(58)] = 4536,
  [SMALL_STATE(59)] = 4598,
  [SMALL_STATE(60)] = 4660,
  [SMALL_STATE(61)] = 4722,
  [SMALL_STATE(62)] = 4781,
  [SMALL_STATE(63)] = 4840,
  [SMALL_STATE(64)] = 4899,
  [SMALL_STATE(65)] = 4958,
  [SMALL_STATE(66)] = 5017,
  [SMALL_STATE(67)] = 5076,
  [SMALL_STATE(68)] = 5135,
  [SMALL_STATE(69)] = 5195,
  [SMALL_STATE(70)] = 5255,
  [SMALL_STATE(71)] = 5315,
  [SMALL_STATE(72)] = 5375,
  [SMALL_STATE(73)] = 5435,
  [SMALL_STATE(74)] = 5495,
  [SMALL_STATE(75)] = 5555,
  [SMALL_STATE(76)] = 5615,
  [SMALL_STATE(77)] = 5675,
  [SMALL_STATE(78)] = 5735,
  [SMALL_STATE(79)] = 5795,
  [SMALL_STATE(80)] = 5855,
  [SMALL_STATE(81)] = 5915,
  [SMALL_STATE(82)] = 5975,
  [SMALL_STATE(83)] = 6035,
  [SMALL_STATE(84)] = 6095,
  [SMALL_STATE(85)] = 6155,
  [SMALL_STATE(86)] = 6215,
  [SMALL_STATE(87)] = 6275,
  [SMALL_STATE(88)] = 6335,
  [SMALL_STATE(89)] = 6395,
  [SMALL_STATE(90)] = 6455,
  [SMALL_STATE(91)] = 6515,
  [SMALL_STATE(92)] = 6575,
  [SMALL_STATE(93)] = 6621,
  [SMALL_STATE(94)] = 6667,
  [SMALL_STATE(95)] = 6713,
  [SMALL_STATE(96)] = 6756,
  [SMALL_STATE(97)] = 6801,
  [SMALL_STATE(98)] = 6846,
  [SMALL_STATE(99)] = 6889,
  [SMALL_STATE(100)] = 6934,
  [SMALL_STATE(101)] = 6974,
  [SMALL_STATE(102)] = 7018,
  [SMALL_STATE(103)] = 7060,
  [SMALL_STATE(104)] = 7104,
  [SMALL_STATE(105)] = 7146,
  [SMALL_STATE(106)] = 7190,
  [SMALL_STATE(107)] = 7222,
  [SMALL_STATE(108)] = 7263,
  [SMALL_STATE(109)] = 7304,
  [SMALL_STATE(110)] = 7337,
  [SMALL_STATE(111)] = 7374,
  [SMALL_STATE(112)] = 7413,
  [SMALL_STATE(113)] = 7459,
  [SMALL_STATE(114)] = 7493,
  [SMALL_STATE(115)] = 7525,
  [SMALL_STATE(116)] = 7559,
  [SMALL_STATE(117)] = 7597,
  [SMALL_STATE(118)] = 7643,
  [SMALL_STATE(119)] = 7677,
  [SMALL_STATE(120)] = 7711,
  [SMALL_STATE(121)] = 7747,
  [SMALL_STATE(122)] = 7776,
  [SMALL_STATE(123)] = 7805,
  [SMALL_STATE(124)] = 7838,
  [SMALL_STATE(125)] = 7867,
  [SMALL_STATE(126)] = 7900,
  [SMALL_STATE(127)] = 7929,
  [SMALL_STATE(128)] = 7958,
  [SMALL_STATE(129)] = 7987,
  [SMALL_STATE(130)] = 8022,
  [SMALL_STATE(131)] = 8051,
  [SMALL_STATE(132)] = 8082,
  [SMALL_STATE(133)] = 8115,
  [SMALL_STATE(134)] = 8148,
  [SMALL_STATE(135)] = 8177,
  [SMALL_STATE(136)] = 8205,
  [SMALL_STATE(137)] = 8233,
  [SMALL_STATE(138)] = 8261,
  [SMALL_STATE(139)] = 8289,
  [SMALL_STATE(140)] = 8317,
  [SMALL_STATE(141)] = 8345,
  [SMALL_STATE(142)] = 8373,
  [SMALL_STATE(143)] = 8401,
  [SMALL_STATE(144)] = 8429,
  [SMALL_STATE(145)] = 8457,
  [SMALL_STATE(146)] = 8485,
  [SMALL_STATE(147)] = 8513,
  [SMALL_STATE(148)] = 8541,
  [SMALL_STATE(149)] = 8569,
  [SMALL_STATE(150)] = 8597,
  [SMALL_STATE(151)] = 8625,
  [SMALL_STATE(152)] = 8653,
  [SMALL_STATE(153)] = 8681,
  [SMALL_STATE(154)] = 8709,
  [SMALL_STATE(155)] = 8737,
  [SMALL_STATE(156)] = 8765,
  [SMALL_STATE(157)] = 8793,
  [SMALL_STATE(158)] = 8821,
  [SMALL_STATE(159)] = 8849,
  [SMALL_STATE(160)] = 8877,
  [SMALL_STATE(161)] = 8905,
  [SMALL_STATE(162)] = 8933,
  [SMALL_STATE(163)] = 8961,
  [SMALL_STATE(164)] = 8989,
  [SMALL_STATE(165)] = 9021,
  [SMALL_STATE(166)] = 9049,
  [SMALL_STATE(167)] = 9077,
  [SMALL_STATE(168)] = 9109,
  [SMALL_STATE(169)] = 9141,
  [SMALL_STATE(170)] = 9173,
  [SMALL_STATE(171)] = 9201,
  [SMALL_STATE(172)] = 9229,
  [SMALL_STATE(173)] = 9257,
  [SMALL_STATE(174)] = 9285,
  [SMALL_STATE(175)] = 9312,
  [SMALL_STATE(176)] = 9339,
  [SMALL_STATE(177)] = 9366,
  [SMALL_STATE(178)] = 9393,
  [SMALL_STATE(179)] = 9420,
  [SMALL_STATE(180)] = 9447,
  [SMALL_STATE(181)] = 9474,
  [SMALL_STATE(182)] = 9501,
  [SMALL_STATE(183)] = 9528,
  [SMALL_STATE(184)] = 9555,
  [SMALL_STATE(185)] = 9582,
  [SMALL_STATE(186)] = 9609,
  [SMALL_STATE(187)] = 9636,
  [SMALL_STATE(188)] = 9663,
  [SMALL_STATE(189)] = 9690,
  [SMALL_STATE(190)] = 9717,
  [SMALL_STATE(191)] = 9744,
  [SMALL_STATE(192)] = 9771,
  [SMALL_STATE(193)] = 9798,
  [SMALL_STATE(194)] = 9825,
  [SMALL_STATE(195)] = 9852,
  [SMALL_STATE(196)] = 9879,
  [SMALL_STATE(197)] = 9906,
  [SMALL_STATE(198)] = 9933,
  [SMALL_STATE(199)] = 9960,
  [SMALL_STATE(200)] = 9987,
  [SMALL_STATE(201)] = 10014,
  [SMALL_STATE(202)] = 10041,
  [SMALL_STATE(203)] = 10068,
  [SMALL_STATE(204)] = 10095,
  [SMALL_STATE(205)] = 10122,
  [SMALL_STATE(206)] = 10149,
  [SMALL_STATE(207)] = 10176,
  [SMALL_STATE(208)] = 10203,
  [SMALL_STATE(209)] = 10230,
  [SMALL_STATE(210)] = 10257,
  [SMALL_STATE(211)] = 10284,
  [SMALL_STATE(212)] = 10311,
  [SMALL_STATE(213)] = 10337,
  [SMALL_STATE(214)] = 10363,
  [SMALL_STATE(215)] = 10389,
  [SMALL_STATE(216)] = 10415,
  [SMALL_STATE(217)] = 10441,
  [SMALL_STATE(218)] = 10467,
  [SMALL_STATE(219)] = 10493,
  [SMALL_STATE(220)] = 10519,
  [SMALL_STATE(221)] = 10545,
  [SMALL_STATE(222)] = 10571,
  [SMALL_STATE(223)] = 10613,
  [SMALL_STATE(224)] = 10639,
  [SMALL_STATE(225)] = 10665,
  [SMALL_STATE(226)] = 10691,
  [SMALL_STATE(227)] = 10725,
  [SMALL_STATE(228)] = 10751,
  [SMALL_STATE(229)] = 10777,
  [SMALL_STATE(230)] = 10803,
  [SMALL_STATE(231)] = 10829,
  [SMALL_STATE(232)] = 10855,
  [SMALL_STATE(233)] = 10881,
  [SMALL_STATE(234)] = 10907,
  [SMALL_STATE(235)] = 10933,
  [SMALL_STATE(236)] = 10959,
  [SMALL_STATE(237)] = 10985,
  [SMALL_STATE(238)] = 11011,
  [SMALL_STATE(239)] = 11037,
  [SMALL_STATE(240)] = 11063,
  [SMALL_STATE(241)] = 11089,
  [SMALL_STATE(242)] = 11115,
  [SMALL_STATE(243)] = 11141,
  [SMALL_STATE(244)] = 11167,
  [SMALL_STATE(245)] = 11193,
  [SMALL_STATE(246)] = 11219,
  [SMALL_STATE(247)] = 11256,
  [SMALL_STATE(248)] = 11281,
  [SMALL_STATE(249)] = 11306,
  [SMALL_STATE(250)] = 11343,
  [SMALL_STATE(251)] = 11374,
  [SMALL_STATE(252)] = 11399,
  [SMALL_STATE(253)] = 11424,
  [SMALL_STATE(254)] = 11457,
  [SMALL_STATE(255)] = 11484,
  [SMALL_STATE(256)] = 11509,
  [SMALL_STATE(257)] = 11539,
  [SMALL_STATE(258)] = 11567,
  [SMALL_STATE(259)] = 11595,
  [SMALL_STATE(260)] = 11623,
  [SMALL_STATE(261)] = 11651,
  [SMALL_STATE(262)] = 11679,
  [SMALL_STATE(263)] = 11709,
  [SMALL_STATE(264)] = 11737,
  [SMALL_STATE(265)] = 11771,
  [SMALL_STATE(266)] = 11799,
  [SMALL_STATE(267)] = 11829,
  [SMALL_STATE(268)] = 11863,
  [SMALL_STATE(269)] = 11895,
  [SMALL_STATE(270)] = 11921,
  [SMALL_STATE(271)] = 11949,
  [SMALL_STATE(272)] = 11977,
  [SMALL_STATE(273)] = 12004,
  [SMALL_STATE(274)] = 12027,
  [SMALL_STATE(275)] = 12050,
  [SMALL_STATE(276)] = 12073,
  [SMALL_STATE(277)] = 12096,
  [SMALL_STATE(278)] = 12123,
  [SMALL_STATE(279)] = 12150,
  [SMALL_STATE(280)] = 12173,
  [SMALL_STATE(281)] = 12200,
  [SMALL_STATE(282)] = 12227,
  [SMALL_STATE(283)] = 12256,
  [SMALL_STATE(284)] = 12279,
  [SMALL_STATE(285)] = 12306,
  [SMALL_STATE(286)] = 12331,
  [SMALL_STATE(287)] = 12354,
  [SMALL_STATE(288)] = 12377,
  [SMALL_STATE(289)] = 12400,
  [SMALL_STATE(290)] = 12427,
  [SMALL_STATE(291)] = 12454,
  [SMALL_STATE(292)] = 12481,
  [SMALL_STATE(293)] = 12512,
  [SMALL_STATE(294)] = 12535,
  [SMALL_STATE(295)] = 12558,
  [SMALL_STATE(296)] = 12592,
  [SMALL_STATE(297)] = 12614,
  [SMALL_STATE(298)] = 12636,
  [SMALL_STATE(299)] = 12658,
  [SMALL_STATE(300)] = 12680,
  [SMALL_STATE(301)] = 12714,
  [SMALL_STATE(302)] = 12736,
  [SMALL_STATE(303)] = 12758,
  [SMALL_STATE(304)] = 12780,
  [SMALL_STATE(305)] = 12802,
  [SMALL_STATE(306)] = 12824,
  [SMALL_STATE(307)] = 12846,
  [SMALL_STATE(308)] = 12868,
  [SMALL_STATE(309)] = 12890,
  [SMALL_STATE(310)] = 12918,
  [SMALL_STATE(311)] = 12940,
  [SMALL_STATE(312)] = 12962,
  [SMALL_STATE(313)] = 12984,
  [SMALL_STATE(314)] = 13018,
  [SMALL_STATE(315)] = 13040,
  [SMALL_STATE(316)] = 13062,
  [SMALL_STATE(317)] = 13088,
  [SMALL_STATE(318)] = 13110,
  [SMALL_STATE(319)] = 13132,
  [SMALL_STATE(320)] = 13154,
  [SMALL_STATE(321)] = 13176,
  [SMALL_STATE(322)] = 13198,
  [SMALL_STATE(323)] = 13220,
  [SMALL_STATE(324)] = 13242,
  [SMALL_STATE(325)] = 13264,
  [SMALL_STATE(326)] = 13286,
  [SMALL_STATE(327)] = 13308,
  [SMALL_STATE(328)] = 13330,
  [SMALL_STATE(329)] = 13352,
  [SMALL_STATE(330)] = 13374,
  [SMALL_STATE(331)] = 13408,
  [SMALL_STATE(332)] = 13430,
  [SMALL_STATE(333)] = 13452,
  [SMALL_STATE(334)] = 13474,
  [SMALL_STATE(335)] = 13496,
  [SMALL_STATE(336)] = 13518,
  [SMALL_STATE(337)] = 13544,
  [SMALL_STATE(338)] = 13570,
  [SMALL_STATE(339)] = 13592,
  [SMALL_STATE(340)] = 13626,
  [SMALL_STATE(341)] = 13648,
  [SMALL_STATE(342)] = 13670,
  [SMALL_STATE(343)] = 13692,
  [SMALL_STATE(344)] = 13714,
  [SMALL_STATE(345)] = 13736,
  [SMALL_STATE(346)] = 13758,
  [SMALL_STATE(347)] = 13780,
  [SMALL_STATE(348)] = 13802,
  [SMALL_STATE(349)] = 13824,
  [SMALL_STATE(350)] = 13846,
  [SMALL_STATE(351)] = 13868,
  [SMALL_STATE(352)] = 13890,
  [SMALL_STATE(353)] = 13912,
  [SMALL_STATE(354)] = 13938,
  [SMALL_STATE(355)] = 13960,
  [SMALL_STATE(356)] = 13982,
  [SMALL_STATE(357)] = 14004,
  [SMALL_STATE(358)] = 14026,
  [SMALL_STATE(359)] = 14052,
  [SMALL_STATE(360)] = 14074,
  [SMALL_STATE(361)] = 14096,
  [SMALL_STATE(362)] = 14118,
  [SMALL_STATE(363)] = 14140,
  [SMALL_STATE(364)] = 14162,
  [SMALL_STATE(365)] = 14184,
  [SMALL_STATE(366)] = 14206,
  [SMALL_STATE(367)] = 14232,
  [SMALL_STATE(368)] = 14254,
  [SMALL_STATE(369)] = 14276,
  [SMALL_STATE(370)] = 14302,
  [SMALL_STATE(371)] = 14324,
  [SMALL_STATE(372)] = 14346,
  [SMALL_STATE(373)] = 14368,
  [SMALL_STATE(374)] = 14390,
  [SMALL_STATE(375)] = 14412,
  [SMALL_STATE(376)] = 14446,
  [SMALL_STATE(377)] = 14468,
  [SMALL_STATE(378)] = 14490,
  [SMALL_STATE(379)] = 14512,
  [SMALL_STATE(380)] = 14534,
  [SMALL_STATE(381)] = 14556,
  [SMALL_STATE(382)] = 14578,
  [SMALL_STATE(383)] = 14602,
  [SMALL_STATE(384)] = 14624,
  [SMALL_STATE(385)] = 14650,
  [SMALL_STATE(386)] = 14672,
  [SMALL_STATE(387)] = 14694,
  [SMALL_STATE(388)] = 14716,
  [SMALL_STATE(389)] = 14738,
  [SMALL_STATE(390)] = 14760,
  [SMALL_STATE(391)] = 14786,
  [SMALL_STATE(392)] = 14807,
  [SMALL_STATE(393)] = 14828,
  [SMALL_STATE(394)] = 14849,
  [SMALL_STATE(395)] = 14870,
  [SMALL_STATE(396)] = 14891,
  [SMALL_STATE(397)] = 14912,
  [SMALL_STATE(398)] = 14933,
  [SMALL_STATE(399)] = 14954,
  [SMALL_STATE(400)] = 14975,
  [SMALL_STATE(401)] = 14996,
  [SMALL_STATE(402)] = 15017,
  [SMALL_STATE(403)] = 15038,
  [SMALL_STATE(404)] = 15059,
  [SMALL_STATE(405)] = 15080,
  [SMALL_STATE(406)] = 15101,
  [SMALL_STATE(407)] = 15122,
  [SMALL_STATE(408)] = 15147,
  [SMALL_STATE(409)] = 15168,
  [SMALL_STATE(410)] = 15189,
  [SMALL_STATE(411)] = 15210,
  [SMALL_STATE(412)] = 15231,
  [SMALL_STATE(413)] = 15252,
  [SMALL_STATE(414)] = 15273,
  [SMALL_STATE(415)] = 15294,
  [SMALL_STATE(416)] = 15315,
  [SMALL_STATE(417)] = 15336,
  [SMALL_STATE(418)] = 15357,
  [SMALL_STATE(419)] = 15378,
  [SMALL_STATE(420)] = 15399,
  [SMALL_STATE(421)] = 15420,
  [SMALL_STATE(422)] = 15441,
  [SMALL_STATE(423)] = 15462,
  [SMALL_STATE(424)] = 15487,
  [SMALL_STATE(425)] = 15508,
  [SMALL_STATE(426)] = 15529,
  [SMALL_STATE(427)] = 15550,
  [SMALL_STATE(428)] = 15571,
  [SMALL_STATE(429)] = 15592,
  [SMALL_STATE(430)] = 15613,
  [SMALL_STATE(431)] = 15634,
  [SMALL_STATE(432)] = 15655,
  [SMALL_STATE(433)] = 15680,
  [SMALL_STATE(434)] = 15701,
  [SMALL_STATE(435)] = 15722,
  [SMALL_STATE(436)] = 15743,
  [SMALL_STATE(437)] = 15764,
  [SMALL_STATE(438)] = 15785,
  [SMALL_STATE(439)] = 15806,
  [SMALL_STATE(440)] = 15827,
  [SMALL_STATE(441)] = 15848,
  [SMALL_STATE(442)] = 15869,
  [SMALL_STATE(443)] = 15890,
  [SMALL_STATE(444)] = 15911,
  [SMALL_STATE(445)] = 15932,
  [SMALL_STATE(446)] = 15953,
  [SMALL_STATE(447)] = 15978,
  [SMALL_STATE(448)] = 15999,
  [SMALL_STATE(449)] = 16020,
  [SMALL_STATE(450)] = 16041,
  [SMALL_STATE(451)] = 16062,
  [SMALL_STATE(452)] = 16083,
  [SMALL_STATE(453)] = 16104,
  [SMALL_STATE(454)] = 16125,
  [SMALL_STATE(455)] = 16146,
  [SMALL_STATE(456)] = 16167,
  [SMALL_STATE(457)] = 16188,
  [SMALL_STATE(458)] = 16209,
  [SMALL_STATE(459)] = 16230,
  [SMALL_STATE(460)] = 16251,
  [SMALL_STATE(461)] = 16272,
  [SMALL_STATE(462)] = 16293,
  [SMALL_STATE(463)] = 16314,
  [SMALL_STATE(464)] = 16335,
  [SMALL_STATE(465)] = 16356,
  [SMALL_STATE(466)] = 16377,
  [SMALL_STATE(467)] = 16398,
  [SMALL_STATE(468)] = 16419,
  [SMALL_STATE(469)] = 16440,
  [SMALL_STATE(470)] = 16461,
  [SMALL_STATE(471)] = 16482,
  [SMALL_STATE(472)] = 16503,
  [SMALL_STATE(473)] = 16523,
  [SMALL_STATE(474)] = 16543,
  [SMALL_STATE(475)] = 16563,
  [SMALL_STATE(476)] = 16583,
  [SMALL_STATE(477)] = 16603,
  [SMALL_STATE(478)] = 16623,
  [SMALL_STATE(479)] = 16643,
  [SMALL_STATE(480)] = 16663,
  [SMALL_STATE(481)] = 16683,
  [SMALL_STATE(482)] = 16703,
  [SMALL_STATE(483)] = 16723,
  [SMALL_STATE(484)] = 16743,
  [SMALL_STATE(485)] = 16763,
  [SMALL_STATE(486)] = 16783,
  [SMALL_STATE(487)] = 16803,
  [SMALL_STATE(488)] = 16823,
  [SMALL_STATE(489)] = 16843,
  [SMALL_STATE(490)] = 16863,
  [SMALL_STATE(491)] = 16883,
  [SMALL_STATE(492)] = 16903,
  [SMALL_STATE(493)] = 16923,
  [SMALL_STATE(494)] = 16943,
  [SMALL_STATE(495)] = 16963,
  [SMALL_STATE(496)] = 16983,
  [SMALL_STATE(497)] = 17003,
  [SMALL_STATE(498)] = 17023,
  [SMALL_STATE(499)] = 17043,
  [SMALL_STATE(500)] = 17063,
  [SMALL_STATE(501)] = 17083,
  [SMALL_STATE(502)] = 17103,
  [SMALL_STATE(503)] = 17123,
  [SMALL_STATE(504)] = 17143,
  [SMALL_STATE(505)] = 17163,
  [SMALL_STATE(506)] = 17183,
  [SMALL_STATE(507)] = 17203,
  [SMALL_STATE(508)] = 17223,
  [SMALL_STATE(509)] = 17243,
  [SMALL_STATE(510)] = 17263,
  [SMALL_STATE(511)] = 17283,
  [SMALL_STATE(512)] = 17303,
  [SMALL_STATE(513)] = 17323,
  [SMALL_STATE(514)] = 17343,
  [SMALL_STATE(515)] = 17363,
  [SMALL_STATE(516)] = 17383,
  [SMALL_STATE(517)] = 17403,
  [SMALL_STATE(518)] = 17423,
  [SMALL_STATE(519)] = 17443,
  [SMALL_STATE(520)] = 17463,
  [SMALL_STATE(521)] = 17483,
  [SMALL_STATE(522)] = 17503,
  [SMALL_STATE(523)] = 17523,
  [SMALL_STATE(524)] = 17543,
  [SMALL_STATE(525)] = 17563,
  [SMALL_STATE(526)] = 17583,
  [SMALL_STATE(527)] = 17603,
  [SMALL_STATE(528)] = 17623,
  [SMALL_STATE(529)] = 17643,
  [SMALL_STATE(530)] = 17663,
  [SMALL_STATE(531)] = 17683,
  [SMALL_STATE(532)] = 17703,
  [SMALL_STATE(533)] = 17723,
  [SMALL_STATE(534)] = 17743,
  [SMALL_STATE(535)] = 17763,
  [SMALL_STATE(536)] = 17783,
  [SMALL_STATE(537)] = 17803,
  [SMALL_STATE(538)] = 17823,
  [SMALL_STATE(539)] = 17842,
  [SMALL_STATE(540)] = 17861,
  [SMALL_STATE(541)] = 17880,
  [SMALL_STATE(542)] = 17901,
  [SMALL_STATE(543)] = 17920,
  [SMALL_STATE(544)] = 17939,
  [SMALL_STATE(545)] = 17958,
  [SMALL_STATE(546)] = 17989,
  [SMALL_STATE(547)] = 18008,
  [SMALL_STATE(548)] = 18039,
  [SMALL_STATE(549)] = 18058,
  [SMALL_STATE(550)] = 18077,
  [SMALL_STATE(551)] = 18096,
  [SMALL_STATE(552)] = 18115,
  [SMALL_STATE(553)] = 18134,
  [SMALL_STATE(554)] = 18153,
  [SMALL_STATE(555)] = 18184,
  [SMALL_STATE(556)] = 18203,
  [SMALL_STATE(557)] = 18222,
  [SMALL_STATE(558)] = 18241,
  [SMALL_STATE(559)] = 18260,
  [SMALL_STATE(560)] = 18287,
  [SMALL_STATE(561)] = 18306,
  [SMALL_STATE(562)] = 18325,
  [SMALL_STATE(563)] = 18344,
  [SMALL_STATE(564)] = 18375,
  [SMALL_STATE(565)] = 18394,
  [SMALL_STATE(566)] = 18425,
  [SMALL_STATE(567)] = 18456,
  [SMALL_STATE(568)] = 18475,
  [SMALL_STATE(569)] = 18506,
  [SMALL_STATE(570)] = 18525,
  [SMALL_STATE(571)] = 18544,
  [SMALL_STATE(572)] = 18563,
  [SMALL_STATE(573)] = 18582,
  [SMALL_STATE(574)] = 18601,
  [SMALL_STATE(575)] = 18632,
  [SMALL_STATE(576)] = 18651,
  [SMALL_STATE(577)] = 18670,
  [SMALL_STATE(578)] = 18689,
  [SMALL_STATE(579)] = 18708,
  [SMALL_STATE(580)] = 18727,
  [SMALL_STATE(581)] = 18755,
  [SMALL_STATE(582)] = 18783,
  [SMALL_STATE(583)] = 18811,
  [SMALL_STATE(584)] = 18839,
  [SMALL_STATE(585)] = 18867,
  [SMALL_STATE(586)] = 18895,
  [SMALL_STATE(587)] = 18919,
  [SMALL_STATE(588)] = 18947,
  [SMALL_STATE(589)] = 18975,
  [SMALL_STATE(590)] = 19003,
  [SMALL_STATE(591)] = 19024,
  [SMALL_STATE(592)] = 19039,
  [SMALL_STATE(593)] = 19064,
  [SMALL_STATE(594)] = 19089,
  [SMALL_STATE(595)] = 19110,
  [SMALL_STATE(596)] = 19135,
  [SMALL_STATE(597)] = 19160,
  [SMALL_STATE(598)] = 19185,
  [SMALL_STATE(599)] = 19210,
  [SMALL_STATE(600)] = 19235,
  [SMALL_STATE(601)] = 19260,
  [SMALL_STATE(602)] = 19281,
  [SMALL_STATE(603)] = 19302,
  [SMALL_STATE(604)] = 19327,
  [SMALL_STATE(605)] = 19342,
  [SMALL_STATE(606)] = 19363,
  [SMALL_STATE(607)] = 19384,
  [SMALL_STATE(608)] = 19405,
  [SMALL_STATE(609)] = 19430,
  [SMALL_STATE(610)] = 19444,
  [SMALL_STATE(611)] = 19460,
  [SMALL_STATE(612)] = 19482,
  [SMALL_STATE(613)] = 19498,
  [SMALL_STATE(614)] = 19514,
  [SMALL_STATE(615)] = 19536,
  [SMALL_STATE(616)] = 19550,
  [SMALL_STATE(617)] = 19566,
  [SMALL_STATE(618)] = 19587,
  [SMALL_STATE(619)] = 19602,
  [SMALL_STATE(620)] = 19617,
  [SMALL_STATE(621)] = 19632,
  [SMALL_STATE(622)] = 19647,
  [SMALL_STATE(623)] = 19662,
  [SMALL_STATE(624)] = 19677,
  [SMALL_STATE(625)] = 19692,
  [SMALL_STATE(626)] = 19707,
  [SMALL_STATE(627)] = 19722,
  [SMALL_STATE(628)] = 19737,
  [SMALL_STATE(629)] = 19752,
  [SMALL_STATE(630)] = 19767,
  [SMALL_STATE(631)] = 19788,
  [SMALL_STATE(632)] = 19803,
  [SMALL_STATE(633)] = 19824,
  [SMALL_STATE(634)] = 19845,
  [SMALL_STATE(635)] = 19866,
  [SMALL_STATE(636)] = 19881,
  [SMALL_STATE(637)] = 19902,
  [SMALL_STATE(638)] = 19923,
  [SMALL_STATE(639)] = 19938,
  [SMALL_STATE(640)] = 19953,
  [SMALL_STATE(641)] = 19974,
  [SMALL_STATE(642)] = 19995,
  [SMALL_STATE(643)] = 20010,
  [SMALL_STATE(644)] = 20031,
  [SMALL_STATE(645)] = 20052,
  [SMALL_STATE(646)] = 20073,
  [SMALL_STATE(647)] = 20088,
  [SMALL_STATE(648)] = 20103,
  [SMALL_STATE(649)] = 20118,
  [SMALL_STATE(650)] = 20139,
  [SMALL_STATE(651)] = 20160,
  [SMALL_STATE(652)] = 20181,
  [SMALL_STATE(653)] = 20196,
  [SMALL_STATE(654)] = 20211,
  [SMALL_STATE(655)] = 20226,
  [SMALL_STATE(656)] = 20247,
  [SMALL_STATE(657)] = 20268,
  [SMALL_STATE(658)] = 20283,
  [SMALL_STATE(659)] = 20298,
  [SMALL_STATE(660)] = 20319,
  [SMALL_STATE(661)] = 20334,
  [SMALL_STATE(662)] = 20349,
  [SMALL_STATE(663)] = 20370,
  [SMALL_STATE(664)] = 20391,
  [SMALL_STATE(665)] = 20406,
  [SMALL_STATE(666)] = 20427,
  [SMALL_STATE(667)] = 20442,
  [SMALL_STATE(668)] = 20457,
  [SMALL_STATE(669)] = 20478,
  [SMALL_STATE(670)] = 20499,
  [SMALL_STATE(671)] = 20514,
  [SMALL_STATE(672)] = 20535,
  [SMALL_STATE(673)] = 20556,
  [SMALL_STATE(674)] = 20571,
  [SMALL_STATE(675)] = 20586,
  [SMALL_STATE(676)] = 20604,
  [SMALL_STATE(677)] = 20622,
  [SMALL_STATE(678)] = 20640,
  [SMALL_STATE(679)] = 20658,
  [SMALL_STATE(680)] = 20676,
  [SMALL_STATE(681)] = 20694,
  [SMALL_STATE(682)] = 20712,
  [SMALL_STATE(683)] = 20730,
  [SMALL_STATE(684)] = 20748,
  [SMALL_STATE(685)] = 20767,
  [SMALL_STATE(686)] = 20786,
  [SMALL_STATE(687)] = 20805,
  [SMALL_STATE(688)] = 20824,
  [SMALL_STATE(689)] = 20843,
  [SMALL_STATE(690)] = 20862,
  [SMALL_STATE(691)] = 20881,
  [SMALL_STATE(692)] = 20894,
  [SMALL_STATE(693)] = 20907,
  [SMALL_STATE(694)] = 20926,
  [SMALL_STATE(695)] = 20945,
  [SMALL_STATE(696)] = 20958,
  [SMALL_STATE(697)] = 20977,
  [SMALL_STATE(698)] = 20996,
  [SMALL_STATE(699)] = 21015,
  [SMALL_STATE(700)] = 21034,
  [SMALL_STATE(701)] = 21053,
  [SMALL_STATE(702)] = 21072,
  [SMALL_STATE(703)] = 21091,
  [SMALL_STATE(704)] = 21107,
  [SMALL_STATE(705)] = 21123,
  [SMALL_STATE(706)] = 21139,
  [SMALL_STATE(707)] = 21155,
  [SMALL_STATE(708)] = 21171,
  [SMALL_STATE(709)] = 21187,
  [SMALL_STATE(710)] = 21203,
  [SMALL_STATE(711)] = 21219,
  [SMALL_STATE(712)] = 21233,
  [SMALL_STATE(713)] = 21249,
  [SMALL_STATE(714)] = 21265,
  [SMALL_STATE(715)] = 21279,
  [SMALL_STATE(716)] = 21295,
  [SMALL_STATE(717)] = 21311,
  [SMALL_STATE(718)] = 21324,
  [SMALL_STATE(719)] = 21335,
  [SMALL_STATE(720)] = 21348,
  [SMALL_STATE(721)] = 21361,
  [SMALL_STATE(722)] = 21374,
  [SMALL_STATE(723)] = 21387,
  [SMALL_STATE(724)] = 21400,
  [SMALL_STATE(725)] = 21413,
  [SMALL_STATE(726)] = 21426,
  [SMALL_STATE(727)] = 21439,
  [SMALL_STATE(728)] = 21450,
  [SMALL_STATE(729)] = 21463,
  [SMALL_STATE(730)] = 21476,
  [SMALL_STATE(731)] = 21487,
  [SMALL_STATE(732)] = 21500,
  [SMALL_STATE(733)] = 21513,
  [SMALL_STATE(734)] = 21526,
  [SMALL_STATE(735)] = 21539,
  [SMALL_STATE(736)] = 21552,
  [SMALL_STATE(737)] = 21565,
  [SMALL_STATE(738)] = 21578,
  [SMALL_STATE(739)] = 21589,
  [SMALL_STATE(740)] = 21602,
  [SMALL_STATE(741)] = 21615,
  [SMALL_STATE(742)] = 21626,
  [SMALL_STATE(743)] = 21639,
  [SMALL_STATE(744)] = 21652,
  [SMALL_STATE(745)] = 21665,
  [SMALL_STATE(746)] = 21678,
  [SMALL_STATE(747)] = 21691,
  [SMALL_STATE(748)] = 21704,
  [SMALL_STATE(749)] = 21717,
  [SMALL_STATE(750)] = 21730,
  [SMALL_STATE(751)] = 21739,
  [SMALL_STATE(752)] = 21752,
  [SMALL_STATE(753)] = 21763,
  [SMALL_STATE(754)] = 21776,
  [SMALL_STATE(755)] = 21789,
  [SMALL_STATE(756)] = 21798,
  [SMALL_STATE(757)] = 21809,
  [SMALL_STATE(758)] = 21822,
  [SMALL_STATE(759)] = 21835,
  [SMALL_STATE(760)] = 21848,
  [SMALL_STATE(761)] = 21861,
  [SMALL_STATE(762)] = 21874,
  [SMALL_STATE(763)] = 21887,
  [SMALL_STATE(764)] = 21900,
  [SMALL_STATE(765)] = 21911,
  [SMALL_STATE(766)] = 21922,
  [SMALL_STATE(767)] = 21935,
  [SMALL_STATE(768)] = 21948,
  [SMALL_STATE(769)] = 21961,
  [SMALL_STATE(770)] = 21974,
  [SMALL_STATE(771)] = 21987,
  [SMALL_STATE(772)] = 22000,
  [SMALL_STATE(773)] = 22013,
  [SMALL_STATE(774)] = 22026,
  [SMALL_STATE(775)] = 22039,
  [SMALL_STATE(776)] = 22048,
  [SMALL_STATE(777)] = 22061,
  [SMALL_STATE(778)] = 22072,
  [SMALL_STATE(779)] = 22085,
  [SMALL_STATE(780)] = 22096,
  [SMALL_STATE(781)] = 22109,
  [SMALL_STATE(782)] = 22118,
  [SMALL_STATE(783)] = 22131,
  [SMALL_STATE(784)] = 22142,
  [SMALL_STATE(785)] = 22155,
  [SMALL_STATE(786)] = 22168,
  [SMALL_STATE(787)] = 22181,
  [SMALL_STATE(788)] = 22190,
  [SMALL_STATE(789)] = 22203,
  [SMALL_STATE(790)] = 22216,
  [SMALL_STATE(791)] = 22229,
  [SMALL_STATE(792)] = 22242,
  [SMALL_STATE(793)] = 22255,
  [SMALL_STATE(794)] = 22266,
  [SMALL_STATE(795)] = 22279,
  [SMALL_STATE(796)] = 22292,
  [SMALL_STATE(797)] = 22305,
  [SMALL_STATE(798)] = 22316,
  [SMALL_STATE(799)] = 22329,
  [SMALL_STATE(800)] = 22342,
  [SMALL_STATE(801)] = 22355,
  [SMALL_STATE(802)] = 22368,
  [SMALL_STATE(803)] = 22379,
  [SMALL_STATE(804)] = 22392,
  [SMALL_STATE(805)] = 22405,
  [SMALL_STATE(806)] = 22416,
  [SMALL_STATE(807)] = 22429,
  [SMALL_STATE(808)] = 22442,
  [SMALL_STATE(809)] = 22455,
  [SMALL_STATE(810)] = 22468,
  [SMALL_STATE(811)] = 22479,
  [SMALL_STATE(812)] = 22490,
  [SMALL_STATE(813)] = 22503,
  [SMALL_STATE(814)] = 22516,
  [SMALL_STATE(815)] = 22529,
  [SMALL_STATE(816)] = 22542,
  [SMALL_STATE(817)] = 22553,
  [SMALL_STATE(818)] = 22566,
  [SMALL_STATE(819)] = 22579,
  [SMALL_STATE(820)] = 22592,
  [SMALL_STATE(821)] = 22602,
  [SMALL_STATE(822)] = 22612,
  [SMALL_STATE(823)] = 22622,
  [SMALL_STATE(824)] = 22632,
  [SMALL_STATE(825)] = 22642,
  [SMALL_STATE(826)] = 22652,
  [SMALL_STATE(827)] = 22662,
  [SMALL_STATE(828)] = 22672,
  [SMALL_STATE(829)] = 22682,
  [SMALL_STATE(830)] = 22692,
  [SMALL_STATE(831)] = 22702,
  [SMALL_STATE(832)] = 22712,
  [SMALL_STATE(833)] = 22722,
  [SMALL_STATE(834)] = 22732,
  [SMALL_STATE(835)] = 22742,
  [SMALL_STATE(836)] = 22752,
  [SMALL_STATE(837)] = 22762,
  [SMALL_STATE(838)] = 22772,
  [SMALL_STATE(839)] = 22782,
  [SMALL_STATE(840)] = 22792,
  [SMALL_STATE(841)] = 22802,
  [SMALL_STATE(842)] = 22812,
  [SMALL_STATE(843)] = 22822,
  [SMALL_STATE(844)] = 22832,
  [SMALL_STATE(845)] = 22842,
  [SMALL_STATE(846)] = 22852,
  [SMALL_STATE(847)] = 22862,
  [SMALL_STATE(848)] = 22872,
  [SMALL_STATE(849)] = 22882,
  [SMALL_STATE(850)] = 22892,
  [SMALL_STATE(851)] = 22902,
  [SMALL_STATE(852)] = 22912,
  [SMALL_STATE(853)] = 22922,
  [SMALL_STATE(854)] = 22932,
  [SMALL_STATE(855)] = 22942,
  [SMALL_STATE(856)] = 22952,
  [SMALL_STATE(857)] = 22962,
  [SMALL_STATE(858)] = 22972,
  [SMALL_STATE(859)] = 22982,
  [SMALL_STATE(860)] = 22992,
  [SMALL_STATE(861)] = 23002,
  [SMALL_STATE(862)] = 23012,
  [SMALL_STATE(863)] = 23022,
  [SMALL_STATE(864)] = 23032,
  [SMALL_STATE(865)] = 23042,
  [SMALL_STATE(866)] = 23052,
  [SMALL_STATE(867)] = 23060,
  [SMALL_STATE(868)] = 23068,
  [SMALL_STATE(869)] = 23078,
  [SMALL_STATE(870)] = 23088,
  [SMALL_STATE(871)] = 23098,
  [SMALL_STATE(872)] = 23108,
  [SMALL_STATE(873)] = 23118,
  [SMALL_STATE(874)] = 23128,
  [SMALL_STATE(875)] = 23136,
  [SMALL_STATE(876)] = 23146,
  [SMALL_STATE(877)] = 23156,
  [SMALL_STATE(878)] = 23166,
  [SMALL_STATE(879)] = 23176,
  [SMALL_STATE(880)] = 23184,
  [SMALL_STATE(881)] = 23192,
  [SMALL_STATE(882)] = 23202,
  [SMALL_STATE(883)] = 23212,
  [SMALL_STATE(884)] = 23220,
  [SMALL_STATE(885)] = 23230,
  [SMALL_STATE(886)] = 23240,
  [SMALL_STATE(887)] = 23250,
  [SMALL_STATE(888)] = 23260,
  [SMALL_STATE(889)] = 23270,
  [SMALL_STATE(890)] = 23278,
  [SMALL_STATE(891)] = 23288,
  [SMALL_STATE(892)] = 23296,
  [SMALL_STATE(893)] = 23304,
  [SMALL_STATE(894)] = 23314,
  [SMALL_STATE(895)] = 23324,
  [SMALL_STATE(896)] = 23334,
  [SMALL_STATE(897)] = 23342,
  [SMALL_STATE(898)] = 23352,
  [SMALL_STATE(899)] = 23362,
  [SMALL_STATE(900)] = 23372,
  [SMALL_STATE(901)] = 23382,
  [SMALL_STATE(902)] = 23392,
  [SMALL_STATE(903)] = 23402,
  [SMALL_STATE(904)] = 23412,
  [SMALL_STATE(905)] = 23422,
  [SMALL_STATE(906)] = 23430,
  [SMALL_STATE(907)] = 23440,
  [SMALL_STATE(908)] = 23450,
  [SMALL_STATE(909)] = 23457,
  [SMALL_STATE(910)] = 23464,
  [SMALL_STATE(911)] = 23471,
  [SMALL_STATE(912)] = 23478,
  [SMALL_STATE(913)] = 23485,
  [SMALL_STATE(914)] = 23492,
  [SMALL_STATE(915)] = 23499,
  [SMALL_STATE(916)] = 23506,
  [SMALL_STATE(917)] = 23513,
  [SMALL_STATE(918)] = 23520,
  [SMALL_STATE(919)] = 23527,
  [SMALL_STATE(920)] = 23534,
  [SMALL_STATE(921)] = 23541,
  [SMALL_STATE(922)] = 23548,
  [SMALL_STATE(923)] = 23555,
  [SMALL_STATE(924)] = 23562,
  [SMALL_STATE(925)] = 23569,
  [SMALL_STATE(926)] = 23576,
  [SMALL_STATE(927)] = 23583,
  [SMALL_STATE(928)] = 23590,
  [SMALL_STATE(929)] = 23597,
  [SMALL_STATE(930)] = 23604,
  [SMALL_STATE(931)] = 23611,
  [SMALL_STATE(932)] = 23618,
  [SMALL_STATE(933)] = 23625,
  [SMALL_STATE(934)] = 23632,
  [SMALL_STATE(935)] = 23639,
  [SMALL_STATE(936)] = 23646,
  [SMALL_STATE(937)] = 23653,
  [SMALL_STATE(938)] = 23660,
  [SMALL_STATE(939)] = 23667,
  [SMALL_STATE(940)] = 23674,
  [SMALL_STATE(941)] = 23681,
  [SMALL_STATE(942)] = 23688,
  [SMALL_STATE(943)] = 23695,
  [SMALL_STATE(944)] = 23702,
  [SMALL_STATE(945)] = 23709,
  [SMALL_STATE(946)] = 23716,
  [SMALL_STATE(947)] = 23723,
  [SMALL_STATE(948)] = 23730,
  [SMALL_STATE(949)] = 23737,
  [SMALL_STATE(950)] = 23744,
  [SMALL_STATE(951)] = 23751,
  [SMALL_STATE(952)] = 23758,
  [SMALL_STATE(953)] = 23765,
  [SMALL_STATE(954)] = 23772,
  [SMALL_STATE(955)] = 23779,
  [SMALL_STATE(956)] = 23786,
  [SMALL_STATE(957)] = 23793,
  [SMALL_STATE(958)] = 23800,
  [SMALL_STATE(959)] = 23807,
  [SMALL_STATE(960)] = 23814,
  [SMALL_STATE(961)] = 23821,
  [SMALL_STATE(962)] = 23828,
  [SMALL_STATE(963)] = 23835,
  [SMALL_STATE(964)] = 23842,
  [SMALL_STATE(965)] = 23849,
  [SMALL_STATE(966)] = 23856,
  [SMALL_STATE(967)] = 23863,
  [SMALL_STATE(968)] = 23870,
  [SMALL_STATE(969)] = 23877,
  [SMALL_STATE(970)] = 23884,
  [SMALL_STATE(971)] = 23891,
  [SMALL_STATE(972)] = 23898,
  [SMALL_STATE(973)] = 23905,
  [SMALL_STATE(974)] = 23912,
  [SMALL_STATE(975)] = 23919,
  [SMALL_STATE(976)] = 23926,
  [SMALL_STATE(977)] = 23933,
  [SMALL_STATE(978)] = 23940,
  [SMALL_STATE(979)] = 23947,
  [SMALL_STATE(980)] = 23954,
  [SMALL_STATE(981)] = 23961,
  [SMALL_STATE(982)] = 23968,
  [SMALL_STATE(983)] = 23975,
  [SMALL_STATE(984)] = 23982,
  [SMALL_STATE(985)] = 23989,
  [SMALL_STATE(986)] = 23996,
  [SMALL_STATE(987)] = 24003,
  [SMALL_STATE(988)] = 24010,
  [SMALL_STATE(989)] = 24017,
  [SMALL_STATE(990)] = 24024,
  [SMALL_STATE(991)] = 24031,
  [SMALL_STATE(992)] = 24038,
  [SMALL_STATE(993)] = 24045,
  [SMALL_STATE(994)] = 24052,
  [SMALL_STATE(995)] = 24059,
  [SMALL_STATE(996)] = 24066,
  [SMALL_STATE(997)] = 24073,
  [SMALL_STATE(998)] = 24080,
  [SMALL_STATE(999)] = 24087,
  [SMALL_STATE(1000)] = 24094,
  [SMALL_STATE(1001)] = 24101,
  [SMALL_STATE(1002)] = 24108,
  [SMALL_STATE(1003)] = 24115,
  [SMALL_STATE(1004)] = 24122,
  [SMALL_STATE(1005)] = 24129,
  [SMALL_STATE(1006)] = 24136,
  [SMALL_STATE(1007)] = 24143,
  [SMALL_STATE(1008)] = 24150,
  [SMALL_STATE(1009)] = 24157,
  [SMALL_STATE(1010)] = 24164,
  [SMALL_STATE(1011)] = 24171,
  [SMALL_STATE(1012)] = 24178,
  [SMALL_STATE(1013)] = 24185,
  [SMALL_STATE(1014)] = 24192,
  [SMALL_STATE(1015)] = 24199,
  [SMALL_STATE(1016)] = 24206,
  [SMALL_STATE(1017)] = 24213,
  [SMALL_STATE(1018)] = 24220,
  [SMALL_STATE(1019)] = 24227,
  [SMALL_STATE(1020)] = 24234,
  [SMALL_STATE(1021)] = 24241,
  [SMALL_STATE(1022)] = 24248,
  [SMALL_STATE(1023)] = 24255,
  [SMALL_STATE(1024)] = 24262,
  [SMALL_STATE(1025)] = 24269,
  [SMALL_STATE(1026)] = 24276,
  [SMALL_STATE(1027)] = 24283,
  [SMALL_STATE(1028)] = 24290,
  [SMALL_STATE(1029)] = 24297,
  [SMALL_STATE(1030)] = 24304,
  [SMALL_STATE(1031)] = 24311,
  [SMALL_STATE(1032)] = 24318,
  [SMALL_STATE(1033)] = 24325,
  [SMALL_STATE(1034)] = 24332,
  [SMALL_STATE(1035)] = 24339,
  [SMALL_STATE(1036)] = 24346,
  [SMALL_STATE(1037)] = 24353,
  [SMALL_STATE(1038)] = 24360,
  [SMALL_STATE(1039)] = 24367,
  [SMALL_STATE(1040)] = 24374,
  [SMALL_STATE(1041)] = 24381,
  [SMALL_STATE(1042)] = 24388,
  [SMALL_STATE(1043)] = 24395,
  [SMALL_STATE(1044)] = 24402,
  [SMALL_STATE(1045)] = 24409,
  [SMALL_STATE(1046)] = 24416,
  [SMALL_STATE(1047)] = 24423,
  [SMALL_STATE(1048)] = 24430,
  [SMALL_STATE(1049)] = 24437,
  [SMALL_STATE(1050)] = 24444,
  [SMALL_STATE(1051)] = 24451,
  [SMALL_STATE(1052)] = 24458,
  [SMALL_STATE(1053)] = 24465,
  [SMALL_STATE(1054)] = 24472,
  [SMALL_STATE(1055)] = 24479,
  [SMALL_STATE(1056)] = 24486,
  [SMALL_STATE(1057)] = 24493,
  [SMALL_STATE(1058)] = 24500,
  [SMALL_STATE(1059)] = 24507,
  [SMALL_STATE(1060)] = 24514,
  [SMALL_STATE(1061)] = 24521,
  [SMALL_STATE(1062)] = 24528,
  [SMALL_STATE(1063)] = 24535,
  [SMALL_STATE(1064)] = 24542,
  [SMALL_STATE(1065)] = 24549,
  [SMALL_STATE(1066)] = 24556,
  [SMALL_STATE(1067)] = 24563,
  [SMALL_STATE(1068)] = 24570,
  [SMALL_STATE(1069)] = 24577,
  [SMALL_STATE(1070)] = 24584,
  [SMALL_STATE(1071)] = 24591,
  [SMALL_STATE(1072)] = 24598,
  [SMALL_STATE(1073)] = 24605,
  [SMALL_STATE(1074)] = 24612,
  [SMALL_STATE(1075)] = 24619,
  [SMALL_STATE(1076)] = 24626,
  [SMALL_STATE(1077)] = 24633,
  [SMALL_STATE(1078)] = 24640,
  [SMALL_STATE(1079)] = 24647,
  [SMALL_STATE(1080)] = 24654,
  [SMALL_STATE(1081)] = 24661,
  [SMALL_STATE(1082)] = 24668,
  [SMALL_STATE(1083)] = 24675,
  [SMALL_STATE(1084)] = 24682,
  [SMALL_STATE(1085)] = 24689,
  [SMALL_STATE(1086)] = 24696,
  [SMALL_STATE(1087)] = 24703,
  [SMALL_STATE(1088)] = 24710,
  [SMALL_STATE(1089)] = 24717,
  [SMALL_STATE(1090)] = 24724,
  [SMALL_STATE(1091)] = 24731,
  [SMALL_STATE(1092)] = 24738,
  [SMALL_STATE(1093)] = 24745,
  [SMALL_STATE(1094)] = 24752,
  [SMALL_STATE(1095)] = 24759,
  [SMALL_STATE(1096)] = 24766,
  [SMALL_STATE(1097)] = 24773,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(956),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1083),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(821),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(705),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(760),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(893),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(563),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(936),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(710),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1085),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(715),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(707),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(899),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1092),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(446),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(841),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1093),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(967),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1096),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(898),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1097),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(498),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2, .production_id = 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1044),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1041),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(925),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1038),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1034),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(844),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1022),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(834),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1019),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(849),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(823),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1088),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(837),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1095),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1094),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 4),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(943),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(708),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(843),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1091),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(954),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, .production_id = 4),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(983),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(1044),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(925),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(1038),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(1034),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(844),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(1022),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(834),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(1019),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 2, .production_id = 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(990),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 2, .production_id = 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(994),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(922),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1062),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(833),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(831),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(991),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 3, .production_id = 4),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 3, .production_id = 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 7, .production_id = 28),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 7, .production_id = 28),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__class_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(990),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(922),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(1062),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(833),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(1022),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(831),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(991),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1011),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(993),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1076),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1069),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(830),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1012),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 6, .production_id = 28),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 6, .production_id = 28),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 4, .production_id = 4),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 4, .production_id = 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 3, .production_id = 2),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 3, .production_id = 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 5, .production_id = 14),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 5, .production_id = 14),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1000),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 6, .production_id = 14),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 6, .production_id = 14),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(1011),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(1076),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(1069),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(830),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(1012),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_item, 3, .production_id = 6),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_item, 3, .production_id = 6),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1073),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1065),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_item, 5, .production_id = 40),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_item, 5, .production_id = 40),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_item, 4, .production_id = 27),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_item, 4, .production_id = 27),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_modifiers, 1),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_modifiers, 1),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1002),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1007),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(1073),
  [522] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(1065),
  [525] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(98),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(145),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_type, 1),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_type, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(861),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1020),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1018),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [547] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(1002),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(1007),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(102),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(203),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 5),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_identifier, 1, .production_id = 5),
  [565] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(1020),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(1018),
  [571] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(107),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(223),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__range_value, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier_or_primitive, 1),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_identifier_or_primitive, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1010),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(958),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(865),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_body_statements_repeat1, 2),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_statements_repeat1, 2), SHIFT_REPEAT(967),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_statements_repeat1, 2), SHIFT_REPEAT(825),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_statements_repeat1, 2), SHIFT_REPEAT(821),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_body_statements_repeat1, 2),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_statements_repeat1, 2), SHIFT_REPEAT(926),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_type, 2, .production_id = 16),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_type, 2, .production_id = 16),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enum_type, 2, .production_id = 19),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__enum_type, 2, .production_id = 19),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(904),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body_statements, 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body_statements, 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enum_type, 1, .production_id = 9),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__enum_type, 1, .production_id = 9),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1006),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 5),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 5),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 5),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 5),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 4),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 4),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 4),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 4),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 3),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 3),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_type, 1, .production_id = 12),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_type, 1, .production_id = 12),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__range_type, 3, .production_id = 32),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__range_type, 3, .production_id = 32),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enum_type, 2, .production_id = 9),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__enum_type, 2, .production_id = 9),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_type, 3),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__record_type, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_type, 2),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_type, 2),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pointer_type, 2, .production_id = 17),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pointer_type, 2, .production_id = 17),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_type, 2),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__record_type, 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_type, 4),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__record_type, 4),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sized, 3),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sized, 3),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifiers, 1),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility_modifiers, 1),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_return_type, 2),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_return_type, 2),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_modifiers, 1),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_modifiers, 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enum_type, 3, .production_id = 19),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__enum_type, 3, .production_id = 19),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 1, .production_id = 13),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 1, .production_id = 13),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute_modifiers, 2, .production_id = 31),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute_modifiers, 2, .production_id = 31),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inverse_modifiers, 2, .production_id = 30),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inverse_modifiers, 2, .production_id = 30),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_type, 6, .production_id = 41),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_type, 6, .production_id = 41),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier_or_primitive, 2),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_identifier_or_primitive, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 2),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 1),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type, 1),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 1, .production_id = 11),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_type, 1, .production_id = 11),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_type, 1, .production_id = 10),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_type, 1, .production_id = 10),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_type, 1, .production_id = 8),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_type, 1, .production_id = 8),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 1, .production_id = 7),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 1, .production_id = 7),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 2),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 3),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 3),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_type, 3, .production_id = 29),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__set_type, 3, .production_id = 29),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_type, 3, .production_id = 16),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_type, 3, .production_id = 16),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(891),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(840),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_variable, 3, .production_id = 6),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_variable, 3, .production_id = 6),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(913),
  [807] = {.entry = {.count = 1, .reusable = false}}, SHIFT(914),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 5),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 5),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 4),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 4),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_variable, 4, .production_id = 27),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_variable, 4, .production_id = 27),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1024),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(878),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 3),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 3),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_modifiers, 1),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_modifiers, 1),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_item, 3),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uses_item, 3),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(930),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_modifiers_repeat1, 2),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_modifiers_repeat1, 2),
  [861] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_modifiers_repeat1, 2), SHIFT_REPEAT(262),
  [864] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_modifiers_repeat1, 2), SHIFT_REPEAT(469),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_item, 2),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uses_item, 2),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_item, 5, .production_id = 4),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_item, 5, .production_id = 4),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1036),
  [881] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(913),
  [884] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(914),
  [887] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(267),
  [890] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(570),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(907),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_item, 4, .production_id = 2),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_item, 4, .production_id = 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uses_item_repeat1, 2),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uses_item_repeat1, 2),
  [905] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uses_item_repeat1, 2), SHIFT_REPEAT(930),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(962),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [916] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uses_item_repeat1, 2), SHIFT_REPEAT(962),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(902),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(813),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(852),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 5, .production_id = 39),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 5, .production_id = 39),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type_item, 4, .production_id = 23),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_type_item, 4, .production_id = 23),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_item, 4, .production_id = 2),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_item, 4, .production_id = 2),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 7, .production_id = 39),
  [955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 7, .production_id = 39),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_item, 4, .production_id = 22),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_item, 4, .production_id = 22),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_item, 4, .production_id = 24),
  [963] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_item, 4, .production_id = 24),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_item, 4, .production_id = 25),
  [967] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_item, 4, .production_id = 25),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 4, .production_id = 4),
  [971] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 4, .production_id = 4),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_modifiers_external, 6, .production_id = 42),
  [975] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_modifiers_external, 6, .production_id = 42),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1048),
  [979] = {.entry = {.count = 1, .reusable = false}}, SHIFT(523),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_item, 1, .production_id = 3),
  [983] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_item, 1, .production_id = 3),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retyped_item, 4, .production_id = 2),
  [987] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retyped_item, 4, .production_id = 2),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_item, 6, .production_id = 40),
  [991] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_item, 6, .production_id = 40),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 6, .production_id = 4),
  [995] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 6, .production_id = 4),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(762),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 6, .production_id = 39),
  [1009] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 6, .production_id = 39),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_item, 6, .production_id = 4),
  [1013] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_item, 6, .production_id = 4),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 6, .production_id = 26),
  [1017] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 6, .production_id = 26),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type_item, 4, .production_id = 20),
  [1021] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type_item, 4, .production_id = 20),
  [1023] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uses_item_repeat1, 2), SHIFT_REPEAT(1058),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 3, .production_id = 2),
  [1028] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 3, .production_id = 2),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 4, .production_id = 2),
  [1032] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 4, .production_id = 2),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_item, 2, .production_id = 1),
  [1036] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_item, 2, .production_id = 1),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_definition, 2),
  [1040] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_definition, 2),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1058),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 4, .production_id = 26),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 4, .production_id = 26),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_modifiers, 1),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forward_modifiers, 1),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_item, 4, .production_id = 21),
  [1054] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_item, 4, .production_id = 21),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_modifiers, 1),
  [1060] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_modifiers, 1),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_item, 5, .production_id = 2),
  [1064] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_item, 5, .production_id = 2),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 5, .production_id = 4),
  [1068] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 5, .production_id = 4),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_item, 5, .production_id = 38),
  [1072] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_item, 5, .production_id = 38),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_item, 5, .production_id = 37),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_item, 5, .production_id = 37),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_item, 5, .production_id = 4),
  [1080] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_item, 5, .production_id = 4),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type_item, 5, .production_id = 36),
  [1084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_type_item, 5, .production_id = 36),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_item, 5, .production_id = 35),
  [1088] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_item, 5, .production_id = 35),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 5, .production_id = 26),
  [1092] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 5, .production_id = 26),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_item, 5, .production_id = 34),
  [1096] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_item, 5, .production_id = 34),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type_item, 5, .production_id = 33),
  [1100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type_item, 5, .production_id = 33),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 5, .production_id = 2),
  [1104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 5, .production_id = 2),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retyped_item, 5, .production_id = 4),
  [1108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retyped_item, 5, .production_id = 4),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_item, 4, .production_id = 6),
  [1112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_item, 4, .production_id = 6),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_item, 5, .production_id = 27),
  [1116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_item, 5, .production_id = 27),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__range_value, 1),
  [1122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1072),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(827),
  [1130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [1132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [1134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [1136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [1140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(666),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(966),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(923),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(964),
  [1152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(872),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(960),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1059),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(949),
  [1160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [1166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uses_item_repeat1, 2), SHIFT_REPEAT(949),
  [1169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [1171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(916),
  [1173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(997),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(832),
  [1177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(912),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(647),
  [1181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1070),
  [1183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1016),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(829),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1068),
  [1189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [1197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 6),
  [1199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_variable_list, 1),
  [1203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_variable_list_repeat1, 2), SHIFT_REPEAT(1072),
  [1206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_record_variable_list_repeat1, 2),
  [1208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_variable_list_repeat1, 2), SHIFT_REPEAT(827),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1030),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1025),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(789),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_statement, 1),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_statement, 1),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(735),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(776),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(746),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 27),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 27),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_derived, 3, .production_id = 17),
  [1321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_derived, 3, .production_id = 17),
  [1323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_variable, 5, .production_id = 27),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_variable, 5, .production_id = 27),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_variable, 4, .production_id = 6),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_variable, 4, .production_id = 6),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1028),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 1, .production_id = 15),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 2, .production_id = 2),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2),
  [1365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2), SHIFT_REPEAT(680),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1, .production_id = 1),
  [1372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1056),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1053),
  [1376] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(766),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(720),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(722),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(724),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(635),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_literal_repeat1, 2), SHIFT_REPEAT(864),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_literal_repeat1, 2),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(731),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reference_modifiers_repeat1, 2), SHIFT_REPEAT(975),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reference_modifiers_repeat1, 2),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(733),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(787),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(788),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4),
  [1474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2),
  [1476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2), SHIFT_REPEAT(716),
  [1479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_attribute_list, 5),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(815),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(745),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(757),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(766),
  [1526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_attribute_list_repeat1, 2),
  [1544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_attribute_list_repeat1, 2), SHIFT_REPEAT(886),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(947),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_attribute_list, 4),
  [1557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(771),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 6),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(800),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [1591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_attribute_list, 3),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(775),
  [1595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(784),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(794),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(817),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(807),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(819),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1066),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(836),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1090),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(847),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1084),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(856),
  [1707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [1715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter_declaration, 4, .production_id = 27),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(973),
  [1721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter_declaration, 3, .production_id = 6),
  [1723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 2, .production_id = 15),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_redefine_value, 2),
  [1729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_attribute, 3, .production_id = 15),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 2),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(948),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(985),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_modifiers, 3),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(895),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(871),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1079),
  [1825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, .production_id = 2),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_derived, 2, .production_id = 18),
  [1835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_modifiers, 4),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(890),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(918),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(988),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(941),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_modifiers, 5),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(750),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(826),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(820),
  [1881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 4),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(910),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(987),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1051),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(957),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1070),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1045),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_modifiers, 1),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [1963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter_modifiers, 1),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(980),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(767),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(974),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(919),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(937),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(944),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(946),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [2013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [2017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 2, .production_id = 1),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(908),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(981),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(855),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(982),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(850),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1027),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [2065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [2067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [2069] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [2073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [2075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [2079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1067),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1071),
  [2083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1074),
  [2087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1077),
  [2089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [2091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [2097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1086),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
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
