// Create a constant using a prepocesor directive.
// Print it out to the console.
// Undefine it. And then redefine it with a new value.
// Print it out again.

#include <iostream>
#define INTEGER 3

int main() {

  std::cout << INTEGER << std::endl;
#undef INTEGER
#define INTEGER 7
  std::cout << INTEGER << std::endl;

  system("pause");
  return 0;
}