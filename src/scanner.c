#include <tree_sitter/parser.h>

enum TokenType {
  STRING_CONTENT,
};

void *tree_sitter_gold_external_scanner_create() { return NULL; }
void tree_sitter_gold_external_scanner_destroy(void *p) {}
void tree_sitter_gold_external_scanner_reset(void *p) {}
unsigned tree_sitter_gold_external_scanner_serialize(void *p, char *buffer) {
  return 0;
}
void tree_sitter_gold_external_scanner_deserialize(void *p, const char *b,
                                                   unsigned n) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

bool tree_sitter_gold_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  return false;
}
