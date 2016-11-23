#include <iostream>
#include <string>

using namespace std;

template<class T>
long PrintFirst(const T& tArray) {
  return tArray[0];
}

int main() {
	// create a function template the takes in a fix long array and prints the 1st element of it

  int IntArray[5] = {1, 2, 3, 4, 5};
  cout << PrintFirst(IntArray) << endl;

  return 0;
}
