#include "plumeau.h"

#include "../ledconfig.h"

AnimationPlumeau::AnimationPlumeau():
	time(0),
	prescaler_counter(0)
{
}

void AnimationPlumeau::animate(Framebuffer &leds, CHSV baseColor, const uint8_t step) {
	uint8_t tristep = triwave8(step);
	uint8_t sup = map(tristep, 0, 255, 0, LINES + 1);
	if (sup > 0)
		leds[24] = baseColor;
	for (uint8_t i = 0; i < sup; ++i) {
		uint8_t line = i >= LINES ? LINES - 1 : i;
		CHSV color = baseColor;
		if (i == sup -1)
			color.value = map(tristep - i * (255 / LINES), 0, 255/LINES, 0, 255);
		for (uint8_t j = 0; j < COLUMNS; ++j) {
			leds[column_leds[j][i]] = color;
		}
		baseColor.hue += 255 / LINES;
	}
}
