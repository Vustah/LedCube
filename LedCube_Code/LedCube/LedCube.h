
int progSelectDown = 6;
int progSelectUp = 7;

int tickData = 12;

int CubeLayer[4] = {11, 10, 9, 8};
int CubeCollumBit[4] = {2, 3, 5, 4};

const int numOfCollums = 16;
const int numOfLayers = 4;
const int numOuterLEDs = 12;
const int numInnerLESs = 4;

int outerLEDs[numOuterLEDs] = {0, 1, 2, 3, 7, 11, 15, 14, 13, 12, 8, 4};
int innerLEDs[numInnerLESs] = {5, 6, 9, 10};

int openingSequenceP1[numOfCollums] = {0, 1, 2, 3, 7, 6, 10, 11, 15, 14, 13, 12, 8, 9, 5, 4};
int openingSequenceP2[9] = {0, 1, 2, 3, 7, 11, 10, 9, 8};

enum directionState
{
    UP,
    DOWN,
    RIGHT,
    LEFT,
    CLOCKWISE,
    COUNTERCLOCKWISE
};

unsigned int startProgTimer = 0;
unsigned int progTimer = 0;
unsigned int programRunTimer = 0;

int col;

int counterTime = 0;
float delayTime = 10;
int program = 0;

int progNumber = 0;
int LastReadDown = 0;
int LastReadUp = 0;
int progBtnState = 0;
int lastProgNumber = 0;



void allLEDsOn();
void LEDsOff();
void coordinate(int Layer, int Collum);
void writeLayer(int layerNumber);
void writeCollum(int collumNumber);
int ProgCount();
bool checkTime(int waitTime_ms);
bool checkTime(int waitTime_ms, int fractionTime);
void calcBinaryValue(int number, int *retNumber);
