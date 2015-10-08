#include "framebuffer.h"

FrameBuffer::FrameBuffer(CRGB* leds) : leds(leds) {};

void FrameBuffer::set_led(uint8_t i, uint8_t r, uint8_t g, uint8_t b, uint8_t alpha) {

    if (i > NLEDS) return;

    leds[i].r = r;
    leds[i].g = g;
    leds[i].b = b;
}


