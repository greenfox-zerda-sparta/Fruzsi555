#include <iostream>

using namespace std;

void swap(int *r, int *s) {
	int temp = *r;
	*r = *s;
	*s = temp;
}

int main() {
  int high_number = 2;
  int low_number = 6655;

  int* high_number_pointer = &high_number;
  int* low_number_pointer = &low_number;
  // Please fix the problem and swap the value of the variables,
  // without using the "high_number" and the "low_number" variables.

  swap(high_number_pointer, low_number_pointer);
  cout << high_number << endl;
  cout << low_number << endl;


  return 0;
}
