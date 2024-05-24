#include "pitches.h"
#include <LiquidCrystal_I2C.h>

#define BUZZER_PIN 5
#define BUTTON_PIN 3
#define LED_1 4
#define LED_2 6
#define LED_3 7
#define LED_4 8
LiquidCrystal_I2C lcd(0x27, 2,1,0,4,5,6,7,3,POSITIVE);
int led[] = {LED_1, LED_2, LED_3, LED_4};

const int melody_2[] = {
  NOTE_E5,NOTE_E5,NOTE_F5,NOTE_G5,NOTE_G5,NOTE_F5,NOTE_E5,NOTE_D5,
  NOTE_C5,NOTE_C5,NOTE_D5,NOTE_E5,NOTE_E5,NOTE_D5,NOTE_D5,

  NOTE_E5,NOTE_E5,NOTE_F5,NOTE_G5,NOTE_G5,NOTE_F5,NOTE_E5,NOTE_D5,
  NOTE_C5,NOTE_C5,NOTE_D5,NOTE_E5,NOTE_D5,NOTE_C5,NOTE_C5,

  NOTE_D5,NOTE_D5,NOTE_E5,NOTE_C5,NOTE_D5,NOTE_E5,NOTE_F5,NOTE_E5,NOTE_C5,
  NOTE_D5,NOTE_E5,NOTE_F5,NOTE_E5,NOTE_D5,NOTE_C5,NOTE_D5,NOTE_G4,

  NOTE_E5,NOTE_E5,NOTE_F5,NOTE_G5,NOTE_G5,NOTE_F5,NOTE_E5,NOTE_D5,
  NOTE_C5,NOTE_C5,NOTE_D5,NOTE_E5,NOTE_D5,NOTE_C5,NOTE_C5,
};

// const int melody_3[] = {
//   NOTE_A4,NOTE_E5,NOTE_F5,NOTE_E5,NOTE_F5,NOTE_G5,
//   NOTE_F5,NOTE_G5,NOTE_A5,NOTE_G5,NOTE_A5,NOTE_C6,
//   NOTE_A5,NOTE_C6,NOTE_D6,NOTE_C6,NOTE_A5,NOTE_G5,NOTE_A5,REST,
//   NOTE_B5,NOTE_A5,NOTE_G5,NOTE_E5,NOTE_F5,NOTE_G5,NOTE_A5,NOTE_G5,NOTE_F5,
//   NOTE_D5,NOTE_E5,NOTE_F5,NOTE_F5,NOTE_G5,NOTE_A5,NOTE_E5,

//   NOTE_E4,NOTE_A4,NOTE_D5,NOTE_E5,NOTE_F5,NOTE_E5,NOTE_F5,NOTE_G5,
//   NOTE_F5,NOTE_G5,NOTE_A5,NOTE_G5,NOTE_A5,NOTE_C6,NOTE_A5,NOTE_C6,
//   NOTE_D6,NOTE_C6,NOTE_A5,NOTE_D6,NOTE_C6,

//   NOTE_A5,NOTE_G5,NOTE_A5,NOTE_A5,NOTE_A5,NOTE_A5,NOTE_A5,NOTE_A5,NOTE_G5,
//   NOTE_A5,NOTE_G5,NOTE_F5,NOTE_E5,NOTE_F5,REST,
//   NOTE_E5,NOTE_F5,NOTE_G5,NOTE_B5,NOTE_A5,NOTE_G5,NOTE_F5,NOTE_E5,

//   NOTE_D5,NOTE_E5,NOTE_E5,NOTE_F5,NOTE_C5,NOTE_D5
// };

const int melody_4[] = {
  NOTE_C4, NOTE_C4, 
  NOTE_D4, NOTE_C4, NOTE_F4,
  NOTE_E4, NOTE_C4, NOTE_C4, 
  NOTE_D4, NOTE_C4, NOTE_G4,
  NOTE_F4, NOTE_C4, NOTE_C4,
  
  NOTE_C5, NOTE_A4, NOTE_F4, 
  NOTE_E4, NOTE_D4, NOTE_AS4, NOTE_AS4,
  NOTE_A4, NOTE_F4, NOTE_G4,
  NOTE_F4  
};

