#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7);
void setup() {
  
lcd.begin(16,2);

}

void loop() {
  lcd.print("Sundeep");
  lcd.setCursor(0,1);
  lcd.print(millis()/1000);
}
