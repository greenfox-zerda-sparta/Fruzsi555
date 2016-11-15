#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void add_string_to_file(string name, string new_str);

int main() {
  // Write a function that writes a string to a file
  // It should take the filename and the content as a string parameter

  string a = "egyel almat";
  add_string_to_file("seventh-exercise.txt", a);

  return 0;
}

void add_string_to_file(string name, string new_str) {
  ofstream file;
  file.open(name.c_str());
  file << new_str;
  file.close();
}

