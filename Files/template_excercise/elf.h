#ifndef ELF_H
#define ELF_H

#include "character.h"

class Elf : public Character{
	public:
		Elf();
		Elf(string name);
		Elf(Elf const &e);
};

#endif
