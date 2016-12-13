// Take the function like macro from the previous exercise.
// Make it so, that it's defined like the way You wrote it
// when __DEBUG is defined.
// It's defined to be nothing otherwise.

#include <iostream>

#ifdef __DEBUG
#define MY_FUNCTION(x) if(!(x)) {std::cout <<  x << " in " << __FILE__ << " in line " << __LINE__ << std::endl;}
#else
#define MY_FUNCTION(x)
#endif

int main() {

  MY_FUNCTION(8 > 9);

  system("pause");
  return 0;
}

