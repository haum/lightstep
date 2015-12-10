
#include "rainbowwipe.h"

void rainbowwipe_up(CRGB *leds, int time) {
	int height = (time)%6;
    for (int i=0; i <= height; i++) {
        leds[column_leds[3][i]]=Wheel( (i * 256 / NLEDS ) % 255);
    }
}

void rainbowwipe_ring(CRGB *leds, int time) {
	int height = (time)%7;
    for (int i=0; i <= height; i++) {
        for (int j=0; j< 4; j++) {
			leds[ring_leds[i][j]]=Wheel( (i * 256 / NLEDS ) % 255);
		}
    }
}

void rainbowwipe_updown(CRGB *leds, int time) {
    int height = time%7;
    if (time/7%2==0) {
        height = 6 - height;
    }
	for (int i=0; i <= height; i++) {
		for (int j=0; j<4 ; j++) {
			leds[ring_leds[i][j]]=Wheel( (i * 256 / 7 ) % 255);
		}
    }
}
void my_rainbowwipe_updown(CRGB *leds, int time) {
    int height = time%6;
    if (time/6%2==0) {
        height = 5 - height;
    }
	for (int i=0; i <= height; i++) {
		for (int j=0; j<4 ; j++) {
			leds[column_leds[j][i]]=Wheel( (i * 256 / 6 ) % 255);
		}
    }
}
