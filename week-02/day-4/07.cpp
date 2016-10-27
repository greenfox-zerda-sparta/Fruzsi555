#include <iostream>

using namespace std;

void triangleNumber(int number) {
	const char star = '*';
	for (int i = 1; i <= number; i++) {
		for (int j = 0; j < i; j++) {
			cout << star;
		}
		cout << endl;
	}
}

int main() {
	// create a function that takes a number and prints a triangle like this:
	// *
	// **
	// ***
	// ****
	// *****
	// ******
	//
	// The triangle should have as many lines as the value in the argument

	triangleNumber(5);

	return 0;
}
