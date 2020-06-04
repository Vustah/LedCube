#include "programs.h"
#include "InclinedPlanes.cpp"
#include "prog1.cpp"
#include "prog2.cpp"
#include "prog3.cpp"
#include "prog4.cpp"
#include "prog5.cpp"
#include "prog6.cpp"
#include "prog7.cpp"
#include "prog8.cpp"
#include "prog9.cpp"
#include "prog10.cpp"
#include "prog11.cpp"
#include "prog12.cpp"
#include "prog13.cpp"
#include "prog14.cpp"
#include "prog15.cpp"



//Handeling of LedCube
void SetProgram(int progNumber) {
  progTimer = millis();
  programRunTimer = (progTimer - startProgTimer);
  switch (progNumber) {
    case 1:
      prog1();
      break;
    case 2:
      prog2();
      break;
    case 3:
      prog3();
      break;
    case 4:
      prog4();
      break;
    case 5:
      prog5();
      break;
    case 6:
      prog6();
      break;
    case 7:
      prog7();
      break;
    case 8:
      prog8();
      break;
    case 9:
      prog9();
      break;
    case 10:
      prog10();
      break;
    case 11:
      prog11();
      break;
    case 12:
      prog12();
      break;
    case 13:
      prog13();
      break;
    case 14:
      prog14();
      break;
    case 15:
      prog15();
      break;
    default:
      LEDsOff();
      break;
  }
}

//Programs
void initRun() {
  for (int i = 1; i <= numOfLayers ; i++) {
    for (int j = 0; j < numOfCollums ; j++) {
      coordinate(i, openingSequenceP1[j]);
      delay(50);
    }
  }
  int l = 4;
  for ( int i = 0; i < 9; i++) {
    if (i > 5) {
      l--;
    }
    coordinate(l, openingSequenceP2[i]);
    delay(50);
  }
  LEDsOff();
}
