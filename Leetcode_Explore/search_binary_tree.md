# Search in a Binary Search Tree

## Problem

Given the root node of a binary search tree (BST) and a value. You need to find the node in the BST that the node's value equals the given value. Return the subtree rooted with that node. If such node doesn't exist, you should return NULL.

## Logic

Using the inorder binary tree traversal we are able to search the respective node with the value equal to the given target value. Exploiting the property of the binary search tree we are able to decide which subtree to search and more importantly the time complexity breaks down to O(h) where h is the maximum depth of the binary search tree. This is because we only search as deep as the maximum depth of the tree and return NULL if target value not found.

## Important Points

- Recursion

- Binary search tree operation

- Inorder traversal