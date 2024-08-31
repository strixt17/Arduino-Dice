// C++ code
//

#include <LiquidCrystal.h>

const int buttonPin1 = 2;
const int buttonPin2 = 3;

LiquidCrystal lcd(5, 6, 7, 8, 9, 10);
const int contrast = 4;

long randNumber;
int dicenumber = 0;

int changedicenumber;
int rolldice;

void setup()
{
  Serial.begin(9600);
  
  pinMode(buttonPin1, OUTPUT);
  pinMode(buttonPin2, OUTPUT);
  
  analogWrite(contrast, 100);
  lcd.begin(16, 2);
}

void loop()
{
  changedicenumber = digitalRead(buttonPin1);
  rolldice = digitalRead(buttonPin2);
  if (changedicenumber == HIGH) {
  	dicenumber = dicenumber + 1;
    if (dicenumber == 10){
    	dicenumber = 1;
    }
    Serial.println(dicenumber);
    delay(1000);
  }
}