//============================================================================
// Name        : This.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"

using namespace std;

int main() {
	Person person1;
	Person person2("Bob", 32);
	Person person3("Sue", 35);

	cout << person1.toString() << "; Memory location: " << &person1 << endl;
	cout << person2.toString() << "; Memory location: " << &person2 << endl;

	return 0;
}
