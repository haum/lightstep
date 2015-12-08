#include <FastLED.h>

#include "animations.h"

// #define NLEDS 25

CRGB leds[NLEDS];

uint8_t current_time = 0;

void setup() {
	FastLED.addLeds<WS2801,GRB>(leds, NLEDS);
	memset(leds, 0, NLEDS*3);
    FastLED.show();
}

void loop() {
    memset(leds, 0, NLEDS*3);

    // K2000(leds, current_time);
	rainbowwipe_up(leds,current_time);
    FastLED.show();

    delay(1000);
    current_time++;
}
