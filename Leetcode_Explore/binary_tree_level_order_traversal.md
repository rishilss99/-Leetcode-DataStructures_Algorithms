# Binary Tree Level Order Traversal

## Problem

Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

## Logic

We solve this using an iterative approach rather than a recursive approach. At each node we insert the left and right children of the node into a queue. Once all the nodes of a level have been dealt with we shift to the children of the nodes. For each node we first pop it and then insert its value into the sub-vector which is pushed into the result vector after a complete iteration of the current queue size.

## Important Points

- Level order Binary Tree traveral

- Recursion to Iteration

- Queue based iteration through tree