#include "rainbowwipe.h"

#include "../ledconfig.h"
#include "../utils/wheel.h"

AnimationRainbowWipe::AnimationRainbowWipe():
	time(0),
	prescaler_counter(0)
{
}

void AnimationRainbowWipe::animate(Framebuffer &leds, CHSV baseColor, const uint8_t step) {
	prescaler_counter++;
	if (prescaler_counter%10 == 0) {
		prescaler_counter = 0;
		time++;
	}

	int height = time%LINES;
	if (time/LINES%2==0) {
		height = (LINES-1) - height;
	}
	for (int i=0; i <= height; i++) {
		for (int j=0; j<COLUMNS ; j++) {
			// leds[column_leds[j][i]]=Wheel( (i * 256 / LINES ) % 255);
			leds[column_leds[j][i]]= CHSV( ( (i * 256 / LINES ) % 255), 255, 255);

		}
	}
}
