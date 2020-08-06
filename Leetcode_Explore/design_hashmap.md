# Design Hashmap

## Problem

Design a HashMap without using any built-in hash table libraries.

To be specific, your design should include these functions:

put(key, value) : Insert a (key, value) pair into the HashMap. If the value already exists in the HashMap, update the value.
get(key): Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key.
remove(key) : Remove the mapping for the value key if this map contains the mapping for the key.

## Logic

The hash function is the normally used modulo operator(%) and the data structure used is a map. Though using a map simplifies the solution it should not be considered a good solution. The best approach for this question is using a linked list for the bucket collision resolution i.e., we use an array/vector of linked lists. For insertion once we identify the index using the hash function we insert or replace the node with the given value at the end of the list. For searching and deletion once we reach the hash index we iterate the linked list searching for the given key. The in-built list data structure serves the purpose well.

## Important Points

- Hash table

- Map

- Linked List