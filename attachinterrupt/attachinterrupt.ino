void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2, OUTPUT);
  //attachInterrupt(1, blink, CHANGE);
  attachInterrupt(1, blink1, RISING);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}

void blink() {
  int button = digitalRead(3);   // 버튼 상태 체크
  digitalWrite(2, button);    // LED 제어
}

void blink1() {
  static boolean Button = false;

  if (Button)
  {
    digitalWrite(2, HIGH);
  }
  else
  {
    digitalWrite(2, LOW);
  }
  Button = !Button;

  delay(10);
}
