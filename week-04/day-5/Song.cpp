#include "util.h"
#include "Song.h"

using namespace std;

Song::Song() {
    this->title = "";
    this->artist = "";
    this->genre = 0;
    rate_counter = 0;
    sum_of_ratings = 0;
}

Song::Song(string title, string artist) {
    this->title = title;
    this->artist = artist;
    this->genre = 0;
    rate_counter = 0;
    sum_of_ratings = 0;
}

bool Song::is_rating_valid(unsigned int rating) {
  if (rating >= 1 && rating <= 5) {
    ++rate_counter;
    sum_of_ratings += rating;
    return true;
  } else {
    return false;
  }
}

string Song::get_title() {
    return title;
}

string Song::get_artist() {
    return artist;
}

int Song::get_genre() {
    return genre;
}

string Song::get_avg_rating() {
  return "Song of " + this->artist + ", average rating is: " + to_string((float)sum_of_ratings / rate_counter);
}

float Song::get_rate_counter() {
    return rate_counter;
}

float Song::get_sum_of_ratings() {
    return sum_of_ratings;
}

Song::~Song() {
}
