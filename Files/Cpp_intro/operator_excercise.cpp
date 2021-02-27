#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Rectangle{
	private:
		int a;
		int b;
		int x;
		int y;
 
	public:
		Rectangle(){}
		Rectangle(int a, int b, int x, int y) : a(a), b(b), x(x), y(y){}

		int get_a(){
			return this-> a;
		}

		int get_b(){
			return this-> b;
		}

		int get_x(){
			return this-> x;
		}

		int get_y(){
			return this-> y;
		}

		Rectangle operator+(Rectangle b){	
			int top_left[2];
			
			top_left[0] = min(get_x(), b.get_x());
			top_left[1] = max(get_y(), b.get_y());

			int bottom_right[2];

			bottom_right[0] = max(get_x()+a, b.get_x()+b)
			bottom_right[1] = min(get_y()-a, b.get_y()-b)
	
			Rectangle result(0, 0, top_left[0], top_left[1]);	

			return result;	
		}
};

int main(){
	Rectangle A(2, 3, 3, 0);
	Rectangle B(3, 4, 9, 9);

	Rectangle C = A + B;

	cout << C.get_x() << ' ' << C.get_y() << endl;
	
	return 0;	
}
