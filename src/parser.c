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
#define STATE_COUNT 1121
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 166
#define ALIAS_COUNT 1
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 38

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
  sym_function_signature_item = 97,
  sym_function_modifiers = 98,
  sym_forward_modifiers = 99,
  sym__function_definition = 100,
  sym_function_modifiers_external = 101,
  sym_parameter_list = 102,
  sym_parameter = 103,
  sym__parameter_typed = 104,
  sym__parameter_untyped = 105,
  sym_parameter_modifiers = 106,
  sym_function_return_type = 107,
  sym_function_body_statements = 108,
  sym_variable_declaration = 109,
  sym_statement = 110,
  sym_declaration_statement = 111,
  sym_inverse_modifiers = 112,
  sym_absolute_modifiers = 113,
  sym__override_modifiers = 114,
  sym_visibility_modifiers = 115,
  sym__enum_type = 116,
  sym_enum_type = 117,
  sym_enum_item = 118,
  sym_enum_derived = 119,
  sym_enum_modifiers = 120,
  sym_enum_variant_list = 121,
  sym_enum_variant = 122,
  sym_enum_variant_redefine_value = 123,
  sym__set_type = 124,
  sym_set_type = 125,
  sym_set_item = 126,
  sym__pointer_type = 127,
  sym_pointer_type = 128,
  sym_pointer_type_item = 129,
  sym__record_type = 130,
  sym_record_type = 131,
  sym_record_item = 132,
  sym_record_derived = 133,
  sym_record_variable_list = 134,
  sym_record_variable = 135,
  sym__range_type = 136,
  sym_range_type = 137,
  sym__range_value = 138,
  sym_range_item = 139,
  sym__array_type = 140,
  sym_array_type = 141,
  sym_array_item = 142,
  sym_annotation = 143,
  sym_annotation_attribute_list = 144,
  sym_annotation_attribute = 145,
  sym__inner_annotation = 146,
  sym__literal = 147,
  sym__string_literal = 148,
  sym_string_literal = 149,
  sym_text_literal = 150,
  sym_integer_literal = 151,
  sym_boolean_literal = 152,
  aux_sym_module_repeat1 = 153,
  aux_sym__class_repeat1 = 154,
  aux_sym_uses_item_repeat1 = 155,
  aux_sym_variable_modifiers_repeat1 = 156,
  aux_sym_reference_modifiers_repeat1 = 157,
  aux_sym_function_modifiers_repeat1 = 158,
  aux_sym_parameter_list_repeat1 = 159,
  aux_sym_function_body_statements_repeat1 = 160,
  aux_sym_enum_variant_list_repeat1 = 161,
  aux_sym_record_variable_list_repeat1 = 162,
  aux_sym_annotation_attribute_list_repeat1 = 163,
  aux_sym__string_literal_repeat1 = 164,
  aux_sym_text_literal_repeat1 = 165,
  alias_sym_type_identifier = 166,
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
  [sym_function_signature_item] = "function_signature_item",
  [sym_function_modifiers] = "function_modifiers",
  [sym_forward_modifiers] = "forward_modifiers",
  [sym__function_definition] = "_function_definition",
  [sym_function_modifiers_external] = "function_modifiers_external",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym__parameter_typed] = "_parameter_typed",
  [sym__parameter_untyped] = "_parameter_untyped",
  [sym_parameter_modifiers] = "parameter_modifiers",
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
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
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
  [sym_function_signature_item] = sym_function_signature_item,
  [sym_function_modifiers] = sym_function_modifiers,
  [sym_forward_modifiers] = sym_forward_modifiers,
  [sym__function_definition] = sym__function_definition,
  [sym_function_modifiers_external] = sym_function_modifiers_external,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym__parameter_typed] = sym__parameter_typed,
  [sym__parameter_untyped] = sym__parameter_untyped,
  [sym_parameter_modifiers] = sym_parameter_modifiers,
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
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
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
  [sym_function_signature_item] = {
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
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter_typed] = {
    .visible = false,
    .named = true,
  },
  [sym__parameter_untyped] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter_modifiers] = {
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
  [aux_sym_parameter_list_repeat1] = {
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
  field_size = 10,
  field_type = 11,
  field_variable = 12,
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
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 1},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 2},
  [13] = {.index = 17, .length = 4},
  [14] = {.index = 21, .length = 1},
  [15] = {.index = 22, .length = 1},
  [16] = {.index = 23, .length = 1},
  [17] = {.index = 24, .length = 2},
  [18] = {.index = 26, .length = 3},
  [19] = {.index = 29, .length = 2},
  [20] = {.index = 31, .length = 2},
  [21] = {.index = 33, .length = 3},
  [22] = {.index = 36, .length = 3},
  [23] = {.index = 39, .length = 1},
  [24] = {.index = 40, .length = 2},
  [25] = {.index = 42, .length = 4},
  [26] = {.index = 46, .length = 1},
  [27] = {.index = 47, .length = 1},
  [28] = {.index = 48, .length = 1},
  [29] = {.index = 49, .length = 2},
  [30] = {.index = 51, .length = 3},
  [31] = {.index = 54, .length = 2},
  [32] = {.index = 56, .length = 2},
  [33] = {.index = 58, .length = 3},
  [34] = {.index = 61, .length = 3},
  [35] = {.index = 64, .length = 2},
  [36] = {.index = 66, .length = 2},
  [37] = {.index = 68, .length = 2},
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
    {field_body, 0, .inherited = true},
    {field_derived, 0, .inherited = true},
  [10] =
    {field_body, 0},
  [11] =
    {field_enum_type, 0, .inherited = true},
  [12] =
    {field_type, 0, .inherited = true},
  [13] =
    {field_begin, 0, .inherited = true},
    {field_end, 0, .inherited = true},
  [15] =
    {field_size, 0, .inherited = true},
    {field_type, 0, .inherited = true},
  [17] =
    {field_derived, 2},
    {field_derived, 3},
    {field_derived, 4},
    {field_name, 1},
  [21] =
    {field_name, 0},
  [22] =
    {field_type, 1},
  [23] =
    {field_type, 0},
  [24] =
    {field_body, 1},
    {field_derived, 0},
  [26] =
    {field_body, 3, .inherited = true},
    {field_derived, 3, .inherited = true},
    {field_name, 1},
  [29] =
    {field_enum_type, 3, .inherited = true},
    {field_name, 1},
  [31] =
    {field_name, 1},
    {field_type, 3, .inherited = true},
  [33] =
    {field_begin, 3, .inherited = true},
    {field_end, 3, .inherited = true},
    {field_name, 1},
  [36] =
    {field_name, 1},
    {field_size, 3, .inherited = true},
    {field_type, 3, .inherited = true},
  [39] =
    {field_name, 0, .inherited = true},
  [40] =
    {field_name, 1},
    {field_type, 3},
  [42] =
    {field_derived, 3},
    {field_derived, 4},
    {field_derived, 5},
    {field_name, 2},
  [46] =
    {field_enum_type, 1},
  [47] =
    {field_backref, 1},
  [48] =
    {field_variable, 1},
  [49] =
    {field_begin, 0},
    {field_end, 2},
  [51] =
    {field_body, 4, .inherited = true},
    {field_derived, 4, .inherited = true},
    {field_name, 2},
  [54] =
    {field_enum_type, 4, .inherited = true},
    {field_name, 2},
  [56] =
    {field_name, 2},
    {field_type, 4, .inherited = true},
  [58] =
    {field_begin, 4, .inherited = true},
    {field_end, 4, .inherited = true},
    {field_name, 2},
  [61] =
    {field_name, 2},
    {field_size, 4, .inherited = true},
    {field_type, 4, .inherited = true},
  [64] =
    {field_name, 2},
    {field_type, 4},
  [66] =
    {field_size, 2},
    {field_type, 5},
  [68] =
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
  [4] = 2,
  [5] = 3,
  [6] = 3,
  [7] = 2,
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 12,
  [16] = 8,
  [17] = 14,
  [18] = 14,
  [19] = 11,
  [20] = 11,
  [21] = 21,
  [22] = 22,
  [23] = 9,
  [24] = 8,
  [25] = 25,
  [26] = 26,
  [27] = 25,
  [28] = 21,
  [29] = 26,
  [30] = 22,
  [31] = 26,
  [32] = 22,
  [33] = 21,
  [34] = 25,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 42,
  [44] = 38,
  [45] = 39,
  [46] = 40,
  [47] = 41,
  [48] = 37,
  [49] = 37,
  [50] = 39,
  [51] = 40,
  [52] = 52,
  [53] = 42,
  [54] = 54,
  [55] = 41,
  [56] = 56,
  [57] = 57,
  [58] = 38,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 61,
  [63] = 60,
  [64] = 60,
  [65] = 61,
  [66] = 61,
  [67] = 60,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 69,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 68,
  [77] = 77,
  [78] = 78,
  [79] = 70,
  [80] = 77,
  [81] = 78,
  [82] = 75,
  [83] = 74,
  [84] = 73,
  [85] = 72,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 89,
  [92] = 92,
  [93] = 87,
  [94] = 86,
  [95] = 88,
  [96] = 96,
  [97] = 90,
  [98] = 86,
  [99] = 96,
  [100] = 92,
  [101] = 101,
  [102] = 102,
  [103] = 90,
  [104] = 104,
  [105] = 88,
  [106] = 106,
  [107] = 87,
  [108] = 89,
  [109] = 109,
  [110] = 110,
  [111] = 92,
  [112] = 102,
  [113] = 113,
  [114] = 109,
  [115] = 96,
  [116] = 101,
  [117] = 104,
  [118] = 106,
  [119] = 119,
  [120] = 120,
  [121] = 109,
  [122] = 122,
  [123] = 119,
  [124] = 110,
  [125] = 113,
  [126] = 102,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 120,
  [133] = 101,
  [134] = 106,
  [135] = 104,
  [136] = 122,
  [137] = 106,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 113,
  [142] = 119,
  [143] = 101,
  [144] = 120,
  [145] = 145,
  [146] = 102,
  [147] = 147,
  [148] = 129,
  [149] = 128,
  [150] = 110,
  [151] = 127,
  [152] = 104,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 119,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 110,
  [166] = 104,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 147,
  [173] = 106,
  [174] = 174,
  [175] = 175,
  [176] = 102,
  [177] = 177,
  [178] = 122,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 127,
  [183] = 129,
  [184] = 184,
  [185] = 139,
  [186] = 186,
  [187] = 140,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 128,
  [192] = 158,
  [193] = 170,
  [194] = 181,
  [195] = 189,
  [196] = 184,
  [197] = 153,
  [198] = 190,
  [199] = 163,
  [200] = 140,
  [201] = 110,
  [202] = 147,
  [203] = 188,
  [204] = 162,
  [205] = 138,
  [206] = 156,
  [207] = 102,
  [208] = 106,
  [209] = 104,
  [210] = 159,
  [211] = 119,
  [212] = 186,
  [213] = 174,
  [214] = 139,
  [215] = 167,
  [216] = 157,
  [217] = 155,
  [218] = 164,
  [219] = 161,
  [220] = 168,
  [221] = 101,
  [222] = 169,
  [223] = 179,
  [224] = 171,
  [225] = 145,
  [226] = 175,
  [227] = 154,
  [228] = 180,
  [229] = 177,
  [230] = 157,
  [231] = 169,
  [232] = 189,
  [233] = 153,
  [234] = 188,
  [235] = 138,
  [236] = 109,
  [237] = 181,
  [238] = 179,
  [239] = 154,
  [240] = 163,
  [241] = 158,
  [242] = 159,
  [243] = 167,
  [244] = 168,
  [245] = 162,
  [246] = 156,
  [247] = 177,
  [248] = 155,
  [249] = 171,
  [250] = 145,
  [251] = 251,
  [252] = 175,
  [253] = 164,
  [254] = 101,
  [255] = 161,
  [256] = 184,
  [257] = 190,
  [258] = 110,
  [259] = 174,
  [260] = 170,
  [261] = 186,
  [262] = 119,
  [263] = 180,
  [264] = 120,
  [265] = 265,
  [266] = 109,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 113,
  [272] = 272,
  [273] = 273,
  [274] = 109,
  [275] = 129,
  [276] = 127,
  [277] = 113,
  [278] = 278,
  [279] = 128,
  [280] = 280,
  [281] = 281,
  [282] = 122,
  [283] = 96,
  [284] = 120,
  [285] = 92,
  [286] = 286,
  [287] = 287,
  [288] = 129,
  [289] = 286,
  [290] = 139,
  [291] = 147,
  [292] = 122,
  [293] = 128,
  [294] = 127,
  [295] = 113,
  [296] = 120,
  [297] = 102,
  [298] = 280,
  [299] = 104,
  [300] = 163,
  [301] = 301,
  [302] = 159,
  [303] = 140,
  [304] = 109,
  [305] = 157,
  [306] = 155,
  [307] = 281,
  [308] = 278,
  [309] = 287,
  [310] = 106,
  [311] = 174,
  [312] = 155,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 286,
  [318] = 318,
  [319] = 138,
  [320] = 188,
  [321] = 189,
  [322] = 164,
  [323] = 163,
  [324] = 181,
  [325] = 179,
  [326] = 147,
  [327] = 161,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 280,
  [333] = 139,
  [334] = 278,
  [335] = 162,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 156,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 140,
  [350] = 177,
  [351] = 101,
  [352] = 352,
  [353] = 353,
  [354] = 159,
  [355] = 180,
  [356] = 356,
  [357] = 329,
  [358] = 358,
  [359] = 359,
  [360] = 186,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 102,
  [366] = 301,
  [367] = 267,
  [368] = 272,
  [369] = 106,
  [370] = 104,
  [371] = 281,
  [372] = 157,
  [373] = 163,
  [374] = 155,
  [375] = 129,
  [376] = 314,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 287,
  [382] = 382,
  [383] = 329,
  [384] = 384,
  [385] = 265,
  [386] = 159,
  [387] = 269,
  [388] = 128,
  [389] = 389,
  [390] = 120,
  [391] = 391,
  [392] = 127,
  [393] = 273,
  [394] = 157,
  [395] = 314,
  [396] = 158,
  [397] = 119,
  [398] = 113,
  [399] = 122,
  [400] = 174,
  [401] = 356,
  [402] = 180,
  [403] = 128,
  [404] = 177,
  [405] = 159,
  [406] = 129,
  [407] = 315,
  [408] = 163,
  [409] = 353,
  [410] = 352,
  [411] = 328,
  [412] = 348,
  [413] = 347,
  [414] = 345,
  [415] = 344,
  [416] = 343,
  [417] = 341,
  [418] = 340,
  [419] = 339,
  [420] = 338,
  [421] = 337,
  [422] = 336,
  [423] = 186,
  [424] = 346,
  [425] = 265,
  [426] = 102,
  [427] = 313,
  [428] = 316,
  [429] = 106,
  [430] = 155,
  [431] = 156,
  [432] = 391,
  [433] = 122,
  [434] = 101,
  [435] = 318,
  [436] = 162,
  [437] = 301,
  [438] = 157,
  [439] = 358,
  [440] = 273,
  [441] = 269,
  [442] = 359,
  [443] = 361,
  [444] = 362,
  [445] = 104,
  [446] = 179,
  [447] = 119,
  [448] = 147,
  [449] = 181,
  [450] = 189,
  [451] = 363,
  [452] = 188,
  [453] = 163,
  [454] = 138,
  [455] = 364,
  [456] = 377,
  [457] = 159,
  [458] = 379,
  [459] = 139,
  [460] = 164,
  [461] = 272,
  [462] = 267,
  [463] = 380,
  [464] = 140,
  [465] = 382,
  [466] = 161,
  [467] = 127,
  [468] = 384,
  [469] = 158,
  [470] = 155,
  [471] = 157,
  [472] = 389,
  [473] = 378,
  [474] = 158,
  [475] = 163,
  [476] = 318,
  [477] = 384,
  [478] = 346,
  [479] = 140,
  [480] = 315,
  [481] = 161,
  [482] = 164,
  [483] = 382,
  [484] = 380,
  [485] = 379,
  [486] = 377,
  [487] = 364,
  [488] = 363,
  [489] = 362,
  [490] = 361,
  [491] = 389,
  [492] = 359,
  [493] = 378,
  [494] = 313,
  [495] = 358,
  [496] = 138,
  [497] = 104,
  [498] = 188,
  [499] = 189,
  [500] = 356,
  [501] = 106,
  [502] = 102,
  [503] = 119,
  [504] = 181,
  [505] = 179,
  [506] = 162,
  [507] = 156,
  [508] = 174,
  [509] = 177,
  [510] = 328,
  [511] = 180,
  [512] = 316,
  [513] = 101,
  [514] = 186,
  [515] = 157,
  [516] = 353,
  [517] = 352,
  [518] = 155,
  [519] = 348,
  [520] = 139,
  [521] = 347,
  [522] = 147,
  [523] = 345,
  [524] = 344,
  [525] = 343,
  [526] = 341,
  [527] = 340,
  [528] = 339,
  [529] = 338,
  [530] = 337,
  [531] = 336,
  [532] = 159,
  [533] = 163,
  [534] = 159,
  [535] = 391,
  [536] = 167,
  [537] = 138,
  [538] = 538,
  [539] = 538,
  [540] = 538,
  [541] = 163,
  [542] = 159,
  [543] = 190,
  [544] = 153,
  [545] = 186,
  [546] = 157,
  [547] = 155,
  [548] = 180,
  [549] = 101,
  [550] = 177,
  [551] = 174,
  [552] = 538,
  [553] = 156,
  [554] = 162,
  [555] = 119,
  [556] = 538,
  [557] = 179,
  [558] = 109,
  [559] = 538,
  [560] = 538,
  [561] = 168,
  [562] = 155,
  [563] = 169,
  [564] = 170,
  [565] = 171,
  [566] = 145,
  [567] = 175,
  [568] = 157,
  [569] = 110,
  [570] = 158,
  [571] = 161,
  [572] = 164,
  [573] = 113,
  [574] = 188,
  [575] = 189,
  [576] = 538,
  [577] = 181,
  [578] = 120,
  [579] = 579,
  [580] = 580,
  [581] = 580,
  [582] = 580,
  [583] = 580,
  [584] = 580,
  [585] = 580,
  [586] = 580,
  [587] = 580,
  [588] = 588,
  [589] = 588,
  [590] = 129,
  [591] = 128,
  [592] = 127,
  [593] = 593,
  [594] = 122,
  [595] = 588,
  [596] = 593,
  [597] = 597,
  [598] = 597,
  [599] = 597,
  [600] = 588,
  [601] = 601,
  [602] = 593,
  [603] = 281,
  [604] = 593,
  [605] = 597,
  [606] = 606,
  [607] = 588,
  [608] = 588,
  [609] = 597,
  [610] = 593,
  [611] = 287,
  [612] = 593,
  [613] = 613,
  [614] = 278,
  [615] = 597,
  [616] = 613,
  [617] = 593,
  [618] = 593,
  [619] = 597,
  [620] = 588,
  [621] = 593,
  [622] = 588,
  [623] = 588,
  [624] = 588,
  [625] = 593,
  [626] = 588,
  [627] = 597,
  [628] = 593,
  [629] = 629,
  [630] = 301,
  [631] = 601,
  [632] = 632,
  [633] = 606,
  [634] = 632,
  [635] = 632,
  [636] = 636,
  [637] = 632,
  [638] = 632,
  [639] = 140,
  [640] = 139,
  [641] = 632,
  [642] = 632,
  [643] = 102,
  [644] = 106,
  [645] = 104,
  [646] = 632,
  [647] = 632,
  [648] = 147,
  [649] = 649,
  [650] = 632,
  [651] = 632,
  [652] = 652,
  [653] = 361,
  [654] = 652,
  [655] = 156,
  [656] = 652,
  [657] = 379,
  [658] = 162,
  [659] = 380,
  [660] = 174,
  [661] = 119,
  [662] = 177,
  [663] = 180,
  [664] = 377,
  [665] = 186,
  [666] = 652,
  [667] = 652,
  [668] = 364,
  [669] = 363,
  [670] = 362,
  [671] = 652,
  [672] = 382,
  [673] = 673,
  [674] = 652,
  [675] = 179,
  [676] = 181,
  [677] = 337,
  [678] = 678,
  [679] = 338,
  [680] = 189,
  [681] = 652,
  [682] = 188,
  [683] = 652,
  [684] = 339,
  [685] = 138,
  [686] = 340,
  [687] = 341,
  [688] = 101,
  [689] = 158,
  [690] = 343,
  [691] = 344,
  [692] = 161,
  [693] = 164,
  [694] = 694,
  [695] = 345,
  [696] = 696,
  [697] = 697,
  [698] = 696,
  [699] = 697,
  [700] = 697,
  [701] = 696,
  [702] = 697,
  [703] = 697,
  [704] = 696,
  [705] = 705,
  [706] = 697,
  [707] = 696,
  [708] = 708,
  [709] = 696,
  [710] = 710,
  [711] = 697,
  [712] = 696,
  [713] = 697,
  [714] = 696,
  [715] = 715,
  [716] = 716,
  [717] = 717,
  [718] = 718,
  [719] = 716,
  [720] = 720,
  [721] = 718,
  [722] = 718,
  [723] = 718,
  [724] = 718,
  [725] = 718,
  [726] = 718,
  [727] = 716,
  [728] = 718,
  [729] = 729,
  [730] = 730,
  [731] = 731,
  [732] = 732,
  [733] = 729,
  [734] = 734,
  [735] = 735,
  [736] = 736,
  [737] = 606,
  [738] = 738,
  [739] = 739,
  [740] = 739,
  [741] = 741,
  [742] = 742,
  [743] = 743,
  [744] = 742,
  [745] = 732,
  [746] = 743,
  [747] = 729,
  [748] = 748,
  [749] = 736,
  [750] = 750,
  [751] = 735,
  [752] = 739,
  [753] = 731,
  [754] = 754,
  [755] = 755,
  [756] = 756,
  [757] = 743,
  [758] = 739,
  [759] = 731,
  [760] = 760,
  [761] = 743,
  [762] = 735,
  [763] = 742,
  [764] = 732,
  [765] = 729,
  [766] = 732,
  [767] = 736,
  [768] = 736,
  [769] = 735,
  [770] = 729,
  [771] = 731,
  [772] = 732,
  [773] = 739,
  [774] = 742,
  [775] = 743,
  [776] = 742,
  [777] = 729,
  [778] = 731,
  [779] = 601,
  [780] = 739,
  [781] = 739,
  [782] = 782,
  [783] = 742,
  [784] = 731,
  [785] = 785,
  [786] = 735,
  [787] = 736,
  [788] = 788,
  [789] = 729,
  [790] = 739,
  [791] = 791,
  [792] = 742,
  [793] = 732,
  [794] = 729,
  [795] = 742,
  [796] = 743,
  [797] = 736,
  [798] = 748,
  [799] = 739,
  [800] = 734,
  [801] = 801,
  [802] = 738,
  [803] = 743,
  [804] = 804,
  [805] = 742,
  [806] = 806,
  [807] = 732,
  [808] = 731,
  [809] = 731,
  [810] = 735,
  [811] = 729,
  [812] = 739,
  [813] = 813,
  [814] = 736,
  [815] = 813,
  [816] = 735,
  [817] = 813,
  [818] = 742,
  [819] = 731,
  [820] = 731,
  [821] = 735,
  [822] = 804,
  [823] = 738,
  [824] = 824,
  [825] = 734,
  [826] = 736,
  [827] = 729,
  [828] = 828,
  [829] = 729,
  [830] = 731,
  [831] = 831,
  [832] = 732,
  [833] = 804,
  [834] = 742,
  [835] = 835,
  [836] = 748,
  [837] = 743,
  [838] = 739,
  [839] = 839,
  [840] = 839,
  [841] = 841,
  [842] = 839,
  [843] = 843,
  [844] = 844,
  [845] = 845,
  [846] = 846,
  [847] = 841,
  [848] = 848,
  [849] = 845,
  [850] = 846,
  [851] = 848,
  [852] = 845,
  [853] = 846,
  [854] = 848,
  [855] = 855,
  [856] = 856,
  [857] = 857,
  [858] = 857,
  [859] = 859,
  [860] = 860,
  [861] = 857,
  [862] = 862,
  [863] = 863,
  [864] = 862,
  [865] = 865,
  [866] = 862,
  [867] = 867,
  [868] = 868,
  [869] = 862,
  [870] = 862,
  [871] = 871,
  [872] = 872,
  [873] = 873,
  [874] = 839,
  [875] = 857,
  [876] = 876,
  [877] = 862,
  [878] = 878,
  [879] = 860,
  [880] = 843,
  [881] = 872,
  [882] = 848,
  [883] = 841,
  [884] = 873,
  [885] = 841,
  [886] = 876,
  [887] = 873,
  [888] = 888,
  [889] = 862,
  [890] = 890,
  [891] = 872,
  [892] = 892,
  [893] = 843,
  [894] = 873,
  [895] = 895,
  [896] = 896,
  [897] = 897,
  [898] = 898,
  [899] = 899,
  [900] = 841,
  [901] = 901,
  [902] = 902,
  [903] = 841,
  [904] = 839,
  [905] = 857,
  [906] = 876,
  [907] = 907,
  [908] = 843,
  [909] = 841,
  [910] = 910,
  [911] = 860,
  [912] = 841,
  [913] = 843,
  [914] = 857,
  [915] = 839,
  [916] = 872,
  [917] = 846,
  [918] = 843,
  [919] = 841,
  [920] = 843,
  [921] = 921,
  [922] = 845,
  [923] = 841,
  [924] = 839,
  [925] = 857,
  [926] = 839,
  [927] = 857,
  [928] = 928,
  [929] = 862,
  [930] = 843,
  [931] = 841,
  [932] = 932,
  [933] = 933,
  [934] = 934,
  [935] = 935,
  [936] = 936,
  [937] = 937,
  [938] = 938,
  [939] = 939,
  [940] = 940,
  [941] = 941,
  [942] = 942,
  [943] = 943,
  [944] = 944,
  [945] = 945,
  [946] = 946,
  [947] = 947,
  [948] = 948,
  [949] = 949,
  [950] = 935,
  [951] = 951,
  [952] = 952,
  [953] = 953,
  [954] = 939,
  [955] = 955,
  [956] = 956,
  [957] = 943,
  [958] = 958,
  [959] = 959,
  [960] = 960,
  [961] = 961,
  [962] = 962,
  [963] = 935,
  [964] = 964,
  [965] = 965,
  [966] = 966,
  [967] = 967,
  [968] = 939,
  [969] = 969,
  [970] = 970,
  [971] = 971,
  [972] = 972,
  [973] = 973,
  [974] = 974,
  [975] = 975,
  [976] = 933,
  [977] = 943,
  [978] = 978,
  [979] = 945,
  [980] = 943,
  [981] = 981,
  [982] = 982,
  [983] = 943,
  [984] = 935,
  [985] = 985,
  [986] = 986,
  [987] = 987,
  [988] = 988,
  [989] = 939,
  [990] = 990,
  [991] = 991,
  [992] = 970,
  [993] = 993,
  [994] = 971,
  [995] = 939,
  [996] = 996,
  [997] = 997,
  [998] = 998,
  [999] = 981,
  [1000] = 941,
  [1001] = 1001,
  [1002] = 1002,
  [1003] = 935,
  [1004] = 1004,
  [1005] = 1005,
  [1006] = 1006,
  [1007] = 945,
  [1008] = 1008,
  [1009] = 935,
  [1010] = 947,
  [1011] = 951,
  [1012] = 975,
  [1013] = 937,
  [1014] = 938,
  [1015] = 990,
  [1016] = 942,
  [1017] = 944,
  [1018] = 946,
  [1019] = 948,
  [1020] = 958,
  [1021] = 955,
  [1022] = 988,
  [1023] = 987,
  [1024] = 958,
  [1025] = 959,
  [1026] = 965,
  [1027] = 1027,
  [1028] = 1028,
  [1029] = 1006,
  [1030] = 1030,
  [1031] = 943,
  [1032] = 975,
  [1033] = 937,
  [1034] = 942,
  [1035] = 944,
  [1036] = 946,
  [1037] = 948,
  [1038] = 967,
  [1039] = 959,
  [1040] = 966,
  [1041] = 958,
  [1042] = 1042,
  [1043] = 965,
  [1044] = 933,
  [1045] = 941,
  [1046] = 1006,
  [1047] = 1030,
  [1048] = 971,
  [1049] = 944,
  [1050] = 1050,
  [1051] = 967,
  [1052] = 972,
  [1053] = 958,
  [1054] = 939,
  [1055] = 965,
  [1056] = 933,
  [1057] = 1006,
  [1058] = 601,
  [1059] = 943,
  [1060] = 958,
  [1061] = 987,
  [1062] = 933,
  [1063] = 1006,
  [1064] = 939,
  [1065] = 988,
  [1066] = 958,
  [1067] = 1067,
  [1068] = 933,
  [1069] = 1006,
  [1070] = 1030,
  [1071] = 935,
  [1072] = 958,
  [1073] = 939,
  [1074] = 933,
  [1075] = 1006,
  [1076] = 1076,
  [1077] = 1050,
  [1078] = 935,
  [1079] = 933,
  [1080] = 1006,
  [1081] = 1081,
  [1082] = 971,
  [1083] = 988,
  [1084] = 987,
  [1085] = 1027,
  [1086] = 981,
  [1087] = 940,
  [1088] = 941,
  [1089] = 606,
  [1090] = 1008,
  [1091] = 964,
  [1092] = 1027,
  [1093] = 943,
  [1094] = 940,
  [1095] = 967,
  [1096] = 1050,
  [1097] = 1008,
  [1098] = 966,
  [1099] = 964,
  [1100] = 940,
  [1101] = 1101,
  [1102] = 1102,
  [1103] = 1103,
  [1104] = 959,
  [1105] = 958,
  [1106] = 947,
  [1107] = 1067,
  [1108] = 956,
  [1109] = 997,
  [1110] = 1067,
  [1111] = 956,
  [1112] = 997,
  [1113] = 1067,
  [1114] = 956,
  [1115] = 956,
  [1116] = 956,
  [1117] = 956,
  [1118] = 956,
  [1119] = 960,
  [1120] = 960,
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
      if (eof) ADVANCE(290);
      if (lookahead == '\'') ADVANCE(622);
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == ')') ADVANCE(531);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == ',') ADVANCE(534);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '.') ADVANCE(585);
      if (lookahead == ':') ADVANCE(556);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '=') ADVANCE(537);
      if (lookahead == 'A' ||
          lookahead == 'I' ||
          lookahead == 'O' ||
          lookahead == 'P') ADVANCE(564);
      if (lookahead == 'D') ADVANCE(76);
      if (lookahead == 'F') ADVANCE(26);
      if (lookahead == 'T') ADVANCE(566);
      if (lookahead == 'V') ADVANCE(565);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == ']') ADVANCE(619);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'b') ADVANCE(174);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(110);
      if (lookahead == 'p') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == 's') ADVANCE(234);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == 'u') ADVANCE(218);
      if (lookahead == 'v') ADVANCE(30);
      if (lookahead == '{') ADVANCE(623);
      if (lookahead == '}') ADVANCE(624);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(265)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(626);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(621);
      if (lookahead == '\'') ADVANCE(622);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('!' <= lookahead && lookahead <= '~') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(620);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(621);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('!' <= lookahead && lookahead <= '~') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(620);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(584);
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == ')') ADVANCE(531);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == ',') ADVANCE(534);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == 'F') ADVANCE(26);
      if (lookahead == 'T') ADVANCE(189);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == ']') ADVANCE(567);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(246);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == 'u') ADVANCE(218);
      if (lookahead == 'v') ADVANCE(30);
      if (lookahead == '{') ADVANCE(623);
      if (lookahead == '}') ADVANCE(624);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(626);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(584);
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '.') ADVANCE(585);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == 'D') ADVANCE(359);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == 'b') ADVANCE(434);
      if (lookahead == 'c') ADVANCE(373);
      if (lookahead == 'f') ADVANCE(494);
      if (lookahead == 'i') ADVANCE(417);
      if (lookahead == 'l') ADVANCE(387);
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == 'p') ADVANCE(463);
      if (lookahead == 'r') ADVANCE(347);
      if (lookahead == 's') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(626);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(512);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(584);
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '.') ADVANCE(585);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == 'D') ADVANCE(359);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == 'b') ADVANCE(434);
      if (lookahead == 'c') ADVANCE(373);
      if (lookahead == 'f') ADVANCE(494);
      if (lookahead == 'i') ADVANCE(417);
      if (lookahead == 'n') ADVANCE(303);
      if (lookahead == 'p') ADVANCE(463);
      if (lookahead == 'r') ADVANCE(365);
      if (lookahead == 's') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(626);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(512);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(584);
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == 'F') ADVANCE(304);
      if (lookahead == 'T') ADVANCE(451);
      if (lookahead == 'f') ADVANCE(311);
      if (lookahead == 'n') ADVANCE(385);
      if (lookahead == 't') ADVANCE(464);
      if (lookahead == '{') ADVANCE(623);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(626);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(512);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(584);
      if (lookahead == ')') ADVANCE(531);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(626);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(512);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead == 'f') ADVANCE(379);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 'p') ADVANCE(446);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(512);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead == 'f') ADVANCE(379);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 'p') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(512);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead == 'f') ADVANCE(379);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 'p') ADVANCE(446);
      if (lookahead == 'r') ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(512);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(512);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(531);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == 'v') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(512);
      END_STATE();
    case 13:
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead == 'f') ADVANCE(379);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(496);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 'p') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(512);
      END_STATE();
    case 14:
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == 'f') ADVANCE(494);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(463);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(512);
      END_STATE();
    case 15:
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == 'f') ADVANCE(494);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(463);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(512);
      END_STATE();
    case 16:
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == 'A' ||
          lookahead == 'I' ||
          lookahead == 'O' ||
          lookahead == 'P' ||
          lookahead == 'T') ADVANCE(564);
      if (lookahead == 'V') ADVANCE(565);
      if (lookahead == ']') ADVANCE(567);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(55);
      if (lookahead == 'C') ADVANCE(251);
      if (lookahead == 'I') ADVANCE(167);
      if (lookahead == 'O') ADVANCE(260);
      if (lookahead == 'V') ADVANCE(92);
      END_STATE();
    case 18:
      if (lookahead == 'L') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'O') ADVANCE(111);
      END_STATE();
    case 20:
      if (lookahead == 'O') ADVANCE(249);
      if (lookahead == 'T') ADVANCE(200);
      if (lookahead == 't') ADVANCE(540);
      if (lookahead == 'v') ADVANCE(105);
      END_STATE();
    case 21:
      if (lookahead == 'P') ADVANCE(204);
      END_STATE();
    case 22:
      if (lookahead == 'R') ADVANCE(107);
      END_STATE();
    case 23:
      if (lookahead == 'R') ADVANCE(108);
      END_STATE();
    case 24:
      if (lookahead == 'T') ADVANCE(172);
      END_STATE();
    case 25:
      if (lookahead == 'T') ADVANCE(200);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(569);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(573);
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(578);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(580);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(229);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(183);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(241);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(184);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(185);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(564);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(518);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(605);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(576);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(609);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(602);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(607);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(611);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(520);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(522);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(517);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(254);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(253);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(629);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(627);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(633);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(617);
      if (lookahead == 'v') ADVANCE(98);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(561);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(548);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(550);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(538);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(213);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 131:
      if (lookahead == 'j') ADVANCE(101);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(564);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(635);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(596);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(618);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(544);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(582);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(226);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(542);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(564);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 'x') ADVANCE(240);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(590);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(546);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(570);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(224);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(613);
      if (lookahead == 'r') ADVANCE(248);
      if (lookahead == 'y') ADVANCE(187);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(559);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 187:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(564);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(588);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(552);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(532);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(528);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(526);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(564);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(535);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 246:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 247:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 248:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 249:
      if (lookahead == 'u') ADVANCE(232);
      END_STATE();
    case 250:
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 251:
      if (lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 252:
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 253:
      if (lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 254:
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 255:
      if (lookahead == 'u') ADVANCE(238);
      END_STATE();
    case 256:
      if (lookahead == 'v') ADVANCE(42);
      END_STATE();
    case 257:
      if (lookahead == 'v') ADVANCE(85);
      END_STATE();
    case 258:
      if (lookahead == 'v') ADVANCE(75);
      END_STATE();
    case 259:
      if (lookahead == 'v') ADVANCE(109);
      END_STATE();
    case 260:
      if (lookahead == 'w') ADVANCE(170);
      END_STATE();
    case 261:
      if (lookahead == 'w') ADVANCE(39);
      END_STATE();
    case 262:
      if (lookahead == 'y') ADVANCE(615);
      END_STATE();
    case 263:
      if (lookahead == 'y') ADVANCE(557);
      END_STATE();
    case 264:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(626);
      END_STATE();
    case 265:
      if (eof) ADVANCE(290);
      if (lookahead == '\'') ADVANCE(584);
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == ')') ADVANCE(531);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == ',') ADVANCE(534);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '.') ADVANCE(585);
      if (lookahead == ':') ADVANCE(556);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '=') ADVANCE(537);
      if (lookahead == 'A' ||
          lookahead == 'I' ||
          lookahead == 'O' ||
          lookahead == 'P') ADVANCE(564);
      if (lookahead == 'D') ADVANCE(76);
      if (lookahead == 'F') ADVANCE(26);
      if (lookahead == 'T') ADVANCE(566);
      if (lookahead == 'V') ADVANCE(565);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == ']') ADVANCE(567);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'b') ADVANCE(174);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(110);
      if (lookahead == 'p') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == 's') ADVANCE(234);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == 'u') ADVANCE(218);
      if (lookahead == 'v') ADVANCE(30);
      if (lookahead == '{') ADVANCE(623);
      if (lookahead == '}') ADVANCE(624);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(265)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(626);
      END_STATE();
    case 266:
      if (eof) ADVANCE(290);
      if (lookahead == '\'') ADVANCE(584);
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == ',') ADVANCE(534);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == ']') ADVANCE(567);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead == 'f') ADVANCE(377);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead == 'r') ADVANCE(355);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == 'v') ADVANCE(299);
      if (lookahead == '}') ADVANCE(624);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(266)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(512);
      END_STATE();
    case 267:
      if (eof) ADVANCE(290);
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == ')') ADVANCE(531);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == ',') ADVANCE(534);
      if (lookahead == ':') ADVANCE(556);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == ']') ADVANCE(567);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead == 'f') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(267)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(512);
      END_STATE();
    case 268:
      if (eof) ADVANCE(290);
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == ')') ADVANCE(531);
      if (lookahead == ',') ADVANCE(534);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == ']') ADVANCE(619);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead == 'f') ADVANCE(377);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead == 'r') ADVANCE(355);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == 'v') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(269)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(512);
      END_STATE();
    case 269:
      if (eof) ADVANCE(290);
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == ')') ADVANCE(531);
      if (lookahead == ',') ADVANCE(534);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead == 'f') ADVANCE(377);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead == 'r') ADVANCE(355);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == 'v') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(269)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(512);
      END_STATE();
    case 270:
      if (eof) ADVANCE(290);
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == ',') ADVANCE(534);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead == 'f') ADVANCE(494);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(463);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(270)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(512);
      END_STATE();
    case 271:
      if (eof) ADVANCE(290);
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == ',') ADVANCE(534);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == 'f') ADVANCE(494);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(463);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(271)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(512);
      END_STATE();
    case 272:
      if (eof) ADVANCE(290);
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead == 'f') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead == 't') ADVANCE(425);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(272)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(512);
      END_STATE();
    case 273:
      if (eof) ADVANCE(290);
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == 'f') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(273)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(512);
      END_STATE();
    case 274:
      if (eof) ADVANCE(290);
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == 'f') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead == 't') ADVANCE(425);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(274)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(512);
      END_STATE();
    case 275:
      if (eof) ADVANCE(290);
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead == 'f') ADVANCE(494);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(463);
      if (lookahead == 't') ADVANCE(425);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(275)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(512);
      END_STATE();
    case 276:
      if (eof) ADVANCE(290);
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == '+') ADVANCE(604);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == 'f') ADVANCE(494);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(463);
      if (lookahead == 't') ADVANCE(425);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(276)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(512);
      END_STATE();
    case 277:
      if (eof) ADVANCE(290);
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead == 'f') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead == 'r') ADVANCE(355);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(277)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(512);
      END_STATE();
    case 278:
      if (eof) ADVANCE(290);
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == 'f') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead == 'r') ADVANCE(355);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(278)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(512);
      END_STATE();
    case 279:
      if (eof) ADVANCE(290);
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead == 'f') ADVANCE(494);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(463);
      if (lookahead == 'r') ADVANCE(355);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(279)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(512);
      END_STATE();
    case 280:
      if (eof) ADVANCE(290);
      if (lookahead == '(') ADVANCE(530);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == 'f') ADVANCE(494);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(463);
      if (lookahead == 'r') ADVANCE(355);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(280)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(512);
      END_STATE();
    case 281:
      if (eof) ADVANCE(290);
      if (lookahead == ')') ADVANCE(531);
      if (lookahead == ',') ADVANCE(534);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead == 'f') ADVANCE(494);
      if (lookahead == 'm') ADVANCE(340);
      if (lookahead == 'p') ADVANCE(463);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(281)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(512);
      END_STATE();
    case 282:
      if (eof) ADVANCE(290);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead == 'f') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(340);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(282)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(512);
      END_STATE();
    case 283:
      if (eof) ADVANCE(290);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == 'f') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(340);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(283)
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(512);
      END_STATE();
    case 284:
      if (eof) ADVANCE(290);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead == 'f') ADVANCE(377);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == 'v') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(284)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(512);
      END_STATE();
    case 285:
      if (eof) ADVANCE(290);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead == 'f') ADVANCE(427);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(463);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == 'v') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(285)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(512);
      END_STATE();
    case 286:
      if (eof) ADVANCE(290);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == 'f') ADVANCE(494);
      if (lookahead == 'm') ADVANCE(340);
      if (lookahead == 'p') ADVANCE(463);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(286)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(512);
      END_STATE();
    case 287:
      if (eof) ADVANCE(290);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead == 'f') ADVANCE(377);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'o') ADVANCE(503);
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == 'v') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(287)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(512);
      END_STATE();
    case 288:
      if (eof) ADVANCE(290);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead == 'f') ADVANCE(427);
      if (lookahead == 'm') ADVANCE(341);
      if (lookahead == 'p') ADVANCE(463);
      if (lookahead == 't') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(470);
      if (lookahead == 'v') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(288)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(512);
      END_STATE();
    case 289:
      if (eof) ADVANCE(290);
      if (lookahead == ';') ADVANCE(513);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(289)
      END_STATE();
    case 290:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(308);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(369);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(498);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(362);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(367);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(424);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(389);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(512);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(471);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(512);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(443);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(512);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(511);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(512);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(390);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(512);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(391);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(512);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(483);
      if (lookahead == 'u') ADVANCE(402);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(512);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(399);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(512);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(449);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(512);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(409);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(512);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(444);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(512);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(415);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(512);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(485);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(512);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(472);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(512);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(400);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(512);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(492);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(512);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(474);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(568);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(572);
      if (lookahead == 't') ADVANCE(356);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(572);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(579);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(581);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(380);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(435);
      if (lookahead == 'f') ADVANCE(296);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(435);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(487);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(436);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(437);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(438);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(519);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(577);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(603);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(515);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(606);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(608);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(521);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(516);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(523);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(610);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(612);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(493);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(344);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(499);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead == 'u') ADVANCE(395);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(401);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(555);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(601);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(599);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(525);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(575);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(320);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(294);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(593);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(595);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(630);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(628);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(634);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(632);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(478);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(322);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(454);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(466);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(319);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(462);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(328);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(323);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(306);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(461);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(321);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(324);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(325);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(295);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(562);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(549);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(551);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(539);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(307);
      if (lookahead == 's') ADVANCE(491);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(291);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(315);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(504);
      if (lookahead == 'o') ADVANCE(484);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(413);
      if (lookahead == 'o') ADVANCE(442);
      if (lookahead == 'u') ADVANCE(405);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(413);
      if (lookahead == 'u') ADVANCE(405);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(413);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(403);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(430);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(338);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(408);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(411);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(392);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(505);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(473);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(507);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(597);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(583);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(545);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(636);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 'o') ADVANCE(412);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(502);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(486);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(345);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(363);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(310);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(476);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(477);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(433);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(543);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(302);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead == 'x') ADVANCE(490);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(314);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(591);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(571);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(370);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(547);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(293);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(371);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(469);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(297);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(317);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(372);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(301);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(480);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(329);
      if (lookahead == 'x') ADVANCE(490);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(332);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(333);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(334);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(506);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(412);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(560);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(614);
      if (lookahead == 'y') ADVANCE(440);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(614);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(442);
      if (lookahead == 'u') ADVANCE(405);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(337);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(318);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(407);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(316);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(394);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(445);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(439);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(455);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(456);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(459);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(460);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(397);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(342);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(375);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(508);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(589);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(553);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(510);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(376);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(382);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(429);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(327);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(406);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(500);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(300);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(383);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(447);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(330);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(331);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(346);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(452);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(335);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(336);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(475);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(416);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(431);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(501);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(384);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(533);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(529);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(527);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(479);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(358);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(467);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(468);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(481);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(432);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(349);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(353);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(354);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(497);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(536);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(541);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(292);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(587);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(386);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(356);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(343);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(374);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(361);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(453);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(350);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(360);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(465);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(388);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(396);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(405);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(414);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(395);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(450);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(482);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(457);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(351);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(352);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(489);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(357);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(309);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(348);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(364);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(368);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(305);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(440);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(558);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(616);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'C') ADVANCE(398);
      if (lookahead == 'F') ADVANCE(495);
      if (lookahead == 'P') ADVANCE(448);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'C') ADVANCE(398);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'C') ADVANCE(145);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'C') ADVANCE(145);
      if (lookahead == 'F') ADVANCE(250);
      if (lookahead == 'M') ADVANCE(175);
      if (lookahead == 'N') ADVANCE(45);
      if (lookahead == 'P') ADVANCE(202);
      if (lookahead == 'R') ADVANCE(94);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'F') ADVANCE(495);
      if (lookahead == 'M') ADVANCE(428);
      if (lookahead == 'P') ADVANCE(448);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'F') ADVANCE(250);
      if (lookahead == 'P') ADVANCE(202);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'M') ADVANCE(428);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'N') ADVANCE(45);
      if (lookahead == 'R') ADVANCE(94);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == 'N') ADVANCE(312);
      if (lookahead == 'R') ADVANCE(366);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_endModule);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_endModule);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_endClass);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_endClass);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_class);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_uses);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_const);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_multiLang);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_multiLang);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_int);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_num);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_num);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_Decimal);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_Decimal);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_string);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_cstring);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_cstring);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_char);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_type);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_memory);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_memory);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_refTo);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_refTo);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_listOf);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_listOf);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_reference_modifiers_token1);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_reference_modifiers_token1);
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_reference_modifiers_token1);
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_func);
      if (lookahead == 't') ADVANCE(381);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_func);
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_function);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == 'e') ADVANCE(339);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_procedure);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_procedure);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_forward);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_forward);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_endFunc);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_endFunc);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_endProc);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_endProc);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_external);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_inOut);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_inOut);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_return);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_inverse);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_inverse);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_absolute);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_absolute);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_final);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_final);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_override);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_private);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_protected);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_record);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_nativeRecord);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_nativeRecord);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_endRecord);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_endRecord);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_endNativeRecord);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_endNativeRecord);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_to);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_array);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_model);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_RBRACK2);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym__string_literal_token1);
      if (lookahead == ' ') ADVANCE(621);
      if (lookahead == ';') ADVANCE(513);
      if (('!' <= lookahead && lookahead <= '~') ||
          (160 <= lookahead && lookahead <= 255)) ADVANCE(620);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__integer_literal);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'L') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(626);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_true);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_True);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_false);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_False);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_nil_literal);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_nil_literal);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(512);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 266},
  [3] = {.lex_state = 266},
  [4] = {.lex_state = 268},
  [5] = {.lex_state = 268},
  [6] = {.lex_state = 268},
  [7] = {.lex_state = 268},
  [8] = {.lex_state = 266},
  [9] = {.lex_state = 266},
  [10] = {.lex_state = 268},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 268},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 284},
  [22] = {.lex_state = 284},
  [23] = {.lex_state = 268},
  [24] = {.lex_state = 268},
  [25] = {.lex_state = 284},
  [26] = {.lex_state = 284},
  [27] = {.lex_state = 287},
  [28] = {.lex_state = 287},
  [29] = {.lex_state = 287},
  [30] = {.lex_state = 287},
  [31] = {.lex_state = 287},
  [32] = {.lex_state = 287},
  [33] = {.lex_state = 287},
  [34] = {.lex_state = 287},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 285},
  [38] = {.lex_state = 285},
  [39] = {.lex_state = 285},
  [40] = {.lex_state = 285},
  [41] = {.lex_state = 285},
  [42] = {.lex_state = 285},
  [43] = {.lex_state = 288},
  [44] = {.lex_state = 288},
  [45] = {.lex_state = 288},
  [46] = {.lex_state = 288},
  [47] = {.lex_state = 288},
  [48] = {.lex_state = 288},
  [49] = {.lex_state = 288},
  [50] = {.lex_state = 288},
  [51] = {.lex_state = 288},
  [52] = {.lex_state = 270},
  [53] = {.lex_state = 288},
  [54] = {.lex_state = 270},
  [55] = {.lex_state = 288},
  [56] = {.lex_state = 270},
  [57] = {.lex_state = 270},
  [58] = {.lex_state = 288},
  [59] = {.lex_state = 270},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 271},
  [69] = {.lex_state = 271},
  [70] = {.lex_state = 271},
  [71] = {.lex_state = 271},
  [72] = {.lex_state = 271},
  [73] = {.lex_state = 271},
  [74] = {.lex_state = 271},
  [75] = {.lex_state = 271},
  [76] = {.lex_state = 271},
  [77] = {.lex_state = 271},
  [78] = {.lex_state = 271},
  [79] = {.lex_state = 271},
  [80] = {.lex_state = 271},
  [81] = {.lex_state = 271},
  [82] = {.lex_state = 271},
  [83] = {.lex_state = 271},
  [84] = {.lex_state = 271},
  [85] = {.lex_state = 271},
  [86] = {.lex_state = 267},
  [87] = {.lex_state = 267},
  [88] = {.lex_state = 267},
  [89] = {.lex_state = 284},
  [90] = {.lex_state = 284},
  [91] = {.lex_state = 287},
  [92] = {.lex_state = 267},
  [93] = {.lex_state = 273},
  [94] = {.lex_state = 273},
  [95] = {.lex_state = 273},
  [96] = {.lex_state = 267},
  [97] = {.lex_state = 287},
  [98] = {.lex_state = 273},
  [99] = {.lex_state = 273},
  [100] = {.lex_state = 273},
  [101] = {.lex_state = 267},
  [102] = {.lex_state = 266},
  [103] = {.lex_state = 287},
  [104] = {.lex_state = 266},
  [105] = {.lex_state = 273},
  [106] = {.lex_state = 266},
  [107] = {.lex_state = 273},
  [108] = {.lex_state = 287},
  [109] = {.lex_state = 277},
  [110] = {.lex_state = 284},
  [111] = {.lex_state = 273},
  [112] = {.lex_state = 268},
  [113] = {.lex_state = 272},
  [114] = {.lex_state = 278},
  [115] = {.lex_state = 273},
  [116] = {.lex_state = 284},
  [117] = {.lex_state = 268},
  [118] = {.lex_state = 268},
  [119] = {.lex_state = 284},
  [120] = {.lex_state = 267},
  [121] = {.lex_state = 278},
  [122] = {.lex_state = 267},
  [123] = {.lex_state = 287},
  [124] = {.lex_state = 287},
  [125] = {.lex_state = 274},
  [126] = {.lex_state = 268},
  [127] = {.lex_state = 282},
  [128] = {.lex_state = 277},
  [129] = {.lex_state = 282},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 273},
  [133] = {.lex_state = 287},
  [134] = {.lex_state = 268},
  [135] = {.lex_state = 268},
  [136] = {.lex_state = 273},
  [137] = {.lex_state = 277},
  [138] = {.lex_state = 267},
  [139] = {.lex_state = 282},
  [140] = {.lex_state = 282},
  [141] = {.lex_state = 274},
  [142] = {.lex_state = 287},
  [143] = {.lex_state = 287},
  [144] = {.lex_state = 273},
  [145] = {.lex_state = 267},
  [146] = {.lex_state = 277},
  [147] = {.lex_state = 282},
  [148] = {.lex_state = 283},
  [149] = {.lex_state = 278},
  [150] = {.lex_state = 287},
  [151] = {.lex_state = 283},
  [152] = {.lex_state = 277},
  [153] = {.lex_state = 267},
  [154] = {.lex_state = 267},
  [155] = {.lex_state = 267},
  [156] = {.lex_state = 267},
  [157] = {.lex_state = 267},
  [158] = {.lex_state = 267},
  [159] = {.lex_state = 267},
  [160] = {.lex_state = 267},
  [161] = {.lex_state = 267},
  [162] = {.lex_state = 267},
  [163] = {.lex_state = 267},
  [164] = {.lex_state = 267},
  [165] = {.lex_state = 267},
  [166] = {.lex_state = 278},
  [167] = {.lex_state = 267},
  [168] = {.lex_state = 267},
  [169] = {.lex_state = 267},
  [170] = {.lex_state = 267},
  [171] = {.lex_state = 267},
  [172] = {.lex_state = 283},
  [173] = {.lex_state = 278},
  [174] = {.lex_state = 267},
  [175] = {.lex_state = 267},
  [176] = {.lex_state = 278},
  [177] = {.lex_state = 267},
  [178] = {.lex_state = 273},
  [179] = {.lex_state = 267},
  [180] = {.lex_state = 267},
  [181] = {.lex_state = 267},
  [182] = {.lex_state = 283},
  [183] = {.lex_state = 283},
  [184] = {.lex_state = 267},
  [185] = {.lex_state = 283},
  [186] = {.lex_state = 267},
  [187] = {.lex_state = 283},
  [188] = {.lex_state = 267},
  [189] = {.lex_state = 267},
  [190] = {.lex_state = 267},
  [191] = {.lex_state = 278},
  [192] = {.lex_state = 273},
  [193] = {.lex_state = 273},
  [194] = {.lex_state = 273},
  [195] = {.lex_state = 273},
  [196] = {.lex_state = 273},
  [197] = {.lex_state = 273},
  [198] = {.lex_state = 273},
  [199] = {.lex_state = 273},
  [200] = {.lex_state = 283},
  [201] = {.lex_state = 273},
  [202] = {.lex_state = 283},
  [203] = {.lex_state = 273},
  [204] = {.lex_state = 273},
  [205] = {.lex_state = 273},
  [206] = {.lex_state = 273},
  [207] = {.lex_state = 278},
  [208] = {.lex_state = 278},
  [209] = {.lex_state = 278},
  [210] = {.lex_state = 273},
  [211] = {.lex_state = 273},
  [212] = {.lex_state = 273},
  [213] = {.lex_state = 273},
  [214] = {.lex_state = 283},
  [215] = {.lex_state = 273},
  [216] = {.lex_state = 273},
  [217] = {.lex_state = 273},
  [218] = {.lex_state = 273},
  [219] = {.lex_state = 273},
  [220] = {.lex_state = 273},
  [221] = {.lex_state = 273},
  [222] = {.lex_state = 273},
  [223] = {.lex_state = 273},
  [224] = {.lex_state = 273},
  [225] = {.lex_state = 273},
  [226] = {.lex_state = 273},
  [227] = {.lex_state = 273},
  [228] = {.lex_state = 273},
  [229] = {.lex_state = 273},
  [230] = {.lex_state = 273},
  [231] = {.lex_state = 273},
  [232] = {.lex_state = 273},
  [233] = {.lex_state = 273},
  [234] = {.lex_state = 273},
  [235] = {.lex_state = 273},
  [236] = {.lex_state = 279},
  [237] = {.lex_state = 273},
  [238] = {.lex_state = 273},
  [239] = {.lex_state = 273},
  [240] = {.lex_state = 273},
  [241] = {.lex_state = 273},
  [242] = {.lex_state = 273},
  [243] = {.lex_state = 273},
  [244] = {.lex_state = 273},
  [245] = {.lex_state = 273},
  [246] = {.lex_state = 273},
  [247] = {.lex_state = 273},
  [248] = {.lex_state = 273},
  [249] = {.lex_state = 273},
  [250] = {.lex_state = 273},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 273},
  [253] = {.lex_state = 273},
  [254] = {.lex_state = 273},
  [255] = {.lex_state = 273},
  [256] = {.lex_state = 273},
  [257] = {.lex_state = 273},
  [258] = {.lex_state = 273},
  [259] = {.lex_state = 273},
  [260] = {.lex_state = 273},
  [261] = {.lex_state = 273},
  [262] = {.lex_state = 273},
  [263] = {.lex_state = 273},
  [264] = {.lex_state = 270},
  [265] = {.lex_state = 281},
  [266] = {.lex_state = 280},
  [267] = {.lex_state = 281},
  [268] = {.lex_state = 9},
  [269] = {.lex_state = 281},
  [270] = {.lex_state = 9},
  [271] = {.lex_state = 275},
  [272] = {.lex_state = 281},
  [273] = {.lex_state = 281},
  [274] = {.lex_state = 280},
  [275] = {.lex_state = 281},
  [276] = {.lex_state = 281},
  [277] = {.lex_state = 276},
  [278] = {.lex_state = 270},
  [279] = {.lex_state = 279},
  [280] = {.lex_state = 281},
  [281] = {.lex_state = 270},
  [282] = {.lex_state = 270},
  [283] = {.lex_state = 9},
  [284] = {.lex_state = 271},
  [285] = {.lex_state = 9},
  [286] = {.lex_state = 281},
  [287] = {.lex_state = 270},
  [288] = {.lex_state = 286},
  [289] = {.lex_state = 286},
  [290] = {.lex_state = 281},
  [291] = {.lex_state = 281},
  [292] = {.lex_state = 271},
  [293] = {.lex_state = 280},
  [294] = {.lex_state = 286},
  [295] = {.lex_state = 276},
  [296] = {.lex_state = 271},
  [297] = {.lex_state = 279},
  [298] = {.lex_state = 286},
  [299] = {.lex_state = 279},
  [300] = {.lex_state = 281},
  [301] = {.lex_state = 270},
  [302] = {.lex_state = 281},
  [303] = {.lex_state = 281},
  [304] = {.lex_state = 10},
  [305] = {.lex_state = 281},
  [306] = {.lex_state = 281},
  [307] = {.lex_state = 271},
  [308] = {.lex_state = 271},
  [309] = {.lex_state = 271},
  [310] = {.lex_state = 279},
  [311] = {.lex_state = 270},
  [312] = {.lex_state = 270},
  [313] = {.lex_state = 270},
  [314] = {.lex_state = 3},
  [315] = {.lex_state = 270},
  [316] = {.lex_state = 270},
  [317] = {.lex_state = 286},
  [318] = {.lex_state = 270},
  [319] = {.lex_state = 270},
  [320] = {.lex_state = 270},
  [321] = {.lex_state = 270},
  [322] = {.lex_state = 270},
  [323] = {.lex_state = 286},
  [324] = {.lex_state = 270},
  [325] = {.lex_state = 270},
  [326] = {.lex_state = 286},
  [327] = {.lex_state = 270},
  [328] = {.lex_state = 270},
  [329] = {.lex_state = 3},
  [330] = {.lex_state = 270},
  [331] = {.lex_state = 270},
  [332] = {.lex_state = 286},
  [333] = {.lex_state = 286},
  [334] = {.lex_state = 271},
  [335] = {.lex_state = 270},
  [336] = {.lex_state = 270},
  [337] = {.lex_state = 270},
  [338] = {.lex_state = 270},
  [339] = {.lex_state = 270},
  [340] = {.lex_state = 270},
  [341] = {.lex_state = 270},
  [342] = {.lex_state = 270},
  [343] = {.lex_state = 270},
  [344] = {.lex_state = 270},
  [345] = {.lex_state = 270},
  [346] = {.lex_state = 270},
  [347] = {.lex_state = 270},
  [348] = {.lex_state = 270},
  [349] = {.lex_state = 286},
  [350] = {.lex_state = 270},
  [351] = {.lex_state = 270},
  [352] = {.lex_state = 270},
  [353] = {.lex_state = 270},
  [354] = {.lex_state = 286},
  [355] = {.lex_state = 270},
  [356] = {.lex_state = 270},
  [357] = {.lex_state = 3},
  [358] = {.lex_state = 270},
  [359] = {.lex_state = 270},
  [360] = {.lex_state = 270},
  [361] = {.lex_state = 270},
  [362] = {.lex_state = 270},
  [363] = {.lex_state = 270},
  [364] = {.lex_state = 270},
  [365] = {.lex_state = 280},
  [366] = {.lex_state = 271},
  [367] = {.lex_state = 286},
  [368] = {.lex_state = 286},
  [369] = {.lex_state = 280},
  [370] = {.lex_state = 280},
  [371] = {.lex_state = 271},
  [372] = {.lex_state = 286},
  [373] = {.lex_state = 270},
  [374] = {.lex_state = 286},
  [375] = {.lex_state = 286},
  [376] = {.lex_state = 3},
  [377] = {.lex_state = 270},
  [378] = {.lex_state = 270},
  [379] = {.lex_state = 270},
  [380] = {.lex_state = 270},
  [381] = {.lex_state = 271},
  [382] = {.lex_state = 270},
  [383] = {.lex_state = 3},
  [384] = {.lex_state = 270},
  [385] = {.lex_state = 286},
  [386] = {.lex_state = 270},
  [387] = {.lex_state = 286},
  [388] = {.lex_state = 280},
  [389] = {.lex_state = 270},
  [390] = {.lex_state = 9},
  [391] = {.lex_state = 270},
  [392] = {.lex_state = 286},
  [393] = {.lex_state = 286},
  [394] = {.lex_state = 270},
  [395] = {.lex_state = 3},
  [396] = {.lex_state = 270},
  [397] = {.lex_state = 270},
  [398] = {.lex_state = 8},
  [399] = {.lex_state = 271},
  [400] = {.lex_state = 271},
  [401] = {.lex_state = 271},
  [402] = {.lex_state = 271},
  [403] = {.lex_state = 10},
  [404] = {.lex_state = 271},
  [405] = {.lex_state = 286},
  [406] = {.lex_state = 13},
  [407] = {.lex_state = 271},
  [408] = {.lex_state = 286},
  [409] = {.lex_state = 271},
  [410] = {.lex_state = 271},
  [411] = {.lex_state = 271},
  [412] = {.lex_state = 271},
  [413] = {.lex_state = 271},
  [414] = {.lex_state = 271},
  [415] = {.lex_state = 271},
  [416] = {.lex_state = 271},
  [417] = {.lex_state = 271},
  [418] = {.lex_state = 271},
  [419] = {.lex_state = 271},
  [420] = {.lex_state = 271},
  [421] = {.lex_state = 271},
  [422] = {.lex_state = 271},
  [423] = {.lex_state = 271},
  [424] = {.lex_state = 271},
  [425] = {.lex_state = 286},
  [426] = {.lex_state = 280},
  [427] = {.lex_state = 271},
  [428] = {.lex_state = 271},
  [429] = {.lex_state = 280},
  [430] = {.lex_state = 286},
  [431] = {.lex_state = 271},
  [432] = {.lex_state = 271},
  [433] = {.lex_state = 9},
  [434] = {.lex_state = 271},
  [435] = {.lex_state = 271},
  [436] = {.lex_state = 271},
  [437] = {.lex_state = 271},
  [438] = {.lex_state = 286},
  [439] = {.lex_state = 271},
  [440] = {.lex_state = 286},
  [441] = {.lex_state = 286},
  [442] = {.lex_state = 271},
  [443] = {.lex_state = 271},
  [444] = {.lex_state = 271},
  [445] = {.lex_state = 280},
  [446] = {.lex_state = 271},
  [447] = {.lex_state = 271},
  [448] = {.lex_state = 286},
  [449] = {.lex_state = 271},
  [450] = {.lex_state = 271},
  [451] = {.lex_state = 271},
  [452] = {.lex_state = 271},
  [453] = {.lex_state = 271},
  [454] = {.lex_state = 271},
  [455] = {.lex_state = 271},
  [456] = {.lex_state = 271},
  [457] = {.lex_state = 271},
  [458] = {.lex_state = 271},
  [459] = {.lex_state = 286},
  [460] = {.lex_state = 271},
  [461] = {.lex_state = 286},
  [462] = {.lex_state = 286},
  [463] = {.lex_state = 271},
  [464] = {.lex_state = 286},
  [465] = {.lex_state = 271},
  [466] = {.lex_state = 271},
  [467] = {.lex_state = 13},
  [468] = {.lex_state = 271},
  [469] = {.lex_state = 271},
  [470] = {.lex_state = 271},
  [471] = {.lex_state = 271},
  [472] = {.lex_state = 271},
  [473] = {.lex_state = 271},
  [474] = {.lex_state = 271},
  [475] = {.lex_state = 3},
  [476] = {.lex_state = 271},
  [477] = {.lex_state = 271},
  [478] = {.lex_state = 271},
  [479] = {.lex_state = 13},
  [480] = {.lex_state = 271},
  [481] = {.lex_state = 271},
  [482] = {.lex_state = 271},
  [483] = {.lex_state = 271},
  [484] = {.lex_state = 271},
  [485] = {.lex_state = 271},
  [486] = {.lex_state = 271},
  [487] = {.lex_state = 271},
  [488] = {.lex_state = 271},
  [489] = {.lex_state = 271},
  [490] = {.lex_state = 271},
  [491] = {.lex_state = 271},
  [492] = {.lex_state = 271},
  [493] = {.lex_state = 271},
  [494] = {.lex_state = 271},
  [495] = {.lex_state = 271},
  [496] = {.lex_state = 271},
  [497] = {.lex_state = 10},
  [498] = {.lex_state = 271},
  [499] = {.lex_state = 271},
  [500] = {.lex_state = 271},
  [501] = {.lex_state = 10},
  [502] = {.lex_state = 10},
  [503] = {.lex_state = 271},
  [504] = {.lex_state = 271},
  [505] = {.lex_state = 271},
  [506] = {.lex_state = 271},
  [507] = {.lex_state = 271},
  [508] = {.lex_state = 271},
  [509] = {.lex_state = 271},
  [510] = {.lex_state = 271},
  [511] = {.lex_state = 271},
  [512] = {.lex_state = 271},
  [513] = {.lex_state = 271},
  [514] = {.lex_state = 271},
  [515] = {.lex_state = 271},
  [516] = {.lex_state = 271},
  [517] = {.lex_state = 271},
  [518] = {.lex_state = 271},
  [519] = {.lex_state = 271},
  [520] = {.lex_state = 13},
  [521] = {.lex_state = 271},
  [522] = {.lex_state = 13},
  [523] = {.lex_state = 271},
  [524] = {.lex_state = 271},
  [525] = {.lex_state = 271},
  [526] = {.lex_state = 271},
  [527] = {.lex_state = 271},
  [528] = {.lex_state = 271},
  [529] = {.lex_state = 271},
  [530] = {.lex_state = 271},
  [531] = {.lex_state = 271},
  [532] = {.lex_state = 271},
  [533] = {.lex_state = 271},
  [534] = {.lex_state = 3},
  [535] = {.lex_state = 271},
  [536] = {.lex_state = 9},
  [537] = {.lex_state = 9},
  [538] = {.lex_state = 11},
  [539] = {.lex_state = 11},
  [540] = {.lex_state = 11},
  [541] = {.lex_state = 9},
  [542] = {.lex_state = 9},
  [543] = {.lex_state = 9},
  [544] = {.lex_state = 9},
  [545] = {.lex_state = 9},
  [546] = {.lex_state = 9},
  [547] = {.lex_state = 9},
  [548] = {.lex_state = 9},
  [549] = {.lex_state = 9},
  [550] = {.lex_state = 9},
  [551] = {.lex_state = 9},
  [552] = {.lex_state = 11},
  [553] = {.lex_state = 9},
  [554] = {.lex_state = 9},
  [555] = {.lex_state = 9},
  [556] = {.lex_state = 11},
  [557] = {.lex_state = 9},
  [558] = {.lex_state = 3},
  [559] = {.lex_state = 11},
  [560] = {.lex_state = 11},
  [561] = {.lex_state = 9},
  [562] = {.lex_state = 3},
  [563] = {.lex_state = 9},
  [564] = {.lex_state = 9},
  [565] = {.lex_state = 9},
  [566] = {.lex_state = 9},
  [567] = {.lex_state = 9},
  [568] = {.lex_state = 3},
  [569] = {.lex_state = 9},
  [570] = {.lex_state = 9},
  [571] = {.lex_state = 9},
  [572] = {.lex_state = 9},
  [573] = {.lex_state = 3},
  [574] = {.lex_state = 9},
  [575] = {.lex_state = 9},
  [576] = {.lex_state = 11},
  [577] = {.lex_state = 9},
  [578] = {.lex_state = 3},
  [579] = {.lex_state = 14},
  [580] = {.lex_state = 7},
  [581] = {.lex_state = 7},
  [582] = {.lex_state = 7},
  [583] = {.lex_state = 7},
  [584] = {.lex_state = 7},
  [585] = {.lex_state = 7},
  [586] = {.lex_state = 7},
  [587] = {.lex_state = 7},
  [588] = {.lex_state = 12},
  [589] = {.lex_state = 12},
  [590] = {.lex_state = 3},
  [591] = {.lex_state = 3},
  [592] = {.lex_state = 3},
  [593] = {.lex_state = 12},
  [594] = {.lex_state = 3},
  [595] = {.lex_state = 12},
  [596] = {.lex_state = 12},
  [597] = {.lex_state = 11},
  [598] = {.lex_state = 11},
  [599] = {.lex_state = 11},
  [600] = {.lex_state = 12},
  [601] = {.lex_state = 14},
  [602] = {.lex_state = 12},
  [603] = {.lex_state = 3},
  [604] = {.lex_state = 12},
  [605] = {.lex_state = 11},
  [606] = {.lex_state = 14},
  [607] = {.lex_state = 12},
  [608] = {.lex_state = 12},
  [609] = {.lex_state = 11},
  [610] = {.lex_state = 12},
  [611] = {.lex_state = 3},
  [612] = {.lex_state = 12},
  [613] = {.lex_state = 15},
  [614] = {.lex_state = 3},
  [615] = {.lex_state = 11},
  [616] = {.lex_state = 15},
  [617] = {.lex_state = 12},
  [618] = {.lex_state = 12},
  [619] = {.lex_state = 11},
  [620] = {.lex_state = 12},
  [621] = {.lex_state = 12},
  [622] = {.lex_state = 12},
  [623] = {.lex_state = 12},
  [624] = {.lex_state = 12},
  [625] = {.lex_state = 12},
  [626] = {.lex_state = 12},
  [627] = {.lex_state = 11},
  [628] = {.lex_state = 12},
  [629] = {.lex_state = 11},
  [630] = {.lex_state = 3},
  [631] = {.lex_state = 15},
  [632] = {.lex_state = 12},
  [633] = {.lex_state = 15},
  [634] = {.lex_state = 12},
  [635] = {.lex_state = 12},
  [636] = {.lex_state = 12},
  [637] = {.lex_state = 12},
  [638] = {.lex_state = 12},
  [639] = {.lex_state = 3},
  [640] = {.lex_state = 3},
  [641] = {.lex_state = 12},
  [642] = {.lex_state = 12},
  [643] = {.lex_state = 3},
  [644] = {.lex_state = 3},
  [645] = {.lex_state = 3},
  [646] = {.lex_state = 12},
  [647] = {.lex_state = 12},
  [648] = {.lex_state = 3},
  [649] = {.lex_state = 11},
  [650] = {.lex_state = 12},
  [651] = {.lex_state = 12},
  [652] = {.lex_state = 7},
  [653] = {.lex_state = 3},
  [654] = {.lex_state = 7},
  [655] = {.lex_state = 3},
  [656] = {.lex_state = 7},
  [657] = {.lex_state = 3},
  [658] = {.lex_state = 3},
  [659] = {.lex_state = 3},
  [660] = {.lex_state = 3},
  [661] = {.lex_state = 3},
  [662] = {.lex_state = 3},
  [663] = {.lex_state = 3},
  [664] = {.lex_state = 3},
  [665] = {.lex_state = 3},
  [666] = {.lex_state = 7},
  [667] = {.lex_state = 7},
  [668] = {.lex_state = 3},
  [669] = {.lex_state = 3},
  [670] = {.lex_state = 3},
  [671] = {.lex_state = 7},
  [672] = {.lex_state = 3},
  [673] = {.lex_state = 3},
  [674] = {.lex_state = 7},
  [675] = {.lex_state = 3},
  [676] = {.lex_state = 3},
  [677] = {.lex_state = 3},
  [678] = {.lex_state = 3},
  [679] = {.lex_state = 3},
  [680] = {.lex_state = 3},
  [681] = {.lex_state = 7},
  [682] = {.lex_state = 3},
  [683] = {.lex_state = 7},
  [684] = {.lex_state = 3},
  [685] = {.lex_state = 3},
  [686] = {.lex_state = 3},
  [687] = {.lex_state = 3},
  [688] = {.lex_state = 3},
  [689] = {.lex_state = 3},
  [690] = {.lex_state = 3},
  [691] = {.lex_state = 3},
  [692] = {.lex_state = 3},
  [693] = {.lex_state = 3},
  [694] = {.lex_state = 3},
  [695] = {.lex_state = 3},
  [696] = {.lex_state = 7},
  [697] = {.lex_state = 7},
  [698] = {.lex_state = 7},
  [699] = {.lex_state = 7},
  [700] = {.lex_state = 7},
  [701] = {.lex_state = 7},
  [702] = {.lex_state = 7},
  [703] = {.lex_state = 7},
  [704] = {.lex_state = 7},
  [705] = {.lex_state = 11},
  [706] = {.lex_state = 7},
  [707] = {.lex_state = 7},
  [708] = {.lex_state = 11},
  [709] = {.lex_state = 7},
  [710] = {.lex_state = 11},
  [711] = {.lex_state = 7},
  [712] = {.lex_state = 7},
  [713] = {.lex_state = 7},
  [714] = {.lex_state = 7},
  [715] = {.lex_state = 7},
  [716] = {.lex_state = 7},
  [717] = {.lex_state = 0},
  [718] = {.lex_state = 7},
  [719] = {.lex_state = 7},
  [720] = {.lex_state = 0},
  [721] = {.lex_state = 7},
  [722] = {.lex_state = 7},
  [723] = {.lex_state = 7},
  [724] = {.lex_state = 7},
  [725] = {.lex_state = 7},
  [726] = {.lex_state = 7},
  [727] = {.lex_state = 7},
  [728] = {.lex_state = 7},
  [729] = {.lex_state = 0},
  [730] = {.lex_state = 0},
  [731] = {.lex_state = 0},
  [732] = {.lex_state = 16},
  [733] = {.lex_state = 0},
  [734] = {.lex_state = 266},
  [735] = {.lex_state = 16},
  [736] = {.lex_state = 0},
  [737] = {.lex_state = 0},
  [738] = {.lex_state = 0},
  [739] = {.lex_state = 1},
  [740] = {.lex_state = 1},
  [741] = {.lex_state = 266},
  [742] = {.lex_state = 1},
  [743] = {.lex_state = 0},
  [744] = {.lex_state = 1},
  [745] = {.lex_state = 16},
  [746] = {.lex_state = 0},
  [747] = {.lex_state = 0},
  [748] = {.lex_state = 3},
  [749] = {.lex_state = 0},
  [750] = {.lex_state = 0},
  [751] = {.lex_state = 16},
  [752] = {.lex_state = 1},
  [753] = {.lex_state = 0},
  [754] = {.lex_state = 268},
  [755] = {.lex_state = 7},
  [756] = {.lex_state = 0},
  [757] = {.lex_state = 0},
  [758] = {.lex_state = 1},
  [759] = {.lex_state = 0},
  [760] = {.lex_state = 0},
  [761] = {.lex_state = 0},
  [762] = {.lex_state = 16},
  [763] = {.lex_state = 1},
  [764] = {.lex_state = 16},
  [765] = {.lex_state = 0},
  [766] = {.lex_state = 16},
  [767] = {.lex_state = 0},
  [768] = {.lex_state = 0},
  [769] = {.lex_state = 16},
  [770] = {.lex_state = 0},
  [771] = {.lex_state = 0},
  [772] = {.lex_state = 16},
  [773] = {.lex_state = 1},
  [774] = {.lex_state = 1},
  [775] = {.lex_state = 0},
  [776] = {.lex_state = 1},
  [777] = {.lex_state = 0},
  [778] = {.lex_state = 0},
  [779] = {.lex_state = 0},
  [780] = {.lex_state = 1},
  [781] = {.lex_state = 1},
  [782] = {.lex_state = 268},
  [783] = {.lex_state = 1},
  [784] = {.lex_state = 0},
  [785] = {.lex_state = 7},
  [786] = {.lex_state = 16},
  [787] = {.lex_state = 0},
  [788] = {.lex_state = 0},
  [789] = {.lex_state = 0},
  [790] = {.lex_state = 1},
  [791] = {.lex_state = 266},
  [792] = {.lex_state = 1},
  [793] = {.lex_state = 16},
  [794] = {.lex_state = 0},
  [795] = {.lex_state = 1},
  [796] = {.lex_state = 0},
  [797] = {.lex_state = 0},
  [798] = {.lex_state = 3},
  [799] = {.lex_state = 1},
  [800] = {.lex_state = 266},
  [801] = {.lex_state = 266},
  [802] = {.lex_state = 0},
  [803] = {.lex_state = 0},
  [804] = {.lex_state = 266},
  [805] = {.lex_state = 1},
  [806] = {.lex_state = 1},
  [807] = {.lex_state = 16},
  [808] = {.lex_state = 0},
  [809] = {.lex_state = 0},
  [810] = {.lex_state = 16},
  [811] = {.lex_state = 0},
  [812] = {.lex_state = 1},
  [813] = {.lex_state = 0},
  [814] = {.lex_state = 0},
  [815] = {.lex_state = 0},
  [816] = {.lex_state = 16},
  [817] = {.lex_state = 0},
  [818] = {.lex_state = 1},
  [819] = {.lex_state = 0},
  [820] = {.lex_state = 0},
  [821] = {.lex_state = 16},
  [822] = {.lex_state = 266},
  [823] = {.lex_state = 0},
  [824] = {.lex_state = 0},
  [825] = {.lex_state = 266},
  [826] = {.lex_state = 0},
  [827] = {.lex_state = 0},
  [828] = {.lex_state = 268},
  [829] = {.lex_state = 0},
  [830] = {.lex_state = 0},
  [831] = {.lex_state = 0},
  [832] = {.lex_state = 16},
  [833] = {.lex_state = 266},
  [834] = {.lex_state = 1},
  [835] = {.lex_state = 289},
  [836] = {.lex_state = 3},
  [837] = {.lex_state = 0},
  [838] = {.lex_state = 1},
  [839] = {.lex_state = 7},
  [840] = {.lex_state = 7},
  [841] = {.lex_state = 7},
  [842] = {.lex_state = 7},
  [843] = {.lex_state = 0},
  [844] = {.lex_state = 266},
  [845] = {.lex_state = 7},
  [846] = {.lex_state = 7},
  [847] = {.lex_state = 7},
  [848] = {.lex_state = 0},
  [849] = {.lex_state = 7},
  [850] = {.lex_state = 7},
  [851] = {.lex_state = 0},
  [852] = {.lex_state = 7},
  [853] = {.lex_state = 7},
  [854] = {.lex_state = 0},
  [855] = {.lex_state = 0},
  [856] = {.lex_state = 0},
  [857] = {.lex_state = 7},
  [858] = {.lex_state = 7},
  [859] = {.lex_state = 16},
  [860] = {.lex_state = 7},
  [861] = {.lex_state = 7},
  [862] = {.lex_state = 7},
  [863] = {.lex_state = 266},
  [864] = {.lex_state = 7},
  [865] = {.lex_state = 7},
  [866] = {.lex_state = 7},
  [867] = {.lex_state = 0},
  [868] = {.lex_state = 0},
  [869] = {.lex_state = 7},
  [870] = {.lex_state = 7},
  [871] = {.lex_state = 0},
  [872] = {.lex_state = 0},
  [873] = {.lex_state = 0},
  [874] = {.lex_state = 7},
  [875] = {.lex_state = 7},
  [876] = {.lex_state = 266},
  [877] = {.lex_state = 7},
  [878] = {.lex_state = 16},
  [879] = {.lex_state = 7},
  [880] = {.lex_state = 0},
  [881] = {.lex_state = 0},
  [882] = {.lex_state = 0},
  [883] = {.lex_state = 7},
  [884] = {.lex_state = 0},
  [885] = {.lex_state = 7},
  [886] = {.lex_state = 266},
  [887] = {.lex_state = 0},
  [888] = {.lex_state = 0},
  [889] = {.lex_state = 7},
  [890] = {.lex_state = 0},
  [891] = {.lex_state = 0},
  [892] = {.lex_state = 0},
  [893] = {.lex_state = 0},
  [894] = {.lex_state = 0},
  [895] = {.lex_state = 7},
  [896] = {.lex_state = 7},
  [897] = {.lex_state = 7},
  [898] = {.lex_state = 0},
  [899] = {.lex_state = 0},
  [900] = {.lex_state = 7},
  [901] = {.lex_state = 0},
  [902] = {.lex_state = 0},
  [903] = {.lex_state = 7},
  [904] = {.lex_state = 7},
  [905] = {.lex_state = 7},
  [906] = {.lex_state = 266},
  [907] = {.lex_state = 7},
  [908] = {.lex_state = 0},
  [909] = {.lex_state = 7},
  [910] = {.lex_state = 0},
  [911] = {.lex_state = 7},
  [912] = {.lex_state = 7},
  [913] = {.lex_state = 0},
  [914] = {.lex_state = 7},
  [915] = {.lex_state = 7},
  [916] = {.lex_state = 0},
  [917] = {.lex_state = 7},
  [918] = {.lex_state = 0},
  [919] = {.lex_state = 7},
  [920] = {.lex_state = 0},
  [921] = {.lex_state = 289},
  [922] = {.lex_state = 7},
  [923] = {.lex_state = 7},
  [924] = {.lex_state = 7},
  [925] = {.lex_state = 7},
  [926] = {.lex_state = 7},
  [927] = {.lex_state = 7},
  [928] = {.lex_state = 7},
  [929] = {.lex_state = 7},
  [930] = {.lex_state = 0},
  [931] = {.lex_state = 7},
  [932] = {.lex_state = 7},
  [933] = {.lex_state = 0},
  [934] = {.lex_state = 7},
  [935] = {.lex_state = 0},
  [936] = {.lex_state = 7},
  [937] = {.lex_state = 7},
  [938] = {.lex_state = 7},
  [939] = {.lex_state = 0},
  [940] = {.lex_state = 0},
  [941] = {.lex_state = 268},
  [942] = {.lex_state = 0},
  [943] = {.lex_state = 266},
  [944] = {.lex_state = 0},
  [945] = {.lex_state = 0},
  [946] = {.lex_state = 7},
  [947] = {.lex_state = 7},
  [948] = {.lex_state = 7},
  [949] = {.lex_state = 0},
  [950] = {.lex_state = 0},
  [951] = {.lex_state = 0},
  [952] = {.lex_state = 0},
  [953] = {.lex_state = 0},
  [954] = {.lex_state = 0},
  [955] = {.lex_state = 7},
  [956] = {.lex_state = 0},
  [957] = {.lex_state = 266},
  [958] = {.lex_state = 0},
  [959] = {.lex_state = 7},
  [960] = {.lex_state = 266},
  [961] = {.lex_state = 7},
  [962] = {.lex_state = 0},
  [963] = {.lex_state = 0},
  [964] = {.lex_state = 0},
  [965] = {.lex_state = 0},
  [966] = {.lex_state = 0},
  [967] = {.lex_state = 268},
  [968] = {.lex_state = 0},
  [969] = {.lex_state = 0},
  [970] = {.lex_state = 7},
  [971] = {.lex_state = 7},
  [972] = {.lex_state = 0},
  [973] = {.lex_state = 7},
  [974] = {.lex_state = 0},
  [975] = {.lex_state = 0},
  [976] = {.lex_state = 0},
  [977] = {.lex_state = 266},
  [978] = {.lex_state = 16},
  [979] = {.lex_state = 0},
  [980] = {.lex_state = 266},
  [981] = {.lex_state = 7},
  [982] = {.lex_state = 0},
  [983] = {.lex_state = 266},
  [984] = {.lex_state = 0},
  [985] = {.lex_state = 7},
  [986] = {.lex_state = 0},
  [987] = {.lex_state = 7},
  [988] = {.lex_state = 7},
  [989] = {.lex_state = 0},
  [990] = {.lex_state = 7},
  [991] = {.lex_state = 0},
  [992] = {.lex_state = 7},
  [993] = {.lex_state = 7},
  [994] = {.lex_state = 7},
  [995] = {.lex_state = 0},
  [996] = {.lex_state = 7},
  [997] = {.lex_state = 7},
  [998] = {.lex_state = 0},
  [999] = {.lex_state = 7},
  [1000] = {.lex_state = 268},
  [1001] = {.lex_state = 0},
  [1002] = {.lex_state = 0},
  [1003] = {.lex_state = 0},
  [1004] = {.lex_state = 0},
  [1005] = {.lex_state = 0},
  [1006] = {.lex_state = 266},
  [1007] = {.lex_state = 0},
  [1008] = {.lex_state = 0},
  [1009] = {.lex_state = 0},
  [1010] = {.lex_state = 7},
  [1011] = {.lex_state = 0},
  [1012] = {.lex_state = 0},
  [1013] = {.lex_state = 7},
  [1014] = {.lex_state = 7},
  [1015] = {.lex_state = 7},
  [1016] = {.lex_state = 0},
  [1017] = {.lex_state = 0},
  [1018] = {.lex_state = 7},
  [1019] = {.lex_state = 7},
  [1020] = {.lex_state = 0},
  [1021] = {.lex_state = 7},
  [1022] = {.lex_state = 7},
  [1023] = {.lex_state = 7},
  [1024] = {.lex_state = 0},
  [1025] = {.lex_state = 7},
  [1026] = {.lex_state = 0},
  [1027] = {.lex_state = 7},
  [1028] = {.lex_state = 0},
  [1029] = {.lex_state = 266},
  [1030] = {.lex_state = 7},
  [1031] = {.lex_state = 266},
  [1032] = {.lex_state = 0},
  [1033] = {.lex_state = 7},
  [1034] = {.lex_state = 0},
  [1035] = {.lex_state = 0},
  [1036] = {.lex_state = 7},
  [1037] = {.lex_state = 7},
  [1038] = {.lex_state = 268},
  [1039] = {.lex_state = 7},
  [1040] = {.lex_state = 0},
  [1041] = {.lex_state = 0},
  [1042] = {.lex_state = 7},
  [1043] = {.lex_state = 0},
  [1044] = {.lex_state = 0},
  [1045] = {.lex_state = 268},
  [1046] = {.lex_state = 266},
  [1047] = {.lex_state = 7},
  [1048] = {.lex_state = 7},
  [1049] = {.lex_state = 0},
  [1050] = {.lex_state = 266},
  [1051] = {.lex_state = 268},
  [1052] = {.lex_state = 0},
  [1053] = {.lex_state = 0},
  [1054] = {.lex_state = 0},
  [1055] = {.lex_state = 0},
  [1056] = {.lex_state = 0},
  [1057] = {.lex_state = 266},
  [1058] = {.lex_state = 7},
  [1059] = {.lex_state = 266},
  [1060] = {.lex_state = 0},
  [1061] = {.lex_state = 7},
  [1062] = {.lex_state = 0},
  [1063] = {.lex_state = 266},
  [1064] = {.lex_state = 0},
  [1065] = {.lex_state = 7},
  [1066] = {.lex_state = 0},
  [1067] = {.lex_state = 0},
  [1068] = {.lex_state = 0},
  [1069] = {.lex_state = 266},
  [1070] = {.lex_state = 7},
  [1071] = {.lex_state = 0},
  [1072] = {.lex_state = 0},
  [1073] = {.lex_state = 0},
  [1074] = {.lex_state = 0},
  [1075] = {.lex_state = 266},
  [1076] = {.lex_state = 7},
  [1077] = {.lex_state = 266},
  [1078] = {.lex_state = 0},
  [1079] = {.lex_state = 0},
  [1080] = {.lex_state = 266},
  [1081] = {.lex_state = 0},
  [1082] = {.lex_state = 7},
  [1083] = {.lex_state = 7},
  [1084] = {.lex_state = 7},
  [1085] = {.lex_state = 7},
  [1086] = {.lex_state = 7},
  [1087] = {.lex_state = 0},
  [1088] = {.lex_state = 268},
  [1089] = {.lex_state = 7},
  [1090] = {.lex_state = 0},
  [1091] = {.lex_state = 0},
  [1092] = {.lex_state = 7},
  [1093] = {.lex_state = 266},
  [1094] = {.lex_state = 0},
  [1095] = {.lex_state = 268},
  [1096] = {.lex_state = 266},
  [1097] = {.lex_state = 0},
  [1098] = {.lex_state = 0},
  [1099] = {.lex_state = 0},
  [1100] = {.lex_state = 0},
  [1101] = {.lex_state = 0},
  [1102] = {.lex_state = 7},
  [1103] = {.lex_state = 16},
  [1104] = {.lex_state = 7},
  [1105] = {.lex_state = 0},
  [1106] = {.lex_state = 7},
  [1107] = {.lex_state = 0},
  [1108] = {.lex_state = 0},
  [1109] = {.lex_state = 7},
  [1110] = {.lex_state = 0},
  [1111] = {.lex_state = 0},
  [1112] = {.lex_state = 7},
  [1113] = {.lex_state = 0},
  [1114] = {.lex_state = 0},
  [1115] = {.lex_state = 0},
  [1116] = {.lex_state = 0},
  [1117] = {.lex_state = 0},
  [1118] = {.lex_state = 0},
  [1119] = {.lex_state = 266},
  [1120] = {.lex_state = 266},
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
    [sym_module] = STATE(1101),
    [sym_class] = STATE(1101),
    [sym__class] = STATE(835),
    [sym_annotation] = STATE(910),
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
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_end,
    ACTIONS(18), 1,
      anon_sym_LPAREN,
    ACTIONS(20), 1,
      anon_sym_uses,
    ACTIONS(23), 1,
      anon_sym_type,
    ACTIONS(26), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_forward,
    ACTIONS(33), 1,
      anon_sym_external,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(37), 1,
      anon_sym_return,
    STATE(9), 1,
      sym_parameter_list,
    STATE(22), 1,
      sym_function_return_type,
    STATE(37), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(748), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(31), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    ACTIONS(39), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(41), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(89), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(356), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(13), 9,
      sym_identifier,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [102] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(18), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_forward,
    ACTIONS(33), 1,
      anon_sym_external,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(37), 1,
      anon_sym_return,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_end,
    ACTIONS(50), 1,
      anon_sym_uses,
    ACTIONS(53), 1,
      anon_sym_type,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      sym_parameter_list,
    STATE(21), 1,
      sym_function_return_type,
    STATE(38), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(748), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(39), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(41), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(59), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(89), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(389), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(45), 9,
      sym_identifier,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [204] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(20), 1,
      anon_sym_uses,
    ACTIONS(23), 1,
      anon_sym_type,
    ACTIONS(26), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(61), 1,
      anon_sym_end,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      anon_sym_forward,
    ACTIONS(70), 1,
      anon_sym_external,
    ACTIONS(72), 1,
      anon_sym_return,
    STATE(10), 1,
      sym_parameter_list,
    STATE(30), 1,
      sym_function_return_type,
    STATE(48), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(798), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(68), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    ACTIONS(74), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(76), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(91), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(401), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(13), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [305] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      anon_sym_uses,
    ACTIONS(53), 1,
      anon_sym_type,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      anon_sym_forward,
    ACTIONS(70), 1,
      anon_sym_external,
    ACTIONS(72), 1,
      anon_sym_return,
    ACTIONS(78), 1,
      anon_sym_end,
    STATE(16), 1,
      sym_parameter_list,
    STATE(28), 1,
      sym_function_return_type,
    STATE(44), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(798), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(74), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(76), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(81), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(91), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(472), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(45), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [406] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(50), 1,
      anon_sym_uses,
    ACTIONS(53), 1,
      anon_sym_type,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      anon_sym_end,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      anon_sym_forward,
    ACTIONS(92), 1,
      anon_sym_external,
    ACTIONS(94), 1,
      anon_sym_return,
    STATE(24), 1,
      sym_parameter_list,
    STATE(33), 1,
      sym_function_return_type,
    STATE(58), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(836), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(90), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    ACTIONS(96), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(98), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(108), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(491), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(45), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [504] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(20), 1,
      anon_sym_uses,
    ACTIONS(23), 1,
      anon_sym_type,
    ACTIONS(26), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      anon_sym_forward,
    ACTIONS(92), 1,
      anon_sym_external,
    ACTIONS(94), 1,
      anon_sym_return,
    ACTIONS(100), 1,
      anon_sym_end,
    STATE(23), 1,
      sym_parameter_list,
    STATE(32), 1,
      sym_function_return_type,
    STATE(49), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(836), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(96), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(98), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(103), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(108), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(500), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(13), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [602] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_forward,
    ACTIONS(33), 1,
      anon_sym_external,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(37), 1,
      anon_sym_return,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      anon_sym_end,
    ACTIONS(112), 1,
      anon_sym_uses,
    ACTIONS(115), 1,
      anon_sym_type,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_function_return_type,
    STATE(39), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(748), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(39), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(41), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(121), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(89), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(359), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(107), 9,
      sym_identifier,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [698] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_forward,
    ACTIONS(33), 1,
      anon_sym_external,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(37), 1,
      anon_sym_return,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      anon_sym_end,
    ACTIONS(130), 1,
      anon_sym_uses,
    ACTIONS(133), 1,
      anon_sym_type,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_function_return_type,
    STATE(42), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(748), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(39), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(41), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(139), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(89), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(336), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(125), 9,
      sym_identifier,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [794] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(66), 1,
      anon_sym_forward,
    ACTIONS(70), 1,
      anon_sym_external,
    ACTIONS(72), 1,
      anon_sym_return,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      anon_sym_uses,
    ACTIONS(133), 1,
      anon_sym_type,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_end,
    STATE(29), 1,
      sym_function_return_type,
    STATE(43), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(798), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(74), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(76), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(144), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(91), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(422), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(125), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [889] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(146), 1,
      sym_identifier,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_array,
    ACTIONS(166), 1,
      sym__integer_literal,
    STATE(144), 1,
      sym__type_identifier,
    STATE(182), 1,
      sym_enum_variant_list,
    STATE(231), 1,
      sym__set_type,
    STATE(243), 1,
      sym__function_type,
    STATE(244), 1,
      sym__enum_type,
    STATE(249), 1,
      sym__record_type,
    STATE(250), 1,
      sym__range_type,
    STATE(252), 1,
      sym__array_type,
    STATE(260), 1,
      sym__pointer_type,
    STATE(568), 1,
      sym__string_literal,
    STATE(908), 1,
      sym_enum_derived,
    ACTIONS(152), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(162), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1060), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(156), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(150), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
    STATE(98), 11,
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
  [988] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(146), 1,
      sym_identifier,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_array,
    ACTIONS(166), 1,
      sym__integer_literal,
    STATE(144), 1,
      sym__type_identifier,
    STATE(182), 1,
      sym_enum_variant_list,
    STATE(231), 1,
      sym__set_type,
    STATE(243), 1,
      sym__function_type,
    STATE(244), 1,
      sym__enum_type,
    STATE(249), 1,
      sym__record_type,
    STATE(250), 1,
      sym__range_type,
    STATE(252), 1,
      sym__array_type,
    STATE(260), 1,
      sym__pointer_type,
    STATE(568), 1,
      sym__string_literal,
    STATE(908), 1,
      sym_enum_derived,
    ACTIONS(152), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(162), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1060), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(156), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(150), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
    STATE(107), 11,
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
  [1087] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_array,
    STATE(120), 1,
      sym__type_identifier,
    STATE(127), 1,
      sym_enum_variant_list,
    STATE(145), 1,
      sym__range_type,
    STATE(167), 1,
      sym__function_type,
    STATE(168), 1,
      sym__enum_type,
    STATE(169), 1,
      sym__set_type,
    STATE(170), 1,
      sym__pointer_type,
    STATE(171), 1,
      sym__record_type,
    STATE(175), 1,
      sym__array_type,
    STATE(568), 1,
      sym__string_literal,
    STATE(920), 1,
      sym_enum_derived,
    ACTIONS(174), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(182), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(958), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(178), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(172), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
    STATE(87), 11,
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
  [1186] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_array,
    STATE(120), 1,
      sym__type_identifier,
    STATE(127), 1,
      sym_enum_variant_list,
    STATE(145), 1,
      sym__range_type,
    STATE(167), 1,
      sym__function_type,
    STATE(168), 1,
      sym__enum_type,
    STATE(169), 1,
      sym__set_type,
    STATE(170), 1,
      sym__pointer_type,
    STATE(171), 1,
      sym__record_type,
    STATE(175), 1,
      sym__array_type,
    STATE(568), 1,
      sym__string_literal,
    STATE(920), 1,
      sym_enum_derived,
    ACTIONS(174), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(182), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(958), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(178), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(172), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
    STATE(88), 11,
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
  [1285] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(198), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_array,
    STATE(132), 1,
      sym__type_identifier,
    STATE(151), 1,
      sym_enum_variant_list,
    STATE(193), 1,
      sym__pointer_type,
    STATE(215), 1,
      sym__function_type,
    STATE(220), 1,
      sym__enum_type,
    STATE(222), 1,
      sym__set_type,
    STATE(224), 1,
      sym__record_type,
    STATE(225), 1,
      sym__range_type,
    STATE(226), 1,
      sym__array_type,
    STATE(568), 1,
      sym__string_literal,
    STATE(893), 1,
      sym_enum_derived,
    ACTIONS(192), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(200), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1024), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(196), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(190), 7,
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
  [1384] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(66), 1,
      anon_sym_forward,
    ACTIONS(70), 1,
      anon_sym_external,
    ACTIONS(72), 1,
      anon_sym_return,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      anon_sym_uses,
    ACTIONS(115), 1,
      anon_sym_type,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_end,
    STATE(27), 1,
      sym_function_return_type,
    STATE(45), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(798), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(74), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(76), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(207), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(91), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(442), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(107), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [1479] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(146), 1,
      sym_identifier,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(160), 1,
      anon_sym_DOT,
    ACTIONS(164), 1,
      anon_sym_array,
    ACTIONS(166), 1,
      sym__integer_literal,
    STATE(144), 1,
      sym__type_identifier,
    STATE(182), 1,
      sym_enum_variant_list,
    STATE(231), 1,
      sym__set_type,
    STATE(243), 1,
      sym__function_type,
    STATE(244), 1,
      sym__enum_type,
    STATE(249), 1,
      sym__record_type,
    STATE(250), 1,
      sym__range_type,
    STATE(252), 1,
      sym__array_type,
    STATE(260), 1,
      sym__pointer_type,
    STATE(568), 1,
      sym__string_literal,
    STATE(908), 1,
      sym_enum_derived,
    ACTIONS(152), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(162), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1060), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(156), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(150), 7,
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
  [1578] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(198), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_array,
    STATE(132), 1,
      sym__type_identifier,
    STATE(151), 1,
      sym_enum_variant_list,
    STATE(193), 1,
      sym__pointer_type,
    STATE(215), 1,
      sym__function_type,
    STATE(220), 1,
      sym__enum_type,
    STATE(222), 1,
      sym__set_type,
    STATE(224), 1,
      sym__record_type,
    STATE(225), 1,
      sym__range_type,
    STATE(226), 1,
      sym__array_type,
    STATE(568), 1,
      sym__string_literal,
    STATE(893), 1,
      sym_enum_derived,
    ACTIONS(192), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(200), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1024), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(196), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(190), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
    STATE(95), 11,
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
  [1677] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(180), 1,
      anon_sym_DOT,
    ACTIONS(184), 1,
      anon_sym_array,
    STATE(120), 1,
      sym__type_identifier,
    STATE(127), 1,
      sym_enum_variant_list,
    STATE(145), 1,
      sym__range_type,
    STATE(167), 1,
      sym__function_type,
    STATE(168), 1,
      sym__enum_type,
    STATE(169), 1,
      sym__set_type,
    STATE(170), 1,
      sym__pointer_type,
    STATE(171), 1,
      sym__record_type,
    STATE(175), 1,
      sym__array_type,
    STATE(568), 1,
      sym__string_literal,
    STATE(920), 1,
      sym_enum_derived,
    ACTIONS(174), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(182), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(958), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(178), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(172), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
    STATE(86), 11,
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
  [1776] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(198), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_array,
    STATE(132), 1,
      sym__type_identifier,
    STATE(151), 1,
      sym_enum_variant_list,
    STATE(193), 1,
      sym__pointer_type,
    STATE(215), 1,
      sym__function_type,
    STATE(220), 1,
      sym__enum_type,
    STATE(222), 1,
      sym__set_type,
    STATE(224), 1,
      sym__record_type,
    STATE(225), 1,
      sym__range_type,
    STATE(226), 1,
      sym__array_type,
    STATE(568), 1,
      sym__string_literal,
    STATE(893), 1,
      sym_enum_derived,
    ACTIONS(192), 2,
      anon_sym_refTo,
      anon_sym_listOf,
    ACTIONS(200), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1024), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(196), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(190), 7,
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
  [1875] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_forward,
    ACTIONS(33), 1,
      anon_sym_external,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      anon_sym_end,
    ACTIONS(112), 1,
      anon_sym_uses,
    ACTIONS(115), 1,
      anon_sym_type,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(748), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(39), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(41), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(121), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(89), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(359), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(107), 9,
      sym_identifier,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [1965] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_forward,
    ACTIONS(33), 1,
      anon_sym_external,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      anon_sym_end,
    ACTIONS(130), 1,
      anon_sym_uses,
    ACTIONS(133), 1,
      anon_sym_type,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(748), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(39), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(41), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(139), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(89), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(336), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(125), 9,
      sym_identifier,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [2055] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(88), 1,
      anon_sym_forward,
    ACTIONS(92), 1,
      anon_sym_external,
    ACTIONS(94), 1,
      anon_sym_return,
    ACTIONS(130), 1,
      anon_sym_uses,
    ACTIONS(133), 1,
      anon_sym_type,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_end,
    STATE(31), 1,
      sym_function_return_type,
    STATE(53), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(836), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(96), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(98), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(212), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(108), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(531), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(125), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [2147] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(88), 1,
      anon_sym_forward,
    ACTIONS(92), 1,
      anon_sym_external,
    ACTIONS(94), 1,
      anon_sym_return,
    ACTIONS(112), 1,
      anon_sym_uses,
    ACTIONS(115), 1,
      anon_sym_type,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(214), 1,
      anon_sym_end,
    STATE(34), 1,
      sym_function_return_type,
    STATE(50), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(836), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(96), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(98), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(217), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(108), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(492), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(107), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [2239] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_forward,
    ACTIONS(33), 1,
      anon_sym_external,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      anon_sym_end,
    ACTIONS(226), 1,
      anon_sym_uses,
    ACTIONS(229), 1,
      anon_sym_type,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(748), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(39), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(41), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(235), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(89), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(348), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(221), 9,
      sym_identifier,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [2329] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_forward,
    ACTIONS(33), 1,
      anon_sym_external,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 1,
      anon_sym_end,
    ACTIONS(244), 1,
      anon_sym_uses,
    ACTIONS(247), 1,
      anon_sym_type,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    STATE(40), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(748), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(39), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(41), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(253), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(89), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(346), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(239), 9,
      sym_identifier,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [2419] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(66), 1,
      anon_sym_forward,
    ACTIONS(70), 1,
      anon_sym_external,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(226), 1,
      anon_sym_uses,
    ACTIONS(229), 1,
      anon_sym_type,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_end,
    STATE(47), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(798), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(74), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(76), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(258), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(91), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(412), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(221), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [2508] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(66), 1,
      anon_sym_forward,
    ACTIONS(70), 1,
      anon_sym_external,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      anon_sym_uses,
    ACTIONS(115), 1,
      anon_sym_type,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_end,
    STATE(45), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(798), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(74), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(76), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(207), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(91), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(442), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(107), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [2597] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(66), 1,
      anon_sym_forward,
    ACTIONS(70), 1,
      anon_sym_external,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 1,
      anon_sym_uses,
    ACTIONS(247), 1,
      anon_sym_type,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(260), 1,
      anon_sym_end,
    STATE(46), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(798), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(74), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(76), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(263), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(91), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(424), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(239), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [2686] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(66), 1,
      anon_sym_forward,
    ACTIONS(70), 1,
      anon_sym_external,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      anon_sym_uses,
    ACTIONS(133), 1,
      anon_sym_type,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_end,
    STATE(43), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(798), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(74), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(76), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(144), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(91), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(422), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(125), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [2775] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(88), 1,
      anon_sym_forward,
    ACTIONS(92), 1,
      anon_sym_external,
    ACTIONS(244), 1,
      anon_sym_uses,
    ACTIONS(247), 1,
      anon_sym_type,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_end,
    STATE(51), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(836), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(96), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(98), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(268), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(108), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(478), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(239), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [2861] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(88), 1,
      anon_sym_forward,
    ACTIONS(92), 1,
      anon_sym_external,
    ACTIONS(130), 1,
      anon_sym_uses,
    ACTIONS(133), 1,
      anon_sym_type,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_end,
    STATE(53), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(836), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(96), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(98), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(212), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(108), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(531), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(125), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [2947] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(88), 1,
      anon_sym_forward,
    ACTIONS(92), 1,
      anon_sym_external,
    ACTIONS(112), 1,
      anon_sym_uses,
    ACTIONS(115), 1,
      anon_sym_type,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(214), 1,
      anon_sym_end,
    STATE(50), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(836), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(96), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(98), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(217), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(108), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(492), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(107), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [3033] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(88), 1,
      anon_sym_forward,
    ACTIONS(92), 1,
      anon_sym_external,
    ACTIONS(226), 1,
      anon_sym_uses,
    ACTIONS(229), 1,
      anon_sym_type,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    ACTIONS(270), 1,
      anon_sym_end,
    STATE(55), 1,
      sym_function_modifiers,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(836), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(96), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(98), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(273), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(108), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    STATE(519), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(221), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [3119] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(390), 1,
      sym__type_identifier,
    STATE(467), 1,
      sym_enum_variant_list,
    STATE(536), 1,
      sym__function_type,
    STATE(561), 1,
      sym__enum_type,
    STATE(563), 1,
      sym__set_type,
    STATE(564), 1,
      sym__pointer_type,
    STATE(565), 1,
      sym__record_type,
    STATE(566), 1,
      sym__range_type,
    STATE(567), 1,
      sym__array_type,
    STATE(568), 1,
      sym__string_literal,
    STATE(930), 1,
      sym_enum_derived,
    ACTIONS(287), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1066), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(283), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(279), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
    STATE(268), 9,
      sym__type,
      sym__type_identifier_or_primitive,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
      sym_range_type,
      sym_array_type,
  [3212] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(275), 1,
      sym_identifier,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(289), 1,
      anon_sym_array,
    STATE(390), 1,
      sym__type_identifier,
    STATE(467), 1,
      sym_enum_variant_list,
    STATE(536), 1,
      sym__function_type,
    STATE(561), 1,
      sym__enum_type,
    STATE(563), 1,
      sym__set_type,
    STATE(564), 1,
      sym__pointer_type,
    STATE(565), 1,
      sym__record_type,
    STATE(566), 1,
      sym__range_type,
    STATE(567), 1,
      sym__array_type,
    STATE(568), 1,
      sym__string_literal,
    STATE(930), 1,
      sym_enum_derived,
    ACTIONS(287), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1066), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(283), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(279), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
    STATE(270), 9,
      sym__type,
      sym__type_identifier_or_primitive,
      sym_function_type,
      sym_enum_type,
      sym_set_type,
      sym_pointer_type,
      sym_record_type,
      sym_range_type,
      sym_array_type,
  [3305] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_forward,
    ACTIONS(33), 1,
      anon_sym_external,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      anon_sym_end,
    ACTIONS(130), 1,
      anon_sym_uses,
    ACTIONS(133), 1,
      anon_sym_type,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(748), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(139), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(336), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(125), 9,
      sym_identifier,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [3379] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_forward,
    ACTIONS(33), 1,
      anon_sym_external,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      anon_sym_end,
    ACTIONS(112), 1,
      anon_sym_uses,
    ACTIONS(115), 1,
      anon_sym_type,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(748), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(121), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(359), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(107), 9,
      sym_identifier,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [3453] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_forward,
    ACTIONS(33), 1,
      anon_sym_external,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      anon_sym_end,
    ACTIONS(226), 1,
      anon_sym_uses,
    ACTIONS(229), 1,
      anon_sym_type,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(748), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(235), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(348), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(221), 9,
      sym_identifier,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [3527] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_forward,
    ACTIONS(33), 1,
      anon_sym_external,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 1,
      anon_sym_end,
    ACTIONS(298), 1,
      anon_sym_uses,
    ACTIONS(301), 1,
      anon_sym_type,
    ACTIONS(304), 1,
      anon_sym_LBRACK,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(748), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(307), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(391), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(293), 9,
      sym_identifier,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [3601] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_forward,
    ACTIONS(33), 1,
      anon_sym_external,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(313), 1,
      anon_sym_end,
    ACTIONS(316), 1,
      anon_sym_uses,
    ACTIONS(319), 1,
      anon_sym_type,
    ACTIONS(322), 1,
      anon_sym_LBRACK,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(748), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(325), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(316), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(311), 9,
      sym_identifier,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [3675] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_forward,
    ACTIONS(33), 1,
      anon_sym_external,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 1,
      anon_sym_end,
    ACTIONS(244), 1,
      anon_sym_uses,
    ACTIONS(247), 1,
      anon_sym_type,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(748), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(253), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(346), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(239), 9,
      sym_identifier,
      anon_sym_endModule,
      anon_sym_class,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [3749] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(66), 1,
      anon_sym_forward,
    ACTIONS(70), 1,
      anon_sym_external,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 1,
      anon_sym_uses,
    ACTIONS(247), 1,
      anon_sym_type,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(260), 1,
      anon_sym_end,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(798), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(263), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(424), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(239), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [3822] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(66), 1,
      anon_sym_forward,
    ACTIONS(70), 1,
      anon_sym_external,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      anon_sym_uses,
    ACTIONS(115), 1,
      anon_sym_type,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_end,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(798), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(207), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(442), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(107), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [3895] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(66), 1,
      anon_sym_forward,
    ACTIONS(70), 1,
      anon_sym_external,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(226), 1,
      anon_sym_uses,
    ACTIONS(229), 1,
      anon_sym_type,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_end,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(798), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(258), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(412), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(221), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [3968] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(66), 1,
      anon_sym_forward,
    ACTIONS(70), 1,
      anon_sym_external,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 1,
      anon_sym_uses,
    ACTIONS(301), 1,
      anon_sym_type,
    ACTIONS(304), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_end,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(798), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(330), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(432), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(293), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [4041] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(66), 1,
      anon_sym_forward,
    ACTIONS(70), 1,
      anon_sym_external,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(316), 1,
      anon_sym_uses,
    ACTIONS(319), 1,
      anon_sym_type,
    ACTIONS(322), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_end,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(798), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(335), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(428), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(311), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [4114] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(66), 1,
      anon_sym_forward,
    ACTIONS(70), 1,
      anon_sym_external,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      anon_sym_uses,
    ACTIONS(133), 1,
      anon_sym_type,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(141), 1,
      anon_sym_end,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(798), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(144), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(422), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(125), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [4187] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(88), 1,
      anon_sym_forward,
    ACTIONS(92), 1,
      anon_sym_external,
    ACTIONS(130), 1,
      anon_sym_uses,
    ACTIONS(133), 1,
      anon_sym_type,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_end,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(836), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(212), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(531), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(125), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [4257] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(88), 1,
      anon_sym_forward,
    ACTIONS(92), 1,
      anon_sym_external,
    ACTIONS(226), 1,
      anon_sym_uses,
    ACTIONS(229), 1,
      anon_sym_type,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    ACTIONS(270), 1,
      anon_sym_end,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(836), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(273), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(519), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(221), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [4327] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(88), 1,
      anon_sym_forward,
    ACTIONS(92), 1,
      anon_sym_external,
    ACTIONS(298), 1,
      anon_sym_uses,
    ACTIONS(301), 1,
      anon_sym_type,
    ACTIONS(304), 1,
      anon_sym_LBRACK,
    ACTIONS(337), 1,
      anon_sym_end,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(836), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(340), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(535), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(293), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [4397] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_class,
    ACTIONS(350), 1,
      anon_sym_uses,
    ACTIONS(352), 1,
      anon_sym_const,
    ACTIONS(354), 1,
      anon_sym_type,
    ACTIONS(356), 1,
      anon_sym_memory,
    ACTIONS(358), 1,
      anon_sym_LBRACK,
    STATE(328), 1,
      sym__variable_item,
    STATE(579), 1,
      sym_annotation,
    STATE(921), 1,
      sym__class,
    STATE(937), 1,
      sym_memory_modifiers,
    ACTIONS(346), 2,
      anon_sym_end,
      anon_sym_endModule,
    ACTIONS(360), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(57), 18,
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
      sym_function_signature_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym_module_repeat1,
  [4467] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(88), 1,
      anon_sym_forward,
    ACTIONS(92), 1,
      anon_sym_external,
    ACTIONS(244), 1,
      anon_sym_uses,
    ACTIONS(247), 1,
      anon_sym_type,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_end,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(836), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(268), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(478), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(239), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [4537] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(362), 1,
      ts_builtin_sym_end,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(369), 1,
      anon_sym_class,
    ACTIONS(372), 1,
      anon_sym_uses,
    ACTIONS(375), 1,
      anon_sym_const,
    ACTIONS(378), 1,
      anon_sym_type,
    ACTIONS(381), 1,
      anon_sym_memory,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    STATE(328), 1,
      sym__variable_item,
    STATE(579), 1,
      sym_annotation,
    STATE(921), 1,
      sym__class,
    STATE(937), 1,
      sym_memory_modifiers,
    ACTIONS(367), 2,
      anon_sym_end,
      anon_sym_endModule,
    ACTIONS(387), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(54), 18,
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
      sym_function_signature_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym_module_repeat1,
  [4607] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(88), 1,
      anon_sym_forward,
    ACTIONS(92), 1,
      anon_sym_external,
    ACTIONS(316), 1,
      anon_sym_uses,
    ACTIONS(319), 1,
      anon_sym_type,
    ACTIONS(322), 1,
      anon_sym_LBRACK,
    ACTIONS(390), 1,
      anon_sym_end,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(836), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(393), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(512), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(311), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [4677] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_class,
    ACTIONS(350), 1,
      anon_sym_uses,
    ACTIONS(352), 1,
      anon_sym_const,
    ACTIONS(354), 1,
      anon_sym_type,
    ACTIONS(356), 1,
      anon_sym_memory,
    ACTIONS(358), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      ts_builtin_sym_end,
    STATE(328), 1,
      sym__variable_item,
    STATE(579), 1,
      sym_annotation,
    STATE(921), 1,
      sym__class,
    STATE(937), 1,
      sym_memory_modifiers,
    ACTIONS(397), 2,
      anon_sym_end,
      anon_sym_endModule,
    ACTIONS(360), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(59), 18,
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
      sym_function_signature_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym_module_repeat1,
  [4747] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_class,
    ACTIONS(350), 1,
      anon_sym_uses,
    ACTIONS(352), 1,
      anon_sym_const,
    ACTIONS(354), 1,
      anon_sym_type,
    ACTIONS(356), 1,
      anon_sym_memory,
    ACTIONS(358), 1,
      anon_sym_LBRACK,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
    STATE(328), 1,
      sym__variable_item,
    STATE(579), 1,
      sym_annotation,
    STATE(921), 1,
      sym__class,
    STATE(937), 1,
      sym_memory_modifiers,
    ACTIONS(401), 2,
      anon_sym_end,
      anon_sym_endModule,
    ACTIONS(360), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(54), 18,
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
      sym_function_signature_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym_module_repeat1,
  [4817] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 1,
      anon_sym_var,
    ACTIONS(88), 1,
      anon_sym_forward,
    ACTIONS(92), 1,
      anon_sym_external,
    ACTIONS(112), 1,
      anon_sym_uses,
    ACTIONS(115), 1,
      anon_sym_type,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(214), 1,
      anon_sym_end,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(836), 1,
      sym_function_body_statements,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(217), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(131), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(492), 3,
      sym_forward_modifiers,
      sym__function_definition,
      sym_function_modifiers_external,
    ACTIONS(107), 8,
      sym_identifier,
      anon_sym_endClass,
      anon_sym_const,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(673), 11,
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
  [4887] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_class,
    ACTIONS(350), 1,
      anon_sym_uses,
    ACTIONS(352), 1,
      anon_sym_const,
    ACTIONS(354), 1,
      anon_sym_type,
    ACTIONS(356), 1,
      anon_sym_memory,
    ACTIONS(358), 1,
      anon_sym_LBRACK,
    ACTIONS(403), 1,
      ts_builtin_sym_end,
    STATE(328), 1,
      sym__variable_item,
    STATE(579), 1,
      sym_annotation,
    STATE(921), 1,
      sym__class,
    STATE(937), 1,
      sym_memory_modifiers,
    ACTIONS(405), 2,
      anon_sym_end,
      anon_sym_endModule,
    ACTIONS(360), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(54), 18,
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
      sym_function_signature_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym_module_repeat1,
  [4957] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_DOT,
    ACTIONS(421), 1,
      anon_sym_array,
    STATE(264), 1,
      sym__type_identifier,
    STATE(276), 1,
      sym_enum_variant_list,
    STATE(337), 1,
      sym__array_type,
    STATE(338), 1,
      sym__range_type,
    STATE(339), 1,
      sym__record_type,
    STATE(340), 1,
      sym__pointer_type,
    STATE(341), 1,
      sym__set_type,
    STATE(343), 1,
      sym__enum_type,
    STATE(344), 1,
      sym__function_type,
    STATE(345), 1,
      sym__type_identifier_or_primitive,
    STATE(568), 1,
      sym__string_literal,
    STATE(843), 1,
      sym_enum_derived,
    ACTIONS(419), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1041), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(415), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(411), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
  [5042] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_DOT,
    ACTIONS(421), 1,
      anon_sym_array,
    STATE(264), 1,
      sym__type_identifier,
    STATE(276), 1,
      sym_enum_variant_list,
    STATE(361), 1,
      sym__array_type,
    STATE(362), 1,
      sym__range_type,
    STATE(363), 1,
      sym__record_type,
    STATE(364), 1,
      sym__pointer_type,
    STATE(377), 1,
      sym__set_type,
    STATE(379), 1,
      sym__enum_type,
    STATE(380), 1,
      sym__function_type,
    STATE(382), 1,
      sym__type_identifier_or_primitive,
    STATE(568), 1,
      sym__string_literal,
    STATE(843), 1,
      sym_enum_derived,
    ACTIONS(419), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1041), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(415), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(411), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
  [5127] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(423), 1,
      sym_identifier,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      anon_sym_LBRACK,
    ACTIONS(433), 1,
      anon_sym_DOT,
    ACTIONS(437), 1,
      anon_sym_array,
    STATE(568), 1,
      sym__string_literal,
    STATE(578), 1,
      sym__type_identifier,
    STATE(592), 1,
      sym_enum_variant_list,
    STATE(653), 1,
      sym__array_type,
    STATE(657), 1,
      sym__enum_type,
    STATE(659), 1,
      sym__function_type,
    STATE(664), 1,
      sym__set_type,
    STATE(668), 1,
      sym__pointer_type,
    STATE(669), 1,
      sym__record_type,
    STATE(670), 1,
      sym__range_type,
    STATE(672), 1,
      sym__type_identifier_or_primitive,
    STATE(913), 1,
      sym_enum_derived,
    ACTIONS(435), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1105), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(431), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(427), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
  [5212] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(439), 1,
      sym_identifier,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_LBRACK,
    ACTIONS(449), 1,
      anon_sym_DOT,
    ACTIONS(453), 1,
      anon_sym_array,
    STATE(296), 1,
      sym__type_identifier,
    STATE(392), 1,
      sym_enum_variant_list,
    STATE(523), 1,
      sym__type_identifier_or_primitive,
    STATE(524), 1,
      sym__function_type,
    STATE(525), 1,
      sym__enum_type,
    STATE(526), 1,
      sym__set_type,
    STATE(527), 1,
      sym__pointer_type,
    STATE(528), 1,
      sym__record_type,
    STATE(529), 1,
      sym__range_type,
    STATE(530), 1,
      sym__array_type,
    STATE(568), 1,
      sym__string_literal,
    STATE(918), 1,
      sym_enum_derived,
    ACTIONS(451), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1072), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(447), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(443), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
  [5297] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(455), 1,
      sym_identifier,
    ACTIONS(457), 1,
      anon_sym_LPAREN,
    ACTIONS(461), 1,
      anon_sym_LBRACK,
    ACTIONS(465), 1,
      anon_sym_DOT,
    ACTIONS(469), 1,
      anon_sym_array,
    STATE(284), 1,
      sym__type_identifier,
    STATE(294), 1,
      sym_enum_variant_list,
    STATE(414), 1,
      sym__type_identifier_or_primitive,
    STATE(415), 1,
      sym__function_type,
    STATE(416), 1,
      sym__enum_type,
    STATE(417), 1,
      sym__set_type,
    STATE(418), 1,
      sym__pointer_type,
    STATE(419), 1,
      sym__record_type,
    STATE(420), 1,
      sym__range_type,
    STATE(421), 1,
      sym__array_type,
    STATE(568), 1,
      sym__string_literal,
    STATE(880), 1,
      sym_enum_derived,
    ACTIONS(467), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1053), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(463), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(459), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
  [5382] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(439), 1,
      sym_identifier,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(445), 1,
      anon_sym_LBRACK,
    ACTIONS(449), 1,
      anon_sym_DOT,
    ACTIONS(453), 1,
      anon_sym_array,
    STATE(296), 1,
      sym__type_identifier,
    STATE(392), 1,
      sym_enum_variant_list,
    STATE(483), 1,
      sym__type_identifier_or_primitive,
    STATE(484), 1,
      sym__function_type,
    STATE(485), 1,
      sym__enum_type,
    STATE(486), 1,
      sym__set_type,
    STATE(487), 1,
      sym__pointer_type,
    STATE(488), 1,
      sym__record_type,
    STATE(489), 1,
      sym__range_type,
    STATE(490), 1,
      sym__array_type,
    STATE(568), 1,
      sym__string_literal,
    STATE(918), 1,
      sym_enum_derived,
    ACTIONS(451), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1072), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(447), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(443), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
  [5467] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(455), 1,
      sym_identifier,
    ACTIONS(457), 1,
      anon_sym_LPAREN,
    ACTIONS(461), 1,
      anon_sym_LBRACK,
    ACTIONS(465), 1,
      anon_sym_DOT,
    ACTIONS(469), 1,
      anon_sym_array,
    STATE(284), 1,
      sym__type_identifier,
    STATE(294), 1,
      sym_enum_variant_list,
    STATE(443), 1,
      sym__array_type,
    STATE(444), 1,
      sym__range_type,
    STATE(451), 1,
      sym__record_type,
    STATE(455), 1,
      sym__pointer_type,
    STATE(456), 1,
      sym__set_type,
    STATE(458), 1,
      sym__enum_type,
    STATE(463), 1,
      sym__function_type,
    STATE(465), 1,
      sym__type_identifier_or_primitive,
    STATE(568), 1,
      sym__string_literal,
    STATE(880), 1,
      sym_enum_derived,
    ACTIONS(467), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1053), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(463), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(459), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
  [5552] = 24,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(423), 1,
      sym_identifier,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      anon_sym_LBRACK,
    ACTIONS(433), 1,
      anon_sym_DOT,
    ACTIONS(437), 1,
      anon_sym_array,
    STATE(568), 1,
      sym__string_literal,
    STATE(578), 1,
      sym__type_identifier,
    STATE(592), 1,
      sym_enum_variant_list,
    STATE(677), 1,
      sym__array_type,
    STATE(679), 1,
      sym__range_type,
    STATE(684), 1,
      sym__record_type,
    STATE(686), 1,
      sym__pointer_type,
    STATE(687), 1,
      sym__set_type,
    STATE(690), 1,
      sym__enum_type,
    STATE(691), 1,
      sym__function_type,
    STATE(695), 1,
      sym__type_identifier_or_primitive,
    STATE(913), 1,
      sym_enum_derived,
    ACTIONS(435), 2,
      anon_sym_record,
      anon_sym_nativeRecord,
    STATE(1105), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
    ACTIONS(431), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    ACTIONS(427), 7,
      anon_sym_int,
      anon_sym_num,
      anon_sym_Decimal,
      anon_sym_boolean,
      anon_sym_string,
      anon_sym_cstring,
      anon_sym_char,
  [5637] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_memory,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
    ACTIONS(473), 1,
      sym_identifier,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
    ACTIONS(479), 1,
      anon_sym_uses,
    ACTIONS(481), 1,
      anon_sym_const,
    ACTIONS(483), 1,
      anon_sym_type,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    STATE(411), 1,
      sym__variable_item,
    STATE(613), 1,
      sym_annotation,
    STATE(1013), 1,
      sym_memory_modifiers,
    ACTIONS(475), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(487), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(75), 17,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_function_signature_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [5703] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_memory,
    ACTIONS(473), 1,
      sym_identifier,
    ACTIONS(479), 1,
      anon_sym_uses,
    ACTIONS(481), 1,
      anon_sym_const,
    ACTIONS(483), 1,
      anon_sym_type,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(489), 1,
      ts_builtin_sym_end,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    STATE(411), 1,
      sym__variable_item,
    STATE(613), 1,
      sym_annotation,
    STATE(1013), 1,
      sym_memory_modifiers,
    ACTIONS(491), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(487), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(78), 17,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_function_signature_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [5769] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_memory,
    ACTIONS(473), 1,
      sym_identifier,
    ACTIONS(479), 1,
      anon_sym_uses,
    ACTIONS(481), 1,
      anon_sym_const,
    ACTIONS(483), 1,
      anon_sym_type,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(495), 1,
      ts_builtin_sym_end,
    STATE(411), 1,
      sym__variable_item,
    STATE(613), 1,
      sym_annotation,
    STATE(1013), 1,
      sym_memory_modifiers,
    ACTIONS(497), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(487), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(74), 17,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_function_signature_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [5832] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_memory,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(501), 1,
      anon_sym_LPAREN,
    ACTIONS(503), 1,
      anon_sym_uses,
    ACTIONS(505), 1,
      anon_sym_const,
    ACTIONS(507), 1,
      anon_sym_type,
    STATE(510), 1,
      sym__variable_item,
    STATE(616), 1,
      sym_annotation,
    STATE(1033), 1,
      sym_memory_modifiers,
    ACTIONS(491), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(509), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(81), 17,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_function_signature_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [5895] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_memory,
    ACTIONS(473), 1,
      sym_identifier,
    ACTIONS(479), 1,
      anon_sym_uses,
    ACTIONS(481), 1,
      anon_sym_const,
    ACTIONS(483), 1,
      anon_sym_type,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(511), 1,
      ts_builtin_sym_end,
    STATE(411), 1,
      sym__variable_item,
    STATE(613), 1,
      sym_annotation,
    STATE(1013), 1,
      sym_memory_modifiers,
    ACTIONS(513), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(487), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(77), 17,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_function_signature_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [5958] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_memory,
    ACTIONS(473), 1,
      sym_identifier,
    ACTIONS(479), 1,
      anon_sym_uses,
    ACTIONS(481), 1,
      anon_sym_const,
    ACTIONS(483), 1,
      anon_sym_type,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(515), 1,
      ts_builtin_sym_end,
    STATE(411), 1,
      sym__variable_item,
    STATE(613), 1,
      sym_annotation,
    STATE(1013), 1,
      sym_memory_modifiers,
    ACTIONS(517), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(487), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(72), 17,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_function_signature_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [6021] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_memory,
    ACTIONS(473), 1,
      sym_identifier,
    ACTIONS(479), 1,
      anon_sym_uses,
    ACTIONS(481), 1,
      anon_sym_const,
    ACTIONS(483), 1,
      anon_sym_type,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(519), 1,
      ts_builtin_sym_end,
    STATE(411), 1,
      sym__variable_item,
    STATE(613), 1,
      sym_annotation,
    STATE(1013), 1,
      sym_memory_modifiers,
    ACTIONS(521), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(487), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(77), 17,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_function_signature_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [6084] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_memory,
    ACTIONS(473), 1,
      sym_identifier,
    ACTIONS(479), 1,
      anon_sym_uses,
    ACTIONS(481), 1,
      anon_sym_const,
    ACTIONS(483), 1,
      anon_sym_type,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
    STATE(411), 1,
      sym__variable_item,
    STATE(613), 1,
      sym_annotation,
    STATE(1013), 1,
      sym_memory_modifiers,
    ACTIONS(525), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(487), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(77), 17,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_function_signature_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [6147] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_memory,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(503), 1,
      anon_sym_uses,
    ACTIONS(505), 1,
      anon_sym_const,
    ACTIONS(507), 1,
      anon_sym_type,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    STATE(510), 1,
      sym__variable_item,
    STATE(616), 1,
      sym_annotation,
    STATE(1033), 1,
      sym_memory_modifiers,
    ACTIONS(475), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(509), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(82), 17,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_function_signature_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [6210] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(529), 1,
      ts_builtin_sym_end,
    ACTIONS(531), 1,
      sym_identifier,
    ACTIONS(536), 1,
      anon_sym_uses,
    ACTIONS(539), 1,
      anon_sym_const,
    ACTIONS(542), 1,
      anon_sym_type,
    ACTIONS(545), 1,
      anon_sym_memory,
    ACTIONS(548), 1,
      anon_sym_LBRACK,
    STATE(411), 1,
      sym__variable_item,
    STATE(613), 1,
      sym_annotation,
    STATE(1013), 1,
      sym_memory_modifiers,
    ACTIONS(534), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(551), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(77), 17,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_function_signature_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [6273] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_memory,
    ACTIONS(473), 1,
      sym_identifier,
    ACTIONS(479), 1,
      anon_sym_uses,
    ACTIONS(481), 1,
      anon_sym_const,
    ACTIONS(483), 1,
      anon_sym_type,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
    STATE(411), 1,
      sym__variable_item,
    STATE(613), 1,
      sym_annotation,
    STATE(1013), 1,
      sym_memory_modifiers,
    ACTIONS(556), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(487), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(77), 17,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_function_signature_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [6336] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_memory,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(503), 1,
      anon_sym_uses,
    ACTIONS(505), 1,
      anon_sym_const,
    ACTIONS(507), 1,
      anon_sym_type,
    STATE(510), 1,
      sym__variable_item,
    STATE(616), 1,
      sym_annotation,
    STATE(1033), 1,
      sym_memory_modifiers,
    ACTIONS(497), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(509), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(83), 17,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_function_signature_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [6396] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(545), 1,
      anon_sym_memory,
    ACTIONS(548), 1,
      anon_sym_LBRACK,
    ACTIONS(558), 1,
      sym_identifier,
    ACTIONS(561), 1,
      anon_sym_uses,
    ACTIONS(564), 1,
      anon_sym_const,
    ACTIONS(567), 1,
      anon_sym_type,
    STATE(510), 1,
      sym__variable_item,
    STATE(616), 1,
      sym_annotation,
    STATE(1033), 1,
      sym_memory_modifiers,
    ACTIONS(534), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(570), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(80), 17,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_function_signature_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [6456] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_memory,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(503), 1,
      anon_sym_uses,
    ACTIONS(505), 1,
      anon_sym_const,
    ACTIONS(507), 1,
      anon_sym_type,
    STATE(510), 1,
      sym__variable_item,
    STATE(616), 1,
      sym_annotation,
    STATE(1033), 1,
      sym_memory_modifiers,
    ACTIONS(556), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(509), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(80), 17,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_function_signature_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [6516] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_memory,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(503), 1,
      anon_sym_uses,
    ACTIONS(505), 1,
      anon_sym_const,
    ACTIONS(507), 1,
      anon_sym_type,
    STATE(510), 1,
      sym__variable_item,
    STATE(616), 1,
      sym_annotation,
    STATE(1033), 1,
      sym_memory_modifiers,
    ACTIONS(525), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(509), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(80), 17,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_function_signature_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [6576] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_memory,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(503), 1,
      anon_sym_uses,
    ACTIONS(505), 1,
      anon_sym_const,
    ACTIONS(507), 1,
      anon_sym_type,
    STATE(510), 1,
      sym__variable_item,
    STATE(616), 1,
      sym_annotation,
    STATE(1033), 1,
      sym_memory_modifiers,
    ACTIONS(521), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(509), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(80), 17,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_function_signature_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [6636] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_memory,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(503), 1,
      anon_sym_uses,
    ACTIONS(505), 1,
      anon_sym_const,
    ACTIONS(507), 1,
      anon_sym_type,
    STATE(510), 1,
      sym__variable_item,
    STATE(616), 1,
      sym_annotation,
    STATE(1033), 1,
      sym_memory_modifiers,
    ACTIONS(517), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(509), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(85), 17,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_function_signature_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [6696] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_memory,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(503), 1,
      anon_sym_uses,
    ACTIONS(505), 1,
      anon_sym_const,
    ACTIONS(507), 1,
      anon_sym_type,
    STATE(510), 1,
      sym__variable_item,
    STATE(616), 1,
      sym_annotation,
    STATE(1033), 1,
      sym_memory_modifiers,
    ACTIONS(513), 2,
      anon_sym_end,
      anon_sym_endClass,
    ACTIONS(509), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
    STATE(80), 17,
      sym__class_item_declaration,
      sym__item_declaration,
      sym_uses_item,
      sym_const_item,
      sym__type_item,
      sym_retyped_item,
      sym_variable_item,
      sym_function_type_item,
      sym_function_item,
      sym_function_signature_item,
      sym_enum_item,
      sym_set_item,
      sym_pointer_type_item,
      sym_record_item,
      sym_range_item,
      sym_array_item,
      aux_sym__class_repeat1,
  [6756] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(577), 1,
      anon_sym_inverse,
    ACTIONS(579), 1,
      anon_sym_absolute,
    STATE(313), 1,
      sym_variable_modifiers,
    ACTIONS(573), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(581), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(583), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(92), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(575), 12,
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
  [6802] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(577), 1,
      anon_sym_inverse,
    ACTIONS(579), 1,
      anon_sym_absolute,
    STATE(384), 1,
      sym_variable_modifiers,
    ACTIONS(581), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(583), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(585), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(92), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(587), 12,
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
  [6848] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(577), 1,
      anon_sym_inverse,
    ACTIONS(579), 1,
      anon_sym_absolute,
    STATE(347), 1,
      sym_variable_modifiers,
    ACTIONS(581), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(583), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(589), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(92), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(591), 12,
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
  [6894] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(593), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(597), 2,
      anon_sym_final,
      anon_sym_override,
    STATE(90), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    ACTIONS(595), 17,
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
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
  [6934] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(599), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(603), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(606), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(90), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    ACTIONS(601), 17,
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
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
  [6974] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(76), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(593), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(609), 2,
      anon_sym_final,
      anon_sym_override,
    STATE(97), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    ACTIONS(595), 16,
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
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
  [7013] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(577), 1,
      anon_sym_inverse,
    ACTIONS(579), 1,
      anon_sym_absolute,
    ACTIONS(583), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(611), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(615), 2,
      anon_sym_final,
      anon_sym_override,
    STATE(96), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(613), 12,
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
  [7056] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(617), 1,
      anon_sym_inverse,
    ACTIONS(619), 1,
      anon_sym_absolute,
    STATE(468), 1,
      sym_variable_modifiers,
    ACTIONS(585), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(621), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(623), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(100), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(587), 11,
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
  [7101] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(617), 1,
      anon_sym_inverse,
    ACTIONS(619), 1,
      anon_sym_absolute,
    STATE(427), 1,
      sym_variable_modifiers,
    ACTIONS(573), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(621), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(623), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(100), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(575), 11,
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
    ACTIONS(617), 1,
      anon_sym_inverse,
    ACTIONS(619), 1,
      anon_sym_absolute,
    STATE(413), 1,
      sym_variable_modifiers,
    ACTIONS(589), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(621), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(623), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(100), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(591), 11,
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
  [7191] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(629), 1,
      anon_sym_inverse,
    ACTIONS(632), 1,
      anon_sym_absolute,
    ACTIONS(625), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(635), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(638), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(96), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(627), 12,
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
  [7234] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(599), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(641), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(644), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(97), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    ACTIONS(601), 16,
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
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
  [7273] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(573), 1,
      anon_sym_LBRACK,
    ACTIONS(647), 1,
      anon_sym_inverse,
    ACTIONS(649), 1,
      anon_sym_absolute,
    STATE(494), 1,
      sym_variable_modifiers,
    ACTIONS(651), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(653), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(111), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(575), 11,
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
  [7317] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(655), 1,
      anon_sym_inverse,
    ACTIONS(658), 1,
      anon_sym_absolute,
    ACTIONS(625), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(661), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(664), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(99), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(627), 11,
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
  [7359] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(617), 1,
      anon_sym_inverse,
    ACTIONS(619), 1,
      anon_sym_absolute,
    ACTIONS(611), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(623), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(667), 2,
      anon_sym_final,
      anon_sym_override,
    STATE(99), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(613), 11,
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
  [7401] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
  [7433] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(673), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(675), 22,
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
  [7465] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(599), 1,
      anon_sym_LBRACK,
    ACTIONS(677), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(680), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(103), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    ACTIONS(601), 16,
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
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
  [7503] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(683), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(685), 22,
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
  [7535] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(589), 1,
      anon_sym_LBRACK,
    ACTIONS(647), 1,
      anon_sym_inverse,
    ACTIONS(649), 1,
      anon_sym_absolute,
    STATE(521), 1,
      sym_variable_modifiers,
    ACTIONS(651), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(653), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(111), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(591), 11,
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
  [7579] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(687), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(689), 22,
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
  [7611] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(585), 1,
      anon_sym_LBRACK,
    ACTIONS(647), 1,
      anon_sym_inverse,
    ACTIONS(649), 1,
      anon_sym_absolute,
    STATE(477), 1,
      sym_variable_modifiers,
    ACTIONS(651), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(653), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(111), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(587), 11,
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
  [7655] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(593), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(691), 2,
      anon_sym_final,
      anon_sym_override,
    STATE(103), 3,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_function_modifiers_repeat1,
    ACTIONS(595), 16,
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
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
  [7693] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(697), 1,
      anon_sym_LPAREN,
    ACTIONS(699), 1,
      anon_sym_return,
    STATE(128), 1,
      sym_parameter_list,
    STATE(180), 1,
      sym_function_return_type,
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
  [7733] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(701), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(703), 21,
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
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7764] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(611), 1,
      anon_sym_LBRACK,
    ACTIONS(647), 1,
      anon_sym_inverse,
    ACTIONS(649), 1,
      anon_sym_absolute,
    ACTIONS(653), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(705), 2,
      anon_sym_final,
      anon_sym_override,
    STATE(115), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(613), 11,
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
  [7805] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(673), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(675), 21,
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
  [7836] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(707), 1,
      anon_sym_to,
    ACTIONS(669), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PLUS,
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
  [7869] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(709), 1,
      anon_sym_LPAREN,
    ACTIONS(711), 1,
      anon_sym_return,
    STATE(149), 1,
      sym_parameter_list,
    STATE(228), 1,
      sym_function_return_type,
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
  [7908] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(625), 1,
      anon_sym_LBRACK,
    ACTIONS(713), 1,
      anon_sym_inverse,
    ACTIONS(716), 1,
      anon_sym_absolute,
    ACTIONS(719), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(722), 2,
      anon_sym_private,
      anon_sym_protected,
    STATE(115), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
    ACTIONS(627), 11,
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
  [7949] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(671), 21,
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
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [7980] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(683), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(685), 21,
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
  [8011] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(687), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(689), 21,
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
  [8042] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(725), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(727), 21,
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
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8073] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(733), 1,
      anon_sym_LPAREN,
    ACTIONS(735), 1,
      anon_sym_PLUS,
    STATE(186), 1,
      sym_sized,
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
  [8110] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(693), 1,
      anon_sym_LBRACK,
    ACTIONS(737), 1,
      anon_sym_LPAREN,
    ACTIONS(739), 1,
      anon_sym_return,
    STATE(191), 1,
      sym_parameter_list,
    STATE(263), 1,
      sym_function_return_type,
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
  [8148] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(733), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
      sym_sized,
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
  [8182] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(725), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(727), 20,
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
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8212] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(701), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(703), 20,
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
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8242] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(707), 1,
      anon_sym_to,
    ACTIONS(669), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PLUS,
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
  [8274] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(673), 1,
      anon_sym_LBRACK,
    ACTIONS(675), 21,
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
  [8304] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(745), 1,
      anon_sym_multiLang,
    STATE(162), 1,
      sym_enum_modifiers,
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
  [8338] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(699), 1,
      anon_sym_return,
    STATE(181), 1,
      sym_function_return_type,
    ACTIONS(747), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(749), 18,
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
  [8372] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(745), 1,
      anon_sym_multiLang,
    STATE(188), 1,
      sym_enum_modifiers,
    ACTIONS(751), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(753), 18,
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
  [8406] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(755), 1,
      anon_sym_end,
    ACTIONS(757), 1,
      anon_sym_uses,
    ACTIONS(760), 1,
      anon_sym_type,
    ACTIONS(763), 1,
      anon_sym_LBRACK,
    ACTIONS(768), 1,
      anon_sym_var,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(766), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(130), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(673), 11,
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
  [8452] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(771), 1,
      anon_sym_end,
    ACTIONS(773), 1,
      anon_sym_uses,
    ACTIONS(775), 1,
      anon_sym_type,
    ACTIONS(779), 1,
      anon_sym_var,
    STATE(694), 1,
      sym_declaration_statement,
    STATE(962), 1,
      sym_annotation,
    ACTIONS(777), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(130), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(673), 11,
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
  [8498] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(735), 1,
      anon_sym_PLUS,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    STATE(212), 1,
      sym_sized,
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
  [8534] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(671), 20,
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
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8564] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(687), 1,
      anon_sym_LBRACK,
    ACTIONS(689), 21,
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
  [8594] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(683), 1,
      anon_sym_LBRACK,
    ACTIONS(685), 21,
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
  [8624] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(781), 1,
      anon_sym_LPAREN,
    STATE(212), 1,
      sym_sized,
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
  [8657] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(687), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(689), 19,
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
  [8686] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(783), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
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
  [8715] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(787), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(789), 19,
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
  [8744] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(791), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(793), 19,
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
  [8773] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(707), 1,
      anon_sym_to,
    ACTIONS(669), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PLUS,
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
  [8804] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(725), 1,
      anon_sym_LBRACK,
    ACTIONS(727), 20,
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
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8833] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(669), 1,
      anon_sym_LBRACK,
    ACTIONS(671), 20,
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
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [8862] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(729), 1,
      anon_sym_LBRACK,
    ACTIONS(735), 1,
      anon_sym_PLUS,
    ACTIONS(795), 1,
      anon_sym_LPAREN,
    STATE(261), 1,
      sym_sized,
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
  [8897] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(797), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(799), 18,
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
  [8926] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(673), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(675), 19,
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
  [8955] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(801), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(803), 19,
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
  [8984] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(805), 1,
      anon_sym_multiLang,
    STATE(203), 1,
      sym_enum_modifiers,
    ACTIONS(751), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(753), 17,
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
  [9017] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(711), 1,
      anon_sym_return,
    STATE(194), 1,
      sym_function_return_type,
    ACTIONS(747), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(749), 17,
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
  [9050] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(701), 1,
      anon_sym_LBRACK,
    ACTIONS(703), 20,
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
      anon_sym_forward,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_external,
      anon_sym_var,
      anon_sym_final,
      anon_sym_override,
      anon_sym_private,
      anon_sym_protected,
  [9079] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(805), 1,
      anon_sym_multiLang,
    STATE(204), 1,
      sym_enum_modifiers,
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
  [9112] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(683), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(685), 19,
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
  [9141] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(807), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(809), 18,
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
  [9169] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(811), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(813), 18,
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
  [9197] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(815), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(817), 18,
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
  [9225] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(819), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(821), 18,
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
  [9253] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(823), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(825), 18,
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
  [9281] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(827), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(829), 18,
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
  [9309] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(831), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(833), 18,
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
  [9337] = 3,
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
  [9365] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(835), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(837), 18,
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
  [9393] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(839), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(841), 18,
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
  [9421] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(843), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(845), 18,
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
  [9449] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(847), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(849), 18,
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
  [9477] = 3,
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
  [9505] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(683), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(685), 18,
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
  [9533] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(851), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(853), 18,
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
  [9561] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(855), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(857), 18,
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
  [9589] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(859), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(861), 18,
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
  [9617] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(863), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(865), 18,
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
  [9645] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(867), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(869), 18,
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
  [9673] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(801), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(803), 18,
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
  [9701] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(687), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(689), 18,
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
  [9729] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(871), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(873), 18,
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
  [9757] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(875), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(877), 18,
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
  [9785] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(673), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(675), 18,
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
  [9813] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(879), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(881), 18,
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
  [9841] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(729), 1,
      anon_sym_LBRACK,
    ACTIONS(795), 1,
      anon_sym_LPAREN,
    STATE(261), 1,
      sym_sized,
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
  [9873] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(883), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(885), 18,
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
  [9901] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(749), 18,
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
  [9929] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(887), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(889), 18,
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
  [9957] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(741), 1,
      anon_sym_LBRACK,
    ACTIONS(891), 1,
      anon_sym_multiLang,
    STATE(245), 1,
      sym_enum_modifiers,
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
  [9989] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(751), 1,
      anon_sym_LBRACK,
    ACTIONS(891), 1,
      anon_sym_multiLang,
    STATE(234), 1,
      sym_enum_modifiers,
    ACTIONS(753), 17,
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
  [10021] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(893), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(895), 18,
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
  [10049] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(787), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(789), 18,
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
  [10077] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(897), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(899), 18,
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
  [10105] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(791), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(793), 18,
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
  [10133] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(901), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(903), 18,
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
  [10161] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(905), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(907), 18,
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
  [10189] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(909), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(911), 18,
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
  [10217] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(739), 1,
      anon_sym_return,
    ACTIONS(747), 1,
      anon_sym_LBRACK,
    STATE(237), 1,
      sym_function_return_type,
    ACTIONS(749), 17,
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
  [10249] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(827), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(829), 17,
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
  [10276] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(863), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(865), 17,
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
  [10303] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(887), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(889), 17,
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
  [10330] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(905), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(907), 17,
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
  [10357] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(893), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(895), 17,
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
  [10384] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(807), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(809), 17,
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
  [10411] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(909), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(911), 17,
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
  [10438] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(843), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(845), 17,
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
  [10465] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(791), 1,
      anon_sym_LBRACK,
    ACTIONS(793), 18,
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
  [10492] = 3,
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
  [10519] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(801), 1,
      anon_sym_LBRACK,
    ACTIONS(803), 18,
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
  [10546] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(901), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(903), 17,
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
  [10573] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(839), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(841), 17,
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
  [10600] = 3,
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
  [10627] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(819), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(821), 17,
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
  [10654] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(673), 1,
      anon_sym_LBRACK,
    ACTIONS(675), 18,
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
  [10681] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(687), 1,
      anon_sym_LBRACK,
    ACTIONS(689), 18,
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
  [10708] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(683), 1,
      anon_sym_LBRACK,
    ACTIONS(685), 18,
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
  [10735] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(831), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(833), 17,
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
  [10762] = 3,
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
  [10789] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(897), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(899), 17,
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
  [10816] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(871), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(873), 17,
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
  [10843] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(787), 1,
      anon_sym_LBRACK,
    ACTIONS(789), 18,
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
  [10870] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(851), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(853), 17,
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
  [10897] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(823), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(825), 17,
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
  [10924] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(815), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(817), 17,
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
  [10951] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(847), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(849), 17,
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
  [10978] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(835), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(837), 17,
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
  [11005] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(855), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(857), 17,
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
  [11032] = 3,
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
  [11059] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(859), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(861), 17,
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
  [11086] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(883), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(885), 17,
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
  [11113] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(867), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(869), 17,
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
  [11140] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(797), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(799), 17,
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
    ACTIONS(875), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(877), 17,
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
  [11194] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(811), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(813), 17,
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
  [11221] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(749), 17,
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
  [11248] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(879), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(881), 17,
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
  [11275] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(823), 1,
      anon_sym_LBRACK,
    ACTIONS(825), 17,
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
  [11301] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(859), 1,
      anon_sym_LBRACK,
    ACTIONS(861), 17,
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
  [11327] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(905), 1,
      anon_sym_LBRACK,
    ACTIONS(907), 17,
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
  [11353] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(807), 1,
      anon_sym_LBRACK,
    ACTIONS(809), 17,
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
  [11379] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(901), 1,
      anon_sym_LBRACK,
    ACTIONS(903), 17,
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
  [11405] = 3,
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
  [11431] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(913), 1,
      anon_sym_LPAREN,
    ACTIONS(915), 1,
      anon_sym_return,
    STATE(279), 1,
      sym_parameter_list,
    STATE(355), 1,
      sym_function_return_type,
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
  [11465] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(887), 1,
      anon_sym_LBRACK,
    ACTIONS(889), 17,
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
  [11491] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(883), 1,
      anon_sym_LBRACK,
    ACTIONS(885), 17,
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
  [11517] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(811), 1,
      anon_sym_LBRACK,
    ACTIONS(813), 17,
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
  [11543] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(843), 1,
      anon_sym_LBRACK,
    ACTIONS(845), 17,
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
  [11569] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(827), 1,
      anon_sym_LBRACK,
    ACTIONS(829), 17,
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
  [11595] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(831), 1,
      anon_sym_LBRACK,
    ACTIONS(833), 17,
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
  [11621] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(851), 1,
      anon_sym_LBRACK,
    ACTIONS(853), 17,
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
  [11647] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(855), 1,
      anon_sym_LBRACK,
    ACTIONS(857), 17,
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
  [11673] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(839), 1,
      anon_sym_LBRACK,
    ACTIONS(841), 17,
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
  [11699] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(819), 1,
      anon_sym_LBRACK,
    ACTIONS(821), 17,
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
  [11725] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(879), 1,
      anon_sym_LBRACK,
    ACTIONS(881), 17,
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
  [11751] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(817), 17,
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
  [11777] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(867), 1,
      anon_sym_LBRACK,
    ACTIONS(869), 17,
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
  [11803] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(797), 1,
      anon_sym_LBRACK,
    ACTIONS(799), 17,
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
  [11829] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(917), 1,
      sym_identifier,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
    ACTIONS(921), 1,
      anon_sym_LBRACE,
    ACTIONS(925), 1,
      sym_nil_literal,
    STATE(568), 1,
      sym__string_literal,
    STATE(899), 3,
      sym_annotation_attribute_list,
      sym__inner_annotation,
      sym__literal,
    ACTIONS(923), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(272), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [11871] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(875), 1,
      anon_sym_LBRACK,
    ACTIONS(877), 17,
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
  [11897] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(847), 1,
      anon_sym_LBRACK,
    ACTIONS(849), 17,
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
  [11923] = 3,
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
  [11949] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(835), 1,
      anon_sym_LBRACK,
    ACTIONS(837), 17,
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
  [11975] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(893), 1,
      anon_sym_LBRACK,
    ACTIONS(895), 17,
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
  [12001] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(909), 1,
      anon_sym_LBRACK,
    ACTIONS(911), 17,
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
  [12027] = 3,
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
  [12053] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(871), 1,
      anon_sym_LBRACK,
    ACTIONS(873), 17,
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
  [12079] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(863), 1,
      anon_sym_LBRACK,
    ACTIONS(865), 17,
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
  [12105] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(897), 1,
      anon_sym_LBRACK,
    ACTIONS(899), 17,
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
  [12131] = 3,
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
  [12157] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 1,
      anon_sym_LBRACK,
    ACTIONS(749), 17,
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
  [12183] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(735), 1,
      anon_sym_PLUS,
    ACTIONS(927), 1,
      anon_sym_LPAREN,
    STATE(360), 1,
      sym_sized,
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
  [12214] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(929), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(931), 13,
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
  [12239] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(933), 1,
      anon_sym_LPAREN,
    ACTIONS(935), 1,
      anon_sym_return,
    STATE(293), 1,
      sym_parameter_list,
    STATE(402), 1,
      sym_function_return_type,
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
  [12272] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(937), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(939), 13,
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
  [12297] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(943), 1,
      anon_sym_LBRACK,
    ACTIONS(945), 1,
      anon_sym_inverse,
    ACTIONS(947), 1,
      anon_sym_absolute,
    STATE(708), 1,
      sym_variable_modifiers,
    ACTIONS(949), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(951), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(941), 4,
      sym_identifier,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
    STATE(285), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
  [12334] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(953), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(955), 13,
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
  [12359] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(945), 1,
      anon_sym_inverse,
    ACTIONS(947), 1,
      anon_sym_absolute,
    ACTIONS(959), 1,
      anon_sym_LBRACK,
    STATE(705), 1,
      sym_variable_modifiers,
    ACTIONS(949), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(951), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(957), 4,
      sym_identifier,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
    STATE(285), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
  [12396] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(707), 1,
      anon_sym_to,
    ACTIONS(669), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PLUS,
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
  [12423] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(961), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(963), 13,
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
  [12448] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(965), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(967), 13,
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
  [12473] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(693), 1,
      anon_sym_LBRACK,
    ACTIONS(969), 1,
      anon_sym_LPAREN,
    ACTIONS(971), 1,
      anon_sym_return,
    STATE(388), 1,
      sym_parameter_list,
    STATE(511), 1,
      sym_function_return_type,
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
  [12505] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(973), 1,
      anon_sym_multiLang,
    STATE(320), 1,
      sym_enum_modifiers,
    ACTIONS(751), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(753), 12,
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
  [12533] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(973), 1,
      anon_sym_multiLang,
    STATE(335), 1,
      sym_enum_modifiers,
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
  [12561] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(707), 1,
      anon_sym_to,
    ACTIONS(669), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PLUS,
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
  [12587] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(979), 1,
      anon_sym_COMMA,
    STATE(278), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(975), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(977), 12,
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
  [12615] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(915), 1,
      anon_sym_return,
    STATE(324), 1,
      sym_function_return_type,
    ACTIONS(747), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(749), 12,
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
  [12643] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(986), 1,
      anon_sym_multiLang,
    STATE(352), 1,
      sym_const_modifiers,
    ACTIONS(982), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(984), 12,
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
  [12671] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(992), 1,
      anon_sym_COMMA,
    STATE(278), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(988), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(990), 12,
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
  [12699] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(927), 1,
      anon_sym_LPAREN,
    STATE(360), 1,
      sym_sized,
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
  [12727] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(625), 1,
      anon_sym_LBRACK,
    ACTIONS(994), 1,
      anon_sym_inverse,
    ACTIONS(997), 1,
      anon_sym_absolute,
    ACTIONS(1000), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(1003), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(627), 4,
      sym_identifier,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
    STATE(283), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
  [12761] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(735), 1,
      anon_sym_PLUS,
    ACTIONS(1006), 1,
      anon_sym_LPAREN,
    STATE(423), 1,
      sym_sized,
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
  [12791] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(611), 1,
      anon_sym_LBRACK,
    ACTIONS(945), 1,
      anon_sym_inverse,
    ACTIONS(947), 1,
      anon_sym_absolute,
    ACTIONS(951), 2,
      anon_sym_private,
      anon_sym_protected,
    ACTIONS(1008), 2,
      anon_sym_final,
      anon_sym_override,
    ACTIONS(613), 4,
      sym_identifier,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
    STATE(283), 5,
      sym_inverse_modifiers,
      sym_absolute_modifiers,
      sym__override_modifiers,
      sym_visibility_modifiers,
      aux_sym_variable_modifiers_repeat1,
  [12825] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(986), 1,
      anon_sym_multiLang,
    STATE(315), 1,
      sym_const_modifiers,
    ACTIONS(1010), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1012), 12,
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
  [12853] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(992), 1,
      anon_sym_COMMA,
    STATE(281), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(1014), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1016), 12,
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
  [12881] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1018), 1,
      anon_sym_multiLang,
    STATE(452), 1,
      sym_enum_modifiers,
    ACTIONS(751), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(753), 11,
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
  [12908] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1020), 1,
      anon_sym_multiLang,
    STATE(407), 1,
      sym_const_modifiers,
    ACTIONS(1010), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1012), 11,
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
  [12935] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(787), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(789), 13,
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
  [12958] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(801), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(803), 13,
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
  [12981] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1006), 1,
      anon_sym_LPAREN,
    STATE(423), 1,
      sym_sized,
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
  [13008] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(935), 1,
      anon_sym_return,
    STATE(449), 1,
      sym_function_return_type,
    ACTIONS(747), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(749), 11,
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
  [13035] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1018), 1,
      anon_sym_multiLang,
    STATE(436), 1,
      sym_enum_modifiers,
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
  [13062] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(707), 1,
      anon_sym_to,
    ACTIONS(669), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PLUS,
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
  [13087] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(729), 1,
      anon_sym_LBRACK,
    ACTIONS(735), 1,
      anon_sym_PLUS,
    ACTIONS(1022), 1,
      anon_sym_LPAREN,
    STATE(514), 1,
      sym_sized,
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
  [13116] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(673), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(675), 13,
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
  [13139] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1020), 1,
      anon_sym_multiLang,
    STATE(410), 1,
      sym_const_modifiers,
    ACTIONS(982), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(984), 11,
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
  [13166] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(683), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(685), 13,
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
  [13189] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(843), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(845), 13,
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
  [13212] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(975), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(977), 12,
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
  [13235] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(831), 2,
      ts_builtin_sym_end,
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
  [13258] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(791), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(793), 13,
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
  [13281] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(693), 1,
      anon_sym_LBRACK,
    ACTIONS(1024), 1,
      anon_sym_LPAREN,
    ACTIONS(1026), 1,
      anon_sym_return,
    STATE(403), 1,
      sym_parameter_list,
    STATE(548), 1,
      sym_function_return_type,
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
  [13312] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(823), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(825), 13,
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
  [13335] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(815), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(817), 13,
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
  [13358] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1028), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(988), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(990), 11,
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
  [13385] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1030), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(975), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(977), 11,
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
  [13412] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1028), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(1014), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1016), 11,
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
  [13439] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(687), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(689), 13,
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
  [13462] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13484] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(815), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(817), 12,
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
  [13506] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1033), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1035), 12,
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
  [13528] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1037), 1,
      anon_sym_SQUOTE,
    ACTIONS(1039), 1,
      anon_sym_LBRACE,
    ACTIONS(1041), 1,
      sym__integer_literal,
    ACTIONS(1045), 1,
      sym_nil_literal,
    STATE(298), 1,
      sym__literal,
    STATE(372), 1,
      sym__string_literal,
    ACTIONS(1043), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(368), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [13562] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1047), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1049), 12,
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
  [13584] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1051), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1053), 12,
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
  [13606] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1010), 1,
      anon_sym_LBRACK,
    ACTIONS(1055), 1,
      anon_sym_multiLang,
    STATE(480), 1,
      sym_const_modifiers,
    ACTIONS(1012), 11,
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
  [13632] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1057), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1059), 12,
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
  [13654] = 3,
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
  [13676] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
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
  [13698] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(905), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(907), 12,
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
  [13720] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13742] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(843), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(845), 12,
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
  [13764] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(887), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(889), 12,
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
  [13786] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(883), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(885), 12,
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
  [13808] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(801), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(803), 12,
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
  [13830] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [13852] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1061), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1063), 12,
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
  [13874] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1065), 1,
      anon_sym_SQUOTE,
    ACTIONS(1067), 1,
      anon_sym_LBRACE,
    ACTIONS(1069), 1,
      sym__integer_literal,
    ACTIONS(1073), 1,
      sym_nil_literal,
    STATE(317), 1,
      sym__literal,
    STATE(438), 1,
      sym__string_literal,
    ACTIONS(1071), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(461), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [13908] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1075), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1077), 12,
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
  [13930] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1075), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1077), 12,
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
  [13952] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(982), 1,
      anon_sym_LBRACK,
    ACTIONS(1055), 1,
      anon_sym_multiLang,
    STATE(517), 1,
      sym_const_modifiers,
    ACTIONS(984), 11,
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
  [13978] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(787), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(789), 12,
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
  [14000] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(975), 1,
      anon_sym_LBRACK,
    ACTIONS(1079), 1,
      anon_sym_COMMA,
    STATE(334), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(977), 11,
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
  [14026] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14048] = 3,
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
  [14070] = 3,
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
  [14092] = 3,
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
  [14114] = 3,
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
  [14136] = 3,
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
  [14158] = 3,
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
  [14180] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14202] = 3,
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
  [14224] = 3,
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
  [14246] = 3,
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
  [14268] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1118), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1120), 12,
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
  [14290] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1122), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1124), 12,
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
  [14312] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1126), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1128), 12,
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
  [14334] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(791), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(793), 12,
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
  [14356] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(879), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(881), 12,
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
  [14378] = 3,
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
  [14400] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1130), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1132), 12,
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
  [14422] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1134), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1136), 12,
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
  [14444] = 3,
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
  [14466] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(749), 12,
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
  [14488] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1138), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1140), 12,
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
  [14510] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(921), 1,
      anon_sym_LBRACE,
    ACTIONS(1142), 1,
      anon_sym_SQUOTE,
    ACTIONS(1144), 1,
      sym__integer_literal,
    ACTIONS(1148), 1,
      sym_nil_literal,
    STATE(286), 1,
      sym__literal,
    STATE(305), 1,
      sym__string_literal,
    ACTIONS(1146), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(272), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [14544] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1150), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1152), 12,
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
  [14566] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1154), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1156), 12,
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
  [14588] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
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
  [14610] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1158), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1160), 12,
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
  [14632] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1162), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1164), 12,
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
  [14654] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1166), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1168), 12,
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
  [14676] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1170), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1172), 12,
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
  [14698] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(673), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(675), 12,
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
  [14720] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(975), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(977), 11,
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
  [14742] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(937), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(939), 12,
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
  [14764] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(961), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(963), 12,
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
  [14786] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(687), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(689), 12,
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
  [14808] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(683), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(685), 12,
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
  [14830] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(988), 1,
      anon_sym_LBRACK,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    STATE(334), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(990), 11,
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
  [14856] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(823), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(825), 12,
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
  [14878] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [14900] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(815), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(817), 12,
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
  [14922] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(751), 1,
      anon_sym_LBRACK,
    ACTIONS(1176), 1,
      anon_sym_multiLang,
    STATE(498), 1,
      sym_enum_modifiers,
    ACTIONS(753), 11,
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
  [14948] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(921), 1,
      anon_sym_LBRACE,
    ACTIONS(1142), 1,
      anon_sym_SQUOTE,
    ACTIONS(1144), 1,
      sym__integer_literal,
    ACTIONS(1148), 1,
      sym_nil_literal,
    STATE(280), 1,
      sym__literal,
    STATE(305), 1,
      sym__string_literal,
    ACTIONS(1146), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(272), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [14982] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1178), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1180), 12,
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
  [15004] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1182), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1184), 12,
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
  [15026] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1186), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1188), 12,
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
  [15048] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1190), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1192), 12,
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
  [15070] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1014), 1,
      anon_sym_LBRACK,
    ACTIONS(1174), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(1016), 11,
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
  [15096] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1194), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1196), 12,
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
  [15118] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1037), 1,
      anon_sym_SQUOTE,
    ACTIONS(1039), 1,
      anon_sym_LBRACE,
    ACTIONS(1041), 1,
      sym__integer_literal,
    ACTIONS(1045), 1,
      sym_nil_literal,
    STATE(289), 1,
      sym__literal,
    STATE(372), 1,
      sym__string_literal,
    ACTIONS(1043), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(368), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [15152] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1198), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1200), 12,
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
  [15174] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(929), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(931), 12,
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
  [15196] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15218] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(953), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(955), 12,
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
  [15240] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 1,
      anon_sym_LBRACK,
    ACTIONS(971), 1,
      anon_sym_return,
    STATE(504), 1,
      sym_function_return_type,
    ACTIONS(749), 11,
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
  [15266] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1202), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1204), 12,
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
  [15288] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(729), 1,
      anon_sym_LBRACK,
    ACTIONS(735), 1,
      anon_sym_PLUS,
    ACTIONS(1206), 1,
      anon_sym_LPAREN,
    STATE(545), 1,
      sym_sized,
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
  [15316] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1208), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1210), 12,
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
  [15338] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(741), 1,
      anon_sym_LBRACK,
    ACTIONS(1176), 1,
      anon_sym_multiLang,
    STATE(506), 1,
      sym_enum_modifiers,
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
  [15364] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(965), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(967), 12,
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
  [15386] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15408] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1065), 1,
      anon_sym_SQUOTE,
    ACTIONS(1067), 1,
      anon_sym_LBRACE,
    ACTIONS(1069), 1,
      sym__integer_literal,
    ACTIONS(1073), 1,
      sym_nil_literal,
    STATE(332), 1,
      sym__literal,
    STATE(438), 1,
      sym__string_literal,
    ACTIONS(1071), 4,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
    STATE(461), 4,
      sym_string_literal,
      sym_text_literal,
      sym_integer_literal,
      sym_boolean_literal,
  [15442] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15464] = 3,
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
  [15486] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(707), 1,
      anon_sym_to,
    ACTIONS(669), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PLUS,
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
  [15510] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(729), 1,
      anon_sym_LBRACK,
    ACTIONS(1022), 1,
      anon_sym_LPAREN,
    STATE(514), 1,
      sym_sized,
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
  [15536] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [15557] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1138), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1140), 11,
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
  [15578] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(749), 11,
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
  [15599] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 1,
      anon_sym_LBRACK,
    ACTIONS(1026), 1,
      anon_sym_return,
    STATE(577), 1,
      sym_function_return_type,
    ACTIONS(749), 10,
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
  [15624] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(879), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(881), 11,
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
  [15645] = 3,
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
  [15666] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(751), 1,
      anon_sym_LBRACK,
    ACTIONS(1212), 1,
      anon_sym_multiLang,
    STATE(574), 1,
      sym_enum_modifiers,
    ACTIONS(753), 10,
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
  [15691] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1047), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1049), 11,
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
  [15712] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(843), 1,
      anon_sym_LBRACK,
    ACTIONS(845), 12,
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
  [15733] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1134), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1136), 11,
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
  [15754] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1130), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1132), 11,
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
  [15775] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1061), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1063), 11,
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
  [15796] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1126), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1128), 11,
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
  [15817] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1122), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1124), 11,
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
  [15838] = 3,
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
  [15859] = 3,
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
  [15880] = 3,
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
  [15901] = 3,
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
  [15922] = 3,
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
  [15943] = 3,
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
  [15964] = 3,
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
  [15985] = 3,
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
  [16006] = 3,
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
  [16027] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
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
  [16048] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1118), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1120), 11,
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
  [16069] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(929), 1,
      anon_sym_LBRACK,
    ACTIONS(931), 12,
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
  [16090] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(673), 1,
      anon_sym_LBRACK,
    ACTIONS(675), 12,
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
  [16111] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1033), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1035), 11,
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
  [16132] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1051), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1053), 11,
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
  [16153] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(687), 1,
      anon_sym_LBRACK,
    ACTIONS(689), 12,
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
  [16174] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(817), 12,
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
  [16195] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16216] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1208), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1210), 11,
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
  [16237] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(729), 1,
      anon_sym_LBRACK,
    ACTIONS(1206), 1,
      anon_sym_LPAREN,
    STATE(545), 1,
      sym_sized,
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
  [16262] = 3,
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
  [16283] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1057), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1059), 11,
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
  [16304] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16325] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(975), 2,
      anon_sym_COMMA,
      anon_sym_LBRACK,
    ACTIONS(977), 11,
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
  [16346] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(823), 1,
      anon_sym_LBRACK,
    ACTIONS(825), 12,
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
  [16367] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1150), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1152), 11,
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
  [16388] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(965), 1,
      anon_sym_LBRACK,
    ACTIONS(967), 12,
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
  [16409] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(953), 1,
      anon_sym_LBRACK,
    ACTIONS(955), 12,
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
  [16430] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1154), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1156), 11,
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
  [16451] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1158), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1160), 11,
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
  [16472] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1162), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1164), 11,
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
  [16493] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(683), 1,
      anon_sym_LBRACK,
    ACTIONS(685), 12,
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
  [16514] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(883), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(885), 11,
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
  [16535] = 3,
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
  [16556] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(801), 1,
      anon_sym_LBRACK,
    ACTIONS(803), 12,
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
  [16577] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(887), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(889), 11,
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
  [16598] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(905), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(907), 11,
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
  [16619] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1166), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1168), 11,
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
  [16640] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
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
  [16661] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16682] = 3,
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
  [16703] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1170), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1172), 11,
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
  [16724] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1178), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1180), 11,
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
  [16745] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16766] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1186), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1188), 11,
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
  [16787] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(787), 1,
      anon_sym_LBRACK,
    ACTIONS(789), 12,
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
  [16808] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16829] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(961), 1,
      anon_sym_LBRACK,
    ACTIONS(963), 12,
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
  [16850] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(937), 1,
      anon_sym_LBRACK,
    ACTIONS(939), 12,
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
  [16871] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1190), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1192), 11,
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
  [16892] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(791), 1,
      anon_sym_LBRACK,
    ACTIONS(793), 12,
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
  [16913] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1194), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1196), 11,
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
  [16934] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [16955] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(741), 1,
      anon_sym_LBRACK,
    ACTIONS(1212), 1,
      anon_sym_multiLang,
    STATE(554), 1,
      sym_enum_modifiers,
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
  [16980] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1198), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1200), 11,
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
  [17001] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17022] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(815), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(817), 11,
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
    ACTIONS(823), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(825), 11,
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
  [17064] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1202), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1204), 11,
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
  [17085] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1182), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(1184), 11,
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
  [17106] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17126] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(845), 1,
      anon_sym_end,
    ACTIONS(843), 11,
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
  [17146] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1057), 1,
      anon_sym_LBRACK,
    ACTIONS(1059), 11,
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
  [17166] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1198), 1,
      anon_sym_LBRACK,
    ACTIONS(1200), 11,
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
  [17186] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1118), 1,
      anon_sym_LBRACK,
    ACTIONS(1120), 11,
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
  [17206] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(791), 1,
      anon_sym_LBRACK,
    ACTIONS(793), 11,
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
  [17226] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1047), 1,
      anon_sym_LBRACK,
    ACTIONS(1049), 11,
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
  [17246] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17266] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17286] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1194), 1,
      anon_sym_LBRACK,
    ACTIONS(1196), 11,
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
  [17306] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1190), 1,
      anon_sym_LBRACK,
    ACTIONS(1192), 11,
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
  [17326] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1186), 1,
      anon_sym_LBRACK,
    ACTIONS(1188), 11,
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
  [17346] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1178), 1,
      anon_sym_LBRACK,
    ACTIONS(1180), 11,
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
  [17366] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1170), 1,
      anon_sym_LBRACK,
    ACTIONS(1172), 11,
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
  [17386] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1166), 1,
      anon_sym_LBRACK,
    ACTIONS(1168), 11,
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
  [17406] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1162), 1,
      anon_sym_LBRACK,
    ACTIONS(1164), 11,
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
  [17426] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1158), 1,
      anon_sym_LBRACK,
    ACTIONS(1160), 11,
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
  [17446] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1202), 1,
      anon_sym_LBRACK,
    ACTIONS(1204), 11,
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
  [17466] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1154), 1,
      anon_sym_LBRACK,
    ACTIONS(1156), 11,
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
  [17486] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1182), 1,
      anon_sym_LBRACK,
    ACTIONS(1184), 11,
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
  [17506] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1033), 1,
      anon_sym_LBRACK,
    ACTIONS(1035), 11,
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
  [17526] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1150), 1,
      anon_sym_LBRACK,
    ACTIONS(1152), 11,
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
  [17546] = 3,
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
  [17566] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(683), 1,
      anon_sym_LBRACK,
    ACTIONS(685), 11,
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
  [17586] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(901), 1,
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
  [17606] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(905), 1,
      anon_sym_LBRACK,
    ACTIONS(907), 11,
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
  [17626] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1138), 1,
      anon_sym_LBRACK,
    ACTIONS(1140), 11,
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
  [17646] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(687), 1,
      anon_sym_LBRACK,
    ACTIONS(689), 11,
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
  [17666] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(673), 1,
      anon_sym_LBRACK,
    ACTIONS(675), 11,
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
  [17686] = 3,
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
  [17706] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(887), 1,
      anon_sym_LBRACK,
    ACTIONS(889), 11,
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
  [17726] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(883), 1,
      anon_sym_LBRACK,
    ACTIONS(885), 11,
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
  [17746] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17766] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17786] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17806] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(879), 1,
      anon_sym_LBRACK,
    ACTIONS(881), 11,
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
  [17826] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1061), 1,
      anon_sym_LBRACK,
    ACTIONS(1063), 11,
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
  [17846] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 1,
      anon_sym_LBRACK,
    ACTIONS(749), 11,
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
  [17866] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1051), 1,
      anon_sym_LBRACK,
    ACTIONS(1053), 11,
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
  [17886] = 3,
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
  [17906] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(897), 1,
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
  [17926] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [17946] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1134), 1,
      anon_sym_LBRACK,
    ACTIONS(1136), 11,
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
  [17966] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1130), 1,
      anon_sym_LBRACK,
    ACTIONS(1132), 11,
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
  [17986] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(817), 11,
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
  [18006] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1126), 1,
      anon_sym_LBRACK,
    ACTIONS(1128), 11,
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
  [18026] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(787), 1,
      anon_sym_LBRACK,
    ACTIONS(789), 11,
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
  [18046] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1122), 1,
      anon_sym_LBRACK,
    ACTIONS(1124), 11,
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
  [18066] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(801), 1,
      anon_sym_LBRACK,
    ACTIONS(803), 11,
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
  [18086] = 3,
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
  [18106] = 3,
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
  [18126] = 3,
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
  [18146] = 3,
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
  [18166] = 3,
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
  [18186] = 3,
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
  [18206] = 3,
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
  [18226] = 3,
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
  [18246] = 3,
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
  [18266] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [18286] = 3,
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
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [18306] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(833), 1,
      anon_sym_end,
    ACTIONS(831), 11,
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
  [18326] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1208), 1,
      anon_sym_LBRACK,
    ACTIONS(1210), 11,
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
  [18346] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(851), 1,
      anon_sym_LBRACK,
    ACTIONS(853), 10,
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
  [18365] = 3,
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
  [18384] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1214), 1,
      sym_identifier,
    ACTIONS(1218), 1,
      anon_sym_LPAREN,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    STATE(615), 1,
      sym_record_derived,
    STATE(793), 1,
      sym_record_variable_list,
    STATE(985), 1,
      sym_annotation,
    STATE(649), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1216), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [18415] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1214), 1,
      sym_identifier,
    ACTIONS(1218), 1,
      anon_sym_LPAREN,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    STATE(627), 1,
      sym_record_derived,
    STATE(807), 1,
      sym_record_variable_list,
    STATE(985), 1,
      sym_annotation,
    STATE(649), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1222), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [18446] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1214), 1,
      sym_identifier,
    ACTIONS(1218), 1,
      anon_sym_LPAREN,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    STATE(598), 1,
      sym_record_derived,
    STATE(772), 1,
      sym_record_variable_list,
    STATE(985), 1,
      sym_annotation,
    STATE(649), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1224), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [18477] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(843), 1,
      anon_sym_LBRACK,
    ACTIONS(845), 10,
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
  [18496] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(831), 1,
      anon_sym_LBRACK,
    ACTIONS(833), 10,
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
  [18515] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(909), 1,
      anon_sym_LBRACK,
    ACTIONS(911), 10,
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
  [18534] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(807), 1,
      anon_sym_LBRACK,
    ACTIONS(809), 10,
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
  [18553] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(897), 1,
      anon_sym_LBRACK,
    ACTIONS(899), 10,
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
  [18572] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(823), 1,
      anon_sym_LBRACK,
    ACTIONS(825), 10,
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
  [18591] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(815), 1,
      anon_sym_LBRACK,
    ACTIONS(817), 10,
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
  [18610] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(747), 1,
      anon_sym_LBRACK,
    ACTIONS(749), 10,
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
  [18629] = 3,
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
  [18648] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(879), 1,
      anon_sym_LBRACK,
    ACTIONS(881), 10,
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
  [18667] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(871), 1,
      anon_sym_LBRACK,
    ACTIONS(873), 10,
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
  [18686] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1214), 1,
      sym_identifier,
    ACTIONS(1218), 1,
      anon_sym_LPAREN,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    STATE(597), 1,
      sym_record_derived,
    STATE(832), 1,
      sym_record_variable_list,
    STATE(985), 1,
      sym_annotation,
    STATE(649), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1226), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [18717] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(819), 1,
      anon_sym_LBRACK,
    ACTIONS(821), 10,
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
  [18736] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(839), 1,
      anon_sym_LBRACK,
    ACTIONS(841), 10,
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
  [18755] = 3,
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
  [18774] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1214), 1,
      sym_identifier,
    ACTIONS(1218), 1,
      anon_sym_LPAREN,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    STATE(599), 1,
      sym_record_derived,
    STATE(732), 1,
      sym_record_variable_list,
    STATE(985), 1,
      sym_annotation,
    STATE(649), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1228), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [18805] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(883), 1,
      anon_sym_LBRACK,
    ACTIONS(885), 10,
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
  [18824] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(695), 1,
      anon_sym_end,
    ACTIONS(1230), 1,
      anon_sym_LPAREN,
    ACTIONS(1232), 1,
      anon_sym_return,
    STATE(591), 1,
      sym_parameter_list,
    STATE(663), 1,
      sym_function_return_type,
    ACTIONS(693), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [18851] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1214), 1,
      sym_identifier,
    ACTIONS(1218), 1,
      anon_sym_LPAREN,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    STATE(609), 1,
      sym_record_derived,
    STATE(766), 1,
      sym_record_variable_list,
    STATE(985), 1,
      sym_annotation,
    STATE(649), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1234), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [18882] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1214), 1,
      sym_identifier,
    ACTIONS(1218), 1,
      anon_sym_LPAREN,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    STATE(605), 1,
      sym_record_derived,
    STATE(745), 1,
      sym_record_variable_list,
    STATE(985), 1,
      sym_annotation,
    STATE(649), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1236), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [18913] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(855), 1,
      anon_sym_LBRACK,
    ACTIONS(857), 10,
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
  [18932] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(817), 1,
      anon_sym_end,
    ACTIONS(815), 10,
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
  [18951] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(859), 1,
      anon_sym_LBRACK,
    ACTIONS(861), 10,
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
  [18970] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(863), 1,
      anon_sym_LBRACK,
    ACTIONS(865), 10,
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
  [18989] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(867), 1,
      anon_sym_LBRACK,
    ACTIONS(869), 10,
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
  [19008] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(797), 1,
      anon_sym_LBRACK,
    ACTIONS(799), 10,
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
  [19027] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(875), 1,
      anon_sym_LBRACK,
    ACTIONS(877), 10,
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
  [19046] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(825), 1,
      anon_sym_end,
    ACTIONS(823), 10,
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
  [19065] = 3,
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
  [19084] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(827), 1,
      anon_sym_LBRACK,
    ACTIONS(829), 10,
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
  [19103] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(835), 1,
      anon_sym_LBRACK,
    ACTIONS(837), 10,
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
  [19122] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(847), 1,
      anon_sym_LBRACK,
    ACTIONS(849), 10,
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
  [19141] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(671), 1,
      anon_sym_end,
    ACTIONS(1238), 1,
      anon_sym_to,
    ACTIONS(669), 9,
      anon_sym_LPAREN,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_PLUS,
  [19162] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(901), 1,
      anon_sym_LBRACK,
    ACTIONS(903), 10,
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
  [19181] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(905), 1,
      anon_sym_LBRACK,
    ACTIONS(907), 10,
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
  [19200] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1214), 1,
      sym_identifier,
    ACTIONS(1218), 1,
      anon_sym_LPAREN,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    STATE(619), 1,
      sym_record_derived,
    STATE(764), 1,
      sym_record_variable_list,
    STATE(985), 1,
      sym_annotation,
    STATE(649), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1240), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [19231] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(887), 1,
      anon_sym_LBRACK,
    ACTIONS(889), 10,
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
  [19250] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(731), 1,
      anon_sym_end,
    ACTIONS(735), 1,
      anon_sym_PLUS,
    ACTIONS(1242), 1,
      anon_sym_LPAREN,
    STATE(665), 1,
      sym_sized,
    ACTIONS(729), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19274] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_memory,
    ACTIONS(1244), 1,
      sym_identifier,
    ACTIONS(1246), 1,
      anon_sym_class,
    ACTIONS(1248), 1,
      anon_sym_const,
    ACTIONS(1250), 1,
      anon_sym_type,
    STATE(948), 1,
      sym_memory_modifiers,
    ACTIONS(1252), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [19302] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(1254), 1,
      sym_identifier,
    STATE(145), 1,
      sym__range_type,
    STATE(568), 1,
      sym__string_literal,
    STATE(1029), 2,
      sym__type_identifier,
      sym_range_type,
    STATE(1020), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [19330] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(1254), 1,
      sym_identifier,
    STATE(145), 1,
      sym__range_type,
    STATE(568), 1,
      sym__string_literal,
    STATE(1046), 2,
      sym__type_identifier,
      sym_range_type,
    STATE(1020), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [19358] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(1254), 1,
      sym_identifier,
    STATE(145), 1,
      sym__range_type,
    STATE(568), 1,
      sym__string_literal,
    STATE(1057), 2,
      sym__type_identifier,
      sym_range_type,
    STATE(1020), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [19386] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(1254), 1,
      sym_identifier,
    STATE(145), 1,
      sym__range_type,
    STATE(568), 1,
      sym__string_literal,
    STATE(1063), 2,
      sym__type_identifier,
      sym_range_type,
    STATE(1020), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [19414] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(1254), 1,
      sym_identifier,
    STATE(145), 1,
      sym__range_type,
    STATE(568), 1,
      sym__string_literal,
    STATE(1069), 2,
      sym__type_identifier,
      sym_range_type,
    STATE(1020), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [19442] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(1254), 1,
      sym_identifier,
    STATE(145), 1,
      sym__range_type,
    STATE(568), 1,
      sym__string_literal,
    STATE(1006), 2,
      sym__type_identifier,
      sym_range_type,
    STATE(1020), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [19470] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(1254), 1,
      sym_identifier,
    STATE(145), 1,
      sym__range_type,
    STATE(568), 1,
      sym__string_literal,
    STATE(1075), 2,
      sym__type_identifier,
      sym_range_type,
    STATE(1020), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [19498] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(1254), 1,
      sym_identifier,
    STATE(145), 1,
      sym__range_type,
    STATE(568), 1,
      sym__string_literal,
    STATE(1080), 2,
      sym__type_identifier,
      sym_range_type,
    STATE(1020), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [19526] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(1258), 1,
      anon_sym_RPAREN,
    STATE(867), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [19553] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    STATE(867), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [19580] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(753), 1,
      anon_sym_end,
    ACTIONS(1264), 1,
      anon_sym_multiLang,
    STATE(682), 1,
      sym_enum_modifiers,
    ACTIONS(751), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19601] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(749), 1,
      anon_sym_end,
    ACTIONS(1232), 1,
      anon_sym_return,
    STATE(676), 1,
      sym_function_return_type,
    ACTIONS(747), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19622] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(743), 1,
      anon_sym_end,
    ACTIONS(1264), 1,
      anon_sym_multiLang,
    STATE(658), 1,
      sym_enum_modifiers,
    ACTIONS(741), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19643] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(1266), 1,
      anon_sym_RPAREN,
    STATE(867), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [19670] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(731), 1,
      anon_sym_end,
    ACTIONS(1242), 1,
      anon_sym_LPAREN,
    STATE(665), 1,
      sym_sized,
    ACTIONS(729), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19691] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(1268), 1,
      anon_sym_RPAREN,
    STATE(867), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [19718] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(1270), 1,
      anon_sym_RPAREN,
    STATE(867), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [19745] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1214), 1,
      sym_identifier,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    STATE(821), 1,
      sym_record_variable_list,
    STATE(985), 1,
      sym_annotation,
    STATE(649), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1272), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [19770] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1214), 1,
      sym_identifier,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    STATE(762), 1,
      sym_record_variable_list,
    STATE(985), 1,
      sym_annotation,
    STATE(649), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1274), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [19795] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1214), 1,
      sym_identifier,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    STATE(735), 1,
      sym_record_variable_list,
    STATE(985), 1,
      sym_annotation,
    STATE(649), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1276), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [19820] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(1278), 1,
      anon_sym_RPAREN,
    STATE(867), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [19847] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1280), 9,
      sym_identifier,
      anon_sym_class,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [19862] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(1282), 1,
      anon_sym_RPAREN,
    STATE(867), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [19889] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(990), 1,
      anon_sym_end,
    ACTIONS(1284), 1,
      anon_sym_COMMA,
    STATE(614), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(988), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [19910] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(1286), 1,
      anon_sym_RPAREN,
    STATE(867), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [19937] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1214), 1,
      sym_identifier,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    STATE(751), 1,
      sym_record_variable_list,
    STATE(985), 1,
      sym_annotation,
    STATE(649), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1288), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [19962] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1290), 9,
      sym_identifier,
      anon_sym_class,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [19977] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
    STATE(867), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20004] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
    STATE(867), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20031] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1214), 1,
      sym_identifier,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    STATE(810), 1,
      sym_record_variable_list,
    STATE(985), 1,
      sym_annotation,
    STATE(649), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1296), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [20056] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(1298), 1,
      anon_sym_RPAREN,
    STATE(867), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20083] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1016), 1,
      anon_sym_end,
    ACTIONS(1284), 1,
      anon_sym_COMMA,
    STATE(603), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(1014), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [20104] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(1300), 1,
      anon_sym_RPAREN,
    STATE(867), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20131] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_memory,
    ACTIONS(1302), 1,
      sym_identifier,
    ACTIONS(1304), 1,
      anon_sym_const,
    ACTIONS(1306), 1,
      anon_sym_type,
    STATE(1019), 1,
      sym_memory_modifiers,
    ACTIONS(1308), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [20156] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(977), 1,
      anon_sym_end,
    ACTIONS(1310), 1,
      anon_sym_COMMA,
    STATE(614), 1,
      aux_sym_uses_item_repeat1,
    ACTIONS(975), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [20177] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1214), 1,
      sym_identifier,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    STATE(786), 1,
      sym_record_variable_list,
    STATE(985), 1,
      sym_annotation,
    STATE(649), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1313), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [20202] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(356), 1,
      anon_sym_memory,
    ACTIONS(1315), 1,
      sym_identifier,
    ACTIONS(1317), 1,
      anon_sym_const,
    ACTIONS(1319), 1,
      anon_sym_type,
    STATE(1037), 1,
      sym_memory_modifiers,
    ACTIONS(1321), 4,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [20227] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(1323), 1,
      anon_sym_RPAREN,
    STATE(867), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20254] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(1325), 1,
      anon_sym_RPAREN,
    STATE(867), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20281] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1214), 1,
      sym_identifier,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    STATE(769), 1,
      sym_record_variable_list,
    STATE(985), 1,
      sym_annotation,
    STATE(649), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1327), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [20306] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(1329), 1,
      anon_sym_RPAREN,
    STATE(867), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20333] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(1331), 1,
      anon_sym_RPAREN,
    STATE(867), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20360] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(1333), 1,
      anon_sym_RPAREN,
    STATE(867), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20387] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
    STATE(867), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20414] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
    STATE(867), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20441] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(1339), 1,
      anon_sym_RPAREN,
    STATE(867), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20468] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
    STATE(867), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20495] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1214), 1,
      sym_identifier,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    STATE(816), 1,
      sym_record_variable_list,
    STATE(985), 1,
      sym_annotation,
    STATE(649), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1343), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [20520] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    ACTIONS(1345), 1,
      anon_sym_RPAREN,
    STATE(867), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20547] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1347), 1,
      sym_identifier,
    ACTIONS(1352), 1,
      anon_sym_LBRACK,
    STATE(985), 1,
      sym_annotation,
    STATE(629), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1350), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [20569] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(977), 1,
      anon_sym_end,
    ACTIONS(975), 7,
      anon_sym_uses,
      anon_sym_COMMA,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [20585] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1280), 8,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [20599] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    STATE(827), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20623] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1290), 8,
      sym_identifier,
      anon_sym_const,
      anon_sym_type,
      anon_sym_memory,
      anon_sym_func,
      anon_sym_function,
      anon_sym_proc,
      anon_sym_procedure,
  [20637] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    STATE(794), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20661] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    STATE(770), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20685] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    STATE(867), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20709] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    STATE(733), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20733] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    STATE(747), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20757] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(793), 1,
      anon_sym_end,
    ACTIONS(791), 7,
      anon_sym_uses,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [20773] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(789), 1,
      anon_sym_end,
    ACTIONS(787), 7,
      anon_sym_uses,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [20789] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    STATE(729), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20813] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    STATE(811), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20837] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(675), 1,
      anon_sym_end,
    ACTIONS(673), 7,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_return,
  [20853] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(689), 1,
      anon_sym_end,
    ACTIONS(687), 7,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_return,
  [20869] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(685), 1,
      anon_sym_end,
    ACTIONS(683), 7,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_return,
  [20885] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    STATE(829), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20909] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    STATE(765), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20933] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(803), 1,
      anon_sym_end,
    ACTIONS(801), 7,
      anon_sym_uses,
      anon_sym_multiLang,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [20949] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1214), 1,
      sym_identifier,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    STATE(985), 1,
      sym_annotation,
    STATE(629), 2,
      sym_record_variable,
      aux_sym_record_variable_list_repeat1,
    ACTIONS(1355), 3,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [20971] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    STATE(789), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [20995] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1256), 1,
      sym_identifier,
    STATE(777), 1,
      sym_parameter,
    STATE(901), 1,
      sym__parameter_untyped,
    STATE(902), 1,
      sym__parameter_typed,
    STATE(996), 1,
      sym_parameter_modifiers,
    ACTIONS(1260), 3,
      anon_sym_const,
      anon_sym_inOut,
      anon_sym_var,
  [21019] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(1357), 1,
      sym_identifier,
    STATE(568), 1,
      sym__string_literal,
    STATE(138), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [21040] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1160), 1,
      anon_sym_end,
    ACTIONS(1158), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21055] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1359), 1,
      sym_identifier,
    ACTIONS(1361), 1,
      anon_sym_SQUOTE,
    ACTIONS(1363), 1,
      sym__integer_literal,
    STATE(230), 1,
      sym__string_literal,
    STATE(235), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [21076] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(821), 1,
      anon_sym_end,
    ACTIONS(819), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21091] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1357), 1,
      sym_identifier,
    ACTIONS(1365), 1,
      anon_sym_SQUOTE,
    ACTIONS(1367), 1,
      sym__integer_literal,
    STATE(157), 1,
      sym__string_literal,
    STATE(138), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [21112] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1188), 1,
      anon_sym_end,
    ACTIONS(1186), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21127] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(841), 1,
      anon_sym_end,
    ACTIONS(839), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21142] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1192), 1,
      anon_sym_end,
    ACTIONS(1190), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21157] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(873), 1,
      anon_sym_end,
    ACTIONS(871), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21172] = 3,
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
  [21187] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(881), 1,
      anon_sym_end,
    ACTIONS(879), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21202] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(749), 1,
      anon_sym_end,
    ACTIONS(747), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21217] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1180), 1,
      anon_sym_end,
    ACTIONS(1178), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21232] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(899), 1,
      anon_sym_end,
    ACTIONS(897), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21247] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1369), 1,
      sym_identifier,
    ACTIONS(1371), 1,
      anon_sym_SQUOTE,
    ACTIONS(1373), 1,
      sym__integer_literal,
    STATE(546), 1,
      sym__string_literal,
    STATE(537), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [21268] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1375), 1,
      sym_identifier,
    ACTIONS(1377), 1,
      anon_sym_SQUOTE,
    ACTIONS(1379), 1,
      sym__integer_literal,
    STATE(471), 1,
      sym__string_literal,
    STATE(454), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [21289] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1172), 1,
      anon_sym_end,
    ACTIONS(1170), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21304] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1168), 1,
      anon_sym_end,
    ACTIONS(1166), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21319] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1164), 1,
      anon_sym_end,
    ACTIONS(1162), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21334] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1381), 1,
      sym_identifier,
    ACTIONS(1383), 1,
      anon_sym_SQUOTE,
    ACTIONS(1385), 1,
      sym__integer_literal,
    STATE(216), 1,
      sym__string_literal,
    STATE(205), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [21355] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1196), 1,
      anon_sym_end,
    ACTIONS(1194), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21370] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1387), 1,
      anon_sym_end,
    ACTIONS(1389), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21385] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1391), 1,
      sym_identifier,
    ACTIONS(1393), 1,
      anon_sym_SQUOTE,
    ACTIONS(1395), 1,
      sym__integer_literal,
    STATE(394), 1,
      sym__string_literal,
    STATE(319), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [21406] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(885), 1,
      anon_sym_end,
    ACTIONS(883), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21421] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(889), 1,
      anon_sym_end,
    ACTIONS(887), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21436] = 3,
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
  [21451] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1397), 1,
      anon_sym_end,
    ACTIONS(1399), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21466] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1092), 1,
      anon_sym_end,
    ACTIONS(1090), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21481] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(907), 1,
      anon_sym_end,
    ACTIONS(905), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21496] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym__integer_literal,
    ACTIONS(1401), 1,
      sym_identifier,
    STATE(568), 1,
      sym__string_literal,
    STATE(685), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [21517] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(903), 1,
      anon_sym_end,
    ACTIONS(901), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21532] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1403), 1,
      sym_identifier,
    ACTIONS(1405), 1,
      anon_sym_SQUOTE,
    ACTIONS(1407), 1,
      sym__integer_literal,
    STATE(515), 1,
      sym__string_literal,
    STATE(496), 3,
      sym__range_value,
      sym_string_literal,
      sym_integer_literal,
  [21553] = 3,
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
  [21568] = 3,
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
  [21583] = 3,
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
  [21598] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1104), 1,
      anon_sym_end,
    ACTIONS(1102), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21613] = 3,
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
  [21628] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(829), 1,
      anon_sym_end,
    ACTIONS(827), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21643] = 3,
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
  [21658] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1112), 1,
      anon_sym_end,
    ACTIONS(1110), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21673] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(837), 1,
      anon_sym_end,
    ACTIONS(835), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21688] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(849), 1,
      anon_sym_end,
    ACTIONS(847), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21703] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1409), 1,
      anon_sym_end,
    ACTIONS(1411), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21718] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1116), 1,
      anon_sym_end,
    ACTIONS(1114), 6,
      anon_sym_uses,
      anon_sym_type,
      anon_sym_LBRACK,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
  [21733] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    ACTIONS(1415), 1,
      anon_sym_RPAREN,
    STATE(890), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [21752] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    ACTIONS(1417), 1,
      anon_sym_RPAREN,
    STATE(890), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [21771] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    ACTIONS(1419), 1,
      anon_sym_RPAREN,
    STATE(890), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [21790] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    ACTIONS(1421), 1,
      anon_sym_RPAREN,
    STATE(890), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [21809] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    ACTIONS(1423), 1,
      anon_sym_RPAREN,
    STATE(890), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [21828] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    ACTIONS(1425), 1,
      anon_sym_RPAREN,
    STATE(890), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [21847] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    ACTIONS(1427), 1,
      anon_sym_RPAREN,
    STATE(890), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [21866] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    ACTIONS(1429), 1,
      anon_sym_RPAREN,
    STATE(890), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [21885] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    ACTIONS(1431), 1,
      anon_sym_RPAREN,
    STATE(890), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [21904] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1435), 1,
      anon_sym_LBRACK,
    ACTIONS(1433), 4,
      sym_identifier,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [21917] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    ACTIONS(1437), 1,
      anon_sym_RPAREN,
    STATE(890), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [21936] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    ACTIONS(1439), 1,
      anon_sym_RPAREN,
    STATE(890), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [21955] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1443), 1,
      anon_sym_LBRACK,
    ACTIONS(1441), 4,
      sym_identifier,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [21968] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    ACTIONS(1445), 1,
      anon_sym_RPAREN,
    STATE(890), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [21987] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1449), 1,
      anon_sym_LBRACK,
    ACTIONS(1447), 4,
      sym_identifier,
      anon_sym_end,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [22000] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    ACTIONS(1451), 1,
      anon_sym_RPAREN,
    STATE(890), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [22019] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    ACTIONS(1453), 1,
      anon_sym_RPAREN,
    STATE(890), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [22038] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    ACTIONS(1455), 1,
      anon_sym_RPAREN,
    STATE(890), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [22057] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    ACTIONS(1457), 1,
      anon_sym_RPAREN,
    STATE(890), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [22076] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    STATE(890), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [22092] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1459), 1,
      sym_identifier,
    ACTIONS(1461), 1,
      anon_sym_LBRACK,
    STATE(256), 1,
      sym__type_identifier,
    STATE(860), 1,
      sym_reference_modifiers,
  [22108] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1465), 1,
      anon_sym_EQ,
    STATE(898), 1,
      sym_enum_variant_redefine_value,
    ACTIONS(1463), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22122] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    STATE(757), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [22138] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1461), 1,
      anon_sym_LBRACK,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(184), 1,
      sym__type_identifier,
    STATE(879), 1,
      sym_reference_modifiers,
  [22154] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1465), 1,
      anon_sym_EQ,
    STATE(888), 1,
      sym_enum_variant_redefine_value,
    ACTIONS(1469), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [22168] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    STATE(796), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [22184] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    STATE(775), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [22200] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    STATE(837), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [22216] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    STATE(746), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [22232] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    STATE(761), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [22248] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    STATE(803), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [22264] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1461), 1,
      anon_sym_LBRACK,
    ACTIONS(1471), 1,
      sym_identifier,
    STATE(196), 1,
      sym__type_identifier,
    STATE(911), 1,
      sym_reference_modifiers,
  [22280] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1220), 1,
      anon_sym_LBRACK,
    ACTIONS(1413), 1,
      sym_identifier,
    STATE(743), 1,
      sym_enum_variant,
    STATE(973), 1,
      sym_annotation,
  [22296] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1473), 1,
      anon_sym_RPAREN,
    ACTIONS(1475), 1,
      anon_sym_COMMA,
    STATE(820), 1,
      aux_sym_parameter_list_repeat1,
  [22309] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1477), 1,
      anon_sym_RPAREN,
    ACTIONS(1479), 1,
      anon_sym_COMMA,
    STATE(756), 1,
      aux_sym_annotation_attribute_list_repeat1,
  [22322] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1268), 1,
      anon_sym_RPAREN,
    ACTIONS(1481), 1,
      anon_sym_COMMA,
    STATE(760), 1,
      aux_sym_parameter_list_repeat1,
  [22335] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1276), 1,
      anon_sym_end,
    ACTIONS(1483), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [22346] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1485), 1,
      anon_sym_RPAREN,
    ACTIONS(1487), 1,
      anon_sym_COMMA,
    STATE(731), 1,
      aux_sym_parameter_list_repeat1,
  [22359] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(1489), 1,
      anon_sym_RBRACE,
    STATE(856), 1,
      sym__string_literal,
  [22372] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1491), 1,
      anon_sym_end,
    ACTIONS(1493), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [22383] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1457), 1,
      anon_sym_RPAREN,
    ACTIONS(1495), 1,
      anon_sym_COMMA,
    STATE(831), 1,
      aux_sym_enum_variant_list_repeat1,
  [22396] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1497), 3,
      anon_sym_module,
      anon_sym_class,
      anon_sym_type,
  [22405] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1499), 1,
      anon_sym_COMMA,
    ACTIONS(1501), 1,
      anon_sym_RBRACE,
    STATE(750), 1,
      aux_sym_text_literal_repeat1,
  [22418] = 4,
    ACTIONS(1503), 1,
      sym_line_comment,
    ACTIONS(1505), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1507), 1,
      anon_sym_SQUOTE2,
    STATE(783), 1,
      aux_sym__string_literal_repeat1,
  [22431] = 4,
    ACTIONS(1503), 1,
      sym_line_comment,
    ACTIONS(1509), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1511), 1,
      anon_sym_SQUOTE2,
    STATE(744), 1,
      aux_sym__string_literal_repeat1,
  [22444] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1513), 1,
      anon_sym_COMMA,
    ACTIONS(1516), 1,
      anon_sym_RBRACK,
    STATE(741), 1,
      aux_sym_reference_modifiers_repeat1,
  [22457] = 4,
    ACTIONS(1503), 1,
      sym_line_comment,
    ACTIONS(1518), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1520), 1,
      anon_sym_SQUOTE2,
    STATE(806), 1,
      aux_sym__string_literal_repeat1,
  [22470] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1522), 1,
      anon_sym_RPAREN,
    ACTIONS(1524), 1,
      anon_sym_COMMA,
    STATE(749), 1,
      aux_sym_enum_variant_list_repeat1,
  [22483] = 4,
    ACTIONS(1503), 1,
      sym_line_comment,
    ACTIONS(1518), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1526), 1,
      anon_sym_SQUOTE2,
    STATE(806), 1,
      aux_sym__string_literal_repeat1,
  [22496] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1288), 1,
      anon_sym_end,
    ACTIONS(1528), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [22507] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1530), 1,
      anon_sym_RPAREN,
    ACTIONS(1532), 1,
      anon_sym_COMMA,
    STATE(736), 1,
      aux_sym_enum_variant_list_repeat1,
  [22520] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1534), 1,
      anon_sym_RPAREN,
    ACTIONS(1536), 1,
      anon_sym_COMMA,
    STATE(753), 1,
      aux_sym_parameter_list_repeat1,
  [22533] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1538), 1,
      anon_sym_end,
    ACTIONS(1540), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
  [22544] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1419), 1,
      anon_sym_RPAREN,
    ACTIONS(1542), 1,
      anon_sym_COMMA,
    STATE(831), 1,
      aux_sym_enum_variant_list_repeat1,
  [22557] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1544), 1,
      anon_sym_COMMA,
    ACTIONS(1547), 1,
      anon_sym_RBRACE,
    STATE(750), 1,
      aux_sym_text_literal_repeat1,
  [22570] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1549), 1,
      anon_sym_end,
    ACTIONS(1551), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [22581] = 4,
    ACTIONS(1503), 1,
      sym_line_comment,
    ACTIONS(1553), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1555), 1,
      anon_sym_SQUOTE2,
    STATE(742), 1,
      aux_sym__string_literal_repeat1,
  [22594] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1294), 1,
      anon_sym_RPAREN,
    ACTIONS(1557), 1,
      anon_sym_COMMA,
    STATE(760), 1,
      aux_sym_parameter_list_repeat1,
  [22607] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1559), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK2,
  [22616] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1561), 1,
      sym_identifier,
    ACTIONS(1563), 1,
      anon_sym_RPAREN,
    STATE(871), 1,
      sym_annotation_attribute,
  [22629] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1563), 1,
      anon_sym_RPAREN,
    ACTIONS(1565), 1,
      anon_sym_COMMA,
    STATE(788), 1,
      aux_sym_annotation_attribute_list_repeat1,
  [22642] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1567), 1,
      anon_sym_RPAREN,
    ACTIONS(1569), 1,
      anon_sym_COMMA,
    STATE(797), 1,
      aux_sym_enum_variant_list_repeat1,
  [22655] = 4,
    ACTIONS(1503), 1,
      sym_line_comment,
    ACTIONS(1571), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1573), 1,
      anon_sym_SQUOTE2,
    STATE(763), 1,
      aux_sym__string_literal_repeat1,
  [22668] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1258), 1,
      anon_sym_RPAREN,
    ACTIONS(1575), 1,
      anon_sym_COMMA,
    STATE(760), 1,
      aux_sym_parameter_list_repeat1,
  [22681] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1577), 1,
      anon_sym_RPAREN,
    ACTIONS(1579), 1,
      anon_sym_COMMA,
    STATE(760), 1,
      aux_sym_parameter_list_repeat1,
  [22694] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1582), 1,
      anon_sym_RPAREN,
    ACTIONS(1584), 1,
      anon_sym_COMMA,
    STATE(768), 1,
      aux_sym_enum_variant_list_repeat1,
  [22707] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1586), 1,
      anon_sym_end,
    ACTIONS(1588), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [22718] = 4,
    ACTIONS(1503), 1,
      sym_line_comment,
    ACTIONS(1518), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1590), 1,
      anon_sym_SQUOTE2,
    STATE(806), 1,
      aux_sym__string_literal_repeat1,
  [22731] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1327), 1,
      anon_sym_end,
    ACTIONS(1592), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [22742] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1594), 1,
      anon_sym_RPAREN,
    ACTIONS(1596), 1,
      anon_sym_COMMA,
    STATE(771), 1,
      aux_sym_parameter_list_repeat1,
  [22755] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1296), 1,
      anon_sym_end,
    ACTIONS(1598), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [22766] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1425), 1,
      anon_sym_RPAREN,
    ACTIONS(1600), 1,
      anon_sym_COMMA,
    STATE(831), 1,
      aux_sym_enum_variant_list_repeat1,
  [22779] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1431), 1,
      anon_sym_RPAREN,
    ACTIONS(1602), 1,
      anon_sym_COMMA,
    STATE(831), 1,
      aux_sym_enum_variant_list_repeat1,
  [22792] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1604), 1,
      anon_sym_end,
    ACTIONS(1606), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [22803] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1608), 1,
      anon_sym_RPAREN,
    ACTIONS(1610), 1,
      anon_sym_COMMA,
    STATE(759), 1,
      aux_sym_parameter_list_repeat1,
  [22816] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1329), 1,
      anon_sym_RPAREN,
    ACTIONS(1612), 1,
      anon_sym_COMMA,
    STATE(760), 1,
      aux_sym_parameter_list_repeat1,
  [22829] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1274), 1,
      anon_sym_end,
    ACTIONS(1614), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [22840] = 4,
    ACTIONS(1503), 1,
      sym_line_comment,
    ACTIONS(1616), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1618), 1,
      anon_sym_SQUOTE2,
    STATE(776), 1,
      aux_sym__string_literal_repeat1,
  [22853] = 4,
    ACTIONS(1503), 1,
      sym_line_comment,
    ACTIONS(1518), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1620), 1,
      anon_sym_SQUOTE2,
    STATE(806), 1,
      aux_sym__string_literal_repeat1,
  [22866] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1622), 1,
      anon_sym_RPAREN,
    ACTIONS(1624), 1,
      anon_sym_COMMA,
    STATE(767), 1,
      aux_sym_enum_variant_list_repeat1,
  [22879] = 4,
    ACTIONS(1503), 1,
      sym_line_comment,
    ACTIONS(1518), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1626), 1,
      anon_sym_SQUOTE2,
    STATE(806), 1,
      aux_sym__string_literal_repeat1,
  [22892] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1628), 1,
      anon_sym_RPAREN,
    ACTIONS(1630), 1,
      anon_sym_COMMA,
    STATE(778), 1,
      aux_sym_parameter_list_repeat1,
  [22905] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1278), 1,
      anon_sym_RPAREN,
    ACTIONS(1632), 1,
      anon_sym_COMMA,
    STATE(760), 1,
      aux_sym_parameter_list_repeat1,
  [22918] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1634), 3,
      anon_sym_module,
      anon_sym_class,
      anon_sym_type,
  [22927] = 4,
    ACTIONS(1503), 1,
      sym_line_comment,
    ACTIONS(1636), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1638), 1,
      anon_sym_SQUOTE2,
    STATE(792), 1,
      aux_sym__string_literal_repeat1,
  [22940] = 4,
    ACTIONS(1503), 1,
      sym_line_comment,
    ACTIONS(1640), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1642), 1,
      anon_sym_SQUOTE2,
    STATE(774), 1,
      aux_sym__string_literal_repeat1,
  [22953] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1644), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK2,
  [22962] = 4,
    ACTIONS(1503), 1,
      sym_line_comment,
    ACTIONS(1518), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1646), 1,
      anon_sym_SQUOTE2,
    STATE(806), 1,
      aux_sym__string_literal_repeat1,
  [22975] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1292), 1,
      anon_sym_RPAREN,
    ACTIONS(1648), 1,
      anon_sym_COMMA,
    STATE(760), 1,
      aux_sym_parameter_list_repeat1,
  [22988] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1561), 1,
      sym_identifier,
    ACTIONS(1650), 1,
      anon_sym_RPAREN,
    STATE(871), 1,
      sym_annotation_attribute,
  [23001] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1652), 1,
      anon_sym_end,
    ACTIONS(1654), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [23012] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1439), 1,
      anon_sym_RPAREN,
    ACTIONS(1656), 1,
      anon_sym_COMMA,
    STATE(831), 1,
      aux_sym_enum_variant_list_repeat1,
  [23025] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1658), 1,
      anon_sym_RPAREN,
    ACTIONS(1660), 1,
      anon_sym_COMMA,
    STATE(788), 1,
      aux_sym_annotation_attribute_list_repeat1,
  [23038] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1663), 1,
      anon_sym_RPAREN,
    ACTIONS(1665), 1,
      anon_sym_COMMA,
    STATE(784), 1,
      aux_sym_parameter_list_repeat1,
  [23051] = 4,
    ACTIONS(1503), 1,
      sym_line_comment,
    ACTIONS(1667), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1669), 1,
      anon_sym_SQUOTE2,
    STATE(805), 1,
      aux_sym__string_literal_repeat1,
  [23064] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1671), 1,
      anon_sym_COMMA,
    ACTIONS(1673), 1,
      anon_sym_RBRACK,
    STATE(741), 1,
      aux_sym_reference_modifiers_repeat1,
  [23077] = 4,
    ACTIONS(1503), 1,
      sym_line_comment,
    ACTIONS(1518), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1675), 1,
      anon_sym_SQUOTE2,
    STATE(806), 1,
      aux_sym__string_literal_repeat1,
  [23090] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1313), 1,
      anon_sym_end,
    ACTIONS(1677), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [23101] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1679), 1,
      anon_sym_RPAREN,
    ACTIONS(1681), 1,
      anon_sym_COMMA,
    STATE(808), 1,
      aux_sym_parameter_list_repeat1,
  [23114] = 4,
    ACTIONS(1503), 1,
      sym_line_comment,
    ACTIONS(1518), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1683), 1,
      anon_sym_SQUOTE2,
    STATE(806), 1,
      aux_sym__string_literal_repeat1,
  [23127] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1685), 1,
      anon_sym_RPAREN,
    ACTIONS(1687), 1,
      anon_sym_COMMA,
    STATE(787), 1,
      aux_sym_enum_variant_list_repeat1,
  [23140] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1445), 1,
      anon_sym_RPAREN,
    ACTIONS(1689), 1,
      anon_sym_COMMA,
    STATE(831), 1,
      aux_sym_enum_variant_list_repeat1,
  [23153] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1691), 1,
      anon_sym_end,
    ACTIONS(1693), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
  [23164] = 4,
    ACTIONS(1503), 1,
      sym_line_comment,
    ACTIONS(1695), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1697), 1,
      anon_sym_SQUOTE2,
    STATE(795), 1,
      aux_sym__string_literal_repeat1,
  [23177] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(1699), 1,
      anon_sym_RBRACE,
    STATE(856), 1,
      sym__string_literal,
  [23190] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1701), 1,
      anon_sym_COMMA,
    ACTIONS(1703), 1,
      anon_sym_RBRACK,
    STATE(791), 1,
      aux_sym_reference_modifiers_repeat1,
  [23203] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1705), 1,
      anon_sym_COMMA,
    ACTIONS(1707), 1,
      anon_sym_RBRACE,
    STATE(750), 1,
      aux_sym_text_literal_repeat1,
  [23216] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1709), 1,
      anon_sym_RPAREN,
    ACTIONS(1711), 1,
      anon_sym_COMMA,
    STATE(814), 1,
      aux_sym_enum_variant_list_repeat1,
  [23229] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(1707), 1,
      anon_sym_RBRACE,
    STATE(856), 1,
      sym__string_literal,
  [23242] = 4,
    ACTIONS(1503), 1,
      sym_line_comment,
    ACTIONS(1518), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1713), 1,
      anon_sym_SQUOTE2,
    STATE(806), 1,
      aux_sym__string_literal_repeat1,
  [23255] = 4,
    ACTIONS(1503), 1,
      sym_line_comment,
    ACTIONS(1715), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1718), 1,
      anon_sym_SQUOTE2,
    STATE(806), 1,
      aux_sym__string_literal_repeat1,
  [23268] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1343), 1,
      anon_sym_end,
    ACTIONS(1720), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [23279] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1333), 1,
      anon_sym_RPAREN,
    ACTIONS(1722), 1,
      anon_sym_COMMA,
    STATE(760), 1,
      aux_sym_parameter_list_repeat1,
  [23292] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
    ACTIONS(1724), 1,
      anon_sym_COMMA,
    STATE(760), 1,
      aux_sym_parameter_list_repeat1,
  [23305] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1726), 1,
      anon_sym_end,
    ACTIONS(1728), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [23316] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1730), 1,
      anon_sym_RPAREN,
    ACTIONS(1732), 1,
      anon_sym_COMMA,
    STATE(819), 1,
      aux_sym_parameter_list_repeat1,
  [23329] = 4,
    ACTIONS(1503), 1,
      sym_line_comment,
    ACTIONS(1734), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1736), 1,
      anon_sym_SQUOTE2,
    STATE(818), 1,
      aux_sym__string_literal_repeat1,
  [23342] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1738), 1,
      anon_sym_COMMA,
    ACTIONS(1740), 1,
      anon_sym_RBRACE,
    STATE(738), 1,
      aux_sym_text_literal_repeat1,
  [23355] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1415), 1,
      anon_sym_RPAREN,
    ACTIONS(1742), 1,
      anon_sym_COMMA,
    STATE(831), 1,
      aux_sym_enum_variant_list_repeat1,
  [23368] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1744), 1,
      anon_sym_COMMA,
    ACTIONS(1746), 1,
      anon_sym_RBRACE,
    STATE(802), 1,
      aux_sym_text_literal_repeat1,
  [23381] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1748), 1,
      anon_sym_end,
    ACTIONS(1750), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [23392] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1752), 1,
      anon_sym_COMMA,
    ACTIONS(1754), 1,
      anon_sym_RBRACE,
    STATE(823), 1,
      aux_sym_text_literal_repeat1,
  [23405] = 4,
    ACTIONS(1503), 1,
      sym_line_comment,
    ACTIONS(1518), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1756), 1,
      anon_sym_SQUOTE2,
    STATE(806), 1,
      aux_sym__string_literal_repeat1,
  [23418] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
    ACTIONS(1758), 1,
      anon_sym_COMMA,
    STATE(760), 1,
      aux_sym_parameter_list_repeat1,
  [23431] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1337), 1,
      anon_sym_RPAREN,
    ACTIONS(1760), 1,
      anon_sym_COMMA,
    STATE(760), 1,
      aux_sym_parameter_list_repeat1,
  [23444] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1762), 1,
      anon_sym_end,
    ACTIONS(1764), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [23455] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(1766), 1,
      anon_sym_RBRACE,
    STATE(856), 1,
      sym__string_literal,
  [23468] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1766), 1,
      anon_sym_RBRACE,
    ACTIONS(1768), 1,
      anon_sym_COMMA,
    STATE(750), 1,
      aux_sym_text_literal_repeat1,
  [23481] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1772), 1,
      anon_sym_COLON,
    ACTIONS(1770), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23492] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(1774), 1,
      anon_sym_RBRACE,
    STATE(856), 1,
      sym__string_literal,
  [23505] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1453), 1,
      anon_sym_RPAREN,
    ACTIONS(1776), 1,
      anon_sym_COMMA,
    STATE(831), 1,
      aux_sym_enum_variant_list_repeat1,
  [23518] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1778), 1,
      anon_sym_RPAREN,
    ACTIONS(1780), 1,
      anon_sym_COMMA,
    STATE(830), 1,
      aux_sym_parameter_list_repeat1,
  [23531] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1782), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK2,
  [23540] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1784), 1,
      anon_sym_RPAREN,
    ACTIONS(1786), 1,
      anon_sym_COMMA,
    STATE(809), 1,
      aux_sym_parameter_list_repeat1,
  [23553] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1262), 1,
      anon_sym_RPAREN,
    ACTIONS(1788), 1,
      anon_sym_COMMA,
    STATE(760), 1,
      aux_sym_parameter_list_repeat1,
  [23566] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1790), 1,
      anon_sym_RPAREN,
    ACTIONS(1792), 1,
      anon_sym_COMMA,
    STATE(831), 1,
      aux_sym_enum_variant_list_repeat1,
  [23579] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1272), 1,
      anon_sym_end,
    ACTIONS(1795), 2,
      anon_sym_endRecord,
      anon_sym_endNativeRecord,
  [23590] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    ACTIONS(1501), 1,
      anon_sym_RBRACE,
    STATE(856), 1,
      sym__string_literal,
  [23603] = 4,
    ACTIONS(1503), 1,
      sym_line_comment,
    ACTIONS(1518), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1797), 1,
      anon_sym_SQUOTE2,
    STATE(806), 1,
      aux_sym__string_literal_repeat1,
  [23616] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1799), 1,
      ts_builtin_sym_end,
    ACTIONS(1801), 1,
      anon_sym_end,
    ACTIONS(1803), 1,
      anon_sym_endClass,
  [23629] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1805), 1,
      anon_sym_end,
    ACTIONS(1807), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
  [23640] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1809), 1,
      anon_sym_RPAREN,
    ACTIONS(1811), 1,
      anon_sym_COMMA,
    STATE(826), 1,
      aux_sym_enum_variant_list_repeat1,
  [23653] = 4,
    ACTIONS(1503), 1,
      sym_line_comment,
    ACTIONS(1813), 1,
      aux_sym__string_literal_token1,
    ACTIONS(1815), 1,
      anon_sym_SQUOTE2,
    STATE(834), 1,
      aux_sym__string_literal_repeat1,
  [23666] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1817), 1,
      sym_identifier,
    STATE(350), 1,
      sym__type_identifier,
  [23676] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(177), 1,
      sym__type_identifier,
  [23686] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(160), 1,
      sym__type_identifier,
  [23696] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1471), 1,
      sym_identifier,
    STATE(229), 1,
      sym__type_identifier,
  [23706] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    STATE(275), 1,
      sym_enum_variant_list,
  [23716] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    STATE(856), 1,
      sym__string_literal,
  [23726] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(1055), 1,
      sym__type_identifier,
  [23736] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(1049), 1,
      sym__type_identifier,
  [23746] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1471), 1,
      sym_identifier,
    STATE(211), 1,
      sym__type_identifier,
  [23756] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1819), 1,
      anon_sym_type,
    ACTIONS(1821), 1,
      anon_sym_model,
  [23766] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(1043), 1,
      sym__type_identifier,
  [23776] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(1035), 1,
      sym__type_identifier,
  [23786] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1823), 1,
      anon_sym_type,
    ACTIONS(1825), 1,
      anon_sym_model,
  [23796] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(1026), 1,
      sym__type_identifier,
  [23806] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(1017), 1,
      sym__type_identifier,
  [23816] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1827), 1,
      anon_sym_type,
    ACTIONS(1829), 1,
      anon_sym_model,
  [23826] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1831), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23834] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1547), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [23842] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(158), 1,
      sym__type_identifier,
  [23852] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1817), 1,
      sym_identifier,
    STATE(396), 1,
      sym__type_identifier,
  [23862] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1833), 1,
      aux_sym_reference_modifiers_token1,
    ACTIONS(1835), 1,
      anon_sym_RBRACK,
  [23872] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1459), 1,
      sym_identifier,
    STATE(239), 1,
      sym__type_identifier,
  [23882] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1471), 1,
      sym_identifier,
    STATE(192), 1,
      sym__type_identifier,
  [23892] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(977), 1,
      sym__type_identifier,
  [23902] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1516), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [23910] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(957), 1,
      sym__type_identifier,
  [23920] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(855), 1,
      sym__type_identifier,
  [23930] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(943), 1,
      sym__type_identifier,
  [23940] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1577), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23948] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1837), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23956] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(983), 1,
      sym__type_identifier,
  [23966] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(1031), 1,
      sym__type_identifier,
  [23976] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1658), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [23984] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
    STATE(1038), 1,
      sym_annotation_attribute_list,
  [23994] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
    STATE(1045), 1,
      sym_annotation_attribute_list,
  [24004] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1839), 1,
      sym_identifier,
    STATE(404), 1,
      sym__type_identifier,
  [24014] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1839), 1,
      sym_identifier,
    STATE(469), 1,
      sym__type_identifier,
  [24024] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    STATE(815), 1,
      sym__string_literal,
  [24034] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(1093), 1,
      sym__type_identifier,
  [24044] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1673), 1,
      anon_sym_RBRACK,
    ACTIONS(1833), 1,
      aux_sym_reference_modifiers_token1,
  [24054] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(154), 1,
      sym__type_identifier,
  [24064] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(457), 1,
      anon_sym_LPAREN,
    STATE(288), 1,
      sym_enum_variant_list,
  [24074] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
    STATE(1095), 1,
      sym_annotation_attribute_list,
  [24084] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1841), 1,
      anon_sym_type,
    ACTIONS(1843), 1,
      anon_sym_model,
  [24094] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1845), 1,
      sym_identifier,
    STATE(142), 1,
      sym__type_identifier,
  [24104] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
    STATE(1088), 1,
      sym_annotation_attribute_list,
  [24114] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1847), 1,
      sym_identifier,
    STATE(123), 1,
      sym__type_identifier,
  [24124] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    STATE(817), 1,
      sym__string_literal,
  [24134] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
    STATE(941), 1,
      sym_annotation_attribute_list,
  [24144] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1849), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24152] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(1059), 1,
      sym__type_identifier,
  [24162] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1790), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24170] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
    STATE(1051), 1,
      sym_annotation_attribute_list,
  [24180] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1851), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24188] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym_enum_variant_list,
  [24198] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
    STATE(1000), 1,
      sym_annotation_attribute_list,
  [24208] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1561), 1,
      sym_identifier,
    STATE(871), 1,
      sym_annotation_attribute,
  [24218] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1853), 1,
      sym_identifier,
    STATE(678), 1,
      sym__type_identifier,
  [24228] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(868), 1,
      sym__type_identifier,
  [24238] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1855), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24246] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1857), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24254] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1853), 1,
      sym_identifier,
    STATE(661), 1,
      sym__type_identifier,
  [24264] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1859), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24272] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1861), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [24280] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1863), 1,
      sym_identifier,
    STATE(503), 1,
      sym__type_identifier,
  [24290] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1459), 1,
      sym_identifier,
    STATE(247), 1,
      sym__type_identifier,
  [24300] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1459), 1,
      sym_identifier,
    STATE(241), 1,
      sym__type_identifier,
  [24310] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(158), 1,
      anon_sym_SQUOTE,
    STATE(813), 1,
      sym__string_literal,
  [24320] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(1004), 1,
      sym__type_identifier,
  [24330] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym_enum_variant_list,
  [24340] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1817), 1,
      sym_identifier,
    STATE(397), 1,
      sym__type_identifier,
  [24350] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1865), 1,
      anon_sym_module,
    ACTIONS(1867), 1,
      anon_sym_class,
  [24360] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1471), 1,
      sym_identifier,
    STATE(227), 1,
      sym__type_identifier,
  [24370] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1869), 1,
      sym_identifier,
    STATE(555), 1,
      sym__type_identifier,
  [24380] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    STATE(590), 1,
      sym_enum_variant_list,
  [24390] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1853), 1,
      sym_identifier,
    STATE(689), 1,
      sym__type_identifier,
  [24400] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1853), 1,
      sym_identifier,
    STATE(662), 1,
      sym__type_identifier,
  [24410] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
    STATE(967), 1,
      sym_annotation_attribute_list,
  [24420] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(944), 1,
      sym__type_identifier,
  [24430] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    STATE(375), 1,
      sym_enum_variant_list,
  [24440] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1459), 1,
      sym_identifier,
    STATE(262), 1,
      sym__type_identifier,
  [24450] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    STATE(129), 1,
      sym_enum_variant_list,
  [24460] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1871), 1,
      anon_sym_end,
    ACTIONS(1873), 1,
      anon_sym_endClass,
  [24470] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(965), 1,
      sym__type_identifier,
  [24480] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1875), 1,
      sym_identifier,
    STATE(119), 1,
      sym__type_identifier,
  [24490] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1863), 1,
      sym_identifier,
    STATE(509), 1,
      sym__type_identifier,
  [24500] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1863), 1,
      sym_identifier,
    STATE(474), 1,
      sym__type_identifier,
  [24510] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1869), 1,
      sym_identifier,
    STATE(550), 1,
      sym__type_identifier,
  [24520] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1869), 1,
      sym_identifier,
    STATE(570), 1,
      sym__type_identifier,
  [24530] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1561), 1,
      sym_identifier,
    STATE(730), 1,
      sym_annotation_attribute,
  [24540] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1467), 1,
      sym_identifier,
    STATE(980), 1,
      sym__type_identifier,
  [24550] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    STATE(406), 1,
      sym_enum_variant_list,
  [24560] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1839), 1,
      sym_identifier,
    STATE(447), 1,
      sym__type_identifier,
  [24570] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1877), 1,
      sym_identifier,
  [24577] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1879), 1,
      sym__integer_literal,
  [24584] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1881), 1,
      sym_identifier,
  [24591] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1883), 1,
      anon_sym_RPAREN,
  [24598] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1885), 1,
      sym_identifier,
  [24605] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1887), 1,
      sym_identifier,
  [24612] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1889), 1,
      sym_identifier,
  [24619] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1891), 1,
      anon_sym_of,
  [24626] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1893), 1,
      anon_sym_model,
  [24633] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1895), 1,
      anon_sym_RBRACK2,
  [24640] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1897), 1,
      anon_sym_EQ,
  [24647] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1899), 1,
      anon_sym_RBRACK,
  [24654] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1901), 1,
      anon_sym_COLON,
  [24661] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1903), 1,
      anon_sym_COLON,
  [24668] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1905), 1,
      sym_identifier,
  [24675] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1907), 1,
      sym_identifier,
  [24682] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1909), 1,
      sym_identifier,
  [24689] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1911), 1,
      ts_builtin_sym_end,
  [24696] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1913), 1,
      anon_sym_RPAREN,
  [24703] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1915), 1,
      anon_sym_RPAREN,
  [24710] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1917), 1,
      anon_sym_COLON,
  [24717] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(403), 1,
      ts_builtin_sym_end,
  [24724] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1919), 1,
      anon_sym_of,
  [24731] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1921), 1,
      sym_identifier,
  [24738] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1923), 1,
      anon_sym_LBRACK,
  [24745] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1925), 1,
      anon_sym_RBRACK,
  [24752] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1927), 1,
      anon_sym_to,
  [24759] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1929), 1,
      sym_identifier,
  [24766] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1931), 1,
      anon_sym_SQUOTE,
  [24773] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1933), 1,
      sym_identifier,
  [24780] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1935), 1,
      anon_sym_type,
  [24787] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1937), 1,
      anon_sym_RPAREN,
  [24794] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1939), 1,
      anon_sym_EQ,
  [24801] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1941), 1,
      anon_sym_COLON,
  [24808] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1943), 1,
      anon_sym_COLON,
  [24815] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1945), 1,
      anon_sym_RBRACK2,
  [24822] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1947), 1,
      anon_sym_of,
  [24829] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1949), 1,
      ts_builtin_sym_end,
  [24836] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1951), 1,
      sym_identifier,
  [24843] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1953), 1,
      sym_identifier,
  [24850] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1955), 1,
      anon_sym_RPAREN,
  [24857] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1957), 1,
      sym_identifier,
  [24864] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
  [24871] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1959), 1,
      anon_sym_COLON,
  [24878] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1961), 1,
      sym__integer_literal,
  [24885] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1963), 1,
      anon_sym_RBRACK,
  [24892] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1965), 1,
      aux_sym_reference_modifiers_token1,
  [24899] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1967), 1,
      anon_sym_COLON,
  [24906] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1969), 1,
      anon_sym_RBRACK,
  [24913] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1971), 1,
      sym_identifier,
  [24920] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1973), 1,
      anon_sym_COLON,
  [24927] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1975), 1,
      anon_sym_RBRACK,
  [24934] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1977), 1,
      anon_sym_RPAREN,
  [24941] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1979), 1,
      sym_identifier,
  [24948] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1981), 1,
      anon_sym_LPAREN,
  [24955] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1983), 1,
      sym_identifier,
  [24962] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1985), 1,
      sym_identifier,
  [24969] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1987), 1,
      anon_sym_of,
  [24976] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1989), 1,
      sym_identifier,
  [24983] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1991), 1,
      anon_sym_COLON,
  [24990] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1993), 1,
      sym_identifier,
  [24997] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1995), 1,
      sym_identifier,
  [25004] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1997), 1,
      sym_identifier,
  [25011] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1999), 1,
      anon_sym_of,
  [25018] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2001), 1,
      sym_identifier,
  [25025] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2003), 1,
      sym_identifier,
  [25032] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2005), 1,
      anon_sym_COLON,
  [25039] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2007), 1,
      sym_identifier,
  [25046] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2009), 1,
      anon_sym_RBRACK2,
  [25053] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2011), 1,
      sym__integer_literal,
  [25060] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2013), 1,
      ts_builtin_sym_end,
  [25067] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2015), 1,
      anon_sym_RPAREN,
  [25074] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2017), 1,
      anon_sym_RPAREN,
  [25081] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2019), 1,
      anon_sym_COLON,
  [25088] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2021), 1,
      anon_sym_RBRACK,
  [25095] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2023), 1,
      anon_sym_COLON,
  [25102] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2025), 1,
      anon_sym_DOT,
  [25109] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2027), 1,
      anon_sym_RPAREN,
  [25116] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2029), 1,
      sym_identifier,
  [25123] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2031), 1,
      anon_sym_RPAREN,
  [25130] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2033), 1,
      anon_sym_COLON,
  [25137] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2035), 1,
      sym_identifier,
  [25144] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2037), 1,
      sym_identifier,
  [25151] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2039), 1,
      sym_identifier,
  [25158] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2041), 1,
      anon_sym_EQ,
  [25165] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2043), 1,
      anon_sym_COLON,
  [25172] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2045), 1,
      sym_identifier,
  [25179] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2047), 1,
      sym_identifier,
  [25186] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2049), 1,
      anon_sym_to,
  [25193] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2051), 1,
      sym_identifier,
  [25200] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2053), 1,
      sym_identifier,
  [25207] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2055), 1,
      sym_identifier,
  [25214] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2057), 1,
      anon_sym_to,
  [25221] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2059), 1,
      sym_identifier,
  [25228] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2061), 1,
      anon_sym_COLON,
  [25235] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2063), 1,
      sym_identifier,
  [25242] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2013), 1,
      ts_builtin_sym_end,
  [25249] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2065), 1,
      anon_sym_RBRACK,
  [25256] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2067), 1,
      sym_identifier,
  [25263] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2069), 1,
      anon_sym_RBRACK,
  [25270] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2071), 1,
      anon_sym_COLON,
  [25277] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2073), 1,
      sym_identifier,
  [25284] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2075), 1,
      anon_sym_EQ,
  [25291] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2077), 1,
      anon_sym_COLON,
  [25298] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2079), 1,
      sym_identifier,
  [25305] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2081), 1,
      sym_identifier,
  [25312] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2083), 1,
      anon_sym_RBRACK2,
  [25319] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2085), 1,
      sym_identifier,
  [25326] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2087), 1,
      anon_sym_COLON,
  [25333] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2089), 1,
      anon_sym_to,
  [25340] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2091), 1,
      sym_identifier,
  [25347] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2093), 1,
      anon_sym_COLON,
  [25354] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2095), 1,
      sym__integer_literal,
  [25361] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2097), 1,
      anon_sym_RBRACK2,
  [25368] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2099), 1,
      anon_sym_RBRACK,
  [25375] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2101), 1,
      sym_identifier,
  [25382] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2103), 1,
      sym_identifier,
  [25389] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2105), 1,
      anon_sym_COLON,
  [25396] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2107), 1,
      anon_sym_SQUOTE,
  [25403] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2109), 1,
      anon_sym_RBRACK2,
  [25410] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2111), 1,
      anon_sym_RPAREN,
  [25417] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2113), 1,
      anon_sym_to,
  [25424] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2115), 1,
      anon_sym_of,
  [25431] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2117), 1,
      anon_sym_COLON,
  [25438] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2119), 1,
      sym__integer_literal,
  [25445] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2121), 1,
      anon_sym_RBRACK,
  [25452] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1634), 1,
      sym_identifier,
  [25459] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2123), 1,
      anon_sym_RBRACK,
  [25466] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2125), 1,
      anon_sym_to,
  [25473] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2127), 1,
      sym_identifier,
  [25480] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2129), 1,
      sym__integer_literal,
  [25487] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2131), 1,
      anon_sym_RBRACK,
  [25494] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2133), 1,
      anon_sym_of,
  [25501] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2135), 1,
      sym_identifier,
  [25508] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2137), 1,
      anon_sym_to,
  [25515] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2139), 1,
      anon_sym_COLON,
  [25522] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2141), 1,
      sym__integer_literal,
  [25529] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2143), 1,
      anon_sym_RBRACK,
  [25536] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2145), 1,
      sym_identifier,
  [25543] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2147), 1,
      anon_sym_RPAREN,
  [25550] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2149), 1,
      anon_sym_to,
  [25557] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2151), 1,
      anon_sym_of,
  [25564] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2153), 1,
      sym__integer_literal,
  [25571] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2155), 1,
      anon_sym_RBRACK,
  [25578] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2157), 1,
      sym_identifier,
  [25585] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2159), 1,
      anon_sym_SQUOTE,
  [25592] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2161), 1,
      anon_sym_RPAREN,
  [25599] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2163), 1,
      sym__integer_literal,
  [25606] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2165), 1,
      anon_sym_RBRACK,
  [25613] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2167), 1,
      ts_builtin_sym_end,
  [25620] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2169), 1,
      sym_identifier,
  [25627] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2171), 1,
      sym_identifier,
  [25634] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2173), 1,
      sym_identifier,
  [25641] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2175), 1,
      sym_identifier,
  [25648] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2177), 1,
      sym_identifier,
  [25655] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2179), 1,
      anon_sym_model,
  [25662] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2181), 1,
      anon_sym_RBRACK2,
  [25669] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1497), 1,
      sym_identifier,
  [25676] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2183), 1,
      anon_sym_DOT,
  [25683] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2185), 1,
      anon_sym_EQ,
  [25690] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2187), 1,
      sym_identifier,
  [25697] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2189), 1,
      anon_sym_RBRACK,
  [25704] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2191), 1,
      anon_sym_model,
  [25711] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2193), 1,
      anon_sym_RBRACK2,
  [25718] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2195), 1,
      anon_sym_SQUOTE,
  [25725] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2197), 1,
      anon_sym_DOT,
  [25732] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2199), 1,
      anon_sym_COLON,
  [25739] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2201), 1,
      anon_sym_EQ,
  [25746] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2203), 1,
      anon_sym_model,
  [25753] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2205), 1,
      ts_builtin_sym_end,
  [25760] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2207), 1,
      sym_identifier,
  [25767] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(1833), 1,
      aux_sym_reference_modifiers_token1,
  [25774] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2209), 1,
      sym_identifier,
  [25781] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2211), 1,
      anon_sym_to,
  [25788] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2213), 1,
      sym_identifier,
  [25795] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2215), 1,
      anon_sym_COLON,
  [25802] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2217), 1,
      anon_sym_LBRACK,
  [25809] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2219), 1,
      sym_identifier,
  [25816] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2221), 1,
      anon_sym_COLON,
  [25823] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2223), 1,
      anon_sym_LBRACK,
  [25830] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2225), 1,
      sym_identifier,
  [25837] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2227), 1,
      anon_sym_COLON,
  [25844] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2229), 1,
      anon_sym_LBRACK,
  [25851] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2231), 1,
      anon_sym_LBRACK,
  [25858] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2233), 1,
      anon_sym_LBRACK,
  [25865] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2235), 1,
      anon_sym_LBRACK,
  [25872] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2237), 1,
      anon_sym_LBRACK,
  [25879] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2239), 1,
      anon_sym_SQUOTE,
  [25886] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(2241), 1,
      anon_sym_SQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 102,
  [SMALL_STATE(4)] = 204,
  [SMALL_STATE(5)] = 305,
  [SMALL_STATE(6)] = 406,
  [SMALL_STATE(7)] = 504,
  [SMALL_STATE(8)] = 602,
  [SMALL_STATE(9)] = 698,
  [SMALL_STATE(10)] = 794,
  [SMALL_STATE(11)] = 889,
  [SMALL_STATE(12)] = 988,
  [SMALL_STATE(13)] = 1087,
  [SMALL_STATE(14)] = 1186,
  [SMALL_STATE(15)] = 1285,
  [SMALL_STATE(16)] = 1384,
  [SMALL_STATE(17)] = 1479,
  [SMALL_STATE(18)] = 1578,
  [SMALL_STATE(19)] = 1677,
  [SMALL_STATE(20)] = 1776,
  [SMALL_STATE(21)] = 1875,
  [SMALL_STATE(22)] = 1965,
  [SMALL_STATE(23)] = 2055,
  [SMALL_STATE(24)] = 2147,
  [SMALL_STATE(25)] = 2239,
  [SMALL_STATE(26)] = 2329,
  [SMALL_STATE(27)] = 2419,
  [SMALL_STATE(28)] = 2508,
  [SMALL_STATE(29)] = 2597,
  [SMALL_STATE(30)] = 2686,
  [SMALL_STATE(31)] = 2775,
  [SMALL_STATE(32)] = 2861,
  [SMALL_STATE(33)] = 2947,
  [SMALL_STATE(34)] = 3033,
  [SMALL_STATE(35)] = 3119,
  [SMALL_STATE(36)] = 3212,
  [SMALL_STATE(37)] = 3305,
  [SMALL_STATE(38)] = 3379,
  [SMALL_STATE(39)] = 3453,
  [SMALL_STATE(40)] = 3527,
  [SMALL_STATE(41)] = 3601,
  [SMALL_STATE(42)] = 3675,
  [SMALL_STATE(43)] = 3749,
  [SMALL_STATE(44)] = 3822,
  [SMALL_STATE(45)] = 3895,
  [SMALL_STATE(46)] = 3968,
  [SMALL_STATE(47)] = 4041,
  [SMALL_STATE(48)] = 4114,
  [SMALL_STATE(49)] = 4187,
  [SMALL_STATE(50)] = 4257,
  [SMALL_STATE(51)] = 4327,
  [SMALL_STATE(52)] = 4397,
  [SMALL_STATE(53)] = 4467,
  [SMALL_STATE(54)] = 4537,
  [SMALL_STATE(55)] = 4607,
  [SMALL_STATE(56)] = 4677,
  [SMALL_STATE(57)] = 4747,
  [SMALL_STATE(58)] = 4817,
  [SMALL_STATE(59)] = 4887,
  [SMALL_STATE(60)] = 4957,
  [SMALL_STATE(61)] = 5042,
  [SMALL_STATE(62)] = 5127,
  [SMALL_STATE(63)] = 5212,
  [SMALL_STATE(64)] = 5297,
  [SMALL_STATE(65)] = 5382,
  [SMALL_STATE(66)] = 5467,
  [SMALL_STATE(67)] = 5552,
  [SMALL_STATE(68)] = 5637,
  [SMALL_STATE(69)] = 5703,
  [SMALL_STATE(70)] = 5769,
  [SMALL_STATE(71)] = 5832,
  [SMALL_STATE(72)] = 5895,
  [SMALL_STATE(73)] = 5958,
  [SMALL_STATE(74)] = 6021,
  [SMALL_STATE(75)] = 6084,
  [SMALL_STATE(76)] = 6147,
  [SMALL_STATE(77)] = 6210,
  [SMALL_STATE(78)] = 6273,
  [SMALL_STATE(79)] = 6336,
  [SMALL_STATE(80)] = 6396,
  [SMALL_STATE(81)] = 6456,
  [SMALL_STATE(82)] = 6516,
  [SMALL_STATE(83)] = 6576,
  [SMALL_STATE(84)] = 6636,
  [SMALL_STATE(85)] = 6696,
  [SMALL_STATE(86)] = 6756,
  [SMALL_STATE(87)] = 6802,
  [SMALL_STATE(88)] = 6848,
  [SMALL_STATE(89)] = 6894,
  [SMALL_STATE(90)] = 6934,
  [SMALL_STATE(91)] = 6974,
  [SMALL_STATE(92)] = 7013,
  [SMALL_STATE(93)] = 7056,
  [SMALL_STATE(94)] = 7101,
  [SMALL_STATE(95)] = 7146,
  [SMALL_STATE(96)] = 7191,
  [SMALL_STATE(97)] = 7234,
  [SMALL_STATE(98)] = 7273,
  [SMALL_STATE(99)] = 7317,
  [SMALL_STATE(100)] = 7359,
  [SMALL_STATE(101)] = 7401,
  [SMALL_STATE(102)] = 7433,
  [SMALL_STATE(103)] = 7465,
  [SMALL_STATE(104)] = 7503,
  [SMALL_STATE(105)] = 7535,
  [SMALL_STATE(106)] = 7579,
  [SMALL_STATE(107)] = 7611,
  [SMALL_STATE(108)] = 7655,
  [SMALL_STATE(109)] = 7693,
  [SMALL_STATE(110)] = 7733,
  [SMALL_STATE(111)] = 7764,
  [SMALL_STATE(112)] = 7805,
  [SMALL_STATE(113)] = 7836,
  [SMALL_STATE(114)] = 7869,
  [SMALL_STATE(115)] = 7908,
  [SMALL_STATE(116)] = 7949,
  [SMALL_STATE(117)] = 7980,
  [SMALL_STATE(118)] = 8011,
  [SMALL_STATE(119)] = 8042,
  [SMALL_STATE(120)] = 8073,
  [SMALL_STATE(121)] = 8110,
  [SMALL_STATE(122)] = 8148,
  [SMALL_STATE(123)] = 8182,
  [SMALL_STATE(124)] = 8212,
  [SMALL_STATE(125)] = 8242,
  [SMALL_STATE(126)] = 8274,
  [SMALL_STATE(127)] = 8304,
  [SMALL_STATE(128)] = 8338,
  [SMALL_STATE(129)] = 8372,
  [SMALL_STATE(130)] = 8406,
  [SMALL_STATE(131)] = 8452,
  [SMALL_STATE(132)] = 8498,
  [SMALL_STATE(133)] = 8534,
  [SMALL_STATE(134)] = 8564,
  [SMALL_STATE(135)] = 8594,
  [SMALL_STATE(136)] = 8624,
  [SMALL_STATE(137)] = 8657,
  [SMALL_STATE(138)] = 8686,
  [SMALL_STATE(139)] = 8715,
  [SMALL_STATE(140)] = 8744,
  [SMALL_STATE(141)] = 8773,
  [SMALL_STATE(142)] = 8804,
  [SMALL_STATE(143)] = 8833,
  [SMALL_STATE(144)] = 8862,
  [SMALL_STATE(145)] = 8897,
  [SMALL_STATE(146)] = 8926,
  [SMALL_STATE(147)] = 8955,
  [SMALL_STATE(148)] = 8984,
  [SMALL_STATE(149)] = 9017,
  [SMALL_STATE(150)] = 9050,
  [SMALL_STATE(151)] = 9079,
  [SMALL_STATE(152)] = 9112,
  [SMALL_STATE(153)] = 9141,
  [SMALL_STATE(154)] = 9169,
  [SMALL_STATE(155)] = 9197,
  [SMALL_STATE(156)] = 9225,
  [SMALL_STATE(157)] = 9253,
  [SMALL_STATE(158)] = 9281,
  [SMALL_STATE(159)] = 9309,
  [SMALL_STATE(160)] = 9337,
  [SMALL_STATE(161)] = 9365,
  [SMALL_STATE(162)] = 9393,
  [SMALL_STATE(163)] = 9421,
  [SMALL_STATE(164)] = 9449,
  [SMALL_STATE(165)] = 9477,
  [SMALL_STATE(166)] = 9505,
  [SMALL_STATE(167)] = 9533,
  [SMALL_STATE(168)] = 9561,
  [SMALL_STATE(169)] = 9589,
  [SMALL_STATE(170)] = 9617,
  [SMALL_STATE(171)] = 9645,
  [SMALL_STATE(172)] = 9673,
  [SMALL_STATE(173)] = 9701,
  [SMALL_STATE(174)] = 9729,
  [SMALL_STATE(175)] = 9757,
  [SMALL_STATE(176)] = 9785,
  [SMALL_STATE(177)] = 9813,
  [SMALL_STATE(178)] = 9841,
  [SMALL_STATE(179)] = 9873,
  [SMALL_STATE(180)] = 9901,
  [SMALL_STATE(181)] = 9929,
  [SMALL_STATE(182)] = 9957,
  [SMALL_STATE(183)] = 9989,
  [SMALL_STATE(184)] = 10021,
  [SMALL_STATE(185)] = 10049,
  [SMALL_STATE(186)] = 10077,
  [SMALL_STATE(187)] = 10105,
  [SMALL_STATE(188)] = 10133,
  [SMALL_STATE(189)] = 10161,
  [SMALL_STATE(190)] = 10189,
  [SMALL_STATE(191)] = 10217,
  [SMALL_STATE(192)] = 10249,
  [SMALL_STATE(193)] = 10276,
  [SMALL_STATE(194)] = 10303,
  [SMALL_STATE(195)] = 10330,
  [SMALL_STATE(196)] = 10357,
  [SMALL_STATE(197)] = 10384,
  [SMALL_STATE(198)] = 10411,
  [SMALL_STATE(199)] = 10438,
  [SMALL_STATE(200)] = 10465,
  [SMALL_STATE(201)] = 10492,
  [SMALL_STATE(202)] = 10519,
  [SMALL_STATE(203)] = 10546,
  [SMALL_STATE(204)] = 10573,
  [SMALL_STATE(205)] = 10600,
  [SMALL_STATE(206)] = 10627,
  [SMALL_STATE(207)] = 10654,
  [SMALL_STATE(208)] = 10681,
  [SMALL_STATE(209)] = 10708,
  [SMALL_STATE(210)] = 10735,
  [SMALL_STATE(211)] = 10762,
  [SMALL_STATE(212)] = 10789,
  [SMALL_STATE(213)] = 10816,
  [SMALL_STATE(214)] = 10843,
  [SMALL_STATE(215)] = 10870,
  [SMALL_STATE(216)] = 10897,
  [SMALL_STATE(217)] = 10924,
  [SMALL_STATE(218)] = 10951,
  [SMALL_STATE(219)] = 10978,
  [SMALL_STATE(220)] = 11005,
  [SMALL_STATE(221)] = 11032,
  [SMALL_STATE(222)] = 11059,
  [SMALL_STATE(223)] = 11086,
  [SMALL_STATE(224)] = 11113,
  [SMALL_STATE(225)] = 11140,
  [SMALL_STATE(226)] = 11167,
  [SMALL_STATE(227)] = 11194,
  [SMALL_STATE(228)] = 11221,
  [SMALL_STATE(229)] = 11248,
  [SMALL_STATE(230)] = 11275,
  [SMALL_STATE(231)] = 11301,
  [SMALL_STATE(232)] = 11327,
  [SMALL_STATE(233)] = 11353,
  [SMALL_STATE(234)] = 11379,
  [SMALL_STATE(235)] = 11405,
  [SMALL_STATE(236)] = 11431,
  [SMALL_STATE(237)] = 11465,
  [SMALL_STATE(238)] = 11491,
  [SMALL_STATE(239)] = 11517,
  [SMALL_STATE(240)] = 11543,
  [SMALL_STATE(241)] = 11569,
  [SMALL_STATE(242)] = 11595,
  [SMALL_STATE(243)] = 11621,
  [SMALL_STATE(244)] = 11647,
  [SMALL_STATE(245)] = 11673,
  [SMALL_STATE(246)] = 11699,
  [SMALL_STATE(247)] = 11725,
  [SMALL_STATE(248)] = 11751,
  [SMALL_STATE(249)] = 11777,
  [SMALL_STATE(250)] = 11803,
  [SMALL_STATE(251)] = 11829,
  [SMALL_STATE(252)] = 11871,
  [SMALL_STATE(253)] = 11897,
  [SMALL_STATE(254)] = 11923,
  [SMALL_STATE(255)] = 11949,
  [SMALL_STATE(256)] = 11975,
  [SMALL_STATE(257)] = 12001,
  [SMALL_STATE(258)] = 12027,
  [SMALL_STATE(259)] = 12053,
  [SMALL_STATE(260)] = 12079,
  [SMALL_STATE(261)] = 12105,
  [SMALL_STATE(262)] = 12131,
  [SMALL_STATE(263)] = 12157,
  [SMALL_STATE(264)] = 12183,
  [SMALL_STATE(265)] = 12214,
  [SMALL_STATE(266)] = 12239,
  [SMALL_STATE(267)] = 12272,
  [SMALL_STATE(268)] = 12297,
  [SMALL_STATE(269)] = 12334,
  [SMALL_STATE(270)] = 12359,
  [SMALL_STATE(271)] = 12396,
  [SMALL_STATE(272)] = 12423,
  [SMALL_STATE(273)] = 12448,
  [SMALL_STATE(274)] = 12473,
  [SMALL_STATE(275)] = 12505,
  [SMALL_STATE(276)] = 12533,
  [SMALL_STATE(277)] = 12561,
  [SMALL_STATE(278)] = 12587,
  [SMALL_STATE(279)] = 12615,
  [SMALL_STATE(280)] = 12643,
  [SMALL_STATE(281)] = 12671,
  [SMALL_STATE(282)] = 12699,
  [SMALL_STATE(283)] = 12727,
  [SMALL_STATE(284)] = 12761,
  [SMALL_STATE(285)] = 12791,
  [SMALL_STATE(286)] = 12825,
  [SMALL_STATE(287)] = 12853,
  [SMALL_STATE(288)] = 12881,
  [SMALL_STATE(289)] = 12908,
  [SMALL_STATE(290)] = 12935,
  [SMALL_STATE(291)] = 12958,
  [SMALL_STATE(292)] = 12981,
  [SMALL_STATE(293)] = 13008,
  [SMALL_STATE(294)] = 13035,
  [SMALL_STATE(295)] = 13062,
  [SMALL_STATE(296)] = 13087,
  [SMALL_STATE(297)] = 13116,
  [SMALL_STATE(298)] = 13139,
  [SMALL_STATE(299)] = 13166,
  [SMALL_STATE(300)] = 13189,
  [SMALL_STATE(301)] = 13212,
  [SMALL_STATE(302)] = 13235,
  [SMALL_STATE(303)] = 13258,
  [SMALL_STATE(304)] = 13281,
  [SMALL_STATE(305)] = 13312,
  [SMALL_STATE(306)] = 13335,
  [SMALL_STATE(307)] = 13358,
  [SMALL_STATE(308)] = 13385,
  [SMALL_STATE(309)] = 13412,
  [SMALL_STATE(310)] = 13439,
  [SMALL_STATE(311)] = 13462,
  [SMALL_STATE(312)] = 13484,
  [SMALL_STATE(313)] = 13506,
  [SMALL_STATE(314)] = 13528,
  [SMALL_STATE(315)] = 13562,
  [SMALL_STATE(316)] = 13584,
  [SMALL_STATE(317)] = 13606,
  [SMALL_STATE(318)] = 13632,
  [SMALL_STATE(319)] = 13654,
  [SMALL_STATE(320)] = 13676,
  [SMALL_STATE(321)] = 13698,
  [SMALL_STATE(322)] = 13720,
  [SMALL_STATE(323)] = 13742,
  [SMALL_STATE(324)] = 13764,
  [SMALL_STATE(325)] = 13786,
  [SMALL_STATE(326)] = 13808,
  [SMALL_STATE(327)] = 13830,
  [SMALL_STATE(328)] = 13852,
  [SMALL_STATE(329)] = 13874,
  [SMALL_STATE(330)] = 13908,
  [SMALL_STATE(331)] = 13930,
  [SMALL_STATE(332)] = 13952,
  [SMALL_STATE(333)] = 13978,
  [SMALL_STATE(334)] = 14000,
  [SMALL_STATE(335)] = 14026,
  [SMALL_STATE(336)] = 14048,
  [SMALL_STATE(337)] = 14070,
  [SMALL_STATE(338)] = 14092,
  [SMALL_STATE(339)] = 14114,
  [SMALL_STATE(340)] = 14136,
  [SMALL_STATE(341)] = 14158,
  [SMALL_STATE(342)] = 14180,
  [SMALL_STATE(343)] = 14202,
  [SMALL_STATE(344)] = 14224,
  [SMALL_STATE(345)] = 14246,
  [SMALL_STATE(346)] = 14268,
  [SMALL_STATE(347)] = 14290,
  [SMALL_STATE(348)] = 14312,
  [SMALL_STATE(349)] = 14334,
  [SMALL_STATE(350)] = 14356,
  [SMALL_STATE(351)] = 14378,
  [SMALL_STATE(352)] = 14400,
  [SMALL_STATE(353)] = 14422,
  [SMALL_STATE(354)] = 14444,
  [SMALL_STATE(355)] = 14466,
  [SMALL_STATE(356)] = 14488,
  [SMALL_STATE(357)] = 14510,
  [SMALL_STATE(358)] = 14544,
  [SMALL_STATE(359)] = 14566,
  [SMALL_STATE(360)] = 14588,
  [SMALL_STATE(361)] = 14610,
  [SMALL_STATE(362)] = 14632,
  [SMALL_STATE(363)] = 14654,
  [SMALL_STATE(364)] = 14676,
  [SMALL_STATE(365)] = 14698,
  [SMALL_STATE(366)] = 14720,
  [SMALL_STATE(367)] = 14742,
  [SMALL_STATE(368)] = 14764,
  [SMALL_STATE(369)] = 14786,
  [SMALL_STATE(370)] = 14808,
  [SMALL_STATE(371)] = 14830,
  [SMALL_STATE(372)] = 14856,
  [SMALL_STATE(373)] = 14878,
  [SMALL_STATE(374)] = 14900,
  [SMALL_STATE(375)] = 14922,
  [SMALL_STATE(376)] = 14948,
  [SMALL_STATE(377)] = 14982,
  [SMALL_STATE(378)] = 15004,
  [SMALL_STATE(379)] = 15026,
  [SMALL_STATE(380)] = 15048,
  [SMALL_STATE(381)] = 15070,
  [SMALL_STATE(382)] = 15096,
  [SMALL_STATE(383)] = 15118,
  [SMALL_STATE(384)] = 15152,
  [SMALL_STATE(385)] = 15174,
  [SMALL_STATE(386)] = 15196,
  [SMALL_STATE(387)] = 15218,
  [SMALL_STATE(388)] = 15240,
  [SMALL_STATE(389)] = 15266,
  [SMALL_STATE(390)] = 15288,
  [SMALL_STATE(391)] = 15316,
  [SMALL_STATE(392)] = 15338,
  [SMALL_STATE(393)] = 15364,
  [SMALL_STATE(394)] = 15386,
  [SMALL_STATE(395)] = 15408,
  [SMALL_STATE(396)] = 15442,
  [SMALL_STATE(397)] = 15464,
  [SMALL_STATE(398)] = 15486,
  [SMALL_STATE(399)] = 15510,
  [SMALL_STATE(400)] = 15536,
  [SMALL_STATE(401)] = 15557,
  [SMALL_STATE(402)] = 15578,
  [SMALL_STATE(403)] = 15599,
  [SMALL_STATE(404)] = 15624,
  [SMALL_STATE(405)] = 15645,
  [SMALL_STATE(406)] = 15666,
  [SMALL_STATE(407)] = 15691,
  [SMALL_STATE(408)] = 15712,
  [SMALL_STATE(409)] = 15733,
  [SMALL_STATE(410)] = 15754,
  [SMALL_STATE(411)] = 15775,
  [SMALL_STATE(412)] = 15796,
  [SMALL_STATE(413)] = 15817,
  [SMALL_STATE(414)] = 15838,
  [SMALL_STATE(415)] = 15859,
  [SMALL_STATE(416)] = 15880,
  [SMALL_STATE(417)] = 15901,
  [SMALL_STATE(418)] = 15922,
  [SMALL_STATE(419)] = 15943,
  [SMALL_STATE(420)] = 15964,
  [SMALL_STATE(421)] = 15985,
  [SMALL_STATE(422)] = 16006,
  [SMALL_STATE(423)] = 16027,
  [SMALL_STATE(424)] = 16048,
  [SMALL_STATE(425)] = 16069,
  [SMALL_STATE(426)] = 16090,
  [SMALL_STATE(427)] = 16111,
  [SMALL_STATE(428)] = 16132,
  [SMALL_STATE(429)] = 16153,
  [SMALL_STATE(430)] = 16174,
  [SMALL_STATE(431)] = 16195,
  [SMALL_STATE(432)] = 16216,
  [SMALL_STATE(433)] = 16237,
  [SMALL_STATE(434)] = 16262,
  [SMALL_STATE(435)] = 16283,
  [SMALL_STATE(436)] = 16304,
  [SMALL_STATE(437)] = 16325,
  [SMALL_STATE(438)] = 16346,
  [SMALL_STATE(439)] = 16367,
  [SMALL_STATE(440)] = 16388,
  [SMALL_STATE(441)] = 16409,
  [SMALL_STATE(442)] = 16430,
  [SMALL_STATE(443)] = 16451,
  [SMALL_STATE(444)] = 16472,
  [SMALL_STATE(445)] = 16493,
  [SMALL_STATE(446)] = 16514,
  [SMALL_STATE(447)] = 16535,
  [SMALL_STATE(448)] = 16556,
  [SMALL_STATE(449)] = 16577,
  [SMALL_STATE(450)] = 16598,
  [SMALL_STATE(451)] = 16619,
  [SMALL_STATE(452)] = 16640,
  [SMALL_STATE(453)] = 16661,
  [SMALL_STATE(454)] = 16682,
  [SMALL_STATE(455)] = 16703,
  [SMALL_STATE(456)] = 16724,
  [SMALL_STATE(457)] = 16745,
  [SMALL_STATE(458)] = 16766,
  [SMALL_STATE(459)] = 16787,
  [SMALL_STATE(460)] = 16808,
  [SMALL_STATE(461)] = 16829,
  [SMALL_STATE(462)] = 16850,
  [SMALL_STATE(463)] = 16871,
  [SMALL_STATE(464)] = 16892,
  [SMALL_STATE(465)] = 16913,
  [SMALL_STATE(466)] = 16934,
  [SMALL_STATE(467)] = 16955,
  [SMALL_STATE(468)] = 16980,
  [SMALL_STATE(469)] = 17001,
  [SMALL_STATE(470)] = 17022,
  [SMALL_STATE(471)] = 17043,
  [SMALL_STATE(472)] = 17064,
  [SMALL_STATE(473)] = 17085,
  [SMALL_STATE(474)] = 17106,
  [SMALL_STATE(475)] = 17126,
  [SMALL_STATE(476)] = 17146,
  [SMALL_STATE(477)] = 17166,
  [SMALL_STATE(478)] = 17186,
  [SMALL_STATE(479)] = 17206,
  [SMALL_STATE(480)] = 17226,
  [SMALL_STATE(481)] = 17246,
  [SMALL_STATE(482)] = 17266,
  [SMALL_STATE(483)] = 17286,
  [SMALL_STATE(484)] = 17306,
  [SMALL_STATE(485)] = 17326,
  [SMALL_STATE(486)] = 17346,
  [SMALL_STATE(487)] = 17366,
  [SMALL_STATE(488)] = 17386,
  [SMALL_STATE(489)] = 17406,
  [SMALL_STATE(490)] = 17426,
  [SMALL_STATE(491)] = 17446,
  [SMALL_STATE(492)] = 17466,
  [SMALL_STATE(493)] = 17486,
  [SMALL_STATE(494)] = 17506,
  [SMALL_STATE(495)] = 17526,
  [SMALL_STATE(496)] = 17546,
  [SMALL_STATE(497)] = 17566,
  [SMALL_STATE(498)] = 17586,
  [SMALL_STATE(499)] = 17606,
  [SMALL_STATE(500)] = 17626,
  [SMALL_STATE(501)] = 17646,
  [SMALL_STATE(502)] = 17666,
  [SMALL_STATE(503)] = 17686,
  [SMALL_STATE(504)] = 17706,
  [SMALL_STATE(505)] = 17726,
  [SMALL_STATE(506)] = 17746,
  [SMALL_STATE(507)] = 17766,
  [SMALL_STATE(508)] = 17786,
  [SMALL_STATE(509)] = 17806,
  [SMALL_STATE(510)] = 17826,
  [SMALL_STATE(511)] = 17846,
  [SMALL_STATE(512)] = 17866,
  [SMALL_STATE(513)] = 17886,
  [SMALL_STATE(514)] = 17906,
  [SMALL_STATE(515)] = 17926,
  [SMALL_STATE(516)] = 17946,
  [SMALL_STATE(517)] = 17966,
  [SMALL_STATE(518)] = 17986,
  [SMALL_STATE(519)] = 18006,
  [SMALL_STATE(520)] = 18026,
  [SMALL_STATE(521)] = 18046,
  [SMALL_STATE(522)] = 18066,
  [SMALL_STATE(523)] = 18086,
  [SMALL_STATE(524)] = 18106,
  [SMALL_STATE(525)] = 18126,
  [SMALL_STATE(526)] = 18146,
  [SMALL_STATE(527)] = 18166,
  [SMALL_STATE(528)] = 18186,
  [SMALL_STATE(529)] = 18206,
  [SMALL_STATE(530)] = 18226,
  [SMALL_STATE(531)] = 18246,
  [SMALL_STATE(532)] = 18266,
  [SMALL_STATE(533)] = 18286,
  [SMALL_STATE(534)] = 18306,
  [SMALL_STATE(535)] = 18326,
  [SMALL_STATE(536)] = 18346,
  [SMALL_STATE(537)] = 18365,
  [SMALL_STATE(538)] = 18384,
  [SMALL_STATE(539)] = 18415,
  [SMALL_STATE(540)] = 18446,
  [SMALL_STATE(541)] = 18477,
  [SMALL_STATE(542)] = 18496,
  [SMALL_STATE(543)] = 18515,
  [SMALL_STATE(544)] = 18534,
  [SMALL_STATE(545)] = 18553,
  [SMALL_STATE(546)] = 18572,
  [SMALL_STATE(547)] = 18591,
  [SMALL_STATE(548)] = 18610,
  [SMALL_STATE(549)] = 18629,
  [SMALL_STATE(550)] = 18648,
  [SMALL_STATE(551)] = 18667,
  [SMALL_STATE(552)] = 18686,
  [SMALL_STATE(553)] = 18717,
  [SMALL_STATE(554)] = 18736,
  [SMALL_STATE(555)] = 18755,
  [SMALL_STATE(556)] = 18774,
  [SMALL_STATE(557)] = 18805,
  [SMALL_STATE(558)] = 18824,
  [SMALL_STATE(559)] = 18851,
  [SMALL_STATE(560)] = 18882,
  [SMALL_STATE(561)] = 18913,
  [SMALL_STATE(562)] = 18932,
  [SMALL_STATE(563)] = 18951,
  [SMALL_STATE(564)] = 18970,
  [SMALL_STATE(565)] = 18989,
  [SMALL_STATE(566)] = 19008,
  [SMALL_STATE(567)] = 19027,
  [SMALL_STATE(568)] = 19046,
  [SMALL_STATE(569)] = 19065,
  [SMALL_STATE(570)] = 19084,
  [SMALL_STATE(571)] = 19103,
  [SMALL_STATE(572)] = 19122,
  [SMALL_STATE(573)] = 19141,
  [SMALL_STATE(574)] = 19162,
  [SMALL_STATE(575)] = 19181,
  [SMALL_STATE(576)] = 19200,
  [SMALL_STATE(577)] = 19231,
  [SMALL_STATE(578)] = 19250,
  [SMALL_STATE(579)] = 19274,
  [SMALL_STATE(580)] = 19302,
  [SMALL_STATE(581)] = 19330,
  [SMALL_STATE(582)] = 19358,
  [SMALL_STATE(583)] = 19386,
  [SMALL_STATE(584)] = 19414,
  [SMALL_STATE(585)] = 19442,
  [SMALL_STATE(586)] = 19470,
  [SMALL_STATE(587)] = 19498,
  [SMALL_STATE(588)] = 19526,
  [SMALL_STATE(589)] = 19553,
  [SMALL_STATE(590)] = 19580,
  [SMALL_STATE(591)] = 19601,
  [SMALL_STATE(592)] = 19622,
  [SMALL_STATE(593)] = 19643,
  [SMALL_STATE(594)] = 19670,
  [SMALL_STATE(595)] = 19691,
  [SMALL_STATE(596)] = 19718,
  [SMALL_STATE(597)] = 19745,
  [SMALL_STATE(598)] = 19770,
  [SMALL_STATE(599)] = 19795,
  [SMALL_STATE(600)] = 19820,
  [SMALL_STATE(601)] = 19847,
  [SMALL_STATE(602)] = 19862,
  [SMALL_STATE(603)] = 19889,
  [SMALL_STATE(604)] = 19910,
  [SMALL_STATE(605)] = 19937,
  [SMALL_STATE(606)] = 19962,
  [SMALL_STATE(607)] = 19977,
  [SMALL_STATE(608)] = 20004,
  [SMALL_STATE(609)] = 20031,
  [SMALL_STATE(610)] = 20056,
  [SMALL_STATE(611)] = 20083,
  [SMALL_STATE(612)] = 20104,
  [SMALL_STATE(613)] = 20131,
  [SMALL_STATE(614)] = 20156,
  [SMALL_STATE(615)] = 20177,
  [SMALL_STATE(616)] = 20202,
  [SMALL_STATE(617)] = 20227,
  [SMALL_STATE(618)] = 20254,
  [SMALL_STATE(619)] = 20281,
  [SMALL_STATE(620)] = 20306,
  [SMALL_STATE(621)] = 20333,
  [SMALL_STATE(622)] = 20360,
  [SMALL_STATE(623)] = 20387,
  [SMALL_STATE(624)] = 20414,
  [SMALL_STATE(625)] = 20441,
  [SMALL_STATE(626)] = 20468,
  [SMALL_STATE(627)] = 20495,
  [SMALL_STATE(628)] = 20520,
  [SMALL_STATE(629)] = 20547,
  [SMALL_STATE(630)] = 20569,
  [SMALL_STATE(631)] = 20585,
  [SMALL_STATE(632)] = 20599,
  [SMALL_STATE(633)] = 20623,
  [SMALL_STATE(634)] = 20637,
  [SMALL_STATE(635)] = 20661,
  [SMALL_STATE(636)] = 20685,
  [SMALL_STATE(637)] = 20709,
  [SMALL_STATE(638)] = 20733,
  [SMALL_STATE(639)] = 20757,
  [SMALL_STATE(640)] = 20773,
  [SMALL_STATE(641)] = 20789,
  [SMALL_STATE(642)] = 20813,
  [SMALL_STATE(643)] = 20837,
  [SMALL_STATE(644)] = 20853,
  [SMALL_STATE(645)] = 20869,
  [SMALL_STATE(646)] = 20885,
  [SMALL_STATE(647)] = 20909,
  [SMALL_STATE(648)] = 20933,
  [SMALL_STATE(649)] = 20949,
  [SMALL_STATE(650)] = 20971,
  [SMALL_STATE(651)] = 20995,
  [SMALL_STATE(652)] = 21019,
  [SMALL_STATE(653)] = 21040,
  [SMALL_STATE(654)] = 21055,
  [SMALL_STATE(655)] = 21076,
  [SMALL_STATE(656)] = 21091,
  [SMALL_STATE(657)] = 21112,
  [SMALL_STATE(658)] = 21127,
  [SMALL_STATE(659)] = 21142,
  [SMALL_STATE(660)] = 21157,
  [SMALL_STATE(661)] = 21172,
  [SMALL_STATE(662)] = 21187,
  [SMALL_STATE(663)] = 21202,
  [SMALL_STATE(664)] = 21217,
  [SMALL_STATE(665)] = 21232,
  [SMALL_STATE(666)] = 21247,
  [SMALL_STATE(667)] = 21268,
  [SMALL_STATE(668)] = 21289,
  [SMALL_STATE(669)] = 21304,
  [SMALL_STATE(670)] = 21319,
  [SMALL_STATE(671)] = 21334,
  [SMALL_STATE(672)] = 21355,
  [SMALL_STATE(673)] = 21370,
  [SMALL_STATE(674)] = 21385,
  [SMALL_STATE(675)] = 21406,
  [SMALL_STATE(676)] = 21421,
  [SMALL_STATE(677)] = 21436,
  [SMALL_STATE(678)] = 21451,
  [SMALL_STATE(679)] = 21466,
  [SMALL_STATE(680)] = 21481,
  [SMALL_STATE(681)] = 21496,
  [SMALL_STATE(682)] = 21517,
  [SMALL_STATE(683)] = 21532,
  [SMALL_STATE(684)] = 21553,
  [SMALL_STATE(685)] = 21568,
  [SMALL_STATE(686)] = 21583,
  [SMALL_STATE(687)] = 21598,
  [SMALL_STATE(688)] = 21613,
  [SMALL_STATE(689)] = 21628,
  [SMALL_STATE(690)] = 21643,
  [SMALL_STATE(691)] = 21658,
  [SMALL_STATE(692)] = 21673,
  [SMALL_STATE(693)] = 21688,
  [SMALL_STATE(694)] = 21703,
  [SMALL_STATE(695)] = 21718,
  [SMALL_STATE(696)] = 21733,
  [SMALL_STATE(697)] = 21752,
  [SMALL_STATE(698)] = 21771,
  [SMALL_STATE(699)] = 21790,
  [SMALL_STATE(700)] = 21809,
  [SMALL_STATE(701)] = 21828,
  [SMALL_STATE(702)] = 21847,
  [SMALL_STATE(703)] = 21866,
  [SMALL_STATE(704)] = 21885,
  [SMALL_STATE(705)] = 21904,
  [SMALL_STATE(706)] = 21917,
  [SMALL_STATE(707)] = 21936,
  [SMALL_STATE(708)] = 21955,
  [SMALL_STATE(709)] = 21968,
  [SMALL_STATE(710)] = 21987,
  [SMALL_STATE(711)] = 22000,
  [SMALL_STATE(712)] = 22019,
  [SMALL_STATE(713)] = 22038,
  [SMALL_STATE(714)] = 22057,
  [SMALL_STATE(715)] = 22076,
  [SMALL_STATE(716)] = 22092,
  [SMALL_STATE(717)] = 22108,
  [SMALL_STATE(718)] = 22122,
  [SMALL_STATE(719)] = 22138,
  [SMALL_STATE(720)] = 22154,
  [SMALL_STATE(721)] = 22168,
  [SMALL_STATE(722)] = 22184,
  [SMALL_STATE(723)] = 22200,
  [SMALL_STATE(724)] = 22216,
  [SMALL_STATE(725)] = 22232,
  [SMALL_STATE(726)] = 22248,
  [SMALL_STATE(727)] = 22264,
  [SMALL_STATE(728)] = 22280,
  [SMALL_STATE(729)] = 22296,
  [SMALL_STATE(730)] = 22309,
  [SMALL_STATE(731)] = 22322,
  [SMALL_STATE(732)] = 22335,
  [SMALL_STATE(733)] = 22346,
  [SMALL_STATE(734)] = 22359,
  [SMALL_STATE(735)] = 22372,
  [SMALL_STATE(736)] = 22383,
  [SMALL_STATE(737)] = 22396,
  [SMALL_STATE(738)] = 22405,
  [SMALL_STATE(739)] = 22418,
  [SMALL_STATE(740)] = 22431,
  [SMALL_STATE(741)] = 22444,
  [SMALL_STATE(742)] = 22457,
  [SMALL_STATE(743)] = 22470,
  [SMALL_STATE(744)] = 22483,
  [SMALL_STATE(745)] = 22496,
  [SMALL_STATE(746)] = 22507,
  [SMALL_STATE(747)] = 22520,
  [SMALL_STATE(748)] = 22533,
  [SMALL_STATE(749)] = 22544,
  [SMALL_STATE(750)] = 22557,
  [SMALL_STATE(751)] = 22570,
  [SMALL_STATE(752)] = 22581,
  [SMALL_STATE(753)] = 22594,
  [SMALL_STATE(754)] = 22607,
  [SMALL_STATE(755)] = 22616,
  [SMALL_STATE(756)] = 22629,
  [SMALL_STATE(757)] = 22642,
  [SMALL_STATE(758)] = 22655,
  [SMALL_STATE(759)] = 22668,
  [SMALL_STATE(760)] = 22681,
  [SMALL_STATE(761)] = 22694,
  [SMALL_STATE(762)] = 22707,
  [SMALL_STATE(763)] = 22718,
  [SMALL_STATE(764)] = 22731,
  [SMALL_STATE(765)] = 22742,
  [SMALL_STATE(766)] = 22755,
  [SMALL_STATE(767)] = 22766,
  [SMALL_STATE(768)] = 22779,
  [SMALL_STATE(769)] = 22792,
  [SMALL_STATE(770)] = 22803,
  [SMALL_STATE(771)] = 22816,
  [SMALL_STATE(772)] = 22829,
  [SMALL_STATE(773)] = 22840,
  [SMALL_STATE(774)] = 22853,
  [SMALL_STATE(775)] = 22866,
  [SMALL_STATE(776)] = 22879,
  [SMALL_STATE(777)] = 22892,
  [SMALL_STATE(778)] = 22905,
  [SMALL_STATE(779)] = 22918,
  [SMALL_STATE(780)] = 22927,
  [SMALL_STATE(781)] = 22940,
  [SMALL_STATE(782)] = 22953,
  [SMALL_STATE(783)] = 22962,
  [SMALL_STATE(784)] = 22975,
  [SMALL_STATE(785)] = 22988,
  [SMALL_STATE(786)] = 23001,
  [SMALL_STATE(787)] = 23012,
  [SMALL_STATE(788)] = 23025,
  [SMALL_STATE(789)] = 23038,
  [SMALL_STATE(790)] = 23051,
  [SMALL_STATE(791)] = 23064,
  [SMALL_STATE(792)] = 23077,
  [SMALL_STATE(793)] = 23090,
  [SMALL_STATE(794)] = 23101,
  [SMALL_STATE(795)] = 23114,
  [SMALL_STATE(796)] = 23127,
  [SMALL_STATE(797)] = 23140,
  [SMALL_STATE(798)] = 23153,
  [SMALL_STATE(799)] = 23164,
  [SMALL_STATE(800)] = 23177,
  [SMALL_STATE(801)] = 23190,
  [SMALL_STATE(802)] = 23203,
  [SMALL_STATE(803)] = 23216,
  [SMALL_STATE(804)] = 23229,
  [SMALL_STATE(805)] = 23242,
  [SMALL_STATE(806)] = 23255,
  [SMALL_STATE(807)] = 23268,
  [SMALL_STATE(808)] = 23279,
  [SMALL_STATE(809)] = 23292,
  [SMALL_STATE(810)] = 23305,
  [SMALL_STATE(811)] = 23316,
  [SMALL_STATE(812)] = 23329,
  [SMALL_STATE(813)] = 23342,
  [SMALL_STATE(814)] = 23355,
  [SMALL_STATE(815)] = 23368,
  [SMALL_STATE(816)] = 23381,
  [SMALL_STATE(817)] = 23392,
  [SMALL_STATE(818)] = 23405,
  [SMALL_STATE(819)] = 23418,
  [SMALL_STATE(820)] = 23431,
  [SMALL_STATE(821)] = 23444,
  [SMALL_STATE(822)] = 23455,
  [SMALL_STATE(823)] = 23468,
  [SMALL_STATE(824)] = 23481,
  [SMALL_STATE(825)] = 23492,
  [SMALL_STATE(826)] = 23505,
  [SMALL_STATE(827)] = 23518,
  [SMALL_STATE(828)] = 23531,
  [SMALL_STATE(829)] = 23540,
  [SMALL_STATE(830)] = 23553,
  [SMALL_STATE(831)] = 23566,
  [SMALL_STATE(832)] = 23579,
  [SMALL_STATE(833)] = 23590,
  [SMALL_STATE(834)] = 23603,
  [SMALL_STATE(835)] = 23616,
  [SMALL_STATE(836)] = 23629,
  [SMALL_STATE(837)] = 23640,
  [SMALL_STATE(838)] = 23653,
  [SMALL_STATE(839)] = 23666,
  [SMALL_STATE(840)] = 23676,
  [SMALL_STATE(841)] = 23686,
  [SMALL_STATE(842)] = 23696,
  [SMALL_STATE(843)] = 23706,
  [SMALL_STATE(844)] = 23716,
  [SMALL_STATE(845)] = 23726,
  [SMALL_STATE(846)] = 23736,
  [SMALL_STATE(847)] = 23746,
  [SMALL_STATE(848)] = 23756,
  [SMALL_STATE(849)] = 23766,
  [SMALL_STATE(850)] = 23776,
  [SMALL_STATE(851)] = 23786,
  [SMALL_STATE(852)] = 23796,
  [SMALL_STATE(853)] = 23806,
  [SMALL_STATE(854)] = 23816,
  [SMALL_STATE(855)] = 23826,
  [SMALL_STATE(856)] = 23834,
  [SMALL_STATE(857)] = 23842,
  [SMALL_STATE(858)] = 23852,
  [SMALL_STATE(859)] = 23862,
  [SMALL_STATE(860)] = 23872,
  [SMALL_STATE(861)] = 23882,
  [SMALL_STATE(862)] = 23892,
  [SMALL_STATE(863)] = 23902,
  [SMALL_STATE(864)] = 23910,
  [SMALL_STATE(865)] = 23920,
  [SMALL_STATE(866)] = 23930,
  [SMALL_STATE(867)] = 23940,
  [SMALL_STATE(868)] = 23948,
  [SMALL_STATE(869)] = 23956,
  [SMALL_STATE(870)] = 23966,
  [SMALL_STATE(871)] = 23976,
  [SMALL_STATE(872)] = 23984,
  [SMALL_STATE(873)] = 23994,
  [SMALL_STATE(874)] = 24004,
  [SMALL_STATE(875)] = 24014,
  [SMALL_STATE(876)] = 24024,
  [SMALL_STATE(877)] = 24034,
  [SMALL_STATE(878)] = 24044,
  [SMALL_STATE(879)] = 24054,
  [SMALL_STATE(880)] = 24064,
  [SMALL_STATE(881)] = 24074,
  [SMALL_STATE(882)] = 24084,
  [SMALL_STATE(883)] = 24094,
  [SMALL_STATE(884)] = 24104,
  [SMALL_STATE(885)] = 24114,
  [SMALL_STATE(886)] = 24124,
  [SMALL_STATE(887)] = 24134,
  [SMALL_STATE(888)] = 24144,
  [SMALL_STATE(889)] = 24152,
  [SMALL_STATE(890)] = 24162,
  [SMALL_STATE(891)] = 24170,
  [SMALL_STATE(892)] = 24180,
  [SMALL_STATE(893)] = 24188,
  [SMALL_STATE(894)] = 24198,
  [SMALL_STATE(895)] = 24208,
  [SMALL_STATE(896)] = 24218,
  [SMALL_STATE(897)] = 24228,
  [SMALL_STATE(898)] = 24238,
  [SMALL_STATE(899)] = 24246,
  [SMALL_STATE(900)] = 24254,
  [SMALL_STATE(901)] = 24264,
  [SMALL_STATE(902)] = 24272,
  [SMALL_STATE(903)] = 24280,
  [SMALL_STATE(904)] = 24290,
  [SMALL_STATE(905)] = 24300,
  [SMALL_STATE(906)] = 24310,
  [SMALL_STATE(907)] = 24320,
  [SMALL_STATE(908)] = 24330,
  [SMALL_STATE(909)] = 24340,
  [SMALL_STATE(910)] = 24350,
  [SMALL_STATE(911)] = 24360,
  [SMALL_STATE(912)] = 24370,
  [SMALL_STATE(913)] = 24380,
  [SMALL_STATE(914)] = 24390,
  [SMALL_STATE(915)] = 24400,
  [SMALL_STATE(916)] = 24410,
  [SMALL_STATE(917)] = 24420,
  [SMALL_STATE(918)] = 24430,
  [SMALL_STATE(919)] = 24440,
  [SMALL_STATE(920)] = 24450,
  [SMALL_STATE(921)] = 24460,
  [SMALL_STATE(922)] = 24470,
  [SMALL_STATE(923)] = 24480,
  [SMALL_STATE(924)] = 24490,
  [SMALL_STATE(925)] = 24500,
  [SMALL_STATE(926)] = 24510,
  [SMALL_STATE(927)] = 24520,
  [SMALL_STATE(928)] = 24530,
  [SMALL_STATE(929)] = 24540,
  [SMALL_STATE(930)] = 24550,
  [SMALL_STATE(931)] = 24560,
  [SMALL_STATE(932)] = 24570,
  [SMALL_STATE(933)] = 24577,
  [SMALL_STATE(934)] = 24584,
  [SMALL_STATE(935)] = 24591,
  [SMALL_STATE(936)] = 24598,
  [SMALL_STATE(937)] = 24605,
  [SMALL_STATE(938)] = 24612,
  [SMALL_STATE(939)] = 24619,
  [SMALL_STATE(940)] = 24626,
  [SMALL_STATE(941)] = 24633,
  [SMALL_STATE(942)] = 24640,
  [SMALL_STATE(943)] = 24647,
  [SMALL_STATE(944)] = 24654,
  [SMALL_STATE(945)] = 24661,
  [SMALL_STATE(946)] = 24668,
  [SMALL_STATE(947)] = 24675,
  [SMALL_STATE(948)] = 24682,
  [SMALL_STATE(949)] = 24689,
  [SMALL_STATE(950)] = 24696,
  [SMALL_STATE(951)] = 24703,
  [SMALL_STATE(952)] = 24710,
  [SMALL_STATE(953)] = 24717,
  [SMALL_STATE(954)] = 24724,
  [SMALL_STATE(955)] = 24731,
  [SMALL_STATE(956)] = 24738,
  [SMALL_STATE(957)] = 24745,
  [SMALL_STATE(958)] = 24752,
  [SMALL_STATE(959)] = 24759,
  [SMALL_STATE(960)] = 24766,
  [SMALL_STATE(961)] = 24773,
  [SMALL_STATE(962)] = 24780,
  [SMALL_STATE(963)] = 24787,
  [SMALL_STATE(964)] = 24794,
  [SMALL_STATE(965)] = 24801,
  [SMALL_STATE(966)] = 24808,
  [SMALL_STATE(967)] = 24815,
  [SMALL_STATE(968)] = 24822,
  [SMALL_STATE(969)] = 24829,
  [SMALL_STATE(970)] = 24836,
  [SMALL_STATE(971)] = 24843,
  [SMALL_STATE(972)] = 24850,
  [SMALL_STATE(973)] = 24857,
  [SMALL_STATE(974)] = 24864,
  [SMALL_STATE(975)] = 24871,
  [SMALL_STATE(976)] = 24878,
  [SMALL_STATE(977)] = 24885,
  [SMALL_STATE(978)] = 24892,
  [SMALL_STATE(979)] = 24899,
  [SMALL_STATE(980)] = 24906,
  [SMALL_STATE(981)] = 24913,
  [SMALL_STATE(982)] = 24920,
  [SMALL_STATE(983)] = 24927,
  [SMALL_STATE(984)] = 24934,
  [SMALL_STATE(985)] = 24941,
  [SMALL_STATE(986)] = 24948,
  [SMALL_STATE(987)] = 24955,
  [SMALL_STATE(988)] = 24962,
  [SMALL_STATE(989)] = 24969,
  [SMALL_STATE(990)] = 24976,
  [SMALL_STATE(991)] = 24983,
  [SMALL_STATE(992)] = 24990,
  [SMALL_STATE(993)] = 24997,
  [SMALL_STATE(994)] = 25004,
  [SMALL_STATE(995)] = 25011,
  [SMALL_STATE(996)] = 25018,
  [SMALL_STATE(997)] = 25025,
  [SMALL_STATE(998)] = 25032,
  [SMALL_STATE(999)] = 25039,
  [SMALL_STATE(1000)] = 25046,
  [SMALL_STATE(1001)] = 25053,
  [SMALL_STATE(1002)] = 25060,
  [SMALL_STATE(1003)] = 25067,
  [SMALL_STATE(1004)] = 25074,
  [SMALL_STATE(1005)] = 25081,
  [SMALL_STATE(1006)] = 25088,
  [SMALL_STATE(1007)] = 25095,
  [SMALL_STATE(1008)] = 25102,
  [SMALL_STATE(1009)] = 25109,
  [SMALL_STATE(1010)] = 25116,
  [SMALL_STATE(1011)] = 25123,
  [SMALL_STATE(1012)] = 25130,
  [SMALL_STATE(1013)] = 25137,
  [SMALL_STATE(1014)] = 25144,
  [SMALL_STATE(1015)] = 25151,
  [SMALL_STATE(1016)] = 25158,
  [SMALL_STATE(1017)] = 25165,
  [SMALL_STATE(1018)] = 25172,
  [SMALL_STATE(1019)] = 25179,
  [SMALL_STATE(1020)] = 25186,
  [SMALL_STATE(1021)] = 25193,
  [SMALL_STATE(1022)] = 25200,
  [SMALL_STATE(1023)] = 25207,
  [SMALL_STATE(1024)] = 25214,
  [SMALL_STATE(1025)] = 25221,
  [SMALL_STATE(1026)] = 25228,
  [SMALL_STATE(1027)] = 25235,
  [SMALL_STATE(1028)] = 25242,
  [SMALL_STATE(1029)] = 25249,
  [SMALL_STATE(1030)] = 25256,
  [SMALL_STATE(1031)] = 25263,
  [SMALL_STATE(1032)] = 25270,
  [SMALL_STATE(1033)] = 25277,
  [SMALL_STATE(1034)] = 25284,
  [SMALL_STATE(1035)] = 25291,
  [SMALL_STATE(1036)] = 25298,
  [SMALL_STATE(1037)] = 25305,
  [SMALL_STATE(1038)] = 25312,
  [SMALL_STATE(1039)] = 25319,
  [SMALL_STATE(1040)] = 25326,
  [SMALL_STATE(1041)] = 25333,
  [SMALL_STATE(1042)] = 25340,
  [SMALL_STATE(1043)] = 25347,
  [SMALL_STATE(1044)] = 25354,
  [SMALL_STATE(1045)] = 25361,
  [SMALL_STATE(1046)] = 25368,
  [SMALL_STATE(1047)] = 25375,
  [SMALL_STATE(1048)] = 25382,
  [SMALL_STATE(1049)] = 25389,
  [SMALL_STATE(1050)] = 25396,
  [SMALL_STATE(1051)] = 25403,
  [SMALL_STATE(1052)] = 25410,
  [SMALL_STATE(1053)] = 25417,
  [SMALL_STATE(1054)] = 25424,
  [SMALL_STATE(1055)] = 25431,
  [SMALL_STATE(1056)] = 25438,
  [SMALL_STATE(1057)] = 25445,
  [SMALL_STATE(1058)] = 25452,
  [SMALL_STATE(1059)] = 25459,
  [SMALL_STATE(1060)] = 25466,
  [SMALL_STATE(1061)] = 25473,
  [SMALL_STATE(1062)] = 25480,
  [SMALL_STATE(1063)] = 25487,
  [SMALL_STATE(1064)] = 25494,
  [SMALL_STATE(1065)] = 25501,
  [SMALL_STATE(1066)] = 25508,
  [SMALL_STATE(1067)] = 25515,
  [SMALL_STATE(1068)] = 25522,
  [SMALL_STATE(1069)] = 25529,
  [SMALL_STATE(1070)] = 25536,
  [SMALL_STATE(1071)] = 25543,
  [SMALL_STATE(1072)] = 25550,
  [SMALL_STATE(1073)] = 25557,
  [SMALL_STATE(1074)] = 25564,
  [SMALL_STATE(1075)] = 25571,
  [SMALL_STATE(1076)] = 25578,
  [SMALL_STATE(1077)] = 25585,
  [SMALL_STATE(1078)] = 25592,
  [SMALL_STATE(1079)] = 25599,
  [SMALL_STATE(1080)] = 25606,
  [SMALL_STATE(1081)] = 25613,
  [SMALL_STATE(1082)] = 25620,
  [SMALL_STATE(1083)] = 25627,
  [SMALL_STATE(1084)] = 25634,
  [SMALL_STATE(1085)] = 25641,
  [SMALL_STATE(1086)] = 25648,
  [SMALL_STATE(1087)] = 25655,
  [SMALL_STATE(1088)] = 25662,
  [SMALL_STATE(1089)] = 25669,
  [SMALL_STATE(1090)] = 25676,
  [SMALL_STATE(1091)] = 25683,
  [SMALL_STATE(1092)] = 25690,
  [SMALL_STATE(1093)] = 25697,
  [SMALL_STATE(1094)] = 25704,
  [SMALL_STATE(1095)] = 25711,
  [SMALL_STATE(1096)] = 25718,
  [SMALL_STATE(1097)] = 25725,
  [SMALL_STATE(1098)] = 25732,
  [SMALL_STATE(1099)] = 25739,
  [SMALL_STATE(1100)] = 25746,
  [SMALL_STATE(1101)] = 25753,
  [SMALL_STATE(1102)] = 25760,
  [SMALL_STATE(1103)] = 25767,
  [SMALL_STATE(1104)] = 25774,
  [SMALL_STATE(1105)] = 25781,
  [SMALL_STATE(1106)] = 25788,
  [SMALL_STATE(1107)] = 25795,
  [SMALL_STATE(1108)] = 25802,
  [SMALL_STATE(1109)] = 25809,
  [SMALL_STATE(1110)] = 25816,
  [SMALL_STATE(1111)] = 25823,
  [SMALL_STATE(1112)] = 25830,
  [SMALL_STATE(1113)] = 25837,
  [SMALL_STATE(1114)] = 25844,
  [SMALL_STATE(1115)] = 25851,
  [SMALL_STATE(1116)] = 25858,
  [SMALL_STATE(1117)] = 25865,
  [SMALL_STATE(1118)] = 25872,
  [SMALL_STATE(1119)] = 25879,
  [SMALL_STATE(1120)] = 25886,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(936),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1015),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(882),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_item, 3, .production_id = 4),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_signature_item, 3, .production_id = 4),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 3, .production_id = 4), SHIFT(356),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 3, .production_id = 4), SHIFT(1048),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 3, .production_id = 4), SHIFT(846),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_function_signature_item, 3, .production_id = 4), SHIFT(882),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(960),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(961),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(923),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_item, 2, .production_id = 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_signature_item, 2, .production_id = 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 2, .production_id = 2), SHIFT(389),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 2, .production_id = 2), SHIFT(1048),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 2, .production_id = 2), SHIFT(846),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_function_signature_item, 2, .production_id = 2), SHIFT(882),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 3, .production_id = 4), SHIFT(401),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1119),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(885),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 2, .production_id = 2), SHIFT(472),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 2, .production_id = 2), SHIFT(491),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1120),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(883),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 3, .production_id = 4), SHIFT(500),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_item, 3, .production_id = 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_signature_item, 3, .production_id = 2),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 3, .production_id = 2), SHIFT(359),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 3, .production_id = 2), SHIFT(1048),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 3, .production_id = 2), SHIFT(846),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_function_signature_item, 3, .production_id = 2), SHIFT(882),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_item, 4, .production_id = 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_signature_item, 4, .production_id = 4),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 4, .production_id = 4), SHIFT(336),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 4, .production_id = 4), SHIFT(1048),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 4, .production_id = 4), SHIFT(846),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_function_signature_item, 4, .production_id = 4), SHIFT(882),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 4, .production_id = 4), SHIFT(422),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(722),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(716),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(869),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(739),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(904),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1115),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(718),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(719),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(929),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(840),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(559),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(956),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(726),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(727),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(889),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(842),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1108),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 3, .production_id = 2), SHIFT(442),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(442),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 4, .production_id = 4), SHIFT(531),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(531),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 3, .production_id = 2), SHIFT(492),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_item, 4, .production_id = 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_signature_item, 4, .production_id = 2),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 4, .production_id = 2), SHIFT(348),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 4, .production_id = 2), SHIFT(1048),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 4, .production_id = 2), SHIFT(846),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_function_signature_item, 4, .production_id = 2), SHIFT(882),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_item, 5, .production_id = 4),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_signature_item, 5, .production_id = 4),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 5, .production_id = 4), SHIFT(346),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 5, .production_id = 4), SHIFT(1048),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 5, .production_id = 4), SHIFT(846),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_function_signature_item, 5, .production_id = 4), SHIFT(882),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 4, .production_id = 2), SHIFT(412),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 5, .production_id = 4), SHIFT(424),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 5, .production_id = 4), SHIFT(478),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 4, .production_id = 2), SHIFT(519),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(724),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(866),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(926),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(556),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1116),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_item, 6, .production_id = 4),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_signature_item, 6, .production_id = 4),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 6, .production_id = 4), SHIFT(391),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 6, .production_id = 4), SHIFT(1048),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 6, .production_id = 4), SHIFT(846),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_function_signature_item, 6, .production_id = 4), SHIFT(882),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_signature_item, 5, .production_id = 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_signature_item, 5, .production_id = 2),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 5, .production_id = 2), SHIFT(316),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 5, .production_id = 2), SHIFT(1048),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 5, .production_id = 2), SHIFT(846),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_function_signature_item, 5, .production_id = 2), SHIFT(882),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 6, .production_id = 4), SHIFT(432),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 5, .production_id = 2), SHIFT(428),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 6, .production_id = 4), SHIFT(535),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2, .production_id = 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(975),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(974),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(990),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(971),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1027),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(917),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(934),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(854),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(981),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(975),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(990),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(971),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(1027),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(917),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(934),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(854),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(981),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_function_signature_item, 5, .production_id = 2), SHIFT(512),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 4),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(953),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(949),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, .production_id = 4),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(969),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(723),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(877),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(839),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1111),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(725),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(862),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(915),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1118),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(728),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(864),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(924),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1117),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(721),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(870),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(874),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(538),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1114),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 2, .production_id = 2),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1012),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 2, .production_id = 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(938),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(994),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1085),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(853),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(851),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(999),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 3, .production_id = 4),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 3, .production_id = 4),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(955),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 6, .production_id = 25),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 6, .production_id = 25),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1032),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1021),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1082),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1092),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(850),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1086),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 6, .production_id = 13),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 6, .production_id = 13),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 5, .production_id = 13),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 5, .production_id = 13),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 7, .production_id = 25),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 7, .production_id = 25),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 3, .production_id = 2),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 3, .production_id = 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1014),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__class_repeat1, 2),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(1012),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2),
  [536] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(994),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(1085),
  [542] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(853),
  [545] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(934),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(851),
  [551] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(999),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class, 4, .production_id = 4),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__class, 4, .production_id = 4),
  [558] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(1032),
  [561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(1082),
  [564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(1092),
  [567] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(850),
  [570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__class_repeat1, 2), SHIFT_REPEAT(1086),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_item, 5, .production_id = 35),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_item, 5, .production_id = 35),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(987),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(988),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_item, 3, .production_id = 6),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_item, 3, .production_id = 6),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_item, 4, .production_id = 24),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_item, 4, .production_id = 24),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_modifiers, 1),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_modifiers, 1),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_modifiers_repeat1, 2),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_modifiers_repeat1, 2),
  [603] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_modifiers_repeat1, 2), SHIFT_REPEAT(90),
  [606] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_modifiers_repeat1, 2), SHIFT_REPEAT(110),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_modifiers, 1),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_modifiers, 1),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1061),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1065),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2),
  [629] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(987),
  [632] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(988),
  [635] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(96),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(165),
  [641] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_modifiers_repeat1, 2), SHIFT_REPEAT(97),
  [644] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_modifiers_repeat1, 2), SHIFT_REPEAT(124),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1084),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1083),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [655] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(1061),
  [658] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(1065),
  [661] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(99),
  [664] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(201),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 5),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_identifier, 1, .production_id = 5),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 5),
  [677] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_modifiers_repeat1, 2), SHIFT_REPEAT(103),
  [680] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_modifiers_repeat1, 2), SHIFT_REPEAT(150),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_type, 1),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_type, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(841),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility_modifiers, 1),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility_modifiers, 1),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__range_value, 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(847),
  [713] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(1084),
  [716] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(1083),
  [719] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(115),
  [722] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(258),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_return_type, 2),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_return_type, 2),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier_or_primitive, 1),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_identifier_or_primitive, 1),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(976),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(986),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(919),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enum_type, 1, .production_id = 8),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__enum_type, 1, .production_id = 8),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_type, 2),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_type, 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enum_type, 2, .production_id = 17),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__enum_type, 2, .production_id = 17),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_body_statements_repeat1, 2),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_statements_repeat1, 2), SHIFT_REPEAT(1048),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_statements_repeat1, 2), SHIFT_REPEAT(846),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_statements_repeat1, 2), SHIFT_REPEAT(882),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_body_statements_repeat1, 2),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_statements_repeat1, 2), SHIFT_REPEAT(961),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body_statements, 1),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1048),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(846),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body_statements, 1),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(961),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(933),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__range_type, 3, .production_id = 29),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__range_type, 3, .production_id = 29),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 4),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 4),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 5),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 5),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1062),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_type, 1, .production_id = 11),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_type, 1, .production_id = 11),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_list, 3),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_variant_list, 3),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inverse_modifiers, 2, .production_id = 27),
  [809] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inverse_modifiers, 2, .production_id = 27),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 3),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 3),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_modifiers, 1),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_modifiers, 1),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_type, 6, .production_id = 36),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__array_type, 6, .production_id = 36),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 2),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 2),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_type, 4),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__record_type, 4),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enum_type, 2, .production_id = 8),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__enum_type, 2, .production_id = 8),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string_literal, 3),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string_literal, 3),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sized, 3),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sized, 3),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 1),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type, 1),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_type, 1, .production_id = 7),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_type, 1, .production_id = 7),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_type, 1, .production_id = 9),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_type, 1, .production_id = 9),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 1, .production_id = 10),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_type, 1, .production_id = 10),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 1),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type, 1),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_type, 2),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__record_type, 2),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 1, .production_id = 12),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 1, .production_id = 12),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pointer_type, 2, .production_id = 15),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pointer_type, 2, .production_id = 15),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_type, 3, .production_id = 26),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__set_type, 3, .production_id = 26),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_type, 3),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_type, 3),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 2),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier_or_primitive, 2),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_identifier_or_primitive, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enum_type, 3, .production_id = 17),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__enum_type, 3, .production_id = 17),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__record_type, 3),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__record_type, 3),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_absolute_modifiers, 2, .production_id = 28),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_absolute_modifiers, 2, .production_id = 28),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(909),
  [917] = {.entry = {.count = 1, .reusable = false}}, SHIFT(899),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(928),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(906),
  [923] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [925] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1044),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 5),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 5),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(931),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_variable, 3, .production_id = 6),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_variable, 3, .production_id = 6),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1023),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1022),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 4),
  [955] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 4),
  [957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_variable, 4, .production_id = 24),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_variable, 4, .production_id = 24),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [963] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_literal, 3),
  [967] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_literal, 3),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [971] = {.entry = {.count = 1, .reusable = false}}, SHIFT(903),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_uses_item_repeat1, 2),
  [977] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_uses_item_repeat1, 2),
  [979] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uses_item_repeat1, 2), SHIFT_REPEAT(959),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_item, 4, .production_id = 2),
  [984] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_item, 4, .production_id = 2),
  [986] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_item, 3),
  [990] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uses_item, 3),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(959),
  [994] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(1023),
  [997] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(1022),
  [1000] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(283),
  [1003] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_modifiers_repeat1, 2), SHIFT_REPEAT(569),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1056),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_item, 5, .production_id = 4),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_item, 5, .production_id = 4),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_item, 2),
  [1016] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uses_item, 2),
  [1018] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [1020] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1074),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1026] = {.entry = {.count = 1, .reusable = false}}, SHIFT(912),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1025),
  [1030] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uses_item_repeat1, 2), SHIFT_REPEAT(1025),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_item, 6, .production_id = 35),
  [1035] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_item, 6, .production_id = 35),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(838),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(886),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_item, 6, .production_id = 4),
  [1049] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_item, 6, .production_id = 4),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 6, .production_id = 2),
  [1053] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 6, .production_id = 2),
  [1055] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_modifiers_external, 6, .production_id = 37),
  [1059] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_modifiers_external, 6, .production_id = 37),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_item, 1, .production_id = 3),
  [1063] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_item, 1, .production_id = 3),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(752),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(876),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_item, 2, .production_id = 1),
  [1077] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_item, 2, .production_id = 1),
  [1079] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uses_item_repeat1, 2), SHIFT_REPEAT(1104),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 5, .production_id = 4),
  [1084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 5, .production_id = 4),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_item, 5, .production_id = 34),
  [1088] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_item, 5, .production_id = 34),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_item, 5, .production_id = 33),
  [1092] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_item, 5, .production_id = 33),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_item, 5, .production_id = 4),
  [1096] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_item, 5, .production_id = 4),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type_item, 5, .production_id = 32),
  [1100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_type_item, 5, .production_id = 32),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_item, 5, .production_id = 31),
  [1104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_item, 5, .production_id = 31),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_item, 5, .production_id = 30),
  [1108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_item, 5, .production_id = 30),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type_item, 5, .production_id = 4),
  [1112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type_item, 5, .production_id = 4),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retyped_item, 5, .production_id = 4),
  [1116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retyped_item, 5, .production_id = 4),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 6, .production_id = 4),
  [1120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 6, .production_id = 4),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_item, 5, .production_id = 24),
  [1124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_item, 5, .production_id = 24),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 5, .production_id = 2),
  [1128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 5, .production_id = 2),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_item, 5, .production_id = 2),
  [1132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_item, 5, .production_id = 2),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_modifiers, 1),
  [1136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_modifiers, 1),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 4, .production_id = 4),
  [1140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 4, .production_id = 4),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(790),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_definition, 2),
  [1152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__function_definition, 2),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 4, .production_id = 2),
  [1156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 4, .production_id = 2),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_item, 4, .production_id = 22),
  [1160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_item, 4, .production_id = 22),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_item, 4, .production_id = 21),
  [1164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_item, 4, .production_id = 21),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_item, 4, .production_id = 2),
  [1168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_item, 4, .production_id = 2),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type_item, 4, .production_id = 20),
  [1172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer_type_item, 4, .production_id = 20),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1104),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_item, 4, .production_id = 19),
  [1180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_item, 4, .production_id = 19),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_modifiers, 1),
  [1184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forward_modifiers, 1),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_item, 4, .production_id = 18),
  [1188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_item, 4, .production_id = 18),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type_item, 4, .production_id = 2),
  [1192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_type_item, 4, .production_id = 2),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_retyped_item, 4, .production_id = 2),
  [1196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_retyped_item, 4, .production_id = 2),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_item, 4, .production_id = 6),
  [1200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__variable_item, 4, .production_id = 6),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 3, .production_id = 2),
  [1204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 3, .production_id = 2),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1068),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_item, 7, .production_id = 4),
  [1210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_item, 7, .production_id = 4),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(553),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(982),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(907),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(848),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(900),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [1236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__range_value, 1),
  [1240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(660),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1079),
  [1244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(945),
  [1246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(992),
  [1248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(946),
  [1250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(922),
  [1252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(947),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(991),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(993),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 6),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1039),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [1290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_annotation, 4),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1007),
  [1304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1018),
  [1306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(852),
  [1308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1010),
  [1310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_uses_item_repeat1, 2), SHIFT_REPEAT(1039),
  [1313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(450),
  [1315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(979),
  [1317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1036),
  [1319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(849),
  [1321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1106),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(680),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_variable_list_repeat1, 2), SHIFT_REPEAT(982),
  [1350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_record_variable_list_repeat1, 2),
  [1352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_variable_list_repeat1, 2), SHIFT_REPEAT(848),
  [1355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_variable_list, 1),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(773),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(799),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(780),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(758),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(781),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_statement, 1),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_statement, 1),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(740),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 24),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 24),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(812),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(717),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_variable, 5, .production_id = 24),
  [1435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_variable, 5, .production_id = 24),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_variable, 4, .production_id = 6),
  [1443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_variable, 4, .production_id = 6),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_derived, 3, .production_id = 15),
  [1449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_derived, 3, .production_id = 15),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(978),
  [1463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 1, .production_id = 14),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1001),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 2, .production_id = 2),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(754),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(755),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(571),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(697),
  [1497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 4),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(734),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1503] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(783),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(744),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_reference_modifiers_repeat1, 2), SHIFT_REPEAT(1103),
  [1516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_reference_modifiers_repeat1, 2),
  [1518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(806),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(698),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(714),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(700),
  [1544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_literal_repeat1, 2), SHIFT_REPEAT(844),
  [1547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_literal_repeat1, 2),
  [1549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(742),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_attribute_list, 3),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(952),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(782),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(785),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(709),
  [1571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(763),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [1579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(636),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(704),
  [1586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(706),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(699),
  [1604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(692),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(776),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(701),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation, 6),
  [1636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(792),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(774),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_attribute_list, 4),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(828),
  [1652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(466),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(703),
  [1658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_annotation_attribute_list_repeat1, 2),
  [1660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_annotation_attribute_list_repeat1, 2), SHIFT_REPEAT(895),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(805),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(859),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1076),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(707),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(702),
  [1691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(795),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(878),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1042),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(800),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(696),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1715] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_literal_repeat1, 2), SHIFT_REPEAT(806),
  [1718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_literal_repeat1, 2),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(818),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(833),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(713),
  [1744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(804),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1748] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(822),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(825),
  [1770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_untyped, 2, .production_id = 2),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(865),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(711),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_attribute_list, 5),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2),
  [1792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_variant_list_repeat1, 2), SHIFT_REPEAT(715),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 1, .production_id = 1),
  [1801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(1028),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1002),
  [1805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(712),
  [1813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(834),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1113),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(873),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1110),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(884),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1107),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(894),
  [1831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_typed, 4, .production_id = 24),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(863),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1102),
  [1837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_typed, 3, .production_id = 6),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1067),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(887),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 3, .production_id = 2),
  [1851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_redefine_value, 2),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 2, .production_id = 14),
  [1857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_annotation_attribute, 3, .production_id = 14),
  [1859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 23),
  [1861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1, .production_id = 3),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(932),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(970),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1071),
  [1881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_modifiers, 1),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(945),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(951),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(905),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(916),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(737),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(964),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(966),
  [1911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, .production_id = 2),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(927),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(972),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(997),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(998),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(845),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(779),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(925),
  [1949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, .production_id = 4),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(720),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1003),
  [1963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(801),
  [1967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1005),
  [1981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_derived, 2, .production_id = 16),
  [1983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(914),
  [1989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(897),
  [1993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_modifiers, 1),
  [1997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(875),
  [2001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(824),
  [2003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1008),
  [2005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(896),
  [2007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [2009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [2011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(892),
  [2013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 2, .production_id = 1),
  [2015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [2017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(710),
  [2019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [2021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1054),
  [2023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [2025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1070),
  [2027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [2029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [2031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [2033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [2035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1007),
  [2037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1011),
  [2039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [2041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [2043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [2045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1091),
  [2047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1040),
  [2049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [2051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1052),
  [2053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [2055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [2057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [2059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [2061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [2063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(942),
  [2065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1073),
  [2067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1077),
  [2069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [2071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [2073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(979),
  [2075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [2077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [2079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1099),
  [2081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1098),
  [2083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1058),
  [2085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [2087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [2089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [2091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_modifiers, 3),
  [2093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [2095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1078),
  [2097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1089),
  [2099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1064),
  [2101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1050),
  [2103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [2105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [2107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [2109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [2111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [2113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [2115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(857),
  [2117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [2119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1009),
  [2121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(995),
  [2123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [2125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [2127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [2129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(935),
  [2131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(939),
  [2133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(858),
  [2135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [2137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [2139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(940),
  [2141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(950),
  [2143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(954),
  [2145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1096),
  [2147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [2149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(683),
  [2151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(861),
  [2153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(963),
  [2155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(968),
  [2157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_modifiers, 4),
  [2159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [2161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [2163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(984),
  [2165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(989),
  [2167] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [2169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [2171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [2173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [2175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1016),
  [2177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [2179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(891),
  [2181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [2183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1030),
  [2185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [2187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1034),
  [2189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [2191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(881),
  [2193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [2195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [2197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1047),
  [2199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [2201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [2203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(872),
  [2205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [2207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_modifiers, 5),
  [2209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [2211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [2213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [2215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1087),
  [2217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [2219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1090),
  [2221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1094),
  [2223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [2225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1097),
  [2227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1100),
  [2229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [2231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [2233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [2235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [2237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [2239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1109),
  [2241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(1112),
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
