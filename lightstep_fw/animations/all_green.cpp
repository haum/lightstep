#include "all_green.h"

void AllGreen::animate() {}

void AllGreen::draw(FrameBuffer *fb) {
    // if (triggered) {
    for (int i = 0; i < NLEDS ; i++) {
        fb->set_led(i, 0, 0xff, 0, 0xff);
    }
    // }
}
