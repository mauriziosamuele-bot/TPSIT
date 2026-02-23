int N;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  N = analogRead(A0);
  
	Serial.println(N);
}