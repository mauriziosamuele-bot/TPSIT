void setup() {
  pinMode(2, OUTPUT);      
  pinMode(3, INPUT_PULLUP);
}

void loop() {
 
  int statoBottone = digitalRead(3);
  
  if (statoBottone == LOW) {
    digitalWrite(2, HIGH); 
  } else {
    digitalWrite(2, LOW); 
  }
}