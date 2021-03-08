cmake_minimum_required(VERSION 3.17)
project(Game)

set(CMAKE_CXX_STANDARD 14)

add_executable(Game
        Source.cpp Player.cpp Player.h Map.cpp Map.h)
