# Open Ventilator Project

# CURRENT PROJECT STATUS 
This project is currently in the *DESIGN & REQUIREMENTS PHASE*. 

## GOALS:

The aim of this project is three-fold:

1) to produce an modular MCU-agnostic software framework for controlling a ventilator; and
2) design and build ventilator hardware; and
3) build and submit a low-cost ventilator to the FDA for clearance.

# Design Components/Initiatives

This project can be broken up conceptually into the following major initiatives:

- Hardware design and testing
- Software design and testing
- Mechanical design and production
- Documentation and Project Management

## Documentation and Project Management

The FDA requires a lot of documentation throughout the lifecycle of a medical device.  In order to facilitate this, a considerable amount of effort needs to be expended on documentation.

While most medical device companies use Microsoft Word documents that are singularly edited and reviewed, then added to a Quality Management System, we are utilizing git as our QMS.  Documents are generated and build like code.  We are using sphinx to generate documents.  All changes, revisions, and edits are captured in the git history.  As a result, the FDA and regulatory bodies will have complete transparency and traceability throughout the lifecycle, much more than with a traditional medical device maker.

## Hardware

The current envisioned control hardware is envisioned to be a modular system, comprised of
several electrical boards.  Each board will be designed for testing, and ease of replacement
in the field.

*Power supply board.*  The power supply board is responsible for providing multiple regulated
power levels (currently: 3.3V, 5V, and 10V), with power monitoring.  The power supply 
board is also responsible for charging a battery, monitoring the battery, and switching over
to the battery in the event of power loss.  Inputs/Outputs: 120V AC, 12V DC, Battery, 
(GPIO lines: Power failure for 3.3V, 5V, and 10V, battery charging, and AC power).

*Annunciator board*.  The Annunciator/Alarm/Buzzer board is responsible for producing the 
required alarm sounds/ringers to alert medical personnel of issues requiring 
intervention.

*CPU/Controller Mainboard*.  The CPU/Controller board is responsible for implementing
the control functions, responding to user stimulus, responding to sensors, measuring 
pressures, calculating values, and commanding the turbine.

## Software

The software is envisioned to be broken up into several components:

*A defined hardware API.*  This will define an API to provide a level of abstraction
from the hardware specific operations.  An implementation of this library will be
done for each MCU/SOCs as needed.  By standardizing the interface to the hardware
we can write a suite of hardware tests, and software test suites that allows us to
validate different hardware quickly.

As a theoretical example, let's say we define a functional
call to turn on/off a LED: ```bool LED_AC_power(bool on);````

On MCU platform "A" this might be implemented as a simple register access, where a single
bit activates the GPIO: 
```
bool LED_AC_power(bool on) {
    uint32_t register_address = 0x1234;
    uint32_t val = *register_address;
    if (on)
    {
        val = val | AC_LED_BIT;
    }
    else
    {
        val = val & ~AC_LED_BIT;
    }
    *register_address = on;
}
```
On a different implementation of the hardware, a with a SOC running Linux, perhaps it will be via libgpio:
```
bool LED_AC_power(bool on) {
	gpio_pin pin;
	int ret = gpio_open_by_name (&pin, "led_ac");
    ...
}
```

*hardware simulator.*  This library is an implementation of the hardware API, with 
additional code to simulate sensors, storage, eeproms, nvram, ram, gpio, etc.  This
will allow us to have a unit test suite to test major functions of the ventilator 
software.  This may or may not be implemented in QEMU.  This could be used as a 
reference for other implementors.

*Ventilator library.*  This library provides higher layer level control functions, state machines,
and other code required to manage the complexity required to implement a modern
mechanical ventilator.

*Unit tests.*  Where it makes sense, unit tests will test individual functions and higher
level functionality.

## Mechanical

Mechanical design including internal placement of turbine, case design will be
done after a proof of concept is produced.
