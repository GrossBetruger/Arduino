int sensePin = 0;
int refereceRate = 75;
int lightSensorInput; 
int LEDOnThreshold = 900;
int LED = 13;

void setup() {
  analogReference(DEFAULT);
  pinMode(LED, OUTPUT);

  Serial.begin(9600); // speed of communications

}

void loop() {
  lightSensorInput = analogRead(sensePin);
  Serial.println(lightSensorInput);
  if (lightSensorInput < LEDOnThreshold) {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
  delay(refereceRate);
}

