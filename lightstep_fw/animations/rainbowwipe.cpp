#include "rainbowwipe.h"

#include "../ledconfig.h"

void my_rainbowwipe_updown(CRGB *leds, int time) {
	int height = time%LINES;
	if (time/LINES%2==0) {
		height = (LINES-1) - height;
	}
	for (int i=0; i <= height; i++) {
		for (int j=0; j<COLUMNS ; j++) {
			leds[column_leds[j][i]]=Wheel( (i * 256 / LINES ) % 255);
		}
	}
}
