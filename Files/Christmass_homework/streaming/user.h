#ifndef USER
#define USER

#include "media.h"
#include "piece.h"
#include "movie.h"
#include "book.h"
#include "game.h"
#include "payment.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

class User{
	protected:
		string name;
		string email;
		vector<Media> history;
		vector<Payment> payments;
	public:
		User();
		User(string name, string email);
		User(User const &u);

		Payment get_last_payment();

		void pay();

		void consume(Media media);

		int operator==(User u);
};

#endif