// const float duration_3[] = {
//   1.0/16,1.0/16,1.0/16,1.0/16,1.0/16,3.0/16,
//   1.0/16,1.0/16,1.0/16,1.0/16,1.0/16,3.0/16,
//   1.0/16,1.0/16,1.0/8,1.0/16,3.0/16,1.0/8,1.0/4,1.0/8,
//   1.0/16,1.0/16,1.0/8,1.0/8,1.0/8,1.0/8,1.0/8,1.0/8,1.0/8,
//   1.0/16,1.0/16,1.0/8,1.0/16,3.0/16,1.0/8,1.0/4,

//   1.0/16,1.0/16,1.0/16,1.0/16,1.0/16,1.0/16,1.0/16,3.0/16,
//   1.0/16,1.0/16,1.0/16,1.0/16,1.0/16,3.0/16,1.0/16,1.0/16,
//   1.0/8,1.0/16,3.0/16,1.0/8,3.0/8,

//   1.0/16,1.0/16,1.0/16,1.0/16,1.0/16,1.0/16,1.0/8,1.0/16,1.0/16,
//   1.0/8,1.0/8,1.0/8,1.0/8,1.0/4,1.0/16,

//   1.0/16,1.0/16,1.0/16,1.0/16,1.0/16,1.0/8,1.0/8,1.0/8,
//   3.0/8,1.0/16,3.0/16,1.0/4,1.0/8,1.0,
// };

const float duration_2[] = {
  1.0/4,1.0/4,1.0/4,1.0/4,1.0/4,1.0/4,1.0/4,1.0/4,
  1.0/4,1.0/4,1.0/4,1.0/4,3.0/8,1.0/8,1.0/2,
  
  1.0/4,1.0/4,1.0/4,1.0/4,1.0/4,1.0/4,1.0/4,1.0/4,
  1.0/4,1.0/4,1.0/4,1.0/4,3.0/8,1.0/8,1.0/2,

  1.0/4,1.0/4,1.0/4,1.0/4,1.0/4,1.0/8,1.0/8,1.0/4,1.0/4,
  1.0/4,1.0/8,1.0/8,1.0/4,1.0/4,1.0/4,1.0/4,1.0/2,

  1.0/4,1.0/4,1.0/4,1.0/4,1.0/4,1.0/4,1.0/4,1.0/4,
  1.0/4,1.0/4,1.0/4,1.0/4,3.0/8,1.0/8,1.0/2,
};

const float duration_4[]{
  1.0/4,1.0/8,1.0/4,1.0/4,1.0/4,1.0/2,1.0/4,1.0/8,1.0/4,1.0/4,1.0/4,
  1.0/2,1.0/4,1.0/8,1.0/4,1.0/4,1.0/4,1.0/4,1.0/4,1.0/4,1.0/8,
  1.0/4,1.0/4,1.0/4,1.0/2,
};

const int melody_5[] = {
  REST, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_B4,
  NOTE_G5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_E5, NOTE_F5, NOTE_G5, REST,
  NOTE_E5, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5,
  NOTE_A4, NOTE_A4, REST, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_G4, REST, NOTE_G4,
  NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_C5, NOTE_B4,
  NOTE_G5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_E5, NOTE_F5, NOTE_G5,
  NOTE_E5, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5,
  NOTE_A4, NOTE_A4, REST, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_G4, REST, NOTE_G4, NOTE_G4,
  NOTE_A4, NOTE_A4, NOTE_A4, REST, NOTE_A4, NOTE_C5, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_C5, REST,
  REST
};

