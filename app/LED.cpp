/*
 * LED.cpp
 *
 *  Created on: 16 окт. 2016 г.
 *      Author: Symrak
 *
 *  Test example of Sming Blinking LED demo project with OOP LED class implementation.
 *
 */

// LED header file inlusion
#include "LED.h"

// Static variables declaration
byte LED::pin;
bool LED::state;

// LED constructor implementation
LED::LED(byte ledPin) {
	pin = ledPin;
	state = true;
	pinMode(pin, OUTPUT);
	digitalWrite(pin, false);
}

// LED Blink public method implementation
void LED::Blink() {
	digitalWrite(pin, state);
	state = !state;
}
