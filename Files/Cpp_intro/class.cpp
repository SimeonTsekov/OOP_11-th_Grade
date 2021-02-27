#include <iostream>
using namespace std;

class Point
{
	private:
		int x;
		int y;
	public:
		/*void setX(int x)
		{
			this -> x = x;
		}*/
		int getX();
		Point(int c){x = c = 4;};
};

int Point::getX()
{
	return x;
}

int main()
{
	int x;

	//Point* p = new Point();
	//Point* p1 = %p;
	//x = setX(4);
	Point p(x);
	cout << p.getX() << endl;

	return 0;
}
