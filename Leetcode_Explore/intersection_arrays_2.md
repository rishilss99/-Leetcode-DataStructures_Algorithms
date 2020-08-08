# Intersection of Two Arrays II

## Problem

Given two arrays, write a function to compute their intersection.

Note:

Each element in the result should appear as many times as it shows in both arrays.
The result can be in any order.

## Logic

We solved the easier version of this problem earlier on using a hashset. Since in this problem we need to insert the total number of occurences of repeating elements we need to use a hashmap instead of a hashset. As we iterate over the shortest array first we insert elements into the hashmap along with inserting the number of occurences in the 0th index of the key array. Now we iterate over the longer array and insert elements into the hashmap along with inserting the number of occurences in the 1st index of the key array. Finally we iterate over the hashmap and for the elements with the 1st index of value not equal to 1 add the corresponding hashmap elements to the result vector the minimum number of times.

## Important Points

- Hashmap

- Mapping Relations