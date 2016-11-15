#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void decrypt_file_from_duplication(string name);

int main() {
  // Create a program that decrypts the file called "duplicated-chars.txt",
  // and prints the decrypted text to the terminal window.

  decrypt_file_from_duplication("duplicated-chars.txt");

  return 0;
}

void decrypt_file_from_duplication(string name) {
  string result = "";
  ifstream file;
  file.open(name.c_str());
  string line;
  string temp;
  while (getline(file, line)) {
    temp += (line + '\n');
    for (int i = 1; i <= strlen(temp.c_str()); i += 2) {
      result += temp.c_str()[i];
    }
    temp = " ";
  }
  cout << result << endl;
  file.close();
}
