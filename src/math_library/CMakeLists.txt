cmake_minimum_required(VERSION 3.30)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ../../lib)

project(math_library)

set(SOURCE_LIB arith.cpp)

add_library(arith_lib STATIC ${SOURCE_LIB})