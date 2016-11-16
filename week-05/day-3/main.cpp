#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void print_usage();
void print_tasklist(string name);
bool is_file_empty(string name);

int main(int argc, char* argv[]) {

  print_usage();
  cout << endl;
  print_tasklist("todo.txt");

  ifstream file("todo.txt");

  cout << endl;
  is_file_empty("todo.txt");
  is_file_empty("empty.txt");

  file.close();

  return 0;
}

void print_usage() {
  cout << "CLI Todo application" << endl;
  cout << "====================" << endl;
  cout << "Command line arguments: " << endl;
  cout << "-l   Lists all the tasks" << endl;
  cout << "-a   Adds a new task" << endl;
  cout << "-r   Removes an task" << endl;
  cout << "-c   Completes an task" << endl;
}

void print_tasklist(string name) {
  ifstream file(name.c_str());
  string line;
  int line_counter = 0;
  while (getline(file, line))
    cout << ++line_counter << " - " << line << endl;
  file.close();
}

bool is_file_empty(string name) {
  ifstream file(name.c_str());
  if(!file) return 0;
  bool is_file_empty = file.peek() == EOF;
  cout << boolalpha << name << " file is empty: " << is_file_empty << endl;
}
