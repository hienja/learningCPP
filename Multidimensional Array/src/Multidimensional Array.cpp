//============================================================================
// Name        : Multidimensional.cpp
// Author      : Hien Tran
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string animals[2][3] = {
			{"fox", "dog", "cat"},
			{"mouse", "squirrel", "parrot"}
	};

	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			cout << "The animal is a " << animals[i][j] << endl;
		}
	}


	return 0;
}
