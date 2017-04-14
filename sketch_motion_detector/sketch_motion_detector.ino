#define TRIGGER 2
#define ECHO 3
#define COMMS_SPEED 9600
#define COMMS_WAIT 75
#define SONAR_WAIT 10
#define SONAR_LONG_WAIT 50
#define LED 9

long get_distance() {
  //  output low to make sure signal is clean
  digitalWrite(TRIGGER, LOW);
  delayMicroseconds(2);
  //  shot 10 microseconds trigger wave
  digitalWrite(TRIGGER, HIGH);
  delayMicroseconds(SONAR_WAIT);
  digitalWrite(TRIGGER, LOW);

  // listen to echo pulse
  unsigned long pulseLength = pulseIn(ECHO, HIGH);

  // let ultrasonic beep fade
  delay(SONAR_LONG_WAIT);
  return pulseLength;

}

void setup() {
  pinMode(TRIGGER, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(COMMS_SPEED);

}

void loop() {
  unsigned long distance = get_distance();
  Serial.println(distance);
  if (distance < 2500) digitalWrite(LED, HIGH);
  else digitalWrite(LED, LOW);
  delay(COMMS_WAIT);


}
