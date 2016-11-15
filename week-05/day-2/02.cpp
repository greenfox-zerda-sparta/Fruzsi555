#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Open a file called "second-exercise.txt"
  // Read the content of the file and print it to the terminal window

  //ofstream appleFile("second-exercise.txt");
  //appleFile << "Apple\n";

  ifstream appleFile("second-exercise.txt");
  string content;

  while(appleFile >> content) {
    cout << content << endl;
  }
  appleFile.close();


  return 0;
}
