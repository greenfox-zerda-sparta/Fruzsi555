#include <iostream>

using namespace std;

/*void negativeNumber(int *array, int length) {
	for (int i = 0; i < length; i++) {
		if (array[i] < 0) {
			cout << "There is at least one negative number in the array.";
			break;
		}
	}
}
*/
bool has_negative(int* array, int length) {
	for (int i = 0; i < length; i++) {
		if (array[i] < 0) {
			break;
		}
	}
}

int main() {
	int numbers[] = { 6, 5, -3, 4, -1, 8, 7 };

	// Write a function that decides if an array includes at least one negative number or not

	//negativeNumber(numbers, 7);
	has_negative(numbers, 7);
	cout << "There is at least one negative number in the array.";

	return 0;
}
