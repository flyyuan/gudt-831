cmake_minimum_required(VERSION 3.15)
project(C_831 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(2011)
include_directories(2018)
include_directories(ArrayAndFunction)
include_directories("C Preprocessor")
include_directories("LinearList ")
include_directories(Pointer)
include_directories(Structure)

add_executable(C_831 test.c)
add_executable(f12 2018/f21.c)
