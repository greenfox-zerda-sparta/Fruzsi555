#include <iostream>
#include <vector>

using namespace std;

void add_vector_to_inner(vector<vector<int> >& v1, vector<int>& v2) {
  v1.push_back(v2);
}

int main() {
	//create a vector of vector of integers, yeah a vector that holds vectors of integers
	//the inner vectors have 5 integers, all of them 0
	//the outer vector is holding 5 vector at the beginning
	//create a function that will add a new vector of integers to the end of our outer vector

	//vector<vector<int>> v(5, vector<int>(5, 0));
    vector<int> v_inner(5, 0);
    vector<vector<int> > v_outer(5);

    add_vector_to_inner(v_outer, v_inner);

    cout << "The outer vector new size is: " << v_outer.size();

 return 0;
}
