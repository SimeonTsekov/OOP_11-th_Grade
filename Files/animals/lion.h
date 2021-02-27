#ifndef LION_H
#define LION_H
#include "mammal.h"
#include "walk.h"

class Lion : public Mammal, public Walk{
	public:
		Lion();
		Lion(int age, int children);

		void roar();
};

#endif
