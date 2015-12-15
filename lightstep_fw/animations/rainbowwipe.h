#ifndef __RAINBOWWIPE_H__
#define __RAINBOWWIPE_H__

#include <FastLED.h>

#include "../animation.h"

class AnimationRainbowWipe : public Animation {
public:
	AnimationRainbowWipe();
	void animate(Framebuffer &leds, const CRGB baseColor, uint8_t step);
private:
	uint8_t time;
	uint8_t prescaler_counter;
};


#endif
