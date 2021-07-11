void setup() 
{
  Serial.begin(9600);  // 통신 속도 설정, 단위:bps
  pinMode(13, OUTPUT);
}

void loop() 
{
  if(Serial.available())     //입력되는 data가 있을경우
  {
    char Input = Serial.read();  //1글자를 읽어들인후 Input에 저장
    if(Input == '1')
    {
      digitalWrite(13, HIGH);
    }
    else if(Input == '0')
    {
      digitalWrite(13, LOW);
    }
  }
}
