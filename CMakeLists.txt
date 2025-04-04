cmake_minimum_required(VERSION 3.10)

# Project name
project(ina219)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Output directories
set(BUILD_DIR ${CMAKE_BINARY_DIR}/build)
set(LIBRARY_OUTPUT_PATH ${BUILD_DIR})
set(EXECUTABLE_OUTPUT_PATH ${BUILD_DIR})

# Create the build directory
file(MAKE_DIRECTORY ${BUILD_DIR})

# Add the shared library target
add_library(ina219 SHARED src/ina219.cc)

# Add the executable target
add_executable(profiler src/ina219.cc profiler.cc)

# Specify the output directory for the executable
set_target_properties(profiler PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${BUILD_DIR})
