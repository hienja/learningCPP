/*
 * Cat.h
 *
 *  Created on: Dec 16, 2016
 *      Author: hienja
 */

#ifndef CAT_H_
#define CAT_H_

#include <iostream>
using namespace std;

namespace cats {

const string catName = "Freddy";

class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};

}

#endif /* CAT_H_ */
