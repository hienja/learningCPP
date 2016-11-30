//============================================================================
// Name        : Break.cpp
// Author      : Hien Tran
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	for(int i = 0; i < 5; i++) {
		cout << "i is: " << i << endl;

		if(i == 3) {
			break;
		}

		cout << "Program continue..." << endl;
	}

	cout << "Program quitting..." << endl;

	return 0;
}
