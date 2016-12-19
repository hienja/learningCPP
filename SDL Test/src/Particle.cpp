/*
 * Particle.cpp
 *
 *  Created on: Dec 18, 2016
 *      Author: hienja
 */

#include "Particle.h"
#include <stdlib.h>

namespace ht {

Particle::Particle() {
	//rand() generates a number between 0 to RAND_MAX, 32767
	//Generate a number from -1 to 1;
	m_x = (2.0 * rand()/RAND_MAX) - 1;
	m_y = (2.0 * rand()/RAND_MAX) - 1;
	/*Alternative method for generating random number
	 * m_x = rand();
	 * m_y = rand();
	 */

	m_xSpeed = ((2.0 * rand()) / RAND_MAX - 1) * 0.001;
	m_ySpeed = ((2.0 * rand()) / RAND_MAX - 1) * 0.001;
}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

void Particle::update() {
	m_x += m_xSpeed;
	m_y += m_ySpeed;

	if(m_x <= -1.0 || m_x >= 1) {
		m_xSpeed = -m_xSpeed;
	}
	if(m_y <= -1.0 || m_y >= 1) {
		m_ySpeed = -m_ySpeed;
	}
}

} /* namespace ht */
