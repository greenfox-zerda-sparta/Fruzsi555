// Define a function like macro that prints out the parameter it gets,
// and adds this string before it "DEBUG: " if __DEBUG is defined.
// Otherwise adds "RELEASE: " before the string.
// Use try it out. Illustrate that it works.

#include <iostream>
#ifdef _DEBUG
#define str(x) "DEBUG: " #x
#else
#define str(x) "RELEASE: " #x
#endif // !_DEBUG

int main() {

  std::cout << str(5) << std::endl;

  system("pause");
  return 0;
}