# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10.0)


# Define the project
project( EXERCISE_5
         VERSION 1.0.0
         DESCRIPTION "A project related to using array, pointer array, dynamically allocated memory in cpp. "
         LANGUAGES CXX)
    
# Set additional project properties
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add executable
add_executable(EXERCISE_5 main.cpp)
