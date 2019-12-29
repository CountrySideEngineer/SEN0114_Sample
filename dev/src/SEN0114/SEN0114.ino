#include "Arduino.h"

#define	SEN0114_ANALOG_PIN	(A5)


void setup()
{
	Serial.begin(9600);
}

void loop()
{
	Serial.print("Moisture sensor value = ");
	Serial.println(analogRead(SEN0114_ANALOG_PIN));

	delay(1000);
}
