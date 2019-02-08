#include "DoublyLinkedList.h"
#include "priority_linkedlist.cpp"

#include <iostream>
using namespace std;
//you would need to iterate the linked list because since the headptr node is private,
//to get access to it from the main, you would need to iterate over it to display the list.

//you dont need to iterate over the priority linked list since the list is already ordered
// in terms of given priority.

//for the push function of priority_linked list, the running time would be O(n) since you are
// linearly comparing the values as you go through the list.
//the o notation for pop and top functions can be O(lg n) since you can keep work your way
// through the list by going through the middle and comparing the values to the left, and right
//and then making new boundaries.

int main(){
		DoublyLinkedList l; priority_linkedlist pl;
		int elements, choice;
		cout << "How many elements to insert? ";
		cin >> elements;
		for (int i = 0; i < elements; ++i){
			cout << "\nPress 1 To insert at beginning and 2 to insert at last: ";
			cin >> choice;
			if (choice == 1){
				l.insertion();
			}
			if (choice == 2){
				l.insertlast();
			}
		}

		cout << "\nEnter element after which you want to insert: ";
		int rem; cin >> rem;
		l.insert_after(rem);

		cout << "\nHow many elements to remove? ";
		int elementsremov, choice2;
		cin >> elementsremov;
		for (int i = 0; i < elementsremov; ++i){
			cout << "\nPress 1 To remove at beginning and 2 to remove at last: ";
			cin >> choice2;
			if (choice2 == 1){
				l.deletion();
			}
			if (choice2 == 2){
				l.deletelast();
			}
		}
		cout << "\nProvide a key to delete an element: ";
		int key; cin>>key;
		//l.del(key);

		cout << "Sorting by Priority...Enter value: ";
		int priority; cin >> priority;
		pl.push(priority);



		return 0;
}
