#include <FastLED.h>

#include "alive.h"

#include "../ledconfig.h"
#include "../utils/point.h"

namespace {
	uint8_t realLine(const uint8_t column, const uint8_t line) {
		return column%2 ? line*2 : (line*2)+1;
	}
}

void AnimationAlive::animate(Framebuffer &leds, CHSV baseColor, const uint8_t step)
{
	baseColor.val = triwave8(step);
	leds[24] = baseColor;
	Point p(0, 80, baseColor);

	for(uint8_t col=0; col<COLUMNS; ++col) {
		for(uint8_t line=0; line<LINES; ++line) {
			const uint8_t led_id = column_leds[col][line];
			leds[led_id] = p.computeCHSVFor(map(realLine(col, line), 0, 2*LINES, 0, 255));
		}
	}
/*
	for (int lin = 0; lin < LINES; ++lin) {
		for (int col = 0; col < COLUMNS; ++col)
			leds[column_leds[col][lin]] = baseColor;
		baseColor.val /= 4;
	}
*/
}

