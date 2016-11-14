#ifndef ROCK_H
#define ROCK_H

#include "Song.h"

class Rock : public Song {
public:
  Rock(std::string title, std::string artist);
  bool is_rating_valid(unsigned int rating);
  virtual ~Rock();
};

#endif // ROCK_H
