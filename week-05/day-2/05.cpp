#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Write a program that prints a content of a file called "fifth-exercise.txt"
  // If it could not open the file it should write: "Could not open the file" to the standard error
  // The program should return 2 if there where an error

  //ofstream file5("fifth-exercise.txt");
  ifstream file5("fifth-exercise.txt");
  string content;

  if (!file5.is_open()) {
    cerr << "Could not open the file" << endl;
    return 2;
  } else {
    while (file5 >> content) {
      cout << content << '\n';
    }
  }

  return 0;
}
