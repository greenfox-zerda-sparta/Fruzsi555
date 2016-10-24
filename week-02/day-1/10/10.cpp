//============================================================================
// Name        : 10.cpp
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
	int j1 = 10;
	int j2 = 3;
	// tell if j1 is higher than j2 squared and smaller than j2 cubed

	if ( pow(j2, 3) > j1 && j1 > pow(j2, 2))
		cout << "true" << endl;
	else
		cout << "false" << endl;

	return 0;
}
