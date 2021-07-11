void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600); 
}
void loop() {
  static int iNum = 0;
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  Serial.print("LED on, off :");
  Serial.println(iNum);
  ++iNum;
}
