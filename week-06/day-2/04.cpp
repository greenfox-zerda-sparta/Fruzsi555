#include <iostream>
#include <string>
//#include <vector>
using namespace std;

// Write a function that receives a string and an unsigned integer.
// The function should return an array of strings, with two string in it.
// The first string should be the first part of the original string
// Characters in range [0,index-1].
// The second part should be the rest of the string characters range [index,length-1]
// Example: split("Rebarbara", 2)
// Result: {"Re", "barbara"}
// If the index is out of bounds, throw an exception.
//
// In the main function demonstrate the function when working, and when throwing an exception.
// Write the results to the console.

string* split(string a, unsigned int b) throw (const char*) {
  if (b > a.length()-1)
    throw "the index is out of bound";
  string* parts = new string[2];
  parts[0] = a.substr(0, b-1);
  parts[1] = a.substr(b-1, a.length()-1);
  return parts;
  delete[] parts;
}
/*vector<string> split(const string& a, unsigned int b) {
  vector<string> test(2);
  test[0] = a.substr(0, b-1);
  test[1] = a.substr(b, a.length()-1);
  return test;
}*/
/*string* split(string a, unsigned int b) throw (const char*) {
  string* arr = new string[2];
  for (int i = 0; i < b; i++) {
    arr[0] += a[i];
  }
  for (int i = b; i < a.length(); i++) {
    arr[1] += a[i];
  }
  return arr;
}*/

int main() {
  try {
    cout << "The string consists of: " << split("Rebarbara", 3)[0] << ", " << split("Rebarbara", 3)[1]<< endl;
    cout << "The string consists of: " << split("Rebarbara", 10)[0] << ", " << split("Rebarbara", 10)[1] << endl;
  } catch (const char* excp) {
    cout << "Exception: " << excp << endl;
  }

  return 0;
}
