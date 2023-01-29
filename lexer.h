#ifndef LEXER_H_
#define LEXER_H_

#include <istream>
#include <memory>

#include "token.h"

class Lexer {
public:
  Lexer(std::unique_ptr<std::istream> input) : _input(std::move(input)) {}

  Token next();

private:
  std::unique_ptr<std::istream> _input;
};

#endif // !LEXER_H_
