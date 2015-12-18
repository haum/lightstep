#include "candy.h"

#include "../ledconfig.h"
#include "../utils/point.h"

namespace {
	uint8_t realLine(const uint8_t column, const uint8_t line) {
		return column%2 ? line*2 : (line*2)+1;
	}
}

void AnimationCandy::animate(Framebuffer &leds, CHSV baseColor, const uint8_t step)
{
	for(uint8_t i=0; i<GARLAND_LENGTH; ++i) {
		leds[garland_leds[0][i]] = CHSV(baseColor.hue, sin8(step*2), sin8(step));
		leds[garland_leds[1][i]] = CHSV(baseColor.hue, sin8(step*2+127), sin8(step+127));
	}
}

