#include <iostream>
#include <string>

using namespace std;

string change_x_to_y(string& s) {
  if (s.find("x") > s.length()) {
    return s;
  }
  return change_x_to_y(s.replace(s.find("x"), 1, "y"));
}

int main() {
  // Given a string, compute recursively (no loops) a new string where all the
  // lowercase 'x' chars have been changed to 'y' chars.

  string test = "Thx for the xmas present xoxo.";
  cout << change_x_to_y(test) << endl;
  system("pause");
  return 0;
}