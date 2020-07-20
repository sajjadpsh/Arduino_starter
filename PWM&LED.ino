#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int analog = A1;
int pwm = 10;
int value = 0;

void setup()
{
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.print("SajjadPishvaeian9531015");
  pinMode(pwm, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  value = analogRead(analog);
  lcd.setCursor(0, 1);
  value = 255 - ((float)value/ 1023.0 )* 127.0 ;
  lcd.print(value);
  analogWrite(pwm, value);
  delay(1000);
}
