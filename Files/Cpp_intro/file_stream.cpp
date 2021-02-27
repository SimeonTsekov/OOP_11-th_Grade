#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
	ofstream out;
	out.open("test.txt");
	
	string name;
	cout << "Enter your name: ";
	getline(cin, name);

	out << name;
	out << "\n";

	int age;
	cout << "Enter your age: ";
	cin >> age;

	out << age << endl;

	out.close();


	ifstream in;
	in.open("test.txt");

	string name2;
	getline(in, name2);
	cout << name2 << endl;

	int age2;
	in >> age2;
	cout << age2 << endl;

	return 0;
}
