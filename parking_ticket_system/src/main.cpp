#include <Arduino.h>
#include <Servo.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(9, 10, 11, 12, 13, 14); // Initialize the LCD with the pins connected to it

Servo servo_A; // Initialize the servo motor
int sensorv = 2; // Button representing the sensor when the driver presses to get the ticket
int ledet = 4; // LED that turns on after pressing the button
int sensortr = 3; // Button representing the sensor when the driver takes out the ticket
int sensoropen = 6; // Button representing the sensor to confirm the gate is opened
int sensorclose = 8; // Button representing the sensor to confirm the gate is closed

void setup() {
  servo_A.attach(5); // Attach the servo motor to pin 5
  pinMode(sensorv, INPUT_PULLUP); // Set the pin mode for the ticket button sensor
  pinMode(sensortr, INPUT_PULLUP); // Set the pin mode for the ticket removal sensor
  pinMode(sensoropen, INPUT_PULLUP); // Set the pin mode for the gate open sensor
  pinMode(sensorclose, INPUT_PULLUP); // Set the pin mode for the gate close sensor
  pinMode(ledet, OUTPUT); // Set the pin mode for the LED
  digitalWrite(ledet, LOW); // Initialize the LED to be off
  servo_A.write(0); // Initialize the servo motor to the starting position
  lcd.begin(16, 2); // Initialize the LCD with 16 columns and 2 rows
}

void loop() {
  while (digitalRead(sensorv) == 1); // Wait for the driver to press the button to get the ticket
  digitalWrite(ledet, HIGH); // Turn on the LED
  lcd.setCursor(0, 0); // Set the cursor to the first column, first row
  lcd.print("Remove Ticket"); // Display "Remove Ticket" on the LCD
  
  while (digitalRead(sensortr) == 1); // Wait for the driver to take out the ticket
  digitalWrite(ledet, LOW); // Turn off the LED
  servo_A.write(90); // Move the servo motor to open the gate
  lcd.clear(); // Clear the LCD
  lcd.setCursor(0, 0); // Set the cursor to the first column, first row
  lcd.print("Ticket Removed"); // Display "Ticket Removed" on the LCD
  
  while (digitalRead(sensoropen) == 1); // Wait for the gate to open
  lcd.clear(); // Clear the LCD
  lcd.setCursor(0, 0); // Set the cursor to the first column, first row
  lcd.print("Gate Opened"); // Display "Gate Opened" on the LCD
  
  while (digitalRead(sensorclose) == 1); // Wait for the gate to close
  servo_A.write(0); // Move the servo motor to close the gate
  lcd.clear(); // Clear the LCD
  lcd.setCursor(0, 0); // Set the cursor to the first column, first row
  lcd.print("Gate Closed"); // Display "Gate Closed" on the LCD
}
