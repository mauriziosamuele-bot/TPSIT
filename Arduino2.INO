#include <Wire.h>
// SLAVE (ricevitore)
void setup(){

    Wire.begin(9); // Collegamento Indirizzo 9
    Serial.begin(115200);
    Wire.onReceive(receiveEvent);
}

void loop(){

    delay(100);
}

void receiveEvent(int howMany){
    while(Wire.available()){
        int c = Wire.read();
        Serial.println(c);
    }
}