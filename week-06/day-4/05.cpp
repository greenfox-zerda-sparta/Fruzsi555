#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
	//create a vector of integers with the size of 10, fill them with random numbers
	//create a vector of doubles and reserve place for 10 items
	//push an item to the end of the vector with the double places
	//print which vectors size is higher (and why?)

  vector<int> v1(10);
  for (unsigned int i = 0; i < v1.size(); ++i) {
    v1[i] = rand() % 100;
  }
  vector<double> v2;
  v2.reserve(10);
  v2.push_back(3.5);

  cout << (v1.size() > v2.size() ? "integer vector size is bigger in this case" : "double vector size is bigger");

  return 0;
}
