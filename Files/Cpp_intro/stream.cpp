#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
	string test = "3.14 4k";

	istringstream in(test);

	double pi;
	in >> pi;

	if(in.good()){
		cout << "Everything is ok." << endl;
		cout << "pi: " << pi << endl;
	} else {
		cout << "Wrong!" << endl;
	}

	int number;
	in >> number;

	if(!in.bad()){
		cout << "Always good." << endl;
		cout << "number: " << number << endl;
	}

	string end;
	in >> end;

	if(in.eof()){
		cout << "Always ok." << endl;
		cout << "end: " << end << endl;
	}

	return 0;
}
