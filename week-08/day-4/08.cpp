#include <iostream>
#include <string>

using namespace std;

string remove_x(string& s) {
  if (s.find("x") > s.length()) {
    return s;
  }
  s.erase(s.begin() + s.find("x"));
  return remove_x(s);
}

int main() {
  // Given a string, compute recursively a new string where all the 'x' chars have been removed.

  string test = "Thx for the xmas present xoxo.";
  //string test2 = "yyyy";
  cout << remove_x(test) << endl;
  system("pause");
  return 0;
}