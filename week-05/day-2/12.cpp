#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
// Create a program that decrypts the file called "encoded-lines.txt",
// and prints the decrypted text to the terminal window.

  ifstream file12;
  file12.open("encoded-lines.txt");
  string line;
  while (getline(file12, line)) {
    for (int i = 0; i < line.size(); ++i) {
      if(line[i] == ' ') {
        cout << ' ';
      } else {
        cout << char(line[i] - 1);
      }
    }
    cout << endl;
  }
  file12.close();
	return 0;
}
