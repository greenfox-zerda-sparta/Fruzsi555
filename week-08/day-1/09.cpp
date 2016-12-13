// Create a function like macro. The Macro should take one parameter and
// print out the parameter to the console after printing out in which file 
// and at which line it has been called at.

#include<iostream>
#define MY_PRINT(x) std::cout << "Parameter " << x << " is in file: " << __FILE__ << " in line: " << __LINE__ << std::endl;

int main() {
  int a = 5;
  MY_PRINT(a);

  system("pause");
  return 0;
}