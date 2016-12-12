// Define 3 constants using a macro directive. 
// One integer, one float and one string of characters.
// Print them out to the console in Your main funciton.

#include <iostream>

#define INTEGER 3
#define FLOAT 4.6
#define STRING "abc"

int main() {

  std::cout << INTEGER << FLOAT << STRING << std::endl;

  system("pause");
  return 0;
}
