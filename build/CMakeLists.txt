cmake_minimum_required(VERSION 3.10)
project(Tutorial)

file(GLOB SOURCES
    header-folder/*.h
    source-folder/*.cpp
)

add_executable(Tutorial /home/therealisc/repos/tavi-algorithms/src/tutorial.cpp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
