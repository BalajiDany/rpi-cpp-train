//============================================================================
// Name        : rpi-cpp-train.cpp
// Author      : Balaji D
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <wiringPi.h>

#define BLINK_LED_PIN 	1
using namespace std;

void chapterOne();

int main() {

	wiringPiSetup();

	chapterOne();

	return 0;
}

// Blink the led connected in PIN 0
void chapterOne() {

	pinMode(BLINK_LED_PIN, OUTPUT);

	while (true) {
		// ON
		digitalWrite(BLINK_LED_PIN, HIGH);
		delay(500);
		// OFF
		digitalWrite(BLINK_LED_PIN, LOW);
		delay(500);
	}
}
