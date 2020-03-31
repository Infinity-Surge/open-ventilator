/**
 *  @file: LEDS.h
 *
 *  Copyright (C) 2020  Joe Turner <joe@agavemountain.com>
 *
 *     This program is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 *
 *     You should have received a copy of the GNU General Public License
 *     along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#pragma once

/**
 * \defgroup leds LED indicators
 * @brief API for controlling LED indicators
 *
 * The Medtronic BP560 Ventilator has six LED indicators on the front of the 
 * device to alert users of varous issues.  These LEDs are controlled via
 * GPIOs assigned to the MCU.  Since GPIO assignments can change, these GPIO
 * calls are wrapped in function calls, wherein the GPIO assignments can be
 * modified (or stubbed out for unit testing). 
 * 
 */

//! \brief AC power indicator
//!
//! AC power indicator. When lit, green LED indicates ventilator is 
//! connected to AC power.
//! 
//! \param on   true to turn on LED via GPIO; false to turn LED indicator off.
//!
//! \retval     true    LED indicator is on
//! \retval     false   LED indicator is off
bool LED_ACPowerIndicator(bool on);

//! \brief DC power indicator
//! 
//! DC power indicator. When lit, green LED indicates ventilator is connected to 
//! an external DC power source (e.g., automobile cigarette lighter or power port).
//! 
//! \param on   true to turn on LED via GPIO; false to turn LED indicator off.
//!
//! \retval     true    LED indicator is on
//! \retval     false   LED indicator is off
bool LED_DCPowerIndicator(bool on);

//! \brief Internal battery indicator
//!
//! Internal battery indicator. When lit, green LED indicates ventilator is operating 
//! on internal battery power if no other power source is connected.
//!
//! LED flashes when the internal battery is charging, and turns off when the battery 
//! is charged.
//! 
//! \param on   true to turn on LED via GPIO; false to turn LED indicator off.
//!
//! \retval     true    LED indicator is on
//! \retval     false   LED indicator is off
bool LED_InternalBatteryIndicator(bool on);

//! \brief Ventilator status indicator 
//!
//! Ventilator status indicator. When lit, blue LED indicates ventilator is in standby 
//! mode, and enables the user to locate the Ventilation ON/OFF key at night.
//! 
//! During ventilation, LED is off.
//!
//! \param on   true to turn on LED via GPIO; false to turn LED indicator off.
//!
//! \retval     true    LED indicator is on
//! \retval     false   LED indicator is off
bool LED_VentilatorStatus(bool on);

//! \brief High priority alarm indicator
//!
//! Red LED indicates an active high priority alarm.
//! 
//! red continuously lit LED = Very High Priority (no ventillation)
//! red flashing LED illumination = High Priority (compromised ventilation)
//!
//! \param on   true to turn on LED via GPIO; false to turn LED indicator off.
//!
//! \retval     true    LED indicator is on
//! \retval     false   LED indicator is off
bool LED_HighPriorityAlarm(bool on);

//! \brief Medium priority alarm indicator
//!
//! Yellow LED indicates active medium priority alarms (Ventilation not immediately 
//! affected, but could harm patient if left uncorrected).
//! 
//! \param on   true to turn on LED via GPIO; false to turn LED indicator off.
//!
//! \retval     true    LED indicator is on
//! \retval     false   LED indicator is off
bool LED_MediumPriorityAlarm(bool on);

/*! @} End of Doxygen Groups*/

