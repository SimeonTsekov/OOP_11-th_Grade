#include "item.h"
#include "provider.h"

Item::Item() : 
	name(""), 
	price(0), 
	quantity(0), 
	provider(NULL), 
	delivery_time(0) {}

Item::Item(string name, 
		float price, 
		int quantity, 
		Provider *provider, 
		unsigned int delivery_time) : 
	name(name), 
	price(price), 
	quantity(quantity), 
	provider(provider), 
	delivery_time(delivery_time) {} 

Item::Item(Item const &i) : 
	name(i.name), 
	price(i.price), 
	quantity(i.quantity), 
	provider(i.provider), 
	delivery_time(i.delivery_time) {} 

string Item::get_name() const {
	return name;
}

float Item::get_price() const {
	return price;
}

unsigned int Item::get_delivery_time() const{
	return delivery_time;
}

Provider* Item::get_provider() const{
	return provider;
}
