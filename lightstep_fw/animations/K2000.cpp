#include "K2000.h"

#include "../ledconfig.h"

AnimationK2000::AnimationK2000():
	time(0)
{
}

void AnimationK2000::animate(CRGB *leds, const CRGB baseColor, const uint8_t step) {
	static uint8_t slowme = 0;
	slowme++; if (slowme%10 == 0) {
		slowme = 0;
		time++;
	}

	int height = time%7;
	int height_trace = height-1;

	if (time/7%2==0) {
		height = 6 - height;
		height_trace = 6 - height_trace;
	}

	if (height_trace == -1) height_trace = 0;
	if (height_trace == 7) height_trace = 6;

	for (int j=0; j<4 ; j++) {
		leds[ring_leds[height_trace][j]].setRGB(baseColor.r/(j+1), baseColor.g/(j+1), baseColor.b/(j+1));
		leds[ring_leds[height][j]].setRGB(baseColor.r, baseColor.g, baseColor.b);
	}
}


