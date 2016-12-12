// In Your main function create an array of integers. 5 long.
// Fill it up with random numbers.
// For each number treat it as the radius of a circle.
// Calculate the circumference and the area of the circle with such a radius.
// Use preprocessor to define the MY_PI constant. Use this in th calculations.

#define MY_PI 3.14
#include <iostream>

int main() {
  int arr[5] = { 1, 3, 9, 11, 2 };
  for (int i = 0; i < 5; ++i) {
    std::cout << "Circumference: " << MY_PI * 2 * arr[i] << std::endl;
    std::cout << "Area: " << arr[i] * arr[i] * MY_PI << std::endl << std::endl;
  }

  system("pause");
  return 0;
}