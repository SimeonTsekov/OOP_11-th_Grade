#include "lion.h"
#include "walk.h"
#include <iostream>
using std::cout;
using std::endl;

Lion::Lion() {}
Lion::Lion(int age, int children) : Mammal(age, children), Walk(){}

void Lion::roar(){
	cout << "roar" << endl;
}


