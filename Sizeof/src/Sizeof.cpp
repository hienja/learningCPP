//============================================================================
// Name        : Sizeof.cpp
// Author      : Hien Tran
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int values[] = {4, 7, 4, 3};

	for(unsigned int i = 0; i < sizeof(values)/sizeof(int); i++) {
		cout << "values: " << i << endl;
	}

	cout << sizeof(values)/sizeof(int) << endl;

	cout << "Animals" << endl;
	cout << "=======" << endl;

	string animals[][3] = {
			{"dog", "cat", "fox"},
			{"lizard", "lion", "sheep"}
	};

	for(unsigned int i = 0; i < sizeof(animals)/sizeof(animals[0]); i++) {
		for(unsigned int j = 0; j < sizeof(animals[0])/sizeof(string); j++) {
			cout << animals[i][j] << endl;
		}
	}

	return 0;
}
