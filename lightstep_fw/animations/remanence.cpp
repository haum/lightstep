#include <FastLED.h>

#include "remanence.h"

#include "../ledconfig.h"

namespace
{
	uint8_t brightness(uint8_t step, const uint8_t height)
	{
		const uint8_t dimming = 127;
		if(height==step) {
			return 255;
			}
		else if(height<step) {
			uint8_t h = 255;
			for(uint8_t i = 0 ; i<(step-height) ; i++) {
				h = scale8(h, dimming) ;
			}
			return h ;
		}
		else {
			return 0 ;
		}
	}
}

void AnimationRemanence::animate(Framebuffer &leds, CHSV baseColor, const uint8_t step)
{
	uint8_t led_id = 24;

	for(int i=0; i<(LINES+1); ++i) {
		switch(i) {
			case 0:
				baseColor.value = brightness(step, 0);
				leds[led_id] = baseColor;
				break;
			default:
				const uint8_t line = i-1;
				for(uint8_t col=0; col<COLUMNS; ++col) {
					led_id = column_leds[col][line];
					baseColor.value = brightness(map(step, 0, 255, 0, LINES-1),line);
					//baseColor.value = brightness(step,map(line, 0, LINES-1, 0, 255));

					leds[led_id] = baseColor;
				}
		}
	}
}

