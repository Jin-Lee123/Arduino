int PIN_TMP36 = A0;

void setup() 
{
  Serial.begin(9600);  // 9600bps(bit per sec)
}
void loop() 
{
  int Volt1   = analogRead(PIN_TMP36);
  float Volt2 = Volt1 *5.0 / 1024.0;
  float Cel   = ( Volt2 - 0.5 ) * 100.0;
  Serial.print(Cel);
  Serial.println(" C(섭씨)");
  delay(500);
}
