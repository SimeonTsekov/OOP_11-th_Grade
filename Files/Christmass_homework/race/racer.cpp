#include "racer.h"

Racer::Racer() : name(""), speed(0){
	this->position[0] = 0;
	this->position[1] = 0;
}

Racer::Racer(string name, float speed) : name(name), speed(speed){
	this->position[0] = 0;
	this->position[1] = 0;
}

Racer::Racer(Racer &r) : name(r.name), speed(r.speed){
	this->position[0] = r.position[0];
	this->position[1] = r.position[1];
}

int Racer::get_x(){
	return this->position[0];
}

int Racer::get_y(){
	return position[1];
}

void Racer::set_x(int x){
	this->position[0] = x;
}

void Racer::set_y(int y){
	this->position[1] = y;
}

string Racer::get_name(){
	return name;
}

void Racer::move_forward(Race *race){
	race->racers[position[1]][position[0]] = NULL;
	position[0] = position[0] + speed;
	if(position[0]>(race->get_length()-1)){
		race->racers[position[1]][race->get_length()-1] = this;	
	} else {
		race->racers[position[1]][position[0]] = this;
	}
}

