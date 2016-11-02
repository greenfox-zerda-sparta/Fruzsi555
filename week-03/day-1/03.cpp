#include <iostream>

using namespace std;

/**
 * Please create a program that asks for a count when it starts.
 * It should ask for a number count times, then it should print the average of the numbers.
 * It should delete any dynamically allocated resource before the program exits.
 */

int main() {
  //int* pointer = NULL;

  cout << "Please tell how many numbers you want the average of: ";
  int input;
  cin >> input;

  float* number = new float[input];

  float sum = 0;
  for (int i = 1; i <= input; i++) {
    cout << "Enter the number " << i << endl;
    cin >> number[i];
    sum += number[i];
  }

  int average = 0;
  average = sum / input;
  cout << "The average of the given numbers is: " << average;

  delete []number;

  return 0;
}
