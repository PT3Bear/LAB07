#include <LiquidCrystal.h>
char a;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 
void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0,1);
Serial.begin(9600);
}

void loop() {
  if(Serial.available())
  {
      a=Serial.read();
       lcd.print(a);
  }
}
