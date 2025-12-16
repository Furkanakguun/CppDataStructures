cmake_minimum_required(VERSION 3.15)
project(CppDataStructures)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add include/ to header search path
include_directories(include)

# Collect source files
file(GLOB SOURCES "src/*.cpp")

# Main executable
add_executable(CppDataStructures main.cpp ${SOURCES})
