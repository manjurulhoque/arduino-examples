#include<LiquidCrystal.h>
const int rs = 1, rw = 6, en = 7, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, rw, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Hello ");
  lcd.setCursor(6, 0);
  lcd.print("Rumi");
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
