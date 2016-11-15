#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void reverse_lines_in_file(string name);

int main() {
  // Create a program that decrypts the file called "reversed-lines.txt",
  // and prints the decrypted text to the terminal window.

  reverse_lines_in_file("reversed-lines.txt");

  return 0;
}
void reverse_lines_in_file(string name) {
  string result = "";
  ifstream file;
  file.open(name.c_str());
  string line;
  string temp;
  while (getline(file, line)) {
    temp += (line + '\n');
    for (int i = strlen(temp.c_str()) - 1; i > 0; i--) {
      result += temp.c_str()[i];
    }
    temp = " ";
  }
  cout << result << endl;
  file.close();
}
