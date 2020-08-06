# Find All Duplicates in an Array

## Problem

Given an array of integers, 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

Find all the elements that appear twice in this array.

Could you do it without extra space and in O(n) runtime?

## Logic

To be honest, I was quite happy that I was able to come up with a solution with reduced time complexity rather than the naive approach I would have taken up before. I used the BST for the question and though the solution did get accepted it is not at all close to even the average solutions and not space efficient. For my approach, as we iterate through the array we insert elements into a BST and if the previous key value does not exist we return true and insert a node and if it does exist we return false and add the element to the final vector of duplicate elements. The best approach to this problem involves considering the constraint i.e., each element is repeated a maximum of 2 times and the max. range of elements is equal to the size of the array. Hence, considering both the approaches the solution is that when we iterate through the array we go to the index pointed by the element and check if its negative or not. If its not negative we set it to negative and if it is then we add it to the result vector. Only the elements that have been made negative the first time are the ones that are repeated.

## Important 

- Binary Search Tree

- Array Manipulation

