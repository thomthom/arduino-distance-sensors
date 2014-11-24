/*
  IDistanceSensor.h - Base class for distance sensors.
  Created by Thomas Thomassen, 2014.
  Released under the MIT license.
*/
#ifndef IDistanceSensor_h
#define IDistanceSensor_h


class IDistanceSensor
{
public:
  IDistanceSensor(int pin) : pin_(pin) {}
  
  // Return the sensor data in mm.
  int read();

  virtual int minDistance();
  virtual int maxDistance();

  bool isValidDistance(int distance);
  
  // Read the raw value of the sensor.
  int readRaw();

protected:
  virtual int rawValueToMm(int sensorValue) = 0;

private:
  int pin_;
};


#endif
