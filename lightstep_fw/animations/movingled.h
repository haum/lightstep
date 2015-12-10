#include "../ledconfig.h"
#include <FastLED.h>

void initmoving();
void move_up(CRGB *leds, struct CRGB color, uint8_t time);
void move_up(CRGB *leds, struct CRGB color);
void move_down(CRGB *leds, struct CRGB color, uint8_t time);
void garland_up(CRGB *leds, struct CRGB color, int nled, uint8_t time);
void fill_garland_up (CRGB *leds, struct CRGB color, int ngar, uint8_t time);
void fallinglight (CRGB *leds, struct CRGB color, int ncol, uint8_t time);
