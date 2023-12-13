#include "Servo.h"

Servo servomotor;

void setup()
{
  servomotor.attach(7);
  Serial.begin(9600);
}

void loop()
{
  int pot = analogRead(0);
  int angulo = map(pot, 0, 1023, 0, 180);
  
  servomotor.write(angulo);
  Serial.print("Posição: ");
  Serial.println(angulo);
  delay(30);
}