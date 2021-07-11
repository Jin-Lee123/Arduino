unsigned long previousTime = 0;
boolean isOn = false;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
}

void loop()
{
  unsigned long currentTime = millis();

  if( currentTime > previousTime + 1000 )
  {
    if(isOn)
    {
      digitalWrite(13, HIGH);
    } else
    {
      digitalWrite(13, LOW);
    }
    isOn = !isOn;
    previousTime = currentTime;
  }

  digitalWrite(2, digitalRead(3));
  delay(10);
}
