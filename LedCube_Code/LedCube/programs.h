int circleState = 0;
int layerState = 1;
int lastChangedState = 0;
int lastCircleState = circleState - 1;
int changeTimer = 75;
directionState DIR = UP;
int progTime;
int partTime;

void SetProgram(int progNumber);
void initRun();
