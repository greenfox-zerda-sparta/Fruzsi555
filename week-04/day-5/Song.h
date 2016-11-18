#ifndef SONG_H
#define SONG_H

#include "util.h"

class Song {
  private:
    std::string title;
    std::string artist;
  protected:
    int genre;
    int rate_counter;
    float sum_of_ratings;
    enum genre_to_int {song, pop, rock, reggae};
  public:
    Song();
    Song(std::string title, std::string artist);
    virtual bool is_rating_valid(unsigned int rating);
    std::string get_avg_rating();
    std::string get_title();
    std::string get_artist();
    float get_rate_counter();
    float get_sum_of_ratings();
    int get_genre();
    virtual ~Song();
};

#endif // SONG_H
