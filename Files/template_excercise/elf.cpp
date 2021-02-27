#include "elf.h"

Elf::Elf() : Character() {}
Elf::Elf(string name) : Character(name, 10, 10) {}
Elf::Elf(Elf const &e) : Character(e.name, 10, 10),  {}
