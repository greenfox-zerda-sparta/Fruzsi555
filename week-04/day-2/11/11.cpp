#include <iostream>
#include <string>
#include "Triangle.h"

using namespace std;

int main() {

  Triangle christmas(10);
  christmas.draw_halftree();
  christmas.draw_tree();
  christmas.diamond();

  return 0;
}
