#include "Song.h"

using namespace std;

Song::Song(std::string title, std::string artist) {
  this->title = title;
  this->artist = artist;
}

bool Song::is_rating_valid(unsigned int rating) {
  if (rating >= 1 && rating <= 5) {
    ++song_counter;
    sum_of_ratings += rating;
    return true;
  } else {
    return false;
  }
}

float Song::get_avg_rating() {
  return (float)sum_of_ratings / song_counter;
}

Song::~Song() {
}
