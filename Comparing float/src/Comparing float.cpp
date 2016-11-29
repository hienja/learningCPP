//============================================================================
// Name        : Comparing.cpp
// Author      : Hien Tran
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	float fValue = 1.123;

	if(fValue < 1.11) {
		cout << "equals" << endl;
	} else {
		cout << "does not equal" << endl;
	}

	cout << setprecision(2) << fValue << endl;

	int value1 = 7;
	int value2 = 4;

	if(value1 <= 7) {
		cout << "Condition 1: true" << endl;
	} else {
		cout << "Condition 1: false" << endl;
	}

	if(value1 == 7 && value2 == 3) {
		cout << "Condition 2: true" << endl;
	} else {
		cout << "Condition 2: false" << endl;
	}

	if(value1 > 8 || value2 < 5) {
		cout << "Condition 3: true" << endl;
	} else {
		cout << "Condition 3: false" << endl;
	}

	if((value2 != 8 && value1 > 10) || value2 < 5) {
		cout << "Condition 4: true" << endl;
	} else {
		cout << "Condition 4: false" << endl;
	}

	bool condition1 = value2 != 8 && value1 > 10;
	bool condition2 = value2 < 5;

	cout << condition1 << endl;
	cout << condition2 << endl;

	return 0;
}
