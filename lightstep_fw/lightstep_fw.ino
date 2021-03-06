#include <FastLED.h>
#include <avr/wdt.h>

#include "ledconfig.h"

#include "animations.h"

#include "framebuffer.h"

/* Leds frambuffer */
Framebuffer fb;

/* Frame rolling counter */
uint8_t current_time = 0;

/* Number of stairs used for color alteration */
const int color_stairs_count = 4;

/* Incrementing value which is used to compute base_color */
uint32_t turning_hue = 0;

/* List of animations */
AnimationAlive alive;
AnimationBreath breathing;
AnimationCandy candy;
AnimationGlitter glitter;
AnimationK2000 k2000;
AnimationMagicPoint magicpoint;
AnimationMoveUp moveUp;
AnimationMultiPoints multipoints;
AnimationPlumeau plumeau;
AnimationRemanence remanence;
AnimationSnake snake;
AnimationWipeUp wipeup;

Animation * animations[] = {
	&alive,
	&breathing,
	&candy,
	&glitter,
	&k2000,
	&magicpoint,
	//&moveUp,
	&multipoints,
	&plumeau,
	//&remanence,
	&snake,
	&wipeup,
};

void setup() {
	Serial.begin(115200);
	wdt_enable(WDTO_500MS);

	// Config inputs with pull-ups
	for (int i = 0; i <= 13; ++i)
		pinMode(i, INPUT_PULLUP);
	for (int i = A0; i <= A5; ++i)
		pinMode(i, INPUT_PULLUP);

	fb.init();
	FastLED.setBrightness(255);
	FastLED.clear();
	FastLED.show();
}

void loop() {
	FastLED.clear();

	// Compute 'dwarf' numbers used to compute which animation and color to display
	bool dwarf_speedup = false;
	uint16_t dwarf_color = 0;
	uint16_t dwarf_animation = 0;
	if (!digitalRead(0))
		dwarf_speedup = true;
	for (int i = 1; i <= color_stairs_count; ++i) {
		if (!digitalRead(i))
			dwarf_color += i;
	}
	for (int i = color_stairs_count + 1; i <= 13; ++i) {
		if (!digitalRead(i))
			dwarf_animation += i - color_stairs_count;
	}
	for (int i = A0; i <= A5; ++i) {
		if (!digitalRead(i))
			dwarf_animation += i - A0 + 1;
	}
	dwarf_animation += turning_hue >> 15;

	// Choose base color
	uint8_t base_hue = ((uint8_t)(turning_hue >> 4)) + (dwarf_color << 5); // TODO: random formula to be changed
	CHSV base_color(base_hue, 255, 255);

	// Choose animation to display
	Animation * anim = &alive;
	if (dwarf_animation != 0)
		anim = animations[dwarf_animation % (sizeof(animations)/sizeof(*animations))];

	// Animate
	anim->animate(fb, base_color, current_time);
	FastLED.show();
	FastLED.delay(10);

	// Loop counters
	current_time++;
	turning_hue += dwarf_speedup ? 3 : 1;

	// Watchdog reset
	wdt_reset();
}

