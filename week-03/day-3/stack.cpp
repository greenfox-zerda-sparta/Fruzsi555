//============================================================================
// Name        : day5-01.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

//Implement a stack data-structure that stores doubles in C++, and several functions that operate on stacks
//Each stack should have size property that stores how many elements are in the stack.
//Functions
//Construct
//Stack* stack_construct(double input[], int size);
//It should dynamically allocate the Stack instance
//It should set the size
//It should dynamically allocate the double array

struct Stack {
  int size;
  double* array;
};

Stack* stack_construct(double input[], int size) {
  Stack* new_stack = new Stack;
  new_stack->size = size;
  new_stack->array = new double[size];
  for (int i = 0; i < size; i++) {
    new_stack->array[i] = input[i];
  }
  return new_stack;
}

//Push
//void stack_push(Stack& stack, double value);
//It should push the value to the end of the stack
//It should increment the size by 1
//It should reallocate the array inside by the incremented size, and copy it's values

void stack_push(Stack& stack, double value) {
  stack.size++;
  double* new_array = new double[stack.size];
  //new_array[stack.size] = value;
  for (int i = 0; i < stack.size; i++) {
    if (i < stack.size-1) {
        new_array[i] = stack.array[i];
    } else {
      new_array[i] = value;
    }
    //new_array[i] = i < stack.size-1 ? stack.array[i] : value;
    //new_array[i] = stack.array[i];
  }
  delete[] stack.array;
  stack.array = new_array;
}

//Pop
//double stack_pop(Stack& stack);
//It should return the value that was pushed the last time
//It should decrement the size by 1
//It should reallocate the array inside by the decremented size, and copy it's values

double stack_pop(Stack& stack) {
  double result = stack.array[stack.size-1];
  double* new_array = new double[--stack.size];
  for (int i = 0; i < stack.size; i++) {
    new_array[i] = stack.array[i];
  }
  delete stack.array;
  stack.array = new_array;
  return result;
}

//Is empty
//It should return true if the stack is empty and false otherwise

bool is_empty2(Stack& stack) {
  return stack.size == 0;
}

void destruct(Stack* stack) {
  delete[] stack->array;
  delete stack;
}
int main() {
  double array[] = {1, 2, 3, 4, 5};
  Stack* stack = stack_construct(array, 5);

  cout << "Size of the original array: " << stack->size << endl;
  stack_push(*stack, 7);
  stack_push(*stack, 8);
  for (int i = 0; i < 5+2; i++) {
    cout << stack->array[i];
    cout << " " << stack->size << endl;
  }
  cout << "Size of the new array: " << stack->size << endl << "Added value: " << stack_pop(*stack) << endl;
  cout << "Size of the stack after popping: " << stack->size << endl;
  cout << "Is the stack empty? " << is_empty2(*stack) << endl;

  destruct(stack);

  return 0;
}
