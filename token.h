#ifndef TOKEN_H_
#define TOKEN_H_

#include <string_view>

constexpr std::string_view ILLEGAL = "Illegal";
constexpr std::string_view EOF = "EOF";

// Identifiers + Literals
constexpr std::string_view IDENTIFIER = "Identifier"; // add, x ,y, ...
constexpr std::string_view INT = "Int";               // 123456
constexpr std::string_view STRING = "String";         // "x", "y";

// Operators
constexpr std::string_view ASTERISK = "*";
constexpr std::string_view ASSIGN = "=";
constexpr std::string_view PLUS = "+";
constexpr std::string_view MINUS = "-";
constexpr std::string_view BANG = "!";
constexpr std::string_view SLASH = "/";
constexpr std::string_view EQUAL = "==";
constexpr std::string_view NOTEQUAL = "!=";

constexpr std::string_view LESSTHAN = "<";
constexpr std::string_view GREATERTHAN = ">";

// Delimiters
constexpr std::string_view COMMA = ",";
constexpr std::string_view SEMICOLON = ";";
constexpr std::string_view COLON = ":";

constexpr std::string_view LEFTPAREN = "(";
constexpr std::string_view RIGHTPAREN = ")";
constexpr std::string_view LEFTBRACE = "{";
constexpr std::string_view RIGHTBRACE = "}";
constexpr std::string_view LEFTBRACKET = "[";
constexpr std::string_view RIGHTBRACKET = "]";

// Keywords
constexpr std::string_view FUNCTION = "Function";
constexpr std::string_view LET = "Let";
constexpr std::string_view TRUE = "True";
constexpr std::string_view FALSE = "False";
constexpr std::string_view IF = "If";
constexpr std::string_view ELSE = "Else";
constexpr std::string_view RETURN = "Return";

#endif // !TOKEN_H_
