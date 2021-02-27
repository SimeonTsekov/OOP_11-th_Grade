#include "key.h"

template<class T, class T1, class T2, class No, class No1>
Key::Key() : key(""), node(NULL);

template<class T, class T1, class T2, class No, class No1>
Key::Key(T key, Node *node) : key(key), node(node);

template<class T, class T1, class T2, class No, class No1>
Key::Key(Key const &k) : key(k.key), node(k.node);

template<class T, class T1, class T2, class No, class No1>
T Key::getKey(){
	return key;
}
