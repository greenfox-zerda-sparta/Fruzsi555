#include<iostream>
#include<string>
#include "Pop.h"
#include "Rock.h"
#include "Reggae.h"
#include "Jukebox.h"

using namespace std;

int main() {

  Song* song1 = new Song("La Di Da Di", "Slick Rick");
  Song* song2 = new Pop("Wannabe", "Spice Girls");
  Song* song3 = new Pop("Hit me, baby", "Britney");
  Song* song4 = new Reggae("Is this love", "Bob Marley");
  Song* song5 = new Rock("Thunderstruck", "AC/DC");
  Song* song6 = new Rock("Back in Black", "AC/DC");

  Jukebox st;
  st.add_song(*song1);
  st.add_song(*song2);
  st.add_song(*song3);
  st.add_song(*song4);
  st.add_song(*song5);
  st.add_song(*song6);

  st.rate(*song1, 5);
  st.rate(*song1, 3);
  st.rate(*song1, 25);

  st.rate(*song2, 5);
  st.rate(*song2, 5);
  st.rate(*song2, 6);
  cout << song1->get_avg_rating() << endl;
  cout << song2->get_avg_rating() << endl;

  st.rate(*song3, 2);
  st.rate(*song3, 2);
  st.rate(*song3, 0);

  st.rate(*song4, 4);
  st.rate(*song4, 3);
  st.rate(*song4, 5);

  st.rate(*song5, 4);
  st.rate(*song5, 7);
  st.rate(*song5, 6);

  st.rate(*song6, 5);
  st.rate(*song6, 4);
  st.rate(*song6, 4);
  cout << song3->get_avg_rating() << endl;
  cout << song4->get_avg_rating() << endl;
  cout << song5->get_avg_rating() << endl;
  cout << song6->get_avg_rating() << endl;

  cout << endl << "Top rated title is - the favourite of my childhood is: " << st.top_rated_title() << endl;
  cout << st.top_rated_genre() << endl;

  return 0;
}
