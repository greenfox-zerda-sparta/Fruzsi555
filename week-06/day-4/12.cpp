#include <iostream>
#include <vector>

using namespace std;

void increase_an_element_by_one(vector<vector<int> >& v, int index1, int index2) {
  v[index1][index2] += 1;
}

int main() {
  //create a vector of vector of integers
  //the inner vectors have 5 integers, all of them 0
  //the outer vector is holding 5 vector
  //create a function which increase a specific element of an inner vector by 1

  vector<vector<int> > v(5, vector<int>(5, 0));
  increase_an_element_by_one(v, 1, 1);
  for (unsigned int i = 0; i < v.size(); i++) {
    for (unsigned int j = 0; j < v[i].size(); j++) {
      cout << v[i][j];
    }
    cout << endl;
  }

  return 0;
}
