# Validate Binary Search Tree (Inorder)

## Problem

Given a binary tree, determine if it is a valid binary search tree (BST).

Assume a BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.

## Logic

Based on the property of binary search trees, we know that the inorder traversal should be in ascending order. Using inorder traversal based on recurison we can check whether elements are in the ascending order or not.

## Important points

- Inorder traversal

- Binary search tree

- Recursion