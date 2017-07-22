
int switchPin = 8;
int ledPin = 9;
int lastValue = LOW;
byte ledLevel = 0;

boolean debounce(int last){
  boolean current = digitalRead(switchPin);
  if (last != current){
    delay(5);
    current = digitalRead(switchPin);
  }
  return current;
}

void setup() {
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
//  digitalWrite(ledPin, digitalRead(switchPin));
//  digitalWrite(ledPin, lastValue);
//  boolean current = debounce(lastValue);
//  lastValue ^= current;

  boolean current = debounce(lastValue);
  if (!lastValue &current){
    ledLevel += 70;
  }

  
  lastValue = current;
  analogWrite(ledPin, ledLevel);
  
}
