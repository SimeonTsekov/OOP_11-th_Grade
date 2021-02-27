#ifndef PROVIDER_H
#define PROVIDER_H

#include <vector>
#include <string>
using std::string;
using std::vector;

class Item;

class Provider{
	protected:
		string name;
		vector<Item> items;

	public:
		Provider();
		Provider(string name);
		Provider(Provider const &p);

		string get_name() const;
		void add_item(Item const &item);
		vector<Item> get_items();
};

#endif
