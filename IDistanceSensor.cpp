#include "IDistanceSensor.h"

#include <Arduino.h>


int IDistanceSensor::read() {
  return rawValueToMm(readRaw());
}

int IDistanceSensor::readRaw() {
  return analogRead(A0);
}

bool IDistanceSensor::isValidDistance(int distance) {
  return distance >= minDistance() && distance <= maxDistance();
}
