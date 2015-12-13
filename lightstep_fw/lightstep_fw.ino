#include <FastLED.h>

#include "ledconfig.h"

#include "animations.h"

/* Leds frambuffer */
CRGB leds[NLEDS];

/* Frame rolling counter */
uint8_t current_time = 0;

/* Number of steps used for color alteration */
const int color_steps_count = 4;

/* Incrementing value which is used to compute base_color */
uint32_t turning_hue = 0;

/* List of animations */
AnimationBreath breathing;
AnimationK2000 k2000;
AnimationRainbowWipe rainbowWipe;
Animation * animations[] = {
	&breathing,
	&k2000,
	&rainbowWipe,
};

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

	// Compute 'dwarf' numbers used to compute which animation and color to display
	bool dwarf_speedup = false;
	uint16_t dwarf_color = 0;
	uint16_t dwarf_animation = 0;
	if (!digitalRead(0))
		dwarf_speedup = true;
	for (int i = 1; i <= color_steps_count; ++i) {
		if (!digitalRead(i))
			dwarf_color += i;
	}
	for (int i = color_steps_count + 1; i < 13; ++i) {
		if (!digitalRead(i))
			dwarf_animation += i - color_steps_count;
	}

	// Choose base color
	uint8_t base_hue = ((uint8_t)(turning_hue >> 2)) + (dwarf_color << 4); // TODO: random formula to be changed
	CHSV base_color(base_hue, 255, 255);

	// Choose animation to display
	Animation * anim = &breathing;
	if (dwarf_animation != 0)
		anim = animations[dwarf_animation % (sizeof(animations)/sizeof(*animations))];

	// Animate
	anim->animate(leds, base_color, current_time);
	FastLED.show();
	FastLED.delay(10);

	// Loop counters
	current_time++;
	turning_hue += dwarf_speedup ? 3 : 1;

	// Alive indicator
	digitalWrite(13, !digitalRead(13));
}

