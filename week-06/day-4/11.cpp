#include <iostream>
#include <vector>

using namespace std;

void increase_vectorelements_by_one(vector<vector<int> >& v, int x) {
  for (unsigned int i = 0; i < v[x].size(); ++i) {
    v[x][i] += 1;
  }
}

int main() {

  //create a vector of vector of integers
  //the inner vectors have 5 integers, all of them 0
  //the outer vector is holding 5 vector
  //create a function which increase the given inner vector elements by 1 (one inside vector, holding five 0)

  vector<vector<int> > v(5, vector<int>(5, 0));
  increase_vectorelements_by_one(v, 2);
  for (unsigned int i = 0; i < v[2].size(); ++i) {
    cout << v[2][i] << endl;
  }
  /*for (unsigned int i = 0; i < v[3].size(); ++i) {
    cout << v[3][i] << endl;
  }*/


  return 0;
}
