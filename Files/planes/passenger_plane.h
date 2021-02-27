#ifndef	PASSENGER_PLANE
#define PASSENGER_PLANE

#include "base_plane.h"
#include <iostream>
#include <string>
using std::string;

class PassengerPlane : public Plane{
	private:
		int passengers;
		int seats;
		int exits;
	public:
		PassengerPlane();
		
		PassengerPlane(int size, 
				int flight_number, 
				string model, 
				int is_military, 
				float speed, 
				float fuel, 
				float consumption, 
				int position, 
				int passengers, 
				int seats,
			       	int exists);
		
		PassengerPlane(const PassengerPlane &p);

};

#endif
