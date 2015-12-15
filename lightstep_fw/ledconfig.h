/*
 * ledconfig.cpp
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

 
#ifndef __LEDCONFIG__
#define __LEDCONFIG__

#include <Arduino.h>
#define TIME_FRAME 0xFF

#ifdef JBLB_LED
  #include "jblb_led.h"
#else
  #include "luz.h"
#endif 

#include "framebuffer.h"


#endif // __LEDCONFIG__
