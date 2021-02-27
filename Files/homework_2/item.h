#ifndef ITEM_H
#define ITEM_H

#include <string>
using std::string;

class Provider;

class Item{
	protected:
		string name;
		float price;
		int quantity;
		Provider *provider;
		unsigned int delivery_time;
	public:
		Item();
		Item(string name, 
				float price, 
				int quantity, 
				Provider *provider, 
				unsigned int delivery_time);
		Item(Item const &i);

		Provider* get_provider() const;
		string get_name() const;
		float get_price() const;
		unsigned int get_delivery_time() const;
};
#endif
