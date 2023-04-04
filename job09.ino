int leds[] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  int i = 0;
  while (i < 8) {
    pinMode(leds[i], OUTPUT);
    i++;
  }
}

void loop() {
  int i = 0;
  while (i < 8) {
    digitalWrite(leds[i], HIGH); 
    delay(250); 
    digitalWrite(leds[i], LOW); 
    i++;
  }
}