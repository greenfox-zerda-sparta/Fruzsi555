#include <iostream>
#include <string>

using namespace std;


int main() {
	int d[] = { 6, 5, 4, 3, 2, 1 };
	// print all the elements of the array

	int i;
	for (i = 0; i < sizeof(d)/sizeof(int); i++) {
		//printf("%d ", d[i]);
		cout << d[i];
	}

	return 0;
}
/*another solution
 void printArray(int d[], int size) {
 for ( int i = 0; i < size; i++ ) {
 cout << d[i] << ' ';
 }
 cout << endl;
 }

 int main() {
 int d[] = {6, 5, 4, 3, 2, 1};
 // print all the elements of the array
 printArray(d, 6);
 .. int main();
 */
