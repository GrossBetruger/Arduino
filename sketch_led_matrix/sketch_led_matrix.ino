

#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

#define PIN8 8
#define PIN9 9
#define PIN10 10
#define PIN11 11
#define PIN12 12
#define PIN13 13


void setup() {
  pinMode(PIN0, OUTPUT);
  pinMode(PIN1, OUTPUT);
  pinMode(PIN2, OUTPUT);
  pinMode(PIN3, OUTPUT);
  pinMode(PIN4, OUTPUT);
  pinMode(PIN5, OUTPUT);
  pinMode(PIN6, OUTPUT);
  pinMode(PIN7, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(PIN8, OUTPUT);
  pinMode(PIN9, OUTPUT);
  pinMode(PIN10, OUTPUT);
  pinMode(PIN11, OUTPUT);
  pinMode(PIN12, OUTPUT);
  pinMode(PIN13, OUTPUT);

}

void chaos(){
  for (int i = 0; i < 14; i++){
    analogWrite(i, random(150));
  }
}


void lightLower(){
    for (int i = 0; i < 7; i++){
    digitalWrite(i, HIGH);
  }
  digitalWrite(A0, HIGH);
  digitalWrite(A1, HIGH);

}


void lightHigher(){
    for (int i = 8; i < 14; i++){
    digitalWrite(i, HIGH);
  }
}

void smiley(){
   digitalWrite(11, HIGH);
   digitalWrite(1, HIGH);
}

void exmp(){
  for (int i = 0; i < 7; i ++){
    digitalWrite(i, HIGH);
    delay(500);
    digitalWrite(i, LOW);

  }
  digitalWrite(A0, HIGH);
  delay(500);
  digitalWrite(A0, LOW);

  digitalWrite(A1, HIGH);
  digitalWrite(A1, LOW);
  
}


void randLower(){
  for (int i = 0; i < 8; i++){
    digitalWrite(i, random(2));
  }
}

void loop() {
  chaos();
  delay(200);
//  randLower();
//  int i = 11;
//  digitalWrite(i, HIGH);
//  delay(300);
//  digitalWrite(i, LOW);
//  delay(300);


//  smiley();


  
//  digitalWrite(PIN0, HIGH);
//  digitalWrite(PIN1, HIGH);
//  digitalWrite(PIN2, HIGH);
//  digitalWrite(PIN3, HIGH);
//  digitalWrite(PIN4, HIGH);
//  digitalWrite(PIN5, HIGH);
//  digitalWrite(PIN6, HIGH);
//  digitalWrite(PIN7, HIGH);
//
//
//  digitalWrite(PIN8, HIGH);
//  digitalWrite(PIN9, HIGH);
//  digitalWrite(PIN10, HIGH);
//  digitalWrite(PIN11, HIGH);
//  digitalWrite(PIN12, HIGH);
//  digitalWrite(PIN13, HIGH);


}
