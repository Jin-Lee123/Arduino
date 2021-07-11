void setup() {
  pinMode(3, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(A0);
  analogWrite(3, sensorValue / 4);
  delay(50);
}
