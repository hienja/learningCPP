//============================================================================
// Name        : Array.cpp
// Author      : Hien Tran
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int value[3];

	value[0] = 88;
	value[1] = 99;
	value[2] = 100;
	value[3] = 1; //BAD IDEA

	cout << value[0] << endl;
	cout << value[1] << endl;
	cout << value[2] << endl;

	double number[4] = {4.5, 2.7, 7.2, 8.1};

	for(int i = 0; i < 4; i++) {
		cout << number[i] << endl;
	}

	int numberArray[8] = {};

	for(int i = 0; i < 8; i++) {
		cout << numberArray[i] << endl;
	}

	string stringArray[] = {"apple", "banana", "orange"};

	for(int i = 0; i < 3; i++) {
		cout << stringArray[i] << endl;
	}

	return 0;
}
