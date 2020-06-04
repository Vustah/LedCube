void prog7() {
    progTime = 1000;
    partTime = progTime/6;
    if ((programRunTimer % progTime) > partTime*5) {
        coordinate(1, 0);
        coordinate(1, 4);
        coordinate(1, 8);
        coordinate(1, 12);

        coordinate(2, 1);
        coordinate(2, 5);
        coordinate(2, 9);
        coordinate(2, 13);

        coordinate(3, 2);
        coordinate(3, 6);
        coordinate(3, 10);
        coordinate(3, 14);

        coordinate(4, 3);
        coordinate(4, 7);
        coordinate(4, 11);
        coordinate(4, 15);
    }
    else if ((programRunTimer % progTime) > partTime*4) {
        coordinate(2, 0);
        coordinate(2, 4);
        coordinate(2, 8);
        coordinate(2, 12);

        coordinate(3, 1);
        coordinate(3, 5);
        coordinate(3, 9);
        coordinate(3, 13);

        coordinate(4, 2);
        coordinate(4, 6);
        coordinate(4, 10);
        coordinate(4, 14);

        coordinate(3, 3);
        coordinate(3, 7);
        coordinate(3, 11);
        coordinate(3, 15);
    }
    else if ((programRunTimer % progTime) > partTime*3) {
        coordinate(3, 0);
        coordinate(3, 4);
        coordinate(3, 8);
        coordinate(3, 12);

        coordinate(4, 1);
        coordinate(4, 5);
        coordinate(4, 9);
        coordinate(4, 13);

        coordinate(3, 2);
        coordinate(3, 6);
        coordinate(3, 10);
        coordinate(3, 14);

        coordinate(2, 3);
        coordinate(2, 7);
        coordinate(2, 11);
        coordinate(2, 15);
    }
    else if ((programRunTimer % progTime) > partTime*2) {
        coordinate(4, 0);
        coordinate(4, 4);
        coordinate(4, 8);
        coordinate(4, 12);

        coordinate(3, 1);
        coordinate(3, 5);
        coordinate(3, 9);
        coordinate(3, 13);

        coordinate(2, 2);
        coordinate(2, 6);
        coordinate(2, 10);
        coordinate(2, 14);

        coordinate(1, 3);
        coordinate(1, 7);
        coordinate(1, 11);
        coordinate(1, 15);
    }
    else if ((programRunTimer % progTime) > partTime*1) {
        coordinate(3, 0);
        coordinate(3, 4);
        coordinate(3, 8);
        coordinate(3, 12);

        coordinate(2, 1);
        coordinate(2, 5);
        coordinate(2, 9);
        coordinate(2, 13);

        coordinate(1, 2);
        coordinate(1, 6);
        coordinate(1, 10);
        coordinate(1, 14);

        coordinate(2, 3);
        coordinate(2, 7);
        coordinate(2, 11);
        coordinate(2, 15);
    }
    else if ((programRunTimer % progTime) > partTime*0) {
        coordinate(2, 0);
        coordinate(2, 4);
        coordinate(2, 8);
        coordinate(2, 12);

        coordinate(1, 1);
        coordinate(1, 5);
        coordinate(1, 9);
        coordinate(1, 13);

        coordinate(2, 2);
        coordinate(2, 6);
        coordinate(2, 10);
        coordinate(2, 14);

        coordinate(3, 3);
        coordinate(3, 7);
        coordinate(3, 11);
        coordinate(3, 15);
    }
}
