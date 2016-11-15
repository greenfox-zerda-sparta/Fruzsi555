#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string read_file(string name);

int main() {
  // Write a function that reads the content of a file and returns it as a string
  // It should take the filename as a string parameter

  string a = "fifth-exercise.txt";
  cout << read_file(a) << endl;

  return 0;
}

string read_file(string name) {
  ifstream file;
  file.open(name.c_str());
  string content;
  string line;
  while (getline(file, line)) {
    content += line + '\n';
  }
  file.close();
  return content;
}
