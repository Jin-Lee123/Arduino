int ledPin = 13;
int inputPin = 2;
void setup() {
 pinMode(ledPin,OUTPUT);
 pinMode(inputPin,INPUT);
}

void loop() {
  int motion = digitalRead(inputPin);
  digitalWrite(ledPin,motion);
  delay(10);
}
