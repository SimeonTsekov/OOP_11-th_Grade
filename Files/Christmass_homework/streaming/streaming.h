#ifndef STREAMING
#define STREAMING

#include "user.h"

class Streaming{
	protected:
		vector<User> users;
		vector<Media> media;
	public:
		Streaming();
		Streaming(vector<User> users, vector<Media> media);
		Streaming(Streaming const &s);

		void add_media(Media media);

		void add_user(User user);

		vector<Media> get_media();

		Payment get_last_payment(User user);

		void check_payment(User user);

		Media search_media(Media media);
};

#endif
