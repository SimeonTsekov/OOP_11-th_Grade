#ifndef BOOK
#define BOOK

#include "media.h"
#include <string.h>
using std::string;

class Book : public Media{
	public:
		Book();
		Book(string name, string author, float price);
		Book(Book const &b);
};

#endif
