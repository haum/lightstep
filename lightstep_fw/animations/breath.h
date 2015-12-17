#ifndef __ANIMATION_BREATH_H__
#define __ANIMATION_BREATH_H__

#include "../animation.h"

class AnimationBreath : public Animation
{
public:
	void animate(Framebuffer &leds, CHSV baseColor, const uint8_t step);
};

#endif
