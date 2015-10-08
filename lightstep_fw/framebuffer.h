#ifndef __framebuffer_h__
#define __framebuffer_h__

#include "khroma.h"

class FrameBuffer {
    public:

        explicit FrameBuffer(CRGB *leds);

        /*
         * Set one LED to a given color
         *
         * @param i position
         * @param r,g,b color
         * @param alpha transparency (0xff is opaque)
         *
         * */
		void set_led(uint8_t i, uint8_t r, uint8_t g, uint8_t b, uint8_t alpha);

    private:

        CRGB *leds; // Led Strip pointer

};

#endif /* !__framebuffer_h__ */

