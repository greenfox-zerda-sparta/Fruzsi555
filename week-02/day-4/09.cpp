#include <iostream>

using namespace std;

void diamond_center(int number) {
  for (int i = 1; i <= number / 2; i++) {
      for (int j = number / 2; j > i; j--) {
        cout << ' ';
      }
      for (int k = 1; k < 2 * i; k++) {
        cout << '*';
      }
      cout << endl;
  }
  for (int i = number / 2 - 1; i >= 1; i--) {
      for (int j = number/2; j > i; j--) {
        cout << ' ';
      }
      for (int k =1; k < 2 * i; k++) {
        cout << '*';
      }
      cout << endl;
  }
}


int main() {
  // Create a function that takes a number and prints a diamond like this:
  //
  //      *
  //     ***
  //    *****
  //   *******
  //  *********
  // ***********
  //  *********
  //   *******
  //    *****
  //     ***
  //      *
  //
  // The diamond should have as many lines as the value in the argument

  int number = 8;

  diamond_center(number);

  return 0;
}
