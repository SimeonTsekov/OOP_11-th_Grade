#ifndef ORC_H
#define ORC_H

#include "character.h"

class Orc : public Character{
	public:
		Orc();
		Orc(string name);
		Orc(Orc const &o);
};

#endif
