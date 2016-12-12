// Create a function like macro.
// Its job is to turn something written in code into a string.
// It should be called str(a).
// Try out the code below. See what happens!

#include <iostream>
#define str(x) #x

int main() {
  int a = 25;
  int b = 24;
  if (a > b) {
    std::cout << str(a > b) << "  a: " << a << "  b: " << b << std::endl;
  }

  system("pause");
  return 0;
}