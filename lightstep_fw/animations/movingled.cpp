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
uint8_t current_movsteep[4];

void initmoving() {
	memset(current_movsteep, 0, 5);
}

void move_up(CRGB *leds, struct CRGB color) {
	leds[current_movsteep[0]]=color;
	current_movsteep[0]++;
	if (current_movsteep[0] > NLEDS-1){
		current_movsteep[0]=0;
	}
}

void move_up(CRGB *leds, struct CRGB color, uint8_t time) {
	int led = time%NLEDS;
	leds[led]=color;
	}

void move_down(CRGB *leds,  struct CRGB color, uint8_t time) {
	int led = (NLEDS-1) - (time%NLEDS);
	leds[led]=color;
	}

void garland_up (CRGB *leds, struct CRGB color, int ngar, uint8_t time) {

	int led =time%GARLAND_LENGH;
	leds[garland_leds[ngar][led]]=color;
	}

void fill_garland_up (CRGB *leds, struct CRGB color, int ngar, uint8_t time) {

	int led =time%GARLAND_LENGH;
	for (int i=0; i <= led; i++) {
		leds[garland_leds[ngar][i]]=color;
		}
	}

void movinguplight (CRGB *leds, struct CRGB color, int ncol, boolean fall) {
	// LED of column  ncol go up
	if (!fall && current_movsteep[1] != LINES-2) {
		current_movsteep[1] = 0;
		}
	if (fall || current_movsteep[1] != 0 ) {
		leds[column_leds[ncol][current_movsteep[1]]]=color;
		if (current_movsteep[1] < LINES-1){
			current_movsteep[1]++;
			}
		}
	}

void fallinglight (CRGB *leds, struct CRGB color, int ncol, boolean fall) {
	// falling LED of column  ncol
	if (!fall && current_movsteep[2] != LINES-2) {
		current_movsteep[2] = 0;
		}
	if (fall || current_movsteep[2] != 0 ) {
		leds[column_leds[ncol][(LINES-1) - current_movsteep[2]]]=color;
		if (current_movsteep[2] < LINES-1){
			current_movsteep[2]++;
			}
		}
	}
