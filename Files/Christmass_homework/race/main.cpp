#include "race.h"
#include "racer.h"

int main(){
	Race race(20, 5);
	
	Racer racer("JoJo", 3);
	race.add_racer(&racer);

	Racer racer1("Dio", 5);

	race.add_racer(&racer1);

	Racer racer2("Zeppeli", 6);

	race.add_racer(&racer2);

	Racer racer3("Speedwagon", 10);

	race.add_racer(&racer3);

	race.race();

	return 0;
}
