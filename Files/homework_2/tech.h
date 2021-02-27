#ifndef TECH_H
#define TECH_H

#include "item.h"

class Tech : public Item{
	protected:
		bool black_tech;
		int warranty;
		float weight;
	public:
		Tech();
		Tech(string name,
			float price,
			int quantity,
			Provider *provider,
			unsigned int delivery_time,
			bool black_tech,
			unsigned int warranty,
			float weight);
		Tech(Tech const &t);
};

#endif
