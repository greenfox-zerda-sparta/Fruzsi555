#include <iostream>
#include <string>
#ifndef CAR_H
#define CAR_H

class Car {
  public:
    Car(std::string in_type, double in_km);
    void run(double run);
    double get_km();
  private:
    std::string type;
    double km;
};

#endif // CAR_H


// Create a class called "Car"
// It should have a "type" property that stores the car's type in a string eg: "Mazda"
// It should have a "km" property that stores how many kilometers it have run
// The km and the type property should be a parmeter in the constructor
// It should have a method called "run" that takes a number and increments the "km" property by it
