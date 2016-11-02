#include <iostream>
using namespace std;

int* create_array() {
  int* pointer = new int[5];
  for (int i = 0; i < 5; i++) {
    pointer[i] = i;
  }
  return pointer;
}

int main () {
  int* array = create_array();
  for (int i = 0; i < 5; i++) {
    cout <<  array[i] << " ";
  }

  delete[] array;

  return 0;
}
