/*
 * Cat.cpp
 *
 *  Created on: Dec 13, 2016
 *      Author: hienja
 */
#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat() {
	cout << "Cat created...." << endl;

	happy = true;
}

Cat::~Cat() {
	cout << "CAT DESTROYED" << endl;
}

void Cat::speak() {
	if(happy) {
		cout << "Meowwww" << endl;
	} else {
		cout << "Ssss" << endl;
	}
}

