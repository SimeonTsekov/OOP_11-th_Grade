#ifndef ITEM_H
#define ITEM_H

#include <string>
using std::string;

class Item{
	protected:
		string name;
	public:
		Item();
		Item(string name);
		Item(Item const &i);
};

#endif
