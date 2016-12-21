/*
 * Particle.cpp
 *
 *  Created on: Dec 18, 2016
 *      Author: hienja
 */

#include "Particle.h"
#include <math.h>
#include <stdlib.h>

namespace ht {

Particle::Particle(): m_x(), m_y(0) {
//	rand() generates a number between 0 to RAND_MAX, 32767
//	Generate a number from -1 to 1;
//	m_x = (2.0 * rand()/RAND_MAX) - 1;
//	m_y = (2.0 * rand()/RAND_MAX) - 1;
//	/*Alternative method for generating random number
//	 * m_x = rand();
//	 * m_y = rand();
//	 */
//
//	m_xSpeed = ((2.0 * rand()) / RAND_MAX - 1) * 0.01;
//	m_ySpeed = ((2.0 * rand()) / RAND_MAX - 1) * 0.01;
	init();
}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

void Particle::init() {
//	m_x = 0;
//	m_y = 0;
	m_direction = (2.0 * M_PI * rand())/RAND_MAX;
	m_speed = (0.05 * rand())/RAND_MAX;
	m_speed *= m_speed;
};

void Particle::update(int interval) {
//	m_x += m_xSpeed;
//	m_y += m_ySpeed;
//
//	if(m_x <= -1.0 || m_x >= 1) {
//		m_xSpeed = -m_xSpeed;
//	}
//	if(m_y <= -1.0 || m_y >= 1) {
//		m_ySpeed = -m_ySpeed;
//	}


	m_direction += interval *  .0005;

	double xSpeed = m_speed * cos(m_direction);
	double ySpeed = m_speed * sin(m_direction);

	if(((m_y + ySpeed * interval) * (m_y + ySpeed * interval)) +
			((m_x + xSpeed * interval) * (m_x + xSpeed * interval)) > .5) {
		m_direction = 1.0 * M_PI + m_direction;
		xSpeed = m_speed * cos(m_direction);
		ySpeed = m_speed * sin(m_direction);
	}

	m_y += ySpeed * interval;
	m_x += xSpeed * interval;


//	if(m_x < -1 || m_x > 1 || m_y < -1 || m_y > 1) {
//		init();
//	}
//	if(rand() <  RAND_MAX/100) {
//		init();
//	}
}

} /* namespace ht */
