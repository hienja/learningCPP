//============================================================================
// Name        : SDL.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
#include <SDL2/SDL.h>
#include "Screen.h"

using namespace std;
using namespace ht;

int main() {
	Screen screen;
	if (screen.init() == false) {
		cout << "Error Initializing SDL" << endl;
		return 1;
	}

	while (true) {
		//Update particle

		//Draw particle
		int elapsed = SDL_GetTicks();
		unsigned char red = (unsigned char)((1 + sin(elapsed * .0001)) * 128);
		unsigned char green = (unsigned char)((1 + sin(elapsed * .0002)) * 128);
		unsigned char blue = (unsigned char)((1 + sin(elapsed * .0003)) * 128);

		for(int x = 0; x < Screen::SCREEN_WIDTH; x++) {
			for(int y = 0; y < Screen::SCREEN_HEIGHT; y++) {
				screen.setPixel(x, y , red, green, blue);
			}
		}

		//Draw to screen
		screen.update();

		//Check for message/events
		if (screen.processEvents() == false) {
			break;
		}
	}

	cout << "Program Quiting..." << endl;
	screen.close();
	return 0;
}
