# Validate Binary Search Tree (Recursion)

## Problem

Given a binary tree, determine if it is a valid binary search tree (BST).

Assume a BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.

## Logic

This is a more generalized approach which uses the fact the left subtree is supposed to have lower values than the node and the right subtree is supposed to have higher values than node. Since, the values should be strictly increasing or decreasing we need to use upper and lower integers to track that the lower and upper limits are not exceeded. A specific condition needs to be set to ensure that we know whether the lower and upper limits have been actually set or not. This is necessary for conditions such as the border case where the node is the INT_32MAX.

## Important points

- Binary search tree

- Recursion