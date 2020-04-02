// SPDX-License-Identifier: GPL-2.0-only
/**
 *  @file: ventilator_equations.h
 *
 *  Ventilator Equations
 * 
 *  Written by Joe Turner <joe@rxjet.net>
 * 
 *  Copyright (C) 2020 RxJet Incorporated.
 */
#pragma once

//! \brief Calculate tidal volume delivered
//!
//! \param v_setpoint   the tidal volume setting on the ventilator
//! \param C_RS         the respiratory system compliance
//! \param C_PC         patient circuit compliance
//!
//! \returns
//! This function returns the tidal volume delivered to the patient.
template<typename T>
T caculate_tidal_volume_delivered(const T V_setpoint, const T C_RS,  const T C_PC)
{
    T volume_delivered = ( (v_setpoint) / (1+(C_PC / C_RS));
    return volume_delivered;
}

