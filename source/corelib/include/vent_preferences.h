
// SPDX-License-Identifier: GPL-2.0-only
/**
 *  @file: vent_preferences.h
 *
 *  Alarm Buzzer control
 * 
 *  Copyright (C) 2020  Joe Turner <joe@agavemountain.com>
 */
#pragma once

enum eKeySound
{
    //! \brief Key sound OFF
    //! If KEY SOUND is set to "OFF" in the PREFERENCE MENU, the software must 
    //! not trigger any sound when a key is pressed (except ventilation key) 
    //! nor when USB free space calculation ends.
    KEY_SOUND_OFF = 0x00,

    //! \brief Key Tone
    //! If KEY SOUND is set to "key tone" in the PREFERENCE MENU, the software 
    //! must trigger a navigation sound (click) when any key is pressed.
    KEY_SOUND_KEY_TONE = 0x01,

    //! If KEY SOUND is set to "accept tone" in the PREFERENCE MENU, the 
    //! software must trigger a validation short beep when the VALIDATION 
    //! KEY is pressed to validate a setting and when USB free space calculation 
    //! ends.
    KEY_SOUND_ACCEPT = 0x02,

    //! If KEY SOUND is set to "all tones on" in the PREFERENCE MENU, the 
    //! software must trigger a validation short beep when the VALIDATION KEY 
    //! is pressed, a short beep when USB free space calculation ends and a 
    //! navigation sound (click) when any other key is pressed.
    KEY_SOUND_ALL_TONES = 0x03,
};
