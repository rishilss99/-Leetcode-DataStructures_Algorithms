# Contains Duplicate II

## Problem

Given an array of integers and an integer k, find out whether there are two distinct indices i and j in the array such that nums[i] = nums[j] and the absolute difference between i and j is at most k.

## Logic

The problem is a typical aggregate all the information by key scenario of a hashmap. The time complexity turns out to be linear O(n) for the approach used. As we iterate over the array we add elements that don't exist already to the hashmap. If the element already exists we check if the difference of the indices of the current element and the previously stored element is less than or equal to the maximum given k. If it satisfies the condition we return true else if we finish iterating the entire array and don't find the element we return false.

## Important Points

- Hashmap

- Array