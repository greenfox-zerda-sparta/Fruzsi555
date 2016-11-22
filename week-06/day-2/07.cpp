#include <iostream>
#include <string>
using namespace std;

// Write a function that can throw two kinds of exceptions: int and const char*
// It should receive an integer.
// It should return a string from the char* array defined below.
// If the integer is larger than 5, throw an integer exception. The value of the exception should be how much larger it is.
// If the integer is less than 0, it should throw a const char* exception stating, that it is a negative number.
//
// Illustrate both cases in the main function.
// HINT: Put each protected code segment in a new try-catch block.

string test(int a) throw (int, const char*) {
  const char* sentence[6] = {"What", "a", "pleasant", "surprise", "this", "is."};
    if (a > 5)
      throw 5;
    if (a < 0)
      throw "it is a negative number";
  return sentence[a];
}

int main() {

  try{
    cout << test(-2);
  } catch (int x) {
    cout << "integer type error: " << x << endl;
  } catch (const char* y) {
    cout << "const character type error: " << y << endl;
  }

  return 0;
}
