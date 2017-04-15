#include <Servo.h>

#define MOTOR 10
#define WAIT 15
#define SPEED 3
#define COMMS_SPEED 9600

boolean MOTOR_ON = LOW;
int pos; 
int ITERS = 5;
Servo servo;

void setup() {
  servo.attach(MOTOR);
  Serial.begin(COMMS_SPEED);

}

void activateMotor(int speed){
  for (pos = 0; pos < 180; pos += speed) {
      servo.write(pos);
      delay(WAIT);
  }
  for (pos = 180; pos > 0; pos -= speed) {
      servo.write(pos);
      delay(WAIT);
  }
  
}

void loop() {
  if (ITERS > 0) {
    Serial.println(ITERS);
    activateMotor(SPEED);
    ITERS --;
  }

}
