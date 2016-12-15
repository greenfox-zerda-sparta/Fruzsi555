#include <iostream>
#include <string>

using namespace std;

int happy_bunny_ears(unsigned int n) {
  if (n == 0) {
    return 0;
  }
  else {
    return 2 + happy_bunny_ears(n - 1);
  }
}

int main() {
  // We have a number of bunnies and each bunny has two big floppy ears.
  // We want to compute the total number of ears across all the bunnies
  // recursively (without loops or multiplication).

  cout << happy_bunny_ears(9) << endl;

  system("pause");
  return 0;
}