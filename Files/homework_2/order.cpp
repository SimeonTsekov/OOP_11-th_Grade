#include "order.h"

Order::Order() :
	ID(0),
	user(NULL),
	status(0) {}

Order::Order(unsigned int ID,
		User *user) : 
	ID(ID),
	user(user),
	status(1) {}

Order::Order(Order const &o) : 
	ID(o.ID),
	user(o.user),
	items(o.items),
	quantities(o.quantities),
	status(o.status) {}

unsigned int Order::get_ID() const{
	return ID;
}

User* Order::get_user() const {
	return user;
}

int Order::get_status() const{
	return status;
}

void Order::set_status(int status){
	this->status = status;
}

vector<Item> Order::get_items() const {
	return items;
}

vector<int> Order::get_quantities() const {
	return quantities;
}

void Order::add_item(Item item){
	for(int i=0; i<items.size(); i++){
		if(item.get_name() == items[i].get_name()){
			quantities[i] ++;
			return;
		}
	}

	items.push_back(item);
	quantities.push_back(1);
}

