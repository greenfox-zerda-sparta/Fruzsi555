#include <iostream>
#include <string>
#include "Triangle.h"

using namespace std;

Triangle::Triangle(int number) {
  this->number = number;
};

void Triangle::draw_halftree() {
  for (int i = 1; i <= number; ++i) {
    for (int j = 0; j < i; ++j) {
      cout << "*" ;
    }
    cout << endl;
  }
};

void Triangle::draw_tree() {
  for (int i = 1; i <= number; ++i) {
    for (int j = number; j > i; --j) {
      cout << ' ';
    }
    for (int k = 0; k < 2 * i - 1; ++k) {
      cout << '*';
    }
    cout << endl;
  }
};

void Triangle::diamond() {
  string star = "*";
  string space;
  if (number % 2 == 0){
    space = " ";
  } else {
    space = "";
  }
  for (int i = 0; i < number; ++i) {
    if (i < number / 2 ) {
      for (int j = number / 2; j > i; --j) {
        cout << " ";
      }
      cout << star << endl;
      star += "**";
     } else {
       cout << space;
       space += " ";
       for (int k = 0; k < number - i - 1; ++k) {
         cout << "**";
       }
       cout << "*"<< endl;
    }
  }
 return;
}
  /*for (int i = 1; i <= number / 2; ++i) {
    for (int j = number / 2; j > i; --j) {
      cout << ' ';
    }
    for (int k = 0; k < 2 * i - 1; ++k) {
      cout << '*';
    }
    cout << endl;
  }
  for (int i = number / 2 - 1; i >= 1; --i) {
    for (int j = number/2; j > i; --j) {
      cout << ' ';
    }
    for (int k = 0; k < 2 * i - 1; ++k) {
      cout << '*';
    }
    cout << endl;
  }
}*/
