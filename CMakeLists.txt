cmake_minimum_required(VERSION 3.10)

project(MonkeyCpp)
set(CMAKE_GENERATOR "Ninja" CACHE INTERNAL "" FORCE)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  lexer_test
  lexer_test.cc
  lexer.cc
)
target_link_libraries(
  lexer_test
  GTest::gtest_main
)

add_executable(monkeycpp main.cc)

include(GoogleTest)
gtest_discover_tests(lexer_test)
