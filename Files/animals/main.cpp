#include <iostream>
#include "lion.h"
using std::cout;
using std::endl;

int main(){
	Lion lion(4, 2);
	
	cout << "A new lion exists." << endl;
	
	lion.give_birth(3);
	lion.walk();
	lion.roar();

	return 0;
}
