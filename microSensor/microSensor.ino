void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,INPUT);
}

void loop() {
  int duration, cm;

  digitalWrite(2,HIGH);
  delayMicroseconds(10);
  digitalWrite(2,LOW);

  duration = pulseIn(3,HIGH);
  cm = microsecondsToCentimeters(duration);

  Serial.print(cm);
  Serial.println("cm");

  delay(300);
}

int microsecondsToCentimeters(int microseconds){
  return microseconds/29/2;
}
