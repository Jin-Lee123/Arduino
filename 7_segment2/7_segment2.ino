//int Test_digital[]={2,3,4,5,6,7,8,9};
int Seq_digital[] ={0,1,2,3,4,5,6,7,8,9};
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  
}

void loop() {
  for(int i=0;i<10;i++){
    
  delay(1000);
  if (Seq_digital[i]==0)
  {
    digitalWrite(2,0);
    digitalWrite(3,0);
    digitalWrite(4,0);
    digitalWrite(5,0);
    digitalWrite(6,0);
    digitalWrite(7,0);
    digitalWrite(8,0);
    digitalWrite(9,0);
    
    digitalWrite(3,1);
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,1);
    digitalWrite(5,1);
    digitalWrite(4,1);
  }
  else if (Seq_digital[i]==1)
  {
    digitalWrite(2,0);
    digitalWrite(3,1);
    digitalWrite(4,0);
    digitalWrite(5,0);
    digitalWrite(6,1);
    digitalWrite(7,0);
    digitalWrite(8,0);
    digitalWrite(9,0);
  }
  else if (Seq_digital[i]==2)
  {
    digitalWrite(2,0);
    digitalWrite(3,0);
    digitalWrite(4,1);
    digitalWrite(5,1);
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,0);
    digitalWrite(9,1);
  }
  else if (Seq_digital[i]==3)
  {
    digitalWrite(2,0);
    digitalWrite(3,1);
    digitalWrite(4,1);
    digitalWrite(5,0);
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,0);
    digitalWrite(9,1);
  }
  else if (Seq_digital[i]==4)
  {
    digitalWrite(2,0);
    digitalWrite(3,1);
    digitalWrite(4,0);
    digitalWrite(5,0);
    digitalWrite(6,1);
    digitalWrite(7,0);
    digitalWrite(8,1);
    digitalWrite(9,1);
  }
  else if (Seq_digital[i]==5)
  {
    digitalWrite(2,0);
    digitalWrite(3,1);
    digitalWrite(4,1);
    digitalWrite(5,0);
    digitalWrite(6,0);
    digitalWrite(7,1);
    digitalWrite(8,1);
    digitalWrite(9,1);
  }
  else if (Seq_digital[i]==6)
  {
    digitalWrite(2,0);
    digitalWrite(3,1);
    digitalWrite(4,1);
    digitalWrite(5,1);
    digitalWrite(6,0);
    digitalWrite(7,0);
    digitalWrite(8,1);
    digitalWrite(9,1);
  }
  else if (Seq_digital[i]==7)
  {
    digitalWrite(2,0);
    digitalWrite(3,1);
    digitalWrite(4,0);
    digitalWrite(5,0);
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,1);
    digitalWrite(9,0);
  }
  else if (Seq_digital[i]==8)
  {
    digitalWrite(2,0);
    digitalWrite(3,1);
    digitalWrite(4,1);
    digitalWrite(5,1);
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,1);
    digitalWrite(9,1);
  }
  else if (Seq_digital[i]==9)
  {
    digitalWrite(2,0);
    digitalWrite(3,1);
    digitalWrite(4,0);
    digitalWrite(5,0);
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,1);
    digitalWrite(9,1);
  }
  }
}
