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

// 10x5 rgb LEDS panel
#define LEDORDER RGB
#define NLEDS 50
#define COLUMNS 5
#define LINES 10
#define RINGS 10
#define GARLAND_LENGTH 37
#define GARLAND_COUNT 2

//
// Mappings
//  * Two garlands 
static const uint8_t garland_leds[GARLAND_COUNT][GARLAND_LENGTH] = {
    { 0, 18, 22, 36, 44, 34, 26, 12, 8, 10, 28, 32, 46, 34, 24, 16, 2, 18, 20, 38, 42, 36, 24, 14, 6, 12, 28, 30, 48, 32, 26, 14, 4, 16, 22, 38, 40 },
    { 9, 11, 27, 33, 45, 35, 23, 17, 1, 19, 21, 37, 43, 35, 25, 13, 7, 11, 29, 31, 47, 33, 25, 15, 3, 17, 21, 39, 41, 37, 23, 15, 5, 13, 27, 31, 49 }
};
//  * ten rings / lines ( from bottom rigth to top left )
static const uint8_t ring_leds[LINES][COLUMNS] = {
    { 0, 19, 20, 39, 40},
    { 1, 18, 21, 38, 41},
    { 2, 17, 22, 37, 42},
    { 3, 16, 23, 36, 43},
    { 4, 15, 24, 35, 44},
    { 5, 14, 25, 34, 45},
    { 6, 13, 26, 33, 46},
    { 7, 12, 27, 32, 47},
    { 8, 11, 28, 31, 48},
    { 9, 10, 29, 30, 49},
};

//  * Five columns ( from top left to bottom rigth)
static const uint8_t column_leds[COLUMNS][LINES] = {
	{49, 48, 47, 46, 45, 44, 43,42,41,40},
	{30, 31, 32, 33, 34, 35, 36, 37, 38, 39},
	{29, 28, 27, 26, 25, 24, 23, 22, 21, 20},
	{10, 11, 12, 13, 14, 15, 16, 17, 18, 19},
	{9, 8, 7, 6, 5, 4, 3, 2, 1, 0}

};
