int SegBit0 = A0;
int SegBit1 = A1;
int SegBit2 = A2;
int SegBit3 = A3;
int write_number0 = A4;
int write_number1 = A5;

int progSelectDown = 6;
int progSelectUp = 7;

void setup() {


  pinMode(progSelectDown, INPUT);
  pinMode(progSelectUp, INPUT);
  pinMode(SegBit0, OUTPUT);
  pinMode(SegBit1, OUTPUT);
  pinMode(SegBit2, OUTPUT);
  pinMode(SegBit3, OUTPUT);
  pinMode(write_number0, OUTPUT);
  pinMode(write_number1, OUTPUT);
  Serial.begin(9600); //For reading from the device.
}

int counterTime = 0;
int waitTime = 10000; //us
float delayTime = 5;
int program = 0;

int progNumber = 0;
int LastReadDown = 0;
int LastReadUp = 0;
int progBtnState = 0;

void loop() {
  progNumber = ProgCount();
}


//Handeling of 7Segment Display

int ProgCount() {
  progNumber = decrementProgNumber(progNumber);
  progNumber = incrementProgNumber(progNumber);
  progNumber = checkProgNumber(progNumber);

  counterTime = 0;
  if (progNumber > 9) {
    sendNumber(progNumber - 10, 0);
    delay(delayTime);
    sendNumber(1, 1);
    delay(delayTime);
  }
  else {
    sendNumber(progNumber, 0);
    delay(delayTime * 2);
  }
  return progNumber;
}


int decrementProgNumber(int progNumber) {
  progBtnState = digitalRead(progSelectDown);
  if (progBtnState  == 1 and LastReadDown == 0) {
    progNumber--;
    LastReadDown = 1;
  }
  else if (progBtnState == 0 and LastReadDown == 1) {
    LastReadDown = 0;
  }
  return progNumber;
}

int incrementProgNumber(int progNumber) {
  progBtnState = digitalRead(progSelectUp);
  if (progBtnState == 1 and LastReadUp == 0) {
    progNumber++;
    LastReadUp = 1;
  }
  else if (progBtnState == 0 and LastReadUp == 1) {
    LastReadUp = 0;
  }
  return progNumber;
}

int checkProgNumber(int progNumber) {
  if (progNumber > 15) {
    progNumber = 0;
  }
  else if (progNumber < 0) {
    progNumber = 15;
  }
  return progNumber;
}

void sendNumber(int number, int digit) {
  if (digit == 0) {
    digitalWrite(write_number0, LOW);
    digitalWrite(write_number1, HIGH);
  }
  else {
    digitalWrite(write_number0, HIGH);
    digitalWrite(write_number1, LOW);
  }
  digitalWrite(SegBit0, LOW);
  digitalWrite(SegBit1, LOW);
  digitalWrite(SegBit2, LOW);
  digitalWrite(SegBit3, LOW);
  int a = number;
  int b = a / 2;
  int c = b / 2;
  int d = c / 2;

  int SegBit0_write = a % 2;
  int SegBit1_write = b % 2;
  int SegBit2_write = c % 2;
  int SegBit3_write = d % 2;

  digitalWrite(SegBit0, SegBit0_write);
  digitalWrite(SegBit1, SegBit1_write);
  digitalWrite(SegBit2, SegBit2_write);
  digitalWrite(SegBit3, SegBit3_write);

}
