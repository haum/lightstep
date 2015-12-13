#ifndef __RAINBOWWIPE_H__
#define __RAINBOWWIPE_H__

#include <FastLED.h>

#include "../utils/wheel.h"

void rainbowwipe_up(CRGB *leds, int time);
void rainbowwipe_ring(CRGB *leds, int time);
void rainbowwipe_updown(CRGB *leds, int time);
void my_rainbowwipe_updown(CRGB *leds, int time);

#endif
