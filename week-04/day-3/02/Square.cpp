#include <iostream>
#include <string>
#include "Shape.h"
#include "Square.h"

using namespace std;

string* Square::getName() {
  return new string("Square");
}

Square::~Square() {
}
