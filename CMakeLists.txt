cmake_minimum_required(VERSION 3.10)

project(Project_Name CXX)
set(CMAKE_CXX_STANDARD 17)

enable_testing()

add_subdirectory(libreria)
add_subdirectory(main)
add_subdirectory(unit-test)