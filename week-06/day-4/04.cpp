#include <iostream>
#include <vector>

using namespace std;

void add_to_vector(vector<char>& v, char x);

int main() {
	//create a vector of chars with the size of zero;
	//write a function where the user can add characters to the end of this vector

  vector<char> v(0);
  add_to_vector(v, '*');
  add_to_vector(v, 'h');
  for (unsigned int i = 0; i < v.size(); ++i) {
    cout << v[i] << " ";
  }
  cout << " Size of vector is: " << v.size();

  return 0;
}

void add_to_vector(vector<char>& v, char x) {
  v.push_back(x);
}
