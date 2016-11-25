#include <iostream>
#include <vector>
#include <stdlib.h>
//#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	//Create a vector of integers
	//reserve place for 10 element, then fill those place with random numbers between 0 and 10

  vector<int> v;
  unsigned int x = 10;
  v.reserve(x);
  srand (time(0));

  for (unsigned int i = 0; i < x; ++i) {
    v[i] = rand() % 10;
    cout << v[i] << " ";
  }

  return 0;
}
