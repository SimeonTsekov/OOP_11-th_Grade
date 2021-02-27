#include "movie.h"
#include <string>
using std::string;

Movie::Movie() : Media(), length(0), minutes_watched(0) {}

Movie::Movie(string name, string author, float price, int length) : Media(name, author, price), length(length), minutes_watched(0) {}

Movie::Movie(Movie const &m) : Media(m.name, m.author, m.price), length(m.length), minutes_watched(0) {}

int Movie::get_minutes_watched(){
	return minutes_watched;
}

void Movie::watch(int time){
	if(time>=this->length){
		this->minutes_watched = this->length;
	} else {
		this->minutes_watched += time;
	}
}

float Movie::bill(int minutes){
	return price * minutes;
}

void Movie::reset_timer(){
	this->minutes_watched = 0;
}
