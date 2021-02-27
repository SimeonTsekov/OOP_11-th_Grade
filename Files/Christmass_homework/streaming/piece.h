#ifndef PIECE
#define PIECE

#include "media.h"
#include <string.h>
using std::string;

class Piece : public Media{
	protected:
		int times_listened;
	public:
		Piece();
		Piece(string name, string author, float price);
		Piece(Piece const &p);

		void listen();

		int get_times_listened();

		float bill(int times_listened);

		void reset_timer();

};

#endif
