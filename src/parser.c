#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 102
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 1
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_module = 1,
  sym_identifier = 2,
  anon_sym_uses = 3,
  anon_sym_COMMA = 4,
  anon_sym_SQUOTE = 5,
  anon_sym_DOT = 6,
  sym_kw_function_begin = 7,
  anon_sym_endFunc = 8,
  anon_sym_endProc = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_inOut = 12,
  anon_sym_var = 13,
  anon_sym_const = 14,
  anon_sym_COLON = 15,
  sym_kw_return = 16,
  sym_kw_end = 17,
  sym_kw_external = 18,
  sym_kw_forward = 19,
  sym_kw_private = 20,
  sym_kw_protected = 21,
  sym_kw_final = 22,
  sym_kw_override = 23,
  anon_sym_type = 24,
  sym_source_file = 25,
  sym__type_identifier = 26,
  sym_module_item_declaration = 27,
  sym_use_declaration = 28,
  sym_type_declaration = 29,
  sym_function_declaration = 30,
  sym_function_forward_declaration = 31,
  sym_function_definition = 32,
  sym_function_external = 33,
  sym_kw_function_end = 34,
  sym_function_parameters = 35,
  sym_function_parameter_declaration = 36,
  sym_function_return_type = 37,
  sym_function_body_statements = 38,
  sym_variable_declaration = 39,
  sym_statement = 40,
  sym_declaration_statement = 41,
  sym_visibility = 42,
  sym_enum_item = 43,
  sym_enum_definition = 44,
  sym_enum_variant = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym_use_declaration_repeat1 = 47,
  aux_sym_function_parameters_repeat1 = 48,
  aux_sym_function_body_statements_repeat1 = 49,
  aux_sym_enum_definition_repeat1 = 50,
  alias_sym_type_identifier = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [sym_identifier] = "identifier",
  [anon_sym_uses] = "uses",
  [anon_sym_COMMA] = ",",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DOT] = ".",
  [sym_kw_function_begin] = "kw_function_begin",
  [anon_sym_endFunc] = "endFunc",
  [anon_sym_endProc] = "endProc",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_inOut] = "inOut",
  [anon_sym_var] = "var",
  [anon_sym_const] = "const",
  [anon_sym_COLON] = ":",
  [sym_kw_return] = "kw_return",
  [sym_kw_end] = "kw_end",
  [sym_kw_external] = "kw_external",
  [sym_kw_forward] = "kw_forward",
  [sym_kw_private] = "kw_private",
  [sym_kw_protected] = "kw_protected",
  [sym_kw_final] = "kw_final",
  [sym_kw_override] = "kw_override",
  [anon_sym_type] = "type",
  [sym_source_file] = "source_file",
  [sym__type_identifier] = "_type_identifier",
  [sym_module_item_declaration] = "module_item_declaration",
  [sym_use_declaration] = "use_declaration",
  [sym_type_declaration] = "type_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_function_forward_declaration] = "function_forward_declaration",
  [sym_function_definition] = "function_definition",
  [sym_function_external] = "function_external",
  [sym_kw_function_end] = "kw_function_end",
  [sym_function_parameters] = "function_parameters",
  [sym_function_parameter_declaration] = "function_parameter_declaration",
  [sym_function_return_type] = "function_return_type",
  [sym_function_body_statements] = "function_body_statements",
  [sym_variable_declaration] = "variable_declaration",
  [sym_statement] = "statement",
  [sym_declaration_statement] = "declaration_statement",
  [sym_visibility] = "visibility",
  [sym_enum_item] = "enum_item",
  [sym_enum_definition] = "enum_definition",
  [sym_enum_variant] = "enum_variant",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_use_declaration_repeat1] = "use_declaration_repeat1",
  [aux_sym_function_parameters_repeat1] = "function_parameters_repeat1",
  [aux_sym_function_body_statements_repeat1] = "function_body_statements_repeat1",
  [aux_sym_enum_definition_repeat1] = "enum_definition_repeat1",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [sym_identifier] = sym_identifier,
  [anon_sym_uses] = anon_sym_uses,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_kw_function_begin] = sym_kw_function_begin,
  [anon_sym_endFunc] = anon_sym_endFunc,
  [anon_sym_endProc] = anon_sym_endProc,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_inOut] = anon_sym_inOut,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_kw_return] = sym_kw_return,
  [sym_kw_end] = sym_kw_end,
  [sym_kw_external] = sym_kw_external,
  [sym_kw_forward] = sym_kw_forward,
  [sym_kw_private] = sym_kw_private,
  [sym_kw_protected] = sym_kw_protected,
  [sym_kw_final] = sym_kw_final,
  [sym_kw_override] = sym_kw_override,
  [anon_sym_type] = anon_sym_type,
  [sym_source_file] = sym_source_file,
  [sym__type_identifier] = sym__type_identifier,
  [sym_module_item_declaration] = sym_module_item_declaration,
  [sym_use_declaration] = sym_use_declaration,
  [sym_type_declaration] = sym_type_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym_function_forward_declaration] = sym_function_forward_declaration,
  [sym_function_definition] = sym_function_definition,
  [sym_function_external] = sym_function_external,
  [sym_kw_function_end] = sym_kw_function_end,
  [sym_function_parameters] = sym_function_parameters,
  [sym_function_parameter_declaration] = sym_function_parameter_declaration,
  [sym_function_return_type] = sym_function_return_type,
  [sym_function_body_statements] = sym_function_body_statements,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_statement] = sym_statement,
  [sym_declaration_statement] = sym_declaration_statement,
  [sym_visibility] = sym_visibility,
  [sym_enum_item] = sym_enum_item,
  [sym_enum_definition] = sym_enum_definition,
  [sym_enum_variant] = sym_enum_variant,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_use_declaration_repeat1] = aux_sym_use_declaration_repeat1,
  [aux_sym_function_parameters_repeat1] = aux_sym_function_parameters_repeat1,
  [aux_sym_function_body_statements_repeat1] = aux_sym_function_body_statements_repeat1,
  [aux_sym_enum_definition_repeat1] = aux_sym_enum_definition_repeat1,
  [alias_sym_type_identifier] = alias_sym_type_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_uses] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym_kw_function_begin] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_endFunc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endProc] = {
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
  [anon_sym_inOut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_kw_return] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_end] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_external] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_forward] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_private] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_protected] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_final] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_override] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_type] = {
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
  [sym_module_item_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_use_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_type_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_forward_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_external] = {
    .visible = true,
    .named = true,
  },
  [sym_kw_function_end] = {
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
  [sym_visibility] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_item] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_variant] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_use_declaration_repeat1] = {
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
  [aux_sym_enum_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_dll_function_name = 1,
  field_dll_name = 2,
  field_function_name = 3,
  field_module_name = 4,
  field_parameter_name = 5,
  field_parameter_type = 6,
  field_variable_name = 7,
  field_variable_type = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_dll_function_name] = "dll_function_name",
  [field_dll_name] = "dll_name",
  [field_function_name] = "function_name",
  [field_module_name] = "module_name",
  [field_parameter_name] = "parameter_name",
  [field_parameter_type] = "parameter_type",
  [field_variable_name] = "variable_name",
  [field_variable_type] = "variable_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_module_name, 1},
  [1] =
    {field_function_name, 1},
  [2] =
    {field_parameter_name, 0},
    {field_parameter_type, 2},
  [4] =
    {field_variable_name, 1},
    {field_variable_type, 3},
  [6] =
    {field_parameter_name, 1},
    {field_parameter_type, 3},
  [8] =
    {field_dll_function_name, 4},
    {field_dll_name, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 33,
  [43] = 32,
  [44] = 38,
  [45] = 45,
  [46] = 46,
  [47] = 31,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 76,
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
      if (eof) ADVANCE(82);
      if (lookahead == '\'') ADVANCE(127);
      if (lookahead == '(') ADVANCE(136);
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == ',') ADVANCE(126);
      if (lookahead == '.') ADVANCE(128);
      if (lookahead == ':') ADVANCE(144);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'e') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead == 'v') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == 'c') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'v') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(123);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(123);
      END_STATE();
    case 3:
      if (lookahead == 'O') ADVANCE(73);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(130);
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'u') ADVANCE(112);
      if (lookahead == 'v') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(123);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 'x') ADVANCE(71);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 77:
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 78:
      if (lookahead == 'v') ADVANCE(8);
      END_STATE();
    case 79:
      if (lookahead == 'w') ADVANCE(7);
      END_STATE();
    case 80:
      if (lookahead == 'y') ADVANCE(52);
      END_STATE();
    case 81:
      if (eof) ADVANCE(82);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'u') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(123);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(119);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(108);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(123);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(133);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(135);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(95);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(117);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(146);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(120);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(123);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(155);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(113);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(106);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(123);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(90);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(86);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(84);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(114);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(89);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(87);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(101);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(88);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(97);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(93);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(141);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(103);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(92);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(105);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(94);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(125);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(115);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(143);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(139);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(96);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(99);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(116);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(110);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(102);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(107);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_uses);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_kw_function_begin);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_kw_function_begin);
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_kw_function_begin);
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_endFunc);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_endFunc);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_endProc);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_endProc);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_inOut);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_inOut);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_var);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_const);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_kw_return);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_kw_end);
      if (lookahead == 'F') ADVANCE(118);
      if (lookahead == 'P') ADVANCE(109);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_kw_end);
      if (lookahead == 'F') ADVANCE(74);
      if (lookahead == 'P') ADVANCE(57);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_kw_external);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_kw_forward);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_kw_private);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_kw_protected);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_kw_final);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_kw_override);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_type);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(123);
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
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 25},
  [33] = {.lex_state = 25},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 81},
  [43] = {.lex_state = 81},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_uses] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_kw_function_begin] = ACTIONS(1),
    [anon_sym_endFunc] = ACTIONS(1),
    [anon_sym_endProc] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_inOut] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_kw_return] = ACTIONS(1),
    [sym_kw_end] = ACTIONS(1),
    [sym_kw_external] = ACTIONS(1),
    [sym_kw_forward] = ACTIONS(1),
    [sym_kw_private] = ACTIONS(1),
    [sym_kw_protected] = ACTIONS(1),
    [sym_kw_final] = ACTIONS(1),
    [sym_kw_override] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(94),
    [anon_sym_module] = ACTIONS(3),
  },
  [2] = {
    [sym_use_declaration] = STATE(46),
    [sym_type_declaration] = STATE(46),
    [sym_function_forward_declaration] = STATE(54),
    [sym_function_definition] = STATE(54),
    [sym_function_external] = STATE(54),
    [sym_kw_function_end] = STATE(62),
    [sym_function_parameters] = STATE(3),
    [sym_function_return_type] = STATE(5),
    [sym_function_body_statements] = STATE(64),
    [sym_variable_declaration] = STATE(46),
    [sym_statement] = STATE(23),
    [sym_declaration_statement] = STATE(48),
    [sym_visibility] = STATE(8),
    [sym_enum_item] = STATE(37),
    [aux_sym_function_body_statements_repeat1] = STATE(23),
    [anon_sym_uses] = ACTIONS(5),
    [anon_sym_endFunc] = ACTIONS(7),
    [anon_sym_endProc] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [sym_kw_return] = ACTIONS(13),
    [sym_kw_end] = ACTIONS(15),
    [sym_kw_external] = ACTIONS(17),
    [sym_kw_forward] = ACTIONS(19),
    [sym_kw_private] = ACTIONS(21),
    [sym_kw_protected] = ACTIONS(21),
    [sym_kw_final] = ACTIONS(23),
    [sym_kw_override] = ACTIONS(25),
    [anon_sym_type] = ACTIONS(27),
  },
  [3] = {
    [sym_use_declaration] = STATE(46),
    [sym_type_declaration] = STATE(46),
    [sym_function_forward_declaration] = STATE(61),
    [sym_function_definition] = STATE(61),
    [sym_function_external] = STATE(61),
    [sym_kw_function_end] = STATE(62),
    [sym_function_return_type] = STATE(4),
    [sym_function_body_statements] = STATE(64),
    [sym_variable_declaration] = STATE(46),
    [sym_statement] = STATE(23),
    [sym_declaration_statement] = STATE(48),
    [sym_visibility] = STATE(7),
    [sym_enum_item] = STATE(37),
    [aux_sym_function_body_statements_repeat1] = STATE(23),
    [anon_sym_uses] = ACTIONS(5),
    [anon_sym_endFunc] = ACTIONS(7),
    [anon_sym_endProc] = ACTIONS(7),
    [anon_sym_var] = ACTIONS(11),
    [sym_kw_return] = ACTIONS(13),
    [sym_kw_end] = ACTIONS(15),
    [sym_kw_external] = ACTIONS(17),
    [sym_kw_forward] = ACTIONS(19),
    [sym_kw_private] = ACTIONS(21),
    [sym_kw_protected] = ACTIONS(21),
    [sym_kw_final] = ACTIONS(29),
    [sym_kw_override] = ACTIONS(31),
    [anon_sym_type] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(5), 1,
      anon_sym_uses,
    ACTIONS(11), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      sym_kw_end,
    ACTIONS(17), 1,
      sym_kw_external,
    ACTIONS(19), 1,
      sym_kw_forward,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(33), 1,
      sym_kw_final,
    ACTIONS(35), 1,
      sym_kw_override,
    STATE(6), 1,
      sym_visibility,
    STATE(37), 1,
      sym_enum_item,
    STATE(48), 1,
      sym_declaration_statement,
    STATE(62), 1,
      sym_kw_function_end,
    STATE(64), 1,
      sym_function_body_statements,
    ACTIONS(7), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    ACTIONS(21), 2,
      sym_kw_private,
      sym_kw_protected,
    STATE(23), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(46), 3,
      sym_use_declaration,
      sym_type_declaration,
      sym_variable_declaration,
    STATE(63), 3,
      sym_function_forward_declaration,
      sym_function_definition,
      sym_function_external,
  [62] = 18,
    ACTIONS(5), 1,
      anon_sym_uses,
    ACTIONS(11), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      sym_kw_end,
    ACTIONS(17), 1,
      sym_kw_external,
    ACTIONS(19), 1,
      sym_kw_forward,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      sym_kw_final,
    ACTIONS(31), 1,
      sym_kw_override,
    STATE(7), 1,
      sym_visibility,
    STATE(37), 1,
      sym_enum_item,
    STATE(48), 1,
      sym_declaration_statement,
    STATE(62), 1,
      sym_kw_function_end,
    STATE(64), 1,
      sym_function_body_statements,
    ACTIONS(7), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    ACTIONS(21), 2,
      sym_kw_private,
      sym_kw_protected,
    STATE(23), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(46), 3,
      sym_use_declaration,
      sym_type_declaration,
      sym_variable_declaration,
    STATE(61), 3,
      sym_function_forward_declaration,
      sym_function_definition,
      sym_function_external,
  [124] = 16,
    ACTIONS(5), 1,
      anon_sym_uses,
    ACTIONS(11), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      sym_kw_end,
    ACTIONS(17), 1,
      sym_kw_external,
    ACTIONS(19), 1,
      sym_kw_forward,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(37), 1,
      sym_kw_final,
    ACTIONS(39), 1,
      sym_kw_override,
    STATE(37), 1,
      sym_enum_item,
    STATE(48), 1,
      sym_declaration_statement,
    STATE(62), 1,
      sym_kw_function_end,
    STATE(64), 1,
      sym_function_body_statements,
    ACTIONS(7), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(23), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(46), 3,
      sym_use_declaration,
      sym_type_declaration,
      sym_variable_declaration,
    STATE(56), 3,
      sym_function_forward_declaration,
      sym_function_definition,
      sym_function_external,
  [179] = 16,
    ACTIONS(5), 1,
      anon_sym_uses,
    ACTIONS(11), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      sym_kw_end,
    ACTIONS(17), 1,
      sym_kw_external,
    ACTIONS(19), 1,
      sym_kw_forward,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(33), 1,
      sym_kw_final,
    ACTIONS(35), 1,
      sym_kw_override,
    STATE(37), 1,
      sym_enum_item,
    STATE(48), 1,
      sym_declaration_statement,
    STATE(62), 1,
      sym_kw_function_end,
    STATE(64), 1,
      sym_function_body_statements,
    ACTIONS(7), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(23), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(46), 3,
      sym_use_declaration,
      sym_type_declaration,
      sym_variable_declaration,
    STATE(63), 3,
      sym_function_forward_declaration,
      sym_function_definition,
      sym_function_external,
  [234] = 16,
    ACTIONS(5), 1,
      anon_sym_uses,
    ACTIONS(11), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      sym_kw_end,
    ACTIONS(17), 1,
      sym_kw_external,
    ACTIONS(19), 1,
      sym_kw_forward,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      sym_kw_final,
    ACTIONS(31), 1,
      sym_kw_override,
    STATE(37), 1,
      sym_enum_item,
    STATE(48), 1,
      sym_declaration_statement,
    STATE(62), 1,
      sym_kw_function_end,
    STATE(64), 1,
      sym_function_body_statements,
    ACTIONS(7), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(23), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(46), 3,
      sym_use_declaration,
      sym_type_declaration,
      sym_variable_declaration,
    STATE(61), 3,
      sym_function_forward_declaration,
      sym_function_definition,
      sym_function_external,
  [289] = 15,
    ACTIONS(5), 1,
      anon_sym_uses,
    ACTIONS(11), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      sym_kw_end,
    ACTIONS(17), 1,
      sym_kw_external,
    ACTIONS(19), 1,
      sym_kw_forward,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(41), 1,
      sym_kw_override,
    STATE(37), 1,
      sym_enum_item,
    STATE(48), 1,
      sym_declaration_statement,
    STATE(62), 1,
      sym_kw_function_end,
    STATE(64), 1,
      sym_function_body_statements,
    ACTIONS(7), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(23), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(46), 3,
      sym_use_declaration,
      sym_type_declaration,
      sym_variable_declaration,
    STATE(51), 3,
      sym_function_forward_declaration,
      sym_function_definition,
      sym_function_external,
  [341] = 15,
    ACTIONS(5), 1,
      anon_sym_uses,
    ACTIONS(11), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      sym_kw_end,
    ACTIONS(17), 1,
      sym_kw_external,
    ACTIONS(19), 1,
      sym_kw_forward,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(39), 1,
      sym_kw_override,
    STATE(37), 1,
      sym_enum_item,
    STATE(48), 1,
      sym_declaration_statement,
    STATE(62), 1,
      sym_kw_function_end,
    STATE(64), 1,
      sym_function_body_statements,
    ACTIONS(7), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(23), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(46), 3,
      sym_use_declaration,
      sym_type_declaration,
      sym_variable_declaration,
    STATE(56), 3,
      sym_function_forward_declaration,
      sym_function_definition,
      sym_function_external,
  [393] = 15,
    ACTIONS(5), 1,
      anon_sym_uses,
    ACTIONS(11), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      sym_kw_end,
    ACTIONS(17), 1,
      sym_kw_external,
    ACTIONS(19), 1,
      sym_kw_forward,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(35), 1,
      sym_kw_override,
    STATE(37), 1,
      sym_enum_item,
    STATE(48), 1,
      sym_declaration_statement,
    STATE(62), 1,
      sym_kw_function_end,
    STATE(64), 1,
      sym_function_body_statements,
    ACTIONS(7), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(23), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(46), 3,
      sym_use_declaration,
      sym_type_declaration,
      sym_variable_declaration,
    STATE(63), 3,
      sym_function_forward_declaration,
      sym_function_definition,
      sym_function_external,
  [445] = 15,
    ACTIONS(5), 1,
      anon_sym_uses,
    ACTIONS(11), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      sym_kw_end,
    ACTIONS(17), 1,
      sym_kw_external,
    ACTIONS(19), 1,
      sym_kw_forward,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      sym_kw_override,
    STATE(37), 1,
      sym_enum_item,
    STATE(48), 1,
      sym_declaration_statement,
    STATE(62), 1,
      sym_kw_function_end,
    STATE(64), 1,
      sym_function_body_statements,
    ACTIONS(7), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(23), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(46), 3,
      sym_use_declaration,
      sym_type_declaration,
      sym_variable_declaration,
    STATE(61), 3,
      sym_function_forward_declaration,
      sym_function_definition,
      sym_function_external,
  [497] = 14,
    ACTIONS(5), 1,
      anon_sym_uses,
    ACTIONS(11), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      sym_kw_end,
    ACTIONS(17), 1,
      sym_kw_external,
    ACTIONS(19), 1,
      sym_kw_forward,
    ACTIONS(27), 1,
      anon_sym_type,
    STATE(37), 1,
      sym_enum_item,
    STATE(48), 1,
      sym_declaration_statement,
    STATE(62), 1,
      sym_kw_function_end,
    STATE(64), 1,
      sym_function_body_statements,
    ACTIONS(7), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(23), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(46), 3,
      sym_use_declaration,
      sym_type_declaration,
      sym_variable_declaration,
    STATE(61), 3,
      sym_function_forward_declaration,
      sym_function_definition,
      sym_function_external,
  [546] = 14,
    ACTIONS(5), 1,
      anon_sym_uses,
    ACTIONS(11), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      sym_kw_end,
    ACTIONS(17), 1,
      sym_kw_external,
    ACTIONS(19), 1,
      sym_kw_forward,
    ACTIONS(27), 1,
      anon_sym_type,
    STATE(37), 1,
      sym_enum_item,
    STATE(48), 1,
      sym_declaration_statement,
    STATE(62), 1,
      sym_kw_function_end,
    STATE(64), 1,
      sym_function_body_statements,
    ACTIONS(7), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(23), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(46), 3,
      sym_use_declaration,
      sym_type_declaration,
      sym_variable_declaration,
    STATE(60), 3,
      sym_function_forward_declaration,
      sym_function_definition,
      sym_function_external,
  [595] = 14,
    ACTIONS(5), 1,
      anon_sym_uses,
    ACTIONS(11), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      sym_kw_end,
    ACTIONS(17), 1,
      sym_kw_external,
    ACTIONS(19), 1,
      sym_kw_forward,
    ACTIONS(27), 1,
      anon_sym_type,
    STATE(37), 1,
      sym_enum_item,
    STATE(48), 1,
      sym_declaration_statement,
    STATE(62), 1,
      sym_kw_function_end,
    STATE(64), 1,
      sym_function_body_statements,
    ACTIONS(7), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(23), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(46), 3,
      sym_use_declaration,
      sym_type_declaration,
      sym_variable_declaration,
    STATE(63), 3,
      sym_function_forward_declaration,
      sym_function_definition,
      sym_function_external,
  [644] = 14,
    ACTIONS(5), 1,
      anon_sym_uses,
    ACTIONS(11), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      sym_kw_end,
    ACTIONS(17), 1,
      sym_kw_external,
    ACTIONS(19), 1,
      sym_kw_forward,
    ACTIONS(27), 1,
      anon_sym_type,
    STATE(37), 1,
      sym_enum_item,
    STATE(48), 1,
      sym_declaration_statement,
    STATE(62), 1,
      sym_kw_function_end,
    STATE(64), 1,
      sym_function_body_statements,
    ACTIONS(7), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(23), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(46), 3,
      sym_use_declaration,
      sym_type_declaration,
      sym_variable_declaration,
    STATE(56), 3,
      sym_function_forward_declaration,
      sym_function_definition,
      sym_function_external,
  [693] = 14,
    ACTIONS(5), 1,
      anon_sym_uses,
    ACTIONS(11), 1,
      anon_sym_var,
    ACTIONS(15), 1,
      sym_kw_end,
    ACTIONS(17), 1,
      sym_kw_external,
    ACTIONS(19), 1,
      sym_kw_forward,
    ACTIONS(27), 1,
      anon_sym_type,
    STATE(37), 1,
      sym_enum_item,
    STATE(48), 1,
      sym_declaration_statement,
    STATE(62), 1,
      sym_kw_function_end,
    STATE(64), 1,
      sym_function_body_statements,
    ACTIONS(7), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(23), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(46), 3,
      sym_use_declaration,
      sym_type_declaration,
      sym_variable_declaration,
    STATE(51), 3,
      sym_function_forward_declaration,
      sym_function_definition,
      sym_function_external,
  [742] = 2,
    ACTIONS(45), 1,
      sym_kw_end,
    ACTIONS(43), 16,
      ts_builtin_sym_end,
      anon_sym_uses,
      anon_sym_COMMA,
      sym_kw_function_begin,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_RPAREN,
      anon_sym_var,
      anon_sym_COLON,
      sym_kw_external,
      sym_kw_forward,
      sym_kw_private,
      sym_kw_protected,
      sym_kw_final,
      sym_kw_override,
      anon_sym_type,
  [764] = 2,
    ACTIONS(49), 1,
      sym_kw_end,
    ACTIONS(47), 12,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      sym_kw_return,
      sym_kw_external,
      sym_kw_forward,
      sym_kw_private,
      sym_kw_protected,
      sym_kw_final,
      sym_kw_override,
      anon_sym_type,
  [782] = 2,
    ACTIONS(53), 1,
      sym_kw_end,
    ACTIONS(51), 12,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      sym_kw_return,
      sym_kw_external,
      sym_kw_forward,
      sym_kw_private,
      sym_kw_protected,
      sym_kw_final,
      sym_kw_override,
      anon_sym_type,
  [800] = 2,
    ACTIONS(57), 1,
      sym_kw_end,
    ACTIONS(55), 12,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      sym_kw_return,
      sym_kw_external,
      sym_kw_forward,
      sym_kw_private,
      sym_kw_protected,
      sym_kw_final,
      sym_kw_override,
      anon_sym_type,
  [818] = 9,
    ACTIONS(59), 1,
      anon_sym_uses,
    ACTIONS(64), 1,
      anon_sym_var,
    ACTIONS(67), 1,
      sym_kw_end,
    ACTIONS(69), 1,
      anon_sym_type,
    STATE(37), 1,
      sym_enum_item,
    STATE(48), 1,
      sym_declaration_statement,
    ACTIONS(62), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(22), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(46), 3,
      sym_use_declaration,
      sym_type_declaration,
      sym_variable_declaration,
  [850] = 9,
    ACTIONS(5), 1,
      anon_sym_uses,
    ACTIONS(11), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(74), 1,
      sym_kw_end,
    STATE(37), 1,
      sym_enum_item,
    STATE(48), 1,
      sym_declaration_statement,
    ACTIONS(72), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
    STATE(22), 2,
      sym_statement,
      aux_sym_function_body_statements_repeat1,
    STATE(46), 3,
      sym_use_declaration,
      sym_type_declaration,
      sym_variable_declaration,
  [882] = 2,
    ACTIONS(78), 1,
      sym_kw_end,
    ACTIONS(76), 11,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      sym_kw_external,
      sym_kw_forward,
      sym_kw_private,
      sym_kw_protected,
      sym_kw_final,
      sym_kw_override,
      anon_sym_type,
  [899] = 7,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      anon_sym_uses,
    ACTIONS(85), 1,
      sym_kw_function_begin,
    ACTIONS(88), 1,
      anon_sym_type,
    STATE(37), 1,
      sym_enum_item,
    STATE(25), 2,
      sym_module_item_declaration,
      aux_sym_source_file_repeat1,
    STATE(58), 3,
      sym_use_declaration,
      sym_type_declaration,
      sym_function_declaration,
  [924] = 2,
    ACTIONS(93), 1,
      sym_kw_end,
    ACTIONS(91), 9,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      sym_kw_external,
      sym_kw_forward,
      sym_kw_final,
      sym_kw_override,
      anon_sym_type,
  [939] = 7,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      anon_sym_uses,
    ACTIONS(99), 1,
      sym_kw_function_begin,
    STATE(37), 1,
      sym_enum_item,
    STATE(28), 2,
      sym_module_item_declaration,
      aux_sym_source_file_repeat1,
    STATE(58), 3,
      sym_use_declaration,
      sym_type_declaration,
      sym_function_declaration,
  [964] = 7,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(97), 1,
      anon_sym_uses,
    ACTIONS(99), 1,
      sym_kw_function_begin,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_enum_item,
    STATE(25), 2,
      sym_module_item_declaration,
      aux_sym_source_file_repeat1,
    STATE(58), 3,
      sym_use_declaration,
      sym_type_declaration,
      sym_function_declaration,
  [989] = 4,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(108), 1,
      sym_kw_end,
    STATE(29), 1,
      aux_sym_use_declaration_repeat1,
    ACTIONS(103), 7,
      ts_builtin_sym_end,
      anon_sym_uses,
      sym_kw_function_begin,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [1008] = 2,
    ACTIONS(108), 1,
      sym_kw_end,
    ACTIONS(103), 8,
      ts_builtin_sym_end,
      anon_sym_uses,
      anon_sym_COMMA,
      sym_kw_function_begin,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [1022] = 4,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      sym_kw_end,
    STATE(38), 1,
      aux_sym_use_declaration_repeat1,
    ACTIONS(110), 5,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [1039] = 3,
    ACTIONS(116), 1,
      sym_identifier,
    STATE(30), 1,
      sym__type_identifier,
    ACTIONS(118), 6,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      sym_kw_end,
      anon_sym_type,
  [1054] = 3,
    ACTIONS(116), 1,
      sym_identifier,
    STATE(30), 1,
      sym__type_identifier,
    ACTIONS(120), 6,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      sym_kw_end,
      anon_sym_type,
  [1069] = 2,
    ACTIONS(124), 1,
      sym_kw_end,
    ACTIONS(122), 7,
      ts_builtin_sym_end,
      anon_sym_uses,
      sym_kw_function_begin,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [1082] = 2,
    ACTIONS(128), 1,
      sym_kw_end,
    ACTIONS(126), 7,
      ts_builtin_sym_end,
      anon_sym_uses,
      sym_kw_function_begin,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [1095] = 2,
    ACTIONS(132), 1,
      sym_kw_end,
    ACTIONS(130), 7,
      ts_builtin_sym_end,
      anon_sym_uses,
      sym_kw_function_begin,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [1108] = 2,
    ACTIONS(136), 1,
      sym_kw_end,
    ACTIONS(134), 7,
      ts_builtin_sym_end,
      anon_sym_uses,
      sym_kw_function_begin,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [1121] = 4,
    ACTIONS(120), 1,
      sym_kw_end,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_use_declaration_repeat1,
    ACTIONS(138), 5,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [1138] = 2,
    ACTIONS(144), 1,
      sym_kw_end,
    ACTIONS(142), 7,
      ts_builtin_sym_end,
      anon_sym_uses,
      sym_kw_function_begin,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [1151] = 4,
    ACTIONS(146), 1,
      sym_identifier,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      sym_function_parameter_declaration,
    ACTIONS(150), 3,
      anon_sym_inOut,
      anon_sym_var,
      anon_sym_const,
  [1166] = 2,
    ACTIONS(154), 1,
      sym_kw_end,
    ACTIONS(152), 5,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [1177] = 4,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym__type_identifier,
    ACTIONS(120), 3,
      anon_sym_uses,
      sym_kw_function_begin,
      anon_sym_type,
  [1192] = 4,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym__type_identifier,
    ACTIONS(118), 3,
      anon_sym_uses,
      sym_kw_function_begin,
      anon_sym_type,
  [1207] = 3,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_use_declaration_repeat1,
    ACTIONS(138), 4,
      ts_builtin_sym_end,
      anon_sym_uses,
      sym_kw_function_begin,
      anon_sym_type,
  [1220] = 4,
    ACTIONS(146), 1,
      sym_identifier,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      sym_function_parameter_declaration,
    ACTIONS(150), 3,
      anon_sym_inOut,
      anon_sym_var,
      anon_sym_const,
  [1235] = 2,
    ACTIONS(164), 1,
      sym_kw_end,
    ACTIONS(162), 5,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [1246] = 3,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_use_declaration_repeat1,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      anon_sym_uses,
      sym_kw_function_begin,
      anon_sym_type,
  [1259] = 2,
    ACTIONS(170), 1,
      sym_kw_end,
    ACTIONS(168), 5,
      anon_sym_uses,
      anon_sym_endFunc,
      anon_sym_endProc,
      anon_sym_var,
      anon_sym_type,
  [1270] = 3,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(87), 1,
      sym_function_parameter_declaration,
    ACTIONS(150), 3,
      anon_sym_inOut,
      anon_sym_var,
      anon_sym_const,
  [1282] = 3,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(72), 1,
      sym_function_parameter_declaration,
    ACTIONS(150), 3,
      anon_sym_inOut,
      anon_sym_var,
      anon_sym_const,
  [1294] = 1,
    ACTIONS(172), 4,
      ts_builtin_sym_end,
      anon_sym_uses,
      sym_kw_function_begin,
      anon_sym_type,
  [1301] = 4,
    ACTIONS(174), 1,
      sym_identifier,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym__type_identifier,
    STATE(85), 1,
      sym_enum_variant,
  [1314] = 1,
    ACTIONS(178), 4,
      ts_builtin_sym_end,
      anon_sym_uses,
      sym_kw_function_begin,
      anon_sym_type,
  [1321] = 1,
    ACTIONS(180), 4,
      ts_builtin_sym_end,
      anon_sym_uses,
      sym_kw_function_begin,
      anon_sym_type,
  [1328] = 1,
    ACTIONS(182), 4,
      ts_builtin_sym_end,
      anon_sym_uses,
      sym_kw_function_begin,
      anon_sym_type,
  [1335] = 1,
    ACTIONS(184), 4,
      ts_builtin_sym_end,
      anon_sym_uses,
      sym_kw_function_begin,
      anon_sym_type,
  [1342] = 4,
    ACTIONS(174), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym__type_identifier,
    STATE(85), 1,
      sym_enum_variant,
  [1355] = 1,
    ACTIONS(188), 4,
      ts_builtin_sym_end,
      anon_sym_uses,
      sym_kw_function_begin,
      anon_sym_type,
  [1362] = 1,
    ACTIONS(190), 4,
      ts_builtin_sym_end,
      anon_sym_uses,
      sym_kw_function_begin,
      anon_sym_type,
  [1369] = 1,
    ACTIONS(192), 4,
      ts_builtin_sym_end,
      anon_sym_uses,
      sym_kw_function_begin,
      anon_sym_type,
  [1376] = 1,
    ACTIONS(194), 4,
      ts_builtin_sym_end,
      anon_sym_uses,
      sym_kw_function_begin,
      anon_sym_type,
  [1383] = 1,
    ACTIONS(196), 4,
      ts_builtin_sym_end,
      anon_sym_uses,
      sym_kw_function_begin,
      anon_sym_type,
  [1390] = 1,
    ACTIONS(198), 4,
      ts_builtin_sym_end,
      anon_sym_uses,
      sym_kw_function_begin,
      anon_sym_type,
  [1397] = 3,
    ACTIONS(15), 1,
      sym_kw_end,
    STATE(55), 1,
      sym_kw_function_end,
    ACTIONS(7), 2,
      anon_sym_endFunc,
      anon_sym_endProc,
  [1408] = 1,
    ACTIONS(200), 4,
      ts_builtin_sym_end,
      anon_sym_uses,
      sym_kw_function_begin,
      anon_sym_type,
  [1415] = 3,
    ACTIONS(176), 1,
      anon_sym_RPAREN,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_enum_definition_repeat1,
  [1425] = 3,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_function_parameters_repeat1,
  [1435] = 3,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_enum_definition_repeat1,
  [1445] = 3,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(81), 1,
      sym__type_identifier,
    STATE(85), 1,
      sym_enum_variant,
  [1455] = 3,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(68), 1,
      sym_enum_variant,
    STATE(81), 1,
      sym__type_identifier,
  [1465] = 3,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      aux_sym_enum_definition_repeat1,
  [1475] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_function_parameters_repeat1,
  [1485] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      aux_sym_function_parameters_repeat1,
  [1495] = 2,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(80), 1,
      sym__type_identifier,
  [1502] = 2,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(41), 1,
      sym__type_identifier,
  [1509] = 2,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(31), 1,
      sym__type_identifier,
  [1516] = 2,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_enum_definition,
  [1523] = 2,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(83), 1,
      sym__type_identifier,
  [1530] = 2,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(100), 1,
      sym__type_identifier,
  [1537] = 1,
    ACTIONS(226), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1542] = 1,
    ACTIONS(228), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1547] = 2,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(47), 1,
      sym__type_identifier,
  [1554] = 1,
    ACTIONS(230), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1559] = 2,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(30), 1,
      sym__type_identifier,
  [1566] = 1,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1571] = 2,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(24), 1,
      sym__type_identifier,
  [1578] = 1,
    ACTIONS(222), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1583] = 1,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
  [1587] = 1,
    ACTIONS(234), 1,
      sym_identifier,
  [1591] = 1,
    ACTIONS(236), 1,
      anon_sym_DOT,
  [1595] = 1,
    ACTIONS(238), 1,
      anon_sym_COLON,
  [1599] = 1,
    ACTIONS(240), 1,
      anon_sym_SQUOTE,
  [1603] = 1,
    ACTIONS(242), 1,
      sym_identifier,
  [1607] = 1,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
  [1611] = 1,
    ACTIONS(246), 1,
      sym_identifier,
  [1615] = 1,
    ACTIONS(248), 1,
      sym_identifier,
  [1619] = 1,
    ACTIONS(250), 1,
      anon_sym_COLON,
  [1623] = 1,
    ACTIONS(252), 1,
      sym_identifier,
  [1627] = 1,
    ACTIONS(254), 1,
      anon_sym_COLON,
  [1631] = 1,
    ACTIONS(256), 1,
      anon_sym_COLON,
  [1635] = 1,
    ACTIONS(258), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 124,
  [SMALL_STATE(7)] = 179,
  [SMALL_STATE(8)] = 234,
  [SMALL_STATE(9)] = 289,
  [SMALL_STATE(10)] = 341,
  [SMALL_STATE(11)] = 393,
  [SMALL_STATE(12)] = 445,
  [SMALL_STATE(13)] = 497,
  [SMALL_STATE(14)] = 546,
  [SMALL_STATE(15)] = 595,
  [SMALL_STATE(16)] = 644,
  [SMALL_STATE(17)] = 693,
  [SMALL_STATE(18)] = 742,
  [SMALL_STATE(19)] = 764,
  [SMALL_STATE(20)] = 782,
  [SMALL_STATE(21)] = 800,
  [SMALL_STATE(22)] = 818,
  [SMALL_STATE(23)] = 850,
  [SMALL_STATE(24)] = 882,
  [SMALL_STATE(25)] = 899,
  [SMALL_STATE(26)] = 924,
  [SMALL_STATE(27)] = 939,
  [SMALL_STATE(28)] = 964,
  [SMALL_STATE(29)] = 989,
  [SMALL_STATE(30)] = 1008,
  [SMALL_STATE(31)] = 1022,
  [SMALL_STATE(32)] = 1039,
  [SMALL_STATE(33)] = 1054,
  [SMALL_STATE(34)] = 1069,
  [SMALL_STATE(35)] = 1082,
  [SMALL_STATE(36)] = 1095,
  [SMALL_STATE(37)] = 1108,
  [SMALL_STATE(38)] = 1121,
  [SMALL_STATE(39)] = 1138,
  [SMALL_STATE(40)] = 1151,
  [SMALL_STATE(41)] = 1166,
  [SMALL_STATE(42)] = 1177,
  [SMALL_STATE(43)] = 1192,
  [SMALL_STATE(44)] = 1207,
  [SMALL_STATE(45)] = 1220,
  [SMALL_STATE(46)] = 1235,
  [SMALL_STATE(47)] = 1246,
  [SMALL_STATE(48)] = 1259,
  [SMALL_STATE(49)] = 1270,
  [SMALL_STATE(50)] = 1282,
  [SMALL_STATE(51)] = 1294,
  [SMALL_STATE(52)] = 1301,
  [SMALL_STATE(53)] = 1314,
  [SMALL_STATE(54)] = 1321,
  [SMALL_STATE(55)] = 1328,
  [SMALL_STATE(56)] = 1335,
  [SMALL_STATE(57)] = 1342,
  [SMALL_STATE(58)] = 1355,
  [SMALL_STATE(59)] = 1362,
  [SMALL_STATE(60)] = 1369,
  [SMALL_STATE(61)] = 1376,
  [SMALL_STATE(62)] = 1383,
  [SMALL_STATE(63)] = 1390,
  [SMALL_STATE(64)] = 1397,
  [SMALL_STATE(65)] = 1408,
  [SMALL_STATE(66)] = 1415,
  [SMALL_STATE(67)] = 1425,
  [SMALL_STATE(68)] = 1435,
  [SMALL_STATE(69)] = 1445,
  [SMALL_STATE(70)] = 1455,
  [SMALL_STATE(71)] = 1465,
  [SMALL_STATE(72)] = 1475,
  [SMALL_STATE(73)] = 1485,
  [SMALL_STATE(74)] = 1495,
  [SMALL_STATE(75)] = 1502,
  [SMALL_STATE(76)] = 1509,
  [SMALL_STATE(77)] = 1516,
  [SMALL_STATE(78)] = 1523,
  [SMALL_STATE(79)] = 1530,
  [SMALL_STATE(80)] = 1537,
  [SMALL_STATE(81)] = 1542,
  [SMALL_STATE(82)] = 1547,
  [SMALL_STATE(83)] = 1554,
  [SMALL_STATE(84)] = 1559,
  [SMALL_STATE(85)] = 1566,
  [SMALL_STATE(86)] = 1571,
  [SMALL_STATE(87)] = 1578,
  [SMALL_STATE(88)] = 1583,
  [SMALL_STATE(89)] = 1587,
  [SMALL_STATE(90)] = 1591,
  [SMALL_STATE(91)] = 1595,
  [SMALL_STATE(92)] = 1599,
  [SMALL_STATE(93)] = 1603,
  [SMALL_STATE(94)] = 1607,
  [SMALL_STATE(95)] = 1611,
  [SMALL_STATE(96)] = 1615,
  [SMALL_STATE(97)] = 1619,
  [SMALL_STATE(98)] = 1623,
  [SMALL_STATE(99)] = 1627,
  [SMALL_STATE(100)] = 1631,
  [SMALL_STATE(101)] = 1635,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_identifier, 1, .production_id = 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 5),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 5),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 4),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 3),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_statements_repeat1, 2), SHIFT_REPEAT(76),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_body_statements_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_statements_repeat1, 2), SHIFT_REPEAT(89),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_body_statements_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_body_statements_repeat1, 2), SHIFT_REPEAT(79),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body_statements, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_body_statements, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_return_type, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_return_type, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_visibility, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_visibility, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_declaration_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_declaration_repeat1, 2), SHIFT_REPEAT(84),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_use_declaration_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_declaration, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_declaration, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_declaration, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_declaration, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 5),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 5),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_definition, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_definition, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_declaration, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_declaration, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_declaration, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_item, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_item, 4),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 5),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 5),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_declaration, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_statement, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration_statement, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, .production_id = 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_external, 6, .production_id = 7),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_item_declaration, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kw_function_end, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 8, .production_id = 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 5, .production_id = 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_forward_declaration, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(69),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2), SHIFT_REPEAT(49),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter_declaration, 3, .production_id = 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameter_declaration, 4, .production_id = 6),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [244] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
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
