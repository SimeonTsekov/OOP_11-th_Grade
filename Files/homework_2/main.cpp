#include "store.h"
#include "provider.h"
#include <iostream>
using std::cout;
using std::endl;

int main(){
	Provider p1("JoJo");
	Tech smartphone("Smartphone", 500, 1, &p1, 3, true, 2, 0.2);
	Clothes hat("Hat", 10, 1, &p1, 1, "black", 2, "cloth");

	p1.add_item(smartphone);
	p1.add_item(hat);

	User u1(1, "Dio", "JoJoIsAGay");

	Store s;

	s.add_user(u1);

	s.add_item(smartphone);
	s.add_item(smartphone);
	s.add_item(smartphone);
	s.add_item(hat);
	s.add_item(hat);

	Order o1(1, &u1);
	o1.add_item(smartphone);
	o1.add_item(smartphone);
	o1.add_item(hat);

	s.create_order(&o1);

	pair<float, unsigned int> info = s.accept_order(1);
	cout << info.first << " " << info.second << endl;

	s.send_order(1);

	vector<Order const*> orders = s.get_orders_by_user(1);
	vector<Item const*> items = s.get_items_by_provider(p1);

	return 0;
}
