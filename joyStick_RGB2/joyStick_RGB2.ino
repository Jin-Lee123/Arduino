#include "pitches.h"

int PIN_X     = A0;
int PIN_Y     = A1;
int PIN_LEDG  = 2;
int PIN_LEDB  = 3;
int PIN_LEDR  = 4;
int PIN_PUSH  = 6;
int PIN_SPK   = 9;

int arraySize = 8;
int melody[] =
{ 
  NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4,
  NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5 
};

int noteDurations[] ={ 8, 8, 6, 6, 4, 4, 4, 4 };


void setup() {
  pinMode(PIN_LEDG, OUTPUT);
  pinMode(PIN_LEDB, OUTPUT);
  pinMode(PIN_LEDR, OUTPUT);
  pinMode(PIN_PUSH, INPUT_PULLUP);    // 버튼 핀을 읽기 모드로 
}

void loop() {
  int horizontal  = analogRead(PIN_X);
  int vertical    = analogRead(PIN_Y);
  int select      = digitalRead(PIN_PUSH);     // 버튼, 눌렀을 때 = LOW, 뗐을 때 = HIGH

  if(select == LOW) // 버튼, 눌렀을 때 = LOW
  {
    PlaySong();
  }

  if(0 == horizontal)
  {
    if(52 == (vertical+5)/10)
    {
      digitalWrite(PIN_LEDG, HIGH);
    }
  }
  else if(1023 == horizontal)
  {
    if(52 == (vertical+5)/10)
    {
      digitalWrite(PIN_LEDB, HIGH);
    }
  }
  else if(49 == horizontal/10)
  {
    if(0 == vertical)
    {
      digitalWrite(PIN_LEDR, HIGH);
    }
    else if(1023 == vertical)
    {
      digitalWrite(PIN_LEDR, HIGH);
      digitalWrite(PIN_LEDG, HIGH);
      digitalWrite(PIN_LEDB, HIGH);
    }
  }
  if(49 == horizontal/10)
  {
    if(52 == (vertical+5)/10)
    {
      digitalWrite(PIN_LEDR, LOW);
      digitalWrite(PIN_LEDG, LOW);
      digitalWrite(PIN_LEDB, LOW);
    }
  }
  
  delay(100);
}

void PlaySong()
{
  for (int note = 0; note < arraySize; note ++)
  {
    int duration = 1000/noteDurations[note];
    tone(PIN_SPK, melody[note], duration);
 
    delay(duration+30);
  }
}
