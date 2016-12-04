cmake_minimum_required(VERSION 3.6)
project(test2)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

set(SOURCE_FILES main.c)
add_executable(test2 ${SOURCE_FILES})