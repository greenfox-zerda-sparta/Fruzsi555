#include <iostream>
#include <string>

using namespace std;

int mySum (int numbers[], int len) {
	int sum = 0;
		for (int i = 0; i < len; i++) {
		sum += numbers[i];
	}
	return sum;
}

int main() {
  int numbers[] = {4, 5, 6, 7, 8, 9, 10};
  // write your own sum function
  // it should take an array and it's length

  cout << mySum(numbers, 7) << endl;


  return 0;
}
