int  PIN_Seq[]    = {2,3,4,5,6,7,8,9};
int DNUM[10][8] = { {0,1,1,1,1,1,1,0},  // 0
                    {0,1,0,0,1,0,0,0},  // 1
                    {0,0,1,1,1,1,0,1},  // 2
                    {0,1,1,0,1,1,0,1},  // 3
                    {0,1,0,0,1,0,1,1},  // 4
                    {0,1,1,0,0,1,1,1},  // 5
                    {0,1,1,1,0,1,1,1},  // 6
                    {0,1,0,0,1,1,1,0},  // 7
                    {1,1,1,1,1,1,1,1},  // 8
                    {1,1,1,0,1,1,1,1}   // 9
};
void PrintNum(int Num){
  for (int i = 0; i<8; ++i)
  {
    digitalWrite(PIN_Seq[i],DNUM[Num][i]);
  } 
}
void setup() {
  for (int i = 0; i<8; ++i)
  {
    pinMode(PIN_Seq[i],OUTPUT);
  }
}

void loop() {
  int iNum = 0;
  while(1)
  {
    PrintNum(iNum);
    delay(1000);
    ++iNum;
    if (iNum > 9)
    {
      iNum = 0;
    } 
  }
}
