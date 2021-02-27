#include <iostream>
using namespace std;

/*int Max(int a, int b){
	return a>b ? a:b;
}*/

template<class T>
T Max(T a, T b){
	return a>b ? a:b;
}

int main(){
	int a = 5;
	int b = 6;
	double c = 5.2;
	double d = 5.6;

	cout << Max(a, b) << endl;
	cout << Max(c, d) << endl;
}
