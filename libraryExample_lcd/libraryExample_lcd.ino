#include "myLcdLibrary.h"

mylcd mylcd;

void setup() {
  mylcd.lcdsetup();

}

void loop() {
  mylcd.lcdPrint(5,0,"goatExample");
  delay(2000);
  mylcd.lcdClear();
  mylcd.lcdPrint(0,1,"myLcd is the best");
  delay(2000);
}


