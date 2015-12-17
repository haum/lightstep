#ifndef __ANIMATION_ALIVE_H__
#define __ANIMATION_ALIVE_H__

#include "../animation.h"

class AnimationAlive : public Animation
{
public:
	void animate(Framebuffer &leds, CHSV baseColor, const uint8_t step);
};

#endif
