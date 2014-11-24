/*
  SharpGP2D120X.h - Implementation of SharpGP2D120X sensor.
  Created by Thomas Thomassen, 2014.
  Released under the MIT license.
*/
#ifndef SharpGP2D120X_h
#define SharpGP2D120X_h


#include "IDistanceSensor.h"


class SharpGP2D120X : public IDistanceSensor
{
public:
  SharpGP2D120X(int pin) : IDistanceSensor(pin) {}

  int minDistance();
  int maxDistance();

protected:
  int rawValueToMm(int sensorValue);
};


#endif
