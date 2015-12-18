#ifndef __ANIMATION_CANDY_H__
#define __ANIMATION_CANDY_H__

#include "../animation.h"

class AnimationCandy : public Animation
{
public:
	void animate(Framebuffer &leds, const CHSV baseColor, const uint8_t step);
};

#endif
