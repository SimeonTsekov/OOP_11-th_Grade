#ifndef ANIMAL_H
#define ANIMAL_H

class Animal{
	protected:
		int age;

	public:
		Animal();
		Animal(int age);

		int get_age();
		void set_age(int age);
};

#endif
