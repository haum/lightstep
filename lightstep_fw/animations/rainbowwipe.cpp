
#include "rainbowwipe.h"

void rainbowwipe_up(CRGB *leds, int time) {
	int height = (time/6)%4;
    for (int i=0; i < height; i++) {
        leds[column_luz[0][i]]=Wheel( (i * 256 / NLEDS ) % 255);
        // FastSPI_LED.show();   // write all the pixels out
        // delay(wait);
    }
}
