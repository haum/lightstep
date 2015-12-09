#include <Arduino.h>
#define TIME_FRAME 0xFF
#define NLEDS 50
#ifndef __LUZ__
#define __LUZ__
//
// Mappings
//  * Two garlands around the middle axe (from bottom-left to upper-right)
static const uint8_t garland_luz[2][12] = {
    { 0, 3, 4, 7, 8, 11, 12, 15, 16, 19, 20, 23 },
    { 1, 2, 5, 6, 9, 10, 13, 14, 17, 18, 21, 22 }
};
//  * Four columns (Front, Right, Left, Back)
static const uint8_t column_luz[4][6] = {
    { 20, 17, 12, 9, 4, 1 },
    { 22, 19, 14, 11, 6, 3 },
    { 21, 16, 13, 8, 5, 0 },
    { 23, 18, 15, 10, 7, 2 }
};
//  * seven inclined rings (from bottom-left to upper-right)
static const uint8_t ring_luz[7][4] = {
    { 0, 1, 3, 0},
    { 5, 4, 6, 2},
    { 8, 9, 11, 7},
    { 13, 12, 14, 10},
    { 16, 17, 19, 15},
    { 21, 20, 22, 18},
    { 23, 24, 24, 23},
};
//  * Four columns (Front, Right, Left, Back)
static const uint8_t column_jblb[4][6] = {
    { 0, 1, 2, 3, 4, 5 },
    { 19, 18, 17, 16, 15, 14 },
    { 20, 21, 22, 23, 24, 25 },
    { 39, 38, 37, 36, 35, 34 }
};
#endif
