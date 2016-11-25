#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	//create a vector of characters with the size of 8
	//ask the user to fill this vector with characters one by one
	//at the end make sure the vector holds the letters of "GREENFOX"
	//so correct the user if he/she gives a different letter from the one we want them to give :)

  vector<char> v(8);
  string word = "GREENFOX";
  char input;
  for (unsigned int i = 0; i < 8; i++) {
    cout << "Guess what word is in my mind? You have to figure out the 8 letters in order" << endl << "Go on: " << endl;
    cin >> input;
    if (input != word[i]) {
      cout << "Not a correct letter/letter form, guess more.";
      i--;
    }
    else {
      v.push_back(input);
    }
  }

  return 0;
}
