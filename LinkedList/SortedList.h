#pragma once

#include<iostream>

template<class T>
class Node
{
public:
	T val;
	//pointer to the next node
	Node<T>* next;
	Node();
	Node(T);
};

template<class T>
class SortedList
{
private :
	Node<T>* head;
	Node<T>* tail;
public:
	int size;
	SortedList();
	void insert(T v);
	void display();
};

