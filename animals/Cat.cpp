/*
 * Cat.cpp
 *
 *  Created on: Dec 20, 2016
 *      Author: hienja
 */

#include "Cat.h"
#include <iostream>

namespace ht {

void saySomething() {
	std::cout << "Hello" << std::endl;
}

Cat::Cat() {
	// TODO Auto-generated constructor stub

}

Cat::~Cat() {
	// TODO Auto-generated destructor stub
}

void Cat::speak() {
	std::cout << "Meow" << std::endl;
}

} /* namespace ht */
