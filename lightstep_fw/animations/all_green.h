#ifndef __all_green_h__
#define __all_green_h__

#include "animation.h"

class AllGreen : public Animation {
	public:

		/* Update values for next step */
		virtual void animate();

		/* Actual drawing on LED strip */
		virtual void draw(FrameBuffer *leds);

};

#endif /* !__all_green_h__ */
