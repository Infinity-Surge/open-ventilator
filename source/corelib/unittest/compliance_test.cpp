// SPDX-License-Identifier: GPL-2.0-only
/**
 *  @file: compliance.h
 *
 *  Compliance calculations unit tests
 * 
 *  Copyright (C) 2020  Joe Turner <joe@agavemountain.com>
 */
#include "compliance.h"
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/ui/text/TestRunner.h>

using namespace ovp::math;

class ComplianceTest : public CppUnit::TestCase {
public:
    CPPUNIT_TEST_SUITE(ComplianceTest);
    CPPUNIT_TEST(test_static_compliance);
    CPPUNIT_TEST(test_dynamic_compliance);
    CPPUNIT_TEST_SUITE_END();

    // Calculate the static compliance given the following:
    // FiO2: .60, Rate: 12 bpm, Peak Pressure: 38 cmH2O,
    // Plateau Pressure: 29 cmH2O, Vt: 600mL, PEEP: +5 cmH2O
    // \todo Add negative test case and bad parameters.
    void test_static_compliance()
    {
        double expected = 25; // 25mL/cmH2O
        double actual = static_compliance(600, 29, 5);
        CPPUNIT_ASSERT_EQUAL_MESSAGE("static compliance miscalculated", 
            expected, actual);
    }

    // Calculate the static compliance given the following:
    // FiO2: .60, Rate: 12 bpm, Peak Pressure: 38 cmH2O,
    // Plateau Pressure: 29 cmH2O, Vt: 600mL, PEEP: +5 cmH2O
    // \todo Add negative test case and bad parameters.
    void test_dynamic_compliance()
    {
        double expected = 18.18; // 25mL/cmH2O
        double actual = dynamic_compliance(600, 38, 5);

        CPPUNIT_ASSERT( expected >= (double) 18.18 );
        CPPUNIT_ASSERT( expected <= (double) 18.19 );
   }
};

CPPUNIT_TEST_SUITE_REGISTRATION(ComplianceTest);
