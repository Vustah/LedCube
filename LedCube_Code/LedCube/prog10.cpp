int randomCol = 0;
void prog10()

{
    progTime = 750;
    partTime = progTime / 7;
    if ((programRunTimer % progTime) > partTime * 6)
    {
        coordinate(1, randomCol);
    }
    else if ((programRunTimer % progTime) > partTime * 5)
    {
        coordinate(2, randomCol);
    }
    else if ((programRunTimer % progTime) > partTime * 4)
    {
        coordinate(3, randomCol);
    }
    else if ((programRunTimer % progTime) > partTime * 3)
    {
        coordinate(4, randomCol);
    }
    else if ((programRunTimer % progTime) > partTime * 2)
    {
        coordinate(3, randomCol);
    }
    else if ((programRunTimer % progTime) > partTime * 1)
    {
        coordinate(2, randomCol);
        if (beginFlag == 1)
        {
            beginFlag = 0;
        }
    }
    else if ((programRunTimer % progTime) > partTime * 0)
    {
        for (int i = 0; i < numOfCollums; i++)
        {
            coordinate(1, i);
        }
        if (beginFlag == 0)
        {
            beginFlag = 1;
            randomCol = random(16);
        }
    }
}
