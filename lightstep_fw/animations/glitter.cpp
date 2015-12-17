#include <FastLED.h>

#include "glitter.h"

AnimationGlitter::AnimationGlitter(): lightning_stroke(0) {}


void AnimationGlitter::animate(Framebuffer &leds, const CHSV baseColor, const uint8_t step)
{
    const int random_order1[32] = {9, 5, 18, 3, 16, 23, 10, 19, 4, 17, 0, 13, 7, 21, 22, 11, 2, 20, 6, 15, 14, 12, 1, 8, 4, 7, 12, 9, 9, 15, 17, 29};
    const int random_order2[32] = {11, 15, 10, 13, 2, 19, 14, 23, 22, 21, 16, 6, 20, 3, 4, 7, 1, 17, 5, 18, 12, 0, 8, 9, 9, 18, 12, 2, 3, 8, 13, 22};

    if (step==lightning_stroke || step==lightning_stroke+18) {
            for (int j=0; j < 25; j++) {
                leds[j].setHSV(0xff, 0x00, 0x88);
            }

            lightning_stroke -= random_order1[step%32]*3;

    } else {
        int idx = (step/2)%32;
        leds[random_order1[idx]] = baseColor;
        leds[random_order2[idx]] = baseColor;
    }
}

