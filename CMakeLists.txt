cmake_minimum_required(VERSION 3.6)
project(Chess)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Piece.cpp Piece.h Board.cpp Board.h main_func.cpp)
add_executable(Chess ${SOURCE_FILES})