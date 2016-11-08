#include <iostream>
#include <string>
#include <vector>
#include "Student.h"

using namespace std;

Student::Student(string name) {
  this->name = name;
}
void Student::add_grade(int grade) {
  grades.push_back(grade); //add a new element to the vector each time a new integer is read.
}
float Student::get_average() {
  float sum = 0;
  for(int i = 0; i < grades.size(); ++i) {
    sum += grades[i];
  }
  cout << endl;
  return sum / grades.size();
}

