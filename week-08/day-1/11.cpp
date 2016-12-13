// Create a function like macro that takes one argument.
// If the argument is false, it should print out the following:
// The expression in the argument. And the file name and the line in the file.

#include <iostream>
#define MY_MIN(x) (!(x)) ? (std::cout << #x << " is false in file: " << __FILE__ << " in line: " << __LINE__ << std::endl) : (std::cout << #x << " is true" << std::endl)

int main() {

  MY_MIN(9 > 99);

  system("pause");
  return 0;
}