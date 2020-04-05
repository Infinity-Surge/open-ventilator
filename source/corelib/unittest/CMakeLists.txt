# SPDX-License-Identifier: GPL-2.0-only
# Open Ventilator Project (OVP) CMake file
#
# Copyright (C) 2020  RxJet Incorporated

FILE(GLOB_RECURSE UNIT_TEST "*.cpp" "*.hpp")

# Add all unit tests in addition to all source files.
add_executable(core_unit_tests ${UNIT_TEST} )

# Link this executable.
target_link_libraries (core_unit_tests ${CPPUNIT_LIBRARIES} ${UnitTestLibs})
target_include_directories(core_unit_tests PUBLIC
  ../include/
)
add_test(core_unit_tests core_unit_tests)