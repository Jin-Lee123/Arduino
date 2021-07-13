int PIN_PUSH  = 6;
int redPin = 9;
int greenPin = 10;
int bluePin = 11;
int potPin = A0;

int red = 0;
int green = 0;
int blue = 0;
int mode = 0;

void setup() {
  pinMode(PIN_PUSH, INPUT_PULLUP);
}
void loop() {
  // 포텐셔미터 읽기 (10 bits, 0~1023)
  int potValue = analogRead(potPin);
  int select   = digitalRead(PIN_PUSH);     // 버튼, 눌렀을 때 = LOW, 뗐을 때 = HIGH

  if(select == LOW) // 버튼, 눌렀을 때 = LOW
  {
    ++mode;
    if(mode > 2)
    {
      mode = 0;
    }
  }

  // RGB LED 색 변화
  if(mode == 0) {
    red = potValue/4;
    analogWrite(redPin, red);
  } else if(mode == 1) {
    green = potValue/4;
    analogWrite(greenPin, green);
  } else {
    blue = potValue/4;
    analogWrite(bluePin, blue);
  }

  delay(50);
}
