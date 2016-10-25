#include <iostream>
#include <string>

using namespace std;

int dub(int x) {
	return x = x * 2;
}

int main() {
	int j = 123;
	// create a function that doubles it's input
	// double j with it

	cout << dub(j) << endl;

	return 0;
}
