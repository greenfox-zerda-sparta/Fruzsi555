#include <iostream>
#include <string>

using namespace std;

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

class Triangle: public Shape {
  public:
  string* getName();
  ~Triangle();
};


#endif /* TRIANGLE_H_ */
