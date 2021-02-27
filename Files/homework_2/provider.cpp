#include "provider.h"
#include "item.h"

Provider::Provider() : name("") {}

Provider::Provider(string name) : 
	name(name) {}

Provider::Provider(Provider const &p) : 
	name(p.name),
	items(p.items) {}

string Provider::get_name() const{
	return name;
}

void Provider::add_item(Item const &item){
	items.push_back(item);
}

vector<Item> Provider::get_items(){
	return items;
}

