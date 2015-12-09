#include <FastLED.h>

#include "animations.h"

// #define NLEDS 25

CRGB leds[NLEDS];

uint8_t current_time = 0;

void setup() {
	// initialize digital pin 13 as an output.
	pinMode(13, OUTPUT);
	// config inputs
	for (int i=0; i<12; i++){
		pinMode(i, INPUT_PULLUP);
		}
		
	// FastLED.addLeds<WS2801,GRB>(leds, NLEDS); // luz
	FastLED.addLeds<WS2801,RGB>(leds, NLEDS); // jblb_leds
	memset(leds, 0, NLEDS*3);
    FastLED.show();
    digitalWrite(13, LOW);
}

void loop() {
	memset(leds, 0, NLEDS*3);
	if (! digitalRead(6)) {
		move_up(leds, current_time);
	}
	else if (! digitalRead(7)) {
		my_rainbowwipe_updown(leds, current_time);
	}
	// rainbowwipe_ring(leds,current_time);
	// K2000(leds, current_time);
	// rainbowwipe_up(leds,current_time);
	else {
		pulse (leds, CRGB::Red, 25, current_time);
		}
	FastLED.show();

	delay(100);
	current_time++;
	pulse (leds, CRGB::Red, 25, current_time);
	digitalWrite(13, !digitalRead(13)); // change state of LED
}
