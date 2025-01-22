#include <Arduino.h>

int Pinread = A0;
int valphoto;
int ledwhite = 11;
int ledgreen = 12;
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 9;

void setup () {
  Serial.begin(9600);
  pinMode(Pinread, INPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(ledwhite, OUTPUT);
  pinMode(ledgreen, OUTPUT);
}

void zero() {
  digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, LOW);
}

void one() {
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
}

void loop() {
  Serial.println(valphoto);
  valphoto = analogRead(Pinread);
  delay(500);

  if (valphoto < 150) {
      zero();
      digitalWrite(ledwhite, HIGH);
      digitalWrite(ledgreen, LOW);
    } else if (valphoto > 150 && valphoto < 300) {
      one();
      digitalWrite(ledwhite, HIGH);
      digitalWrite(ledgreen, LOW);
    } else if (valphoto > 300 && valphoto < 500) {
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      digitalWrite(ledwhite, LOW);
      digitalWrite(ledgreen, HIGH);
    } else if (valphoto > 500 && valphoto < 600) {
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      digitalWrite(ledwhite, LOW);
      digitalWrite(ledgreen, HIGH);
    } else {
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(ledwhite, HIGH);
      digitalWrite(ledgreen, HIGH);
    
    }
  



}