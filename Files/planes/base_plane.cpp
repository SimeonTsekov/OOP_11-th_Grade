#include "base_plane.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

Plane::Plane(){
	this->size = 0;
	this->flight_number = 0;
	this->model = "";
	this->is_military = 0;
	this->speed = 0;
	this->fuel = 0;
	this->consumption = 0;
	this->position = 0;
}

Plane::Plane(int size, int flight_number, string model, int is_military, float speed, float fuel, float consumption, int position) : 
	size(size),
	flight_number(flight_number),
	model(model),
	is_military(is_military),
	speed(speed),
	fuel(fuel),
	consumption(consumption),
	position(position)
{}

void Plane::operator<<(const Plane &Plane){
	cout << Plane.size << endl;
	cout << Plane.flight_number << endl;
	cout << Plane.model << endl;
	cout << Plane.is_military << endl;
	cout << Plane.speed << endl;
	cout << Plane.fuel << endl;
	cout << Plane.consumption << endl;
	cout << Plane.position << endl;
}
