/*
 * Particle.h
 *
 *  Created on: Dec 18, 2016
 *      Author: hienja
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace ht {

struct Particle {
//	double m_xSpeed;
//	double m_ySpeed;
	double m_x;
	double m_y;
	/*
	 *Alternative method for generating random number
	 *int m_x
	 *int m_y
	 */

private:
	double m_speed;
	double m_direction;


public:
	Particle();
	virtual ~Particle();
	void update(int interval);

private:
	void init();
};

} /* namespace ht */

#endif /* PARTICLE_H_ */
