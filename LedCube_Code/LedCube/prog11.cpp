int randomLayer = 1;
int randomLayer2 = 2;
int randomCol2 = 2;

void prog11() {
    progTime = 350;
    partTime = progTime/100; 
    if ((programRunTimer % progTime) > partTime*5) {
        coordinate(randomLayer,randomCol);
        coordinate(randomLayer2,randomCol2);
        if (beginFlag == 1){
            beginFlag = 0;
        }
    }
    else if ((programRunTimer % progTime) > partTime*0) {
        if (beginFlag == 0){
                beginFlag =1;
                randomCol = random(16);
                randomLayer = random(4)+1;
                randomCol2 = random(16);
                randomLayer2 = random(4)+1;
        }
    }
}
