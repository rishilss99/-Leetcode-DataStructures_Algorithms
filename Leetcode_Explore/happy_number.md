# Happy Number

## Problem

Write an algorithm to determine if a number n is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

Return True if n is a happy number, and False if not.

## Logic

This is an interesting application of hashset. For the given problem we keep iterating through the squares of the digits of the obtained number until we come across 1 or one of the numbers repeat itself. The crucial component of this problem is the data structure used to keep track of already occured numbers. In a naive approach, I would have considered using an array. But now that I know better the time complexity for searching in an array is O(n) as opposed to O(1) for a hashset. Self-balancing binary search trees might also be a good alternative but for now we stick to using the hashset.

## Important Points

- Hash set

- Duplicates