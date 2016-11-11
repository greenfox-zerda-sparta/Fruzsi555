#include <iostream>
#include <string>
#include "IntList.h"
#include "IntArrayList.h"

using namespace std;

// Take the attached hpp and cpp files. Read them trough.
// Choose either IntArrayList or IntLinkedList and implement it.
// Write code here in a main function that uses it and tests it in edge cases as well.

int main() {
  IntList* theList = new IntArrayList();

  theList->append(2);
  theList->append(3);
  theList->append(8);
  theList->append(34);
  theList->append(269);
  theList->append(88);

  cout << "This is the list with a few elements: ";
  ((IntArrayList*)theList)->printList();
  cout << endl;
  cout << "It contains " << ((IntArrayList*)theList)->getLength() << " elements" << endl;

  cout << "The last & and the first elements are - as you can see above: " << theList->getLast() << " & " << theList->getFirst() << endl;

  cout << "What if we put number 15 in the 5th place?" << endl;
  cout << "Then this is how the list looks like: ";
  theList->insert(4, 15);
  ((IntArrayList*)theList)->printList();
  cout << endl;
  cout << "This has now " << ((IntArrayList*)theList)->getLength() << " elements" << endl;

  cout << "You think this list is empty? (0=no, 1=yes) " << endl;
  cout << "........wait for it..........." << endl;
  cout << theList->isEmpty() << endl;

  delete theList;

  return 0;
}
