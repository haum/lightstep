#include <FastLED.h>

#include "breath.h"

#include "../ledconfig.h"

uint8_t brightness(uint8_t step, const uint8_t height)
{
	const uint8_t kN = 64 ;
	const uint8_t scaledKN = scale8(kN, height);
	if(step <= 127) {
		if(step < scaledKN) {
			return 0;
		}
		else if(step>scaledKN+127-kN) {
			return 255;
		}
		return map(step, scaledKN, scaledKN+127-kN, 0, 255);
	}
	else {
		step = 255 - step ;
		if(step<kN) {
			return 0;
		}
		return map(step, 127, 127-kN, 255, 0);
	}
}

void AnimationBreath::animate(Framebuffer &leds, CHSV baseColor, const uint8_t step)
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
					baseColor.value = brightness(step, map(line, 0, LINES-1, 0, 255));
					leds[led_id] = baseColor;
				}
		}
	}
}

