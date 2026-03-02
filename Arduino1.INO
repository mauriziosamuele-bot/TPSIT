#include <Wire.h>
// MASTER (trasmettitore)

int buttonState = 0;




void setup(){
    Wire.begin(); // Inizializzazione come master
    Serial.begin(115200);

}

void loop(){
    Wire.beginTransmission(9);
    Wire.write(1);
    Wire.endTransmission();
    delay(500);
}