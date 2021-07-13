void setup() {
  pinMode(6, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int vertical, horizontal, select;
  vertical = analogRead(A0);
  horizontal = analogRead(A1);
  select = digitalRead(6);

  Serial.print("X=");
  Serial.print(vertical);
  Serial.print(",Y=");
  Serial.print(horizontal);
  Serial.print(",Button=");

  if(select == HIGH){
    Serial.println("not pressed");
  }else{
    Serial.println("PRESSED!");
  }
  delay(200);

}
