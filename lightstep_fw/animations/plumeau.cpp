#include "plumeau.h"

#include "../ledconfig.h"

AnimationPlumeau::AnimationPlumeau():
	time(0),
	prescaler_counter(0)
{
}

void AnimationPlumeau::animate(Framebuffer &leds, CHSV baseColor, const uint8_t step) {
	uint8_t sup = map(triwave8(step), 0, 255, 0, LINES + 1);
	if (sup > 0)
		leds[24] = baseColor;
	for (uint8_t i = 0; i < sup; ++i) {
		uint8_t line = i >= LINES ? LINES - 1 : i;
		for (uint8_t j = 0; j < COLUMNS; ++j) {
			leds[column_leds[j][i]] = baseColor;
		}
		baseColor.hue += 255 / LINES;
	}
}
