#ifndef GAME
#define GAME

#include "media.h"
#include <string.h>
using std::string;

class Game : public Media{
	protected:
		float hours_played;
	public:
		Game();
		Game(string name, string author, float price);
		Game(Game const &g);

		void play(float hours);

		float get_hours_played();

		float bill(float hours);

		void reset_timer();
};

#endif
