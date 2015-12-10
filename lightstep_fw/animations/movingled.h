#include "../ledconfig.h"
#include <FastLED.h>

void move_up(CRGB *leds, uint8_t time);
void move_down(CRGB *leds, uint8_t time);
void garland_up(CRGB *leds, struct CRGB color, int nled, uint8_t time);
void fill_garland_up (CRGB *leds, struct CRGB color, int ngar, uint8_t time);
