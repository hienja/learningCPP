/*
 * Cat.h
 *
 *  Created on: Dec 20, 2016
 *      Author: hienja
 */

#ifndef CAT_H_
#define CAT_H_

namespace ht {

void saySomething();

class Cat {
public:
	Cat();
	void speak();
	virtual ~Cat();
};

} /* namespace ht */

#endif /* CAT_H_ */
