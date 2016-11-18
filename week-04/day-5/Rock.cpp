#include <iostream>
#include "Rock.h"

Rock::Rock(std::string title, std::string artist) : Song(title, artist) {
  genre = "rock";
}

bool Rock::is_rating_valid(unsigned int rating) {
  if (rating >= 2 && rating <= 5) {
    ++rate_counter;
    sum_of_ratings += rating;
    return true;
  } else {
    return false;
  }
}

