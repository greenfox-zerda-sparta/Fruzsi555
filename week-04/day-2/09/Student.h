#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <vector>

using namespace std;

class Student {
private:
  string name;
  vector<int> grades;

public:
  Student( string name);
  void add_grade(int grade);
  float get_average();
};


#endif // STUDENT_H
