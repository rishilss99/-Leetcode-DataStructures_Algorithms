# Design Hashset

## Problem

Design a HashSet without using any built-in hash table libraries.

To be specific, your design should include these functions:

add(value): Insert a value into the HashSet.
contains(value) : Return whether the value exists in the HashSet or not.
remove(value): Remove a value in the HashSet. If the value does not exist in the HashSet, do nothing.

## Logic

The most important aspect of a hash table is the hash function. As explained in the introduction the most convenient hash function for integers in a pre-defined range is using a modulo function (%). For the given problem we have gone forward with an array of vectors as the choice of data structure. After finding the index using the hash function the given functionalities can be easily implemented just like in a vector. However, this is not the best choice of data structure for the  given problem. Instead of using an array of vectors we should use a bitset or a boolean array. Since, the operations involve only checking whether an element is present or not we can initialize a bitset with the given number of integers. When an element is added we set the corresponding index of the bitset and reset when it is removed. Important fact : Bool array is faster than bool vector.

## Important Points

- Hash table

- Hash function

- Vector

- Bitset