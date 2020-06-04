int square5[9] = {5, 0, 1, 2, 4, 6, 8, 9, 10};
int square6[9] = {6, 1, 2, 3, 5, 7, 9, 10, 11};
int square9[9] = {9, 4, 5, 6, 8, 10, 12, 13, 14};
int square10[9] = {10, 5, 6, 7, 9, 11, 13, 14, 15};
int *squares[4] = {&square5[0], &square6[0], &square9[0], &square10[0]};
int beginFlag = 0;
int *squareSequence = squares[0];
void prog9() {

    col = squareSequence[0];
    progTime = 1000;
    partTime = progTime/16;
    if ((programRunTimer % progTime) > partTime*15) {
        for(int i=1; i < 9; i++){
            coordinate(1,squareSequence[i]);
        }
    }
    else if ((programRunTimer % progTime) > partTime*13) {
        for(int i=1; i < 9; i++){
            coordinate(2,squareSequence[i]);
        }
    }
    else if ((programRunTimer % progTime) > partTime*11) {
        for(int i=1; i < 9; i++){
            coordinate(3,squareSequence[i]);
        }
    }
    else if ((programRunTimer % progTime) > partTime*9) {
        for(int i=1; i < 9; i++){
            coordinate(4,squareSequence[i]);
        }
    }
    else if ((programRunTimer % progTime) > partTime*7) {
        coordinate(4,col);
    }
    else if ((programRunTimer % progTime) > partTime*6) {
        coordinate(3,col);
        coordinate(4,col);
    }
    else if ((programRunTimer % progTime) > partTime*3) {
        coordinate(2,col);
        coordinate(3,col);
    }
    else if ((programRunTimer % progTime) > partTime*1) {
        coordinate(1,col);
        coordinate(2,col);
        if (beginFlag == 1){
            beginFlag = 0;
        }
    }
    else if ((programRunTimer % progTime) > partTime*0) {
        coordinate(1,col);
        if (beginFlag == 0){
            beginFlag =1;
            squareSequence = squares[random(4)];
        }
    }


}
