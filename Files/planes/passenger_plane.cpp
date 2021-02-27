#include "base_plane.h"
#include "passenger_plane.h"
#include <iostream>
#include <string>
using std::string;

PassengerPlane::PassengerPlane(){
	Plane(0,0,"",0,0,0,0,0);
	this->passengers = 0;
	this->seats = 0;
	this->exits = 0;
}
