#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void print_vector(vector<vector<int> >& v) {
  for (unsigned int i = 0; i < v.size(); i++) {
    for(unsigned int j = 0; j < v[i].size(); j++) {
      cout << v[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
	//Create a 2 dimensional vector with matrix!
	// 1 0 0 0
    	// 0 1 0 0
    	// 0 0 1 0
    	// 0 0 0 1
	// Extend it to the following format:
	// 1 1 1 1 1
    	// 0 1 0 0 1
    	// 0 0 1 0 1
    	// 0 0 0 1 1
	// 0 0 0 0 1
	// Mirror it horizontally!
	// Mirror it vertically!

  vector< vector<int> > v(4, vector<int>(4));
  for (unsigned int i = 0; i < v.size(); ++i) {
    for (unsigned int j = 0; j < v.size(); ++j) {
      if (i == j) {
        v[i][j] = 1;
      }
    }
  }
  for (unsigned int i = 0; i < v.size(); i++) {
    if (v[0][i] == 0) {
      v[0][i] += 1;
    }
  }
  for (unsigned int i = 0; i < v.size(); i++) {
    v[i].push_back(1);
  }
  print_vector(v);

  cout << "Mirror horizontally:" << endl;
  /*unsigned int k = v.size() - 1;
  for (unsigned int i = 0; i < v.size() / 2; i++) {
    v[i].swap(v[k]);
    k--;
  }*/
  for (unsigned int j = 0; j < 5; j++) {
    reverse(v.begin(), v.end());
  }
  print_vector(v);
  cout << endl;

  cout << "Mirror vertically:" << endl;
  /*for (unsigned int i = 0; i < v.size(); ++i) {
    for (unsigned int j = 0; j < v.size() / 2; ++j) {
      int temp = v[i][j];
      v[i][j] = v[i][4 - j];
      v[i][4 - j] = temp;
    }
  }*/
  for (int i = 0; i < 5; i++) {
    reverse(v[i].begin(), v[i].end());
  }
  print_vector(v);
  cout << endl;

  return 0;
}
