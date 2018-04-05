#include "Arduino.h"

void setup(){
	pinMode(LED_BUILTIN, OUTPUT);
	Serial.begin(115200);
	Serial.print("LED PORT: ");
	Serial.println(LED_BUILTIN);
}

void loop(){
	digitalWrite(LED_BUILTIN, HIGH);
	delay(1000);

	turn_off_led();
	delay(500);
}

void turn_off_led(){
	digitalWrite(LED_BUILTIN, LOW);
}
