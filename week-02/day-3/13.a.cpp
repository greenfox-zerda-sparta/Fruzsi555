#include <iostream>
#include <string>
using namespace std;

// Create a function that prints each word in a string into a new line!
// Create another function that takes a string and an array of strings as its input
// and puts each word in the original string into a new element in the array of strings.
// Decide which argument should be a pointer and which shouldn't.
// In the main function, print out each element of the array into a new line!

string newLine(string a) {
	int i;
	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] != ' ') { // If the current char is not the end,
			cout << a[i]; // print the character.
		} else {
			cout << endl;
		}
	}
	return a;
}

int main(int argc, char **argv) {

	string a = "In the main function";
	newLine(a);

	return 0;
}
