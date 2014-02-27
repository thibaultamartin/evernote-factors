cmake_minimum_required(VERSION 2.6)

# Project configuration
project(factors)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# Source files
file(
    GLOB_RECURSE
    source_files
    src/*
)

# Executable declaration
add_executable(
    factors
    ${source_files}
)

