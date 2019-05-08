#include <LiquidCrystal.h> // include the library code
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // initialize interface pins
void setup() 
{
lcd.begin(20, 2); // set up the LCD's number of columns and rows:
lcd.print("03053622");
lcd.print("YI"); // Print a message to the LCD.
}
void loop()
{
// set the cursor to column 0, line 1
// (note: line 1 is the second row, since counting begins with 0):
lcd.setCursor(0, 1);
lcd.print(millis()/1000); // print the number of seconds since reset:
          }
