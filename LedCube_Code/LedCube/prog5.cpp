void prog5() {
  coordinate(layerState, outerLEDs[circleState]);

  if (10 < circleState or circleState < 2) {
    coordinate(layerState, innerLEDs[0]);
  }
  else if (circleState < 5) {
    coordinate(layerState, innerLEDs[1]);
  }
  else if (circleState < 8) {
    coordinate(layerState, innerLEDs[3]);
  }
  else if (circleState < 11) {
    coordinate(layerState, innerLEDs[2]);
  }

  if (programRunTimer - lastChangedState  > changeTimer) {
    lastChangedState = programRunTimer;
    circleState++;
  } else {
    lastCircleState = circleState;
  }

  switch (DIR) {
    case UP:
      if (circleState > numOuterLEDs - 1) {
        layerState++;
        circleState = 0;
      }
      if (layerState > 4) {
        DIR = DOWN;
        layerState--;

      }
      break;
    case DOWN:
      if (circleState % 3 == 2 and lastCircleState != circleState) {
        layerState--;
      }
      if (layerState < 1) {
        DIR = UP;
      }
      break;
  }

}