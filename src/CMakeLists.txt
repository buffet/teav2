cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

add_executable(teav2
	"main.cpp"
	"docopt/docopt.cpp"
)

target_link_libraries(teav2 PRIVATE Td::TdStatic)
set_property(TARGET teav2 PROPERTY CXX_STANDARD 14)
