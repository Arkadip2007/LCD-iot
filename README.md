# LCD-iot

https://github.com/user-attachments/assets/70dd9659-596d-4aff-8af1-8dd2c8cdbd11

## Slide Text

```cpp
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
```

---

## Normal Text

<p align="center">
  <img src="https://github.com/user-attachments/assets/e649d1b7-9742-471b-b64e-d0848bd303ad" alt="Image 1" width="46%" style="margin-right: 10px;"/>
  <img src="https://github.com/user-attachments/assets/5a671c34-e5a5-4461-ac0c-20c3e398c184" alt="Image 2" width="46%" style="margin-right: 10px;"/>
</p>

<img align="right" alt="servo" width="45%" src="https://github.com/user-attachments/assets/a57d6876-6cf3-43a0-a774-8a33723bf9ea">

```cpp
//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(3,0);
  lcd.print("Hello, world!");
  lcd.setCursor(2,1);
  lcd.print("I am ARKADIP");
   lcd.setCursor(0,2);
  lcd.print("MAHAPATRA");
   lcd.setCursor(2,3);
  lcd.print("04 MARCH, 2025");
}


void loop()
{
}
```


