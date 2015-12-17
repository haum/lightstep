#include "magicpoint.h"

#include "../ledconfig.h"

namespace {
	uint8_t realLine(const uint8_t column, const uint8_t line) {
		return column%2 ? line*2 : (line*2)+1;
	}
}

AnimationMagicPoint::AnimationMagicPoint() :
	p(0)
{
}

void AnimationMagicPoint::animate(Framebuffer & leds, CHSV baseColor, const uint8_t step) {
	if(sin8(step)>250) {
		p.setHSV(baseColor);
	}
	p.setZ(sin8(step));
	p.setRadius(120);

	for(uint8_t col=0; col<COLUMNS; ++col) {
		for(uint8_t line=0; line<LINES; ++line) {
			const uint8_t led_id = column_leds[col][line];
			CRGB color = p.computeCHSVFor(map(realLine(col, line), 0, 2*LINES, 0, 255));
			leds[led_id] = color;
		}
	}
}

