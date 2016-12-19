/*
 * Swarm.h
 *
 *  Created on: Dec 18, 2016
 *      Author: hienja
 */

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace ht {

class Swarm {
private:
	Particle *m_pParticles;

public:
	const static int NPARTICLES = 5000;

public:
	Swarm();
	virtual ~Swarm();

	const Particle * const getParticles() {return m_pParticles;};
};

} /* namespace ht */

#endif /* SWARM_H_ */
