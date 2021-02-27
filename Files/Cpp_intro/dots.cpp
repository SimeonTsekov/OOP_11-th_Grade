#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

class Dot{
	public:
		int x;
		int y;

	public:
		Dot(int x, int y){
			this->x = x;
			this->y = y;
		}

		string to_string(){
			stringstream s;
			s << '[' << x << ',' << ' ' << y << ']';

			return s.str();
		}
};

class Collection{
	private:
		vector<Dot> dots;
	public:
		void read_points(string str_dot){
			stringstream s(str_dot);			

			int my_x;
			int my_y;
			char useless;

			s >> useless >> my_x >> useless >> my_y;

			Dot dot(my_x, my_y);
			dots.push_back(dot);

			cout << '[' << my_x << ", " << my_y << ']' << endl;
		}
	
};

int main(){
	Collection collection;

	int x;
	int y;
	char useless;

	while(!cin.eof()){
		cin >> x >> y;
	
		Dot dot(x, y);
		collection.read_points(dot.to_string());
	}

	return 0;
}
