// https://lastminuteengineers.com/i2c-lcd-arduino-tutorial/
#include <LiquidCrystal_I2C.h>

// I2C address (0x27) and the dimensions of LCD (16x2)
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  lcd.init();
  lcd.clear();         
  lcd.backlight();      // Make sure backlight is on
  
  // Print a message on both lines of the LCD.
  lcd.setCursor(2,0);   // Set cursor to character 2 on line 0
  lcd.print("Hello world!");
  
  lcd.setCursor(2,1);   // Move cursor to character 2 on line 1
  lcd.print("LCD Tutorial");
}

void loop() {
}