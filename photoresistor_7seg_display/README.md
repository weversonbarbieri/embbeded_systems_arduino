# Arduino 7-Segment Display with Photoresistor

![C++](https://img.shields.io/badge/language-C++-blue.svg)
![Arduino](https://img.shields.io/badge/platform-Arduino-blue.svg)

## Description

This project uses an Arduino to control a 7-segment display based on the input from a photoresistor. The display shows numbers from 0 to 6 depending on the light intensity detected by the photoresistor. Additionally, blue and green LEDs are used to indicate different ranges of light intensity.

## Components Used

  * Arduino board
  * 7-segment display
  * Photoresistor
  * Blue LED
  * Green LED
  * Resistors 220 ohms
  * Breadboard and jumper wires

## Circuit Diagram

The diagram will be included soon.

## How It Works

  - The photoresistor measures the ambient light intensity.
  - The Arduino reads the analog value from the photoresistor.
  - Based on the value read, the Arduino displays a number (0-6) on the 7-segment display.
  - The blue and green LEDs indicate different ranges of light intensity:
  - Blue LED on: Low to medium light intensity.
  - Green LED on: Medium to high light intensity.
  - Both LEDs on: High light intensity.

## Installation

  - Connect the components as shown in the circuit diagram.
  - Upload the provided code to the Arduino using the Arduino IDE.
  - Open the Serial Monitor to view the photoresistor values and the corresponding number displayed.

## See the System Working
The video will be included soon.

## Licenses

This project is licensed under the MIT License. See the LICENSE file for more details.

## Contact

For any questions or feedback, please contact [Your Name] at [Your Email].
