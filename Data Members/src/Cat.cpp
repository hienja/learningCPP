/*
 * Cat.cpp
 *
 *  Created on: Dec 13, 2016
 *      Author: hienja
 */
#include <iostream>
#include "Cat.h"

using namespace std;

void Cat::speak() {
	if(happy) {
		cout << "Meowwww" << endl;
	} else {
		cout << "Sssss" << endl;
	}
}

void Cat::makeHappy() {
	happy = true;
}

void Cat::makeSad() {
	happy = false;
}

