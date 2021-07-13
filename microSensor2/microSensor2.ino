#define BEEP_NUM  2000

int PinTrig = 2;
int PinEcho = 3;
int PinSpk  = 9;

void setup()
{
  pinMode(PinTrig,OUTPUT);  // 센서 Trig 핀 파란선
  pinMode(PinEcho,INPUT);   // 센서 Echo 핀 초록선
}

void loop()
{
  tone(PinSpk, BEEP_NUM, 30);
  delay(USensor()*18);
}

int USensor() {
  int duration, cm;

  digitalWrite(PinTrig,HIGH);   // 센서에 Trig 신호 입력
  delayMicroseconds(10);        // 10us 정도 유지
  digitalWrite(PinTrig,LOW);    // Trig 신호 off

  duration = pulseIn(PinEcho, HIGH);  // Echo pin: HIGH->Low 간격을 측정
  cm = microsecondsToCentimeters(duration);  // 거리(cm)로 변환

  return cm;
}

int microsecondsToCentimeters(int microseconds) {
  return microseconds / 29 / 2;
}
