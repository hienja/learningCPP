//============================================================================
// Name        : If.cpp
// Author      : Hien Tran
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string password = "hello";
	cout << "Enter password > " << flush;

	string input;
	cin >> input;

	if(input == password) {
		cout << "Password Accepted." << endl;
	}

	if(input != password) {
		cout << "Access Denied." << endl;
	}

	return 0;
}
