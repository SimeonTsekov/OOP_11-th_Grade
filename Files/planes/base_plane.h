#ifndef BASE_PLANE
#define BASE_PLANE

#include <iostream>
#include <string>
using std::string;

class Plane{
	protected:
		int size;
		int flight_number;
		string model;
		int is_military;
		float speed;
		float fuel;
		float consumption;
		int position;
	public:
		Plane();
		
		Plane(int size, 
			int flight_number, 
			string model, 
			int is_military, 
			float speed, 
			float fuel, 
			float consumption, 
			int position);
		
		Plane(const Plane &p);
		

		void operator<<(const Plane &Plane);
	
};

#endif
