# Specify the minimum version for CMake
cmake_minimum_required(VERSION 3.27)

# Project's name
project(AutoKraken LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

#dependencies
add_subdirectory(External/pybind11)
set(TINYXML2_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/External/tinyxml2)

#components
add_subdirectory(Core)
add_subdirectory(CLI)
add_subdirectory(GUI)

