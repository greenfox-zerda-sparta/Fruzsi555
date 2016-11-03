#include <string>
#include <iostream>

using namespace std;

struct RectangularCuboid {
  double a;
  double b;
  double c;
};

int get_surface(RectangularCuboid rect) {
  return 2 * (rect.a * rect.b + rect.b * rect.c + rect.c * rect.a);
}

int get_volume(RectangularCuboid rect) {
  return rect.a * rect.b * rect.c;
}

// Write a function called "get_surface" that takes a RectangularCuboid
// and returns it's surface

// Write a function called "get_volume" that takes a RectangularCuboid
// and returns it's volume

int main() {
  RectangularCuboid rect = {3, 4, 5};

  cout << "Surface is: " << get_surface(rect) << endl;
  cout << "Volume is: " << get_volume(rect);

  return 0;
}
