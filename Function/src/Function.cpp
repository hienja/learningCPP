//============================================================================
// Name        : Function.cpp
// Author      : Hien Tran
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void showMenu() {
	cout << "1.\tSearch" << endl;
	cout << "2.\tView Record" << endl;
	cout << "3.\tQuit" << endl;
}

int getName() {
	cout << "Enter Selection > " << flush;

	int input;
	cin >> input;

	return input;
}

void processSelection(int option) {
	switch (option) {
	case 1:
		cout << "Searching..." << endl;
		break;
	case 2:
		cout << "Recording..." << endl;
		break;
	case 3:
		cout << "Quitting..." << endl;
		break;
	default:
		cout << "Please pick an option from the menu" << endl;
	}
}

int main() {

	showMenu();

	int selection = getName();

	processSelection(selection);

	return 0;
}
