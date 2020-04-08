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


/*! \defgroup compliance Pulmonary compliance
    \brief Pulmonary compliance (Lung compliance) and Resistance

Lung compliance, is a measure of the lung's elasisticy. In simple terms, pulmonary 
compliance is calculated using the following equation, where ΔV is the 
change in volume, and ΔP is the change in pleural pressure:
    \f[
       compliance = \frac{\Delta Volume}{\Delta Pressure}\\
    \f]

- Low compliance indicates a stiff lung (one with high elastic recoil) 
and can be thought of as a thick balloon – this is the case often seen 
in fibrosis. 

- Lungs with low compliance are stiff lungs and will require much 
greater pressure to reach a given volume compared to lungs that 
have high compliance.

- High compliance indicates a pliable lung (one with low elastic recoil) 
and can be thought of as a grocery bag – this is the case often seen 
in emphysema. 

- Compliance is highest at moderate lung volumes, and much lower at volumes 
which are very low or very high. The compliance of the lungs 
demonstrate lung hysteresis; that is, the compliance is different 
on inspiration and expiration for identical volumes.

- Normal chest wall compliance in adults is approximately 100-200ml/cm H2O. 

- Children have far lower chest wall compliance at 2.5-5.0ml/cm H2O.

### Static Compliance

Static compliance (\f$ C_{stat} \f$) is defined as the change in lung volume per unit change in 
pressure in the absence of flow. Because it represents compliance during 
periods without gas flow, it is usually measured during an inspiratory 
pause or inspiratory hold maneuver.

The equation is:
    \f[
       C_{stat} = \frac{V_T}{(P_{plat} - PEEP)}\\
    \f]

### Dynamic Compliance

Dynamic compliance (\f$ C_{dyn} \f$) is defined as the change in lung volume per unit change
in pressure at any given time during actual movement of air.

The equation is:
    \f[
    C_{dyn} = \frac{V_T}{(PIP - PEEP)}\\
    \f]
 
## Elastance

Elasticity is the tendency of a material to try to maintain its
shape and offer resistance to stretching forces. When interpreted according to Hooke’s
Law, elastance is defined in the following equation: 
    \f[
       E = \frac{\Delta P}{\Delta V}\\
    \f]

Where ∆P is the change in pressure applied to the lung and ∆V is the change in volume in the lung

## Resistance
Frictional resistance occurs when a air flows through the respiratory system. The resistance (R) 
of the tube corresponds to the ratio between the pressure difference (∆P) between the 
two extremities of the tube, and the flow rate (V') of the fluid :

    \f[
       R = \frac{\Delta P}{V'}\\
    \f]

*/

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
     *   C_{dyn} = \frac{V_T}{(PIP - PEEP)}\\
     * \f]
     * 
     * \param tidal_vol_ml  Tidal Volume (Vt) in mL
     * \param PIP           Peek Pressure in cmH2O
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
     * \brief Calculate Static Compliance (Cstat)
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
     *   C_{stat} = \frac{V_T}{(P_{plat} - PEEP)}\\
     * \f]
     * 
     * \param tidal_vol_ml  Tidal Volume (VT) in mL
     * \param Pplat         Plateau Pressure in cmH2O
     * \param PEEP          PEEP, in cmH2O
     * 
     * \returns
     * This function returns the calculated static compliance (Cst)
     */
    inline double static_compliance(double tidal_vol_ml, double Pplat, double PEEP)
    {
        return (tidal_vol_ml / (Pplat - PEEP));
    }

}
}
