
#include <iostream>
#include <string>

using namespace std;

template<class T>
void PrintElements(T* arr, T tSize) {
  for (int i = 0; i < tSize; ++i) {
    cout << arr[i] << " ";
  }
}

int main() {
	// create a function template which takes in an array, and the size of it
	// print all the elements of the array

  int IntArray[] = {1, 2, 3, 4, 5};
  PrintElements(IntArray, 5);

  return 0;
}
