void prog1()
{
  int programDuration = 1000;
  if (checkTime(programDuration))
  {
    coordinate(3, 5);
    coordinate(2, 9);
    coordinate(3, 10);
    coordinate(2, 6);
  }
  else
  {
    coordinate(2, 5);
    coordinate(3, 9);
    coordinate(2, 10);
    coordinate(3, 6);
  }
}