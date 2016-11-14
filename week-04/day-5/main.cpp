#include<iostream>
#include<string>
#include "Pop.h"
#include "Rock.h"
#include "Reggae.h"

using namespace std;

int main() {

  Song song1("La Di Da Di", "Slick Rick");
  song1.is_rating_valid(5);
  song1.is_rating_valid(8);
  song1.is_rating_valid(7);

  Reggae song2("Is this love", "Bob Marley");
  song2.is_rating_valid(8);
  song2.is_rating_valid(4);
  song2.is_rating_valid(2);

  cout << song1.get_avg_rating() << endl;

  cout << song2.get_avg_rating() << endl;

  return 0;
}
