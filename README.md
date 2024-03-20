# Rebo - Implementation of a sorted linked list for a data structure task

## Features

1. **Insertion**: Seamlessly insert elements into the sorted linked list while preserving the sorted order.
2. **Merging**: Merge 2 sorted linked lists into a single sorted linked list efficiently.
3. **Intersection**: Find the intersection of two sorted linked lists.
4. **Get Minimum**: Obtain the minimum element from the sorted linked list in constant time.
5. **Get Maximum**: Obtain the maximum element from the sorted linked list in constant time.
6. **display**: is a void function that prints all values in the list.

## samples you can try it
### merge function
```cpp
#include <iostream>
#include "SortedList.cpp"
using namespace std;
int main() {
	SortedList<char> s, t;
	s.insert('b');
	s.insert('g');
	s.display();
	s.display();
	t.insert('a');
	t.insert('b');
	t.insert('z');
	s.merge(t);
	s.display();
}
```
### intersection function
```cpp
#include <iostream>
#include "SortedList.cpp"
using namespace std;
int main() {
	SortedList<char> s, t;
	s.insert('b');
	s.insert('g');
	s.insert('a');
	s.insert('a');
	s.display();
	s.display();
	t.insert('a');
	t.insert('b');
	t.insert('z');
	SortedList<char> Z = s.intersection(t);
	Z.display();
}
```
