#include <iostream>
#include <string>

using namespace std;

template<class T>
long PrintSumElements(const T& tArray) {
  return tArray[0] + tArray[2];
}

int main() {
	// create a function template that takes fix long array
	// and add the 1st element of it to the third
  int IntArray[5] = {1, 2, 3, 4, 5};
  cout << PrintSumElements(IntArray) << endl;

  return 0;
}
