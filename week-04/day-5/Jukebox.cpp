#include <string>
#include "Jukebox.h"
#include "Song.h"
#include "util.h"


using namespace std;

Jukebox::Jukebox() {
  songs = 0;
  song_counter = 0;
}

void Jukebox::add_song(Song &song) {
  Song** temp = new Song*[song_counter + 1];
  if (songs != 0) {
    for (int i = 0; i < song_counter; i++) {
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

float Jukebox::get_rating_by_artist(std::string _artist) {
  if (songs != 0) {
    float sum_of_rates = 0;
    float count_of_rates = 0;
    for (unsigned int i = 0; i < song_counter; i++) {
      if (songs[i]->get_artist() == _artist) {
        sum_of_rates += songs[i]->get_sum_of_ratings();
        count_of_rates += songs[i]->get_rate_counter();
        }
      }
      return (float) sum_of_rates / count_of_rates;
    } else {
      return 0;
    }
}

float Jukebox::get_rating_by_genre(string _genre) {
  float sum_of_rates = 0;
  float count_of_rates = 0;
  for (unsigned int i = 0; i < song_counter; i++) {
    if (songs[i]->get_genre() == _genre) {
      sum_of_rates += songs[i]->get_sum_of_ratings();
        count_of_rates += songs[i]->get_rate_counter();
      }
  }
  return (float) sum_of_rates / count_of_rates;
}

string Jukebox::top_rated_title() {
  Song* top_rated = songs[0];
    for (unsigned int i = 0; i < song_counter; i++) {
      if (songs[i]->get_avg_rating() > top_rated->get_avg_rating()) {
        top_rated = songs[i];
      }
    }
  return top_rated->get_title();
}


string Jukebox::top_rated_genre() {
  if (get_rating_by_genre("rock") > get_rating_by_genre("pop") && get_rating_by_genre("rock") > get_rating_by_genre("reggae")) {
    return "Top rated genre is rock.";
  }
  if (get_rating_by_genre("pop") > get_rating_by_genre("rock") && get_rating_by_genre("pop") > get_rating_by_genre("reggae")) {
    return "Top rated genre is pop.";
  }
  if (get_rating_by_genre("reggae") > get_rating_by_genre("pop") && get_rating_by_genre("reggae") > get_rating_by_genre("rock")) {
    return "Top rated genre is reggae.";
  }
}
