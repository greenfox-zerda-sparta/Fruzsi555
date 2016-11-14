#include "Pop.h"

Pop::Pop(std::string title, std::string artist) : Song(title, artist) {
  this->genre = "pop";
}

Pop::~Pop() {
}
