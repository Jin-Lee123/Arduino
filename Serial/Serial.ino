void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  Serial.print("Test ");
  Serial.print("Serial");

  Serial.print("\n\n");
  delay(1000);
}
