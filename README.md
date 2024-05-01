<h1 align="center" id="title">Sorted Linked List</h1>

## Introduction

This C++ template implements a sorted linked list data structure called SortedList. It allows insertion of elements in sorted order and provides operations such as displaying the list, finding the maximum and minimum elements, merging with another sorted list, and finding the intersection with another sorted list.

## Node Class

The `Node` class represents individual nodes of the linked list. Each node contains a value of type `T` and a pointer to the next node in the list.

## SortedList Class

The `SortedList` class implements operations on the sorted linked list such as insertion, display, merging, finding maximum and minimum elements, and finding the intersection with another sorted list.

### Public Methods
- **Constructor**: Initializes an empty sorted linked list.
- **insert(T val)**: Inserts a value into the sorted list while maintaining the sorted order.
- **display()**: Displays the elements of the sorted list.
- **merge(SortedList<T> t2)**: Merges the current sorted list with another sorted list.
- **getMax()**: Returns the maximum element in the sorted list.
- **getMin()**: Returns the minimum element in the sorted list.
- **intersection(SortedList<T> t2)**: Finds the intersection of the current sorted list with another sorted list.

### Private Helper Methods
None.

## Usage

Instantiate the `SortedList` class with the desired data type, then use its methods to perform operations on the sorted linked list.

## Detailed Explanation of Key Functions

### `insert(T val)`
- **Description**: Inserts a value into the sorted list while maintaining the sorted order. If the list is empty, the value becomes the first element. If the value is less than the head value, it becomes the new head. If the value is greater than the tail value, it becomes the new tail. Otherwise, it traverses the list to find the appropriate position for insertion.
- **Parameters**: 
  - `val`: The value to insert into the sorted list.

### `merge(SortedList<T> t2)`
- **Description**: Merges the current sorted list with another sorted list `t2`. It iterates through the nodes of `t2`, inserting each node's value into the current list while maintaining the sorted order.
- **Parameters**: 
 - `t2`: Another sorted list to merge with the current list.

### `intersection(SortedList<T> t2)`
- **Description**: Finds the intersection of the current sorted list with another sorted list `t2`. It iterates through both lists simultaneously, comparing values. If a common value is found, and it's not already present in the result list, it's inserted into the result list.
- **Parameters**: 
  - `t2`: Another sorted list to find the intersection with.
- **Returns**: 
  - A new sorted list containing the intersection of the two input lists.
