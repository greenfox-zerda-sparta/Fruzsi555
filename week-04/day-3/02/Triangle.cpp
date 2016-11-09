#include <iostream>
#include <string>
#include "Shape.h"
#include "Triangle.h"

using namespace std;

string* Triangle::getName() {
  return new string("Triangle");
}

Triangle::~Triangle() {
}
