cmake_minimum_required(VERSION 3.25)
project(2023-cpl-coding C)

set(CMAKE_C_STANDARD 17)

add_executable(hello hello.c)
add_executable(guess guess.c)
#gcc hello.c -o hello