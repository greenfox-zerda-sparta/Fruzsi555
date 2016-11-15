#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool is_copied(string from_file, string to_file);

int main() {
  // Write a function that copies a file to an other
  // It should take the filenames as parameters
  // It should return a boolean that shows if the copy was successful


  cout << is_copied("fifth-exercise.txt", "seventh-exercise.txt") << endl;

  return 0;
}

bool is_copied(string from_file, string to_file) {
  ifstream file1;
  file1.open(from_file.c_str());
  ofstream file2;
  file2.open(to_file.c_str());
  if (file1.is_open() && file2.is_open()) {
    string line;
    string content;
    while (getline(file1, line)) {
      file2 << line << "\n";
    }
    file1.close();
    file2.close();
    return true;
  } else {
    return false;
  }
}


