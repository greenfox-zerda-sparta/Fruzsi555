#include <iostream>

using namespace std;


void fillArray(int *array, int length){
  for (int i = 0; i < length; i++){
    array[i] = i;
  }
}

void printArray(int *array, int length){
  for (int i = 0; i < length; i++) {
    cout << array[i] << " ";
  }
}

int main() {
  int array[10];

  // write a function that takes an array and a length and it fills the array
  // with numbers from zero till the length

  fillArray(array, 10);
  printArray(array, 10);

  return 0;
}
