#include <iostream>
//#include <string>

using namespace std;

string reverse_string(string input, int length) {
	string output = input;
	for (int i = length - 1; i >= 0; i--) {
		output += input[i];
	} return output;
}

/*void reverse_string(char sent[], int length) {
	  int temp;
	  for (int i = length - 1, j = 0; i >= length / 2; i--, j++){
	    temp = sent[i];
	    sent[i] = sent[j];
	    sent[j] = temp;
	  }
}

void print_reverse(char sent[], int length){
	 for (int i = 0; i < length; i++){
	    cout << sent[i];
	  }
}
*/
int main() {

	string reverse = "Let's reverse this";
	int length = reverse.length();

	reverse_string(reverse, length);
	//print_reverse(string, length);

	cout << reverse_string(reverse, length);


	return 0;
}
