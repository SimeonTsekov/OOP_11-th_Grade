#ifndef STORE_H
#define STORE_H

#include "user.h"
#include "clothes.h"
#include "tech.h"
#include "order.h"
#include "provider.h"
#include <vector>
using std::vector;
using std::pair;

class user_exists{};
class order_exists{};
class nonexistent_user{};
class not_enough_quantity{};
class nonexistent_order{};
class not_new{};
class not_accepted{};

class Store{
	protected:
		vector<User> users;
		vector<Item> items;
		vector<int> quantities;
		vector<Order*> orders;
	public:
		Store();
		Store(Store const &s);

		void add_user(User const &u);
		void add_item(Item const &i);
		void create_order(Order *o);
		pair<float, unsigned int> accept_order(unsigned int ID);
		void send_order(unsigned int ID);
		vector<Order const*> get_orders_by_user(unsigned int ID) const;
		vector<Item const*> get_items_by_provider(Provider const &provider) const;
};

#endif
