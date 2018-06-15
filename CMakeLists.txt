cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

project(teav2 VERSION 0.0.0 LANGUAGES CXX)

add_subdirectory(dep)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(teav2 
	"${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/docopt/docopt.cpp"
)

target_link_libraries(teav2 PRIVATE Td::TdStatic)
set_property(TARGET teav2 PROPERTY CXX_STANDARD 14)
