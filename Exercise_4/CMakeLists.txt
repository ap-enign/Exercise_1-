# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10.0)


# Define the project
project( EXERCISE_4
         VERSION 1.0.0
         DESCRIPTION "A project related to using Arrays in Cpp 2"
         LANGUAGES CXX)
    
# Set additional project properties
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add executable
add_executable(EXERCISE_4 main.cpp)
