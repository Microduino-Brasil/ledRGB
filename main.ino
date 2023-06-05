// includes start
#include <Arduino.h>
#include <Microduino_ColorLED.h>
// includes end

ColorLED strip_2 = ColorLED(16, 2);

void setup() {
	// setup define start
	strip_2.begin();
	// setup define end
	Serial.begin(57600);
}

void loop() {
	strip_2.setPixelColor(0, 0xd78181);
	strip_2.show();
}