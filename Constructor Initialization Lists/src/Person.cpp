/*
 * Person.cpp
 *
 *  Created on: Dec 13, 2016
 *      Author: hienja
 */

#include "Person.h"
#include <sstream>

string Person::toString() {
	stringstream ss;

	ss << "Person name is: ";
	ss << name;
	ss << "; Person age is: ";
	ss << age;

	return ss.str();
}

