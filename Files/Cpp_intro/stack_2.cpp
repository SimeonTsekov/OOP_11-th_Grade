#include <iostream>
#include <string>
using namespace std;

class Stack{
	static const int chunk = 2;
	int size;
	int *data;
	int top;

	private:
		void resize(){
			cout << "Resize stack is called." << endl;
			
			int *temp = data;
			
			data = new int[size + chunk];
			
			for(int i=0; i<size; i++){
				data[i] = temp[i];
			}

			size += chunk;

			delete temp;
			cout << "New size: " << size << endl;
		}
	public:
		Stack(){
			size = chunk;
			data = new int[size];
			top = -1;
		}

		~Stack(){
			delete data;
		}

		void push(int v){
			if(top >= size-1){
				resize();
			}

			data[++top] = v;
		}

		int pop(){
			if(top < 0){
				throw exception();
			}

			return data[top--];
		}
};

int main(){
	Stack s;
	
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	try{
		s.pop();
		s.pop();
	} catch (const exception& e) {
		cout << "Stack is empty." << endl;
	}

	return 0;
}
