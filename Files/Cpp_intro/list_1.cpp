#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

class ExceptionFull{};
class ExceptionEmpty{};
class ExceptionTooBig{};


class Node{
	protected:
		int value;
		Node *Next;

	public:
		Node(int maximum){
			if(value > maximum){
				throw ExceptionTooBig();
			}
		}

		Node(){}
};

class List {
	Node *head;
	private:
		int size = 0;
		int capacity;
		int maximum;

	public:
	List(int capacity, int maximum){
		this -> capacity = capacity;
		this -> maximum = maximum;
		head = NULL;
	}

	bool is_empty() {
		return head == NULL;
	}

	void push(int value) {
		*new_node(maximum) = new Node;
		new_node->value = value;
		new_node->next = NULL;
		if (is_full()) {
			throw ExceptionFull();
		}
		if (is_empty()) {
			head = new_node;
			size = 1;
			return;
		}
		Node *current_node = head;
		while (current_node->next) {
			current_node = current_node->next;
		}
		current_node->next = new_node;
		size ++;
	}

	int pop() {
		if (is_empty()) { 
			throw ExceptionEmpty();
		}
		Node *current_node = head;
		Node *prev_node = NULL;
		while (current_node->next) {
			prev_node = current_node;
			current_node = current_node->next;
		}
		if (prev_node) {
			prev_node->next = NULL;
		} else {
			head = NULL;
		}
		return current_node->value;
	}

	bool is_full(){
		return size == capacity;
	}

};

int main() {
	List l1(15, 1000);

	try{
		for (int i = 0; i < 16; i++) {
			l1.push(1001);
			cout << i << endl;
		}
	} catch (ExceptionFull ex){
		cout << "The list is full." << endl;
	} catch (ExceptionTooBig ex){
		cout << "The value is too great." << endl;
	}

	try{
		while (!l1.is_empty()) {
			int value = l1.pop();
			cout << value <<endl;
		}
	} catch (ExceptionEmpty ex){
		cout << "The list is empty." << endl;
	}

	return 0;
}
