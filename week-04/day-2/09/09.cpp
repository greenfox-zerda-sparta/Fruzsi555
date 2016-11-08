#include <iostream>
#include <string>
#include <vector>
#include "Student.h"

using namespace std;

int main() {
    // Create a student Class
    // that has a method `add_grade`, that takes a grade from 1 to 5
    // an other method `get_average`, that returns the average of the
    // grades
  Student s1("Johnny");
  s1.add_grade(5);
  s1.add_grade(4);
  cout << "Johnny's average is " << s1.get_average();

  return 0;
}
