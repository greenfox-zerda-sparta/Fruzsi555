// Create a constant using preprocessor directives.
// Make it so, that depending on the existence of a defined variable
// it's value is different.
// Write a main function that writes it to the console.
// Experiment in Your IDE compiling it with the directive defined or not.
// (This is what we used -D __DEBUG for example. You can try this and see how it works
// when You compile a Debug version and a Release version.)

#include <iostream>
#ifdef _BBB
#define _CHAIR 30
#else
#define _CHAIR 50
#endif // !_LOG

int main() {

  std::cout << _CHAIR << std::endl;


  system("pause");
  return 0;
}