#include <iostream>
#include <string>

using namespace std;

template<class T>
double GetSum(T* arr, int n) {
  T tSum = T();
  for (int i = 0; i < n; ++i) {
    tSum += arr[i];
  } return tSum;
}

template <>
double GetSum<char>(char* arr, int n) {
  int tSum = 0;
  for (int i = 0; i < n; ++i) {
    tSum += int(arr[i] - 96);
  }
  return tSum;
}


int main() {
  // Create a function template that takes an array, and its length and return the sum of it elements
  // Create a template specialization for char types, that it returns the sum of the characters integer position in the alphabet
  float FloatArray[3] = {1.2, 2.3, 3.4};
  cout << GetSum(FloatArray, 3) << endl;

  char CharArray[6] = {'q', 'w', 'e', 'r', 't', 'y'};
  cout << GetSum(CharArray, 6);

  return 0;
}
