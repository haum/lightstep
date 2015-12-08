
#include "rainbowwipe.h"

void rainbowwipe_up(CRGB *leds, int time) {
	int height = (time)%6;
    for (int i=0; i <= height; i++) {
        leds[column_luz[3][i]]=Wheel( (i * 256 / NLEDS ) % 255);
    }
}

void rainbowwipe_ring(CRGB *leds, int time) {
	int height = (time)%7;
    for (int i=0; i <= height; i++) {
        for (int j=0; j< 4; j++) {
			leds[ring_luz[i][j]]=Wheel( (i * 256 / NLEDS ) % 255);
		}
    }
}
