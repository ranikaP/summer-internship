#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
int v=0;

void setup() {
  lcd.init();
  lcd.backlight();
}


void loop()
{ 
  while (v<5){
  v=v+1;
  lcd.print(v);
  delay(1000);
  lcd.clear();

  }

  if (v==5){
    lcd.print("done");
    v=v+1;
  }
}