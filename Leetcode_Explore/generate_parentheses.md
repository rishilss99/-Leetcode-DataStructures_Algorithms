# Generate Parentheses

## Problem

Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

## Logic

The problem can be seen as forming a binary tree with the no. of levels = n. All lot of the nodes of the binary tree lead to no solution and hence we do not proceed. Using a recursive approach to form the binary tree and conditions to abandon when no feasible solution seems possible the problem is solved. Sort of backtracking approach is used.

## Important Points

- Recursion

- Understand difference between passing (i+1 and i++)

- Backtracking

- Void recursive function returns back to branching point

- Binary tree
