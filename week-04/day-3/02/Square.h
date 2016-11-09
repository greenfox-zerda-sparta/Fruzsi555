#include <iostream>
#include <string>

using namespace std;

#ifndef SQUARE_H_
#define SQUARE_H_

class Square: public Shape {
  public:
  string* getName();
  ~Square();
};


#endif /* SQUARE_H_ */
