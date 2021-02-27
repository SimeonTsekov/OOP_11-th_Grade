#ifndef PAYMENT
#define PAYMENT

#include "media.h"
#include "piece.h"
#include "movie.h"
#include "book.h"
#include "game.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

class Payment{
	protected:
		string start_date;
		string end_date;
		vector<Media> media;
		float bill;
		bool is_payed;
	public:
		Payment();
		Payment(string start_date, string end_date, vector<Media> media, bool is_payed);
		Payment(Payment const &p);

		void set_payed(bool value);

		void add_media(Media media);
};

#endif
