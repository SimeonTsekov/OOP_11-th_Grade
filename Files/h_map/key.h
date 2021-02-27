#ifndef KEY_H
#define KEY_H

#include "node.h"


template<class T, class T1, class T2, class No, class No1>
class Key{
	protected:
		T key;
		Node<No> *node;
	public:
		Key();
		Key(T1 key, Node<No1> *node);
		Key(Key const &k);

		T2 getKey();
};

#endif
