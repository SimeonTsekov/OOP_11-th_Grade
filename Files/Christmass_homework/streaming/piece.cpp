#include "piece.h"
#include <string>
using std::string;

Piece::Piece() : Media(), times_listened(0) {}

Piece::Piece(string name, string author, float price) : Media(name, author, price), times_listened(0) {}

Piece::Piece(Piece const &p) : Media(p.name, p.author, p.price), times_listened(0) {}

int Piece::get_times_listened(){
	return times_listened;
}

void Piece::listen(){
	this -> times_listened++;
}

float Piece::bill(int times){
	return price * times;
}

void Piece::reset_timer(){
	this->times_listened = 0;
}
