#ifndef __animation_h__
#define __animation_h__

#include "../khroma.h"
#include "../framebuffer.h"

class Animation {
	public:

		/* Initialization process */
		virtual void init();

		/* Update values for next step */
		virtual void animate() = 0;

		/* Actual drawing on LED strip */
		virtual void draw(FrameBuffer *fb) = 0;

		/* Start/stop animation */
		virtual void trigger(bool stop=false);

	protected:


		bool triggered;

};

#endif /* !__animation_h__ */

