cmake_minimum_required(VERSION 3.22)
project(Array_ADT C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Array_ADT
        Array_ADT.c
        Array_ADT.h
        main.c)