const float duration_5[] = {
0.25, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.25,
0.25, 0.125, 0.125, 0.25, 0.125, 0.125, 0.5, 0.5,
0.25, 0.125, 0.125, 0.25, 0.125, 0.125, 0.25, 0.125, 0.125, 0.25, 0.125, 0.125,
0.25, 0.125, 0.125, 0.25, 0.125, 0.125, 0.125, 0.125, 0.5, 0.125, 0.125,
0.125, 0.125, 0.25, 0.25, 0.25, 1.0,
0.25, 0.125, 0.125, 0.25, 0.125, 0.125, 1.0,
0.25, 0.125, 0.125, 0.25, 0.125, 0.125, 0.25, 0.125, 0.125, 0.25, 0.125, 0.125,
0.25, 0.125, 0.125, 0.25, 0.125, 0.125, 0.125, 0.125, 0.25, 0.25, 0.125, 0.125,
0.125, 0.125, 0.125, 0.125, 0.25, 0.25, 0.125, 0.125, 0.25, 0.25, 0.125, 0.125,
1.0
};

const int melody_6[] = {
  REST,NOTE_G4,NOTE_C5,NOTE_D5,
  NOTE_E5,NOTE_C5,NOTE_G4,NOTE_G4,NOTE_E5,
  NOTE_D5,NOTE_E5,NOTE_D5,NOTE_B4,NOTE_G4,NOTE_A4,NOTE_B4,
  NOTE_C5,NOTE_A4,NOTE_E4,NOTE_E4,NOTE_C5,
  NOTE_B4,NOTE_C5,NOTE_B4,NOTE_D5,NOTE_G4,NOTE_G4,NOTE_G4,
  NOTE_A4,NOTE_B4,NOTE_C5,NOTE_D5,NOTE_E5,NOTE_F5,
  NOTE_E5,NOTE_F5,NOTE_E5,NOTE_D5,NOTE_C5,
  NOTE_D5,NOTE_C5,NOTE_D5,NOTE_A4,NOTE_C5,NOTE_B4,
  NOTE_C5,REST
};

const float duration_6 [] = {
  1.0/8,1.0/8,1.0/8,1.0/8,
  1.0/4,1.0/4,1.0/4,1.0/8,1.0/8,
  1.0/8,1.0/8,1.0/8,1.0/8,1.0/4,1.0/8,1.0/8,
  1.0/4,1.0/4,1.0/4,1.0/8,1.0/8,
  1.0/8,1.0/8,1.0/8,1.0/8,1.0/4,1.0/8,1.0/8,
  1.0/4,1.0/8,1.0/8,1.0/4,1.0/8,1.0/8,
  1.0/8,1.0/8,1.0/8,1.0/8,1.0/2,
  1.0/8,1.0/8,1.0/8,1.0/8,1.0/4,1.0/4,
  1.0/2,1.0/2
};

struct Songs {
  String title;
  int* melodies;
  float* durations;
  int length;
  int tempo;
};
int song = random(4);
Songs songs[4] = {
  {"Ode de Joy",melody_2, duration_2, sizeof(melody_2)/sizeof(int),1000.0},
  {"Memories",melody_5, duration_5, sizeof(melody_5)/sizeof(int),2000.0},
  {"Happy Birthday",melody_4, duration_4, sizeof(melody_4)/sizeof(int),1000.0},
  {"Xiao Jiu Wo",melody_6, duration_6, sizeof(melody_6)/sizeof(int),2000.0},
};

void setup()
{
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  lcd.begin(16, 2);
  lcd.backlight();
  Serial.begin(9600);
}

void loop()
{
  lcd.clear();
  lcd.print(songs[song].title);
  for (int note = 0; note < songs[song].length; note++) {
    int duration = songs[song].tempo * songs[song].durations[note];
    tone(BUZZER_PIN, songs[song].melodies[note], duration);
    digitalWrite(LED_1, LOW);
    digitalWrite(LED_2, LOW);
    digitalWrite(LED_3, LOW);
    digitalWrite(LED_4, LOW);
    int randomLED = random(4);
    digitalWrite(led[randomLED],HIGH);
    int pauseBetweenNotes = duration * 1.0;
    delay(pauseBetweenNotes);
    noTone(BUZZER_PIN);
    if (digitalRead(BUTTON_PIN) == HIGH){
      song = random(4);
      break;
    }
  }
}