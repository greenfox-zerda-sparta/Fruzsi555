#include <iostream>
#include <string>

using namespace std;

int main() {
	int e[] = {1, 2, 3, 4, 5};
	// increment the 3rd element, than print all the elements of the array

	e[2] += 1;

	int i;
	  for(i = 0; i < 5; i++)
		 {
		  //printf("%d ", e[i]);
		  cout << e[i];
		  }

  return 0;
}
