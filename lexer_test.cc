#include <gtest/gtest.h>

#include <memory>
#include <sstream>
#include <utility>

#include "lexer.h"
#include "token.h"

class LexerTest : public testing::TestWithParam<Token> {};

TEST_P(LexerTest, WhenStreamHasSingleToken_ShouldReturnTokenType) {
  auto expected_token = GetParam();
  Lexer lexer{std::make_unique<std::istringstream>(expected_token.literal)};

  auto got = lexer.next();

  EXPECT_EQ(got.token_type, expected_token.token_type);
  EXPECT_EQ(got.literal, expected_token.literal);
}

Token createFromTokenType(std::string_view token_type) {
  return Token{
      .token_type = token_type,
      .literal = std::string(token_type),
  };
}

INSTANTIATE_TEST_SUITE_P(
    LexerTestParamInstantiation, LexerTest,
    testing::Values(
        createFromTokenType(ASTERISK), createFromTokenType(ASSIGN),
        createFromTokenType(PLUS), createFromTokenType(MINUS),
        createFromTokenType(BANG), createFromTokenType(SLASH),
        createFromTokenType(EQUAL), createFromTokenType(NOTEQUAL),
        createFromTokenType(LESSTHAN), createFromTokenType(GREATERTHAN),
        createFromTokenType(COMMA), createFromTokenType(SEMICOLON),
        createFromTokenType(COLON), createFromTokenType(LEFTPAREN),
        createFromTokenType(RIGHTPAREN), createFromTokenType(LEFTBRACE),
        createFromTokenType(RIGHTBRACE), createFromTokenType(LEFTBRACKET),
        createFromTokenType(RIGHTBRACKET)));
