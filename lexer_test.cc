#include <gtest/gtest.h>

#include <memory>
#include <sstream>

#include "lexer.h"

TEST(LexerTest, WhenStreamHasSingleToken_ShouldReturnTokenType) {
  auto expected_literal = "{";
  auto expected_token_type = LEFTBRACE;
  Lexer lexer{std::make_unique<std::istringstream>(expected_literal)};

  auto got = lexer.next();

  EXPECT_EQ(got.token_type, expected_token_type);
  EXPECT_EQ(got.literal, expected_literal);
}
