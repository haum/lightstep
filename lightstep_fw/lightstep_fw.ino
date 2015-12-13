#include <FastLED.h>

#include "ledconfig.h"

#include "animations.h"

CRGB leds[NLEDS];

uint8_t current_time = 0;
bool got_anim = false;

void setup() {
	Serial.begin(115200);
	// initialize digital pin 13 as an output.
	pinMode(13, OUTPUT);
	// config inputs
	for (int i=0; i<12; i++){
		pinMode(i, INPUT_PULLUP);
	}

	FastLED.addLeds<WS2801,LEDORDER>(leds, NLEDS);
	FastLED.clear();
	FastLED.show();

	initmoving();
	digitalWrite(13, LOW);
}

void loop() {
	FastLED.clear();
	got_anim = false;

	if (! digitalRead(7)) {
		got_anim =true;
		move_up(leds, CRGB::Green);
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
	if (! digitalRead(3)) {
		got_anim =true;
		move_down(leds, CRGB::Blue, current_time);
		// fill_garland_up (leds, CRGB::Orange, 1, current_time);
	}
	if (! digitalRead(2)) {
		got_anim =true;
	}
	fallinglight (leds, CRGB::Purple, 3, !digitalRead(2) );
	if (! digitalRead(1)) {
		got_anim =true;
	}
	movinguplight (leds, CRGB::Purple, 3, !digitalRead(1) );

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
#ifdef JBLB_LED
		pulse (leds, CRGB::Red, 25, current_time);
#endif
		pulse (leds, CRGB::Red, 24, current_time);
	}
	FastLED.show();
	FastLED.delay(10);

	current_time++;
	digitalWrite(13, !digitalRead(13)); // change state of LED
}

