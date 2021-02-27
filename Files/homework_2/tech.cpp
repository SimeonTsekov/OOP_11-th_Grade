#include "tech.h"

Tech::Tech() : 
	Item(),
	black_tech(false),
	warranty(0),
	weight(0) {}

Tech::Tech(string name,
		float price,
		int quantity,
		Provider *provider,
		unsigned int delivery_time,
		bool black_tech,
		unsigned int warranty,
		float weight) : 
	Item(name, 
		price, 
		quantity, 
		provider, 
		delivery_time),
	black_tech(black_tech),
	warranty(warranty),
	weight(weight) {}

Tech::Tech(Tech const &t) : 
	Item(t.name, 
		t.price, 
		t.quantity, 
		t.provider, 
		t.delivery_time),
	black_tech(t.black_tech),
	warranty(t.warranty),
	weight(t.weight) {}
