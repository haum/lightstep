#ifndef __PLUMEAU_H__
#define __PLUMEAU_H__

#include <FastLED.h>

#include "../animation.h"

class AnimationPlumeau : public Animation {
public:
	AnimationPlumeau();
	void animate(Framebuffer &leds, CHSV baseColor, uint8_t step);
private:
	uint8_t time;
	uint8_t prescaler_counter;
};


#endif
