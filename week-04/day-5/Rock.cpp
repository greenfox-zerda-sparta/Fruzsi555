#include "Rock.h"

Rock::Rock(std::string title, std::string artist) : Song(title, artist) {
  this->genre = "rock";
}

bool Rock::is_rating_valid(unsigned int rating) {
  if (rating >= 2 && rating <= 5) {
    ++song_counter;
    sum_of_ratings += rating;
    return true;
  } else {
    return false;
  }
}

Rock::~Rock() {
}
