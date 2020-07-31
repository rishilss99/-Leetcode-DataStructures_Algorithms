# Delete Binary Search Tree

## Problem

Given a root node reference of a BST and a key, delete the node with the given key in the BST. Return the root node reference (possibly updated) of the BST.

Basically, the deletion can be divided into two stages:

Search for a node to remove.
If the node is found, delete the node.
Note: Time complexity should be O(height of tree).

## Logic

The deletion operation for the binary search tree is more difficult to implement than both the searching and the insertion operations. It can be divided into 2 components that need to be handled individually. First, we need to find the target node that we wish to delete which is equivalent to the searching operation. Second, we need to delete the target node which can basically be classified into 3 cases : 1) When the node has no child. 2) When the node has 1 child. 3) When the node has 2 children. The first 2 cases can be easily tackled but the 3rd case leads to complications which may need to be solved using a recursive call to the delete function.

## Important Points

- Recursion

- Deletion in Binary search tree

- Inorder traversal