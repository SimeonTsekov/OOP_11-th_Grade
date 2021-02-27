#include "store.h"

Store::Store() {}

Store::Store(Store const &s) :
	users(s.users),
	items(s.items),
	quantities(s.quantities),
	orders(s.orders) {}

void Store::add_user(User const &u){
	for(int i=0; i<users.size(); i++){
		if(users[i].get_ID() == u.get_ID()){
			throw user_exists();
		}
	}
	users.push_back(u);
}

void Store::add_item(Item const &item){
	for(int i=0; i<items.size(); i++){
		if(item.get_name() == items[i].get_name()){
			quantities[i] ++;
			return;
		}
	}

	items.push_back(item);
	quantities.push_back(1);
}

void Store::create_order(Order *o){
	bool found = false;
	bool found_user = false;

	for(int i=0; i<orders.size(); i++){
		if(orders[i]->get_ID() == o->get_ID()){
			throw order_exists();
		}
	}

	for(int i=0; i<users.size(); i++){
		if(users[i] == o->get_user()){
			found_user = true;
		}

		if(found_user==false && i==users.size()-1){
			throw nonexistent_user();
		}
	}

	for(int i=0; i<o->get_items().size(); i++){
		for(int j=0; j<items.size(); j++){
			if(o->get_items()[i].get_name() == items[j].get_name()){
				if(o->get_quantities()[i] > quantities[j]){
					throw not_enough_quantity();
				}
				found = true;
				quantities[j] -= o->get_quantities()[i];	
			}
		}

		if(found == false){return;}
		found = false;
	}

	o->set_status(1);
	orders.push_back(o);
}

pair<float, unsigned int> Store::accept_order(unsigned int ID){
	for(int i=0; i<orders.size(); i++){
		if(orders[i]->get_ID() == ID){
			if(orders[i]->get_status() != 1){
				throw not_new();
			}
			float sum = 0;
			unsigned int delivery_time = 0;
			vector<Item> items = orders[i]->get_items();
			vector<int> quantities = orders[i]->get_quantities();
			for(int j=0; j<items.size(); j++){
				sum += items[j].get_price() * quantities[j];	
				if(items[j].get_delivery_time() > delivery_time){
					delivery_time = items[j].get_delivery_time();
				}
			}
			orders[i]->set_status(2);
			return (pair<float, unsigned int>(sum, delivery_time));	
		}
	}

	throw nonexistent_order();
}

void Store::send_order(unsigned int ID){
	for(int i=0; i<orders.size(); i++){
		if(orders[i]->get_ID() == ID){
			if(orders[i]->get_status() != 2){
				throw not_accepted();
			}
			orders[i]->set_status(3);
		}
	}
}

vector<Order const*> Store::get_orders_by_user(unsigned int ID) const{
	vector<Order const*> orders; 
	bool found = false;
	for(int i=0; i<this->orders.size(); i++){
		if(this->orders[i]->get_user()->get_ID() == ID){
			found = true;
			orders.push_back(this->orders[i]);
		}
	}

	if(found == false){
		throw nonexistent_user();
	}

	return orders;	
}
		
vector<Item const*> Store::get_items_by_provider(Provider const &provider) const{
	vector<Item const*> items;
	for(int i=0; i<this->items.size(); i++){
		if(this->items[i].get_provider()->get_name() == provider.get_name()){
			items.push_back(&this->items[i]);
		}	
	}

	return items;
}
