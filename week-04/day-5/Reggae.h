#ifndef REGGAE_H
#define REGGAE_H

#include "Song.h"

class Reggae : public Song {
public:
  Reggae(std::string title, std::string artist);
  bool is_rating_valid(unsigned int rating);
};

#endif // REGGAE_H
