#ifndef JUKEBOX_H
#define JUKEBOX_H
#include "util.h"
#include "Song.h"

class Jukebox {
private:
  Song** songs;
  unsigned int song_counter;
public:
  Jukebox();
  void add_song(Song& song);
  void rate(Song& song, int _rate);
  float get_rating_by(std::string artist);
  float get_rating_by(int genre);
  std::string top_rated_title();
  std::string top_rated_genre();
  std::string genre_to_int[4] = {"simple song", "pop", "rock", "reggae"};
};

#endif //JUKEBOX_H
