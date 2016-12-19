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

	const int SCREEN_WIDTH = 800;
	const int SCREEN_HEIGHT = 600;
	//cout << "SDL Init Succeed." << endl;
	SDL_Window *window = SDL_CreateWindow("Particle Frie Explosion",
			SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	if(window == NULL) {
		SDL_Quit();
		cout << "Could open create window: " << SDL_GetError();
		return 2;
	}

	bool quit = false;
	SDL_Event event;
	while(!quit) {
		//Update particle
		//Draw particle
		//Check for message/events

		while(SDL_PollEvent(&event)) {
			if(event.type == SDL_QUIT) {
				quit = true;
			}
		}
	}

	SDL_DestroyWindow(window);
	cout << "Program Quiting..." << endl;
	SDL_Quit();
	return 0;
}
