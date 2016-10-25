#include <iostream>
#include <string>

using namespace std;

int main() {
	int d[] = { 1, 2, 3, 8, 5, 6 };
	// change 8 to 4, than print all the elements of the array

	d[3] = 4;
	//cout << d[3];

	int i;
	for (i = 0; i < sizeof(d) / sizeof(int); i++) {
		//printf("%d ", d[i]);
		cout << d[i];
	}
	return 0;
}
