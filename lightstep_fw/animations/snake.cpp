#include "snake.h"

#include "../ledconfig.h"
#include "../utils/point.h"

namespace {
	uint8_t cyclicGarland(const uint8_t id) {
		uint8_t n = id / GARLAND_LENGTH;
		uint8_t g = id % GARLAND_LENGTH;
		if(id<GARLAND_LENGTH) {
			g = id % GARLAND_LENGTH;
		} else if(id==GARLAND_LENGTH) {
			return 24;
		} else {
			g = (GARLAND_LENGTH-1) - ((id-1) % GARLAND_LENGTH);
			if (g%2) n=1;
		}
		return garland_leds[n][g];
	}
}

AnimationSnake::AnimationSnake()
{
	for(uint8_t i=0; i<(sizeof(_led_id)/sizeof(*_led_id)); ++i) {
		_led_id[i] = i;
	}
}

void AnimationSnake::animate(Framebuffer &leds, CHSV baseColor, const uint8_t step)
{
	const uint8_t led_count = sizeof(_led_id)/sizeof(*_led_id);
	for(uint8_t i=0; i<led_count; ++i) {
		leds[cyclicGarland(_led_id[i])] = CHSV(baseColor.hue, 255, map(i, 0, led_count, 255, 0));
	}
	if ((step%8)==0) {
		for(uint8_t i = led_count; i>0; --i) {
			_led_id[i] = _led_id[i-1];
		}
		_led_id[0] = (_led_id[0] + 1) % ((GARLAND_COUNT * GARLAND_LENGTH)+1);
  }
}

