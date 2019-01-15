cmake_minimum_required(VERSION 3.13)
project(GenericProgramming)

set(CMAKE_CXX_STANDARD 14)

add_executable(GenericProgramming main.cpp IntStack.cpp IntStack.h Node.cpp Node.h)