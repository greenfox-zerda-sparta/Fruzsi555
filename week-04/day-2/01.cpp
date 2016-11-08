#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
};

int main() {
  // Create a new instance of the Student class and set it's name to "John" and
  // it's age to 21
  Student a;
  a.name = "John";
  a.age = 21;
  cout << a.name << " is " << a.age;

  return 0;
}
