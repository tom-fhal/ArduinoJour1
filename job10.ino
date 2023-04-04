int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int brightness = 0; 
  
 
  while (brightness <= 255) {
    analogWrite(ledPin, brightness); 
    brightness++; 
    delay(10); 
  }
}