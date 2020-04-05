// SPDX-License-Identifier: GPL-2.0-only
/**
 *  @file: vent_equations.h
 *
 *  Ventilator Equations
 * 
 *  Written by Joe Turner <joe@rxjet.net>
 * 
 *  Copyright (C) 2020 RxJet Incorporated.
 */
#pragma once

namespace ovp
{
    namespace math 
    {


    /**
     * \brief Calculate tidal volume delivered
     * 
     * Tidal volume is defined as the volume of air moved into and out of the 
     * lungs during each ventilation cycle.
     * 
     * 
     * The equation is:
     * \f[
     *   C_{st} = \frac{V_{setpoint}}{1 + \frac{C_{PC}}{C_{RS}} } \\
     * \f]
     * 
     * \param V_setpoint   the tidal volume setting on the ventilator
     * \param C_RS         the respiratory system compliance
     * \param C_PC         patient circuit compliance
     * 
     * \returns
     * This function returns the tidal volume delivered to the patient.
     */
inline
double tidal_volume_delivered(const double V_setpoint, const double C_RS,  const double C_PC)
{
    double volume_delivered = ( (V_setpoint) / (1+(C_PC / C_RS))) ;
    return volume_delivered;
}

    } // math
} // ovp


