#include<iostream>
#include<string>
#include "Song.h"

using namespace std;

int main() {

  Song song1("La Di Da Di", "Slick Rick");
  song1.is_rating_valid(5);
  song1.is_rating_valid(8);
  song1.is_rating_valid(7);

  cout << "The average rating - counting only the valid ratings - of the above song is: " << song1.get_avg_rating() << endl;

  return 0;
}
