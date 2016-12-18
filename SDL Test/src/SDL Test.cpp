//============================================================================
// Name        : SDL.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL2/SDL.h>

using namespace std;

int main() {
	if(SDL_Init(SDL_INIT_VIDEO) < 0) {
		cout << "SLD Init Failed." << endl;
		return 1;
	}

	cout << "SDL Init Succeed." << endl;

	SDL_Quit();

	return 0;
}
