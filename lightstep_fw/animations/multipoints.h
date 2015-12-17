#ifndef __ANIMATION_MUTLTIPOINTS_H__
#define __ANIMATION_MULTIPOINTS_H__

#include "../animation.h"

class AnimationMultiPoints : public Animation
{
public:
	void animate(Framebuffer &leds, const CHSV baseColor, const uint8_t step);
};

#endif
