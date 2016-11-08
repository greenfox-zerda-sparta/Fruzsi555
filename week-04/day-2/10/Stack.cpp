#include "Stack.h"
#include <iostream>
#include <string>

using namespace std;

Stack::Stack() {
};

int Stack::get_size() {
  return size;
};

void Stack::push(int number) {
  stack[size] = number;
  ++size;
  if (size == array_size * 0.8) {
    array_size *= 2;
    int* new_stack = new int[array_size];
    for (int i = 0; i < size; ++i) {
      new_stack[i] = stack[i];
    }
    delete[] stack;
    stack = new_stack;
  }
};

int Stack::pop() {
  int last_added = stack[size - 1];
  int* new_array = new int[size - 1];
  for (int i = 0; i < size - 1; ++i) {
    new_array[i] = stack[i];
  }
  delete[] stack;
  stack = new_array;
  size--;
  return last_added;
};

void Stack::print_stack() {
  for (int i = 0; i < get_size(); ++i) {
      cout << stack[i] << " ";
  }
  cout << endl;
}
