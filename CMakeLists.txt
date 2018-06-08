cmake_minimum_required(VERSION 3.1 FATAL_ERROR)

project(teav2 VERSION 0.0.0 LANGUAGES CXX)

add_subdirectory(td)

add_executable(teav2 teav2.cpp)
target_link_libraries(teav2 PRIVATE Td::TdStatic)
set_property(TARGET teav2 PROPERTY CXX_STANDARD 14)
