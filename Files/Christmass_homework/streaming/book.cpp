#include "book.h"
#include <string>
using std::string;

Book::Book() : Media() {}

Book::Book(string name, string author, float price) : Media(name, author, price) {}

Book::Book(Book const &b) : Media(b.name, b.author, b.price) {}
