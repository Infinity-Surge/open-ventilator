# Open Ventilator Project
On March 30, 2020, Medtronic released the engineering requirements, schematics and 
information regarding the BP560 ventilator to the public.  With much fan-fare, they
released what was hoped would be something that would jump start the production of
ventilators required to keep covid-19 patients alive.  With a great deal of
excitement, many engineers quickly downloaded the information.

However, the excitement soon died, as there was no software or source code 
released.  As a result, the end user could not actually build a usable ventilator 
and submit a ventilator for FDA approval.

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

- hardware library.  This contains GPIO pin assigments, ADC processing, LED indicators,
buzzers and lower-level hardware code.  The idea is that moving the software to a 
different MCU/Microprocessor would only require modifying this code, while leaving
the higher level application alone.

- simulation - Simulated/Mock hardware library implementation for unit testing.

- test - Unit tests

- ventilator - Ventilator application


