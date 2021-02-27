#include <iostream>
using namespace std;

class DivisionByZeroException{};

double division(double a, double b);

int main(){
	double a;
	double b;

	while(true){
		cout << "Enter a: ";
		cin >> a; 
		cout << "Enter b ";
		cin >> b;
		double result;
		try{
			result = division(a, b);
		} catch (DivisionByZeroException ex){
			cout << "Cant divide by zero." << endl;
			continue;
		}
		cout << "Result: " << result << endl;
	}
	return 0;
}

double division(double a, double b){
	if(b == 0)
		throw DivisionByZeroException();
	return a/b;
}
