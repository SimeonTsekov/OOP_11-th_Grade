#include "payment.h"
#include "media.h"
#include <vector>
#include <string>
using std::vector;
using std::string;

Payment::Payment() : start_date(""), end_date(""), is_payed(false) {}

Payment::Payment(string start_date, string end_date, vector<Media> media, bool is_payed) : 
	start_date(start_date), 
	end_date(end_date), 
	media(media),
	is_payed(is_payed) {}

Payment::Payment(Payment const &p) : 
	start_date(p.start_date),
	end_date(p.end_date),
	media(p.media),
	bill(p.bill),
	is_payed(p.is_payed) {}

void Payment::set_payed(bool value){
	while(!media.empty()){
		Media popped;
		popped = media.back();
		media.pop_back();
		bill += popped.bill();
	}

	is_payed = value;
}

void Payment::add_media(Media media){
	this->media.push_back(media);
}
