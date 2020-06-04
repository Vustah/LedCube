void prog8() {
    progTime = 1000;
    partTime = progTime/22;
    if ((programRunTimer % progTime) > partTime*18) {
        for(int i=0; i < numOuterLEDs; i++){
            coordinate(1,outerLEDs[i]);
        }
    }
    else if ((programRunTimer % progTime) > partTime*15) {
        for(int i=0; i < numOuterLEDs; i++){
            coordinate(2,outerLEDs[i]);
        }
    }
    else if ((programRunTimer % progTime) > partTime*12) {
        for(int i=0; i < numOuterLEDs; i++){
            coordinate(3,outerLEDs[i]);
        }
    }
    else if ((programRunTimer % progTime) > partTime*9) {
        for(int i=0; i < numOuterLEDs; i++){
            coordinate(4,outerLEDs[i]);
        }
    }
    else if ((programRunTimer % progTime) > partTime*7) {
        for(int i=0; i < numInnerLESs; i++){
            coordinate(4,innerLEDs[i]);
        }
    }
    else if ((programRunTimer % progTime) > partTime*6) {
        for(int i=0; i < numInnerLESs; i++){
            coordinate(3,innerLEDs[i]);
            coordinate(4,innerLEDs[i]);
        }
    }
    else if ((programRunTimer % progTime) > partTime*3) {
        for(int i=0; i < numInnerLESs; i++){
            coordinate(2,innerLEDs[i]);
            coordinate(3,innerLEDs[i]);
        }
    }
    else if ((programRunTimer % progTime) > partTime*1) {
        for(int i=0; i < numInnerLESs; i++){
            coordinate(1,innerLEDs[i]);
            coordinate(2,innerLEDs[i]);
        }
    }
    else if ((programRunTimer % progTime) > partTime*0) {
        for(int i=0; i < numInnerLESs; i++){
            coordinate(1,innerLEDs[i]);
        }
    }
}
