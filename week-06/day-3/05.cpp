#include <iostream>
#include <string>

using namespace std;

template<class T1, class T2>
void TypeSize(T1 t1, T2 t2) {
  if (sizeof(T1) > sizeof(T2)) {
    cout << t1 << " - is stored in " << sizeof(T1) << " bytes";
  } else {
    cout << t2 << " - is stored in " << sizeof(T2) << " bytes";
  }
}

int main() {
  //Create a function template that takes 2 different typenames, and prints out
  //which one is stored in more bytes from then

  int a = 5;
  double b = 4.5;
  TypeSize(a, b);

  return 0;
}
