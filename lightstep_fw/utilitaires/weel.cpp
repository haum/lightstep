
#include "weel.h"

//Input a value 0 to 255 to get a color value.
//The colours are a transition r - g -b - back to r
struct CRGB Wheel(byte WheelPos) {
    CRGB l_rgb;
    if (WheelPos < 85) {
        l_rgb.r = WheelPos * 3;
        l_rgb.g = 255 - WheelPos * 3;
        l_rgb.b= 0;
        return l_rgb;
    }
    else if (WheelPos < 170) {
        WheelPos -= 85;
        l_rgb.r = 255 - WheelPos * 3;
        l_rgb.g = 0;
        l_rgb.b =  WheelPos * 3;
        return l_rgb;
    }
    else {
        WheelPos -= 170;
        l_rgb.r = 0;
        l_rgb.g = WheelPos * 3;
        l_rgb.b =  255 - WheelPos * 3;
        return l_rgb;
    }
}
