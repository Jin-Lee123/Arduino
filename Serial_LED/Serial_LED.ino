int PIN_LED = 13;

void setup()
{
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available() > 0)
  {
    int iRet = Serial.read();
    if(iRet == '1')
    {
      digitalWrite(PIN_LED, HIGH);
    }
    else if(iRet == '0')
    {
      digitalWrite(PIN_LED, LOW);
    }
  }
}
