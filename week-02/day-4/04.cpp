#include <iostream>

using namespace std;

void reverse(int arr[], int length) {
	int temp;
	for (int i = 0; i < length / 2; ++i) {
		temp = arr[i];
		arr[i] = arr[length - i - 1];
		arr[length - i - 1] = temp;
	}
}

void printarray(int arr[], int length) {
	for (int i = 0; i < length; ++i)
		cout << arr[i] << ' ';

	cout << endl;
}

int main() {
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	// Write a function that takes an array and its length than reverses the array

	reverse(array, 8);
	printarray(array, 8);

	return 0;
}
