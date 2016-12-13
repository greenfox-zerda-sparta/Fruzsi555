#include <iostream>
#include <vector>

using namespace std;

// create a function that prints a vector using iterator

void print_vector_elements(vector<int>& v) {
  for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
    cout << *it << endl;
  }
}

int main() {
  vector<int> v;
  for (int i = 0; i < 10; ++i) {
    v.push_back(i);
  }

  print_vector_elements(v);

  system("pause");
  return 0;
}