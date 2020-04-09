#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:.
  pinMode(BUILTIN_LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(BUILTIN_LED, HIGH);
  delay(1000);
  digitalWrite(BUILTIN_LED, LOW);
  delay(1000);
  Serial.print("assd");
  
}