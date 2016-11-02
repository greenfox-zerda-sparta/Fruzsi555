#include <iostream>

using namespace std;

/**
 * Create a function called "range" that creates a new array and returns a pointer to it.
 * It should fill the array with numbers based on it's parameters.
 * It should take 3 parameters:
 * int from: the first number in the array
 * int to: it will fill the array till it would reach this number (so this number is not in the array)
 * int step: the step between the numbers
 *
 * Examples:
 * range(0, 10, 2) -> {0, 2, 3, 4, 5, 6, 8}
 * range(1, -8, -3) -> {1, -2, -5}
 *
 * It should delete any dynamically allocated resource before the program exits.
 */

int* range(int from, int to, int step) {
  int length = (to - from) / step;
  int* arr = new int[length];
  for (int i = 0; i < length; i++) {
    arr[i] = from;
    from += step;
  }
  return arr;
}

int main() {

  int from = 0;
  int to = 10;
  int step = 2;
  int* array = range(from, to, step);

  int length = (to - from) / step;
  for (int i = 0; i < length; i++) {
    cout << array[i] << endl;
  }

  delete[] array;

  return 0;
}
