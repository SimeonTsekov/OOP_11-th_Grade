#include "media.h"
#include <string>
using std::string;

Media::Media() : name(""), author(""), price(0) {}

Media::Media(string name, string author, float price) : name(name), author(author), price(price) {}

Media::Media(Media const &m) : name(m.name), author(m.author), price(m.price) {}

float Media::bill(){
	return price;
}

int Media::operator==(Media m){
	if(name==m.name && author==m.author){
		return 1;
	}

	return 0;
}
