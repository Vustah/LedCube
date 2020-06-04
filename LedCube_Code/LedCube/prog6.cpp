void prog6() {
  col = 0;
  progTime = 1000;
  partTime = progTime/7;
  if ((programRunTimer % progTime) > partTime*6) {
    for (int i = 4; i > 0; i--) {
      for (int j = 0; j < 4; j++) {
        coordinate(i, col);
        col++;
      }
    }
  }
  else if ((programRunTimer % progTime) > partTime*5) {
    for (int i = 3; i > 1; i--) {
      for (int j = 0; j < 8; j++) {
        coordinate(i, col);
        col++;
      }
    }
  }
  else if ((programRunTimer % progTime) > partTime*4) {
    for (int i = 2; i < 4; i++) {
      for (int j = 0; j < 8; j++) {
        coordinate(i, col);
        col++;
      }
    }
  }
  else if ((programRunTimer % progTime) > partTime*3) {
    for (int i = 1; i < 5; i++) {
      for (int j = 0; j < 4; j++) {
        coordinate(i, col);
        col++;
      }
    }
  }
  else if ((programRunTimer % progTime) > partTime*2) {
    for (int i = 2; i < 4; i++) {
      for (int j = 0; j < 8; j++) {
        coordinate(i, col);
        col++;
      }
    }
  }
  else if ((programRunTimer % progTime) > partTime*1) {
    for (int i = 3; i > 1; i--) {
      for (int j = 0; j < 8; j++) {
        coordinate(i, col);
        col++;
      }
    }
  }
  else if ((programRunTimer % progTime) > partTime*0) {
    for (int i = 4; i > 0; i--) {
      for (int j = 0; j < 4; j++) {
        coordinate(i, col);
        col++;
      }
    }
  }
}