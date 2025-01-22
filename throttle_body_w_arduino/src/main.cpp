#include <Arduino.h>

#define potPin 0 // Define the potentiometer pin
#define ledPin 9 // Define the LED pin

int valPot = 0; // Variable to store the potentiometer value
int val; // Variable to store the mapped value

#ifdef THROTTLE_BODY_W_POT
void setup()
{
    // TCCR2B = TCCR2B & 0b11111000 | 0x01; // Define the PWM to 32 KHz

    pinMode(ledPin, OUTPUT); // Set the LED pin as output
}

void loop()
{
    valPot = analogRead(potPin); // Read the value from the potentiometer
    val = map(valPot, 0, 1023, 0, 255); // Map the potentiometer value to a range of 0-255
    analogWrite(ledPin, val); // Write the mapped value to the LED

    if (valPot == 0) { // Check if the potentiometer value is 0
        analogWrite(ledPin, 0); // Turn off the LED
    }
}
#endif