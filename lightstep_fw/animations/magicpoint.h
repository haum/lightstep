#ifndef __MAGICPOINT_H__
#define __MAGICPOINT_H__

#include "../animation.h"
#include "../utils/point.h"

class AnimationMagicPoint : public Animation {
public:
	AnimationMagicPoint();
	void animate(Framebuffer & leds, CHSV baseColor, const uint8_t step);
private:
	Point p;
};

#endif
