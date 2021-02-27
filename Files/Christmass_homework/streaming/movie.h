#ifndef MOVIE
#define MOVIE

#include "media.h"
#include <string.h>
using std::string;

class Movie : public Media{
	protected:
		int length;
		int minutes_watched;
	public:
		Movie();
		Movie(string name, string author, float price, int length);
		Movie(Movie const &m);

		void watch(int time);

		int get_minutes_watched();

		float bill(int minutes);

		void reset_timer();
};

#endif
