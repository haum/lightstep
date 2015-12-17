#include "multipoints.h"

#include "../ledconfig.h"
#include "../utils/point.h"

namespace {
	uint8_t realLine(const uint8_t column, const uint8_t line) {
		return column%2 ? line*2 : (line*2)+1;
	}
}

void AnimationMultiPoints::animate(Framebuffer &leds, CHSV baseColor, const uint8_t step)
{
	Point p1(sin8(step), 42, CHSV(HUE_RED+baseColor.hue, 0, 255));
	Point p2(sin8(255-step), 64, CHSV(HUE_BLUE+baseColor.hue, 255, 255));
	Point p3(sin8(127-step), 32, CHSV(HUE_GREEN+baseColor.hue, 255, 255));

	for(uint8_t col=0; col<COLUMNS; ++col) {
		for(uint8_t line=0; line<LINES; ++line) {
			const uint8_t led_id = column_leds[col][line];
			CRGB color = p1.computeCHSVFor(map(realLine(col, line), 0, 2*LINES, 0, 255));
			color += p2.computeCHSVFor(map(realLine(col, line), 0, 2*LINES, 0, 255));
			color += p3.computeCHSVFor(map(realLine(col, line), 0, 2*LINES, 0, 255));
			leds[led_id] = color;
		}
	}
}

