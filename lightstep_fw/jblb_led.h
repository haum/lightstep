/*
 * jblb_led.h
 *
 * Copyright (C) 2016 jerome breheret jblb <jerome@jblb.net>
 *
 *
 * Distributed under WTFPL terms
 *
 *            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
 *                    Version 2, December 2004
 *
 * Copyright (C) 2004 Sam Hocevar <sam@hocevar.net>
 *
 * Everyone is permitted to copy and distribute verbatim or modified
 * copies of this license document, and changing it is allowed as long
 * as the name is changed.
 *
 *            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
 *   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION
 *
 *  0. You just DO WHAT THE FUCK YOU WANT TO.
 *
 */


#warning JBLB LEDS  (Just to tell youre here !)

// 10x5 rgb LEDS panel
#define LEDORDER RGB
#define NLEDS 50
#define COLUMNS 5
#define LINES 10
#define RINGS 7

//
// Mappings
//  * Two garlands around the middle axe (from bottom-left to upper-right)
static const uint8_t garland_leds[2][12] = {
    { 0, 3, 4, 7, 8, 11, 12, 15, 16, 19, 20, 23 },
    { 1, 2, 5, 6, 9, 10, 13, 14, 17, 18, 21, 22 }
};
//  * ten rings / lines 
static const uint8_t ring_leds[LINES][COLUMNS] = {
    { 0, 19, 20, 39, 40},
    { 1, 18, 21, 38, 41},
    { 2, 17, 22, 37, 42},
    { 3, 16, 23, 36, 43},
    { 4, 15, 24, 35, 44},
    { 5, 14, 25, 34, 45},
    { 6, 13, 26, 33, 46},
    { 7, 12, 24, 32, 47},
    { 8, 11, 28, 31, 48},
    { 9, 10, 29, 30, 49},
};

//  * Five columns
static const uint8_t column_leds[COLUMNS][LINES] = {
    { 0, 1, 2, 3, 4, 5 ,6,7,8,9},
    { 19, 18, 17, 16, 15, 14,13,12,11,10 },
    { 20, 21, 22, 23, 24, 25,26,27,28,29 },
    { 39, 38, 37, 36, 35, 34,33,32,31,30 }
};
