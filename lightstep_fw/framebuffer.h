#ifndef _FRAMEBUFFER_H_
#define _FRAMEBUFFER_H_

#include <FastLED.h>
#include "ledconfig.h"

class Framebuffer {
private:
	CRGB leds[NLEDS];
	CRGB dummy;
public:
	void init() {
		FastLED.addLeds<WS2801,LEDORDER>(leds, NLEDS);
	}
	CRGB & operator [] (int index) {
		if (index >= 0 && index < NLEDS) {
			return leds[index];
		}
		return dummy;
	}
};

#endif
