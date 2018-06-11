cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

project(teav2 VERSION 0.0.0 LANGUAGES CXX)

add_subdirectory(td)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
file(GLOB SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_executable(teav2 ${SOURCES})

target_link_libraries(teav2 PRIVATE Td::TdStatic)
set_property(TARGET teav2 PROPERTY CXX_STANDARD 14)
