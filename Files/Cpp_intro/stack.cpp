#include <iostream>
#include <string>
using namespace std;
const int STACK_SIZE = 10;

class Exception{
	string message = "";
	public:
		Exception(string message){
			this -> message = message;
		}

		string what(){
			return message;
		}
};

class Stack{
	int data[STACK_SIZE];
	int top;

	public:
		Stack(){
			top = 0;
		};

		void push(int value){
			if(is_full()){
				throw Exception("Stack is full!");
			}
			data[top++] = value;
		}

		int pop(){
			if(is_empty()){
				throw Exception("Stackis empty!");
			}
			return data[--top];
		}

		bool is_empty(){
			return top == 0;;
		}

		bool is_full(){
			return top == STACK_SIZE;
		}
};

int main(){
	Stack s;
	try{
		for(int i=0; i<9; i++){
			s.push(1);
		}
	} catch (Exception ex) {
		cout << ex.what() << endl;
	}

	return 0;
}
