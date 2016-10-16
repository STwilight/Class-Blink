/*
 * Main application file for test example of Sming Blinking LED demo project with OOP LED class implementation.
 *
 * Additional information about using of static variables of the class:
 * 		http://stackoverflow.com/questions/9110487/undefined-reference-to-a-static-member
 *
 */

// Project inclusions
#include <user_config.h>
#include <SmingCore/SmingCore.h>
#include "LED.h"

// Objects reservation
Timer timer;
LED *led;

// GPIO definitions
#define GPIO2 2

// Main method
void init()
{
	// Object creation and initialization
	led = new LED(GPIO2);

	// Timer launching with callback of method inisde the class
	timer.initializeMs(1000, LED::Blink).start(true);

	// One more way to call the method inide the class
	// timer.initializeMs(1000, TimerDelegate(led->Blink)).start(true);
}
