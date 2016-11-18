#include <sstream>
#include "util.h"

using namespace std;

string to_string(float number) {
  stringstream ss;
  ss << number;
  return ss.str();
}
