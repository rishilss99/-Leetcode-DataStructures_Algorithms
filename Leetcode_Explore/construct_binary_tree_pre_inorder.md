# Construct Binary Tree from Preorder and Inorder Traversal

## Problem

Given preorder and inorder traversal of a tree, construct the binary tree.

## Logic

Using the pattern of preorder traversal which is DLR and inorder traversal which happens to be LDR a recursive pattern can be indentified to construct a binary tree identifying the L , D , R components during each recursive call. The base case happens to be the one where no element is present in the slice of the inorder or preorder vector in which case a NULL pointer is returned. Emphasis should be laid on proper vector slicing keep in mind the base cases and not exceeding the vector limits.

## Important Points

- Recursion

- Inorder and Preorder traversal

- Binary tree
