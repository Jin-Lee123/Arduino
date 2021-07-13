int PIN_Seg[]   =   {2,3,4,5,6,7,8};
int PIN_Sel[]   =   {12,11,10,9};
int DNUM[10][7] = { {1,1,1,1,1,1,0},  // 0
                    {0,1,1,0,0,0,0},  // 1
                    {1,1,0,1,1,0,1},  // 2
                    {1,1,1,1,0,0,1},  // 3
                    {0,1,1,0,0,1,1},  // 4
                    {1,0,1,1,0,1,1},  // 5
                    {1,0,1,1,1,1,1},  // 6
                    {1,1,1,0,0,1,0},  // 7
                    {1,1,1,1,1,1,1},  // 8
                    {1,1,1,1,0,1,1}   // 9
};

void PrintNum(int Num)
{
  for(int i = 0; i<7; ++i)
  {
    digitalWrite(PIN_Seg[i], DNUM[Num][i]);
  }
}
void setup() {
  for(int i = 0; i<7; ++i)
  {
    pinMode(PIN_Seg[i], OUTPUT);
  }
  for(int i = 0; i<4; ++i)
  {
    pinMode(PIN_Sel[i], OUTPUT);
    digitalWrite(PIN_Sel[i], HIGH);
  }
  
  
}

// 0~99까지
void loop() {
  /*int iNum = 0;

  digitalWrite(PIN_Sel[0], LOW);
  digitalWrite(PIN_Sel[1], LOW);
  digitalWrite(PIN_Sel[2], LOW);
  digitalWrite(PIN_Sel[3], LOW);
  
  while(1)
  {
    PrintNum(iNum);
    delay(1000);
    ++iNum;
    if(iNum > 9)
    {
      iNum = 0;
    }
  }*/

  ///////////////////////////////
  int temp = 74;
  while(1) {
    digitalWrite(PIN_Sel[0], LOW);
    PrintNum(4);
    digitalWrite(PIN_Sel[0], HIGH);
    delayMicroseconds(100);
    digitalWrite(PIN_Sel[1], LOW);
    PrintNum(7);
    digitalWrite(PIN_Sel[1], HIGH);
    delayMicroseconds(100);
  }
}
