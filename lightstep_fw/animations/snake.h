#ifndef __ANIMATION_SNAKE_H__
#define __ANIMATION_SNAKE_H__

#include "../animation.h"

class AnimationSnake : public Animation
{
	public:
		AnimationSnake();
		void animate(Framebuffer &leds, const CHSV baseColor, const uint8_t step);
	private:
		uint8_t _led_id[7];
};

#endif
