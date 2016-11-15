#include <iostream>
#include <fstream>

using namespace std;

int main() {
  // Open a file called "third-exercise.txt"
  // Write numbers from 0 to 20 into the file each in a new line

  ofstream file3("third-exercise.txt");
  for (int i = 0; i <= 20; ++i) {
    file3 << i << '\n';
  }
  file3.close();

  return 0;
}
