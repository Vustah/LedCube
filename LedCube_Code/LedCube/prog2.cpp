void prog2() {
  if ((programRunTimer % 1000) > 500) {
    coordinate(2, 5);
    coordinate(3, 5);
    coordinate(2, 6);
    coordinate(3, 6);
    coordinate(2, 9);
    coordinate(3, 9);
    coordinate(3, 10);
    coordinate(2, 10);
  } else {
    coordinate(0, 0);
    coordinate(0, 1);
    coordinate(0, 2);
    coordinate(0, 3);
    coordinate(0, 4);
    coordinate(0, 8);
    coordinate(0, 7);
    coordinate(0, 11);
    coordinate(0, 12);
    coordinate(0, 13);
    coordinate(0, 14);
    coordinate(0, 15);
  }
}