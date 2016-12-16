//============================================================================
// Name        : Char.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char text[] = "hello";

	for(int i = 0; i < sizeof(text)/sizeof(char); i++) {
		cout << i << ": " << text[i] << endl;
	}

	int k = 0;
	while(text[k] != 0) {
		cout << text[k] << flush;
		k++;
	}

	return 0;
}
