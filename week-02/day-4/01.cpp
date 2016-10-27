#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/*void squareArray(int* arr[], int length) {
	for (int i = 0; i < length; i++) {
		*arr[i] = pow(*arr[i], 2);
		arr[i] += 1;
	}
}
*/
void squareArray(int* array, int length) {
  for (int i = 0; i < length; ++i) {
    *array *= *array;
    array += 1;
  }
}

void printArray(int arr[], int length) {
  for (int i = 0; i < length; ++i) {
    cout << arr[i] << " ";
  }
}

int main() {
  // Write a function that takes an array and squares all the elements in the array
  int array[] = {1, 2, 3, 4, 5, 6, 7};

  squareArray(array, 7);
  printArray(array, 7);

  return 0;
}
