# Two Sum

## Problem

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

## Logic

The naive way of approach I would have used before would have been a nested for loop to check for each element if a complementary element in the vector sums up to the given target. Now with the use of hashmap this can be done highly efficiently with a two pass or one pass approach. Though both approaches have the same worst time complexity of O(n), it is obvious the one pass approach is more time efficient. As we iterate through the vector of elements we add each element to the hashmap and consequently check if target - x is already present in the hashmap. If we find target-x to be present in the hashmap already we append the indices of the already present element and the current element to the result vector and return the answer.

## Important points

- Hashmap

- Mapping relations