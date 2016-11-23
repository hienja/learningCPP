//============================================================================
// Name        : Char.cpp
// Author      : Hien Tran
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	bool bValue = true; //1 is True and 0 is False
	char cValue = 55;

	cout << int(cValue) << endl;

	cout << bValue << endl;

	cout << "Size of char: "<< sizeof(char) << endl;

	wchar_t wValue = 'i';

	cout << wValue << endl;

	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

	return 0;
}
