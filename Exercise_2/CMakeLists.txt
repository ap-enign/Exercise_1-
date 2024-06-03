# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10.0)


# Define the project
project( EXERCISE_2
         VERSION 1.0.0
         DESCRIPTION "A project to write first cpp program "
         LANGUAGES CXX)
    
# Set additional project properties
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add executable
add_executable(EXERCISE_2 main.cpp)
