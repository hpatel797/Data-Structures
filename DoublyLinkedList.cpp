using namespace std;
#include "DoublyLinkedList.h"

Node* DoublyLinkedList::getnode(){
	Node *newnd; int val;
	newnd = new Node;
	cout << "Enter value: ";
	cin >> val;
	newnd->value = val;
	newnd->next = NULL;
	newnd->prev = NULL;
	return (newnd);
}
void DoublyLinkedList::insertion(){
	Node *temp;
	temp = getnode();
	if (headptr == NULL) headptr = tailptr = temp;
	else{
		temp->next=headptr;
		headptr->prev=temp;
		headptr = temp;
	}
	cout << headptr->value << " ...inserted" << endl;
	print();
}
void DoublyLinkedList::insertlast(){
	Node *temp; temp = getnode();
	if (headptr == NULL) headptr = tailptr = temp;
	else{
		tailptr->next=temp;
		temp->prev=tailptr;
		tailptr = temp;
	}
	cout << tailptr->value << " ...inserted" << endl;
	print();
}
void DoublyLinkedList::insert_after(int x){
if (headptr == NULL) cout << "No elements..." << endl;
else{



}




}
void DoublyLinkedList::deletion(){
	if (headptr == NULL) cout << "No elements..." << endl;
	else{
		cout << headptr->value << " to be deleted..." << endl;
		if (headptr == tailptr) headptr=tailptr=NULL;
		else{
			Node *temp;
			temp = headptr;
			headptr=headptr->next;
			headptr->prev=NULL;
			delete temp;
		}

	}
	print();
}
void DoublyLinkedList::deletelast(){
	if (headptr == NULL) cout << "No elements..." << endl;
	else{
		Node *temp;
		temp = tailptr;
		tailptr = tailptr->prev;
		delete temp;
		tailptr->next=NULL;
	}
	print();
}
void DoublyLinkedList::print(){
	if (headptr == NULL) cout << "No elements to display" << endl;
	else{
		Node *temp = headptr;
		cout << "Linked List contains: ";
		while (temp != NULL){
			cout << temp->value << ", ";
			temp=temp->next;
		}
	}
}
