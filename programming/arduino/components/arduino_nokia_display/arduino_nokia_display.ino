/*
 * Pin 1 -> +3.3V (rightmost, when facing the display head-on)
 * Pin 2 -> Arduino digital pin 3
 * Pin 3 -> Arduino digital pin 4
 * Pin 4 -> Arduino digital pin 5
 * Pin 5 -> Arduino digital pin 7
 * Pin 6 -> Ground
 * Pin 7 -> 10uF capacitor -> Ground
 * Pin 8 -> Arduino digital pin 6
 */

#include <PCD8544.h>

static PCD8544 lcd;

void setup() {
  lcd.begin(84, 48);
  
  lcd.setCursor(0, 0);
  lcd.print("setup busy ...");

  lcd.clear();
}


void loop() {
  // a counter to test the loop
  static int counter = 0;

  // write text on first and second line
  lcd.setCursor(0, 0);
  lcd.print("Hello, World!");

  lcd.setCursor(0, 1);
  lcd.print(counter, DEC);

  delay(200);
  counter++;
}
