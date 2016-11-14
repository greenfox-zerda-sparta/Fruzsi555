#ifndef POP_H
#define POP_H

#include "Song.h"

class Pop : public Song {
public:
  Pop(std::string title, std::string artist);
  virtual ~Pop();
};

#endif // POP_H
