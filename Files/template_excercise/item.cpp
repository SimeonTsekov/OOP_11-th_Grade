#include "item.h"

Item::Item() : name("") {}
Item::Item(string name) : name(name) {}
Item::Item(Item const &i) : name(i.name) {}
