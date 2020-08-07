# Intersection of Two Arrays

## Problem

Given two arrays, write a function to compute their intersection.

Each element in the result must be unique.
The result can be in any order.

## Logic

As the previous problems based on finding duplicates, this problem strongly resonates with the theme of using a hashset to find duplicates. The approach here involves adding the elements of the first vector into the hashset. Then we go through the second vector and erase the elements which are also present in the second vector and hashset. This leaves us with a set of elements from the first vector which aren't present in the first vector. So we finally iterate through the first vector and add any elements not present in the hashet to the result vector. The time complexity is linear O(m+n).

## Important Points

- Hash set

- Finding duplicates