#define WAIT 1000

int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;

int zero [] = {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW};
int one [] = {LOW, LOW, LOW, LOW, HIGH, HIGH, LOW};
int two [] = {HIGH, HIGH, LOW, HIGH, HIGH, LOW, HIGH};
int three [] = {HIGH, LOW, LOW, HIGH, HIGH, HIGH, HIGH};
int four [] = {LOW, LOW, HIGH, LOW, HIGH, HIGH, HIGH};
int five [] = {HIGH, LOW, HIGH, HIGH, LOW, HIGH, HIGH};
int six [] = {HIGH, HIGH, HIGH, HIGH, LOW, HIGH, HIGH};
int seven [] = {LOW, LOW, LOW, HIGH, HIGH, HIGH, LOW};
int eight [] = {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH};
int nine [] = {HIGH, LOW, HIGH, HIGH, HIGH, HIGH, HIGH};

int allLow [] = {LOW, LOW, LOW, LOW, LOW, LOW, LOW};
int nums [10][7] = {{zero},
                  {one},
                  {two},
                  {three},
                  {four},
                  {five},
                  {six},
                  {seven},
                  {eight},
                  {nine}};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);      // open the serial port at 9600 bps:    
  
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);

}

void writeNumber(int numberCode []) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(i + 2, numberCode[i]);
  }
}

void lightI(int i){
  allLow[i] = HIGH;
}

void killI(int i){
  allLow[i] = LOW;
}

void lightLoop (){
   for (int i = 0; i < 7; i ++) {
      lightI(i);
      writeNumber(allLow);
      delay(20);
      killI(i);
  }
}
void loop() {
  // put your main code here, to run repeatedly:
//   Serial.print(nums[2][1]);
//  lightLoop();

  
  writeNumber(zero);
  delay(WAIT);
  writeNumber(one);
  delay(WAIT);
  writeNumber(two);
  delay(WAIT);
  writeNumber(three);
  delay(WAIT);
  writeNumber(four);
  delay(WAIT);
  writeNumber(five);
  delay(WAIT);
  writeNumber(six);
  delay(WAIT);
  writeNumber(seven);
  delay(WAIT);
  writeNumber(eight);
  delay(WAIT);
  writeNumber(nine);
  delay(WAIT);

}
