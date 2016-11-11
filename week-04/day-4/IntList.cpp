#include <iostream>
#include <string>
#include "IntList.h"
#include "IntArrayList.h"

using namespace std;

IntList::IntList() {
}

void IntList::setLength(int _length) {
  mLength = _length;
}

int IntList::getLength() {
  return mLength;
}

IntList::~IntList() {
}
