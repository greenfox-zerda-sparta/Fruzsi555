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

struct Vector{
  unsigned int size;
  double* storage;
};
//Functions
Vector* vector_construct(double input[], int size);
double vector_at(Vector& v, unsigned int index);
void vector_insert(Vector& v, unsigned int index, double value);
unsigned int vector_find(Vector& v, double value);
void vector_remove(Vector& v, unsigned int index);
Vector* vector_concat(Vector& v1, Vector v2);

int main() {
  double array[] = {1, 2, 3, 4, 5};
  Vector* vector = vector_construct(array, 5);
  Vector* vector2 = vector_construct(array, 5);
  unsigned int index = 3;
  double value = 8;

  for (int i = 0; i < 5; i++) {
    cout << vector->storage[i] << " ";
  }
  cout << endl << "At index 3 there is the value " << vector_at(*vector, index) << endl;
  cout << "At non-existing index: " << vector_at(*vector, 8) << endl;

  cout << "Size of the original storage: " << vector->size << endl;
  vector_insert(*vector, index, value);
  cout << "Size of the new array: " << vector->size << endl << "New array with the added value of " << value << ": " << endl;
  for (int i = 0; i < 5 + 1; i++) {
    cout << vector->storage[i] << " ";
  }
  cout << endl << "Value of " << value << " in the new array has the index " << vector_find(*vector, value);
  vector_remove(*vector, index);
  cout << endl << "Size of the array after removal: " << vector->size << endl << "Array after removal: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << vector->storage[i] << " ";
  }
  Vector* vector3 = vector_concat(*vector, *vector2);
  cout << "Size of the new vector: " << vector3->size;

  delete vector;
  delete vector2;
  delete vector3;
  vector = NULL;
  vector2 = NULL;
  vector3 = NULL;
  return 0;
}

//Construct
//It should dynamically allocate the Vector instance
//It should set the size
//It should dynamically allocate the double array

Vector* vector_construct(double input[], int size) {
  Vector* new_vector = new Vector;
  new_vector-> size = size;
  new_vector->storage = new double[size];
  for (int i = 0; i < size; i++) {
    new_vector->storage[i] = input[i];
  }
  return new_vector;
}

//At
//It should return the value (index) of the given index
//It should return zero if the value is out of bound

double vector_at(Vector& v, unsigned int index) {
  return (index < v.size) ? v.storage[index] : 0;
  /*if (index < v.size) {
    return v.storage[index];
  }
  return 0;*/
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
  double* new_storage = new double[++v.size];
  for (unsigned int i = 0; i < index ; i++) {
    new_storage[i] = v.storage[i];
  }
  new_storage[index] = value;
  for (unsigned int i = index + 1; i <= v.size; i++) {
    new_storage[i] = v.storage[i-1];
  }
  delete[] v.storage;
  v.storage = new_storage;
}

//Find
//It should return the index of the given value

unsigned int vector_find(Vector& v, double value) {
  unsigned int index;
  for (unsigned int i = 0; i < v.size; i++) {
    if (v.storage[i] == value) {
      index = i;
      return index;
    }
  }
  return -1;
}

//Remove
//It should remove the element under the index
//It should reallocate the array

void vector_remove(Vector& v, unsigned int index) {
  double* remaining_storage = new double[--v.size];
  for (unsigned int i = 0; i < v.size ; i++) {
    remaining_storage[i] = i < index ? v.storage[i] : v.storage[i+1];
  } // instead of for loops or if-else
  delete[] v.storage;
  v.storage = remaining_storage;
}

//Concat
//It should return a new Vector that has all the elements of v1 and v2:
//It should have the sum size of the vectors

Vector* vector_concat(Vector& v1, Vector v2) {
  unsigned int concat_size = v1.size + v2.size;
  double* new_storage = new double[concat_size];
  for (unsigned int i = 0; i < concat_size ; i++) {
    new_storage[i] = i < v1.size ? v1.storage[i] : v2.storage[i-v1.size];
  }
  Vector* concat_vector = vector_construct(new_storage, concat_size);
  return concat_vector;
}
