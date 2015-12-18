#ifndef __ANIMATION_K2000_H__
#define __ANIMATION_K2000_H__

#include "../animation.h"

class AnimationK2000 : public Animation
{
public:
	void animate(Framebuffer &leds, const CHSV baseColor, const uint8_t step);
};

#endif
