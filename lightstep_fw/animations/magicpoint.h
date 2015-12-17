#ifndef __ANIMATION_MAGICPOINT_H__
#define __ANIMATION_MAGICPOINT_H__

#include "../animation.h"

class AnimationMagicPoint : public Animation
{
public:
	void animate(Framebuffer &leds, const CHSV baseColor, const uint8_t step);
};

#endif
