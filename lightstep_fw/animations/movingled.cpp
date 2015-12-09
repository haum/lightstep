/*
 * movingled.cpp
 *
 * Copyright (C) 2015 jerome breheret jblb <jerome@jblb.net>
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

#include "movingled.h"

void move_up(CRGB *leds, uint8_t time) {
	int led = time%NLEDS;
	leds[led].setRGB(0xff, 0x00, 0x00);
	}

void move_down(CRGB *leds, uint8_t time) {

	}


