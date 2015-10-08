#include "animation.h"

void Animation::init() {}

void Animation::trigger(bool stop) {
    triggered = !stop;
}
