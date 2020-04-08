// SPDX-License-Identifier: GPL-2.0-only
/**
 *  @file   cpputest_main.cpp
 *  @brief  Unit test test runner
 * 
 *  \author Joe Turner <joe@rxjet.net>
 * 
 *  \copyright Copyright (C) 2020 RxJet Incorporated.
 */
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>

int main (int argc, char* argv[]) {
  CppUnit::TextUi::TestRunner runner;
  CppUnit::TestFactoryRegistry& registry = CppUnit::TestFactoryRegistry::getRegistry();

  runner.addTest( registry.makeTest() );
  bool failed = runner.run("", false);
  return !failed;
}
