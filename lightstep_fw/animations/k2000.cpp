#include "k2000.h"

#include "../ledconfig.h"
#include "../utils/point.h"

namespace {
	uint8_t realLine(const uint8_t column, const uint8_t line) {
		return column%2 ? line*2 : (line*2)+1;
	}
}

void AnimationK2000::animate(Framebuffer &leds, CHSV baseColor, const uint8_t step)
{
	const uint8_t line_size = 255/(LINES*2);
	Point p1(triwave8((step*2)), line_size*2, CHSV(baseColor.hue, 255, 64));
	Point p2(triwave8((step*2)+line_size), line_size*2, CHSV(baseColor.hue+10, 255, 127));
	Point p3(triwave8((step*2)+(2*line_size)), line_size*2, CHSV(baseColor.hue+20, 255, 255));

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

