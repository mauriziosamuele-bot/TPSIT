#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int a;

void setup()
{
  lcd.begin(16,2);
  lcd.print("Valore ADC");
}

void loop()
{
  a = analogRead(A0);
  lcd.setCursor(0, 1);
  lcd.print(a);
  lcd.print(" ");
  delay(200);
}