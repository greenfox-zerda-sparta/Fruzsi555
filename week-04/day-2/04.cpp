#include <iostream>
#include <string>

using namespace std;

class Student {
  private:
    string name;
    unsigned int age;
  public:
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }

    string greet() {
      return "Hello my name is: " + this->name;
    }
    void setName(string x) {
      name = x;
    }
    string getName() {
      return name;
    }
};

int main() {
  // Create a method on student that takes a string as an argument and
  // changes it's name property

  Student a("John", 21);
  a.setName("Bo");
  cout << a.getName();

  return 0;
}
