#include "user.h"

User::User() : name(""), email("") {}

User::User(string name, string email) :
	name(name),
	email(email) {}

User::User(User const &u) :
	name(u.name),
	email(u.email),
	history(u.history),
	payments(u.payments) {}

Payment User::get_last_payment(){
	return payments[0];
}

void User::pay(){
	payments[0].set_payed(true);
	vector<Media> media;
	Payment p("now", "end", media, false);
	payments.push_back(p);
}

void User::consume(Media media){
	payments.front().add_media(media);
}

int User::operator==(User u){
	if(name==u.name && email==u.email){
		return 1;
	}

	return 0;
}
