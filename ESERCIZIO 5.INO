#include <Wire.h>

#include<LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x20, 16, 2);

int A;

void setup{
  findAddress();
  
  lcd.init;
  lcd.backlight();
  
  lcd.setCursor(0,0);
  lcd.Print("Valore ADC");
}

void loop{
  A = analogRead(A0);
 
  lcd.setCursor(0,1);
  lcd.Print(A);
  lcd.Print(" ");
  
  delay(200);
}

void findAddress(){
  Wire.begin();
  Serial.begin(9600);
  Serial.println("Scanning I2C devices...");
  
  for(byte address=1; address<127; address++;){
    Wire.beginTransmission(address);
    
    if(Wire.endTransmission() == 0){
		Serial.print("Device found at 0x");
		Serial.println(address, HEX);
		
    	}
	}
}