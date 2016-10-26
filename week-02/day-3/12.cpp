#include <iostream>
using namespace std;

void safeUnion(int *a, int l_a, int *b, int l_b, int *result, int l_res) {
	// Implement this function to create the union of a and b into the array result!

	l_res = l_a + l_b;
	for (int i = 0; i < l_res; i++) {
		if (i < l_a) {
			result[i] = a[i];
		} else {
			result[i] = b[i - l_a];
		}
	}
}

int main(int argc, char** argv) {
	int a[3] = { 1, 2, 3 };
	int b[4] = { 4, 5, 6, 7 };
	int c[7];
	safeUnion(a, 3, b, 4, c, 7);
	for (int i = 0; i < 7; i++)
		cout << c[i] << endl;

}
