#include <iostream>
#include <string>

#ifndef SHAPE_H_
#define SHAPE_H_

using namespace std;

class Shape {
  public:
    virtual string* getName();
    ~Shape();
};

#endif /* SHAPE_H_ */
