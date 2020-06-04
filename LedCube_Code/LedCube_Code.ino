#include <Arduino.h>
#include "LedCube/LedCube.h"
#include "LedCube/LedCube.cpp"
#include "LedCube/programs.cpp"
#include "7SegmentDisplay/SevenSegmentDisplay.h"
#include "7SegmentDisplay/SevenSegmentDisplay.cpp"

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(CubeLayer[i], OUTPUT);
    pinMode(CubeCollumBit[i], OUTPUT);
    pinMode(SegBit[i], OUTPUT);
  }
  initRun(); //init program

  pinMode(tickData, OUTPUT);

  pinMode(progSelectDown, INPUT);
  pinMode(progSelectUp, INPUT);
  pinMode(write_number0, OUTPUT);
  pinMode(write_number1, OUTPUT);
  Serial.begin(9600); //For reading from the device.
}


void loop() {
  progNumber = ProgCount();
  display7Segment(progNumber, delayTime);
  if (progNumber != lastProgNumber) {
    startProgTimer = millis();
  }
  SetProgram(progNumber);
  lastProgNumber = progNumber;
}


// Handeling of correct program number
int currentProgNumber = 0;
int ProgCount() {
  progNumber = decrementProgNumber(progNumber);
  progNumber = incrementProgNumber(progNumber);
  progNumber = checkProgNumber(progNumber);
  while (digitalRead(progSelectDown) and digitalRead(progSelectUp)) {
    allLEDsOn();
  }
  counterTime = 0;

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

//decimal to binary functions
int rest;
int result;
int div2remainder(int number) {
  result = number / 2;
  rest = number % 2;
}

void calcBinaryValue(int number, int * retNumber) {
  int tmpNumber = number;
  for (int i = 0; i < 4; i++) {
    div2remainder(tmpNumber);
    retNumber[i] = rest;
    tmpNumber = result;
  }
}

bool checkTime(int waitTime_ms) {
  return checkTime(waitTime_ms, waitTime_ms/2);
}

bool checkTime(int waitTime_ms, int fractionTime) {
  if ((programRunTimer%waitTime_ms) >= fractionTime) {
    return 1;
  }
  else {
    return 0;
  }
}
