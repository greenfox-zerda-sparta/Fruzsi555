#include <iostream>
#include <string>
#include "Pirate.h"

using namespace std;

Pirate::Pirate() {
  this->counter = 0;
};

void Pirate::drink_rum() {
  counter++;
};

string Pirate::hows_goin_mate() {
  if (counter > 4) {
    return "Arrrr";
  } else {
    return "Nothin";
  }
}

    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise
