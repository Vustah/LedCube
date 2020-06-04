
void inclineFront()
{
  int col = 0;
  for (int i = 1; i < 5; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      coordinate(i, (j * 4) + i - 1);
    }
  }
}

void inclineBack()
{
  int col = 0;
  for (int i = 1; i < 5; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      coordinate(i, (j * 4) + (5 - i) - 1);
    }
  }
}

void inclineLeft()
{
  int col = 0;
  for (int i = 1; i < 5; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      coordinate(i, col);
      col++;
    }
  }
}

void inclineRight()
{
  int col = 0;
  for (int i = 4; i > 0; i--)
  {
    for (int j = 0; j < 4; j++)
    {
      coordinate(i, col);
      col++;
    }
  }
}
