#include <iostream>
#include <string>
#include "IntList.h"
#include "IntArrayList.h"

using namespace std;

IntArrayList::IntArrayList() {
  array = new int[getLength()];
}

void IntArrayList::append(int _a) {
  int* new_array = new int[getLength() + 1];
  for (int i = 0; i < getLength(); ++i) {
    new_array[i] = array[i];
  }
  ++mLength;
  new_array[getLength()-1] = _a;
  delete[] array;
  array = new_array;
}

void IntArrayList::insert(int _idx, int _a) {
  ++mLength;
  int* new_array = new int[getLength()];
  for (int i = 0; i < _idx; ++i) {
    new_array[i] = array[i];
  }
  new_array[_idx] = _a;
  for (int i = _idx + 1; i < getLength(); ++i) {
    new_array[i] = array[i - 1];
  }
  delete[] array;
  array = new_array;
}

int IntArrayList::getFirst() {
  if (getLength() > 0) {
    return array[0];
  }
  else {
    return -1;
  }
}

int IntArrayList::getLast() {
  if (getLength() == 0) {
    return -1;
  }
  else {
    return array[getLength() - 1];
  }
}

void IntArrayList::setLength(int _length) {
  mLength = _length;
}

int IntArrayList::getLength() {
  return mLength;
}

void IntArrayList::printList() {
  for (int i = 0; i < getLength(); ++i) {
    cout << array[i] << " ";
  }
}

bool IntArrayList::isEmpty() {
  return mLength == 0;
}

IntArrayList::~IntArrayList() {
  delete[] array;
}
