# Perfect Squares (Backtracking)

## Problem

Given a positive integer n, find the least number of perfect square numbers (for example, 1, 4, 9, 16, ...) which sum to n.

## Logic

This problem can be solved using multiple approaches. The solution that comes most intuitively to me is backtracking. We try to fit in squares of number that are less then the floored square of the given number 1 by 1. TO speed up a process we ignore cases where the number of steps to sum up to the given number n take more steps then previous minimum steps. This helps avoid cases where the entire given number is expressed as a sum of 1s. 

## Important Points

- Backtracking

- Recursion

- Constraint Satisfaction
