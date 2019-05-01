#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 
void setup() {
  lcd.begin(16, 2);
  lcd.print("06050765,NG MAN HUNG");
  lcd.setCursor(0,1);
  lcd.print("MAN HUNG");

}

void loop() {
}
