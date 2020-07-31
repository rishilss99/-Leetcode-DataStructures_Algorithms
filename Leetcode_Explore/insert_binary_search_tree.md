# Insert Binary Search Tree

## Problem

Given the root node of a binary search tree (BST) and a value to be inserted into the tree, insert the value into the BST. Return the root node of the BST after the insertion. It is guaranteed that the new value does not exist in the original BST.

Note that there may exist multiple valid ways for the insertion, as long as the tree remains a BST after insertion. You can return any of them.

## Logic

The problem is similar to searching in a binary search tree. In fact the first step is to recursively search for a NULL node where the target value can be inserted in a new node. We start from the root and following the property of the binary search tree recursively try to find the child node for the insertion of the new node.

## Important Points

- Recursion

- Binary search tree

- Insertion