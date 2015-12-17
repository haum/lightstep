#ifndef __ANIMATION_GLITTER_H__
#define __ANIMATION_GLITTER_H__

#include "../animation.h"

class AnimationGlitter : public Animation
{
private:
    uint8_t lightning_stroke;
public:
    AnimationGlitter();
	void animate(Framebuffer &leds, const CHSV baseColor, const uint8_t step);
};

#endif
