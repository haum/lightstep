#ifndef __K2000_H__
#define __K2000_H__

#include <FastLED.h>

class AnimationK2000 {
public:
	AnimationK2000();
	void animate(CRGB *leds, const CRGB baseColor, const uint8_t step);
private:
	uint8_t time;
	uint8_t prescaler_counter;
};

#endif
