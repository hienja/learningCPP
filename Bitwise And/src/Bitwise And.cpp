//============================================================================
// Name        : Bitwise.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int color = 0x123456;

	unsigned char red = (color & 0xFF0000) >> 16;
	unsigned char green = (color & 0x00FF00) >> 8;
	unsigned char blue = color & 0x0000FF;

	cout << hex << int(red) << endl;
	cout << hex << int(green) << endl;
	cout << hex << int(blue) << endl;

	unsigned char anotherRed = color >> 16;

	cout << hex << int(anotherRed) << endl;

	return 0;
}
