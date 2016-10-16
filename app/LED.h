/*
 * LED.h
 *
 *  Created on: 16 окт. 2016 г.
 *      Author: Symrak
 *
 *  Header file for test example of Sming Blinking LED demo project with OOP LED class implementation.
 *
 */

// Sming core inclusion
#include <SmingCore/SmingCore.h>

// Header file definitions
#ifndef APP_LED_H_
#define APP_LED_H_

// LED Class declaration
class LED {
public:
	// Public members
	LED(byte ledPin);
	static void Blink();

private:
	// Private members
	static byte pin;
	static bool state;
};

#endif /* APP_LED_H_ */
