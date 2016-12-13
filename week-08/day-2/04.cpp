#include <iostream>
#include <string>
#include <map>

using namespace std;

// write a function that takes a string and returns a map
// the map should have the letters of the string as keys and
// it should have integers as values that represents how many times the
// letter appeared int the string

map<char, int> count_letters(string s);

int main() {
  string test = "letters";
  map<char, int> m = count_letters(test);
  for (std::map<char, int>::iterator it = m.begin(); it != m.end(); ++it) {
    cout << it->first << " = " << it->second << endl;
  }
  system("pause");
  return 0;
}

map<char, int> count_letters(string s) {
  map<char, int> m;
  for (unsigned int i = 0; i < s.size(); ++i) {
    m[s[i]] += 1;
  }
  return m;
}

//Another good solution with map and set
//#include <map>
//#include <algorithm>
//#include <string>
//#include <iostream>
//#include <set>
//
//using namespace std;
//
//int main() {
//
//  std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//  std::string input = "LETTERS";
//
//  std::map<char, size_t> map;
//  for (auto ch : alphabet)
//    map[ch] = 0;
//
//  for (auto ch : input) {
//    auto it = map.find(ch);
//    if (it != map.end())
//      ++it->second;
//  }
//
//  for (auto pair : map)
//    if (pair.second > 0)
//      std::cout << '\"' << pair.first << "\"\ = " << pair.second << std::endl;
//
//  system("pause");
//  return 0;
//}