cmake_minimum_required(VERSION 3.10)

project(MonkeyCpp)
set(CMAKE_GENERATOR "Ninja" CACHE INTERNAL "" FORCE)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)

add_executable(monkeycpp main.cc)
