#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Open a file called "fourth-exercise.txt"
  // Print all of its lines to the terminal window

  //ofstream file4("fourth-exercise.txt");

  ifstream file4("fourth-exercise.txt");
  string content;

  while (file4 >> content) {
    cout << content << endl;
  }
  file4.close();

  return 0;
}
