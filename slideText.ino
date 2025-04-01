#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
  lcd.init();          // Initialize the LCD
  lcd.backlight();     // Turn on the backlight
}

void loop() {
  String text = "ArkadipMahapatra";  // The text to slide
  int textLength = text.length();

  // Sliding effect: Move text from right to left
  for (int pos = 0; pos < textLength + 16; pos++) {
    lcd.clear();  // Clear the screen for each new frame
    int startPos = max(0, textLength - pos);  // Calculate start position of text
    lcd.setCursor(0, 0);  // Set the cursor to the first row
    lcd.print(text.substring(startPos));  // Print the part of the text
    delay(180);  // Adjust the delay for the speed of the sliding effect
  }
}
