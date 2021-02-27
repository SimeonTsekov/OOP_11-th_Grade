#include "stack.cpp"
#include <iostream>
using namespace std;

int main(){

	Stack<int> intStack;
	for(int i=0; i<10; i++){
		intStack.push(i);
	}

	for(int i=0; i<10; i++){
		cout<< intStack.pop() << endl;
	}

	return 0;
}
