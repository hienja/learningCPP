//============================================================================
// Name        : Namespace.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
#include "Animals.h"
using namespace std;

//using namespace ht;

int main() {
	//Cat cat;
	//cat.speak();

	ht::Cat cat2;
	cat2.speak();

	cats::Cat cat3;
	cat3.speak();

	cout << ht::catName << endl;
	cout << cats::catName << endl;

	return 0;
}