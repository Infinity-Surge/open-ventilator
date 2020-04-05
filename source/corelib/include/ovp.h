// SPDX-License-Identifier: GPL-2.0-only
/**
 *  @file   ovp.h
 *  @brief  Open Ventilator Project documentation
 * 
 *  This file contains doxygen documentation for the Open 
 *  Ventilator Project.
 * 
 *  \author Joe Turner <joe@rxjet.net>
 * 
 *  \copyright Copyright (C) 2020 RxJet Incorporated.
 */
#pragma once

/*! \mainpage Introduction

To build a ventilator requires a myriad of disciplines: mechanical engineering, 
electrical engineering, QA, legal, and software engineering.

While a mechanical ventilator is a somewhat complex piece of machinery, the electronics
and mechanical design is relatively simplistic.  The bulk of the work in getting 
a modern mechanical ventilator working and certified is in the software.  Arguably, the 
most difficult, onerous, and time-consuming part of developing a ventilator is in 
the software engineering and testing.

The aim of this project is to produce an modular MCU-agnostic ventilator application
to control the operation of an open-source ventilator.

The software is broken up into the following directories:

- \ref hardwarelib.  This contains GPIO pin assigments, ADC processing, LED indicators,
buzzers and lower-level hardware code.  The idea is that moving the software to a 
different MCU/Microprocessor would only require modifying this code, while leaving
the higher level application alone.

- simulation - Simulated/Mock hardware library implementation for unit testing.

- test - Unit tests

- ventilator - Ventilator application

*/

/**
 * \brief Open Ventilator Project Namespace
 * 
 * This is the top-level namespace for the Open Ventilator Project;
 * this namespace contains all of the code written for the Open
 * Ventilator Project.
 * 
 * Based on best practices, all Open Ventilator Project code will use
 * this global namespace to reduce name conflicts.
 * 
 */
namespace ovp {

/**
 * \brief Hardware Implementation Namespace
 * 
 * This namespace contains the implementation of any hardware 
 * control or access code.  All implementation details or hardware
 * specific addressing, ports, general purpose I/O area implemented
 * in this namespace.
 * 
 * This namespace will contain all hardware specific implementation
 * details, effectively creating a defined API to make this 
 * code more readily portable to other architectures and/or 
 * hardware implementations.
 */
namespace hardware {

}

/**
 * \brief Mathematical calculations, formulas, equates, and definitions
 * 
 * This namespace contains the implementation of standard equations,
 * defines, equates, and constants.
 */
namespace math {

}
}

/*! \page hardwarelib Hardware Library
This page introduces the user to the topic.
Now you can proceed to the \ref advanced "advanced section".

*/
