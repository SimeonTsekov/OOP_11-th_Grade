#include "streaming.h"

Streaming::Streaming(){}

Streaming::Streaming(vector<User> users, vector<Media> media) : users(users), media(media) {}

Streaming::Streaming(Streaming const &s) : users(s.users), media(s.media) {}

void Streaming::add_media(Media media){
	this->media.push_back(media);
}

void Streaming::add_user(User user){
	users.push_back(user);
}

vector<Media> Streaming::get_media(){
	return media;
}

Payment Streaming::get_last_payment(User user){
	int i;

	for(i=0; !(users[i]==users.back()); i++){
		if(users[i] == user){
			return user.get_last_payment();
		}
	}

	if(users[i+1] == user){
		return user.get_last_payment();
	}

	Payment p;
	return p;
}

void Streaming::check_payment(User user){
	int i;

	for(i=0; !(users[i]==users.back()); i++){
		if(users[i] == user){
			user.pay();
		}
	}

	if(users[i+1] == user){
		user.pay();
	}

}

Media Streaming::search_media(Media m){
	int i;
	for(i=0; !(media[i]==media.back()); i++){
		if(media[i] == m){
			return media[i];
		}
	}

	if(media[i+1] == m){
		return media[i+1];
	}

	Media mm;
	return mm;
}
