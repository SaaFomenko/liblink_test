cmake_minimum_required(VERSION 3.30)

project(math_project)

include_directories(math_library)

set(SOURCE_EXE main.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_EXE})

add_subdirectory(math_library)

target_link_libraries(${PROJECT_NAME} arith_lib)