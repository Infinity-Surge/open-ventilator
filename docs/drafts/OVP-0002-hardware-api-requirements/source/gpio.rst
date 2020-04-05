Input/Output
============

Power Supply Monitoring
-----------------------

The hardware shall provide a method of monitoring power supply faults,
monitoring AC or DC usage.

+-----+-------------------+----------------------------------------------------------+
+ I/O | NAME              | DESCRIPTION                                              |
+=====+===================+==========================================================+
|  I  | 5VREF_FAIL        | When asserted, this indicates a fault in the 5V rail.    |
+-----+-------------------+----------------------------------------------------------+
|  I  | 10VREF_FAIL       | When asserted, this indicates a faul in the 10V rail.    |
+-----+-------------------+----------------------------------------------------------+
|  I  | 33VREF_FAIL       | When asserted, this indicates a fault in the 3.3V rail.  |
+-----+-------------------+----------------------------------------------------------+
|  I  | AC_GOOD           | When asserted, this indicates device is operating from   |
|     |                   | AC power.                                                |
+-----+-------------------+----------------------------------------------------------+
|  I  | DC_GOOD           | When asserted, this indicates device is operating from   |
|     |                   | DC power.                                                |
+-----+-------------------+----------------------------------------------------------+

LED Indicators
--------------

The device has several LED indicators.  These may be driven directly by hardware.
If that is the case, any corresponding API function should be stubbed out.

+-----+-------------------+----------------------------------------------------------+
+ I/O | NAME              | DESCRIPTION                                              |
+=====+===================+==========================================================+
|  O  | LED_DC_PRESENCE   | When asserted, indicates that the unit is operating      |
|     |                   | from DC power source.                                    |
+-----+-------------------+----------------------------------------------------------+
|  O  | LED_AC_PRESENCE   | When asserted, this indicates that the device is         |
|     |                   | operating from AC power.                                 |
+-----+-------------------+----------------------------------------------------------+
|  O  | LED_BATTERY_STATUS| When asserted, this indicates that unit is operating     |
|     |                   | from battery.  Flashing indicates charging               |
+-----+-------------------+----------------------------------------------------------+
|  O  | LED_O2            | O2 is active when asserted                               |
+-----+-------------------+----------------------------------------------------------+
|  O  | LED_VENTIL        | When asserted, this indicates that ventilation is        |
|     |                   | active (on).                                             |
+-----+-------------------+----------------------------------------------------------+
|  O  | LED_AL_R          | RED LED indicates active high priority alarm.            |
|     |                   | Continuously lit means Very High Priority (no            |
|     |                   | Ventilation); Flashing at 2Hz is High Priority alarm     |
|     |                   | (compromised ventilation).                               |
+-----+-------------------+----------------------------------------------------------+
|  O  | LED_AL_Y          | YELLOW LED indicates active medium priority alarm.       |
|     |                   | Continuously lit means Low Priority alarm.               |
|     |                   | Flashing at .5Hz is Medium Priority alarm                |
+-----+-------------------+----------------------------------------------------------+

Temperature Sensors
-------------------

+-----+-------------------+----------------------------------------------------------+
+ I/O | NAME              | DESCRIPTION                                              |
+=====+===================+==========================================================+
| AI  | BATTERY_TEMP      | Battery temperature                                      |
+-----+-------------------+----------------------------------------------------------+
| AI  | FLOW-TEMP         | Ambient air temperature                                  |
+-----+-------------------+----------------------------------------------------------+
| AI  | TURBINE-TEMP      | Turbine/blower temperature                               |
+-----+-------------------+----------------------------------------------------------+

Pressure Measurement
--------------------

+-----+-------------------+----------------------------------------------------------+
| I/O | NAME              | DESCRIPTION                                              |
+=====+===================+==========================================================+
| AI  | PRESSURE_INT      | Internal Pressure                                        |
+-----+-------------------+----------------------------------------------------------+
| AI  | PRESSURE_PROX     | Proximal Pressure                                        |
+-----+-------------------+----------------------------------------------------------+
| AI  | PRESSURE_ABS      | Berometric Press                                         |
+-----+-------------------+----------------------------------------------------------+
| AI  | PRESSURE_O2       | O2 Pressure                                              |
+-----+-------------------+----------------------------------------------------------+
| AI  | PRESSURE_VALVE    | Valve Pressure                                           |
+-----+-------------------+----------------------------------------------------------+

Flow Measurement
----------------

+-------------------+----------------------------------------------------------+
| I/O               | Description                                              |
+===================+==========================================================+
| Inspiratory Flow  |                                                          |
+-------------------+----------------------------------------------------------+
| Exhalation Flow   |                                                          |
+-------------------+----------------------------------------------------------+

Turbine/Blower Control
----------------------

+-----+-------------------+----------------------------------------------------------+
| I/O | NAME              | DESCRIPTION                                              |
+-----+-------------------+----------------------------------------------------------+
| O   | ENABLE_TURBINE    | Enable turbine                                           |
+-----+-------------------+----------------------------------------------------------+
| O   | TURBINE_BRAKE     | Turbine brake                                            |
+-----+-------------------+----------------------------------------------------------+
| AI  | PRESSURE_ABS      | Berometric Press                                         |
+-----+-------------------+----------------------------------------------------------+
| AI  | PRESSURE_O2       | O2 Pressure                                              |
+-----+-------------------+----------------------------------------------------------+
| AI  | PRESSURE_VALVE    | Valve Pressure                                           |
+-----+-------------------+----------------------------------------------------------+


Watchdog
--------

If the hardware has an external watchdog reset circuit, an output needs to be assigned
to the external watchdog circuit.

+-----+-------------------+----------------------------------------------------------+
+ I/O | NAME              | DESCRIPTION                                              |
+-----+-------------------+----------------------------------------------------------+
| O   | WDOG              | Watchdog enable/strobe                                   |
+-----+-------------------+----------------------------------------------------------+
