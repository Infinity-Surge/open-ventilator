# SPDX-License-Identifier: GPL-2.0-only
# Open Ventilator Project (OVP) CMake file
#
# Copyright (C) 2020  RxJet Incorporated

cmake_minimum_required(VERSION 3.11...3.16)

# Project name and a few useful settings. Other commands can pick up the results
project(OpenVentilator
    VERSION 0.1
    DESCRIPTION "Open Ventilator Project"
    LANGUAGES CXX)

# Add the cmake folder so the FindXXX module can be found
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})

# Set to c++ 11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Build documentation option
# 
# This option will build the html documentation and doxygen
# documentation
#
# usage: cmake -DBUILD_DOCS=ON ..
#  
option(BUILD_DOCS "Build the documentation" OFF)

find_package(CppUnit REQUIRED)
include_directories(${CPPUNIT_INCLUDE_DIR})

ENABLE_TESTING()

add_subdirectory(medlib)
add_subdirectory(source)

add_subdirectory(docs)

