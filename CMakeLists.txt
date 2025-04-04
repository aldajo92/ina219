cmake_minimum_required(VERSION 2.6)
project(INA219)

# Set build type and compiler flags
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")

# Set output directories
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/lib)

# Add the library target
add_library(INA219 STATIC lib/ina219.cc)

add_executable(profiler examples/profiler.cc)
target_link_libraries(profiler INA219)

add_executable(loop examples/loop.cc)
target_link_libraries(loop INA219)
