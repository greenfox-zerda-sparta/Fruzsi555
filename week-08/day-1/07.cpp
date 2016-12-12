// Create a function like macro, that get's one parameter.
// This macro should print out that paramter using cout.
// Illustrate that it works in Your main function.

#define _PRINT(x) std::cout << x << std::endl
#include <iostream>

int main() {

  _PRINT("harom");
  _PRINT(8);

  system("pause");
  return 0;
}