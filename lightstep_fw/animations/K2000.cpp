/*
 * K2000.cpp
 *
 * Copyright (C) 2015 Mathieu Gaborit (matael) <mathieu@matael.org>
 *
 *
 * Distributed under WTFPL terms
 *
 *            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
 *                    Version 2, December 2004
 *
 * Copyright (C) 2004 Sam Hocevar <sam@hocevar.net>
 *
 * Everyone is permitted to copy and distribute verbatim or modified
 * copies of this license document, and changing it is allowed as long
 * as the name is changed.
 *
 *            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
 *   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION
 *
 *  0. You just DO WHAT THE FUCK YOU WANT TO.
 *
 */

#include "K2000.h"

#include "../ledconfig.h"


void K2000(CRGB *leds, uint8_t time) {

    int height = time%7;
    int height_trace = height-1;

    if (time/7%2==0) {
        height = 6 - height;
        height_trace = 6 - height_trace;
    }

    if (height_trace == -1) height_trace = 0;
    if (height_trace == 7) height_trace = 6;

    for (int j=0; j<4 ; j++) {
        leds[ring_leds[height_trace][j]].setRGB(255*0.05, 0x00, 0x00);
        leds[ring_leds[height][j]].setRGB(0xff, 0x00, 0x00);
    }
}


