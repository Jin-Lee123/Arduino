#include <Servo.h>

Servo servo;
int servoPin = 9;

void setup() {
  servo.attach(servoPin);
}

void loop() {
  int potValue = analogRead(A0);
  int angle = map(potValue,0,1023,0,180);

  servo.write(angle);
  delay(100);
}
