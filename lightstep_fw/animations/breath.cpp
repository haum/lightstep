#include <FastLED.h>

#include "breath.h"

void AnimationBreath::init(CRGB *leds)
{
}

void AnimationBreath::animate(CRGB *leds, const CRGB baseColor, const uint8_t step)
{
	const uint8_t led_id = 24;
	leds[led_id] = baseColor;

	int brightness = (step < 128) ? ((127-step)*2) : ((step-128)*2);
	leds[led_id].fadeToBlackBy(brightness);
}

