#include "khroma.h"
#include "framebuffer.h"

// Animations
#include "animations/all_green.h"

CRGB leds[NLEDS];
PolychrHAUM khroma;
FrameBuffer fb(leds);

AllGreen all_green;

void animate() {
    //animate
	all_green.animate();

    // trig
    all_green.trigger(digitalRead(0));

    // draw
    all_green.draw(&fb);
}

void setup() {
	FastLED.addLeds<WS2801, BGR>(leds, NLEDS);
	khroma.config_animate(animate);
	khroma.setup();
}

void loop() {
	khroma.loop_step();
}

