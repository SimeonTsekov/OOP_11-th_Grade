#ifndef RACER
#define RACER

#include "race.h"
#include <string>
using std::string;

class Race;

class Racer{
	protected:
		float speed;
	public:
		string name;
		int position[2];

		Racer();
		Racer(string name, float speed);
		Racer(Racer &r);

		int get_x();
		int get_y();

		void set_x(int x);
		void set_y(int y);

		string get_name();

		virtual void move_forward(Race *race);
};

#endif
