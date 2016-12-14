/*
 * Person.cpp
 *
 *  Created on: Dec 13, 2016
 *      Author: hienja
 */

#include "Person.h"

Person::Person() {
	// TODO Auto-generated constructor stub
	name = "George";
}

string Person::toString() {
	return "Person name is " + name;
}

void Person::setName(string newName) {
	name = newName;
}

string Person::getName() {
	return name;
}

