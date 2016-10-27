#include <iostream>

using namespace std;

void swapPointers(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
  int first = 12;
  int second = 54;

  // Write a function that takes two int pointers and swaps the values where the pointers point

  //int* first_pointer = &first;

  swapPointers(&first, &second);
  cout << first;
  cout << second;

  return 0;
}
