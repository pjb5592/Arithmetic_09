cmake_minimum_required(VERSION 3.10...3.28)
project(Arithmetic LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(src)

add_executable(Arithmetic
    src/main.cpp
    src/ArithmeticOperations.cpp
)

add_executable(ArithmeticTest
    test/ArithmeticOperationsTest.cpp
    src/ArithmeticOperations.cpp
)

target_compile_options(ArithmeticTest PRIVATE --coverage)
target_link_options(ArithmeticTest PRIVATE --coverage)

enable_testing()
add_test(NAME ArithmeticTest COMMAND ArithmeticTest)