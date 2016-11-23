//============================================================================
// Name        : Float.cpp
// Author      : Hien Tran
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	float fValue = 76.4;


	cout << "Size of float: " << sizeof(float) << endl;
	cout << setprecision(20) << fixed << fValue << endl;

	double dValue = 76.4;

	cout << "Size of double: " << sizeof(double) << endl;
	cout << dValue << endl;

	long double lValue = 12.12345679123456789;

	cout << lValue << endl;
	cout << "Size of long double: " << sizeof(long double) << endl;

	return 0;
}
