# Construct Binary Tree from Inorder and Postorder Traversal

## Problem

Given inorder and postorder traversal of a tree, construct the binary tree.

## Logic

Inorder traversal follows the pattern LDR, Postorder traversal follows the pattern LRD. This recurring scheme of traversal can be used to construct a binary tree using recursion. The base case being when only a single element exists in the input inorder and postorder vectors. The tough part was carefully splitting the vectors such that elements coincided and the base cases when the vectors were empty was used to return a NULL pointer.

## Important Points

- Recursion

- Inorder traversal

- Postorder traversal

- Array splitting
