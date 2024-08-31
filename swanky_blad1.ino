// C++ code
//

#include <LiquidCrystal.h>

const int buttonPin1 = 2;
const int buttonPin2 = 3;

LiquidCrystal lcd(5, 6, 7, 8, 9, 10);
const int contrast = 4;

void setup()
{
  pinMode(buttonPin1, OUTPUT);
  pinMode(buttonPin2, OUTPUT);
  
  analogWrite(contrast, 100);
  lcd.begin(16, 2);
}

void loop()
{
  if (button == HIGH) {
  	
  }
}