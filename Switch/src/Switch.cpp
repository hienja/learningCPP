//============================================================================
// Name        : Switch.cpp
// Author      : Hien Tran
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int value = 5;

	switch (value) {
	case 4:
		cout << "value is 4" << endl;
		break;
	case 5:
		cout << "value is 5" << endl;
		break;
	case 6:
		cout << "value is 6" << endl;
		break;
	default:
		cout << "Do not recognize value" << endl;
	}

	return 0;
}
