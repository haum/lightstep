#include "K2000.h"

#include "../ledconfig.h"

AnimationK2000::AnimationK2000():
	time(0),
	prescaler_counter(0)
{
}

void AnimationK2000::animate(Framebuffer & leds, CHSV baseColor, const uint8_t step) {
	prescaler_counter++;
	if (prescaler_counter%10 == 0) {
		prescaler_counter = 0;
		time++;
	}

	int height = time%LINES;
	int height_trace = height-1;

	if (time/RINGS%2==0) {
		height = (RINGS-1) - height;
		height_trace = (RINGS-1) - height_trace;
	}

	if (height_trace == -1) height_trace = 0;
	if (height_trace == RINGS) height_trace = (RINGS-1);

	for (int j=0; j<COLUMNS ; j++) {
		leds[ring_leds[height_trace][j]] = baseColor;
		leds[ring_leds[height][j]] = baseColor;
	}
}


