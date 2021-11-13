cmake_minimum_required(VERSION 3.20)
project(CPP_LESSONS)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CPP_LESSONS
        06112021.cpp
        Figure.cpp
        Figure.h
        Fraction.cpp
        Fraction.h
        FractionAdder.cpp
        FractionAdder.h
        Rectangle.cpp
        Rectangle.h 13112021.cpp)
