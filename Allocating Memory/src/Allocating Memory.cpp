//============================================================================
// Name        : Allocating.cpp
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

int main() {
	int *pInt = new int;
	*pInt = 8;
	cout << *pInt << endl;
	delete pInt;

	Animal *pAnimal = new Animal[2];
	pAnimal[5].setName("George");
	pAnimal[5].speak();
	delete [] pAnimal;

	char *pMem = new char[5];
	delete [] pMem;

	return 0;
}
