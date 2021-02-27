#ifndef MAMMAL_H
#define MAMMAL_H
#include "animal.h"

class Mammal : public Animal{
	protected:
		int children;

	public:
		Mammal();
		Mammal(int age, int children);

		void give_birth(int children);
		int get_children();
};

#endif
