# Single Number

## Problem

Given a non-empty array of integers, every element appears twice except for one. Find that single one.

Note:

Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

## Logic

This problem can be solved using hashmap considering the overall theme of the question concerns duplicates. However, as the note states there is a more efficient approach which involves XORing a number with value 0 with every element in the vector. Since, we know each element is repeated twice except one element we get the single element as the final answer after we finish XORing the entire list.

## Important Points

- Bit manipulation

- XOR operator
