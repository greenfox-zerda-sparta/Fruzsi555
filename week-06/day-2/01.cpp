#include <iostream>
using namespace std;

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.

int main() {
  try {
    int positive = -25;
    if (positive < 0) {
      throw 99;
    }
  } catch (int x) {
    cout << "Positive number cannot be below 0, ERROR NUMBER: " << x;
  }
  return 0;
}
