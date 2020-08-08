# Path Sum III

## Problem

You are given a binary tree in which each node contains an integer value.

Find the number of paths that sum to a given value.

The path does not need to start or end at the root or a leaf, but it must go downwards (traveling only from parent nodes to child nodes).

The tree has no more than 1,000 nodes and the values are in the range -1,000,000 to 1,000,000.

## Logic

I tried to come up with a solution but failed after clearing 86 of 126 test cases. In all fairness the logic wasn't properly programmed considering the corner cases. The important piece of the problem is understanding that you need to find paths that include the root as well as paths that don't include the root. Hence, this involves 3 traversals : 1)With the root node included 2)From left child with root node excluded 3)From right child with root node excluded. An important variation of this question is the printing out the list of all such paths. The recursive idea remains the same all you need to do is use a vector of lists to keep track the paths as you go along. This is a very important question from interview point of view.

## Important Points

- Binary tree

- Preorder traversal

- Recursion
