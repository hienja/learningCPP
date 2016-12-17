//============================================================================
// Name        : Return.cpp
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
	Animal(const Animal& other): name(other.name) {cout << "Animal Created by Copy" << endl;}
	~Animal() {cout << "Animal destroyed" << endl;}
	void setName(string name) {this->name = name;}
	void speak() {cout << "My name is: " << name << endl;}
};

Animal *createAnimal() {
	Animal *pAnimal = new Animal;
	pAnimal->setName("Birdie");

	return pAnimal;
};

int main() {
	Animal *pFrog = createAnimal();
	pFrog->speak();
	delete pFrog;
	return 0;
}
