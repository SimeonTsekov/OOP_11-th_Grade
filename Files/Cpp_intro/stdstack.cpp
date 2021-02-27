#include <iostream>
#include <stack>
using namespace std;

int main(){
	stack<int> s;
	for(int i=0; i<10; i++){
		s.push(i);
	}

	cout << "Empty: " << s.empty() << endl;
	cout << "Size: " << s.size() << endl;

	s.pop();

	cout << "Top: " << s.top() << endl;
	
}
