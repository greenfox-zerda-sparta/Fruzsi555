#include <iostream>

using namespace std;

int main() {
  int* pointer = NULL;

  // Please allocate a 10 long array and fill it with numbers from 0 to 9, then print the whole array
  // Please delete the array before the program exits
  pointer = new int[10];

  for (int i = 0; i < 10; ++i) {
    pointer[i] = i;
  }
  for (int i = 0; i < 10; ++i) {
      cout << pointer[i] << ", ";
  }

  delete []pointer;
  //pointer = NULL;

  return 0;
}
