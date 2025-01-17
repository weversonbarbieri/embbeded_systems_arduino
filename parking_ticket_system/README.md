# Parking Ticket System

## Description

The Parking Ticket System is an Arduino-based project designed to simulate a parking ticket dispenser and gate control system. This project uses various sensors and actuators to manage the ticket dispensing process and control the gate's opening and closing.

## Components Used

- Arduino board
- Servo motor
- Liquid Crystal Display (LCD)
- Push buttons (representing sensors)
- LED
- Resistors
- Breadboard and jumper wires

## Circuit Diagram

To see the project diagram, open the file 'Schematics (1).pdf'

## How It Works
  - The driver presses the button to get a ticket (simulated by sensorv).
  - The LED turns on, and the LCD displays "Remove Ticket".
  - The driver takes out the ticket (simulated by sensortr).
  - The LED turns off, the servo motor moves to open the gate, and the LCD displays "Ticket Removed".
  - The gate opens (simulated by sensoropen), and the LCD displays "Gate Opened".
  - The gate closes (simulated by sensorclose), the servo motor moves back to its initial position, and the LCD displays "Gate Closed".

## Installation
   1. Connect the components as per the circuit diagram.
   2. Upload the provided code to the Arduino board using the Arduino IDE.
   3. Power the Arduino board and observe the system in action.

## See the system working

https://drive.google.com/file/d/1nUpMjqCgzpCgl9O3jzL2mpiDOcpuc5zP/view?usp=sharing

## Lincenses

This project is licensed under the MIT License. See the LICENSE file for more details.


## Contact

For more information, contact [\[Weverson\]](https://github.com/weversonbarbieri).