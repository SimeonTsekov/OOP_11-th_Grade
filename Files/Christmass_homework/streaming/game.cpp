#include "game.h"
#include <string>
using std::string;

Game::Game() : Media(), hours_played(0) {}

Game::Game(string name, string author, float price) : Media(name, author, price), hours_played(0) {}

Game::Game(Game const  &g) : Media(g.name, g.author, g.price), hours_played(0) {}

float Game::get_hours_played(){
	return hours_played;
}

void Game::play(float hours){
	this->hours_played += hours;
}

float Game::bill(float hours){
	return price * hours;
}

void Game::reset_timer(){
	this->hours_played = 0;
}
