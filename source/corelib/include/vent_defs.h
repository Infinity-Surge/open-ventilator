
// SPDX-License-Identifier: GPL-2.0-only
/**
 *  @file: vent_defs.h
 *
 *  ventilator global definitions
 * 
 *  Copyright (C) 2020  Joe Turner <joe@agavemountain.com>
 */
#pragma once

//! \brief K factor for single branch pediatric (ml/cmH2O)
#define K_SINGLE_BRANCH_PEDIATRIC 0.3
//! \brief K factor for double branch pediatric (ml/cmH2O)
#define K_DOUBLE_BRANCH_PEDIATRIC 0.6
//! \brief K factor for single branch adult (ml/cmH2O)
#define K_SINGLE_BRANCH_ADULT 0.6
//! \brief K factor for double branch adult (ml/cmH2O)
#define K_DOUBLE_BRANCH_ADULT 1.2

//! Tubing compensation must be limited to 100ml
#define TUBING_COMPENSATION_LIMIT 100

#define BTPS_REFERENCE_TEMPERATURE 37
#define SLPM_REFERENCE_TEMPERATURE 21

//! Reference barometric pressure (in hPa)
#define SLPM_REFERENCE_PRESSURE 1013

//! INSP SENSE level is 1.2 l/min in CPAP mode
#define CPAP_INSP_SENS_LEVEL 1.2

//! Leak factor equivalent to a 4mm diameter leak
#define SQRT_4MM_LEAK_FACTOR 29
