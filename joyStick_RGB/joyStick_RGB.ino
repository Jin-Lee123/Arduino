void setup() {
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
Serial.begin(9600);
}

void loop() {
int vertical, horizontal, select;
vertical = analogRead(A0);
horizontal = analogRead(A1);
select = digitalRead(6);

Serial.print("X = ");
Serial.print(vertical);
Serial.print(", Y = ");
Serial.print(horizontal);
Serial.print(", Button = ");
  if(horizontal==0){
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    Serial.println("RED ON");
    delay(2000);
    }
  else if (horizontal==1023){
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(12,HIGH);
    Serial.println("WHITE ON");
    delay(2000);
  }
  else if (vertical==0) {
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    Serial.println("BLUE ON");
    delay(2000);
  }
  else if (vertical==1023) {
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    Serial.println("GREEN ON");
    delay(2000);
  }
  else
  {
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    Serial.println("NOT");
    delay(2000);
  }
}
