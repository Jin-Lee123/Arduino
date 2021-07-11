void setup() 
{
  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}

void loop() 
{
  if(LOW==digitalRead(2))
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }
}
