//============================================================================
// Name        : 11.cpp
// Author      : Programming knowledge
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

int main() {
	int k = 1521;
	// tell if k is dividable by 3 or 5

	if ( k%3==0 || k%5==0 )
		cout << "true" << endl;
	else
		cout << "false" << endl;

	return 0;
}
