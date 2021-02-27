#include <iostream>
using namespace std;

namespace firstSpace{
	void say_hello(){
		cout << "Hello from first!" << endl;
	}

	namespace innerSpace{
		void say_another_thing(){
			cout << "Hello from inner!" << endl;
		}
	}
};

namespace secondSpace{
	void say_sth(){
		cout << "Hello from second!" << endl;
	}
}

using namespace firstSpace;
using namespace firstSpace::innerSpace;

int main(){
	say_another_thing();
	secondSpace::say_sth();
	say_hello();
}
