/*
 * changingled.cpp
 *
 * Copyright (C) 2016 Jerome Breheret jblb <jerome@jblb.net>
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

#include "changingled.h"


void pulse(CRGB *leds, struct CRGB color, int nled, uint8_t time) {
	int brigth = time % 64;
	leds[nled].r= ((color.r * brigth/64 ) % 255);
	leds[nled].g= ((color.g * brigth/64 ) % 255);
	leds[nled].b= ((color.b * brigth/642) % 255);
}


