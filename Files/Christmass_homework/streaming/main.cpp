#include "streaming.h"

int main(){
	Streaming stream;

	User u("Bob", "bob@gmail.com");

	stream.add_user(u);

	Game g("Hearthstone", "Blizzard", 100);

	stream.add_media(g);

	vector<Media> m = stream.get_media();

	Payment p = stream.get_last_payment(u);

	stream.check_payment(u);

	Media found = stream.search_media(g);

	return 0;
}
