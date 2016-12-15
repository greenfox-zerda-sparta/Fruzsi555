#include <iostream>
#include <string>

using namespace std;

void countdown(int n) {
  if (n>=0) {
    cout << n << " ";
    countdown(n - 1);
  }
}

int main() {
  // write a recursive function
  // that takes one parameter: n
  // and counts down from n

  int number = 5;
  countdown(number);

  system("pause");

  return 0;
}