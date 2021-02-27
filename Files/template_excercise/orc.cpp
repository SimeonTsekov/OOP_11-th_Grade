#include "orc.h"

Orc::Orc() : Character() {}
Orc::Orc(string name) : Character(name, 5, 5) {}
Orc::Orc(Orc const &o) : Character(o.name, 5, 5) {}
