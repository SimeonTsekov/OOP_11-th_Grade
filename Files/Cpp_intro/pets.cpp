#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Cat{
	const string name;
	int age;
	public:
		Cat(const string name, int age) : age(age), name(name) {}
	
};

class Dog{
	const string name;
	int age;
	public:
		Dog(const string name, int age) : age(age), name(name) {} 
	
};

class Shelter{
	private:
		Shelter(){}
		static vector<Cat> cats;
		static vector<Dog> dogs;
	public:
		static void addAnimal(string kind, string name, short age){
			if(kind == "cat"){
				Cat cat(name, age);
				cats.push_back(cat);
			} else if(kind == "dog") {
				Dog dog(name, age);
				dogs.push_back(dog);
			}
		}	
};

int main(){
	

	return 0;
}
