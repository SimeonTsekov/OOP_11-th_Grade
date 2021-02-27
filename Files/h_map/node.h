#ifndef NODE_H
#define NODE_H

template<class N>
class Node{
	protected:
		N value;
	public:
		Node();
		Node(N value);
		Node(Node const &n);

		N getValue();
};

#endif
