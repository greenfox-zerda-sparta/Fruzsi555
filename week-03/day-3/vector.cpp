//============================================================================
// Name        : 05.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>

using namespace std;

//Vector
//Implement an array like data structure called DoubleVector, that behaves like and array
//but it has some predefined operations in functions.
//It should store doubles. It should have an inner array of doubles that stores the values.
//Each vector should have size property that stores how many elements are in the stack.
//Functions
//Construct
//It should dynamically allocate the Vector instance
//It should set the size
//It should dynamically allocate the double array

struct Vector{
  unsigned int size;
  double* storage;
};

Vector* vector_construct(double input[], int size) {
  Vector* new_vector = new Vector;
  new_vector->storage = new double[size];
  for (int i = 0; i < size; i++) {
    new_vector->storage[i] = input[i];
  }
  new_vector-> size = size;
  return new_vector;
}
//At
//double vector_at(Vector& v, unsigned int index);
//It should return the value (index) of the given index
//It should return zero if the value is out of bound

double vector_at(Vector& v, unsigned int index) {
  double index_value = 0;
  if (index < v.size) {
    index_value = v.storage[index];
  }
  return index_value;
}

//Insert
//It should insert the value to the given index like:
//array: {1, 2, 3, 4}
//index: 2
//value: 8
//result: {1, 2, 8, 3, 4}
//It should increment the size by one
//It should reallocate the array

void vector_insert(Vector& v, unsigned int index, double value) {
  double* new_storage = new double[v.size+1];
  for (unsigned int i = 0; i < index ; i++) {
    new_storage[i] = v.storage[i];
  }
  new_storage[index] = value;
  for (unsigned int j = index + 1; j < v.size+1; j++) {
    new_storage[j] = v.storage[j-1];
  }
  delete[] v.storage;
  v.storage = new_storage;
  v.size++;
}

//Find
//unsigned int vector_find(Vector& v, double value);
//It should return the index of the given value

unsigned int vector_find(Vector& v, double value) {
  unsigned int index;
  for (unsigned int i = 0; i < v.size; i++) {
    if (v.storage[i] == value) {
      index = i;
    }
  }
  return index;
}

//Remove
//void vector_remove(Vector& v, unsigned int index);
//It should remove the element under the index
//It should reallocate the array

void vector_remove(Vector& v, unsigned int index) {
  double* new_storage = new double[v.size-1];
  for (unsigned int i = 0; i < index ; i++) {
    new_storage[i] = v.storage[i];
  }
  for (unsigned int j = index; j < v.size-1; j++) {
    new_storage[j] = v.storage[j+1];
  }
  delete[] v.storage;
  v.storage = new_storage;
  v.size--;
}

//Concat
//Vector* vector_concat(Vector& v1, Vector v2);
//It should return a new Vector that has all the elements of v1 and v2 like:
//v1: {1, 2}
//v2: {3, 4}
//return: {1, 2, 3, 4}
//It should have the sum size of the vectors

Vector* vector_concat(Vector& v1, Vector v2) {
  unsigned int new_size = v1.size + v2.size;
  double* new_storage = new double[new_size];
  for (unsigned int i = 0; i < new_size ; i++) {
    new_storage[i] = v1.storage[i];
    new_storage[i + v1.size] = v2.storage[i];
  }
  Vector* new_vector2 = vector_construct(new_storage, new_size);
  return new_vector2;
}

int main() {

  double array[] = {1, 2, 3, 4, 5};
  Vector* vector = vector_construct(array, 5);
  unsigned int index = 3;
  double value = 8;

  cout << "Size of the original storage: " << vector->size << endl;

  vector_insert(*vector, index, value);
  cout << endl << "Size of new array: " << vector->size << endl << "New array with " << value << ": " << endl;
  for (int i = 0; i < 5 + 1; i++) {
    cout << vector->storage[i] << " ";
  }
  vector_remove(*vector, index);
  cout << endl << "Size of array after removal: " << vector->size << endl << "Array after removal: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << vector->storage[i] << " ";
  }

  return 0;
}
