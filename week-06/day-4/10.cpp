#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
	//find how much integer divisor 2400 has
	//create a vector of doubles, reserve place for the divisors of 2400
	//fill this places with random numbers from 0 to 2400
	//sort them in ascending order

  int counter = 0;
  int num = 2400;
  for (int i = 1; i <= num; ++i) {
    if (num % i == 0) {
      counter++;
    }
  }
  cout << counter << endl;
  srand(time(0));

  vector<double> v;
  v.reserve(counter);
  for (unsigned int i =0; i < counter; ++i) {
    v[i] = rand() % 2401;
    sort(v.begin(), v.end(), greater<double>());
    cout << v[i] << " ";
  }

  //sort(v.begin(), v.end(), greater<double>());


  return 0;
}
