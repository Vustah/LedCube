//Handeling of 7Segment Display
void display7Segment(int progNumber, int delayTime_ms)
{
  if (checkTime(delayTime_ms))
  {
    sendNumber(progNumber % 10, 0);
  }
  else
  {
    sendNumber(progNumber / 10, 1);
  }
}

void sendNumber(int number, int digit)
{
  if (digit == 0)
  {
    digitalWrite(write_number0, LOW);
    digitalWrite(write_number1, HIGH);
  }
  else if (number > 0)
  {
    digitalWrite(write_number0, HIGH);
    digitalWrite(write_number1, LOW);
  }
  else
  {
    return;
  }

  int SegWrite[4];
  calcBinaryValue(number, &SegWrite[0]);

  for (int i = 0; i < 4; i++)
  {
    digitalWrite(SegBit[i], SegWrite[i]);
  }
}