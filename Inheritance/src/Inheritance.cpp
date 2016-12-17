//============================================================================
// Name        : Inheritance.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal{
public:
	void speak() {cout << "GRRRR" << endl;}
};

class Cat: public Animal {
public:
	void jump(){cout << "Cat jumping" << endl;}
};

class Tiger: public Cat{
public:
	void attacking(){cout << "Tiger Attack Antelope" << endl;}
};

int main() {
	Animal a;
	a.speak();

	Cat cat;
	cat.speak();
	cat.jump();

	Tiger tiger;
	tiger.speak();
	tiger.jump();
	tiger.attacking();

	return 0;
}
