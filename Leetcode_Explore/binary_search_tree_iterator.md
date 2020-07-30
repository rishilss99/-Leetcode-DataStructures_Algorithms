# Construct Binary Tree from Preorder and Inorder Traversal

## Problem

Implement an iterator over a binary search tree (BST). Your iterator will be initialized with the root node of a BST.

Calling next() will return the next smallest number in the BST.

## Logic

Using the inorder tree traversal iteration template we are able to complete the next() functionality of the binary tree iterator. The hasnext() functionality is simply implemented using the current pointer and whether the stack is empty or not. Checking the condition of the stack is an important part of this program.

## Important Points

- Inorder traversal using stack

- Binary search tree