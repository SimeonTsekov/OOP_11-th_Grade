#include "human.h"

Human::Human() : Character() {}
Human::Human(string name) : Character(name, 9, 5 ){};
Human::Human(Human const &h) : Character(h.name, 9, 5) {};
