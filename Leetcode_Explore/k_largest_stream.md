# Kth Largest Element in a Stream

## Problem

Design a class to find the kth largest element in a stream. Note that it is the kth largest element in the sorted order, not the kth distinct element.

Your KthLargest class will have a constructor which accepts an integer k and an integer array nums, which contains initial elements from the stream. For each call to the method KthLargest.add, return the element representing the kth largest element in the stream.

## Logic

Intuitively, I would try to deal with this question in a naive way by insertion and subsequent sorting which would probably be rejected due to a time complexity of O(n^2). This problem actually belongs to the domain of priority queues which I am yet to explore. For now, we used the approach of binary search tree where the worst time complexity for any of the 3 operations (insertion, search, deletion) is O(h) where h is the maximum depth of the tree. Since, we simultaneously need to insert and search for the kth largest number in the stream this is a possible solution. For the binary search tree an important feature is to keep track of the number of times a particular node has been surpassed which is done using the cnt class variable of the derived class Node. The most important aspects of this problem where defining the derived class, insertion operation and finding the kth largest value using the cnt variable.

## Important Points

- Insertion in Binary Search Tree

- Parameterized constructor of Derived class

- Search in Binary Search Tree
