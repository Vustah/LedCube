void prog4()
{
  progTime = 1000;
  partTime = progTime/4;
  if (checkTime(progTime,partTime*3))
  {
    inclineRight();
  }
  else if (checkTime(progTime,partTime*2))
  {
    inclineBack();
  }
  else if (checkTime(progTime,partTime*1))
  {
    inclineLeft();
  }
  else if (checkTime(progTime,partTime*0))
  {
    inclineFront();
  }
}