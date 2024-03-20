#include "SortedList.h"
#include<iostream>
using namespace std;

template<class T>
Node<T>::Node() {
	val = 0;
	next = 0;
}

template<class T>
Node<T>::Node(T v) {
	val = v;
	next = 0;
}
template<class T>
SortedList<T>::SortedList(){
	head = tail = 0;
	size = 0;
}

template<class T>
void SortedList<T>::insert(T v) {
	Node<T>* newNode = new Node<T>(v);
	if (size == 0) {
		head = tail = newNode;
		++size;
		return;
	}
	if (newNode->val< head->val) {
		newNode->next = head;
		head = newNode;
		++size;
		return;
	}
	if (newNode->val > tail->val) {
		tail->next = newNode;
		tail = newNode;
		++size;
		return;
	}
	Node<T>* temp = head;
	while (temp->val < tail->val and temp->next->val < newNode->val ) {
		temp = temp->next;
		if (temp->val == tail->val)
			break;
	}

	newNode->next = temp->next;
	temp->next = newNode;
	++size;
	return;
}

template<class T>
void SortedList<T>::display() {
	Node<T>* pointer = head;
	int cnt = size;
	while (cnt--) {
		cout << pointer->val << endl;
		pointer = pointer->next;
	}
}