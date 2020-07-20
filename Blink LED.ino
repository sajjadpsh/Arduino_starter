#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int digitalPin = 0;

void setup() {
  lcd.begin(16, 2);
  lcd.print("SajjadPishvaeian9531015");

  pinMode(digitalPin, OUTPUT);
}

void loop() {
  digitalWrite(digitalPin, LOW);
  delay(5000);
  digitalWrite(digitalPin, HIGH);
  delay(3000);
}
