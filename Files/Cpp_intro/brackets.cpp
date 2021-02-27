#include <iostream>
#include <string>
#include <queue>
#include "brackets_namespace.cpp"
using namespace std;
using namespace brackets;

int main(){
	Brackets brackets;
	brackets.read();
	brackets.are_balanced() ? cout << "Are balanced." << endl : cout << "Are not balanced." << endl;

	brackets.return_count();

	return 0;
}
