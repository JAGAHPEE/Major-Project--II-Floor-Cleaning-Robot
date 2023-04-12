#include "Pins_Configuration.h"
void setup() {
  Serial.begin(9600);
  Serial.println("Welcome");
  pinMode(Left_1, OUTPUT);
  pinMode(Left_2, OUTPUT);
  pinMode(Right_1, OUTPUT);
  pinMode(Right_2, OUTPUT);
  
  pinMode(Clean_Supply, OUTPUT);
  pinMode(Wash_Supply, OUTPUT);
  pinMode(AB_Supply, OUTPUT);
  pinMode(Water_Supply, OUTPUT);

  digitalWrite(Clean_Supply, LOW);
  digitalWrite(Wash_Supply, LOW);
  digitalWrite(AB_Supply, LOW);
  digitalWrite(Water_Supply, LOW);

  digitalWrite(Left_1, LOW);
  digitalWrite(Left_2, LOW);
  digitalWrite(Right_1, LOW);
  digitalWrite(Right_2, LOW);
}
void loop() {
  Run_robot();
  delay(100);
}