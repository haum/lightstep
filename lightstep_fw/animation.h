#ifndef __ANIMATION_H__
#define __ANIMATION_H__

#include <Arduino.h>
#include "framebuffer.h"

class Animation
{
public:
	virtual void animate(Framebuffer & leds, CHSV baseColor, const uint8_t step) = 0;
};

#endif
