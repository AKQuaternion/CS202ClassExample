cmake_minimum_required(VERSION 3.17)
project(CS202ClassExample)

set(CMAKE_CXX_STANDARD 20)

add_executable(CS202ClassExample main.cpp tests.cpp Rational.cpp Rational.hpp)