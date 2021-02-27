#ifndef RACE
#define RACE

#include "racer.h"
#include <iostream>
using std::cout;
using std::endl;

class Racer;

class Race{
	protected:
		int max_participants;
		int participants;
		int length;
	public:
		Racer ***racers;

		Race();
		Race(int length, int max_participants);
		Race(Race const &r);

		int get_length();

		void add_racer(Racer *racer);
		
		void race();

		~Race();
};

#endif
