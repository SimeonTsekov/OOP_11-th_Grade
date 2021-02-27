#include <iostream>
#include <string>
using namespace std;

int main(){
	string firstName;
	cout << "Enter first name: ";
	getline(cin, firstName);
	
	string lastName;
	cout << "Enter last name: ";
	getline(cin, lastName);

	cout << firstName + " " + lastName << endl;

	cout << "First name length: " << firstName.length() << endl;
	cout << "First name capacity: " << firstName.capacity() << endl;

	string fullName;
	cout << "Enter full name: ";
	getline(cin, fullName);
	cout << fullName << endl;
}
