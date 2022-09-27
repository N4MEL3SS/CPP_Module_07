cmake_minimum_required(VERSION 3.21)
project(Module_7)

set(CMAKE_CXX_STANDARD 98)
add_compile_options(-Wall -Wextra -Werror)

add_executable(Module_7_ex00 ex00/main.cpp ex00/Whatever.hpp)
add_executable(Module_7_ex01 ex01/main.cpp ex01/Iter.hpp)
add_executable(Module_7_ex02 ex02/main.cpp ex02/Array.hpp)
