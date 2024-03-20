#include "SortedList.h"
#include<iostream>
#include<assert.h>
using namespace std;

template<class T>
Node<T>::Node() {
	val = 0;
	next = 0;
}
template<class T>
Node<T>::Node(T v) {
	val = v;
	next = NULL;
}
template<class T>
SortedList<T>::SortedList(){
	head = tail = NULL;
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
		tail->next = NULL;
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
	while (pointer!=NULL) {
		cout << pointer->val << ' ';
		pointer = pointer->next;
	}
	cout << "\n";
}
template<class T>
void SortedList<T>::merge(SortedList<T> t2) 
{
	auto pointer = t2.head;
	while (pointer != NULL) {
		this->insert(pointer->val);
		pointer = pointer->next;
	}
	t2.head = head;
	t2.tail = tail;
}
template<class T>
T SortedList<T>::getMax()
{
	assert(tail != NULL);
	return (tail->val);
}

template<class T>
T SortedList<T>::getMin()
{
	assert(head != NULL);
	return (head->val);
}

template<class T>
SortedList<T> SortedList<T>::intersection(SortedList<T> t2)
{
	SortedList<T> comman;
	auto pointer1 = head;
	auto pointer2 = t2.head;
	while (pointer1!=NULL and pointer2!=NULL){
		if (pointer1->val == pointer2->val and (comman.size==0 or (comman.size and comman.getMax()!=pointer1->val ) )) {
			comman.insert(pointer1->val);
			pointer1 = pointer1->next;
			pointer2 = pointer2->next;
			continue;
		}
		if (pointer1->val < pointer2->val)
			pointer1 = pointer1->next;
		else
			pointer2 = pointer2->next;
	}
	return comman;
}