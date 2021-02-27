#include <iostream>
#include <string>
using namespace std;

class Point{
	int x;
	int y;
	public:
		Point(){}
		Point(int x, int y){
			this -> x = x;
			this -> y = y;
		}	

		Point(const Point& other){
			x = other.get_x();
			y = other.get_y();
		}

		void set_x(int x){
			this -> x = x;
		}

		int get_x() const{
			return x;
		}

		void set_y(int y){
			this -> y = y;
		}

		int get_y() const{
			return y;
		}

		Point& operator=(const Point& p){
			x = p.x;
			y = p.y;
		}
};

void print_point(const Point& p){
	cout << "Point(" << p.get_x() << " ; " << p.get_y() << ")" << endl;
}

int main(){
	Point p1 = Point(2, 3);
	Point p2 = Point(p1);
	Point p3 = p1;

	print_point(p1);
	print_point(p2);
	print_point(p3);

	return 0;
}
