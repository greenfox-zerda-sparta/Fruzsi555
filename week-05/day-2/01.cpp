#include <iostream>
#include <fstream>

using namespace std;

int main() {
  // Open a file called "first-exercise.txt"
  // Write your name in it as a single line

  ofstream my_file("first-exercise.txt");
  my_file << "Fruzsi\n";
  my_file.close();

  return 0;
}
