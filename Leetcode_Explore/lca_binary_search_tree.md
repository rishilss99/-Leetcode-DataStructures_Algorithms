# Lowest Common Ancestor of a Binary Search Tree

## Problem

Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST.

According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”

## Logic

Following the pattern of the previous questions, I came up with a rather naive approach to the question. Though the strategy applied is a generalized one which can be extended to the lowest common ancestor problem for a binary tree, in this particular case the onus was on exploiting the properties of the binary search tree which I completely missed. I solved it by using a stack to keep track of the nodes as tree is traversed twice to find the target nodes. Once the stacks are obtained they are made equal in size by popping elements off the larger stack. Once both stacks are of equal size, we pop both stacks simultaneously until we reach a common node. The better solution relying on the properties of the binary search tree would have been to traverse the tree based on both the target values in 3 ways : 1. If p->val > root->val && q->val > root->val : go to root->right 2. If p->val < root->val && q->val < root->val : go to root->left 3. If either p->val or q->val greater than root->val and the other is smaller than root->val : this is the lca

## Important Points

- Stack

- Traversal of Binary search tree

- Recursion