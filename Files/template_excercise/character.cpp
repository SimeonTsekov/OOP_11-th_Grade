#include "character.h"

Character::Character() : name(""), attack(0), defence(0) {}
Character::Character(string name, float attack, float defence) : name(name), attack(attack), defence(defence) {}
Character::Character(Character const &c) : name(c.name), attack(c.attack), defence(c.defence), inventory(inventory), backpack(backpack) {}
