#include <iostream>
using namespace std;

int main(){
	int m[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
	//This is an array of arrays. Print it out as a 3x3 matrix. Using each inner array as
	//b.) a column

	int i, j;

	for (j = 0; j < 3; j++) {
	       for (i = 0; i < 3; i++)
	       {
	         printf("%d ", m[i][j]);
	         //cout << m[i][j]);
	       }
	    cout << endl;
	  }
	return 0;
}
