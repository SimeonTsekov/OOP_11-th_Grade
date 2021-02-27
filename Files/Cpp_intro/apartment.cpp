#include <iostream>
using namespace std;

class Apartment
{
	private:
		char *street;
		int floor;
		int iapNumber;
		int blockNumber;
		char *owner;
	public:
		void sell(char* newOwner)
		{
			owner = newOwner;
		}

		char* getOwner()
		{
			return owner;
		}
};

int main()
{
	Apartment a;
	a.sell("Ivan");
	cout << a.getOwner();

	return 0;
}
