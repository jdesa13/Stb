cmake_minimum_required(VERSION 2.8.9)
project (STBsub)


##############################################################
# Output paths
##############################################################
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")
SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")
SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")


set(STB_INCLUDE_DIR
    ${CMAKE_SOURCE_DIR}/external/stb)

#add_subdirectory(stb)

include_directories(${STB_INCLUDE_DIR})
add_executable(STB-Tester main.cpp)