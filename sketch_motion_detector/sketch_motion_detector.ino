#define TRIGGER 2
#define ECHO 3
#define COMMS_SPEED 9600
#define COMMS_WAIT 75
#define SONAR_WAIT 10
#define SONAR_LONG_WAIT 50
#define LED 9
#define BUZZER 10
#define ALARM_DISTANCE 12000

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
  pinMode(BUZZER, OUTPUT);
  Serial.begin(COMMS_SPEED);

}

void loop() {
  unsigned long distance = get_distance();
  Serial.println(distance);
  boolean alarm = (distance < ALARM_DISTANCE);
  digitalWrite(LED, alarm);
  if (alarm) tone(BUZZER, alarm*5);
  else noTone(BUZZER);
  delay(COMMS_WAIT);

}
