//============================================================================
// Name        : Constructor.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"

using namespace std;

int main() {
	cout << "Starting program...." << endl; // prints !!!Hello World!!!

	{
		Cat jim;
		jim.speak();
	}

	cout << "Ending program....." << endl;
	return 0;
}
