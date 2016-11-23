#include <iostream>
#include <string>

using namespace std;

template<class T>
void SortDescending(T* a, T size) {
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size; ++j) {
      if (a[i] > a[j]) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  for (int i = 0; i < size; ++i) {
    cout << a[i] << " ";
  }
}

int main() {
	// create a function template that takes an array and sort it in a descending order

  int IntArray[] = {1, 2, 3, 4, 5};
  SortDescending(IntArray, 5);

  return 0;
}
