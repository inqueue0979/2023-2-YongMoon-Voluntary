int Fan = 11;

void setup() {
  pinMode(Fan, OUTPUT);
}

void loop() {
  analogWrite(Fan, 255);
  delay(3000);
  analogWrite(Fan, 0);
  delay(3000);
}
