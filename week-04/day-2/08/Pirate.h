#ifndef PIRATE_H
#define PIRATE_H
#include <string>

using namespace std;

class Pirate {
  public:
    Pirate();
    void drink_rum();
    string hows_goin_mate();

  private:
    int counter;
};

#endif // PIRATE_H
    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise
