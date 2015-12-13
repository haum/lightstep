#ifndef __ANIMATION_H__
#define __ANIMATION_H__

#include <Arduino.h>

class Animation
{
public:
	virtual void init(CRGB *leds) {};
	virtual void animate(CRGB *leds, const CRGB baseColor, const uint8_t step) = 0;
};

#endif
