#include "race.h"

Race::Race() : participants(0), length(0), max_participants(0), racers(nullptr) {}

Race::Race(int const length, int max_participants) : participants(0), length(length), max_participants(max_participants){ 
	racers = new Racer**[max_participants];
	
	for(int i=0; i<max_participants; i++){
		racers[i] = new Racer*[length];
	}

	for(int i=0; i<max_participants; i++){
		for(int j=0; j<length; j++){
			racers[i][j] = nullptr;
		}
	}
}

Race::Race(Race const &r) : participants(r.participants), length(r.length), max_participants(r.max_participants), racers(r.racers) {}

int Race::get_length(){
	return length;
}

void Race::add_racer(Racer *racer){
	participants++;
	for(int j=0; j<length; j++){
		racers[participants-1][j] = new Racer;
	}
	racer->set_x(0);
	racer->set_y(participants-1);
	racers[participants-1][0] = racer;
}

void Race::race(){
	int won = 0;
	int breaker = 0;

	while(1){
		if(breaker==1000){break;}

		for(int i=0; i<participants; i++){
			for(int j=0; j<length; j++){
				if(racers[i][j]!=nullptr){
					racers[i][j]->move_forward(this);
					if(racers[i][j]->position[0]>=length){
						won++;
						cout << racers[i][j]->name << won << endl;
					}
					break;
				}
			}
			
			if(won==3){
				return;
			}
		}
		breaker++;
	}
}

Race::~Race(){
	for(int i=0; i<max_participants; i++){
		for(int j=0; j<length; j++){
			if(racers[i][j] == nullptr){
				delete racers[i][j];
			}
		}
		delete[] racers[i];
	}

	delete[] racers;
	racers = nullptr;
}
