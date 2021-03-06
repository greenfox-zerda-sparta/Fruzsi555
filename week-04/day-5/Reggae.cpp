#include "Reggae.h"

Reggae::Reggae(std::string title, std::string artist) : Song(title, artist) {
  genre = reggae;
}

bool Reggae::is_rating_valid(unsigned int rating) {
  if (rating >= 1 && rating <= 4) {
    ++rate_counter;
    sum_of_ratings += rating;
    return true;
  } else {
    return false;
  }
}

