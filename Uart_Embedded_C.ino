#include <LiquidCrystal.h> // initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup()
{
// set up the LCD’s number of columns and rows:
lcd.begin(16, 2);
// initialize both serial ports:
Serial.begin(9600);
}
void loop() {
if (Serial.available()) {
  delay (500);
unsigned int inByte = Serial.read();
Serial.write(inByte);
lcd.write(inByte);
lcd.leftToRight();
}
}
