#include <FastLED.h>

#include "breath.h"

void AnimationBreath::init(CRGB *leds)
{
}

void AnimationBreath::animate(CRGB *leds, const uint8_t step)
{
	CRGB start(0xff, 0x00, 0x00);
	const uint8_t led_id = 24;
	leds[led_id] = start;

	int brightness = (step < 128) ? ((127-step)*2) : ((step-128)*2);
	leds[led_id].fadeToBlackBy(brightness);
}

