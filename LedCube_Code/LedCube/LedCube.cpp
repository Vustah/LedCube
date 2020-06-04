//Handeling of ledCube
void allLEDsOn()
{
    for (int i = 0; i < numOfCollums; i++)
    {
        coordinate(0, i);
    }
}

void LEDsOff()
{
    writeCollum(0);
    writeLayer(-1);
}

void coordinate(int Layer, int Collum)
{
    writeLayer(Layer);
    writeCollum(Collum);
}

void writeLayer(int layerNumber)
{

    for (int l = 0; l < numOfLayers; l++)
    {
        digitalWrite(CubeLayer[l], HIGH);
    }

    switch (layerNumber)
    {
    case 0:
        for (int l = 0; l < numOfLayers; l++)
        {
            digitalWrite(CubeLayer[l], LOW);
        }
        break;
    case 1:
        digitalWrite(CubeLayer[0], LOW);
        break;
    case 2:
        digitalWrite(CubeLayer[1], LOW);
        break;
    case 3:
        digitalWrite(CubeLayer[2], LOW);
        break;
    case 4:
        digitalWrite(CubeLayer[3], LOW);
        break;
    default:
        digitalWrite(CubeLayer[0], HIGH);
        digitalWrite(CubeLayer[1], HIGH);
        digitalWrite(CubeLayer[2], HIGH);
        digitalWrite(CubeLayer[3], HIGH);
        break;
    }
}

void writeCollum(int collumNumber)
{
    extern int CubeCollumBit[4];
    extern int tickData;
    int binCollumNumber[4];

    calcBinaryValue(collumNumber, &binCollumNumber[0]);

    int writeStatus = 0;
    for (int i = 3; i >= 0; i--)
    {
        writeStatus = binCollumNumber[i];
        digitalWrite(CubeCollumBit[i], writeStatus);
    }

    //Latch the number into the mux
    digitalWrite(tickData, HIGH);
    delay(1);
    digitalWrite(tickData, LOW);
}
