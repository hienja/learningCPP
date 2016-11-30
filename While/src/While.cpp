//============================================================================
// Name        : While.cpp
// Author      : Hien Tran
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int i = 1;

	do {
		cout << "Hello wiener " << i << endl;
		i--;
	} while (i);

	cout << "Program Quitting" << endl;

	const string password = "hello";

	string input;

	do {
		cout << "Enter you password > " << flush;
		cin >> input;

		if(password != input) {
			cout << "Access denied" << endl;
		} else {
			break;
		}
	} while(true);

	cout << "Password accepted" << endl;


	return 0;
}
