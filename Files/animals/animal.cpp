#include "animal.h"
#include <stdio.h>

Animal::Animal() {}
Animal::Animal(int age) : age(age) {}

int Animal::get_age(){
	return this -> age;
}

void Animal::set_age(int age){
	this -> age = age;
}
