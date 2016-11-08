#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

int main() {
    // Create a `Stack` class that stores elements
    // It should have a `size` method that returns number of elements it has
    // It should have a `push` method that adds an element to the stack
    // It should have a `pop` method that returns the last element form the stack and also deletes it from it

  Stack my_stack = Stack();
  my_stack.push(2);
  my_stack.push(3);
  my_stack.push(8);
  my_stack.push(15);
  cout << "The numbers pushed in the stack: ";
  my_stack.print_stack();
  cout << "This stack contains " << my_stack.get_size() << " elements" << endl;
  cout << "The last added number is " << my_stack.pop() << endl;
  cout << "Let's remove this number. The remaining stack contains " << my_stack.get_size() << " elements" << endl;

  return 0;
}
