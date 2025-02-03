#include <Arduino.h>

// Pin definitions
int Pinread = A0; // Analog pin to read the photoresistor value
int valphoto; // Variable to store the photoresistor value
int relayBulb = 13; // Pin for the relay
int a = 2; // Pin for segment 'a' of the 7-segment display
int b = 3; // Pin for segment 'b' of the 7-segment display
int c = 4; // Pin for segment 'c' of the 7-segment display
int d = 5; // Pin for segment 'd' of the 7-segment display
int e = 6; // Pin for segment 'e' of the 7-segment display
int f = 7; // Pin for segment 'f' of the 7-segment display
int g = 8; // Pin for segment 'g' of the 7-segment display

void setup () {
  // Initialize serial communication at 9600 bps
  Serial.begin(9600);

  // Set the photoresistor pin as input
  pinMode(Pinread, INPUT);

  // Array to store the Arduino pin numbers output to the 7-segment display segments
  int arduinoPins[] = {2, 3, 4, 5, 6, 7, 9};

  // Loop through the arduino_pins array storing the Arduino pin numbers
  for (int i = 2; i < 10; i++) {
    // Arduino output based on the loop on the array 
    pinMode(i, OUTPUT);
  }

  // Set the Relay pins as outputs
    pinMode(relayBulb, OUTPUT);

}

// Function to display the number 0 on the 7-segment display
void zero() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
}

// Function to display the number 1 on the 7-segment display
void one() {
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}

// Function to display the number 2 on the 7-segment display
void two() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
}

// Function to display the number 3 on the 7-segment display
void three() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
}

// Function to display the number 4 on the 7-segment display
void four() {
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

// Function to display the number 5 on the 7-segment display
void five() {
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

// Function to display the number 6 on the 7-segment display
void six() {
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}

void loop() {
  // Send the value to the serial monitor
  Serial.println(valphoto);

  // Read the value from the photoresistor
  valphoto = analogRead(Pinread);

  // Delay time to display the photoresistor value on the serial monitor
  delay(500);
  
  // Display a number on the 7-segment display based on the photoresistor value
  if (valphoto < 100) {
      // Display de number 0 and turn on the relay
      zero();
    digitalWrite(relayBulb, HIGH);
    
  } else if (valphoto < 200) {
      // Display de number 1 and turn on the relay
      one();
      digitalWrite(relayBulb, HIGH); 
  
  } else if (valphoto < 300) {
      // Display de number 2 and turn on the relay
      two();
      digitalWrite(relayBulb, HIGH);
      
  } else if (valphoto < 400) {
      // Display de number 3 and turn on the relay
      three();
      digitalWrite(relayBulb, HIGH);
      
  } else if (valphoto < 500) {
      // Display de number 4 and turn on the relay
      four();
      digitalWrite(relayBulb, HIGH);
      
  } else if (valphoto < 600) {
      // Display de number 5 and turn on the relay
      five();
      digitalWrite(relayBulb, LOW);
      
  }  else {
    // Display de number 6 and turn on the relay 
      six();
      digitalWrite(relayBulb, LOW);
  }
     
}
