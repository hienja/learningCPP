/*
 * Person.cpp
 *
 *  Created on: Dec 13, 2016
 *      Author: hienja
 */
#include <sstream>
#include "Person.h"

Person::Person() {
	// TODO Auto-generated constructor stub
	name = "";
	age = 0;
}

Person::Person(string name, int age) {
	this->name = name;
	this->age = age;

	cout << "Memory loction of this: " << this << endl;
}

string Person::toString() {
	stringstream ss;

	ss << "Name :";
	ss << name;
	ss << "; Age; ";
	ss << age;

	return ss.str();
}
