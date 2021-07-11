void setup() 
{
  Serial.begin(9600);  // 통신 속도 설정, 단위:bps
}

void loop() 
{
  Serial.println(Serial.read());
  delay(1000);
}
