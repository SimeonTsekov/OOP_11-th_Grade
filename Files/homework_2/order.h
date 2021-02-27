#ifndef ORDER_H
#define ORDER_H

#include "user.h"
#include "clothes.h"
#include "tech.h"
#include <vector>
using std::vector;

class Order{
	protected:
		unsigned int ID;
		User *user;
		vector<Item> items;
		vector<int> quantities;
		int status;
	public:
		Order();
		Order(unsigned int ID,
			User *user);
		Order(Order const &o);

		unsigned int get_ID() const;
		User* get_user() const;
		int get_status() const;
		void set_status(int status);
		vector<Item> get_items() const;
		vector<int> get_quantities() const;
		void add_item(Item item);
};

#endif
