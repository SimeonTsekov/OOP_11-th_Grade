#ifndef HUMAN_H
#define HUMAN_H

#include "character.h"

class Human : public Character{
	public:
		Human();
		Human(string name);
		Human(Human const &h);
};

#endif
