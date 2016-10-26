#include <iostream>

using namespace std;

/*Another solution with 'swap' function:
 * void swap(int r, int s) {
	int temp = r;
	r = s;
	s = temp;
}
*/

int main() {
	int high_number = 6655;
	int low_number = 2;

	int* high_number_pointer = &low_number;
	int* low_number_pointer = &high_number;
	// Please fix the problem and swap where the pointers point,
	// without using the "&" operator.

	/*swap(high_number_pointer, low_number_pointer);
	cout << high_number_pointer << endl;
	cout << &high_number << endl;
	cout << &low_number << endl; */
	int* temp = high_number_pointer;
	high_number_pointer = low_number_pointer;
	low_number_pointer = temp;

	return 0;
}
