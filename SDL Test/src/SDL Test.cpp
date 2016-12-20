//============================================================================
// Name        : SDL.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <SDL2/SDL.h>
#include "Screen.h"
#include "Swarm.h"

using namespace std;
using namespace ht;

int main() {
	srand(time(NULL));

	Screen screen;
	if (screen.init() == false) {
		cout << "Error Initializing SDL" << endl;
		return 1;
	}

	Swarm swarm;

	while (true) {
		//Update particle
		screen.clear();
		swarm.update();

		//Draw particle
		int elapsed = SDL_GetTicks();
		unsigned char red = (unsigned char)((1 + sin(elapsed * .1)) * 128);
		unsigned char green = (unsigned char)((1 + sin(elapsed * .2)) * 128);
		unsigned char blue = (unsigned char)((1 + sin(elapsed * .3)) * 128);

		const Particle * pParticles = swarm.getParticles();
		for(int i = 0; i < Swarm::NPARTICLES; i++) {
			Particle particle = pParticles[i];

			//Expecting x and y to be a number from -1 to 1
			int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH / 2;
			int y = (particle.m_y * Screen::SCREEN_WIDTH / 2) + (Screen::SCREEN_HEIGHT / 2);
			/*Alternative method for generating random number
			 * int x = (particle.m_x % Screen::SCREEN_WIDTH);
			 * int y = (particle.m_y % Screen::SCREEN_HEIGHT);
			 */

			screen.setPixel(x, y, red, blue, green);
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
