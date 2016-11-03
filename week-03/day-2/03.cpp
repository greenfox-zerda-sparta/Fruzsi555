#include <string>
#include <iostream>

using namespace std;

enum CarType {
  VOLVO, TOYOTA, LAND_ROVER, TESLA
};

struct Car {
    CarType type;
    double km;
    double gas;
};

// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

void car_stats(Car car) {
  string car_names[4] = { "VOLVO", "TOYOTA", "LAND_ROVER", "TESLA" };
  if (car.type != TESLA) {
    cout << car_names[car.type] << " Km: " << car.km << " Gas: " << car.gas
        << endl;
  } else {
    cout << car_names[car.type] << " Km: " << car.km << endl;
  }
}

int main() {
  Car car = { TESLA, 100000 };

  car_stats(car);

  return 0;
}
