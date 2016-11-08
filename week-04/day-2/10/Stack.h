#ifndef STACK_H_
#define STACK_H_
#include <string>

using namespace std;

class Stack {
  public:
    Stack();
    void push(int number);
    int pop();
    int get_size();
    void print_stack();
  private:
    int* stack = new int(array_size);
    int array_size = 16;
    int size = 0;
};

#endif // STACK_H
