#include <string>
#include <iostream>

using namespace std;

struct Pirate {
  string name;
  bool has_wooden_leg;
  short int gold_count;
};

// Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates

// Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate

// Create a function that takes an array of pirates (and it's length) then returns the name of the
// richest that has wooden leg

int sum_of_gold(Pirate pirates[], int length) {
  int sum = 0;
  for (int i = 0; i < length; ++i) {
    sum += pirates[i].gold_count;
  }
  return sum;
}

float average_of_gold(Pirate pirates[], int length) {
  int sum = sum_of_gold(pirates, length);
  return float(sum)/length;
}

string find_the_richest_woodenlegged(Pirate pirates[], int length) {
  /*another solution:
   * Pirate richest = {"", false, 0};
   * ... && pirates[i].gold_count > richest.gold_count)
   * richest = pirates[i];
   * return richest.name;
  */
  int golds = 0;
  string name = "";
  for (int i = 0; i < length; ++i) {
    if (pirates[i].has_wooden_leg && pirates[i].gold_count > golds) {
      golds = pirates[i].gold_count;
      name = pirates[i].name;
    }
  }
  return name;
}

int main() {
  Pirate pirates[] = {
    {"Jack", false, 18},
    {"Uwe", true, 8},
    {"Hook", true, 12},
    {"Halloween kid", false, 0},
    {"Sea Wolf", true, 14},
    {"Morgan", false, 1}
  };

  cout << sum_of_gold(pirates, 6) << endl;
  cout << average_of_gold(pirates, 6) << endl;
  cout << find_the_richest_woodenlegged(pirates, 6);

  return 0;
}
