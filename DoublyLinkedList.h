/*
 * DoublyLinkedList.h
 *
 *  Created on: Apr 29, 2018
 *      Author: hpatel797
 */
#include <iostream>
#ifndef DOUBLYLINKEDLIST_H_
#define DOUBLYLINKEDLIST_H_

class Node {
/*public:
	Node() {}
	void set_value(int x) { value=x; }
	void prev_node(Node *x) { prev=x; }
	void next_node(Node *x) { next=x; }
	int get_val() const { return this->value; }
	Node *get_prev_node() { return this->prev; }
	Node *get_next_node(){ return this->next; }*/
public:
	int value;
	Node *prev;
	Node *next;
};

class DoublyLinkedList {

public:
	Node *headptr; Node *tailptr;
	DoublyLinkedList()
	{
		headptr = NULL;
		tailptr = NULL;
	}
	Node* getnode();
	void insertion();
	void insertlast();
	void insert_after(int x);
	//void del (int key);
	void deletion();
	void deletelast();
	void print();
};

#endif /* DOUBLYLINKEDLIST_H_ */
