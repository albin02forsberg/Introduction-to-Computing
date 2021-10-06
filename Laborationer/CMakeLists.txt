cmake_minimum_required(VERSION 3.20)
project(Laborationer)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Laborationer
        bezout.h
        bookCost.h
        change.h
        colourinfo.h
        main.cpp)
