#include <iostream>
#include <string>
#include "Jukebox.h"

using namespace std;

Jukebox::Jukebox() {
  songs = 0;
  song_counter = 0;
}

void Jukebox::add_song(Song &song) {
  Song** temp = new Song*[song_counter + 1];
  if (songs != 0) {
    for (unsigned int i = 0; i < song_counter; i++) {
      temp[i] = songs[i];
    }
  }
  temp[song_counter]= &song;
  delete[] songs;
  songs = temp;
  ++song_counter;
}

void Jukebox::rate(Song& song, int _rate) {
    song.is_rating_valid(_rate);
}

float Jukebox::get_rating_by(std::string artist) {
  if (songs != 0) {
    float sum_of_ratings = 0;
    int rate_counter = 0;
    for (unsigned int i = 0; i < song_counter; i++) {
      if (songs[i]->get_artist() == artist) {
        sum_of_ratings += songs[i]->get_sum_of_ratings();
        rate_counter += songs[i]->get_rate_counter();
      }
    }
    return (float) sum_of_ratings / rate_counter;
  } else {
    return 0;
  }
}

float Jukebox::get_rating_by(int genre) {
  if (songs != 0) {
    float sum_of_ratings = 0;
    int rate_counter = 0;
    for (unsigned int i = 0; i < song_counter; i++) {
      if (songs[i]->get_genre() == genre) {
        sum_of_ratings += songs[i]->get_sum_of_ratings();
        rate_counter += songs[i]->get_rate_counter();
      }
    }
    return (float) sum_of_ratings / rate_counter;
  } else {
    return 0;
  }
}

std::string Jukebox::top_rated_title() {
  Song* top_rated = songs[0];
    for (unsigned int i = 0; i < song_counter; i++) {
      if (songs[i]->get_avg_rating() > top_rated->get_avg_rating()) {
        top_rated = songs[i];
      }
    }
  return top_rated->get_title();
}


std::string Jukebox::top_rated_genre() {
  int top_rated = 0;
    float top_score = get_rating_by(0);
    for (unsigned int i = 0; i < sizeof(genre_to_int)/sizeof(int); i++) {
      if (get_rating_by(i) > top_score) {
        top_rated = i;
      }
    }
  return "Top rated genre is: " + genre_to_int[top_rated];
}
