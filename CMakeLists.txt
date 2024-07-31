cmake_minimum_required(VERSION 3.28)
project(DynamicLibraryTest)

set(CMAKE_CXX_STANDARD 20)

set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

add_executable(DynamicLibraryTest main.cpp)

add_subdirectory(examples)

