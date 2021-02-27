#ifndef CLOTHES_H
#define CLOTHES_H

#include <string>
#include "item.h"
using std::string;

class Clothes : public Item{
	protected:
		string colour;
		int size;
		string fabric;
	public:
		Clothes();
		Clothes(string name, 
				float price, 
				int quantity, 
				Provider *provider, 
				unsigned int delivery_time, 
				string colour, 
				int size, 
				string fabric);
		Clothes(Clothes const &c);
};

#endif
