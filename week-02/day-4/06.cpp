#include <iostream>
#include <string>

using namespace std;

void evenNumbers(int *array, int length) {
	int counter = 0;
	for (int i = 0; i < length - 1; i++) {
			if ((array[i] % 2 == 0) && (array[i+1] % 2 == 0)) {
				counter ++;
			}
	}
	cout << "How many times it occurs in this array that an even number is followed by another even number? " << counter;
}

int main() {
  int numbers[] = {5, 2, 6, 3, 4, 8, 5, 2, 2, 2};

  // Write a function that counts how many times is an even number is followed by
  // another even number in an array

  evenNumbers(numbers, 10);

  return 0;
}
