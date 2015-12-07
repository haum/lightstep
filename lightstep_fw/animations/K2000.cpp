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


void K2000(CRGB *leds, int time) {

    int column_num = time%6;
    int height = (time/6)%4;

    leds[column_luz[height][column_num]].setRGB(0xff, 0xff, 0xff);
    // leds[column_luz[2][height]].setRGB(0xff, 0xff, 0xff);
}


