cmake_minimum_required(VERSION 3.25)
project(2023-cpl-coding C)

set(CMAKE_C_STANDARD 17)

add_subdirectory(0-intro)
add_subdirectory(homework)
add_subdirectory(1-types-io)

#gcc hello.c -o hello