# Populating Next Right Pointers in Each Node (Recursion)

## Problem

You are given a perfect binary tree where all leaves are on the same level, and every parent has two children. Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to NULL.

Initially, all next pointers are set to NULL.

## Logic

Since, a perfect binary tree is given we can exploit the structure for the problem. This can be broken down into connection of 3 components 1. left->tree(left->left_subtree to left->right_subtree) 2. left->tree to right->tree(left->right_subtree to right->left_subtree) 3. right->tree(right->left_subtree to right->right_subtree). Since, for a perfect binary tree all the 3 components are present we are able to pull this off using a simple recursive approach.

## Important Points

- Recursion

- Level order traversal

- Perfect binary tree

