#include "lexer.h"

Token Lexer::next() {
  Token t{.token_type = LEFTBRACE, .literal = "{"};
  return t;
}
