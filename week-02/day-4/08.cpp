#include <iostream>

using namespace std;

void triangle_center(int number) {
  for (int i = 1; i <= number; i++) {
    for (int j = number; j > i; j--) {
      cout << ' ';
    }
    for (int k = 1; k < 2 * i; k++) {
      cout << '*';
    }
    cout << endl;
  }
}

int main() {
  // Create a function that takes a number and prints a triangle like this:
  //
  //      *
  //     ***
  //    *****
  //   *******
  //  *********
  // ***********
  //
  // The triangle should have as many lines as the value in the argument

  int number = 5;

  triangle_center(number);

  return 0;
}
