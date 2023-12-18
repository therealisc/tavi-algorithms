cmake_minimum_required(VERSION 3.10)
project(Tutorial)

include_directories("../src")
set(SOURCE_FILES
    ../src/tutorial.cpp
    ../src/my_class.cpp
    ../src/queens.cpp
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
