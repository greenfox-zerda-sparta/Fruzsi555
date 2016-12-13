// Create a function like macro that takes an argumnet.
// It should print the the code of the argument and the value of the argument too.
// E.g.:
//
// #define FunctionLikeMacro(a) //here comes magic
// int Main() {
// 	int a = 23;
// 	FunctionLikeMacro(a);
//
// }
//
// Should have the output:
// Variable a = 23;
// Where both 'a' and '23' are set by the macro.

#include <iostream>
#define FunctionLikeMacro(a) std::cout << "Variable " << #a << " = " << a << std::endl


int main() {
 	int a = 23;
  int b = 6;
 	FunctionLikeMacro(b);

  system("pause");
  return 0;
 }