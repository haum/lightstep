#include <FastLED.h>

// define organsation for LEDS see luz.h

#include "ledconfig.h"

#include "animations.h"

// #define NLEDS 25

CRGB leds[NLEDS];

uint8_t current_time = 0;
boolean got_anim;

void setup() {
	// initialize digital pin 13 as an output.
	pinMode(13, OUTPUT);
	// config inputs
	for (int i=0; i<12; i++){
		pinMode(i, INPUT_PULLUP);
		}
		
	FastLED.addLeds<WS2801,LEDORDER>(leds, NLEDS);
	memset(leds, 0, NLEDS*3);
    FastLED.show();
    digitalWrite(13, LOW);
}

void loop() {
	memset(leds, 0, NLEDS*3);
	got_anim = false;
	
	if (! digitalRead(7)) {
		got_anim =true; 
		move_up(leds, current_time);
	}
	if (! digitalRead(6)) {
		got_anim =true; 
		my_rainbowwipe_updown(leds, current_time);
	}
	if (! digitalRead(5)) {
		got_anim =true; 
		garland_up (leds, CRGB::Blue, 0, current_time);
	}
	if (! digitalRead(4)) {
		got_anim =true; 
		fill_garland_up (leds, CRGB::Orange, 1, current_time);
	}

	// rainbowwipe_ring(leds,current_time);
	// K2000(leds, current_time);
	// rainbowwipe_up(leds,current_time);
	if (! got_anim ) {
		/*
		 * Pulse to show life when nothing animate
		 * hardcoded for jblb led's
		 * 
		 * TODO take value by config
		 *
		 */
#ifdef __JBLB_LED__
		pulse (leds, CRGB::Red, 25, current_time);
#endif
		pulse (leds, CRGB::Red, 24, current_time);
		}
	FastLED.show();

	delay(100);
	current_time++;
	digitalWrite(13, !digitalRead(13)); // change state of LED
}
