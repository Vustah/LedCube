#include <Stdint.h>

int tickData = 12;
int progNumber;
char incomingData;

int CubeCollumBit[4] = {2, 3, 4, 5};

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(CubeCollumBit[i], OUTPUT);
  }
  for (int i = 0; i < 4; i++) {

    digitalWrite(CubeCollumBit[i], HIGH);
  }
  pinMode(tickData, OUTPUT);

  Serial.begin(115200); //For reading from the device.
}



void loop() {
  readTerminal();
  Serial.println(progNumber);
  SetProgram(progNumber);
  /*
  Serial.println(progNumber);
  progNumber++;
  if (progNumber > 15) {
    progNumber = 0;
  }
  delay(1000);
    */
}

void readTerminal() {
  if (Serial.available() > 0) {
    Serial.println("hei");
    incomingData = Serial.read();
    progNumber = atoi(&incomingData);

  }
}

//Handeling of LedCube
void SetProgram(int progNumber) {
  writeCollum(progNumber);
}



void writeCollum(int collumNumber) {

  int binCollumNumber[4];
  calcBinaryValue(collumNumber, &binCollumNumber[0]);


  int writeStatus = 0;
  for (int i = 3; i >= 0 ; i--) {

    writeStatus = binCollumNumber[i];
    digitalWrite(CubeCollumBit[i], writeStatus);
    Serial.print(writeStatus);
    if (i == 0){Serial.println("\n");}
  }
  //Latch the number into the mux
  digitalWrite(tickData, HIGH);
  delay(1);
  digitalWrite(tickData, LOW);

}
