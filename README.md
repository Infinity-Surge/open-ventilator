# open-ventilator
Implementation of BP560 ventilator based on Medtronic Requirements documentation and
schematics.

On March 30, 2020, Medtronic released the engineering requirements, schematics and 
information regarding the BP560 ventilator.  No software or source code was released.

To build a ventilator requires a myriad of disciplines.  Mechanical engineering, 
electronics engineering, QA, and software engineering.  Arguably, the most difficult
and onerous part is in the software engineering and testing.

The aim of this project is to produce an modular MCU-agnostic ventilator application
to control the operation of a an open-source ventilator.

The software is broken up into the following directories:

- hardware library.  This contains GPIO pin assigments, ADC processing, LED indicators,
buzzers and lower-level hardware code.  The idea is that moving the software to a 
different MCU/Microprocessor would only require modifying this code, while leaving
the higher level application alone.

- simulation - Simulated/Mock hardware library implementation for unit testing.

- test - Unit tests

- ventilator - Ventilator application

