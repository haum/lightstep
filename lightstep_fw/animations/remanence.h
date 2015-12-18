#ifndef __ANIMATION_REMANENCE_H__
#define __ANIMATION_REMANENCE_H__

#include "../animation.h"

class AnimationRemanence : public Animation
{
public:
	void animate(Framebuffer &leds, CHSV baseColor, const uint8_t step);
};

#endif
