int firstLED = 11;
int lastLED = 13;
int DELAY = 400;
int INTERVAL = 5;

void setup() {
  // setting up output for LEDs:
  for (int led = firstLED; led < lastLED + 1; led++)
  {
    pinMode(led, OUTPUT);
  }

}

void loop() {
  // light LEDs:
  for (int led = firstLED; led < lastLED + 1; led++)
  {
    digitalWrite(led, HIGH);
    delay(DELAY);
    DELAY -= INTERVAL;
  }
  

}
