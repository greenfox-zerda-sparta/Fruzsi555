#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
  //create a vector of integers with the size of 20
  //fill this vector with random numbers from 0 to 10
  //print the items of the vector
  //remove the even numbers, then print the items again

  vector<int> v(20);

  for (unsigned int i = 0; i < v.size(); i++) {
    v[i] = (rand() % 11);
  }

  for (unsigned int i = 0; i < v.size(); i++) {
    if (v[i] % 2 == 0) {
      v.erase(v.begin() + i);
      i--;
    }
  }

  for (unsigned int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }

  return 0;
}
