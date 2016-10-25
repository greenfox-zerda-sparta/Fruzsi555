#include <iostream>
#include <string>

using namespace std;

void make_word(string k, string b){
	cout<<k+b;
}

int main() {
  string k = "kuty";
  // write a function that gets a string as an input
  // and appends an 'a' character to its end

  string b = "a";
  make_word(k, b);


  return 0;
}
