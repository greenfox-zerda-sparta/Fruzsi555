#include <iostream>
#include <string>
using namespace std;

string safeConcat(string *part1, string *part2) {
	string part3 = *part1 + *part2;
	return part3;
}
//Implement this function to create and return a new string which contains the two parts concatenated.

int main(int argc, char** argv) {
	string a = "kutya";
	string b = " es macska";

	string c = safeConcat(&a, &b);
 	cout << "\"a\": " << a << endl;
	cout << "\"b\": " << b << endl;
	cout << "\"c\": " << c << endl;
}
/*Without 'pointer' even simplier:
#include <iostream>
#include <string>
using namespace std;

string safeConcat(string part1, string part2) {
	string part3 = part1 + part2;
	return part3;
}
//Implement this function to create and return a new string which contains the two parts concatenated.

int main(int argc, char** argv) {
	string a = "kutya";
	string b = " es macska";

	string c = safeConcat(a, b);
 	cout << "\"a\": " << a << endl;
	cout << "\"b\": " << b << endl;
	cout << "\"c\": " << c << endl;
}
 */
