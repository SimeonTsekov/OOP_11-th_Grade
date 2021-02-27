#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <vector>
#include "item.h"
using std::string;
using std::vector;

class Character{
	protected:
		string name;
		float attack;
		float defence;
		vector<Item> inventory;
		vector<Item> backpack;
	public:
		Character();
		Character(string name, float attack, float defence);
		Character(Character const &c);

};

#endif
