cmake_minimum_required(VERSION 3.25)
project(2023-cpl-coding C)

set(CMAKE_C_STANDARD 17)

add_executable(hello 0-intro/hello.c)
add_executable(guess 0-intro/guess.c)
add_executable(homework1-1 homework/homework1-1.c)
add_executable(homework1-2 homework/homework1-2.c)
add_executable(homework1-3 homework/homework1-3.c)
add_executable(homework1-4 homework/homework1-4.c)
add_executable(homework1-5 homework/homework1-5.c)
add_executable(homework1-6 homework/homework1-6.c)
add_executable(homework1-7 homework/homework1-7.c)
add_executable(homeworktest homework/homeworktest.c)
#gcc hello.c -o hello