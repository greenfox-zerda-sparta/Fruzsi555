#include <iostream>
#include <fstream>
//#include <cstring>

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
  while (getline(file, line)) {
    for (int i = line.size() - 1; i >= 0; i--) {
      result += line[i];
    }
    result += "\n";
  }
  cout << result << endl;
  file.close();
}
