//============================================================================
// Name        : The.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal {
private:
	string name;
public:
	Animal() {cout << "Animal Created" << endl;}
	Animal(const Animal& other): name(other.name) {cout << "Animal Created by Copying" << endl;}
	~Animal() {cout << "Destructor called" << endl;}
	void setName(string name) {this->name = name;}
	void speak() const {cout << "My name is: " << name << endl;}
};

int main() {
	Animal *pCat = new Animal;
	pCat->setName("Fred");
	pCat->speak();
	delete pCat;

	cout << sizeof(pCat) << endl;

	return 0;
}
