#include "myLcdLibrary.h"
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2); 

mylcd::mylcd(){
  
}

void mylcd::lcdsetup() {
  lcd.begin();
  lcd.backlight();  
}

void mylcd::lcdPrint(int col,int row,String message){
  lcd.setCursor(col, row);
  lcd.print(message);
}


void mylcd::lcdClear(){
  lcd.clear();
}