// Create a function like macro, that gets an expression as it's input.
// If the expression is false, it should print out some error message.

#include <iostream>
#define MY_MAX(a) {a ? std::cout << #a : std::cout << "error" << std::endl;}

int main() {

  MY_MAX(3 > 7);

  system("pause");
  return 0;
}
