#include <iostream>
using namespace std;

int main() {
	int m[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	//This is an array of arrays. Print it out as a 3x3 matrix. Using each inner array as
	//c.) all in one line separated by the character '|'

	//dividing each number
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d", m[i][j]);
			//cout << m[i][j]);
			cout << "|";
		}
		cout << endl;
	}
	/*dividing arrays
	 for(i = 0; i < 3; i++) {
	 for(j = 0; j < 3; j++) {
	 printf("%d ", m[i][j]);
	 //cout << m[i][j]);
	 }
	 cout << "| ";
	 }
	 */
	return 0;
}
