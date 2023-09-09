cmake_minimum_required(VERSION 3.26)
project(CiCiplus C)

set(CMAKE_C_STANDARD 11)

add_executable(CiCiplus main.c)

add_definitions(-municode)

include_directories("./src")
include_directories("./srcdsadas")