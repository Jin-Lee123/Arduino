void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  Serial.begin(9600);
}
void loop() {
  int button = digitalRead(3);
  digitalWrite(2, button);
  Serial.println(button);
  delay(10);                  
}
