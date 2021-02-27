#ifndef MEDIA
#define MEDIA

#include <string>
using std::string;

class Media{
	protected:
		string name;
		string author;
		float price;
	public:
		Media();
		Media(string name, string author, float price);
		Media(Media const &m);

		virtual float bill();

		int operator==(Media m);
};

#endif
