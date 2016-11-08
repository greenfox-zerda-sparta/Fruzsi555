#include <iostream>
#include <cmath>
#include "Circle.h"

using namespace std;

const float Pi = 3.14;

Circle::Circle(float in_radius) {
  this->radius = in_radius;
};
float Circle::get_circumference() {
  return 2 * radius * Pi;
};
float Circle::get_area() {
  return pow(radius, 2) * Pi;
};

    // Create a `Circle` class that takes it's radius as constructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area
