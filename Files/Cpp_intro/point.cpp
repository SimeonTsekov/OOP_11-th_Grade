#include <iostream>
#include <string>
using namespace std;

class Point{
	double x;
	double y;

	public:
		Point(){}
		Point(double x, double y) : x(x), y(y) {}

		double get_x() const{
			return x;
		}

		double get_y() const{
			return y;
		}

		void set_x(double x){
			this->x = x;
		}

		void set_y(double y){
			this->y = y;
		}

		Point& add(const Point p){
			x += p.get_x();
			y += p.get_y();

			return *this;
		}

		Point& sub(const Point p){
			x -= p.get_x();
			y -= p.get_y();

			return *this;
		}

		Point& mul(const int alpha){
			x *= alpha;
			y *= alpha;

			return *this;
		}

		Point operator+(const Point p){
			Point result = Point(x + p.get_x(), y + p.get_y());
			return result;
		}

		/*Point operator-(const Point p1, const Point p2){
			Point result = Point(p1.get_x() - p2.get_x(), p1.get_y() - p2.get_y());
			return result;
		}*/
};

Point operator-(const Point p1, const Point p2){
	Point result = Point(p1.get_x() - p2.get_x(), p1.get_y() - p2.get_y());
	return result;
}

int main(){
	Point p1 = Point(1, 2);
	Point p2 = Point(2, 3);

	p1.add(p2).sub(p2).mul(2);

	Point p3 = p1 + p2;

	return 0;
}
