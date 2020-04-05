// SPDX-License-Identifier: GPL-2.0-only
/**
 *  @file: compliance.h
 *
 *  Compliance calculations
 * 
 *  Copyright (C) 2020  Joe Turner <joe@agavemountain.com>
 */
#pragma once

namespace ovp {
namespace math {

    /**
     * \brief Calculate Dynamic Compliance (Cdyn)
     * 
     * This function will calculate dynamic compliance.
     * 
     * Dynamic compliance is defined as the change in lung volume per unit change in pressure in the presence of flow. Its components are
     * - Chest wall compliance
     * - Lung tissue compliance
     * - Airway resistance (which makes it frequency-dependent)
     * 
     * The equation is:
     * \f[
     *   C_{dyn} = \frac{Tidal Volume}{(Peak Pressure - PEEP)}\\
     * \f]
     * 
     * \param tidal_vol_ml  Tidal Volume (VT) in mL
     * \param PPL           Peek Pressure in cmH2O
     * \param PEEP          PEEP, in cmH2O
     * 
     * \returns
     * This function returns the calculated dynamic compliance (Cdyn)
     */
    inline double dynamic_compliance(double tidal_vol_ml, double PIP, double PEEP)
    {
        return (tidal_vol_ml / (PIP - PEEP));
    }

    /**
     * \brief Calculate Static Compliance (Cst)
     * 
     * This function will calculate static compliance.
     * 
     * Static compliance is defined as the change in lung volume per unit change in pressure in the absence of flow. 
     * It is composed of:
     * 
     * - Chest wall compliance (usually 200ml/cm H2O.
     * - Lung tissue compliance (also usually cm H2O.)
     * 
     * The equation is:
     * \f[
     *   C_{st} = \frac{Tidal Volume}{(Peak Pressure - PEEP)}\\
     * \f]
     * 
     * \param tidal_vol_ml  Tidal Volume (VT) in mL
     * \param PPL           Plateau Pressure in cmH2O
     * \param PEEP          PEEP, in cmH2O
     * 
     * \returns
     * This function returns the calculated static compliance (Cst)
     */
    inline double static_compliance(double tidal_vol_ml, double PPL, double PEEP)
    {
        return (tidal_vol_ml / (PPL - PEEP));
    }

}
}
