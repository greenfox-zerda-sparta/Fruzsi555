#include <iostream>
#include <string>
#include "Car.h"


Car::Car(std::string in_type, double in_km) {
  this->type = in_type;
  this->km = in_km;
};
void Car::run(double run) {
  this->km = this->km + run;
};
double Car::get_km() {
  return this->km;
}

// Create a class called "Car"
// It should have a "type" property that stores the car's type in a string eg: "Mazda"
// It should have a "km" property that stores how many kilometers it have run
// The km and the type property should be a parameter in the constructor
// It should have a method called "run" that takes a number and increments the "km" property by it
