#include "clothes.h"

Clothes::Clothes() : 
	Item(), 
	colour(""), 
	size(0), 
	fabric("") {}

Clothes::Clothes(string name, 
		float price, 
		int quantity, 
		Provider *provider, 
		unsigned int delivery_time, 
		string colour, 
		int size, 
		string fabric) : 
	Item(name, price, quantity, provider, delivery_time),
	colour(colour),
	size(size),
	fabric(fabric) {}

Clothes::Clothes(Clothes const &c) : 
	Item(c.name, c.price, c.quantity, c.provider, c.delivery_time),
	colour(c.colour),
	size(c.size),
	fabric(c.fabric) {}
