#include "SharpGP2D120X.h"


int SharpGP2D120X::rawValueToMm(int sensorValue) {
  // http://www.tigoe.com/pcomp/code/arduinowiring/44/
  // http://www.acroname.com/articles/linearizing-sharp-ranger.html
  // Original code returned cm:
  //int cm = (2914 / (sensorValue + 5)) - 1;
  //return cm * 10;
  // We want mm:
  int mm = (29140 / (sensorValue + 5)) - 1;
  return mm;
}

int SharpGP2D120X::minDistance() {
  return 40;
}

int SharpGP2D120X::maxDistance() {
  return 300;
}