#include <iostream>

using namespace std;

//Optimized Stack

//Implement a stack data-structure that stores doubles in C++, and several functions that operate on stacks.
// Each stack should have size property that stores how many elements are in the stack.
// The length of the inner array should be independent from the size, to optimize on reallocation,
// this case it does not need to reallocate each time on push.


struct Stack{
  double* array;
  int size;
  int array_size;
};

//Functions

//Construct
// It should dynamically allocate the Stack instance
// It should set the size
// It should dynamically allocate the double array
// The length of the allocated array should be independent from the size, to optimize on the reallocation of the array
// It should allocate at least a double length array than the size
// The length of the array should be always some power of two and at least 16 (16, 32, 64, 128, ...)

Stack* stack_construct(double input[], int size) {
  Stack* new_stack = new Stack;
  new_stack->size = size;
  new_stack->array_size = 16;
  new_stack->array = new double[new_stack->array_size];
  for (int i = 0; i < new_stack->array_size; i++) {
    new_stack->array[i] = input[i];
  }
  return new_stack;
}

//Push
// It should push the value to the end of the stack
// It should increment the size by 1
//If the size exceeds the 80% of the current allocated length of the array it should reallocate
// the size of the array to it's double

void stack_push(Stack& stack, double value) {
  stack.array[stack.size] = value;
  stack.size++;
  if (stack.size > stack.array_size * 0.8) {
    stack.array_size *= 2;
    double* new_array = new double[stack.array_size];
    for (int i = 0; i < stack.size; i++) {
      new_array[i] = stack.array[i];
    }
    delete[] stack.array;
    stack.array = new_array;
  }
}

// Pop
// It should return the value that was pushed the last time
// It should decrement the size by 1
// It should not resize the array

double stack_pop(Stack& stack) {
  stack.size--;
  return stack.array[stack.size];
}

void print_stack(Stack& stack) {
  for (int i = 0; i < stack.size; i++){
    cout << stack.array[i] << " ";
  }
  cout << endl;
}

int main() {
  double array[] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  Stack* stack = stack_construct(array, 11);
  cout << "The original array is: ";
  print_stack(*stack);

  stack_push(*stack, 20);
  stack_push(*stack, 20);
  stack_push(*stack, 20);
  stack_push(*stack, 20);
  stack_push(*stack, 20);
  stack_push(*stack, 20);
  stack_push(*stack, 20);
  stack_push(*stack, 20);
  cout << "The new array: ";
  print_stack(*stack);
  cout << "The size of the inner array: " << stack->size << endl;
  cout << "Elements number in the stack: " << stack->array_size << endl;
  cout << "The last pushed element: " << stack_pop(*stack) << endl;
  cout << "The array after popping: ";
  print_stack(*stack);

  delete[] stack->array;
  delete stack;

  return 0;
}
