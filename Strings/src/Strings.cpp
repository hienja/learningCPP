//============================================================================
// Name        : Strings.cpp
// Author      : Hien Tran
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <limits.h>

using namespace std;

int main() {

	string text1 = "Hello this is a wiener";
	string text2 = "more wieners";
	string text3 = text1 + " " + text2;

	string name;
	short int value = 32767; //Maximum value of short int

	cout << value << endl;

	cout << "Max value of int: " << INT_MAX << endl;

	cout << "Min value of int: " << INT_MIN << endl;

	cout << "Size of long int: " << sizeof(long int) << endl;

	cout << "Size of int: " << sizeof(int) << endl;

	cout << "Size of short int: " << sizeof(short int) << endl;

	cout << text1 << " " << text2 << endl;

	cout << text3 << endl;

	cout << "Enter your name: " << flush;

	cin >> name;

	cout << "You entered: " << name << endl;

	cout << "Enter a value: " << flush;

	cin >> value;

	cout << "You entered: "  << value << endl;

	return 0;
}
