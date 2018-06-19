cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

add_executable(teav2
	main.cpp
	Client.cpp
)

target_link_libraries(teav2 PRIVATE Td::TdStatic)
target_link_libraries(teav2 PRIVATE docopt)
set_property(TARGET teav2 PROPERTY CXX_STANDARD 14)
