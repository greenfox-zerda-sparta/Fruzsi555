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
  void rate(Song& song, unsigned int _rate);
  float get_rating_by_artist(std::string _artist);
  float get_rating_by_genre(std::string _genre);
  std::string top_rated_title();
  std::string top_rated_genre();
};

#endif //JUKEBOX_H
