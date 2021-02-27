#include "user.h"

User::User() : 
	id(0), 
	username(""), 
	password("") {}

User::User(int id, 
		string username, 
		string password) : 
	id(id), 
	username(username), 
	password(password) {}

User::User(User const &u) : 
	id(u.id), 
	username(u.username), 
	password(u.password) {}

int User::get_ID() const{
	return id;
}

bool User::operator==(User *u){
	if(this->id == u->id) {return true;}
	return false;
}
