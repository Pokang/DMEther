// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup()
{
// set up the LCD's number of columns and rows:
lcd.begin(16, 2);
lcd.clear();
}

void loop()   
{ 
  lcd.setCursor(0,0);
  lcd.print("Yo mek ca va ?");

  lcd.setCursor(0,1); // Sets the cursor to col 0 and row 1
  lcd.print("ca va et toi bro ?"); // Prints Sensor Val: to LCD
 
}
