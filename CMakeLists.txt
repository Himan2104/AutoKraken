# Specify the minimum version for CMake
cmake_minimum_required(VERSION 3.10)

# Project's name
project(AutoKraken)

set(CMAKE_CXX_STANDARD 17)

# Use the package PkgConfig to detect GTKMM libraries
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM gtkmm-4.0 REQUIRED)
pkg_check_modules(PYTHON python-3.11 REQUIRED)
pkg_check_modules(PYBIND pybind11 REQUIRED)

#pybind11_add_module(AutoKraken src/main.cpp)

# Setup CMake to use GTKMM, tell the compiler where to look for headers
# and to the linker where to look for libraries
include_directories(${GTKMM_INCLUDE_DIRS} ${PYBIND_INCLUDE_DIRS} ${PYTHON_INCLUDE_DIRS} ${PROJECT_SOURCE_DIR}/inc)
link_directories(${GTKMM_LIBRARY_DIRS} ${PYBIND_LIBRARIES} ${PYTHON_LIBRARIES})

# Add other flags to the compiler
add_definitions(${GTKMM_CFLAGS_OTHER})

# Add an executable compiled from hello.cpp
file(GLOB SOURCES "src/*.cpp")
add_executable(${PROJECT_NAME} ${SOURCES})

# Link the target to the GTKMM libraries
target_link_libraries(${PROJECT_NAME} ${GTKMM_LIBRARIES} ${PYBIND_LIBRARIES} ${PYTHON_LIBRARIES})
