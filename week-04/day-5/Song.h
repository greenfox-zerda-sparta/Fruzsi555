#ifndef SONG_H
#define SONG_H

#include<string>

using namespace std;

class Song {
private:
  string title;
  string artist;
protected:
  unsigned int song_counter = 0;
  unsigned int sum_of_ratings = 0;
  //string genre;
public:
  Song(string title, string artist);
  bool is_rating_valid(unsigned int rating);
  string get_avg_rating();
  string genre; //// why cannot work as protected?
  ~Song();
};

#endif // SONG_H
