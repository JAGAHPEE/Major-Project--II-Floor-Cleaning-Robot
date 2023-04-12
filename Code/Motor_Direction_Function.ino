void Forward() {
  //Forward
  digitalWrite(Left_1, HIGH);
  digitalWrite(Left_2, LOW);
  digitalWrite(Right_1, HIGH);
  digitalWrite(Right_2, LOW);
}
void Backward() {
  //Backward
  digitalWrite(Left_1, LOW);
  digitalWrite(Left_2, HIGH);
  digitalWrite(Right_1, LOW);
  digitalWrite(Right_2, HIGH);
}
void Left() {  //Right
  digitalWrite(Left_1, HIGH);
  digitalWrite(Left_2, HIGH);
  digitalWrite(Right_1, HIGH);
  digitalWrite(Right_2, LOW);
}

void Right() {
  //Left
  digitalWrite(Left_1, HIGH);
  digitalWrite(Left_2, LOW);
  digitalWrite(Right_1, HIGH);
  digitalWrite(Right_2, HIGH);
}

void Stop() {
  //Stop
  digitalWrite(Left_1, LOW);
  digitalWrite(Left_2, LOW);
  digitalWrite(Right_1, LOW);
  digitalWrite(Right_2, LOW);
}