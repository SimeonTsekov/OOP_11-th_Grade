#include "mammal.h"
#include <stdio.h>

Mammal::Mammal() {}
Mammal::Mammal(int age, int children) : Animal(age), children(children) {}

void Mammal::give_birth(int children){
	this -> children = children;
}

int Mammal::get_children(){
	return this -> children;
}
