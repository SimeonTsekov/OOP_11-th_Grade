#ifndef AIRPORT
#define AIRPORT

#include <vector>
#include "passenger_plane.h"
using std::vector;


class Airport{
	private:
		int capacity;
		int size;
		bool accept_military;
		bool accept_civil;
		vector<PassengerPlane> planes;
		int position;
};

#endif
